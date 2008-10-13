#include "GXBase.h"
using namespace gxbase;

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

#include "ErrDbg.h"
#include "Main.h"

//---- Window -----------------------------------------------------------------

GLWindow::GLWindow() {
	dbg_printf("GLWindow\n");
	//extra = Main::Get()->CreateWnd(this);

	//dbg_printf("CreateWnd(0x%08lX)\n", (long)window);
	//if (!window) return NULL;

	if (!Main::Get()->CreateWndClass()) {
		err_printf("Failed to register window class\n");
		//return NULL;
		return;
	}

	// create WindowEx instance to hold all the platform specific complexity
	extra = new WindowEx(this);
	assert(extra!=NULL);

	// add windowex to internal window list of main app
	// this allows main app. to notify windows when app has started, so that
	// creation of windows can be postponed until after App::OnCreate() has
	// been called (which in turn allows users to change window size etc.
	// prior to them being created).
	Main::Get()->AddWnd(extra);
}

GLWindow::~GLWindow() {
	dbg_printf("~GLWindow\n");
	Main::Get()->DelWnd(extra);
	// delete WindowEx structure
	delete extra;
}

//-----------------------------------------------------------------------------

void GLWindow::OnCreate()  {
	dbg_printf("GLWindow::OnCreate\n");
}
void GLWindow::OnDestroy() {
	dbg_printf("GLWindow::OnDestroy 0x%08lX\n",this);
}

void GLWindow::OnDisplay() {
	dbg_printf("GLWindow::OnDisplay\n");
	glClear(GL_COLOR_BUFFER_BIT);
	SwapBuffers();
}

void GLWindow::OnResize(int w, int h) {
	dbg_printf("GLWindow::OnResize\n");
	glViewport(0,0,w,h);
}

void GLWindow::OnMouseButton(MouseButton button, bool down) {
	dbg_printf("GLWindow::OnMouseButton(%d,%d)\n", button, (int)(down?1:0));
}

void GLWindow::OnMouseMove(int /*x*/, int /*y*/) {
	//dbg_printf("GLWindow::OnMouseMove(%d,%d)\n", x,y);
}

void GLWindow::OnKeyboard(int key, bool down) {
	dbg_printf("GLWindow::OnKeyboard(%d,%d)\n", key, (int)(down?1:0));
}

void GLWindow::OnKeyboardChar(int chr) {
	dbg_printf("GLWindow::OnKeyboardChar(%d)\n", chr);
}

// JWW 11/04/05
void GLWindow::OnMenu(int id) {
	dbg_printf("GLWindow::OnMenu(%d)\n", id);
}

//-----------------------------------------------------------------------------

void GLWindow::SwapBuffers() {
	extra->SwapBuffers();
}//SwapBuffers

//-----------------------------------------------------------------------------

bool GLWindow::MakeCurrent(bool current) {
	return extra->MakeCurrent(current);
}//MakeCurrent

//-----------------------------------------------------------------------------
	
bool GLWindow::HasExtension(const char *name) {
	// check that 'ext' is valid
	if ( (name==NULL) || (name[0]==0) || strchr(name,' ') ) return false;

	// check that we have a valid OpenGL context
	if (!MakeCurrent()) return false;

	// get extension string
	const char *sGLExt = (const char *)glGetString(GL_EXTENSIONS);
	if (sGLExt==NULL) {
		MakeCurrent(false);
		return false;
	}

	const char *ptr = sGLExt, *found, *end;
	for (;;) {
		// look for extension
		found = strstr(ptr,name);
		if (found == NULL) break;
		// get end of string
		end = &found[strlen(found)-1];
		// make sure it isn't a substring of a name
		if ( (found == sGLExt) || (found[-1] == ' ') )
			if ( (end[1] == 0) || (end[1] == ' ') ) {
				MakeCurrent(false);
				return true; // success
			}
		// try again
		ptr = &end[1];
	}

	// not found
	MakeCurrent(false);
	return false;
}//HasExtension

//-----------------------------------------------------------------------------

void GLWindow::Redraw() {
	if (extra->m_hwnd) ::InvalidateRect(extra->m_hwnd,NULL,FALSE);
}//Redraw

//-----------------------------------------------------------------------------

/**
 * Show the window.
 */
void GLWindow::Show() {
	extra->Show();
}//Show

