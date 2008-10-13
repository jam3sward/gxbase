#include "GXBase.h"
using namespace gxbase;
#include <direct.h>
#include <iostream>
#include <string>
using namespace std;

/**
 * Q0002: JPEG files not loaded when relative path is used
 * bug reported by Kostas Vlahavas on 17/10/05, and confirmed
 * here for GXBase 0.48
 *
 * This program loads a local file which succeeds, a file from
 * an absolute path which succeeds, and a file from a relative
 * path, which fails.
 *
 * This bug has been fixed in GXBase 0.49
 */
class MyWindow :public GLWindow {
public:
	virtual void OnCreate() {
		Image image;

		// this succeeds on 0.48, local files work OK
		cout<< "local file: ";
		if ( image.Load("test.jpg") )
			cout<< "OK\n";
		else
			cout<< "FAILED\n";

		// this succeeds on 0.48, absolute paths work OK
		cout<< "absolute path: ";
		char buff[256];
		getcwd(buff,sizeof(buff));
		string s(buff);
		s += "\\data\\test.jpg";
		if ( image.Load(s.c_str()) )
			cout<< "OK\n";
		else
			cout<< "FAILED\n";

		// this fails on 0.48 because relative paths don't work
		// fixed on 0.49
		cout<< "relative path: ";
		if ( image.Load("data\\test.jpg") )
			cout<< "OK\n";
		else
			cout<< "FAILED\n";
	}//OnCreate
};

class MyApp :public App {
public:
	MyWindow m_mainWnd;
};

static MyApp theApp;
