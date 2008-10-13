#include "GXBase.h"
using namespace gxbase;

//-----------------------------------------------------------------------------

class MyWindow :public GLWindow {
	float u,v;

public:
	MyWindow() :u(0),v(0) {}

	void OnCreate();
	void OnDisplay();
	void OnMouseButton(MouseButton button, bool down);
	void OnMouseMove(int x, int y);
};


void MyWindow::OnCreate() {
	// increase line width
	glLineWidth(4.0f);
}

void MyWindow::OnDisplay() {
	// clear the window
	glClear(GL_COLOR_BUFFER_BIT);

	// draw a cross that follows the mouse pointer
	glBegin(GL_LINES);
		glVertex2f(-1,-1); glVertex2f(u,v);
		glVertex2f(-1,+1); glVertex2f(u,v);
		glVertex2f(+1,-1); glVertex2f(u,v);
		glVertex2f(+1,+1); glVertex2f(u,v);
	glEnd();

	// swap buffers to make drawing visible
	SwapBuffers();
}

void MyWindow::OnMouseButton(MouseButton button, bool down) {
	// return immediately if button is pressed down
	if (down) return;

	// else if button was released, change colour
	switch (button) {
	case MBLeft:
		glColor3f(1,0,0);
		break;
	case MBMiddle:
		glColor3f(0,1,0);
		break;
	case MBRight:
		glColor3f(0,0,1);
		break;
	}

	// redraw the display
	Redraw();
}

void MyWindow::OnMouseMove(int x, int y) {
	// when the mouse moves, update the stored (u,v) coords.
	// note that they are scaled into the range -1 to +1 on each axis
	if (Width())  u = 2.0f * (float)x / (float)Width()  - 1.0f;
	if (Height()) v = 2.0f * (float)y / (float)Height() - 1.0f;
	
	// redraw the display
	Redraw();
}

//-----------------------------------------------------------------------------

// our application exists only to hold the main window
class MyApp :public App {
	MyWindow w;
};

// single application instance
static MyApp theApp;

//-----------------------------------------------------------------------------
