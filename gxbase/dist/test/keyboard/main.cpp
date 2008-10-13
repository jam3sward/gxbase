#include "GXBase.h"
using namespace gxbase;
#include <string>
#include <vector>
using namespace std;

static const string PROMPT("> ");

class MyWnd :public GLWindow {
public:
	MyWnd();

	void OnDisplay();
	void OnKeyboard(int key, bool down);
	void OnIdle();

private:
	vector<string> text;
};

static class MyApp :public App {
private:
	MyWnd m_mainWnd;
} theApp;

MyWnd::MyWnd() {
	text.push_back(PROMPT);
}

void MyWnd::OnDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0,Width(),0,Height(),-1,1);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	// draw the text
	for (unsigned n=0; n<text.size(); n++) {
		glColor3f(0,1,0);
		glRasterPos2f(2,2+(float)(text.size()-n)*15);
		Printf( text[n].c_str() );
	}

	glColor3f(1,1,0);
	glRasterPos2f(2,2);
	if (GetShiftKey()) Printf("SHIFT ");
	if (GetCtrlKey())  Printf("CTRL ");
	if (GetAltKey())   Printf("ALT ");

	SwapBuffers();
}//OnDisplay

void MyWnd::OnKeyboard(int key, bool down) {
	if (down) {
		switch (key) {
		case VK_RETURN:
			// return: add a new line
			text.push_back(PROMPT);
			break;
		case VK_BACK: {
			// backspace: delete last character
			unsigned len = text.back().length();
			if (len > PROMPT.length())
				text.back().erase(len-1);
			} break;
		default:
			// a printable character: print it
			if ((key > 31) && (key < 127))
				text.back() += (char)key;
		}
	}
}//OnKeyboard

void MyWnd::OnIdle() {
	Redraw();
}//OnIdle
