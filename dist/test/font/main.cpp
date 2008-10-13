#include "GXBase.h"
using namespace gxbase;

// This program was written to test the new GLWindow::Printf() method,
// which provides simple font output suitable for frame rates, labels
// on objects, debugging etc.
//   JWW 23/09/03
// Added code to test the new SetFont() method
//   JWW 23/02/04

class MyWindow :public GLWindow {
private:
	unsigned long m_count;
	int m_nFont;
	int m_nSize;
public:
	MyWindow() {
		m_count=0;
		m_nFont=0;
		m_nSize=24;
	}

	void OnDisplay() {
		if (!GetStereo()) {
			glClear(GL_COLOR_BUFFER_BIT);
		} else {
			// clear buffer in stereo mode: later nvidia drivers don't
			// like single buffer clear in stereo (nobody else cares :)
			glDrawBuffer(GL_BACK_LEFT);
			glClear(GL_COLOR_BUFFER_BIT);
			glDrawBuffer(GL_BACK_RIGHT);
			glClear(GL_COLOR_BUFFER_BIT);
		}

		// colour and position text
		glColor3f(0,1,0);
		glRasterPos2f(-0.9f,-0.9f);

		// print nothing, to get list ID
		static unsigned int id=Printf("");
		// test formatted printing
		Printf("Frame = %lu, ID = %u", m_count, id);

		m_count++;

		SwapBuffers();
	}

	void OnKeyboard(int key, bool down) {
		const char *font_list[]={"Arial","Times","Courier New"};
		if (down) switch (tolower(key)) {
		case 's':
			// toggle stereo: this is so that I can test if
			// the font support survives a change of pixel format
			// - it does
			SetStereo( !GetStereo() );
			break;
		case 'f':
			// switch fonts
			m_nFont = (m_nFont+1)%(sizeof(font_list)/sizeof(font_list[0]));
			SetFont(m_nSize, font_list[m_nFont]);
			break;
		case 'p':
			// adjust font size
			if (GetShiftKey())
				m_nSize++;
			else
				if (m_nSize>1) m_nSize--;
			// adjust font size
			SetFont(m_nSize, font_list[m_nFont]);
			break;
		}
	}

	void OnIdle() {
		Redraw();
	}
};

class MyApp :public App {
private:
	MyWindow wnd;
};

static MyApp theApp;
