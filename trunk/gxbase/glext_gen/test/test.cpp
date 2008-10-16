#include <GL/glut.h>
#include <stdio.h>
#include "glex.h"

void OnCreate() {
	glex ex;

	long
		nFuncs = ex.Count(),	// no.of functions loaded
		nKnown = ex.Known();	// no.of functions supported by glex

	// what percentage of glext.h does this card implement?
	float
		fPercent = 100.0f * (float)nFuncs / (float)nKnown;

	printf("Vendor    : %s\n", glGetString(GL_VENDOR));
	printf("Renderer  : %s\n", glGetString(GL_RENDERER));
	printf("Version   : %s\n", glGetString(GL_VERSION));
	printf("Class Size: %lu bytes\n", (long)sizeof(ex));
	printf("Functions : %ld/%ld loaded (%d%%)\n",
		nFuncs, nKnown, (int)(fPercent+0.5f)
	);

	// check a few extensions
	const char *s[]={
		"GL_EXT_bgra",
		"GL_ARB_point_parameters",
		"GL_ARB_singing_monkeys",
		"WGL_ARB_multisample",
		"WGL_ARB_coffee_maker",
		0
	};

	for (int n=0; s[n]; n++)
		printf("%s is %ssupported\n", s[n], ex.Supports(s[n])?"":"NOT ");

	// try calling some of them
	ex.glPointParameterfARB(0,1);	// nvidia: supported
	ex.glIglooInterfaceSGIX(0,0);	// nvidia: certainly not supported
}//OnCreate

void OnDisplay() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glutSwapBuffers();
}

void OnReshape(int w, int h) {
	glViewport(0,0,w,h);
}

void OnIdle() {
	glutPostRedisplay();
}

int main (int argc, char **argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
	glutCreateWindow("OpenGL");
	OnCreate();
	glutDisplayFunc(OnDisplay);
	glutReshapeFunc(OnReshape);
	glutIdleFunc(OnIdle);
	glutMainLoop();

	return 0;
}//main
