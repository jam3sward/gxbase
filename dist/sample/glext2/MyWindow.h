#ifndef __mywindow_h
#define __mywindow_h

#include "GXBase.h"
using namespace gxbase;

class MyWindow :public GLWindow {
public:
	void OnCreate();
	void OnDisplay();
	void OnKeyboard(int key, bool down);

	void ViewSystem();

private:
	glex m_glex;  	///< this holds our OpenGL extensions
};

#endif//__mywindow_h