//-----------------------------------------------------------------------------

/**
 * Hide the window (temporarily: the window is not destroyed).
 */
void GLWindow::Hide() {
	extra->Hide();
}//Hide

//-----------------------------------------------------------------------------

/**
 * Close the window. Note: if you close the main window, the application
 * will exit. If you only intend to temporarily hide the window, you
 * should call the Hide() method instead.
 */
void GLWindow::Close() {
	// JWW 22/09/03 added this method
	if (extra->m_hwnd) ::PostMessage( extra->m_hwnd, WM_CLOSE, 0,0 );
}//Close

//-----------------------------------------------------------------------------

/**
 * Returns true if the window is visible, false otherwise. Visible
 * only means that the window is visible on the desktop; it may still
 * be covered by other windows.
 */
bool GLWindow::IsVisible() const {
	// does window even exist?
	if (!extra || !extra->m_hwnd) return false;
	// if it exists, is it visible?
	return (IsWindowVisible( extra->m_hwnd ) == TRUE);
}//IsVisible

//-----------------------------------------------------------------------------

/**
 * Set the size of the window. If called before the window is created,
 * this sets the initial size, otherwise it resizes the window.
 */
void GLWindow::SetSize(int w, int h) {
	extra->SetSize(w,h);
}//SetSize

/**
 * Set the window position. If called before the window is created,
 * this sets the initial position, otherwise it moves the window.
 */
void GLWindow::SetPosition(int x, int y) {
	extra->SetPosition(x,y);
}//SetPosition

/**
 * Get the window position. Returns the current window position.
 */
void GLWindow::GetPosition(int &x, int &y) {
	RECT rc;
	if (extra->m_hwnd && GetWindowRect(extra->m_hwnd, &rc)) {
		// current position
		x = rc.left;
		y = rc.top;
	} else {
		// cached position
		x = extra->m_nXPos;
		y = extra->m_nYPos;
	}
}//GetPosition

/**
 * Return width of window in pixels.
 */
int GLWindow::Width() const {
	return extra->m_nWidth;
}//Width

/**
 * Return height of window in pixels.
 */
int GLWindow::Height() const {
	return extra->m_nHeight;
}//Height

/**
 * Return aspect ratio (w/h) of window. Returns 1 in the case where h==0.
 */
float GLWindow::Aspect() const {
	if (extra->m_nHeight)
		return (float)extra->m_nWidth / (float)extra->m_nHeight;
	else
		return 1.0f;
}//Aspect

/**
 * Enable/disable quad-buffer stereo on this window. Not all graphics
 * devices support this feature. Returns true for success, false in
 * case of failure.
 */
bool GLWindow::SetStereo(bool stereo) {
	// anything to do?
	if (stereo == GetStereo()) return true;

	// is it safe to change pixel format at this point?
	if (!extra->Safe2ChangePF()) return false;

	// remember old window mode
	int oldMode = extra->m_mode;

	// enable/disable stereo mode in mode flags
	if (stereo)
		extra->m_mode |= GLAPP_STEREO;
	else
		extra->m_mode &= ~GLAPP_STEREO;

	// recreate window if required: if not, we just cache the
	// setting until the window is created
	if (extra->m_hdc) {
		if (extra->Create())
			return true;
		else {
			// oops, failed to create window, try disabling the
			// option and retry (fallback)
			extra->m_mode = oldMode;
			extra->Create();
			return false;
		}
	} else {
		// window doesn't exist yet, just return true (we cache the
		// setting until the window is created)
		return true;
	}
}//SetStereo

/**
 * Returns true if quad-buffer stereo is enabled on this window,
 * false otherwise.
 */
bool GLWindow::GetStereo() const {
	// if we don't have an HDC return whatever preference was set
	// with SetStereo
	if (!extra->m_hdc)
		return ((extra->m_mode & GLAPP_STEREO) != 0);
	
	// otherwise, we look to see if the window really is stereo

	// get the pixel format of the window
	int pix = GetPixelFormat(extra->m_hdc);

	// describe the pixel format
	PIXELFORMATDESCRIPTOR pfd;
	if (DescribePixelFormat(extra->m_hdc, pix, sizeof(pfd), &pfd) != 0)
		return ((pfd.dwFlags & PFD_STEREO) != 0);
	else
		return false;
}//GetStereo

