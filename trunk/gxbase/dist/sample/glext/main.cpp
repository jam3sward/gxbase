#include "GXBase.h"
using namespace gxbase;

/**
 * MultiTexture demo: this program was written as an example of how
 * to use the OpenGL extension loading/query functions built into
 * the gxbase library.
 *
 * It is a rewrite of 'MultiTex.c' which used GLUT and was written by
 * Nick Triantos, NVIDIA Corporation, 1998.
 *
 * Draws a single multitextured quad
 */

// How to use OpenGL extensions under gxbase:
//   1. Derive your window class from GLWindowEx.
//   2. If you use OnCreate(), you must call GLWindowEx::OnCreate() from
//      your OnCreate() method. This loads the OpenGL extensions.
//   3. Check that the extensions you want to use are supported, for
//      example:
//        if ( Supports( "GL_EXT_monkeys" ) ) m_bHaveMonkeys = true;
//      The OnCreate() method is the ideal place to do this. Use a bool
//      variable to store the setting, because it's quicker to do this
//      in future:
//        if (m_bHaveMonkeys) { ..use extension.. }
//      Than it is to keep calling the Supports() method..
//   4. Now you can call the extension functions directly, just as though
//      they were normal OpenGL functions:
//        glExtMonkeys(1,2,3,4)
//   5. NOTE: if you call an unsupported extension function, gxbase will
//      substitute a 'stub' function that does nothing. So, your program
//      is unlikely to crash (although the rendering might look strange)
// JWW 16/10/03

//-----------------------------------------------------------------------------

const int
	TEX0_SIZE       = 128,
	TEX0_COMPONENTS = 3,	// 1 or 3
	TEX1_SIZE		= 256,
	TEX1_COMPONENTS = 4;	// 1,2,3 or 4
const float
	QUAD_SIZE		= 400.0f,
	QUAD_X_OFFSET	= 100.0f,
	QUAD_Y_OFFSET   = 10.0f,
	LINE_HEIGHT		= 15.0f;
const char
	*WINDOW_TITLE   = "Multitexture test";

//-----------------------------------------------------------------------------

class MyWnd :public GLWindowEx {
public:
	MyWnd();

	void OnCreate();
	void OnDisplay();
	void OnIdle();
	void OnKeyboard(int key, bool down);
	void InitVertices();
	void Init();
	void MakeTextures();
	void DisplayInfo();
	void ViewSystem();
	void ViewSystem2D();

private:
	bool   m_bHaveMultitex;	// do we have mulitexture support?
	bool   m_bMultitex;		// using multitexturing?
	bool   m_bPanTex0;		// pan texture zero?
	float  m_fAngle;
	GLuint m_tex[2];		// texture IDs

	struct Vertex {
		float x, y;
		float u0, v0;
		float u1, v1;
	} m_vtx[4];				// quad vertices
};

//-----------------------------------------------------------------------------

MyWnd::MyWnd() {
	m_fAngle		= 135.0f;	// set initial rotation angle
	m_bHaveMultitex = false;	// do we have multitexture support?
	m_bMultitex		= false;	// are we using multitexture?
	m_bPanTex0		= false;	// should we pan texture 0?
	InitVertices();				// create quad
	SetSize(600,480);			// set initial window size
	SetTitle( WINDOW_TITLE );	// set window title
}//MyWnd

//-----------------------------------------------------------------------------

void MyWnd::OnCreate() {
	// important: call base class to load extensions
	GLWindowEx::OnCreate();

	// does this driver support multitexture?
	m_bHaveMultitex = glex::Supports( "GL_ARB_multitexture" );
	if (!m_bHaveMultitex) {
		// warn the user if multitexture not supported
		App::MsgPrintf("GL_ARB_multitexture NOT found");
	}

	// if it supports multitexture, turn it on
	m_bMultitex = m_bHaveMultitex;

	// setup textures
	MakeTextures();

	// initialise textures
	Init();
}//OnCreate

//-----------------------------------------------------------------------------

void MyWnd::Init() {
	// bind textures
	if (m_bMultitex) {
        glActiveTextureARB(GL_TEXTURE0_ARB);
        glBindTexture(GL_TEXTURE_2D, m_tex[0]);
        glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);

        glActiveTextureARB(GL_TEXTURE1_ARB);
        glBindTexture(GL_TEXTURE_2D, m_tex[1]);
        glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
    }
}//Init

