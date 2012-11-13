/**************************************************************************\
 *
 * This file is part of the GXBase graphics library.
 * Copyright (C) 2008 John Tsiombikas <nuclear@member.fsf.org>
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
#ifndef GXBASE_WIN_X11_H_
#define GXBASE_WIN_X11_H_

#include <string>
#include <vector>
#include <X11/Xlib.h>
#include <GL/glx.h>

#include "GXBase.h"

_GXBASE_BEGIN

enum GLAppConstants {
	GLAPP_RGBA   = 0x01,		///< RGBA pixel format
	GLAPP_DEPTH  = 0x02,		///< depth buffer
	GLAPP_DOUBLE = 0x04,		///< double buffer
	GLAPP_STEREO = 0x08,		///< stereo format
	GLAPP_FONT_LIST_SIZE = 255	///< number of font lists to generate
};

class GLWindow;

class WindowEx {
public:
	Display *dpy;		// X display (connection)
	int scr;
	Window win;			// window xid
	GLXContext ctx;		// OpenGL rendering context
	// various atoms
	Atom xa_wm_protocols;
	Atom xa_wm_delete_window;
	Atom xa_net_wm_state;
	Atom xa_net_wm_state_add, xa_net_wm_state_remove;
	Atom xa_net_wm_state_above;
	Atom xa_on_create;

	bool is_mapped;			// is the window mapped?
	int prev_xsz, prev_ysz;
	bool vmode_changed;
	bool keys[256], skeys[256];

	GLWindow *m_pWindow;
	int m_nXPos, m_nYPos;
	int m_nWidth, m_nHeight;
	int m_mode;
	int m_cbits;			// color depth (in bits)
	int m_dbits, m_sbits;	// depth/stencil bits
	int m_albits, m_acbits;
	bool m_bIsFull;			// fullscreen?
	std::string m_title;	// window title
	bool m_bShow;			// show when created?
	bool m_bOnTop;			// always-on-top?
	bool m_bOnCreate;
	GLWindow::Cursor m_cursor;
	std::vector<int> m_attribs;	///< OpenGL context creation attributes

	WindowEx(GLWindow *parent);
	virtual ~WindowEx();

	bool Create();
	void Delete();

	bool CreateGL();
	void DeleteGL();

	bool SetFullscreen(bool full);

	bool HaveContext() const;
	bool Safe2ChangePF() const;

	void Show();		// map the window
	void Hide();		// unmap the window

	bool SetOnTop(bool ontop);
	bool GetOnTop() const;
	
	void SwapBuffers();	// present the backbuffer
	bool MakeCurrent(bool current = true);

	bool IsMainWnd() const;

	void SetSize(int w, int h);
	void SetPosition(int x, int y);

	bool SetTitle(const char *title);
	const char *GetTitle() const;

	bool SetCursor(GLWindow::Cursor c);

	bool SetFont(int size, const char *font_name);
	unsigned int print(const char *str);

	bool GetKeyState(int key) const;

	void Redraw();
	void Close();

	bool HandleEvents(const XEvent *ev);
};

_GXBASE_END

#endif	/* GXBASE_WIN_X11_H_ */
