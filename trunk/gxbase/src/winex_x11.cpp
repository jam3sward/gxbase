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

#include "port.h"

#ifdef __X11__

#include <stack>
#include <stdlib.h>
#include <string.h>
#include <X11/Xlib.h>
#include <X11/cursorfont.h>
#include "winex_x11.h"
#include "GLWindow.h"
#include "ErrDbg.h"
#include "Main.h"

#ifdef USE_XRANDR
#include <X11/extensions/Xrandr.h>
#endif

#ifdef USE_XF86VM
#include <X11/extensions/xf86vmode.h>
#endif

static int get_size(Display *dpy, int scr, int *xsz, int *ysz);
static int set_size(Display *dpy, int scr, int xsz, int ysz);

using namespace gxbase;

WindowEx::WindowEx(GLWindow *parent)
{
	m_pWindow = parent;
	m_nXPos = m_nYPos = -1;
	m_nWidth = 800;
	m_nHeight = 600;
	m_mode = GLAPP_RGBA | GLAPP_DEPTH | GLAPP_DOUBLE;
	m_cbits = 24;
	m_dbits = 24;
	m_sbits = 0;
	m_title = "OpenGL/X11";
	m_bShow = true;
	m_bOnTop = false;
	m_bOnCreate = false;
	m_cursor = GLWindow::CRArrow;

	memset(keys, 0, sizeof keys);
	memset(skeys, 0, sizeof skeys);

	dpy = 0;
	win = 0;
	ctx = 0;
}

WindowEx::~WindowEx()
{
}

bool WindowEx::Create()
{
	if(win) {
		DeleteGL();
	}
	return CreateGL();
}

void WindowEx::Delete()
{
	DeleteGL();
}

#define SET_GLX_SIZE(s, sz)	\
	do {					\
		attr[i++] = (s);	\
		attr[i++] = (sz);	\
	} while(0)

