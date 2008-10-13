#ifndef __MyView_H
#define __MyView_H

#include <string>
using namespace std;

#include "GXBase.h"
using namespace gxbase;

class MyView :public GLWindow {
public:
	MyView();

	void OnCreate();
	void OnDestroy();
	void OnDisplay();
	void OnIdle();
	void OnKeyboard(int key, bool down);

	bool Load(const string &name);

private:
	GLuint m_texid[2];
	int	   m_tex;
	float  m_alpha;
	float  m_tFade;
};

#endif//__MyView_H
