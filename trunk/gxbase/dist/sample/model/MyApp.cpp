#include "MyApp.h"

static MyApp theApp;

void MyApp::Load(const char *file) {
	if (file) if (!m_model.Load(file))
		App::MsgPrintf("Failed to load %s\n", file);
}//Load

void MyApp::OnCreate() {
	// if a filename is given on command line, load it
	if (ArgCount()==2)
		Load( Arg(1) );
}//OnCreate

Model &MyApp::GetModel() {
	return m_model;
}

MyApp &MyApp::GetApp() {
	return theApp;
}