bool WindowEx::CreateGL()
{
	if(!(dpy = XOpenDisplay(0))) {
		return false;
	}
	xa_wm_protocols = XInternAtom(dpy, "WM_PROTOCOLS", False);
	xa_wm_delete_window = XInternAtom(dpy, "WM_DELETE_WINDOW", False);
	xa_on_create = XInternAtom(dpy, "GXBASE_ON_CREATE", False);

	scr = DefaultScreen(dpy);
	Window root = RootWindow(dpy, scr);

	int attr[32];
	int i = 0;
	attr[i++] = GLX_RGBA;
	
	if(m_mode & GLAPP_DOUBLE) {
		attr[i++] = GLX_DOUBLEBUFFER;
	}

	int cbits = m_cbits / 3;
	SET_GLX_SIZE(GLX_RED_SIZE, cbits);
	SET_GLX_SIZE(GLX_GREEN_SIZE, cbits);
	SET_GLX_SIZE(GLX_BLUE_SIZE, cbits);
	SET_GLX_SIZE(GLX_DEPTH_SIZE, m_dbits);
	SET_GLX_SIZE(GLX_STENCIL_SIZE, m_sbits);
	attr[i] = None;

	dbg_printf("trying visual: color bits %d%d%d depth %d stencil %d\n",
			cbits, cbits, cbits, m_dbits, m_sbits);

	XVisualInfo *vis;
	if(!(vis = glXChooseVisual(dpy, scr, attr))) {
		err_printf("failed to find a suitable visual\n");
		return false;
	} else {
		int rbits, gbits, bbits, zbits, sbits;

		glXGetConfig(dpy, vis, GLX_RED_SIZE, &rbits);
		glXGetConfig(dpy, vis, GLX_GREEN_SIZE, &gbits);
		glXGetConfig(dpy, vis, GLX_BLUE_SIZE, &bbits);
		glXGetConfig(dpy, vis, GLX_DEPTH_SIZE, &zbits);
		glXGetConfig(dpy, vis, GLX_STENCIL_SIZE, &sbits);

		dbg_printf("got visual: %d%d%d d:%d s:%d\n", rbits, gbits, bbits, zbits, sbits);
	}

	if(!(ctx = glXCreateContext(dpy, vis, 0, True))) {
		err_printf("failed to create GLX context\n");
		XFree(vis);
		return false;
	}

	XSetWindowAttributes xattr;
	xattr.background_pixel = xattr.border_pixel = BlackPixel(dpy, scr);
	xattr.colormap = XCreateColormap(dpy, root, vis->visual, AllocNone);
	unsigned int attr_valid_mask = CWColormap | CWBackPixel | CWBorderPixel;

	/*
	if(m_bIsFull) {
		// save current video mode
		get_size(dpy, scr, &prev_xsz, &prev_ysz);

		// try to change video mode ...
		if(set_size(dpy, scr, m_nWidth, m_nHeight) == -1) {
			// if it fails, just resize the window to cover the screen
			XWindowAttributes rattr;
			XGetWindowAttributes(dpy, RootWindow(dpy, scr), &rattr);

			prev_xsz = m_nWidth;
			prev_ysz = m_nHeight;

			XResizeWindow(dpy, win, rattr.width, rattr.height);
		} else {
			vmode_changed = true;
		}

		// set the override-redirect attribute (window should be ignored by the WM)
		xattr.override_redirect = True;
		attr_valid_mask |= CWOverrideRedirect;
	}
	*/

	if(!(win = XCreateWindow(dpy, root, 0, 0, m_nWidth, m_nHeight, 0, vis->depth,
					InputOutput, vis->visual, attr_valid_mask, &xattr))) {
		err_printf("failed to create X window\n");
		XFree(vis);
		return false;
	}
	XFree(vis);

	if(m_bIsFull) {
		m_bIsFull = false;
		SetFullscreen(true);
	}

	// set the window event mask
	unsigned int events = ExposureMask | StructureNotifyMask | KeyPressMask |
		KeyReleaseMask | ButtonReleaseMask | ButtonPressMask | PointerMotionMask;
	XSelectInput(dpy, win, events);

	// let the window manager know that we're willing to participate to the
	// WM_DELETE_WINDOW ICCCM protocol.
	XSetWMProtocols(dpy, win, &xa_wm_delete_window, 1);

	XTextProperty wm_name;
	const char *str = m_title.c_str();
	XStringListToTextProperty((char**)&str, 1, &wm_name);
	XSetWMName(dpy, win, &wm_name);
	XSetWMIconName(dpy, win, &wm_name);
	XFree(wm_name.value);

	XClassHint class_hint;
	class_hint.res_name = (char*)"gxbase";
	class_hint.res_class = (char*)"gxbase";
	XSetClassHint(dpy, win, &class_hint);

	if(!MakeCurrent()) {
		err_printf("failed to make the GL context current\n");
		return false;
	}

	if(m_bShow) {
		XMapWindow(dpy, win);
	}

	XEvent ev;
	ev.type = ClientMessage;
	ev.xclient.window = win;
	ev.xclient.message_type = xa_on_create;
	ev.xclient.format = 32;
	XSendEvent(dpy, win, False, 0, &ev);

	return true;
}

void WindowEx::DeleteGL()
{
	if(dpy) {
		if(m_pWindow) {
			m_pWindow->OnDestroy();
		}

		if(ctx) glXDestroyContext(dpy, ctx);
		if(win) XDestroyWindow(dpy, win);
		MakeCurrent(false);
		XCloseDisplay(dpy);

		ctx = 0;
		win = 0;
		dpy = 0;
	}
}

/*
 * Fullscreen under X is a bit tricky. Some X servers (notably Xsgi) does
 * not allow the user to change the video mode, while most X servers until lately
 * wouldn't change the size of the root window even if you changed video mode.
 *
 * The fullscreen code first tries to change the video mode and root window size
 * through the XR&R extension. Next it tries to change the video mode only, through
 * the XF86VidMode extension. And if all else fails, it just resizes the window to
 * occupy the whole screen.
 */
bool WindowEx::SetFullscreen( bool fullscr, unsigned /*display*/ )
{
	if(m_bIsFull == fullscr) {
		return true;
	}

	if(!ctx) {
		m_bIsFull = fullscr;
		return true;
	}

	if(fullscr) {
		get_size(dpy, scr, &prev_xsz, &prev_ysz);

		if(set_size(dpy, scr, m_nWidth, m_nHeight) == -1) {
			XWindowAttributes rattr;
			XGetWindowAttributes(dpy, RootWindow(dpy, scr), &rattr);

			prev_xsz = m_nWidth;
			prev_ysz = m_nHeight;

			XResizeWindow(dpy, win, rattr.width, rattr.height);
		} else {
			vmode_changed = true;
		}

		XSetWindowAttributes xattr;
		xattr.override_redirect = True;
		XChangeWindowAttributes(dpy, win, CWOverrideRedirect, &xattr);
	} else {
		if(vmode_changed) {
			set_size(dpy, scr, prev_xsz, prev_ysz);
			vmode_changed = false;
		} else {
			XResizeWindow(dpy, win, prev_xsz, prev_ysz);
		}
	}

	m_bIsFull = fullscr;
	return true;
}

