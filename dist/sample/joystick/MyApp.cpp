#include "MyApp.h"

// single, static instance of our application
static MyApp theApp;

void MyApp::OnCreate() {
	if (!m_joystick.Open())
		MsgPrintf("This sample needs a joystick!");

	position[0]=position[1]=0.0f;
    for (int n=0;n<MAX_BUTTON;n++) button[n]=false;
}//OnCreate

MyApp & MyApp::Get() {
	return theApp;
}//Get

void MyApp::OnIdle() {
	// poll the joystick
	m_joystick.Update();

	// get joystick position
	position[0] =  m_joystick.Axis(0);
	position[1] = -m_joystick.Axis(1);
	// get joystick buttons
	for (int n=0;n<MAX_BUTTON;n++)
		button[n] = m_joystick.Button(n);
}//OnIdle

void MyApp::OnDestroy() {
	m_joystick.Close();
}//OnDestroy
