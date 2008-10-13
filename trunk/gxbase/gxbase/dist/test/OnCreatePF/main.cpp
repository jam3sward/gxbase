#include "GXBase.h"
using namespace gxbase;

class MyWindow :public GLWindow {
public:
	void OnCreate() {
		// This demonstrates a bug in version 0.17 (now fixed!): the call 
		// to SetSize() causes the remaining gl calls to fail, due to context
		// loss on processing the size message: hence in 0.17, the window
		// appears black.
		// NOTE: In general it is better to call SetSize() from the window
		// constructor, because this causes the window to be created with
		// the correct size initially, rather than resizing it immediately
		// after creation.
		// NOTE: Problem was fixed in version 0.18 upward, so the
		// window appears red.
		SetSize(256,256);
		// set background colour to red
		glClearColor(1,0,0,0);
	}

	void OnDisplay() {
		glClear(GL_COLOR_BUFFER_BIT);
		SwapBuffers();
	}
};

class MyApp :public App {
private:
	MyWindow wnd;
};

static MyApp theApp;
