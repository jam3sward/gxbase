/**************************************************************************\
 *
 * This file is part of the GXBase graphics library.
 * Copyright (C) 2003-2006 James Ward, Department of Computer Science,
 * University of Hull. All rights reserved.
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 *
 \**************************************************************************/

#include "port.h"

#ifdef __WIN32__

#include "winex_w32.h"
#include "Main.h"
using namespace gxbase;

//-----------------------------------------------------------------------------

// define GLAPP_CHILDREN=1 externally to enable use of child windows
#if (GLAPP_CHILDREN==1)
	#define GLAPP_CHILDREN
#elif (GLAPP_CHILDREN==0)
	#undef  GLAPP_CHILDREN
#else
	// default: don't use child windows
	#undef  GLAPP_CHILDREN
#endif

//-----------------------------------------------------------------------------

bool WindowEx::HaveContext() const
{
	return m_hdc != 0;
}

/**
 * Returns true if it is safe to change the pixel format at
 * this point, false otherwise.
 */
bool WindowEx::Safe2ChangePF() const {
	if (!m_bOnCreate)
		return true;
	else {
		// not safe to change pixel format from within
		// the GLWindow::OnCreate() handler
		static bool warned=false;
		if (!warned) {
			// warn the user
			App::MsgPrintf(
				"Error: You cannot change pixel format in GLWindow::OnCreate\n"
				"(cannot change depth/alpha/stencil/accum bits, or any setting\n"
				"that would recreate the window)"
			);
			warned=true;
		}
		return false;
	}
}//Safe2ChangePF

//-----------------------------------------------------------------------------

/**
 * Enable or disable the 'stay on top' property of the window. This
 * works by adding or removing the topmost extended style.
 */
bool WindowEx::SetOnTop(bool bTop)
{
	if (!m_hwnd) {
		m_bOnTop = bTop;
		return true;
	}

	if (bTop) {
		if (!SetWindowPos(
			m_hwnd, HWND_TOPMOST, 0,0,0,0, SWP_NOMOVE | SWP_NOSIZE
		)) return false;
	} else {
		if (!SetWindowPos(
			m_hwnd, HWND_NOTOPMOST, 0,0,0,0, SWP_NOMOVE | SWP_NOSIZE
		)) return false;
	}

	// record state (in case window is recreated: to preserve state)
	m_bOnTop = bTop;
	return true;
}

bool WindowEx::GetOnTop() const
{
	// if we don't have a window yet, return cached value
	if (!m_hwnd) return m_bOnTop;

	// look at window style
	DWORD dwExStyle = GetWindowLong(m_hwnd, GWL_EXSTYLE);
	// return true if window has top-most extended style
	return ((dwExStyle & WS_EX_TOPMOST) != 0);
}

//-----------------------------------------------------------------------------

/**
 * Set the pixel format for the OpenGL window
 */
bool WindowEx::SetupPFD() {
	if (!m_hdc) return false;

	// create and fill in a pixel format descriptor
	PIXELFORMATDESCRIPTOR pfd;
	memset(&pfd,0,sizeof(pfd));
	pfd.nSize	 = sizeof(pfd);		// size of structure
	pfd.nVersion = 1;				// version number
	pfd.dwFlags  =
		PFD_DRAW_TO_WINDOW |		// support window
		PFD_SUPPORT_OPENGL;			// support OpenGL
	
	if (m_mode & GLAPP_DOUBLE)
		pfd.dwFlags |= PFD_DOUBLEBUFFER;
	
	if (m_mode & GLAPP_RGBA)
		pfd.dwFlags |= PFD_TYPE_RGBA;
	else
		pfd.dwFlags |= PFD_TYPE_COLORINDEX;

	if (m_mode & GLAPP_STEREO)
		pfd.dwFlags |= PFD_STEREO;

	pfd.cColorBits = (BYTE)m_cbits;		// colour buffer bits
	pfd.cDepthBits = (BYTE)m_dbits;		// depth buffer bits
	pfd.cStencilBits = (BYTE)m_sbits;		// stencil buffer bits
	pfd.cAlphaBits = (BYTE)m_albits;		// alpha buffer bits
	pfd.cAccumBits = (BYTE)m_acbits;		// accum buffer bits
	pfd.iLayerType = PFD_MAIN_PLANE;// used only by old OpenGL versions

	// find the closest match for the pixel format described above
	int nPix = ChoosePixelFormat(m_hdc, &pfd);

	// returns zero if it can't find a suitable pixel format
	if (!nPix) return 0;
 
	// apply the pixel format to our device context
	// note: you can only do this once for any given window
	return ( SetPixelFormat(m_hdc, nPix, &pfd) == TRUE );
}//SetupPFD

//-----------------------------------------------------------------------------

/**
 * Create an OpenGL drawing context
 */
