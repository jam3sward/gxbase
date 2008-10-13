#include "GXBase.h"
using namespace gxbase;

// This program tests some of the image class functionality
// JWW 16/10/03 - added file browser to select image file
// JWW 19/11/03 - added checker background for TGA alpha test

enum TextureIDs {
	TEX_CHECK,
	TEX_IMAGE,
	TEX_COUNT // must appear last, used to count textures
};

class MyWnd :public GLWindow {
public:
	MyWnd() {
		m_tConv	 = 0.0;
		m_tBuild = 0.0;
		m_nMethod= 0;
		m_sMethod= 0;
		for (int n=0;n<TEX_COUNT;n++) m_texid[n]=0;
		Load();
	}

	const char *GetImageFilename();

	void Load() {
		const char *sFilename = GetImageFilename();
		if (!sFilename) return;
		if (img.Load(sFilename))
			m_bReload=true;	// texture needs loading now
		else {
			App::MsgPrintf("Failed to load image\n");
			img.Clear3f(0.3f,0.3f,0.3f);
			m_bReload=true;
		}
	}

	void OnCreate() {
		// create texture IDs
		glGenTextures(TEX_COUNT, m_texid);

		// set up texturing
		glEnable(GL_TEXTURE_2D);

		// clear window first: it might take a moment before image loads
		glClear(GL_COLOR_BUFFER_BIT);
		SwapBuffers();

		// create checker texture image
		Image img(2,2,Image::LUM);
		for (long y=0;y<img.Height();y++)
			for (long x=0;x<img.Width();x++)
				img.SetPixel1f(x,y, ((x^y)&1)?1.0f:0.0f);
		// bind and load checker texture
		glBindTexture(GL_TEXTURE_2D, m_texid[TEX_CHECK]);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
		glTexEnvi(GL_TEXTURE_2D, GL_TEXTURE_ENV_MODE, GL_MODULATE);
		img.glTexImage2D();
	}

	void OnDestroy() {
		glDeleteTextures(TEX_COUNT, m_texid);
	}

	void MakeSample() {
		img.Create(256,256);
		img.Clear3f(0.5,0,0);
		for (long y=0;y<img.Height();y++) {
			BYTE *dst = img.GetRowData(y);
			if (dst) for (long x=0;x<img.Width();x++) {
				dst[0] = (((x>>4)^(y>>4))&1)?255:0;
				dst[1] = dst[0];
				dst[2] = 255;
				dst+=3;
			}
		}

		m_bReload=true;
		Redraw();
	}

	void DrawHUD() {
		const char *s="UNKNOWN";
		switch (img.GetFormat()) {
			case Image::RGB:	s="RGB";	break;
			case Image::BGR:	s="BGR";	break;
			case Image::RGBA:	s="RGBA";	break;
			case Image::BGRA:	s="BGRA";	break;
			case Image::LUM:	s="LUM";	break;
			case Image::LUMALP: s="LUMALP"; break;
		}
		glPushAttrib(GL_ENABLE_BIT|GL_CURRENT_BIT);
			glDisable(GL_TEXTURE_2D);

			glColor3f(0,1,0);
			glRasterPos2f(-0.9f,-0.9f);
			Printf("%s %ldx%ld %.2fkb pad=%ld bpp=%ld",
				s,
				(long)img.Width(), (long)img.Height(),
				((float)img.Size()/1024.0f),
				(long)img.GetRowPad(),
				(long)(img.GetPixelSize()*8)
			);

			glRasterPos2f(-0.9f,-0.8f);
			Printf("tc=%.2lf tb=%.2lf tex=%s", m_tConv, m_tBuild, m_sMethod);
		glPopAttrib();
	}

	void OnDisplay() {
		// load the texture if required
		if (m_bReload) {
			// build texture from image
			double tStart = App::GetTime();
			bool ok=false;
			switch (m_nMethod%2) {
			case 0:
				// 0 == success (like the real gluBuild2DMipmaps)
				glBindTexture(GL_TEXTURE_2D, m_texid[TEX_IMAGE]);
				ok = (img.gluBuild2DMipmaps()==0);
				glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
				glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
				m_sMethod = "mip-map";
				break;
			case 1:
				// true == success
				glBindTexture(GL_TEXTURE_2D, m_texid[TEX_IMAGE]);
				ok = img.glTexImage2D();
				glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
				glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
				m_sMethod = "tex2d";
				break;
			}
			m_tBuild = App::GetTime()-tStart;

			if (ok) {
				glEnable(GL_TEXTURE_2D);
			} else {
				glDisable(GL_TEXTURE_2D);
			}

			// doesn't need loading again
			m_bReload=false;
		}

		glPushAttrib(GL_ENABLE_BIT);
			// draw checker pattern
			glBindTexture(GL_TEXTURE_2D, m_texid[TEX_CHECK]);
			glBegin(GL_QUADS);
				glTexCoord2f(0,0); glVertex2f(-1,-1);
				glTexCoord2f(4,0); glVertex2f(+1,-1);
				glTexCoord2f(4,4); glVertex2f(+1,+1);
				glTexCoord2f(0,4); glVertex2f(-1,+1);
			glEnd();

			glEnable(GL_BLEND);
			glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

			// draw image
			glBindTexture(GL_TEXTURE_2D, m_texid[TEX_IMAGE]);
			glBegin(GL_QUADS);
				glTexCoord2f(0,0); glVertex2f(-1,-1);
				glTexCoord2f(1,0); glVertex2f(+1,-1);
				glTexCoord2f(1,1); glVertex2f(+1,+1);
				glTexCoord2f(0,1); glVertex2f(-1,+1);
			glEnd();
		glPopAttrib();

		// display HUD
		DrawHUD();

		// swap buffers to make it visible
		SwapBuffers();
	}

