/**************************************************************************\
 *
 * This file is part of the GXBase graphics library.
 * Copyright (C) 2003-2006 James Ward, Department of Computer Science,
 * University of Hull. All rights reserved.
 *
 * UNIX port Copyright (C) 2008 John Tsiombikas <nuclear@member.fsf.org>
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

#include "Main.h"
using namespace gxbase;

//-----------------------------------------------------------------------------

/**
 * Pointer to single instance of Main class
 */
Main *Main::self = NULL;

#ifdef  _WIN32
	#pragma comment (lib,"opengl32")
	#pragma comment (lib,"winmm")
#endif//_WIN32

//-----------------------------------------------------------------------------

Main::Main() {
	dbg_printf("Main\n");
	m_pApp  = NULL;
	m_hInst = 0;

#ifdef __WIN32__
	m_hWndClass = 0;
	m_hWndHid = NULL;
	m_timerId = 0;
	m_bConsole = false;
#else
	m_bConsole = true;
#endif

	m_argc  = 0;
	m_argv  = NULL;
	m_pMainWnd = NULL;
	m_timerPeriod = 0;
}

Main::~Main() {
	dbg_printf("~Main\n");
#ifdef __WIN32__
	DeleteWndClass();
#endif
}

/**
 * This is the entry point for Main, it gets called once and returns when the
 * application is closing.
 */
int Main::Execute(int argc, char **argv) {
	dbg_printf("Main::Execute\n");

	// JWW 24/02/05 added more meaningful message than assert
	//assert(m_pApp!=NULL);
	if (m_pApp == NULL) {
		App::MsgPrintf("No application instance created, exiting.");
		return -1;
	}

	// store argc/argv values internally
	m_argc = argc;
	m_argv = argv;

	// call user App::OnCreate handler
	m_pApp->OnCreate();		// ###

	// having processed the App::OnCreate handler, it's time to create and
	// show all our windows that were declared either as members on the
	// class, or allocated using new in the App::OnCreate handler. if the
	// user went and created them anywhere else, they will need to manually
	// show the windows
	for (unsigned int n=0; n<m_wins.size(); n++)
		if (!m_wins[n]->HaveContext()) m_wins[n]->Create();

	int exitCode = 0;
	// only start the message loop if we have one or more windows: otherwise
	// our application can't be closed..
	if (m_wins.size()) {
		// we have window(s) so run the message loop
		exitCode = MessageLoop();
	} else if (!Main::Get()->GetConsole()) {
		// no windows created, and this isn't a console app.
		// display a warning message in debug mode
		#ifndef NDEBUG
			App::MsgPrintf("No windows were created, exiting.");
		#endif
	}

	// release any timer that was created
	SetTimerPeriod(0);

	// call user App::OnDestroy handler
	m_pApp->OnDestroy();

	return exitCode;
}//Execute

//-----------------------------------------------------------------------------

void Main::OnIdle() {
	// call main application idle event
	m_pApp->OnIdle();
	
	// pass idle event to all windows, and schedule redraw
	for (unsigned int n=0; n<m_wins.size(); n++)
		m_wins[n]->m_pWindow->OnIdle();
}//OnIdle

//-----------------------------------------------------------------------------

/**
 * This is the main message loop. It exits on receiving the WM_QUIT message.
 */
int Main::MessageLoop() {
	int res;

#ifdef __WIN32__
	MSG msg;

	do {
		if (PeekMessage(&msg,NULL,0,0,PM_REMOVE)) {
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		} else {
			// no message waiting: idle
			//if (_active) {
				OnIdle();
			//}
		}
	} while (msg.message != WM_QUIT);

	// WM_QUIT wParam is the parameter passed to PostQuitMessage() which
	// is an int, although WPARAM is a UINT_PTR hence this cast
	res = (int)msg.wParam;
#endif
#ifdef __X11__
	bool quit = false;
	Display *dpy = m_pMainWnd->dpy;
	while(!quit) {
		// [JT] it's better to handle all pending events before calling
		// the idle function. I suggest doing the same on win32 as well.
		while(XPending(dpy)) {
			XEvent xev;
			XNextEvent(dpy, &xev);

			// find the appropriate window and call its handle_events function
			for(unsigned int i=0; i<m_wins.size(); i++) {
				if(xev.xany.window == m_wins[i]->win) {
					if(!m_wins[i]->HandleEvents(&xev)) {
						quit = true;
					}
					break;
				}
			}

			if(quit) break;

			unsigned int msec = App::GetTime();
			if(m_timerPeriod && msec >= timer_exp) {
				m_timerPeriod = 0;
				timer_callback(msec);
			}
		}
		if(!quit) OnIdle();
	}
	res = 0;
#endif

	// JWW 18/10/05 added this to delete any windows left at end. this is
	// necessary because we don't handle WM_CLOSE normally, and because we
	// can't call virtual functions from the window destructors
	// To clarify: this destroys the OpenGL context and WIN32 window, it
	// doesn't actually delete the C++ object itself.
	for (unsigned i=0; i<m_wins.size(); i++)
		if (!m_wins[i]->IsMainWnd()) m_wins[i]->Delete();

	return res;
}//MessageLoop