//-----------------------------------------------------------------------------

void MyWnd::DisplayInfo() {
	ViewSystem2D();

    float x=4, y=Height()-LINE_HEIGHT;
	glColor3f(1,1,0);
	glRasterPos2f(x,y-=LINE_HEIGHT);
	Printf("Keys:");
	glRasterPos2f(x,y-=LINE_HEIGHT);
	Printf("'P'   = pan texture");
	glRasterPos2f(x,y-=LINE_HEIGHT);
	Printf("'R'   = rotate texture");
	glRasterPos2f(x,y-=LINE_HEIGHT);
	Printf("TAB   = toggle pan/rotate");
	glRasterPos2f(x,y-=LINE_HEIGHT);
	Printf("SPACE = toggle multitexture");

	// display number of extension functions loaded
	glColor3f(0,1,0);
	glRasterPos2f(x,y-=LINE_HEIGHT);
	Printf( "%ld extension functions", (long)glex::Count() );
	glRasterPos2f(x,y-=LINE_HEIGHT);
	Printf( "ARB multitexture %s", (m_bMultitex)?"ON":"OFF" );
}//DisplayInfo

//-----------------------------------------------------------------------------

void MyWnd::OnDisplay() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	ViewSystem();

	if (m_bMultitex) {
		//-- using multitexturing
		glActiveTextureARB(GL_TEXTURE0_ARB);

        glEnable(GL_TEXTURE_2D);
        glMatrixMode(GL_TEXTURE);
        glLoadIdentity();

        if (m_bPanTex0) {
			// Pan texture0, to show off how cool texture matrices are
            glTranslatef(-2.0f*m_fAngle*0.002f, -m_fAngle*0.002f, 0.0f);
        } else {
            // Rotate texture0 in the opposite direction to texture1
            glTranslatef(0.5f, 0.5f, 0.0f);
            glRotatef(-m_fAngle, 0.0f, 0.0f, 1.0f);
            glTranslatef(-0.5f, -0.5f, 0.0f);
        }

        glMatrixMode(GL_MODELVIEW);

		glActiveTextureARB(GL_TEXTURE1_ARB);

        glEnable(GL_TEXTURE_2D);
        glMatrixMode(GL_TEXTURE);
        glLoadIdentity();
        glTranslatef(0.5f, 0.5f, 0.0f);
        glRotatef(m_fAngle, 0.0f, 0.0f, 1.0f);
        glTranslatef(-0.5f, -0.5f, 0.0f);
        glMatrixMode(GL_MODELVIEW);

        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        glEnable(GL_BLEND);

        glBegin(GL_QUADS);
            glColor3f(1.0f, 1.0f, 1.0f);	// white

            glMultiTexCoord2fARB(GL_TEXTURE0_ARB, m_vtx[0].u0, m_vtx[0].v0);
            glMultiTexCoord2fARB(GL_TEXTURE1_ARB, m_vtx[0].u1, m_vtx[0].v1);
            glVertex2f(m_vtx[0].x, m_vtx[0].y);

            glMultiTexCoord2fARB(GL_TEXTURE0_ARB, m_vtx[1].u0, m_vtx[1].v0);
            glMultiTexCoord2fARB(GL_TEXTURE1_ARB, m_vtx[1].u1, m_vtx[1].v1);
            glVertex2f(m_vtx[1].x, m_vtx[1].y);

            glMultiTexCoord2fARB(GL_TEXTURE0_ARB, m_vtx[2].u0, m_vtx[2].v0);
            glMultiTexCoord2fARB(GL_TEXTURE1_ARB, m_vtx[2].u1, m_vtx[2].v1);
            glVertex2f(m_vtx[2].x, m_vtx[2].y);

            glMultiTexCoord2fARB(GL_TEXTURE0_ARB, m_vtx[3].u0, m_vtx[3].v0);
            glMultiTexCoord2fARB(GL_TEXTURE1_ARB, m_vtx[3].u1, m_vtx[3].v1);
            glVertex2f(m_vtx[3].x, m_vtx[3].y);
        glEnd();

        glActiveTextureARB(GL_TEXTURE1_ARB);
        glDisable(GL_TEXTURE_2D);
        glActiveTextureARB(GL_TEXTURE0_ARB);
        glDisable(GL_TEXTURE_2D);
    } else {
		//-- NOT using multitexture

        glEnable(GL_TEXTURE_2D);
        glDisable(GL_BLEND);

        // Quad 0
        glBindTexture(GL_TEXTURE_2D, m_tex[0]);
        glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);

        glMatrixMode(GL_TEXTURE);
        glLoadIdentity();

        if (m_bPanTex0) {
            // Pan texture0, to show off how cool texture matrices are
            glTranslatef(-2.0f*m_fAngle*0.002f, -m_fAngle*0.002f, 0.0f);
        } else {
            // Rotate texture0 in the opposite direction to texture1
            glTranslatef(0.5f, 0.5f, 0.0f);
            glRotatef(-m_fAngle, 0.0f, 0.0f, 1.0f);
            glTranslatef(-0.5f, -0.5f, 0.0f);
        }
        glMatrixMode(GL_MODELVIEW);

        glBegin(GL_QUADS);
            glColor3f(1.0f, 1.0f, 1.0f);	// white

            glTexCoord2f(m_vtx[0].u0, m_vtx[0].v0);
            glVertex2f(m_vtx[0].x, m_vtx[0].y);

            glTexCoord2f(m_vtx[1].u0, m_vtx[1].v0);
            glVertex2f(m_vtx[1].x, m_vtx[1].y);

            glTexCoord2f(m_vtx[2].u0, m_vtx[2].v0);
            glVertex2f(m_vtx[2].x, m_vtx[2].y);

            glTexCoord2f(m_vtx[3].u0, m_vtx[3].v0);
            glVertex2f(m_vtx[3].x, m_vtx[3].y);
        glEnd();

        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        glEnable(GL_BLEND);

        // Quad 1
        glBindTexture(GL_TEXTURE_2D, m_tex[1]);
        glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);

        glMatrixMode(GL_TEXTURE);
        glLoadIdentity();
        glTranslatef(0.5f, 0.5f, 0.0f);
        glRotatef(m_fAngle, 0.0f, 0.0f, 1.0f);
        glTranslatef(-0.5f, -0.5f, 0.0f);
        glMatrixMode(GL_MODELVIEW);

        glBegin(GL_QUADS);
            glColor3f(1.0f, 1.0f, 1.0f);  // white

            glTexCoord2f(m_vtx[0].u1, m_vtx[0].v1);
            glVertex2f(m_vtx[0].x, m_vtx[0].y);

            glTexCoord2f(m_vtx[1].u1, m_vtx[1].v1);
            glVertex2f(m_vtx[1].x, m_vtx[1].y);

            glTexCoord2f(m_vtx[2].u1, m_vtx[2].v1);
            glVertex2f(m_vtx[2].x, m_vtx[2].y);

            glTexCoord2f(m_vtx[3].u1, m_vtx[3].v1);
            glVertex2f(m_vtx[3].x, m_vtx[3].y);
        glEnd();

        glDisable(GL_TEXTURE_2D);
    }

	DisplayInfo();

	SwapBuffers();
}//OnDisplay