bool WindowEx::CreateGL() {
	// window style
	DWORD
		dwStyle =
			WS_OVERLAPPEDWINDOW |	// flags
			WS_CLIPCHILDREN		|	// required: for OpenGL
			WS_CLIPSIBLINGS,		// required: for OpenGL
		dwExStyle =
			WS_EX_APPWINDOW |		// visible on task bar
			WS_EX_WINDOWEDGE;		// window has border with raised edge

	int
		x = m_nXPos,
		y = m_nYPos,
		w = CW_USEDEFAULT,
		h = CW_USEDEFAULT;

	// do we want topmost property?
	if (m_bOnTop) dwExStyle |= WS_EX_TOPMOST;

	// parent window (or NULL for top-level)
	HWND hParent = NULL;

	if ( !IsMainWnd() ) {
		// all other windows are children of hidden window
		// (this prevents them appearing on taskbar)
		hParent = Main::Get()->GetHiddenWnd();
		if (hParent) {
			dwStyle |=  WS_CHILD;
			dwStyle &= ~WS_POPUP;
		}
	}

	// do we want full screen mode?
	if (m_bWantFull) {
		// creating a full-screen window

		// remove caption, border and sizing frame
		//dwStyle &= ~(WS_CAPTION | WS_SIZEBOX);
		dwStyle = WS_POPUP | WS_CLIPCHILDREN | WS_CLIPSIBLINGS;

		DEVMODE dm;
		// query display settings
		if (!EnumDisplaySettings(
			NULL,					// current display device
			ENUM_CURRENT_SETTINGS,	// current display settings
			&dm)
		) {
			dbg_printf("EnumDisplaySettings failed\n");
			dm.dmPelsWidth  = 640;	// fallback
			dm.dmPelsHeight = 480;
		}

		// window size: fill screen
		x = 0;
		y = 0;
		w = dm.dmPelsWidth,
		h = dm.dmPelsHeight;

		// JWW 16/11/03 set these for later restore
		m_oldRect.left  = 0;
		m_oldRect.top   = 0;
		m_oldRect.right = (m_nWidth  != CW_USEDEFAULT)?m_nWidth :320;
		m_oldRect.bottom= (m_nHeight != CW_USEDEFAULT)?m_nHeight:240;

		m_bIsFull=true;
	} else {
		// creating a window (not fullscreen)
		if ((m_nWidth != CW_USEDEFAULT) && (m_nHeight != CW_USEDEFAULT)) {
			// rect contains dimensions of desired client area
			RECT rc;
			rc.left   = 0;
			rc.top    = 0;
			rc.right  = m_nWidth;
			rc.bottom = m_nHeight;

			// calculate window size to produce desired client area
			AdjustWindowRect(&rc, dwStyle, FALSE);
			w = rc.right  - rc.left,
			h = rc.bottom - rc.top;
		}
	}

	// create a window
	m_hwnd = CreateWindowEx(
		dwExStyle,							// extended style
		GLAPP_CLASSNAME,					// the class name (defined above)
		m_title.c_str(),					// title of window (the caption)		
        dwStyle,							// window style (see above)
		x, y,								// position
		w, h,								// size
		hParent,							// parent window
        NULL,								// menu   (none)
		Main::Get()->GetInstanceHandle(),	// application instance handle
		this								// window creation data (our WindowEx*)
	);
 
	// abort if we failed to create the window
    if (!m_hwnd) {
		err_printf("Failed to create window\n");
		return false;
	}

	// store window DC
	m_hdc = GetDC(m_hwnd);

	// before creating an OpenGL context, we must set the pixel format
	// note: you can't change the pixel format on a window once set
	if (!SetupPFD()) {
		err_printf("Failed to set pixel format\n");
		return false;
	}

	// create OpenGL rendering context
	m_hglrc = wglCreateContext(m_hdc);
	// did it fail?
	if (!m_hglrc) {
		err_printf("Failed to create GL context\n");
		return false;
	}

	// JWW 16/11/03 setup palette if needed
	SetupPalette();

	// attempt to make current
	if (!MakeCurrent()) {
		err_printf("Failed to make GL context current\n");
		return false;
	}

#ifdef __WIN32__
	// have context creation attributes been supplied?
	if ( m_attribs.size() > 0 ) {
		// yes: load the extensions, and check to see if the
		// ARB create context function is available
		glex gx;
		if ( gx.Load() && gx.Supports("WGL_ARB_create_context") )
		{
			// convert attributes to a simple integer list, leaving extra
			// space for null terminator
			int *attribs = new int[ m_attribs.size()+1 ];
			for (unsigned i=0; i<m_attribs.size(); ++i)
				attribs[i] = m_attribs[i];

			// null terminate the array
			attribs[ m_attribs.size() ] = 0;

			// create new attributed context
			HGLRC hrcNew = gx.wglCreateContextAttribsARB( m_hdc, 0, attribs );

			// delete temporary attributes
			delete [] attribs;
			attribs = 0;

			// delete the original context
			MakeCurrent(false);
			wglDeleteContext( m_hglrc );

			// replace with new context
			m_hglrc = hrcNew;

			// attempt to make current
			if ( !MakeCurrent() ) {
				err_printf("Failed to make attributed GL context current\n");
				return false;
			}
		}
	}//if (using attribs)
#endif//__WIN32__

	// show the window
    if (m_bShow) ShowWindow(m_hwnd, SW_SHOW);

	// store initial size
	RECT rc;
	GetClientRect(m_hwnd, &rc);
	m_nWidth  = rc.right-rc.left;
	m_nHeight = rc.bottom-rc.top;

	// send a message to indicate that we created a GL context
	PostMessage(m_hwnd, WM_USER_CREATEGL, 0,0);

	return true;
}//CreateGL