/**
 * Enable/disable double-buffering on this window. Returns true for
 * success, false in case of failure. Windows are double buffered
 * by default. Setting this to false forces use of single buffer
 * window mode.
 */
bool GLWindow::SetDoubleBuffer(bool bDouble) {
	// anything to do?
	if (bDouble == GetDoubleBuffer()) return true;

	// we are about to recreate window, is this a safe point?
	if (!extra->Safe2ChangePF()) return false;

	// remember old window mode
	int oldMode = extra->m_mode;

	// enable/disable double-buffer mode in mode flags
	if (bDouble)
		extra->m_mode |= GLAPP_DOUBLE;
	else
		extra->m_mode &= ~GLAPP_DOUBLE;

	// recreate window if required: if not, we just cache the setting
	// until the window is created
	if (extra->m_hdc) {
		if (extra->Create())
			return true;
		else {
			// oops, failed to create window, try disabling the
			// option and retry (fallback)
			extra->m_mode = oldMode;
			extra->Create();
			return false;
		}
	} else {
		// window doesn't exist yet, just return true (we cache the
		// setting until the window is created)
		return true;
	}
}//SetDoubleBuffer

/**
 * Returns true if window is double-buffered, returns false if
 * single-buffered.
 */
bool GLWindow::GetDoubleBuffer() const {
	// if we don't have an HDC return whatever preference was set
	if (!extra->m_hdc)
		return ((extra->m_mode & GLAPP_DOUBLE) != 0);
	
	// otherwise, we look to see if the window really is stereo

	// get the pixel format of the window
	int pix = GetPixelFormat(extra->m_hdc);

	// describe the pixel format
	PIXELFORMATDESCRIPTOR pfd;
	if (DescribePixelFormat(extra->m_hdc, pix, sizeof(pfd), &pfd) != 0)
		return ((pfd.dwFlags & PFD_DOUBLEBUFFER) != 0);
	else
		return false;
}//GetDoubleBuffer

/**
 * Set depth-buffer resolution (bit-depth). The default depth is
 * 32-bit (if supported). You can use GetDepthBits() to query
 * the current resolution (which may be less than requested, if
 * the hardware/drivers cannot support the requested depth).
 * Returns false if an error occurred (depth could not be set),
 * or if an out of range value is given.
 */
bool GLWindow::SetDepthBits(int nBits) {
	// check range (restrict to range 0..255 because windows PFD
	// uses a BYTE for this parameter)
	if ((nBits < 0) || (nBits > 255)) return false;

	// if we don't have an HDC, just store setting for later
	if (!extra->m_hdc) {
		extra->m_dbits = nBits;
		return true;
	}

	// get current depth
	int oldBits = GetDepthBits();

	// anything to do?
	if (nBits == oldBits) return true;

	// we are about to recreate window, is this a safe point?
	if (!extra->Safe2ChangePF()) return false;

	// attempt to recreate window with desired format
	extra->m_dbits = nBits;
	if (extra->Create()) {
		// return true if we get >= what we asked for
		return (GetDepthBits() >= nBits);
	} else {
		// oops, failed to create window, try falling back to
		// previous state
		extra->m_dbits = oldBits;
		extra->Create();
		return false;
	}
}//SetDepthBits

/**
 * Returns the current depth buffer resolution (bit-depth).
 */
int GLWindow::GetDepthBits() const {
	// if we don't have an HDC return whatever preference was set
	if (!extra->m_hdc) return extra->m_dbits;

	// get the pixel format of the window
	int pix = GetPixelFormat(extra->m_hdc);

	// describe the pixel format
	PIXELFORMATDESCRIPTOR pfd;
	if (DescribePixelFormat(extra->m_hdc, pix, sizeof(pfd), &pfd) != 0)
		return pfd.cDepthBits;
	else
		return 0;
}//GetDepthBits

/**
 * Set stencil buffer resolution (bits). There is no stencil
 * buffer supplied by default. Returns false if an error occurs.
 */
