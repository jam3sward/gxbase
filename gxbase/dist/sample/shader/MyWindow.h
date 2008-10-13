#ifndef __mywindow_h
#define __mywindow_h

#include "GXBase.h"
using namespace gxbase;

class MyWindow :public GLWindowEx {
public:
	MyWindow();

	void OnCreate();
	void OnDestroy();
	void OnDisplay();
	void OnKeyboard(int key, bool down);
	void OnIdle();

	void ViewSystem();

	bool CheckExtensions();

private:
	bool SetupShaders();
	GLcharARB *LoadSource(const char *filename);
	GLint GetUniform(GLhandleARB prog, const GLcharARB *name);

private:
	GLUquadricObj *m_quadric;
	float		   m_fAngle;
};

#endif//__mywindow_h
