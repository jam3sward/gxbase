#include "MyWnd.h"
#include "MyApp.h"

#pragma comment (linker, "/subsystem:console")
#include <stdio.h>

MyWnd::MyWnd() {
	SetSize(256,256);
}//MyWnd

void MyWnd::DrawCross(float s) {
	glBegin(GL_LINES);
		glVertex2f(-s,0); glVertex2f(+s,0);
		glVertex2f(0,-s); glVertex2f(0,+s);
	glEnd();
}//DrawCross

void MyWnd::OnDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);

	MyApp &app = MyApp::Get();

	// draw origin and joystick crosshairs
	glPushMatrix();
		glScalef(0.8f,0.8f,0.8f);

		// draw origin
		glColor3f(0,0,1);
		DrawCross(0.1f);

		// move to joystick position
		glTranslatef(
			app.position[0],
			app.position[1],
			0.0f
		);

		// draw joystick crosshair
		glColor3f(0,1,0);
		DrawCross(0.1f);
	glPopMatrix();

	// draw buttons along bottom of window
	for (int n=0;n<MAX_BUTTON;n++) {
		float
			s = 2.0f/(float)MAX_BUTTON,	// fill window width
			t = 0.1f*s,					// gap between buttons
			x = s * (float)n - 1.f;		// left edge of button

		// button state: blue=0, cyan=1
		glColor3f(0.f, app.button[n]?1.f:0.f, 1.f);	

		// draw the button
		glRectf(x+t,-1,x+s-t,-0.9f);
	}

	SwapBuffers();
}//OnDisplay

void MyWnd::OnIdle() {
	Redraw();
}//OnIdle