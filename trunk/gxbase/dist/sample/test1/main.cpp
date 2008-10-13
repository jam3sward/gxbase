#include "GXBase.h"
using namespace gxbase;

class MyWnd :public GLWindow {
public:
	void OnDisplay() {
		glBegin(GL_QUADS);
			glColor3f(1,0,0); glVertex2f(-1,-1);
			glColor3f(0,1,0); glVertex2f(+1,-1);
			glColor3f(0,0,1); glVertex2f(+1,+1);
			glColor3f(1,1,0); glVertex2f(-1,+1);
		glEnd();
		SwapBuffers();
	}

	void OnIdle() {
		Redraw();
	}
};

class MyApp :public App {
private:
	MyWnd wnd;
};

static MyApp theApp;
