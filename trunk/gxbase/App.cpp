#include <assert.h>
#include <windows.h>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

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

#include "GXBase.h"
#include "ErrDbg.h"
#include "Main.h"
using namespace gxbase;

//---- App --------------------------------------------------------------------

App::App() {
	Main::Get()->CreateApp(this);
}

App::~App() {
	Main::Get()->DeleteApp(this);
}

void App::OnCreate()  {
	dbg_printf("App::OnCreate\n");
}

void App::OnDestroy() {
	dbg_printf("App::OnDestroy\n");
}

App *App::Get() {
	return Main::Get()->GetApp();
}

int App::ArgCount() const {
	return Main::Get()->ArgCount();
}

const char *App::Arg(int n) const {
	return Main::Get()->Arg(n);
}

double App::GetTime() {
	return (double)timeGetTime() / 1000.0;
}

// JWW 29/10/03 added
void App::SetDebugMessageLevel(int level) {
#ifdef  _DEBUG
	s_dbgMsgLevel = (level>=0)?level:0;
#endif//_DEBUG
}

/**
 * Returns the elapsed time since the last call to GetDeltaTime().
 * If this is the first call to GetDeltaTime(), it will return a
 * default interval of 1/50th of a second.
 */
double App::GetDeltaTime() {
	double timeNow = (double)timeGetTime() / 1000.0;
	static double timeOld = timeNow - (1.0/50.0);

	double delta = timeNow - timeOld;
	timeOld = timeNow;

	return delta;
}//GetDeltaTime

void App::MsgPrintf(const char* format, ...)
{
	va_list parms;
	va_start(parms, format);

	// buffer for formatted string
	const int count=1024;
	char *buffer = new char[count];
	if (!buffer) return;

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
		delete [] buffer;
        // an error occurred
        return;
    } else if (res == 1) {
        // out of buffer space (buffer was filled, but not terminated)
		// null terminate it ourselves (string will be truncated)
        buffer[count-1] = 0;
    }

	if (Main::Get()->GetConsole())
		printf(buffer);
	else
		MessageBox(NULL, buffer, "Message", MB_OK);

	// release buffer
	delete [] buffer;
 
	va_end(parms);
}//App::MsgPrintf

/**
 * Calling the Close() method will post a request to the application
 * to close gracefully. The same effect can be achieved by closing
 * the main application window.
 */
void App::Close() {
	// get main window extended structure
	WindowEx *pWindowEx = Main::Get()->GetMainWnd();
	// get parent window
	GLWindow *pWindow = pWindowEx?pWindowEx->m_pWindow:0;
	// send close message
	if (pWindow) pWindow->Close();
}//Close

// JWW 22/01/04 added
unsigned App::SetTimerPeriod(unsigned ms) {
	return Main::Get()->SetTimerPeriod(ms);
}//SetTimerPeriod

// JWW 22/01/04 added
unsigned App::GetTimerPeriod() const {
	return Main::Get()->GetTimerPeriod();
}//GetTimerPeriod