//-----------------------------------------------------------------------------

void WindowEx::DeleteGL() {
	// attempt to make context current
	MakeCurrent();

	// give user code an opportunity to clean up
	if (m_pWindow) m_pWindow->OnDestroy();

	// clean up font list (if any)
	if (m_nFontID) {
		glDeleteLists(m_nFontID, GLAPP_FONT_LIST_SIZE);
		m_nFontID=0;
	}

	// release OpenGL rendering context
	MakeCurrent(false);
	if (m_hglrc) {
		wglDeleteContext(m_hglrc);
		m_hglrc = NULL;
	}

	// JWW 16/11/03 delete palette
	if (m_hPal) {
        DeleteObject(m_hPal);
        m_hPal=NULL;
    }

	// store (x,y) position in case window needs to be recreated
	RECT rc;
	if (m_hwnd && GetWindowRect(m_hwnd, &rc)) {
		m_nXPos = rc.left;
		m_nYPos = rc.top;
	}

	if (m_hwnd) DestroyWindow(m_hwnd);
	m_hwnd  = NULL;
	m_hdc   = NULL;
}//DeleteGL



bool WindowEx::SetFullscreen(bool bFull) {
	HWND hWnd = m_hwnd;

	// if we don't have an HDC, just store setting for later
	if (!hWnd) {
		m_bWantFull = bFull;
		return true;
	}

	// anything to do?
	if (bFull == m_bIsFull) return true;

	// get current window style, so we can modify it
	DWORD dwStyle = GetWindowLong(hWnd, GWL_STYLE);
	if (!dwStyle) {
		dbg_W32LastError("GetWindowLong(GWL_STYLE) failed");
		return false;
	}

	if (bFull) {
		//-- enter fullscreen mode --

		DEVMODE dm;
		// query display settings
		if (!EnumDisplaySettings(
			NULL,					// current display device
			ENUM_CURRENT_SETTINGS,	// current display settings
			&dm)
		) {
			dbg_printf("EnumDisplaySettings failed\n");
			return false;
		}

		// window size: fill screen
		int
			width  = dm.dmPelsWidth,
			height = dm.dmPelsHeight;

		// save window rect.
		if ( !GetWindowRect(hWnd, &(m_oldRect)) ) {
			dbg_printf("Unable to query window rectangle");
			return false;
		}

		// remove caption, border and sizing frame
		dwStyle &= ~(WS_CAPTION | WS_SIZEBOX);

		// apply new style
		if ( !SetWindowLong( hWnd, GWL_STYLE, dwStyle ) ) {
			dbg_W32LastError("SetWindowLong(GWL_STYLE) failed");
		}
		// resize window and bring to top
		if ( !SetWindowPos ( hWnd, HWND_TOP, 0,0, width,height, 0 ) ) {
			dbg_W32LastError("SetWindowPos failed");
		}

		m_bWantFull = true;
		m_bIsFull   = true;
		return true;
	} else {
		//-- leave fullscreen mode --

		// restore original window size
		const RECT &R = m_oldRect;
		int
			x     = R.left,
			y     = R.top,
			width = R.right  - R.left,
			height= R.bottom - R.top;

		// add overlapped window attributes
		dwStyle |= WS_OVERLAPPEDWINDOW;

		// apply new style
		if ( !SetWindowLong( hWnd, GWL_STYLE, dwStyle ) ) {
			dbg_W32LastError("SetWindowLong(GWL_STYLE) failed");
		}

		// resize window and bring to top
		if ( !SetWindowPos ( hWnd, 0, x,y, width,height, SWP_NOZORDER ) ) {
			dbg_W32LastError("SetWindowPos failed");
		}

		m_bWantFull = false;
		m_bIsFull   = false;
		return true;
	}
}

//-----------------------------------------------------------------------------

bool WindowEx::IsMainWnd() const {
	return (Main::Get() && (Main::Get()->GetMainWnd() == this));
}//IsMainWnd

//-----------------------------------------------------------------------------

void WindowEx::SetSize(int w, int h) {
	if (w<0) w=0;
	if (h<0) h=0;

	if (m_hwnd) {
		DWORD dwStyle = GetWindowLong(m_hwnd, GWL_STYLE);

		// rect contains dimensions of desired client area
		RECT rc;
		rc.left   = 0;
		rc.top    = 0;
		rc.right  = w;
		rc.bottom = h;

		// calculate window size to produce desired client area
		if (AdjustWindowRect(&rc, dwStyle, FALSE)) {
			// resize window
			SetWindowPos(
				m_hwnd, 0, 0,0, (rc.right-rc.left), (rc.bottom-rc.top),
				SWP_NOMOVE | SWP_NOZORDER | SWP_NOACTIVATE
			);
		}
	}
	m_nWidth  = w;
	m_nHeight = h;
}//SetSize

