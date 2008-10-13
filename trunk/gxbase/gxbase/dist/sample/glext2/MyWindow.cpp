#include "MyWindow.h"
#include "MyApp.h"

void MyWindow::OnCreate() {
	// load OpenGL extensions
	if (!m_glex.Load()) {
		// note: you could just call 'm_glex.Load()' and ignore the result!
		// this displays a warning message if the extensions can't be loaded
		// it only does it once (in case you have multiple windows..)
		static bool warned=false;
		if (!warned) {
			App::MsgPrintf("Failed to load OpenGL extensions");
			warned=true;
		}
	}

	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_DEPTH_TEST);
}//OnCreate

void MyWindow::ViewSystem() {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0f, Aspect(), 1.0f, 10.f);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(0,0,2, 0,0,0, 0,1,0);
}//ViewSystem

void MyWindow::OnDisplay() {
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

	ViewSystem();

	// ask object to draw itself: pass it our extensions
	MyApp::GetApp().GetWorld().Draw( m_glex );
	// note: the reasoning behind this is that each OpenGL context/window
	// can potentially have _different_extensions_, therefore we
	// must be careful to associate extensions with only one context/window

	SwapBuffers();
}//OnDisplay

void MyWindow::OnKeyboard(int key, bool down) {
	if (down) switch (tolower(key)) {
		case VK_ESCAPE:	// Quit the application when ESC pressed in any window
			App::Get()->Close();
			break;
	}
}//OnKeyboard
