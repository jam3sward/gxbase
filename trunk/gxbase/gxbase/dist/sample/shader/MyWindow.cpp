#include "MyWindow.h"
#include "MyApp.h"
#include <stdio.h>

MyWindow::MyWindow() {
	m_quadric = NULL;
	m_fAngle  = 0.0f;
}//MyWindow

void MyWindow::OnCreate() {
	// note: you _must_ call base class OnCreate() for classes derived
	// from GLWindowEx, otherwise extensions won't be initialised.
	GLWindowEx::OnCreate();

	// if any of the required extensions can't be loaded,
	// close the application
	if (!CheckExtensions()) {
		App::Get()->Close();
		return;
	}

	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_CULL_FACE);
	glClearColor(0,0,0.5,0);

	// create quadric object for later use
	if (!m_quadric) m_quadric = gluNewQuadric();

	// setup vertex/fragment shaders
	SetupShaders();
}//OnCreate

void MyWindow::OnDestroy() {
	// delete quadric object if allocated
	if (m_quadric) {
		gluDeleteQuadric(m_quadric);
		m_quadric = NULL;
	}
}//OnDestroy

void MyWindow::ViewSystem() {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0f, Aspect(), 1.0f, 10.f);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(0,0,2, 0,0,0, 0,1,0);
}//ViewSystem

void MyWindow::OnDisplay() {
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

	ViewSystem();

	glPushMatrix();
		// rotation used to animate the scene
		glRotatef(m_fAngle, 0.0f,1.0f,0.0f);
		glRotatef(0.3f*m_fAngle, 1.0f,0.0f,0.0f);

		// draw a sphere
		if (m_quadric) gluSphere(m_quadric, 0.5f, 40,40);
	glPopMatrix();

	SwapBuffers();
}//OnDisplay

void MyWindow::OnIdle() {
	// rotate the scene slightly
	m_fAngle += 10.0f * (float)App::GetDeltaTime();
	// request a redraw
	Redraw();
}//OnIdle

void MyWindow::OnKeyboard(int key, bool down) {
	if (down) switch (tolower(key)) {
		case VK_ESCAPE:	// Quit the application when ESC pressed in any window
			App::Get()->Close();
			break;
	}
}//OnKeyboard

/**
 * Checks to see if the required extensions are available.
 * If they are, returns true, if they aren't it returns false
 * and displays an error message.
 */
bool MyWindow::CheckExtensions() {
	// list of required extensions
	const char *ext[] = {
		"GL_ARB_shader_objects",
		"GL_ARB_fragment_shader",
		"GL_ARB_vertex_shader",
		"GL_ARB_shading_language_100",
		NULL	// terminator
	};
	for (int n=0; ext[n]; n++) {
		// is extension supported?
		if (!Supports(ext[n])) {
			// unsupported: display error message
			App::MsgPrintf("Required OpenGL extension (%s) unavailable\n", ext[n]);
			return false;
		}
	}
	return true;
}//CheckExtensions

/**
 * Get index of a uniform variable
 */
GLint MyWindow::GetUniform(GLhandleARB prog, const GLcharARB *name) {
	if (!prog || !name) return 0;
	GLint i = glGetUniformLocationARB(prog,name);
	if (i < 0)
		App::MsgPrintf("GetUniform: uniform not found (%s)\n", name);
	return i;
}//GetUniform

/**
 * Load shader source code from file. Allocates a buffer using new[],
 * fills it with source, and returns a pointer. Returns NULL in case
 * of error. Caller is responsible for freeing memory (delete [] it)
 */
GLcharARB *MyWindow::LoadSource(const char *filename) {
	if (!filename) return NULL;
	FILE *fp = fopen(filename, "r");
	if (!fp) return NULL;

	// seek to end of file
	fseek(fp, 0, SEEK_END);
	// how long is the file?
	long size = ftell(fp);
	// rewind
	fseek(fp, 0, SEEK_SET);
	
	// allocate
	GLcharARB *buff = new GLcharARB[size+1];
	if (!buff) {
		App::MsgPrintf("LoadSource: failed to allocate %ld bytes\n", size);
		fclose(fp);
		return NULL;
	}
	// read shader from file
	size_t count = fread(buff, 1, size, fp);
	// null terminate
	buff[count]=0;
	// check for errors
	if (!count || ferror(fp)) {
		delete [] buff;
		buff=NULL;
	}

	// close file
	fclose(fp);

	// return
	return buff;
}//LoadSource

/**
 * Load and initialise vertex/fragment shaders
 */
bool MyWindow::SetupShaders() {
	GLint done=0;

	//-- load shader source from disk
	const GLcharARB *vertSource, *fragSource;
	vertSource = LoadSource("shader.vert");
	fragSource = LoadSource("shader.frag");
	if (!vertSource || !fragSource) {
		App::MsgPrintf("Failed to load shader(s)\n");
		delete [] vertSource;
		delete [] fragSource;
	}

	//-- vertex shader
	// create vertex shader object
	GLhandleARB vert = glCreateShaderObjectARB(GL_VERTEX_SHADER_ARB);
	// load vertex shader source into object, and compile it
	glShaderSourceARB(vert, 1, &vertSource, NULL);
	glCompileShaderARB(vert);
	// check if it compiled
	glGetObjectParameterivARB(vert, GL_OBJECT_COMPILE_STATUS_ARB, &done);
	if (!done) {
		App::MsgPrintf("Failed to compile vertex shader\n");
		return false;
	}

	//-- fragment shader
	// create fragment shader object
	GLhandleARB frag = glCreateShaderObjectARB(GL_FRAGMENT_SHADER_ARB);
	// load fragment shader source into object, and compile it
	glShaderSourceARB(frag, 1, &fragSource, NULL);
	glCompileShaderARB(frag);
	// check if it compiled
	glGetObjectParameterivARB(frag, GL_OBJECT_COMPILE_STATUS_ARB, &done);
	if (!done) {
		App::MsgPrintf("Failed to compile fragment shader\n");
		return false;
	}

	//-- program object
	// create program object
	GLhandleARB prog = glCreateProgramObjectARB();
	glAttachObjectARB(prog, vert);	// attach vertex shader
	glAttachObjectARB(prog, frag);	// attach fragment shader

	//-- link the program object
	glLinkProgramARB(prog);
	// check if it linked
	glGetObjectParameterivARB(prog, GL_OBJECT_LINK_STATUS_ARB, &done);
	if (!done) {
		App::MsgPrintf("Failed to link shader program\n");
		return false;
	}

	// use this program (apply it to current OpenGL state)
	glUseProgramObjectARB(prog);

	// setup uniform values, which are passed to the shader program
	glUniform3fARB(GetUniform(prog, "Colour1"), 1.0f, 0.0f, 0.0f);
	glUniform3fARB(GetUniform(prog, "Colour2"), 1.0f, 1.0f, 1.0f);
	glUniform1fARB(GetUniform(prog, "GridSize"), 0.5f);
	glUniform3fARB(GetUniform(prog, "LightPosition"), 0.0f, 0.0f, 4.0f);

	// free shader source
	delete [] vertSource;
	delete [] fragSource;

	// success
	return true;
}//SetupShaders