void WindowEx::SetPosition(int x, int y) {
	if (m_hwnd) {
		SetWindowPos(
			m_hwnd, 0, x,y, 0,0,
			SWP_NOSIZE | SWP_NOZORDER | SWP_NOACTIVATE
		);
	}
	m_nXPos = x;
	m_nYPos = y;
}//SetPosition

bool WindowEx::SetTitle(const char *title) {
	if (!title) return false;
	// store title
	m_title = title;
	// if we already have a window, apply changes immediately
	if (m_hwnd)
		return (SetWindowText(m_hwnd, m_title.c_str()) != 0);
	else
		return true;
}//SetTitle

const char *WindowEx::GetTitle() const {
	return m_title.c_str();
}//GetTitle

//-----------------------------------------------------------------------------

bool WindowEx::SetCursor(GLWindow::Cursor c) {
	LPCTSTR id;
	switch (c) {
	case GLWindow::CRArrow:		id = IDC_ARROW; break;
	case GLWindow::CRCross:		id = IDC_CROSS; break;
	case GLWindow::CRHourglass: id = IDC_WAIT;  break;
	case GLWindow::CRHand:		id = IDC_HAND;  break;
	case GLWindow::CRNone:
	default:
		id = NULL;
	}

	HCURSOR hCursor = NULL;
	if (id) hCursor = ::LoadCursor(NULL, id);

	HCURSOR hOldCursor = ::SetCursor(hCursor);

	m_cursor  = c;
	m_hCursor = hCursor;

	return (hOldCursor!=NULL);
}

//-----------------------------------------------------------------------------

bool WindowEx::Create() {
	if (m_hwnd) DeleteGL();
	return CreateGL();
}//Create

//-----------------------------------------------------------------------------

void WindowEx::Delete() {
	DeleteGL();
}//Delete

//-----------------------------------------------------------------------------

void WindowEx::Show() {
	if (m_hwnd)
		ShowWindow(m_hwnd, SW_SHOW);
	else {
		m_bShow=true;
		CreateGL();
	}
}//Show

void WindowEx::Hide() {
	if (m_hwnd)
		ShowWindow(m_hwnd, SW_HIDE);
	else
		m_bShow=false;
}//Hide

/**
 * Set the font typeface and size to be used by the print() method. The
 * default is to use the default system font. Specifying zero size or
 * an empty/null font name will restore the original system font.
 */
bool WindowEx::SetFont(int nSize, const char *s) {
	// sanity check
	if (!m_hdc) return 0;

	// temporary font handle
	HGDIOBJ hFont = 0;

	// try creating the font
	if ( (nSize > 0) && (s!=NULL) && (strlen(s)) ) {
		m_nFontSize = nSize;
		m_sFontName = s;
		hFont = CreateFont(
			nSize,
			0,0,0,0,
			0,0,0,0,0,0,0,0,
			m_sFontName.c_str()
		);
	}
	
	// font list needs an update
	m_bFontSet = true;

	// did we succeed?
	if (hFont) {
		// yes: delete it and return true
		// (font actually gets assigned later when print() called, to be
		// sure that we are working on an OpenGL context)
		DeleteObject(hFont);
		return true;
	} else {
		// no: clear point size and face name
		m_nFontSize = 0;
		m_sFontName = "";
		return false;
	}
}//SetFont

/**
 * Print a text string in OpenGL, using wgl bitmap text functions. Generates
 * the font display list if required, and returns the list ID. Returns zero
 * in case of error.
 */
GLuint WindowEx::print(const char *s) {
	// sanity check
	if (!s || !m_hdc) return 0;

	// delete existing font display list if something has changed
	if (m_bFontSet) {
		if (glIsList(m_nFontID)) {
			glDeleteLists(m_nFontID, GLAPP_FONT_LIST_SIZE);
		}
		m_nFontID = 0;
		m_bFontSet=false;
	}

	// generate font display list
	if (!m_nFontID || !glIsList(m_nFontID)) {
		// generate lists
		m_nFontID = glGenLists(GLAPP_FONT_LIST_SIZE);
		if (!m_nFontID) {
			// failed to create font display lists: return 0
			return 0;
		}

		HGDIOBJ hFont = 0;
		if (m_nFontSize > 0) {
			hFont = CreateFont(
				m_nFontSize,
				0,0,0,0,
				0,0,0,0,0,0,0,0,
				m_sFontName.c_str()
			);
		}
		HGDIOBJ hOldFont = 0;
		if (hFont) {
			// select preferred font
			hOldFont = SelectObject(m_hdc, hFont);
		} else {
			// fallback to system font in case of failure
			hOldFont = SelectObject(m_hdc, GetStockObject(SYSTEM_FONT));
		}

		// create bitmap display lists from current font
		// TODO: this call fails first time around on GF4/41.03, no idea why
		// (windows error is "no error") - see workaround in GLWindow::Printf()
		BOOL ok = wglUseFontBitmaps(m_hdc, 0, GLAPP_FONT_LIST_SIZE, m_nFontID);
		SelectObject(m_hdc, hOldFont);
		if (hFont) DeleteObject(hFont);

		if (!ok) {
			// if that failed, we may as well clean up
			glDeleteLists(m_nFontID,GLAPP_FONT_LIST_SIZE);
			m_nFontID=0;
			// return 0 on failure
			return 0;
		}
	}

	// save display list base
	glPushAttrib(GL_LIST_BIT);
		// set list base containing font
		glListBase(m_nFontID);
		// draw the string
		glCallLists((GLsizei)strlen(s), GL_UNSIGNED_BYTE, s);
	// restore display list base
	glPopAttrib();

	// return font list base
	return m_nFontID;
}//print

