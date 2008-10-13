#ifndef __myapp_h
#define __myapp_h

#include "MyWnd.h"

/* Joystick Sample
 *
 * Demonstrates how to read the joystick analogue values and
 * buttons, using the joystick class.
 *
 * The app creates a joystick, opens it and polls it OnIdle(),
 * then updates some fields that are used to pass the position/buttons
 * to the window class(es). In practice you would probably create a
 * game engine or simulation class that handles the joystick input,
 * then update a scene based on the joystick movement.
 *
 * James Ward, 5th March 2004.
 */

// the actual maximum number of buttons is determined by the
// operating system, not GXBase. what i mean to say is, if you
// have a joystick with more buttons, you can try increasing
// this value to see if you can read them :)
const int MAX_BUTTON = 10;

class MyApp :public App {
public:
	void OnCreate();
	void OnDestroy();
	void OnIdle();

	static MyApp & Get();

public:
	float position[2];
	bool  button[MAX_BUTTON];

private:
	MyWnd	 m_mainWnd;
	Joystick m_joystick;
};

#endif//__myapp_h