bool GLWindow::SetStencilBits(int nBits) {
	// check range (restrict to range 0..255 because windows PFD
	// uses a BYTE for this parameter)
	if ((nBits < 0) || (nBits > 255)) return false;

	// if we don't have an HDC, just store setting for later
	if (!extra->m_hdc) {
		extra->m_sbits = nBits;
		return true;
	}

	// get current depth
	int oldBits = GetStencilBits();

	// anything to do?
	if (nBits == oldBits) return true;

	// attempt to recreate window with desired format
	extra->m_sbits = nBits;
	if (extra->Create()) {
		// return true if we get >= what we asked for
		return (GetStencilBits() >= nBits);
	} else {
		// oops, failed to create window, try falling back to
		// previous state
		extra->m_sbits = oldBits;
		extra->Create();
		return false;
	}
}//SetStencilBits

/**
 * Returns the current stencil buffer resolution (bits).
 */
int GLWindow::GetStencilBits() const {
	// if we don't have an HDC return whatever preference was set
	if (!extra->m_hdc) return extra->m_sbits;

	// get the pixel format of the window
	int pix = GetPixelFormat(extra->m_hdc);

	// describe the pixel format
	PIXELFORMATDESCRIPTOR pfd;
	if (DescribePixelFormat(extra->m_hdc, pix, sizeof(pfd), &pfd) != 0)
		return pfd.cStencilBits;
	else
		return 0;
}//GetStencilBits

/**
 * Set alpha buffer resolution (bits).
 * Returns false if an error occurs.
 */
bool GLWindow::SetAlphaBits(int nBits) {
	// check range (restrict to range 0..255 because windows PFD
	// uses a BYTE for this parameter)
	if ((nBits < 0) || (nBits > 255)) return false;

	// if we don't have an HDC, just store setting for later
	if (!extra->m_hdc) {
		extra->m_albits = nBits;
		return true;
	}

	// get current depth
	int oldBits = GetAlphaBits();

	// anything to do?
	if (nBits == oldBits) return true;

	// we are about to recreate window, is this a safe point?
	if (!extra->Safe2ChangePF()) return false;

	// attempt to recreate window with desired format
	extra->m_albits = nBits;
	if (extra->Create()) {
		// return true if we get >= what we asked for
		return (GetAlphaBits() >= nBits);
	} else {
		// oops, failed to create window, try falling back to
		// previous state
		extra->m_albits = oldBits;
		extra->Create();
		return false;
	}
}//SetAlphaBits

/**
 * Returns the current alpha buffer resolution (bits).
 */
int GLWindow::GetAlphaBits() const {
	// if we don't have an HDC return whatever preference was set
	if (!extra->m_hdc) return extra->m_albits;

	// get the pixel format of the window
	int pix = GetPixelFormat(extra->m_hdc);

	// describe the pixel format
	PIXELFORMATDESCRIPTOR pfd;
	if (DescribePixelFormat(extra->m_hdc, pix, sizeof(pfd), &pfd) != 0)
		return pfd.cAlphaBits;
	else
		return 0;
}//GetAlphaBits

bool GLWindow::SetAccumBits(int nBits) {
	// check range (restrict to range 0..255)
	if ((nBits < 0) || (nBits > 255)) return false;

	// if we don't have an HDC, just store setting for later
	if (!extra->m_hdc) {
		extra->m_acbits = nBits;
		return true;
	}

	// get current depth
	int oldBits = GetAccumBits();

	// anything to do?
	if (nBits == oldBits) return true;

	// we are about to recreate window, is this a safe point?
	if (!extra->Safe2ChangePF()) return false;

	// attempt to recreate window with desired format
	extra->m_acbits = nBits;
	if (extra->Create()) {
		// return true if we get >= what we asked for
		return (GetAccumBits() >= nBits);
	} else {
		// oops, failed to create window, try falling back to
		// previous state
		extra->m_acbits = oldBits;
		extra->Create();
		return false;
	}
}//SetAccumBits

int GLWindow::GetAccumBits() const {
	// if we don't have an HDC return whatever preference was set
	if (!extra->m_hdc) return extra->m_acbits;

	// get the pixel format of the window
	int pix = GetPixelFormat(extra->m_hdc);

	// describe the pixel format
	PIXELFORMATDESCRIPTOR pfd;
	if (DescribePixelFormat(extra->m_hdc, pix, sizeof(pfd), &pfd) != 0) {
		return pfd.cAccumBits;
	} else
		return 0;
}//GetAccumBits

/**
 * Nominate main window. One window can be nominated as the 'main' window.
 * When that window is closed, the application will close. By default, the
 * first window created will become the main window. Therefore, you will not
 * usually need to override this behaviour.
 */