//-----------------------------------------------------------------------------

bool WindowEx::GetKeyState(int key) const {
	return GetAsyncKeyState(key) != 0;
}

//-----------------------------------------------------------------------------

void WindowEx::Redraw() {
	if (m_hwnd) ::InvalidateRect(m_hwnd, NULL, FALSE);
}

//-----------------------------------------------------------------------------

void WindowEx::Close() {
	if (m_hwnd) ::PostMessage( m_hwnd, WM_CLOSE, 0,0 );
}

//-----------------------------------------------------------------------------

LRESULT WindowEx::msgCreateGL(HWND hWnd, WPARAM /*wParam*/, LPARAM /*lParam*/) {
	dbg_printf("WM_CREATE(hwnd=%lX, wndex=%lX)\n", (long)hWnd, (long)this);
	
	// sanity check
	if (m_bOnCreate) {
		dbg_printf("warning: create message received during OnCreate\n");
		return 0;
	}

	// JWW 22/09/03
	// This flag prevents the use of functions that alter the pixel format
	// from within the OnCreate() handler. Otherwise, we would get an
	// infinite loop (since those functions recreate the window)
	m_bOnCreate=true;

	if (MakeCurrent()) {
		// call user create code
		if (m_pWindow) m_pWindow->OnCreate();

		// release context
		MakeCurrent(false);
	}

	// JWW 22/09/03 see above
	m_bOnCreate=false;

	return 0;
}//msgCreate

//-----------------------------------------------------------------------------

LRESULT WindowEx::msgDestroy(HWND hWnd, WPARAM /*wParam*/, LPARAM /*lParam*/) {
	dbg_printf("msgDestroy(0x%08lX)\n", (long)hWnd);
	return 0;
}//msgDestroy

//-----------------------------------------------------------------------------

LRESULT WindowEx::msgPaint(HWND hWnd, WPARAM /*wParam*/, LPARAM /*lParam*/) {
	PAINTSTRUCT ps;
	RECT rect;

	//dbg_printf("WM_PAINT(hwnd=%lX, wndex=%lX)\n", (long)hWnd, (long)this);

	// check to see if we actually need to redraw the window
	if ( !GetUpdateRect(hWnd, &rect, FALSE) ) return 0;

	//HDC dc =
	BeginPaint(hWnd, &ps);
		// make OpenGL context current

		if (MakeCurrent()) {
			// call user drawing code: this is where the OpenGL
			// drawing happens 
			if (m_pWindow) m_pWindow->OnDisplay();

			// release context
			MakeCurrent(false);
		} else
			dbg_printf("can't makecurrent\n");
	EndPaint(hWnd, &ps);

	// return zero to say that we processed the message
	return 0;
}//msgPaint

//-----------------------------------------------------------------------------

LRESULT WindowEx::msgSize(HWND /*hWnd*/, WPARAM /*wParam*/, LPARAM lParam) {
	// JWW 16/11/03 moved out of context test
	m_nWidth  = LOWORD(lParam);
	m_nHeight = HIWORD(lParam);

	// make context current
	if (MakeCurrent()) {
		// pass resize event to user code
		if (m_pWindow) m_pWindow->OnResize( m_nWidth, m_nHeight );
		// release context
		MakeCurrent(false);
	}

	return 0;
}//msgSize

//-----------------------------------------------------------------------------

LRESULT WindowEx::msgClose(HWND hWnd, WPARAM /*wParam*/, LPARAM /*lParam*/) {
	dbg_printf("msgClose(%08lX)\n", (long)hWnd);
	// destroy window only when 'main' window is closed. all other
	// windows are hidden when the close icon is clicked
	if (IsMainWnd()) {
		// normally calls DefWindowProc which calls DestroyWindow()
		// JWW 18/10/05 call our own delete code to clean up GL context
		// and call the users own handler code
		Delete();

		// This will cause the message loop to quit, and eventually
		// terminate the application. Note: this doesn't go in the
		// WM_DESTROY handler, because we often need to destroy windows
		// to change pixel format
		PostQuitMessage(0);

		return 0;
		//return DefWindowProc(hWnd, WM_CLOSE, wParam, lParam);
	} else {
		// for all other windows, clicking the close icon will
		// just hide that window temporarily
		Hide();
		return 0;
	}
}//msgClose

//-----------------------------------------------------------------------------

