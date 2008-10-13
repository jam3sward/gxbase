#ifndef __myapp_h
#define __myapp_h

#include "GXBase.h"
using namespace gxbase;

#include "World.h"
#include "MyWindow.h"

class MyApp :public App {
public:
	void OnCreate();

	const World &GetWorld() {
		return m_world;
	}

	static MyApp &MyApp::GetApp();

private:
	void ApplyLayout();

private:
	World m_world;		///< only one world: it lives in the application
	MyWindow m_win[4];	///< two views of that world (you can have more..)
};

#endif//__myapp_h
