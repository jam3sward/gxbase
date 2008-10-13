#include "MyWnd.h"
#include "MyApp.h"

//-----------------------------------------------------------------------------

void MyWnd::OnDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);

	// get access to shared memory
	SharedMem &shared = MyApp::Get().m_shared;
	if (shared.Acquire()) {
		// right, we got it
		float x,y;
		__try {
			// get the current object position (which is updated
			// by our second thread)
			x = shared.x;
			y = shared.y;
		} __finally {
			// release shared memory
			shared.Release();
		}

		// finally, we can draw
		glPushMatrix();
			glScaled(0.5,0.5,0.5);
			// translate to object position
			glTranslatef(shared.x, shared.y, 0.f);

			// draw a disk
			GLUquadric *obj = gluNewQuadric();
				gluDisk(obj,0.0,0.1,20,1);
			gluDeleteQuadric(obj);
		glPopMatrix();
	}

	SwapBuffers();
}//OnDisplay

//-----------------------------------------------------------------------------

void MyWnd::OnIdle() {
	// request redraw
	Redraw();
}//OnIdle

//-----------------------------------------------------------------------------
