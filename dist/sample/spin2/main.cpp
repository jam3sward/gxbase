#include "GXBase.h"
using namespace gxbase;

// window class: draws a spinning cross
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

// red spinning cross
class RedWnd :public SpinWnd {
public:
	void OnCreate() {
		SpinWnd::OnCreate();
		glColor3f(1,0,0);
	}
};

// green spinning cross
class GrnWnd :public SpinWnd {
public:
	void OnCreate() {
		SpinWnd::OnCreate();
		glColor3f(0,1,0);
	}
};

// our custom application: with two windows
class MyApp :public App {
private:
	RedWnd r;
	GrnWnd g;
};

// our application instance
static MyApp theApp;