//-----------------------------------------------------------------------------

#ifdef __WIN32__
/**
 * Register the window class. Returns true for success (or already done),
 * false in case of error.
 */
bool Main::CreateWndClass() {
	if (m_hWndClass)
		return true;
	else {
		// OpenGL window class should not have CS_PARENTDC, but
		// it should have CS_OWNDC
		WNDCLASS wc;
        wc.style		 = CS_OWNDC | CS_HREDRAW | CS_VREDRAW;
        wc.lpfnWndProc	 = WindowProc;
        wc.cbClsExtra	 = 0;
        wc.cbWndExtra	 = 0;
        wc.hInstance	 = GetInstanceHandle();
        wc.hIcon		 = LoadIcon  (NULL, IDI_APPLICATION);
        wc.hCursor		 = LoadCursor(NULL, IDC_ARROW);
        wc.hbrBackground = NULL;	// don't erase background
        wc.lpszMenuName  = "MainMenu"; 
        wc.lpszClassName = GLAPP_CLASSNAME; 
 
		// register the window class
		m_hWndClass = RegisterClass(&wc);
		return (m_hWndClass != 0);
	}
}//CreateWndClass

//-----------------------------------------------------------------------------

/**
 * Unregister window class.
 */
void Main::DeleteWndClass() {
	if (m_hWndClass && m_hInst)
		UnregisterClass((LPCTSTR)m_hWndClass, m_hInst);
}//DeleteWndClass

//-----------------------------------------------------------------------------

bool Main::CreateHidden() {
	// delete existing window if any
	if (m_hWndHid) DeleteHidden();
	// create new hidden window: we use this only as a fake parent for our
	// child windows, to prevent them from appearing on the taskbar
	m_hWndHid = CreateWindow(
		"BUTTON", "", WS_POPUP, 0,0, 1,1, NULL, NULL, GetInstanceHandle(), NULL
	);
	return (m_hWndHid != NULL);
}//CreateHidden

//-----------------------------------------------------------------------------

void Main::DeleteHidden() {
	if (m_hWndHid) DestroyWindow(m_hWndHid);
	m_hWndHid = NULL;
}//CreateHidden

#endif	// __WIN32__

//-----------------------------------------------------------------------------

/**
 * Add window pointer to internal list.
 */
bool Main::AddWnd(WindowEx *window) {
	if (window) {
		// JWW 27/08/03 make the first window added into the main window
		if (m_wins.size() == 0) SetMainWnd(window);
		// add window to list
		m_wins.push_back(window);
		return true;
	}
	return false;
}//AddWnd

//-----------------------------------------------------------------------------

/**
 * Delete window pointer from internal list
 */
void Main::DelWnd(WindowEx *window) {
	// search for window in m_wins, and remove it
	vector<WindowEx*>::iterator it;
	for (it = m_wins.begin(); it != m_wins.end(); it++)
		if (window == *it) {
			m_wins.erase(it);	// remove WindowEx* from m_wins
			dbg_printf("Main: DelWnd erased window 0x%08lX\n", (long)window);
			break;				// finished searching
		}
	dbg_printf("Main: %d windows remain\n", (int)m_wins.size());
}//DelWnd

//-----------------------------------------------------------------------------

bool Main::SetMainWnd(WindowEx *window) {
	if (window) {
		// it already is!
		if (m_pMainWnd == window) return true;

#ifdef __WIN32__
		if (m_pMainWnd && m_hWndHid) {
			// make existing window a child of the hidden window
			HWND hChild = m_pMainWnd->m_hwnd;
			SetParent( hChild, m_hWndHid );
			if ( !GetParent(hChild) ) {
				// window is child of desktop currently, clear WS_POPUP
				// and set WS_CHILD before SetParent
				DWORD dwStyle = GetWindowLong( hChild, GWL_STYLE );
				dwStyle &= ~WS_POPUP;	// clear WS_POPUP
				dwStyle |=  WS_CHILD;	// set   WS_CHILD
				SetWindowLong( hChild, GWL_STYLE, dwStyle );
			}
			// make this window a child of the hidden window
			SetParent( hChild, m_hWndHid );
		}

		// make this window a top-level window
		HWND hParent = window->m_hwnd;
		// make parent window a top-level window
		SetParent( hParent, NULL );
		// now clear WS_CHILD and set WS_POPUP style
		DWORD dwStyle = GetWindowLong( hParent, GWL_STYLE );
		dwStyle &= ~WS_CHILD;
		dwStyle |=  WS_POPUP;
		SetWindowLong( hParent, GWL_STYLE, dwStyle );
		// TODO: check that this doesn't mess up fullscreen mode
#endif

		// store pointer to new main window
		m_pMainWnd = window;

		return true;
	}
	return false;
}//SetMainWnd

