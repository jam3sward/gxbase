#ifndef __mywnd_h
#define __mywnd_h

#include "GXBase.h"
using namespace gxbase;

class MyWnd :public GLWindow {
public:
	MyWnd();

	void OnDisplay();
	void OnIdle();

private:
	void DrawCross(float s);
};

#endif//__mywnd_h
