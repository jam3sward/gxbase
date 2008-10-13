#include "MyApp.h"
#include <process.h>
#include <math.h>

//-----------------------------------------------------------------------------

// this is here to show the console in debug mode, and provide some
// convenient debug macros
#ifdef _DEBUG
	#pragma comment (linker, "/subsystem:console")
	#include <stdio.h>
	#define dbg_printf printf
#else
	inline int dbg_printf(const char *,...) { return 0; }
#endif

//-----------------------------------------------------------------------------

/**
 * The one and only instance of MyApp
 */
static MyApp theApp;

//-----------------------------------------------------------------------------

/**
 * This is our thread function. The code in here runs on a separate thread,
 * independently of the main application.
 */
unsigned __stdcall MyApp::ThreadFunc(void *context) {
	// when we enter, we are passed a pointer to the application class
	MyApp *app = (MyApp*)context;
	if (!app) {
		_endthreadex(0);
		return 0;
	}
	dbg_printf("thread: begin\n");

	// convenient reference to shared memory structure
	SharedMem &shared = app->m_shared;

	float a = 0.0f;
	bool stop = false;

	// until requested to stop
	while (!stop) {
		// wait 10ms, move 1 degree(ish)
		Sleep(10);
		a += 3.14f / 180.0f;
		// gain access to shared memory
		if (shared.Acquire()) {
			// now we can modify the shared memory..
			__try {
				// update position
				shared.x = cos(a);
				shared.y = sin(a);
				// check to see if we should stop
				stop = shared.stop;
			} __finally {
				// release shared memory
				shared.Release();
			}
		}
	}//while

	dbg_printf("thread: terminating\n");
	_endthreadex(0);

	return 0;
}//ThreadFunc

//-----------------------------------------------------------------------------

/**
 * Constructor
 */
MyApp::MyApp() {
	m_hThread = NULL;
}//MyApp

//-----------------------------------------------------------------------------

/**
 * Called when the application is created
 */
void MyApp::OnCreate() {
	// create simulation thread
    unsigned threadId=0;
	m_hThread = (HANDLE)_beginthreadex(
		NULL,		// no security attributes (child cannot inherited handle)
		1024*1024,	// 1MB stack size
		ThreadFunc,	// code to run on new thread
		this,		// pointer to host application class
		0,			// run immediately (could create suspended)
		&threadId	// OUT: returns thread ID
	);

	if (!m_hThread) {
		MsgPrintf("Error: failed to create simulation thread");
		return;
	}
}//OnCreate

//-----------------------------------------------------------------------------

void MyApp::OnDestroy() {
	// have we a 2nd thread?
	if (m_hThread) {
		// ask it to stop politely
		m_shared.stop = true;
		// wait for it to stop
		WaitForSingleObject(m_hThread, INFINITE);
		// close thread handle
		CloseHandle(m_hThread);
		m_hThread=0;
	}
}//OnDestroy

//-----------------------------------------------------------------------------

MyApp & MyApp::Get() {
	return theApp;
}//Get

//-----------------------------------------------------------------------------
