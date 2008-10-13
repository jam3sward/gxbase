#include "GXBase.h"
using namespace gxbase;

// this is a simple example: it creates one window,
// and draws a cross inside it

class MyWindow :public GLWindow {
public:
	void OnDisplay() {
		glClear(GL_COLOR_BUFFER_BIT);

		glBegin(GL_LINES);
			glVertex2f(-1,-1);
			glVertex2f(+1,+1);
			glVertex2f(-1,+1);
			glVertex2f(+1,-1);
		glEnd();

		SwapBuffers();
	}
};

class MyApp :public App {
	MyWindow w;
};

// this is the single instance of our application
//
static MyApp theApp;
