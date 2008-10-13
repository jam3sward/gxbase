#ifndef __MyWnd_h
#define __MyWnd_h

//-----------------------------------------------------------------------------

#include "GXBase.h"
using namespace gxbase;

//-----------------------------------------------------------------------------

/**
 * Custom window class, derived from GXBase GLWindow
 */
class MyWnd :public GLWindow {
public:
	void OnDisplay();
	void OnIdle();
};

//-----------------------------------------------------------------------------

#endif//__MyWnd_h
