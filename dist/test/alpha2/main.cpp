#include "GXBase.h"
using namespace gxbase;

/**
 * This program was written to test some of the new functionality added to the
 * image class in versions 0.25-0.27. This includes the following:
 *   Image::Create(w,h,Image::ALPHA)
 *   Image::SetFormat(Image::ALPHA)
 *   Image::CopyAlpha()
 *   alphaImage.SetPixel1f(...)
 *   alphaImage.SetPixel1b(...)
 *   Image::IsValid()
 *   alphaImage.glTexImage2D()
 */

enum TextureIDs {
	TEX_ALPHA = 0,
	TEX_CHECK,
	TEX_RGBA,
	TEX_COUNT // must appear last, used to count textures
};

class MyWnd :public GLWindow {
public:
	MyWnd();

	void OnCreate();
	void OnDestroy();
	void OnDisplay();

	void DrawQuad();

protected:
	void CreateTextures();
	void DeleteTextures();
	void DeliberateStupidity();

private:
	GLuint m_texid[TEX_COUNT];
};

MyWnd::MyWnd() {
	SetSize(256,256);
	for (int n=0;n<TEX_COUNT;n++) m_texid[n]=0;
}//MyWnd

void MyWnd::OnCreate() {
	glEnable(GL_TEXTURE_2D);

	CreateTextures();
}//OnCreate

void MyWnd::OnDestroy() {
	DeleteTextures();
}//OnDestroy

/**
 * This function deliberately sets out to crash the new
 * alpha code, to test the error handling.
 */
void MyWnd::DeliberateStupidity() {
	// don't copy paste this code! it's deliberately wrong, as a
	// test case for how gxbase handles errors
	Image
		bigRGB(256,256),
		smallALPHA(64,64,Image::ALPHA),
		bigALPHA(256,256,Image::ALPHA),
		smallRGB(64,64);
	// copy alpha should fail if image sizes differ
	if ( bigRGB.CopyAlpha( smallALPHA ) ) App::MsgPrintf("error: copy should fail!\n");
	if ( smallRGB.CopyAlpha( bigRGB ) )   App::MsgPrintf("error: copy should fail!\n");
	if ( bigRGB.CopyAlpha( smallRGB ) )   App::MsgPrintf("error: copy should fail!\n");
	if ( smallRGB.CopyAlpha( bigRGB ) )	  App::MsgPrintf("error: copy should fail!\n");
	// copy alpha should work for same size, with source alpha, and dest.no alpha
	if ( !smallRGB.CopyAlpha(smallALPHA) ) App::MsgPrintf("error: copy failed!\n");
	if (smallRGB.GetFormat() != Image::RGBA) App::MsgPrintf("error: expected RGBA!\n");
	Image
		smallLUM(64,64,Image::LUM);
	if ( !smallLUM.CopyAlpha(smallALPHA) ) App::MsgPrintf("error: copy failed!\n");
	// we should have LUMALP now
	if (smallLUM.GetFormat() != Image::LUMALP) App::MsgPrintf("error: expected LUMALP!\n");
	// copy alpha should work for same size, with alpha existing
	smallRGB.SetFormat(Image::RGBA);	// should be in this format already
	smallLUM.SetFormat(Image::LUMALP);	// ditto
	if ( !smallRGB.CopyAlpha(smallALPHA) ) App::MsgPrintf("error: copy failed!\n");
	if (smallRGB.GetFormat() != Image::RGBA) App::MsgPrintf("error: expected RGBA!\n");
	if ( !smallLUM.CopyAlpha(smallALPHA) ) App::MsgPrintf("error: copy failed!\n");
	if (smallLUM.GetFormat() != Image::LUMALP) App::MsgPrintf("error: expected LUMALP!\n");
	// some final checks
	if ( !bigRGB.IsValid()   || !smallALPHA.IsValid() ||
		 !bigALPHA.IsValid() || !smallRGB.IsValid()   || !smallLUM.IsValid()
	) App::MsgPrintf("error: invalid image found\n");
}//DeliberateStupidity

