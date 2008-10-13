#ifndef __main_h
#define __main_h

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

#ifdef _WIN32
#include <windows.h>
#endif//_WIN32

#include <assert.h>
#include <vector>
using namespace std;

#include "GXBase.h"
#include "ErrDbg.h"
#include "App.h"
#include "WindowEx.h"

//---- Main -------------------------------------------------------------------

_GXBASE_BEGIN
class Main {
public:
	static Main *Get() {
		if (!self) {
			self=new Main;
			assert(self!=NULL);
			atexit(Destroy);
		}
		return self;
	}

	App *GetApp() { return m_pApp; }

	void CreateApp(App *app) {
		if (!m_pApp)
			m_pApp=app;
		else {
			err_printf("Error: more than one application instance defined!\n");
			exit(1);
		}
	}
	void DeleteApp(App *app) {
		if (m_pApp==app) m_pApp=0;
	}

	int Execute(int argc, char **argv);

	HINSTANCE GetInstanceHandle() {
		if (!m_hInst) m_hInst = GetModuleHandle(NULL);
		return m_hInst;
	}

	int ArgCount() const {
		return m_argc;
	}

	const char *Arg(int n) const {
		return ((n>=0)&&(n<ArgCount())&&m_argv) ? m_argv[n]:"";
	}

	bool CreateWndClass();
	void DeleteWndClass();

	bool CreateHidden();
	void DeleteHidden();

	bool AddWnd(WindowEx *window);
	void DelWnd(WindowEx *window);
	bool SetMainWnd(WindowEx *window);
	WindowEx *GetMainWnd();
	HWND GetHiddenWnd() const { return m_hWndHid; }

	void SetConsole(bool isConsole) { m_bConsole=isConsole; }
	bool GetConsole() const { return m_bConsole; }

	unsigned SetTimerPeriod(unsigned ms);
	unsigned GetTimerPeriod() const;

	static VOID CALLBACK TimerCB(
		HWND hwnd,
		UINT uMsg,
		UINT_PTR idEvent,
		DWORD dwTime
	);

private:
	int MessageLoop();

	void OnIdle();

	static LRESULT CALLBACK WindowProc(HWND, UINT, WPARAM, LPARAM);

private:
	Main() {
		dbg_printf("Main\n");
		m_pApp  = NULL;
		m_hInst = NULL;
		m_hWndClass = 0;
		m_argc  = 0;
		m_argv  = NULL;
		m_bConsole = false;
		m_pMainWnd = NULL;
		m_hWndHid = NULL;
		m_timerPeriod = 0;
		m_timerId = 0;
	}

	virtual ~Main() {
		dbg_printf("~Main\n");
		DeleteWndClass();
	}

	static void Destroy() {
		delete self;
	}

private:
	App *m_pApp;
	HINSTANCE m_hInst;			// application instance handle
	ATOM	  m_hWndClass;		// window class atom
	HWND	  m_hWndHid;		// hidden window
	static Main *self;
	int	   m_argc;				// argument count
	char **m_argv;				// pointer to arguments
	vector<WindowEx*> m_wins;	// vector of window pointers
	bool	m_bConsole;			// is this a console app?
	WindowEx *m_pMainWnd;		// pointer to main windowex object	
	UINT_PTR m_timerId;			// timer id or zero
	unsigned m_timerPeriod;		// timer period (ms) or zero (disabled)
};
_GXBASE_END

#endif//__main_h