//-----------------------------------------------------------------------------

void MyWnd::OnIdle() {
	// rotation angle for animation
	m_fAngle += 80.0f * (float)App::GetDeltaTime();
	// redraw the display
	Redraw();
}//OnIdle

//-----------------------------------------------------------------------------

void MyWnd::ViewSystem() {
	float w=(float)Width(), h=(float)Height();
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0f, w, 0.0f, h, -1.0f, 1.0f);
    glScalef(1.0f, -1.0f, 1.0f);	// Invert Y axis
    glTranslatef(0.0f, -h, 0.0f);	// Shift origin up to upper-left corner
}//ViewSystem

//-----------------------------------------------------------------------------

void MyWnd::ViewSystem2D() {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0,Width(),0,Height(),-1,1);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}//ViewSystem

//-----------------------------------------------------------------------------

void MyWnd::InitVertices() {
    int i;
    float fXN, fYN;

    for (i=0; i<4; i++) {
        fXN         = (i < 2) ? 0.0f : 1.0f;
        fYN         = ((i+1) % 4 < 2) ? 0.0f : 1.0f;
        m_vtx[i].x  = fXN * QUAD_SIZE + QUAD_X_OFFSET;
        m_vtx[i].y  = fYN * QUAD_SIZE + QUAD_Y_OFFSET;
        m_vtx[i].u0 = fXN;
        m_vtx[i].v0 = fYN;
        m_vtx[i].u1 = fXN;
        m_vtx[i].v1 = fYN;
    }
}//InitVertices

