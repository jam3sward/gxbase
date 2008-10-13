#include "GXBase.h"
using namespace gxbase;
#include <iostream>
using namespace std;

/**
 * Q0001: OnDestroy() of derived window class not called at exit
 * bug reported by Kostas Vlahavas on 17/10/05, and confirmed here
 * with GXBase version 0.48
 *
 * To demonstrate the bug, press 'q' key to quit or hit close icon
 * on Window. When the main window is closed, both windows should
 * receive the OnDestroy event. However, on 0.48 the derived
 * OnDestroy() method is not called.
 *
 * This bug has been fixed in 0.49
 */
class MyWindow :public GLWindow {
public:
	MyWindow(int id) :m_id(id) {
		//App::SetDebugMessageLevel(1);
		cout<<"MyWindow("<<m_id<<")\n";
	}

	virtual ~MyWindow() {
		cout<<"~MyWindow("<<m_id<<")\n";
	}

	virtual void OnCreate() {
		cout<<"## OnCreate("<<m_id<<")\n";
	}

	virtual void OnDestroy() {
		cout<<"## OnDestroy("<<m_id<<") ";
		if (wglGetCurrentContext()!=0)
			cout<<"- GL context active\n";
		else
			cout<<endl;
		// Q0001: OnDestroy() of derived window class not called at exit
		// bug reported by Kostas Vlahavas on 17/10/05
	}

	virtual void OnKeyboard(int key, bool down) {
		if (down) switch (tolower(key)) {
		case 's':	// this toggles stencil bits to force destroy/create
			SetStencilBits( GetStencilBits() ^ 1 );
			break;
		case 'q':	// quit this window
			Close();
			break;
		}
	}

private:
	int m_id;
};

class MyApp :public App {
public:
	MyApp() :m_wnd1(1),m_wnd2(2) {}
	MyWindow m_wnd1,m_wnd2;
};

static MyApp theApp;