//-----------------------------------------------------------------------------

WindowEx *Main::GetMainWnd() {
	return m_pMainWnd;
}//GetMainWnd

//-----------------------------------------------------------------------------

#ifdef __WIN32__
VOID CALLBACK Main::TimerCB(
	HWND /*hwnd*/,
	UINT /*uMsg*/,
	UINT_PTR /*idEvent*/,
	DWORD dwTime
) {
	App *pApp = Main::Get()->GetApp();
	if (pApp) pApp->OnTimer( (double)dwTime / 1000.0 );
}//TimerCB
#endif

#ifdef __unix__
void Main::timer_callback(unsigned int msec)
{
	App *app = Main::Get()->GetApp();
	if(app) {
		app->OnTimer((double)msec / 1000.0);
	}
}
#endif

//-----------------------------------------------------------------------------

unsigned Main::SetTimerPeriod(unsigned ms) {
	// check for noop
	if (ms == m_timerPeriod) return ms;

#ifdef __WIN32__
	// destroy any existing timer
	if (m_timerId) ::KillTimer(NULL, m_timerId);
	m_timerId = 0;
#endif

	// user wants to disable the timer
	if (!ms) {
		m_timerPeriod = 0;
		return 0;
	}

	// limit to 10ms minimum on all systems
	// [JT] why?
	if (ms < 10) ms=10;

#ifdef __WIN32__
	// we don't use a window handle because it would be tedious to manage
	// switching timers around when the user creates/destroys/switches main
	// windows while a timer is in use. therefore, we don't use the timer
	// messages but have a callback proc (which still runs from msg loop)
	m_timerId = ::SetTimer(NULL, 1, (UINT)ms, TimerCB);
	if (!m_timerId) {
		// failed to create timer
		m_timerPeriod = 0;
		return 0;
	}
#endif

	// store it (we cap to 10ms on all systems currently)
	m_timerPeriod = ms;
	timer_exp = App::GetTime() + ms;
	return m_timerPeriod;
}//SetTimerPeriod

//-----------------------------------------------------------------------------

unsigned Main::GetTimerPeriod() const {
	return m_timerPeriod;
}//GetTimerPeriod

//-----------------------------------------------------------------------------

#ifdef __WIN32__
/**
 * WindowProc: decode and handle windows messages
 */
LRESULT CALLBACK Main::WindowProc(
	HWND hWnd,      // handle to window
	UINT uMsg,      // message identifier
	WPARAM wParam,  // first message parameter
	LPARAM lParam   // second message parameter
) {
	if (uMsg == WM_NCCREATE) {
		// the WM_NCREATE is one of the first messages sent, and includes a
		// pointer to the LPCREATESTRUCT. in this structure, we put our window
		// class pointer at creation time. therefore we can retrieve it now,
		// and store in GWL_USERDATA so that we can retrieve it later.
		WindowEx* pWndEx=(WindowEx*)(((LPCREATESTRUCT)lParam)->lpCreateParams);
		if (pWndEx) {
			dbg_printf("WM_NCCREATE(pWindowEx=0x%08lX)\n", pWndEx);

			// store associated window class pointer in GWL_USERDATA
			//SetWindowLong(hWnd, GWL_USERDATA, (LONG)pWndEx);
			SetWindowLongPtr(hWnd, GWLP_USERDATA, (LONG_PTR)pWndEx);
		}
	}

	// attempt to get window pointer from GWL_USERDATA
	//WindowEx *pWndEx = (WindowEx*)GetWindowLong(hWnd, GWL_USERDATA);
	WindowEx *pWndEx = (WindowEx*)GetWindowLongPtr(hWnd, GWLP_USERDATA);
	// pass message onto the window, or fallback to default
	if (pWndEx)
		return pWndEx->WindowProc(hWnd, uMsg, wParam, lParam);
	return DefWindowProc(hWnd, uMsg, wParam, lParam);
}//WindowProc
#endif

//---- WinMain ----------------------------------------------------------------

#ifdef __WIN32__
/**
 * program entry point when building WIN32 application
 */
int WINAPI WinMain(
	HINSTANCE /*hInstance*/,	// handle to current instance
	HINSTANCE /*hPrevInstance*/,// handle to previous instance
	LPSTR	  /*lpCmdLine*/,	// pointer to command line
	int		  /*nCmdShow*/		// show state of window
) {
	dbg_printf("WinMain\n");
	Main::Get()->SetConsole(false);
	return Main::Get()->Execute(__argc,__argv);
}//WinMain
#endif

//---- main -------------------------------------------------------------------

/**
 * program entry point when building WIN32 console application
 */
int main(int argc, char **argv) {
	dbg_printf("main\n");
	Main::Get()->SetConsole(true);
	return Main::Get()->Execute(argc,argv);
}//main

//-----------------------------------------------------------------------------