void GLWindow::SetMainWindow() {
	Main::Get()->SetMainWnd(extra);
}//SetMainWindow

bool GLWindow::GetMainWindow() const {
	return extra->IsMainWnd();
}//IsMainWindow

/**
 * Set window title (caption).
 */
void GLWindow::SetTitle(const char *title) {
	extra->SetTitle(title);
}//SetTitle

/**
 * Get window title (caption). Returns an empty string "" if the title
 * is empty or cannot be read (never returns an invalid pointer). The
 * returned string should be considered temporary: do not store a
 * pointer to the string..
 */
const char *GLWindow::GetTitle() const {
	return extra->GetTitle();
}//GetTitle

/**
 * Call this method to enable/disable fullscreen mode for this window.
 * When fullscreen mode is enabled, the window will be expanded to
 * fill the screen, and any window borders and decorations are removed.
 * When disabled, the window reverts to its original size and shape.
 */
bool GLWindow::SetFullscreen(bool bFull) {
	HWND hWnd = extra->m_hwnd;

	// if we don't have an HDC, just store setting for later
	if (!hWnd) {
		extra->m_bWantFull = bFull;
		return true;
	}

	// anything to do?
	if (bFull == GetFullscreen()) return true;

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
		if ( !GetWindowRect(hWnd, &(extra->m_oldRect)) ) {
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

		extra->m_bWantFull = true;
		extra->m_bIsFull   = true;
		return true;
	} else {
		//-- leave fullscreen mode --

		// restore original window size
		const RECT &R = extra->m_oldRect;
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

		extra->m_bWantFull = false;
		extra->m_bIsFull   = false;
		return true;
	}
}//SetFullscreen

/**
 * Returns true if the window is in fullscreen mode, false otherwise.
 */
bool GLWindow::GetFullscreen() const {
	return extra->m_bIsFull;
}//GetFullscreen

/**
 * Enable or disable the 'stay on top' property of the window. This
 * works by adding or removing the topmost extended style.
 */
bool GLWindow::SetOnTop(bool bTop) {
	if (!extra->m_hwnd) {
		extra->m_bOnTop = bTop;
		return true;
	}

	if (bTop) {
		if (!SetWindowPos(
			extra->m_hwnd, HWND_TOPMOST, 0,0,0,0, SWP_NOMOVE | SWP_NOSIZE
		)) return false;
	} else {
		if (!SetWindowPos(
			extra->m_hwnd, HWND_NOTOPMOST, 0,0,0,0, SWP_NOMOVE | SWP_NOSIZE
		)) return false;
	}

	// record state (in case window is recreated: to preserve state)
	extra->m_bOnTop = bTop;
	return true;
}//SetStayOnTop

/**
 * Returns true if the window has the 'stay on top' property, false
 * otherwise.
 */
bool GLWindow::GetOnTop() const {
	// if we don't have a window yet, return cached value
	if (!extra->m_hwnd) return extra->m_bOnTop;

	// look at window style
	DWORD dwExStyle = GetWindowLong(extra->m_hwnd, GWL_EXSTYLE);
	// return true if window has top-most extended style
	return ((dwExStyle & WS_EX_TOPMOST) != 0);
}//GetStayOnTop

/**
 * Set the font size and typeface to be used by the Printf() method. The
 * default is to use the default system font. Specifying zero size or
 * an empty/null font name will restore the original system font.
 * For example: SetFont(16,"Arial"). Returns true for success, false in
 * case of error.
 */
bool GLWindow::SetFont(int nSize, const char *sFontName) {
	return extra?extra->SetFont(nSize,sFontName):false;
}//SetFont

/**
 * Print formatted text to the window, using a bitmap font. Use the
 * normal glColor and glRasterPos functions to colour and position the
 * text. Note: the first time this method is called, it creates a
 * display list to store the font. The list ID is generated with
 * glGenLists, to avoid list collisions. Note that the list ID will be
 * regenerated if the pixel format of the window changes.
 * The return value is the list ID, or zero in case of error.
 */