LRESULT WindowEx::msgMouseMove(HWND /*hWnd*/, WPARAM /*wParam*/, LPARAM lParam) {
	// make context current
	if (MakeCurrent()) {
		// pass mouse move event to user code
		if (m_pWindow) {
			short x=(short)LOWORD(lParam), y=(short)HIWORD(lParam);
			m_pWindow->OnMouseMove(
				(int)x,
				m_pWindow->Height() - (int)y -1  // invert mouse y-axis
			);
		}
		// release context
		MakeCurrent(false);
	}
	// JWW 16/11/03 not in non-client area
	m_bNonClient=false;
	return 0;
}//msgMouseMove

//-----------------------------------------------------------------------------

LRESULT WindowEx::msgNCMouseMove(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
	m_bNonClient=true;
	return DefWindowProc(hWnd,uMsg,wParam,lParam);
}//msgNCMouseMove

//-----------------------------------------------------------------------------

LRESULT WindowEx::msgSetCursor(HWND hWnd, WPARAM wParam, LPARAM lParam) {
	if (m_bNonClient) {
		// in non-client area
		return DefWindowProc(hWnd, WM_SETCURSOR, wParam, lParam);
	} else {
		// in client area
		::SetCursor(m_hCursor);
		return 0;
	}
}//msgSetCursor

//-----------------------------------------------------------------------------

LRESULT WindowEx::msgMouseButton(HWND /*hWnd*/, UINT uMsg, WPARAM /*wParam*/, LPARAM /*lParam*/) {
	// make context current
	if (MakeCurrent()) {
		GLWindow::MouseButton nButton=GLWindow::MBLeft;
		bool bDown=false;
		switch (uMsg) {
		case WM_LBUTTONDOWN:
			bDown=true;
			nButton=GLWindow::MBLeft;
			break;
		case WM_MBUTTONDOWN:
			bDown=true;
			nButton=GLWindow::MBMiddle;
			break;
		case WM_RBUTTONDOWN:
			bDown=true;
			nButton=GLWindow::MBRight;
			break;
		case WM_LBUTTONUP:
			nButton=GLWindow::MBLeft;
			break;
		case WM_MBUTTONUP:
			nButton=GLWindow::MBMiddle;
			break;
		case WM_RBUTTONUP:
			nButton=GLWindow::MBRight;
			break;
		}
		
		// JWW 13/10/03 capture mouse on button press (for drag out of window)
		if (bDown)
			SetCapture(m_hwnd);
		else
			ReleaseCapture();

		// pass mouse button event to user code
		if (m_pWindow) m_pWindow->OnMouseButton(nButton, bDown);
		// release context
		MakeCurrent(false);
	}
	return 0;
}//msgMouseButton

//-----------------------------------------------------------------------------

LRESULT WindowEx::msgKeyboard(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
	if (m_pWindow) {
		if (uMsg == WM_KEYDOWN) {
			m_pWindow->OnKeyboard((int)wParam, true);
			return 0;
		} else if (uMsg == WM_KEYUP) {
			m_pWindow->OnKeyboard((int)wParam, false);
			return 0;
		}
	}
	return DefWindowProc(hWnd, uMsg, wParam, lParam);
}//msgKeyboard

//-----------------------------------------------------------------------------

LRESULT WindowEx::msgChar(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
	if (m_pWindow) {
		m_pWindow->OnKeyboardChar((int)wParam);
		return 0;
	} else
		return DefWindowProc(hWnd, uMsg, wParam, lParam);
}//msgChar

//-----------------------------------------------------------------------------

// JWW 02/03/05 added
LRESULT WindowEx::msgCommand(HWND hWnd, WPARAM wParam, LPARAM lParam) {
	// WM_COMMAND message occurs when:
	//   * user selected command item from a menu
	//   * control sends notification message to parent window
	//	 * accelerator keystroke is translated
	WORD
		wNotifyCode = HIWORD(wParam),
		wID			= LOWORD(wParam);
	if (wNotifyCode == 0) {
		// message from a menu
		// pass on the message to the window OnMenu() function
		if (m_pWindow) {
			m_pWindow->OnMenu((int)wID);
			return 0;
		}
	}

	return DefWindowProc(hWnd, WM_COMMAND, wParam, lParam);
}//msgCommand

//-----------------------------------------------------------------------------

/**
 * WindowProc: decode and handle windows messages
 */
