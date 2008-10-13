#include "GXBase.h"
using namespace gxbase;

// This program was written to test the Image::SetPixel functions
// JWW 13/10/03
//
class MyWindow :public GLWindow {
public:
	MyWindow();
	void OnCreate();
	void OnDisplay();
	void OnMouseButton(MouseButton button, bool down);
	void OnMouseMove(int x, int y);
	void OnKeyboard(int key, bool down);
private:
	void DrawPixel();
	void DrawHUD();
private:
	Image m_image;
	float m_fMousePos[2];
	float m_colour[3];
	bool  m_bDraw;
	bool  m_bMono;
};

class MyApp :public App {
private:
	MyWindow m_wnd;
};

static MyApp theApp;

MyWindow::MyWindow() {
	SetSize(256,256);
	m_colour[0]=1;
	m_colour[1]=1;
	m_colour[2]=1;
	m_bDraw=false;
	m_bMono=false;
}

void MyWindow::OnCreate() {
	glEnable(GL_TEXTURE_2D);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	m_image.Create(64,64);
	m_image.Clear3b(0,0,0);
}//OnCreate

void MyWindow::OnDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);

	m_image.glTexImage2D();

	glBegin(GL_QUADS);
		glTexCoord2f(0,0); glVertex2f(-1,-1);
		glTexCoord2f(1,0); glVertex2f(+1,-1);
		glTexCoord2f(1,1); glVertex2f(+1,+1);
		glTexCoord2f(0,1); glVertex2f(-1,+1);
	glEnd();

	DrawHUD();

	SwapBuffers();
}//OnDisplay

void MyWindow::OnMouseButton(MouseButton button, bool down) {
	if (down) {
		float r=0.0f,g=0.0f,b=0.0f;
		switch (button) {
		case MBLeft:
			r=1.0f;
			break;
		case MBMiddle:
			g=1.0f;
			break;
		case MBRight:
			g=0.3f; b=1.0f;
			break;
		}
		m_colour[0]=r;
		m_colour[1]=g;
		m_colour[2]=b;
		m_bDraw=true;
		DrawPixel();
	} else
		m_bDraw=false;

	// request a redraw
	Redraw();
}//OnMouseButton

void MyWindow::OnMouseMove(int x, int y) {
	int w=Width(), h=Height();
	m_fMousePos[0] = w?(float)x/(float)w:0.0f;
	m_fMousePos[1] = h?(float)y/(float)h:0.0f;
	// if drawing, draw a pixel
	if (m_bDraw) {
		DrawPixel();
		// request a redraw
		Redraw();
	}
}//OnMouseMove

void MyWindow::OnKeyboard(int key, bool down) {
	if (down) switch (tolower(key)) {
	case 'f':
		switch (m_image.GetFormat()) {
		case Image::RGB:	m_image.SetFormat(Image::RGBA); break;
		case Image::RGBA:	m_image.SetFormat(Image::BGR);  break;
		case Image::BGR:	m_image.SetFormat(Image::BGRA); break;
		case Image::BGRA:	m_image.SetFormat(Image::LUM);  break;
		case Image::LUM:	m_image.SetFormat(Image::LUMALP); break;
		case Image::LUMALP: m_image.SetFormat(Image::RGB);  break;
		}
		Redraw();
		break;
	case 'm':
		m_bMono=!m_bMono;
		Redraw();
		break;
	}
}//OnKeyboard

void MyWindow::DrawPixel() {
	// scale into image coords.
	int
		i = (int)(m_fMousePos[0] * (float)m_image.Width()  + 0.5f),
		j = (int)(m_fMousePos[1] * (float)m_image.Height() + 0.5f);
	// draw into image
	if (!m_bMono)
		m_image.SetPixel3f( i,j, m_colour[0], m_colour[1], m_colour[2] );
	else
		m_image.SetPixel1f(
			i,j,
			0.30f*m_colour[0] +	// RGB to Luminance
			0.59f*m_colour[1] +
			0.11f*m_colour[2]
		);
}//DrawPixel

void MyWindow::DrawHUD() {
	const char *s="UNKNOWN";
	switch (m_image.GetFormat()) {
		case Image::RGB:	s="RGB";	break;
		case Image::BGR:	s="BGR";	break;
		case Image::RGBA:	s="RGBA";	break;
		case Image::BGRA:	s="BGRA";	break;
		case Image::LUM:	s="LUM";	break;
		case Image::LUMALP: s="LUMALP"; break;
	}
	glPushAttrib(GL_ENABLE_BIT|GL_CURRENT_BIT);
		glDisable(GL_TEXTURE_2D);

		// are we using SetPixel1f or SetPixel3f?
		int num = m_bMono?1:3;

		glColor3f(0,1,0);
		glRasterPos2f(-0.9f,-0.9f);
		Printf("%s %ldx%ld SetPixel%df",
			s,
			(long)m_image.Width(), (long)m_image.Height(),
			num
		);
	glPopAttrib();
}//DrawHUD
