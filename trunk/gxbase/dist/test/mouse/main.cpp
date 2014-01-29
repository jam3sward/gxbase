#include "GXBase.h"
using namespace gxbase;

// this is a simple test to see if mouse capture works
// (when you left click and drag out of window, the app. should still
// receive mouse move/button events)
// JWW 13/10/03
//
class MyWindow :public GLWindow {
public:
	MyWindow() {
		m_quadric = 0;
		m_bDrag   = false;
		m_bDragBgn= false;
		m_fRot[0] = 0.0f;
		m_fRot[1] = 0.0f;
        m_zoom = 1.0;
        m_squash = 1.0;
	}

	void OnCreate() {
		m_quadric = gluNewQuadric();
		glEnable(GL_LIGHTING);
		glEnable(GL_LIGHT0);
		glEnable(GL_DEPTH_TEST);
		glShadeModel(GL_FLAT);
		GLfloat lightPos[] = {0.42f, 0.57f, 0.71f, 0.0f};
		glLightfv(GL_LIGHT0, GL_POSITION, lightPos);
        glEnable(GL_NORMALIZE);
	}

	void ViewSystem() {
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluPerspective(45.0, Aspect(), 0.1,100.0);
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
		gluLookAt(0,0,2, 0,0,0, 0,1,0);
	}

	void OnDisplay() {
		glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

		ViewSystem();

		glPushMatrix();
			glRotatef(m_fRot[0], 0,1,0);
			glRotatef(m_fRot[1],-1,0,0);
            glScalef(m_zoom*m_squash, m_zoom, m_zoom);
			if (m_quadric) gluSphere(m_quadric, 0.5, 6,6);
		glPopMatrix();

		SwapBuffers();
	}

	void OnMouseButton(MouseButton button, bool down) {
		if (button == MBLeft) {
			m_bDrag = down;
			if (m_bDrag) m_bDragBgn = true;
		}
	}

	void OnMouseMove(int x, int y) {
		if (m_bDrag) {
			if (m_bDragBgn) {
				m_fDragOrg[0] = (float)x-m_fRot[0];
				m_fDragOrg[1] = (float)y-m_fRot[1];
				m_bDragBgn = false;
			} else {
				m_fRot[0] = (float)x-m_fDragOrg[0];
				m_fRot[1] = (float)y-m_fDragOrg[1];
			}
		}
	}

    void OnMouseWheel(double x, double y) {
        m_zoom += x / 10.0;
        m_squash += x / 10.0;
    }

	void OnKeyboard(int key, bool down) {
		if (down) switch(tolower(key)) {
			case 'n': SetCursor(CRNone);  break;
			case 'a': SetCursor(CRArrow); break;
			case 'c': SetCursor(CRCross); break;
			case 'h': SetCursor(CRHourglass); break;
		}
	}

	void OnDestroy() {
		if (m_quadric) gluDeleteQuadric(m_quadric);
	}

	void OnIdle() {
		Redraw();
	}

private:
	GLUquadric *m_quadric;
	bool  m_bDrag;
	bool  m_bDragBgn;
	float m_fDragOrg[2];
	float m_fRot[2];
    double m_zoom;
    double m_squash;
};

class MyApp :public App {
	MyWindow w;
};

// this is the single instance of our application
//
static MyApp theApp;
