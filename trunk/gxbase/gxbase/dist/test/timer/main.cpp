#include "GXBase.h"
using namespace gxbase;
#include <math.h>
#include <iostream>
using namespace std;

/**
 * This program demonstrates the use of the OnTimer event, and the
 * SetTimerPeriod and GetTimerPeriod methods.
 * JWW 22/01/04
 */

class MyWnd :public GLWindow {
public:
	void OnDisplay();
	void OnIdle();
};

static class MyApp :public App {
public:
	MyApp() {
		pos[0]=0.0f;
		pos[1]=0.0f;
		time=0.0f;
	}

	void OnCreate();
	void OnTimer(double time);

public:
	float  pos[2];
	double time;

private:
	MyWnd m_mainWnd;
} theApp;

void MyWnd::OnDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);
	
	// draw moving blob
	glPushMatrix();
		glTranslatef( theApp.pos[0], theApp.pos[1], 0.0f );
		glRectf(-0.1f,-0.1f,0.1f,0.1f);
	glPopMatrix();

	// show current time
	glRasterPos2f(-0.9f,-0.9f);
	Printf("%.2lf", theApp.time);

	SwapBuffers();
}//OnDisplay

void MyWnd::OnIdle() {
	// could redraw window on idle, not tied to simulation
	// this could result in multiple redraws between timer events, or
	// vice versa, depending on timer frequency
	//Redraw();
}//OnIdle

void MyApp::OnCreate() {
	// create a timer that fires approximately every 20ms (ie. 50Hz)
	SetTimerPeriod(20);
	// display timer period on console
	cout<< "period = " << GetTimerPeriod() << "ms\n";
}

/**
 * After calling SetTimerPeriod(p), the OnTimer function is called
 * at intervals of approximately (p) milliseconds. The accuracy and
 * maximum rate are O/S dependent, and are limited by the execution
 * time of the code within the OnTimer function.
 * You can use the GetTime, GetDeltaTime or time parameter to
 * verify your timing and simulation rate.
 */
void MyApp::OnTimer(double time) {
	// update position; a simple example
	float a = 3.14f * (float)time / 2.0f;
	const float r = 0.8f;
	pos[0] = r*cos(a);
	pos[1] = r*sin(a);
	
	// update time (so we can display it)
	MyApp::time = time;

	// request a redraw of the main window; in practice you might want to run
	// several simulation steps between redraws, or to request redraws on the
	// window idle event
	m_mainWnd.Redraw();
}//OnTimer