	void OnKeyboard(int key, bool down) {
		if (down) switch(tolower(key)) {
		case 't':	// switch texture load method
			m_nMethod++;
			if (m_nMethod==1) {
				// if switching to tex2d, we need power of two textures
				if (!img.ScaleImagePow2())
					App::MsgPrintf("Image::RescalePow2() failed");
			}
			m_bReload=true;
			Redraw();
			break;
		case 'l':	// convert to LUM
			if (img.SetFormat(Image::LUM)) {
				m_bReload=true;
				Redraw();
			}
			break;
		case 'a': {	// toggle alpha channel
			double t = App::GetTime();
			switch (img.GetFormat()) {
			case Image::RGB:	img.SetFormat(Image::RGBA); break;
			case Image::BGR:	img.SetFormat(Image::BGRA); break;
			case Image::RGBA:	img.SetFormat(Image::RGB);  break;
			case Image::BGRA:	img.SetFormat(Image::BGR);  break;
			case Image::LUM:	img.SetFormat(Image::LUMALP); break;
			case Image::LUMALP:	img.SetFormat(Image::LUM);  break;
			}
			m_tConv = App::GetTime()-t;
			m_bReload=true;
			Redraw();
			} break;
		case 'r': {	// convert to RGB
			double t = App::GetTime();
			if (img.SetFormat(Image::RGB)) {
				m_tConv = App::GetTime()-t;
				m_bReload=true;
				Redraw();
			}
			} break;
		case 'b': {	// convert to BGR
			double t = App::GetTime();
			if (img.SetFormat(Image::BGR)) {
				m_bReload=true;
				m_tConv = App::GetTime()-t;
				Redraw();
			}
			} break;
		case 'p': {	// pack image
			if (img.PackImage()) {
				m_bReload=true;
				Redraw();
			} else
				App::MsgPrintf("Image::PackImage() failed");
			} break;
		case 'd': // reload image from disk
			Load();
			Redraw();
			break;
		case 'g':
			img.GrabScreen();
			m_bReload=true;
			Redraw();
			break;
		case 'f': // toggle fullscreen
			SetFullscreen( !GetFullscreen() );
			break;
		case 's': // create 256x256 sample image
			MakeSample();
			break;
		case 'w': // write to file
			if (!img.Save("output.bmp"))
				App::MsgPrintf("Image::Save() failed");
			break;
		case 'v': // capture current viewport
			if (!img.GrabGLViewport())
				App::MsgPrintf("Image::GrabGLViewport() failed");
			m_bReload=true;
			break;
		case 'c': // capture current window
			img.GrabGLWindow();
			m_bReload=true;
			break;
		case '2': { // resize to nearest power of 2
			if (img.ScaleImagePow2()) {
				m_bReload=true;
				Redraw();
			} else
				App::MsgPrintf("Image::ScaleImagePow2() failed");
			} break;
		default:  // alter row padding from 0..9
			if ((key>='0') && (key<='9')) {
				long pad = key-'0';
				if (img.SetRowPad(pad)) {
					m_bReload=true;
					Redraw();
				} else
					App::MsgPrintf("Image::SetRowPad(%ld) failed", pad);
			}
		}
	}

	//void OnIdle() {
	//	Redraw();
	//}

private:
	Image img;
	bool	m_bReload;
	double	m_tBuild;
	double	m_tConv;
	int		m_nMethod;
	const char *m_sMethod;
	GLuint m_texid[TEX_COUNT];
};

class MyApp :public App {
private:
	MyWnd wnd;
};

/**
 * Browse for and return an image filename. Returns a temporary pointer to
 * the filename string, or NULL.
 */
const char *MyWnd::GetImageFilename() {
	// buffer to receive filename
	static char szFile[MAX_PATH+50];
	// filter string
	const char *szFilter =
		"Image Files (*.bmp;*.jpg;*.tga;*.gif;*.wmf;*.emf;*.ico)\0"
		"*.BMP;*.JPG;*.TGA;*.GIF;*.WMF;*.EMF;*.ICO\0"
		"BMP Images (*.bmp)\0*.BMP\0"
		"JPG Images (*.jpg)\0*.JPG\0"
		"TGA Images (*.tga)\0*.TGA\0"	// JWW 19/11/03
		"All Files (*.*)\0*.*\0";

	// fill in openfilename structure
	OPENFILENAME ofn;
	memset(&ofn,0,sizeof(ofn));
	ofn.lStructSize = sizeof(ofn);
	ofn.lpstrTitle  = "Choose an Image File";
	ofn.lpstrFile   = szFile;
	ofn.lpstrFile[0]= 0;
	ofn.nMaxFile    = sizeof(szFile);
	ofn.lpstrFilter = szFilter;
	ofn.nFilterIndex= 1;
	ofn.Flags		= OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST;

	// display open file dialog
	if (GetOpenFileName(&ofn)==TRUE)
		return szFile;
	else
		return NULL;
}//GetImageFilename

static MyApp theApp;
