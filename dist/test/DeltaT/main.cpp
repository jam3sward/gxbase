#include "GXBase.h"
using namespace gxbase;

// this is a simple example: it creates one window,
// and draws a rotating yellow triangle inside it

class MyWindow :public GLWindow {
public:
	void OnDisplay() {
		static const float speed = 1.0f;
		static float xpos = 0.0f, ypos = 0.0f;
		static float xinc = speed;

		glClear(GL_COLOR_BUFFER_BIT);
		glColor3f(0.5f-xpos,0.0f,0.5f+xpos);

		// This is a rewrite of DPMW tutorial 2, to use the new
		// App::GetDeltaTime() method requested by WJV (previous
		// example calculated delta time using App::GetTime() method)
		float delta_t = (float)App::GetDeltaTime();

		xpos += xinc*delta_t;

		if(xpos > 0.5f) {
			xinc = -xinc;
			xpos = 0.5f;
		};

		if(xpos < -0.5f) {
			xinc = -xinc;
			xpos = -0.5f;
		};

		glBegin(GL_TRIANGLES);
			glVertex2f(xpos-0.45f, ypos-0.45f);
			glVertex2f(xpos+0.45f, ypos-0.45f);
			glVertex2f(xpos,ypos+0.45f);
		glEnd();

		SwapBuffers();
	}

	
// When nothing else is happening OnIdle() is called.  In this case, the 
// inclusion Redraw() makes sure that the window is then updated, which 
// causes OnDisplay() to be called
	void OnIdle() {
		Redraw();
	}
};

class MyApp :public App {
	MyWindow w;
};

// this is the single instance of our application
//
static MyApp tut2a;
