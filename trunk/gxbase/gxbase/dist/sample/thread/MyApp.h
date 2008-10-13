#ifndef __MyApp_h
#define __MyApp_h

#include "GXBase.h"
using namespace gxbase;
#include "MyWnd.h"
#include "SharedMem.h"

//-----------------------------------------------------------------------------

/**
 * Custom application class, derived from GXBase App class
 */
class MyApp :public App {
public:
	MyApp();

	void OnCreate();
	void OnDestroy();

	static MyApp & Get();

private:
	/**
	 * This function will be started on a second thread
	 */
	static unsigned __stdcall ThreadFunc(void *context);

private:
	MyWnd  m_wnd;		///> the window (..you can have more; eg. m_wnd[3])
	HANDLE m_hThread;	///> handle of simulation thread

public:
	SharedMem m_shared;	///> shared memory
};

//-----------------------------------------------------------------------------

#endif//__MyApp_h
