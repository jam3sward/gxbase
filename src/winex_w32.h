#ifndef __windowex_h
#define __windowex_h

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

//-----------------------------------------------------------------------------

#include <string>
#include <vector>
using namespace std;

#include "GXBase.h"
#include "ErrDbg.h"

//---- window class/title -----------------------------------------------------

#define GLAPP_CLASSNAME		"GLAppWnd"	///< main window class name
#define GLAPP_TITLE			"OpenGL"	///< window caption
#define WM_USER_CREATEGL	(WM_USER+1)	///< created OpenGL context

_GXBASE_BEGIN

//-----------------------------------------------------------------------------

enum GLAppConstants {
	GLAPP_RGBA   = 0x01,		///< RGBA pixel format
	GLAPP_DEPTH  = 0x02,		///< depth buffer
	GLAPP_DOUBLE = 0x04,		///< double buffer
	GLAPP_STEREO = 0x08,		///< stereo format
	GLAPP_FONT_LIST_SIZE = 255	///< number of font lists to generate
};

//-----------------------------------------------------------------------------

class WindowEx {
public:
	GLWindow *m_pWindow;///< parent window interface
	HWND	m_hwnd;		///< window handle
	HDC		m_hdc;		///< device context
	HGLRC   m_hglrc;	///< OpenGL context
	HPALETTE m_hPal;	///< handle to palette (or NULL)
	HPALETTE m_hOldPal;	///< handle to old palette (or NULL)
	int		m_nXPos;	///< x position (pixels)
	int		m_nYPos;	///< y position (pixels)
	int		m_nWidth;	///< width  (pixels)
	int		m_nHeight;	///< height (pixels)
	int		m_mode;		///< display mode flags
	int		m_cbits;	///< colour bits
	int		m_dbits;	///< depth buffer bits
	int		m_sbits;	///< stencil buffer bits
	int		m_albits;	///< alpha buffer bits
	int		m_acbits;	///< accum buffer bits
	string	m_title;	///< window title
	int		m_nFontSize;///< font size
	string  m_sFontName;///< font name
	bool	m_bFontSet;	///< font has been changed?
	bool	m_bShow;	///< show window when created?
	bool	m_bRedraw;	///< redraw pending?
	bool	m_bWantFull;///< want fullscreen mode?
	unsigned m_wantDisplay;	///< preferred display for fullscreen mode
	bool	m_bIsFull;	///< is fullscreen mode?
	bool	m_bOnTop;	///< is window top-most?
	bool	m_bNonClient;///< is cursor in non-client?
	RECT	m_oldRect;	///< old rect before fullscreen
	bool	m_bOnCreate;///< are we handling on create message?
	GLuint	m_nFontID;	///< font list ID, or zero
	HCURSOR m_hCursor;	///< handle to cursor (or NULL)
	HCURSOR m_hOldCursor;	///< handle to old cursor (or NULL)
	GLWindow::Cursor m_cursor;	///< cursor type
	std::vector<int> m_attribs;	///< OpenGL context creation attributes

	WindowEx(GLWindow *parent) {
		m_pWindow = parent;
		m_hwnd    = NULL;
		m_hdc     = NULL;
		m_hglrc   = NULL;
		m_hPal	  = NULL;	// JWW 16/11/03 added palette
		m_hOldPal = NULL;	// JWW 16/11/03 added palette
		m_nXPos   = CW_USEDEFAULT;
		m_nYPos   = CW_USEDEFAULT;
		m_nWidth  = 320;
		m_nHeight = 240;
		m_mode    = (GLAPP_RGBA | GLAPP_DEPTH | GLAPP_DOUBLE);
		m_cbits	  = 24;
		m_dbits	  = 32;
		m_sbits   = 0;
		m_albits  = 0;
		m_acbits  = 0;
		m_title   = "OpenGL";
		m_bShow   = true;
		m_bRedraw = true;
		m_bWantFull= false;
		m_bIsFull = false;
		m_bOnTop  = false;
		m_bOnCreate = false;
		m_bNonClient = false;
		m_nFontID = 0;		// JWW 23/09/03
		memset(&m_oldRect,0,sizeof(m_oldRect));
		m_hCursor = ::LoadCursor(NULL,IDC_ARROW);
		m_cursor   = GLWindow::CRArrow;
		m_bFontSet = false;
		m_nFontSize= 0;
		m_sFontName= "";
	}
	virtual ~WindowEx() {
		// JWW 18/10/05 removed this: it's useless because DeleteGL()
		// depends on a valid OpenGL context, and calls virtual functions
		// which will end up going to the base class if called from dtor
		//DeleteGL();
	}

	bool Create();
	void Delete();

	void Show();
	void Hide();

	bool SetupPFD();
	bool SetupPalette();
	bool CreateGL();
	void DeleteGL();

	bool SetFullscreen( bool fullScreen, unsigned display );

	bool HaveContext() const;
	bool Safe2ChangePF() const;

	bool SetOnTop(bool bTop);
	bool GetOnTop() const;

	void SwapBuffers() {
		if (m_hdc) ::SwapBuffers(m_hdc);
	}

	bool MakeCurrent(bool current=true);

	bool IsMainWnd() const;

	void SetSize(int w, int h);
	void SetPosition(int x, int y);

	bool SetTitle(const char *title);
	const char *GetTitle() const;

	bool SetCursor(GLWindow::Cursor c);

	/**
	* Set the font typeface and size to be used by the print() method. The
	* default is to use the default system font. Specifying zero size or
	* an empty/null font name will restore the original system font.
	*/
	bool SetFont(int nSize, const char *s);

	GLuint print(const char *s);

	bool GetKeyState(int key) const;

	void Redraw();
	void Close();

	LRESULT WindowProc(HWND, UINT, WPARAM, LPARAM);

	LRESULT msgCreateGL(HWND, WPARAM, LPARAM);
	LRESULT msgDestroy(HWND, WPARAM, LPARAM);
	LRESULT msgPaint(HWND, WPARAM, LPARAM);
	LRESULT msgSize(HWND, WPARAM, LPARAM);
	LRESULT msgClose(HWND, WPARAM, LPARAM);
	LRESULT msgMouseMove(HWND, WPARAM, LPARAM);
    LRESULT msgMouseWheel(HWND, UINT, WPARAM, LPARAM);
	LRESULT msgNCMouseMove(HWND, UINT, WPARAM, LPARAM);
	LRESULT msgMouseButton(HWND, UINT, WPARAM, LPARAM);
	LRESULT msgKeyboard(HWND, UINT, WPARAM, LPARAM);
	LRESULT msgChar(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	LRESULT msgSetCursor(HWND hWnd, WPARAM wParam, LPARAM lParam);
	LRESULT msgQueryNewPalette(HWND, UINT, WPARAM, LPARAM);
	LRESULT msgPaletteChanged(HWND, UINT, WPARAM, LPARAM);
	LRESULT msgCommand(HWND, WPARAM, LPARAM);
};
_GXBASE_END

//-----------------------------------------------------------------------------

#endif//__windowex_h
