#include "GXBase.h"
using namespace gxbase;

// our custom window
class SpinWnd :public GLWindow {
public:
	void OnCreate() {
		glLineWidth(4);
	}

	void OnDisplay() {
		glClear(GL_COLOR_BUFFER_BIT);

		glPushMatrix();
			glRotated(45 * App::GetTime(), 0,0,1);

			glBegin(GL_LINES);
				glVertex2f(-1,-1);
				glVertex2f(+1,+1);
				glVertex2f(-1,+1);
				glVertex2f(+1,-1);
			glEnd();
		glPopMatrix();

		SwapBuffers();
	}

	void OnIdle() {
		Redraw();
	}
};

// our custom application
class MyApp :public App {
private:
	SpinWnd wnd;
};

// our application instance
static MyApp theApp;