bool WindowEx::HaveContext() const
{
	return ctx != 0;
}

bool WindowEx::Safe2ChangePF() const
{
	if(!m_bOnCreate) {
		return true;
	} else {
		static bool warned;
		if(!warned) {
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
}

void WindowEx::Show()
{
	if(win) {
		XMapWindow(dpy, win);
	} else {
		m_bShow = true;
		CreateGL();
	}
}

void WindowEx::Hide()
{
	if(win) {
		XUnmapWindow(dpy, win);
	} else {
		m_bShow = false;
	}
}

bool WindowEx::SetOnTop(bool ontop)
{
	if(!win) {
		m_bOnTop = ontop;
		return true;
	}

	// raise the window
	if(ontop) {
		XRaiseWindow(dpy, win);
	}

	// add/remove on-top property (_NET_WM_STATE: _NET_WM_STATE_ABOVE)
	XEvent ev;
	memset(&ev, 0, sizeof ev);
	ev.type = ClientMessage;
	ev.xclient.window = win;
	ev.xclient.message_type = xa_net_wm_state;
	ev.xclient.format = 32;
	ev.xclient.data.l[0] = ontop ? xa_net_wm_state_add : xa_net_wm_state_remove;
	ev.xclient.data.l[1] = xa_net_wm_state_above;
	XSendEvent(dpy, RootWindow(dpy, scr), False, 0, &ev);

	m_bOnTop = ontop;
	return true;
}

bool WindowEx::GetOnTop() const
{
	return m_bOnTop;
}

void WindowEx::SwapBuffers()
{
	glXSwapBuffers(dpy, win);
}

bool WindowEx::MakeCurrent(bool current)
{
	static std::stack<GLXContext> ctx_stack;

	if(current) {
		dbg_printf("MakeCurrent: %d\n", (int)ctx);
		ctx_stack.push(glXGetCurrentContext());
		glXMakeCurrent(dpy, win, ctx);
	} else {
		GLXContext prev = ctx_stack.top();
		ctx_stack.pop();
		dbg_printf("MakeCurrent: %d\n", (int)prev);
		glXMakeCurrent(dpy, prev ? win : 0, prev);
	}
	return true;
}

bool WindowEx::IsMainWnd() const
{
	return Main::Get() && (Main::Get()->GetMainWnd() == this);
}

void WindowEx::SetSize(int w, int h)
{
	if(w < 0) w = 0;
	if(h < 0) h = 0;

	if(win) {
		XResizeWindow(dpy, win, w, h);
	}
	m_nWidth = w;
	m_nHeight = h;
}

void WindowEx::SetPosition(int x, int y)
{
	if(win) {
		XMoveWindow(dpy, win, x, y);
	}
	m_nXPos = x;
	m_nYPos = y;
}

bool WindowEx::SetTitle(const char *title)
{
	if(!title) {
		return false;
	}

	m_title = title;

	if(win) {
		XTextProperty wm_name;

		XStringListToTextProperty((char**)&title, 1, &wm_name);
		XSetWMName(dpy, win, &wm_name);
		XSetWMIconName(dpy, win, &wm_name);
		XFree(wm_name.value);
	}
	return true;
}

const char *WindowEx::GetTitle() const
{
	return m_title.c_str();
}

bool WindowEx::SetCursor(GLWindow::Cursor c)
{
	const int cid[] = {
		None,
		XC_left_ptr,
		XC_cross,
		XC_clock,
		XC_hand1
	};

	XDefineCursor(dpy, win, (Cursor)cid[(int)c]);
	m_cursor = c;

	return true;
}

bool WindowEx::SetFont(int size, const char *font_name)
{
	return false;	// TODO implement
}

unsigned int WindowEx::print(const char *str)
{
	return 0;	// TODO implement
}

bool WindowEx::GetKeyState(int key) const
{
	return keys[key];
}

void WindowEx::Redraw()
{
	XEvent ev;
	ev.type = Expose;
	ev.xexpose.x = ev.xexpose.y = 0;
	ev.xexpose.width = m_nWidth;
	ev.xexpose.height = m_nHeight;
	ev.xexpose.count = 0;

	XSendEvent(dpy, win, False, 0, &ev);
}

void WindowEx::Close()
{
	XEvent ev;
	ev.type = ClientMessage;
	ev.xclient.window = win;
	ev.xclient.message_type = xa_wm_protocols;
	ev.xclient.format = 32;
	ev.xclient.data.l[0] = xa_wm_delete_window;
	ev.xclient.data.l[1] = CurrentTime;

	XSendEvent(dpy, win, False, 0, &ev);
}

bool WindowEx::HandleEvents(const XEvent *ev)
{
	switch(ev->type) {
	case MapNotify:
		is_mapped = true;
		break;

	case UnmapNotify:
		is_mapped = false;
		break;

	case Expose:
		if(is_mapped && ev->xexpose.count == 0) {
			MakeCurrent(true);
			m_pWindow->OnDisplay();
			MakeCurrent(false);
		}
		break;

	case ClientMessage:
		// got a WM_DELETE_WINDOW
		if(ev->xclient.message_type == xa_wm_protocols &&
				(Atom)ev->xclient.data.l[0] == xa_wm_delete_window) {
			if(IsMainWnd()) {
				Delete();
				return false;
			} else {
				Hide();
			}

		// CreateGL sends this event when it's done setting up everything
		} else if(ev->xclient.message_type == xa_on_create) {
			m_bOnCreate = true;
			MakeCurrent(true);
			m_pWindow->OnCreate();
			MakeCurrent(false);
			m_bOnCreate = false;
		}
		break;

	case KeyPress:
	case KeyRelease:
		{
			KeySym sym = XLookupKeysym((XKeyEvent*)&ev->xkey, 0);
			if((sym & 0xff00) == 0xff00) {
				skeys[sym & 0xff] = ev->type == KeyPress;
			} else {
				keys[sym & 0xff] = ev->type == KeyPress;
			}

			MakeCurrent(true);
			m_pWindow->OnKeyboard((int)sym, ev->type == KeyPress);
			MakeCurrent(false);
		}
		break;

	case ButtonPress:
	case ButtonRelease:
		{
			MakeCurrent(true);
			// X11 mouse buttons start from 1 for some reason
			GLWindow::MouseButton bn = (GLWindow::MouseButton)(ev->xbutton.button - 1);
			m_pWindow->OnMouseButton(bn, ev->type == ButtonPress);
			MakeCurrent(false);
		}
		break;

	case MotionNotify:
		MakeCurrent(true);
		m_pWindow->OnMouseMove(ev->xmotion.x, m_nHeight - ev->xmotion.y - 1);
		MakeCurrent(false);
		break;

	case ConfigureNotify:
		m_nXPos = ev->xconfigure.x;
		m_nYPos = ev->xconfigure.y;

		if(ev->xconfigure.width != m_nWidth || ev->xconfigure.height != m_nHeight) {
			m_nWidth = ev->xconfigure.width;
			m_nHeight = ev->xconfigure.height;

			MakeCurrent(true);
			m_pWindow->OnResize(ev->xconfigure.width, ev->xconfigure.height);
			MakeCurrent(false);
		}
		break;

	default:
		break;
	}

	return true;
}

#ifdef USE_XRANDR
static char *randr_err_msg[] = {
	"RRSetConfigSuccess",
	"RRSetConfigInvalidConfigTime",
	"RRSetConfigInvalidTime",
	"RRSetConfigFailed"
};
#endif

static int get_size(Display *dpy, int scr, int *xsz, int *ysz)
{
	Window root;
#if defined(USE_XRANDR) || defined(USE_XF86VM)
	int event_base, error_base;
#endif

	root = RootWindow(dpy, scr);

	/* first try r&r */
#ifdef USE_XRANDR
	if(XRRQueryExtension(dpy, &event_base, &error_base)) {
		XRRScreenConfiguration *xrr_config;
		XRRScreenSize *ssizes;
		Rotation rot;
		int ssize_count, curr;

		if(!(xrr_config = XRRGetScreenInfo(dpy, root))) {
			fprintf(stderr, "failed to retrieve screen configuration\n");
			return -1;
		}
		ssizes = XRRConfigSizes(xrr_config, &ssize_count);
		curr = XRRConfigCurrentConfiguration(xrr_config, &rot);

		*xsz = ssizes[curr].width;
		*ysz = ssizes[curr].height;

		XRRFreeScreenConfigInfo(xrr_config);
		return 0;
	}
#endif

	/* then try xf86vm */
#ifdef USE_XF86VM
	if(XF86VidModeQueryExtension(dpy, &event_base, &error_base)) {
		XF86VidModeModeLine modeline;
		int dot_clock;

		if(!XF86VidModeGetModeLine(dpy, scr, &dot_clock, &modeline)) {
			fprintf(stderr, "failed to get current video mode\n");
			return -1;
		}

		*xsz = modeline.hdisplay;
		*ysz = modeline.vdisplay;

		if(modeline.privsize) {
			XFree(modeline.private);
		}
		return 0;
	}
#endif

	fprintf(stderr, "can't get any size printfrmation on this X server\n");
	return -1;
}

static int set_size(Display *dpy, int scr, int xsz, int ysz)
{
	Window root;
#if defined(USE_XRANDR) || defined(USE_XF86VM)
	int i, event_base, error_base;
#endif

	root = RootWindow(dpy, scr);

	/* first try r&r */
#ifdef USE_XRANDR
	if(XRRQueryExtension(dpy, &event_base, &error_base)) {
		Status st;
		XRRScreenConfiguration *xrr_config;
		XRRScreenSize *ssizes;
		Rotation rot;
		int ssize_count, curr;
		Time timestamp, cfg_timestamp;

		if(!(xrr_config = XRRGetScreenInfo(dpy, root))) {
			err_printf("failed to retrieve screen configuration\n");
			return -1;
		}
		ssizes = XRRConfigSizes(xrr_config, &ssize_count);
		curr = XRRConfigCurrentConfiguration(xrr_config, &rot);
		timestamp = XRRConfigTimes(xrr_config, &cfg_timestamp);

		if(xsz == ssizes[curr].width && ysz == ssizes[curr].height) {
			XRRFreeScreenConfigInfo(xrr_config);
			return 0;
		}

		for(i=0; i<ssize_count; i++) {
			if(ssizes[i].width == xsz && ssizes[i].height == ysz) {
				break;
			}
		}
		if(i == ssize_count) {
			err_printf("requested size unsuppored by the X server configuration\n");
			XRRFreeScreenConfigInfo(xrr_config);
			return -1;
		}

		if((st = XRRSetScreenConfig(dpy, xrr_config, root, i, rot, timestamp)) != 0) {
			err_printf("failed to set resolution with r-and-r, error: %d (%s)\n", st, randr_err_msg[st]);
			XRRFreeScreenConfigInfo(xrr_config);
#ifdef USE_XF86VM
			dbg_printf("retrying with xf86vm...\n");
			goto retry_with_xf86vm;
#endif
			return -1;
		}

		XRRFreeScreenConfigInfo(xrr_config);
		return 0;
	}
#endif

	/*try xf86vm */
#ifdef USE_XF86VM
retry_with_xf86vm:
	if(XF86VidModeQueryExtension(dpy, &event_base, &error_base)) {
		XF86VidModeModeInfo **modes;
		int mode_count;

		if(!XF86VidModeGetAllModeLines(dpy, scr, &mode_count, &modes)) {
			err_printf("failed to get list of available video modes\n");
			return -1;
		}

		for(i=0; i<mode_count; i++) {
			if(modes[i]->hdisplay == xsz && modes[i]->vdisplay == ysz) {
				break;
			}
		}
		if(i == mode_count) {
			err_printf("requested size unsuppored by the X server configuration\n");
			XFree(modes);
			return -1;
		}

		if(!XF86VidModeSwitchToMode(dpy, scr, modes[i])) {
			err_fprintf("failed to set requested size with xf86vm\n");
			XFree(modes);
			return -1;
		}
		XF86VidModeSetViewPort(dpy, scr, 0, 0);

		XFree(modes);
		return 0;
	}
#endif

	err_printf("not possible to change display size on this X server\n");
	return -1;
}

#endif	// __X11__