//-----------------------------------------------------------------------------

void MyWnd::MakeTextures() {
	int i, j;
	Image img;

	// NOTE: it would be so much less code to just load a texture map
	// from a file now :) this code is a rewrite of the pointer based
	// stuff in the original nvidia sample.

    glGenTextures(2, m_tex);

	switch (TEX0_COMPONENTS) {
	case 1: img.Create(TEX0_SIZE, TEX0_SIZE, Image::LUM);    break;
	case 3: img.Create(TEX0_SIZE, TEX0_SIZE, Image::RGB);	 break;
	default: throw 0;
	}

	// texture 0 is a checkerboard
	glBindTexture(GL_TEXTURE_2D, m_tex[0]);
	for (j=0; j<TEX0_SIZE; j++)
		for (i=0; i<TEX0_SIZE; i++)
			img.SetPixel1b(i,j, ((i^j)&0x20)?0:0xFF);
	img.glTexImage2D();

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);

	// texture 1 is a checkerboard
    glBindTexture(GL_TEXTURE_2D, m_tex[1]);

	switch (TEX1_COMPONENTS) {
	case 1: img.Create(TEX1_SIZE, TEX1_SIZE, Image::LUM);    break;
	case 2: img.Create(TEX1_SIZE, TEX1_SIZE, Image::LUMALP); break;
	case 3: img.Create(TEX1_SIZE, TEX1_SIZE, Image::RGB);	 break;
	case 4: img.Create(TEX1_SIZE, TEX1_SIZE, Image::RGBA);   break;
	default: throw 0;
	}

    float fXCenter, fYCenter;
    float fA;
    float fXD, fYD, fDist;

    fXCenter = TEX1_SIZE/2.0f;
    fYCenter = TEX1_SIZE/2.0f;
    for (j=0; j<TEX1_SIZE; j++) {
        fYD = fYCenter - ((float)j);
        for (i=0; i<TEX1_SIZE; i++) {
            fXD = fXCenter - ((float)i);
            fDist = (fXD*fXD + fYD*fYD) / (fXCenter*fXCenter);
            if (fDist > 1.0f) fDist = 1.0f;
            fA = 1.0f - fDist;

			BYTE r=0,g=0,b=0,a=0;
            if ((j < (TEX1_SIZE>>1)) && (i < (TEX1_SIZE>>1)))
				r=255;
            else if (j < (TEX1_SIZE>>1))
				g=255;
            else if (i < (TEX1_SIZE>>1))
				b=255;
            else
				r=g=255;
			a = (char)(fA * 255.0f);
			img.SetPixel4b(i,j, r,g,b,a);
        }
    }
	img.glTexImage2D();

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);
    glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
}//MakeTextures

//-----------------------------------------------------------------------------

void MyWnd::OnKeyboard(int key, bool down) {
	if (down) switch (tolower(key)) {
    case ' ':	// SPACE
		if (m_bHaveMultitex)
			m_bMultitex = !m_bMultitex;
        break;
    case 'q':	// Q=Quit
        Close();
		break;
    case 'p':	// P=Pan
        m_bPanTex0 = true;
        break;
    case 'r':	// R=Rotate
        m_bPanTex0 = false;
        break;
    case 0x9:	// TAB
        m_bPanTex0 = !m_bPanTex0;
        break;
    default:
        return;
    }
	Init();
}//OnKeyboard

//-----------------------------------------------------------------------------

/**
 * Our application class isn't really used in this example: it just
 * creates the window and executes.
 */
static class MyApp :public App {
	MyWnd m_mainWnd;
} theApp;

//-----------------------------------------------------------------------------
