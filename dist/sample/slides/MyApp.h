#ifndef __MyApp_H
#define __MyApp_H

#include "MyView.h"
#include "DirList.h"

class MyApp :public App {
public:
	MyApp();

	void OnCreate();
	void OnIdle();

	void Next();

private:
	MyView  m_view;
	DirList m_dir;
	long	m_nFile;
	double  m_tStart;
};

#endif//__MyApp_H