LRESULT WindowEx::WindowProc(
	HWND hWnd,      // handle to window
	UINT uMsg,      // message identifier
	WPARAM wParam,  // first message parameter
	LPARAM lParam   // second message parameter
) {
	// JWW 20/06/05 pass windows message to user code
	if (m_pWindow) m_pWindow->OnWindowsMessage(hWnd, uMsg, wParam, lParam);

	switch (uMsg) {
	case WM_USER_CREATEGL:
		// custom message: sent when OpenGL context is created
		return msgCreateGL(hWnd,wParam,lParam);

	case WM_CLOSE:
		return msgClose(hWnd,wParam,lParam);

	case WM_DESTROY:
		return msgDestroy(hWnd,wParam,lParam);

    case WM_PAINT:
		return msgPaint(hWnd,wParam,lParam);

    case WM_SIZE:
		return msgSize(hWnd,wParam,lParam);

	case WM_MOUSEMOVE:
		return msgMouseMove(hWnd,wParam,lParam);

	case WM_NCMOUSEMOVE:
		return msgNCMouseMove(hWnd,uMsg,wParam,lParam);

	case WM_LBUTTONDOWN:
	case WM_MBUTTONDOWN:
	case WM_RBUTTONDOWN:
	case WM_LBUTTONUP:
	case WM_MBUTTONUP:
	case WM_RBUTTONUP:
		return msgMouseButton(hWnd,uMsg,wParam,lParam);

	case WM_KEYUP:
	case WM_KEYDOWN:
		return msgKeyboard(hWnd,uMsg,wParam,lParam);

	case WM_CHAR:
		return msgChar(hWnd,uMsg,wParam,lParam);

	case WM_SETCURSOR:
		return msgSetCursor(hWnd,wParam,lParam);

	case WM_COMMAND:
		return msgCommand(hWnd,wParam,lParam);

    default:
		// some other message: call default window procedure
        return DefWindowProc(hWnd, uMsg, wParam, lParam);
    }

	// unreachable
    //return 0;
}//WindowEx::WindowProc

//-----------------------------------------------------------------------------

bool WindowEx::MakeCurrent(bool current) {
	// maximum size of context stack (was const, but made it #def for VC++6)
	#define CTX_STACK_MAX_SIZE 16

	// stack to push/pop context
	static struct Stack {
		int	index;

		struct Context {
			HGLRC rc;
			HDC   dc;
		} data[CTX_STACK_MAX_SIZE];

		Stack() {
			index=0;
		}

		void push() {
			if (index < CTX_STACK_MAX_SIZE) {
				data[index].rc = wglGetCurrentContext();
				data[index].dc = wglGetCurrentDC();
			} else {
				dbg_printf("context stack overflow\n");
			}
			index++;
		}//push

		void pop() {
			if (index) {
				index--;
				if (index < CTX_STACK_MAX_SIZE)
					wglMakeCurrent(data[index].dc, data[index].rc);
				else
					wglMakeCurrent(NULL,NULL);
			}
		}//pop

		bool set(HDC dc, HGLRC rc) {
			// change context
			return (wglMakeCurrent(dc,rc)==TRUE);
		}//set
	} ctx;

	if (current) {
		// JWW 16/11/03 added palette support
		// TODO: implement proper palette support
		if (m_hPal) {
			m_hOldPal = SelectPalette(m_hdc, m_hPal, false);
			RealizePalette(m_hdc);
		}
		// save context
		ctx.push();
		// change context
		return ctx.set(m_hdc,m_hglrc);
	} else {
		// restore context
		ctx.pop();
		// JWW 16/11/03 added palette support
		// TODO: implement proper palette support
		if (m_hOldPal) {
			SelectPalette(m_hdc, m_hOldPal, true);
			m_hOldPal=0;
		}
		return true;
	}
}//MakeCurrent

//---------------------------------------------------------------------------

