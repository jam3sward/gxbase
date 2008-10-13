#ifndef __myapp_h
#define __myapp_h

#include "MyWnd.h"
#include "Model.h"

class MyApp :public App {
public:
	void OnCreate();
	Model &GetModel();

	void Load(const char *file);

	static MyApp &GetApp();

private:
	Model m_model;
	MyWnd m_wnd;
};

#endif//__myapp_h