unsigned int GLWindow::Printf(const char* format, ...) {
	va_list parms;
	va_start(parms, format);

	// list ID, or 0 in case of error
	unsigned int id=0;

	// buffer for formatted string
	const int count=1024;
	char *buffer = new char[count];
	if (!buffer) {
		// allocate failed: bomb out now
		va_end(parms);
		return 0;
	}

	// MS VC++ _vsnprintf(...) returns one of:
	//   * string length, not including terminating null
	//   * negative value if error occurs
	//   * returns 1 if too big for buffer (fills buffer, doesn't terminate)
	#if (_MSC_VER >= 1400)
		int res = _vsnprintf_s(buffer,count,_TRUNCATE,format,parms);
	#else
		int res = _vsnprintf(buffer,count,format,parms);
	#endif

	if (res < 0) {
		// an error occurred
		delete [] buffer;
	} else {
		// got some text in the buffer (maybe truncated)
		if (res == 1) {
			// out of buffer space (buffer was filled, but not terminated)
			// null terminate it ourselves (string will be truncated)
			buffer[count-1] = 0;
		}

		// this actually does the GL text output: save the list ID
		// for return to the user
		id = extra?extra->print(buffer):0;
		// workaround for occasional wglUseFontBitmap failure on first run
		if (!id) {
			dbg_printf("warning: used wglUseFontBitmap workaround\n");
			id = extra?extra->print(buffer):0;
			if (!id) dbg_printf("warning: workaround failed\n");
		}
	}

	// release buffer
	delete [] buffer;
 
	// reset variable args.
	va_end(parms);

	return id;
}//printf

//-----------------------------------------------------------------------------

/**
 * This method can be called from OnKeyboard() to test whether the SHIFT
 * key is pressed. It returns true if the key is down, false otherwise.
 */
bool GLWindow::GetShiftKey() const {
	return (GetAsyncKeyState(VK_SHIFT) != 0);
}

/**
 * This method can be called from OnKeyboard() to test whether the CTRL
 * key is pressed. It returns true if the key is down, false otherwise.
 */
bool GLWindow::GetCtrlKey() const {
	return (GetAsyncKeyState(VK_CONTROL) != 0);
}

/**
 * This method can be called from OnKeyboard() to test whether the ALT
 * key is pressed. It returns true if the key is down, false otherwise.
 */
bool GLWindow::GetAltKey() const {
	return (GetAsyncKeyState(VK_MENU) != 0);
}

/**
 * This method allows you to test if a particular key is down (true)
 * or up (false). It can be used as an alternative to the keyboard
 * events, particularly for interactive use such as in a game.
 */
bool GLWindow::GetKey(int key) const {
	SHORT state = GetAsyncKeyState(key);
	if (state)
		return (state & 0x8000) != 0;
	else	// fallback code
		return (::GetKeyState(key) & 0x8000) != 0;
}//GetKeyState

//-----------------------------------------------------------------------------

/**
 * Set the window mouse cursor type.
 */
bool GLWindow::SetCursor(Cursor c) {
	LPCTSTR id;
	switch (c) {
	case CRArrow:	  id = IDC_ARROW; break;
	case CRCross:	  id = IDC_CROSS; break;
	case CRHourglass: id = IDC_WAIT;  break;
	case CRHand:	  id = IDC_HAND;  break;
	case CRNone:
	default:
		id = NULL;
	}

	HCURSOR hCursor = NULL;
	if (id) hCursor = ::LoadCursor(NULL, id);

	HCURSOR hOldCursor = ::SetCursor(hCursor);

	extra->m_cursor  = c;
	extra->m_hCursor = hCursor;

	return (hOldCursor!=NULL);
}//SetCursor

//-----------------------------------------------------------------------------

/**
 * Get the window mouse cursor type.
 */
GLWindow::Cursor GLWindow::GetCursor() const {
	return extra->m_cursor;
}//GetCursor

//-----------------------------------------------------------------------------

#ifdef _WIN32
// ooh, the ugliness. i'm so unhappy to be adding this function, but people
// want it, and i feel mean spirited to deny them :)
HWND GLWindow::GetSafeHwnd() const {
	return extra?extra->m_hwnd:NULL;
}//GetSafeHwnd
#endif//_WIN32

#ifdef _WIN32
// JWW 20/06/05 not happy to add this, but here it is. funnily enough, at
// request of same people that wanted the GetSafeHwnd() functions :)
void GLWindow::OnWindowsMessage(
	HWND /*hWnd*/, UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/
) {
	// default: does nothing with the message
}//OnWindowsMessage
#endif//_WIN32

//-----------------------------------------------------------------------------