// Logical palette for 256 colour modes: this is generated using the sample
// code provided in the Windows SDK Help. It seems to produce good results.
static struct tagRGB8Palette {
    WORD        palVersion;
    WORD        palNumEntries;
    PALETTEENTRY palPalEntries[256];
} rgb8palette = {
0x300,  // palVersion
256,    // palNumEntries
  0,  0,  0,0,  63,  0,  0,0, 104,  0,  0,0, 128,  0,  0,0, 171,  0,  0,0,
200,  0,  0,0, 229,  0,  0,0, 255,  0,  0,0,   0, 63,  0,0,  63, 63,  0,0,
104, 63,  0,0, 139, 63,  0,0, 171, 63,  0,0, 200, 63,  0,0, 229, 63,  0,0,
255, 63,  0,0,   0,104,  0,0,  63,104,  0,0, 104,104,  0,0, 139,104,  0,0,
171,104,  0,0, 200,104,  0,0, 229,104,  0,0, 255,104,  0,0,   0,128,  0,0,
 63,139,  0,0, 104,139,  0,0, 128,128,  0,0, 171,139,  0,0, 200,139,  0,0,
229,139,  0,0, 255,139,  0,0,   0,171,  0,0,  63,171,  0,0, 104,171,  0,0,
139,171,  0,0, 171,171,  0,0, 200,171,  0,0, 229,171,  0,0, 255,171,  0,0,
  0,200,  0,0,  63,200,  0,0, 104,200,  0,0, 139,200,  0,0, 171,200,  0,0,
200,200,  0,0, 229,200,  0,0, 255,200,  0,0,   0,229,  0,0,  63,229,  0,0,
104,229,  0,0, 139,229,  0,0, 171,229,  0,0, 200,229,  0,0, 229,229,  0,0,
255,229,  0,0,   0,255,  0,0,  63,255,  0,0, 104,255,  0,0, 139,255,  0,0,
171,255,  0,0, 200,255,  0,0, 229,255,  0,0, 255,255,  0,0,   0,  0,128,0,
 63,  0,116,0, 104,  0,116,0, 128,  0,128,0, 171,  0,116,0, 200,  0,116,0,
229,  0,116,0, 255,  0,116,0,   0, 63,116,0,  63, 63,116,0, 104, 63,116,0,
139, 63,116,0, 171, 63,116,0, 200, 63,116,0, 229, 63,116,0, 255, 63,116,0,
  0,104,116,0,  63,104,116,0, 104,104,116,0, 139,104,116,0, 171,104,116,0,
200,104,116,0, 229,104,116,0, 255,104,116,0,   0,128,128,0,  63,139,116,0,
104,139,116,0, 128,128,128,0, 171,139,116,0, 200,139,116,0, 229,139,116,0,
255,139,116,0,   0,171,116,0,  63,171,116,0, 104,171,116,0, 139,171,116,0,
171,171,116,0, 200,171,116,0, 229,171,116,0, 255,171,116,0,   0,200,116,0,
 63,200,116,0, 104,200,116,0, 139,200,116,0, 171,200,116,0, 200,200,116,0,
229,200,116,0, 255,200,116,0,   0,229,116,0,  63,229,116,0, 104,229,116,0,
139,229,116,0, 171,229,116,0, 200,229,116,0, 229,229,116,0, 255,229,116,0,
  0,255,116,0,  63,255,116,0, 104,255,116,0, 139,255,116,0, 171,255,116,0,
200,255,116,0, 229,255,116,0, 255,255,116,0,   0,  0,191,0,  63,  0,191,0,
104,  0,191,0, 139,  0,191,0, 171,  0,191,0, 200,  0,191,0, 229,  0,191,0,
255,  0,191,0,   0, 63,191,0,  63, 63,191,0, 104, 63,191,0, 139, 63,191,0,
171, 63,191,0, 200, 63,191,0, 229, 63,191,0, 255, 63,191,0,   0,104,191,0,
 63,104,191,0, 104,104,191,0, 139,104,191,0, 171,104,191,0, 200,104,191,0,
229,104,191,0, 255,104,191,0,   0,139,191,0,  63,139,191,0, 104,139,191,0,
139,139,191,0, 171,139,191,0, 200,139,191,0, 229,139,191,0, 255,139,191,0,
  0,171,191,0,  63,171,191,0, 104,171,191,0, 139,171,191,0, 160,160,164,0,
200,171,191,0, 229,171,191,0, 255,171,191,0,   0,200,191,0,  63,200,191,0,
104,200,191,0, 139,200,191,0, 171,200,191,0, 192,192,192,0, 229,200,191,0,
255,200,191,0,   0,229,191,0,  63,229,191,0, 104,229,191,0, 139,229,191,0,
171,229,191,0, 192,220,192,0, 229,229,191,0, 255,229,191,0,   0,255,191,0,
 63,255,191,0, 104,255,191,0, 139,255,191,0, 171,255,191,0, 200,255,191,0,
229,255,191,0, 255,255,191,0,   0,  0,255,0,  63,  0,255,0, 104,  0,255,0,
139,  0,255,0, 171,  0,255,0, 200,  0,255,0, 229,  0,255,0, 255,  0,255,0,
  0, 63,255,0,  63, 63,255,0, 104, 63,255,0, 139, 63,255,0, 171, 63,255,0,
200, 63,255,0, 229, 63,255,0, 255, 63,255,0,   0,104,255,0,  63,104,255,0,
104,104,255,0, 139,104,255,0, 171,104,255,0, 200,104,255,0, 229,104,255,0,
255,104,255,0,   0,139,255,0,  63,139,255,0, 104,139,255,0, 139,139,255,0,
171,139,255,0, 200,139,255,0, 229,139,255,0, 255,139,255,0,   0,171,255,0,
 63,171,255,0, 104,171,255,0, 139,171,255,0, 171,171,255,0, 200,171,255,0,
229,171,255,0, 255,171,255,0,   0,200,255,0,  63,200,255,0, 104,200,255,0,
139,200,255,0, 166,202,240,0, 200,200,255,0, 229,200,255,0, 255,200,255,0,
  0,229,255,0,  63,229,255,0, 104,229,255,0, 139,229,255,0, 171,229,255,0,
200,229,255,0, 229,229,255,0, 255,251,240,0,   0,255,255,0,  63,255,255,0,
104,255,255,0, 139,255,255,0, 171,255,255,0, 200,255,255,0, 229,255,255,0,
255,255,255,0
};//rgb8palette

//---------------------------------------------------------------------------

// JWW 16/11/03 set up palette if needed
bool WindowEx::SetupPalette() {
    // have we already got one?
	if (m_hPal) return false;

    // have we got device context?
    if (!m_hdc) return false;

    // check to see if we need a palette, and create if necessary
    PIXELFORMATDESCRIPTOR pfd;
    int n = GetPixelFormat(m_hdc);
    DescribePixelFormat(m_hdc, n, sizeof(PIXELFORMATDESCRIPTOR),&pfd);
    if (pfd.dwFlags & PFD_NEED_PALETTE) {
		// Create RGB palette for OpenGL
        m_hPal = CreatePalette((LOGPALETTE*)&rgb8palette);
    }
	return true;
}//SetupPalette

//---------------------------------------------------------------------------
#endif	// __WIN32__
