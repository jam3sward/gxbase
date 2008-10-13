#include "GXBase.h"
using namespace gxbase;

#include "World.h"
#include "MyWindow.h"
#include "MyApp.h"

static MyApp theApp;

void MyApp::OnCreate() {
	// here, you could load your world from a file:
	// using ArgCount() and Arg() you could read the command line
	// arguments to get a filename.. then call m_world.Load(..)

	// layout the windows
	ApplyLayout();
}//OnCreate

void MyApp::ApplyLayout() {
	const int
		w        = 320,		// window width
		h        = 240,		// window height
		hs       = 8,		// horizontal spacing
		vs       = 26,		// vertical spacing
		nWindows = sizeof(m_win)/sizeof(m_win[0]),	// number of windows
		nRows    = 2,		// number of rows
		nCols    = 2;		// number of columns

	// resize/reposition the windows
	for (int n=0; n<nWindows; n++) {
		m_win[n].SetSize(w,h);
		m_win[n].SetPosition((w+hs)*(n%nCols), (h+vs)*(n/nRows));
	}
}//ApplyLayout

MyApp &MyApp::GetApp() {
	return theApp;
}
