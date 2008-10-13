#include "GXBase.h"
using namespace gxbase;

class MyApp;

class MyWnd :public GLWindow {
public:
	MyWnd();
	void OnCreate();
	void OnDestroy();
	void OnDisplay();
	void OnIdle();
	MyApp &GetApp();
private:
	void SetupTexture();
private:
	float  m_fAngle;
	GLuint m_nTexCheck;
	GLuint m_nTexImage;
	GLuint m_nTexRGBA;
};

static class MyApp :public App {
public:
	void OnCreate();
	Image &GetImage();
private:
	Image m_image;
	MyWnd m_mainWnd;
} theApp;

MyApp & MyWnd::GetApp() {
	return *(MyApp*)App::Get();
}//GetApp

MyWnd::MyWnd() {
	m_fAngle = 0.0f;
}//MyWnd

void MyWnd::OnCreate() {
	SetupTexture();
}//OnCreate

void MyWnd::OnDestroy() {
	glDeleteTextures(1,&m_nTexCheck);
	glDeleteTextures(1,&m_nTexImage);
	glDeleteTextures(1,&m_nTexRGBA);
}//OnDestroy

void MyWnd::OnIdle() {
	m_fAngle += 10.0f * (float)App::GetDeltaTime();
	Redraw();
}//OnIdle

void MyWnd::SetupTexture() {
	// enable texture mapping
	glEnable(GL_TEXTURE_2D);

	// setup bitmap texture image
	Image &image = GetApp().GetImage();
	image.ScaleImagePow2();
	glGenTextures(1, &m_nTexImage);
	glBindTexture(GL_TEXTURE_2D, m_nTexImage);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	image.glTexImage2D();

	// make image into an RGBA version
	Image alpha(image);
	alpha.SetFormat(Image::RGBA);
	alpha.ScaleImagePow2();
	glGenTextures(1, &m_nTexRGBA);
	glBindTexture(GL_TEXTURE_2D, m_nTexRGBA);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	{// alter the alpha values
		int cr=alpha.Height()/2, cr2=cr*cr;
		for (int y=0;y<alpha.Height();y++)
			for (int x=0;x<alpha.Width();x++) {
				int i=x-cr, j=y-cr, r2=i*i+j*j;
				BYTE r,g,b, a=r2<cr2?(255-255*r2/cr2):0;
				alpha.GetPixel3b(x,y, r,g,b);
				alpha.SetPixel4b(x,y, r,g,b, a);
			}
	}
	alpha.glTexImage2D();

	// setup checker texture image
	Image check;
	check.Create(2,2,Image::LUM);
	for (int y=0;y<check.Height();y++)
		for (int x=0;x<check.Width();x++)
			check.SetPixel1b(x,y, 255*((x^y)&1));
	glGenTextures(1, &m_nTexCheck);
	glBindTexture(GL_TEXTURE_2D, m_nTexCheck);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	check.glTexImage2D();
}//SetupTexture

void MyWnd::OnDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);

	// draw checkerboard
	glBindTexture(GL_TEXTURE_2D, m_nTexCheck);
	glBegin(GL_QUADS);
		glTexCoord2f(0,0); glVertex2f(-1,-1);
		glTexCoord2f(4,0); glVertex2f(+1,-1);
		glTexCoord2f(4,4); glVertex2f(+1,+1);
		glTexCoord2f(0,4); glVertex2f(-1,+1);
	glEnd();

	// draw textured quad
	glMatrixMode(GL_TEXTURE);
	glPushMatrix();
		glTranslatef(0.5,0.5,0);
		glRotatef(m_fAngle, 0,0,1);	// rotate the texture
		glTranslatef(-0.5,-0.5,0);

		glEnable(GL_BLEND);
		glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
		glBindTexture(GL_TEXTURE_2D, m_nTexRGBA);//Image);
		glBegin(GL_QUADS);
			glTexCoord2f(0,0); glVertex2f(-1,-1);
			glTexCoord2f(1,0); glVertex2f(+1,-1);
			glTexCoord2f(1,1); glVertex2f(+1,+1);
			glTexCoord2f(0,1); glVertex2f(-1,+1);
		glEnd();
		glDisable(GL_BLEND);

	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);

	SwapBuffers();
}//OnDisplay

void MyApp::OnCreate() {
	if (ArgCount() == 2) {
		const char *sFile = Arg(1);
		if ( !m_image.Load(sFile) )
			MsgPrintf("Failed to load %s\n", sFile);
	} else
		MsgPrintf("Error: expected an image filename\n");
}//OnCreate

Image & MyApp::GetImage() {
	return m_image;
}//GetImage
