#include "MyApp.h"

MyApp::MyApp() {
	m_nFile  = -1;
	m_tStart = 0;
}//MyApp

void MyApp::OnCreate() {
	// when application starts, search for files in
	// current working directory
	m_dir.SetPattern("*.jpg");
	if (!m_dir.Update())
		MsgPrintf("no files found");
}//OnCreate

void MyApp::Next() {
	// record time of change
	m_tStart = GetTime();

	// get total number of files
	long nFiles = m_dir.Count();
	if (nFiles==0) return;

	for (long a=0; a<nFiles; a++) {
		// next file
		m_nFile = (m_nFile + 1) % nFiles;
		
		// attempt to load
		if ( m_view.Load(m_dir[m_nFile]) ) return;

		// if we fail, try again
	}
}//Next

void MyApp::OnIdle() {
	if (GetTime()-m_tStart >= 3.0) Next();
}//OnIdle

// our single application instance
static MyApp theApp;
