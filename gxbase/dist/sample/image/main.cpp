#include "GXBase.h"
using namespace gxbase;

class MyWnd :public GLWindow {
public:
	MyWnd() {
		SetSize(120,85);
	}

	void OnCreate() {
		// set up texturing for linear mip-mapping
		glEnable(GL_TEXTURE_2D);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

		// clear window first: it might take a moment before image loads
		glClear(GL_COLOR_BUFFER_BIT);
		SwapBuffers();

		// load image
		img.Load("test8bit.bmp");
		// build 2D mip-maps from image
		img.gluBuild2DMipmaps();
	}

	void OnDisplay() {
		// draw a textured quad, filling the window
		glBegin(GL_QUADS);
			glTexCoord2f(0,0); glVertex2f(-1,-1);
			glTexCoord2f(1,0); glVertex2f(+1,-1);
			glTexCoord2f(1,1); glVertex2f(+1,+1);
			glTexCoord2f(0,1); glVertex2f(-1,+1);
		glEnd();

		// swap buffers to make it visible
		SwapBuffers();
	}

private:
	Image img;
};

class MyApp :public App {
private:
	MyWnd wnd;
};

static MyApp theApp;