void MyWnd::CreateTextures() {
	// do some stupid stuff on purpose, just as a test
	DeliberateStupidity();

	// generate texture IDs
	glGenTextures(TEX_COUNT, m_texid);

	int x,y;

	// create alpha texture image
	Image img;
	img.Create(64,64,Image::ALPHA);				// TEST: create ALPHA image
	for (y=0;y<img.Height();y++)
		for (x=0;x<img.Width();x++) {
			float
				u = (float)x / (float)img.Width() - 0.5f,
				v = (float)y / (float)img.Height()- 0.5f,
				d = (u*u + v*v), 
				a = (d<0.25f)?(1.0f - d / 0.25f):0.0f;
			img.SetPixel1f(x,y, a);				// TEST: SetPixel1f on ALPHA image
		}
	// bind and load alpha texture
	glBindTexture(GL_TEXTURE_2D, m_texid[TEX_ALPHA]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexEnvi(GL_TEXTURE_2D, GL_TEXTURE_ENV_MODE, GL_MODULATE);
	img.glTexImage2D();							// TEST: glTexImage2D with ALPHA image

	// test alpha copy from one image to another
	Image img2;
	img2.Create(img.Width(),img.Height(),Image::RGB);
	for (y=0;y<img.Height();y++)
		for (x=0;x<img.Width();x++)
			img2.SetPixel3f(x,y,
				(float)x/(float)img.Width(),	// red   = x/w
				0,								// green = 0
				(float)y/(float)img.Height()	// blue  = y/h
			);
	img2.CopyAlpha(img);
	// bind and load alpha texture
	glBindTexture(GL_TEXTURE_2D, m_texid[TEX_RGBA]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	glTexEnvi(GL_TEXTURE_2D, GL_TEXTURE_ENV_MODE, GL_MODULATE);
	img2.glTexImage2D();

	// create checker texture image
	img.Create(2,2,Image::LUM);
	for (y=0;y<img.Height();y++)
		for (x=0;x<img.Width();x++)
			img.SetPixel1f(x,y, ((x^y)&1)?1.0f:0.0f);
	// bind and load alpha texture
	glBindTexture(GL_TEXTURE_2D, m_texid[TEX_CHECK]);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexEnvi(GL_TEXTURE_2D, GL_TEXTURE_ENV_MODE, GL_MODULATE);
	img.glTexImage2D();
}//CreateTextures

void MyWnd::DeleteTextures() {
	glDeleteTextures(2, m_texid);
	for (int n=0;n<TEX_COUNT;n++) m_texid[n]=0;
}//DeleteTextures

void MyWnd::DrawQuad() {
	// draw a unit sized quad, centred at origin, with texture coords.
	glBegin(GL_QUADS);
		glTexCoord2f(0,0);
		glVertex2f(-0.5f, -0.5f);
		glTexCoord2f(1,0);
		glVertex2f(+0.5f, -0.5f);
		glTexCoord2f(1,1);
		glVertex2f(+0.5f, +0.5f);
		glTexCoord2f(0,1);
		glVertex2f(-0.5f, +0.5f);
	glEnd();
}//DrawQuad

void MyWnd::OnDisplay() {
	glClear(GL_COLOR_BUFFER_BIT);

	// checkered background
	glPushAttrib(GL_ENABLE_BIT);
		// load check texture
		glBindTexture(GL_TEXTURE_2D, m_texid[TEX_CHECK]);
		// draw check textured quad
		glPushMatrix();
			glScalef(2.0f,2.0f,1.0f);
			glMatrixMode(GL_TEXTURE);
			glPushMatrix();	// save texture matrix
				glScalef(4,4,4);
				DrawQuad();
			glPopMatrix();
			glMatrixMode(GL_MODELVIEW);
		glPopMatrix();
	glPopAttrib();

	// quad with alpha texture
	glPushAttrib(GL_ENABLE_BIT | GL_CURRENT_BIT);
	glPushMatrix();
		glTranslatef(-0.5f,0,0);
		glEnable(GL_BLEND);
		glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
		// load alpha texture
		glBindTexture(GL_TEXTURE_2D, m_texid[TEX_ALPHA]);
		// draw alpha textured quad
		glColor3f(1,0,0);
		DrawQuad();
	glPopMatrix();
	glPopAttrib();

	// quad with RGBA texture
	glPushAttrib(GL_ENABLE_BIT);
	glPushMatrix();
		glTranslatef(0.5f,0,0);
		glEnable(GL_BLEND);
		glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
		// load RGBA texture
		glBindTexture(GL_TEXTURE_2D, m_texid[TEX_RGBA]);
		// draw RGBA textured quad
		DrawQuad();
	glPopMatrix();
	glPopAttrib();

	SwapBuffers();
}//OnDisplay

static class MyApp :public App {
private:
	MyWnd m_mainWnd;
} theApp;
