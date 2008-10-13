#include "MyView.h"

MyView::MyView() {
	m_tex = 0;			// current texture (for cross-fade)
	m_alpha = 1.0f;		// alpha-blend (for cross-fading)
	m_texid[0]=0;		// texture IDs for the two textures
	m_texid[1]=0;
	m_tFade = -1.0f;	// time at start of fade (or -1 if not fading)
}

void MyView::OnCreate() {
	// set up texturing for linear mip-mapping
	glEnable(GL_TEXTURE_2D);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	// clear window initially
	glClear(GL_COLOR_BUFFER_BIT);
	SwapBuffers();

	// generate two texture IDs
	glGenTextures(2, m_texid);
}//OnCreate

void MyView::OnDestroy() {
	// release texture IDs
	glDeleteTextures(2, m_texid);
}//OnDestroy

void MyView::OnDisplay() {
	// enable blending for cross-fade
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	// draw first texture
	glColor4f(1,1,1, m_alpha);
	glBindTexture(GL_TEXTURE_2D, m_texid[m_tex]);
	glBegin(GL_QUADS);
		glTexCoord2f(0,0); glVertex2f(-1,-1);
		glTexCoord2f(1,0); glVertex2f(+1,-1);
		glTexCoord2f(1,1); glVertex2f(+1,+1);
		glTexCoord2f(0,1); glVertex2f(-1,+1);
	glEnd();

	// draw second texture
	glColor4f(1,1,1, 1.0f-m_alpha);
	glBindTexture(GL_TEXTURE_2D, m_texid[m_tex^1]);
	glBegin(GL_QUADS);
		glTexCoord2f(0,0); glVertex2f(-1,-1);
		glTexCoord2f(1,0); glVertex2f(+1,-1);
		glTexCoord2f(1,1); glVertex2f(+1,+1);
		glTexCoord2f(0,1); glVertex2f(-1,+1);
	glEnd();

	// swap buffers to make image visible
	SwapBuffers();
}//OnDisplay

void MyView::OnKeyboard(int key, bool down) {
	if (down) switch (tolower(key)) {
	case 'f':	// toggle fullscreen mode
		SetFullscreen( !GetFullscreen() );
		break;
	case 'q':	// quit application on Q/ESCAPE
	case VK_ESCAPE:
		Close();
		break;
	}
}//OnKeyboard

void MyView::OnIdle() {
	if (m_tFade < 0.0f) {
		// not cross-fading, use full alpha
		m_alpha = 1.0f;
	} else {
		// cross-fading: gently fade over 1 second
		m_alpha = ((float)App::GetTime() - m_tFade);
		// finish fading after 1 second
		if (m_alpha > 1.0f) {
			m_alpha = 1.0f;
			m_tFade = -1.0f;
		}
		// request a redraw
		Redraw();
	}
}

bool MyView::Load(const string &name) {
	bool done=false;
	do {
		// load the image
		Image img;
		if (!img.Load(name.c_str())) break;

		// define a texture from it
		if (MakeCurrent(true)) {
			m_tex^=1;
			glBindTexture(GL_TEXTURE_2D, m_texid[m_tex]);
			if (img.gluBuild2DMipmaps() != 0) break;
			MakeCurrent(false);
		} else
			break;	// failed to make current

		done=true;
	} while (0);

	// start cross-fading
	m_tFade = (float)App::GetTime();
	// redraw the display
	Redraw();

	return done;
}//Load