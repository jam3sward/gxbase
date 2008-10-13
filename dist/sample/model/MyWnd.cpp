#include "MyWnd.h"
#include "MyApp.h"

MyWnd::MyWnd() {
	m_angle=0.0f;
	m_bDrag=false;
	m_bNorms=false;
	m_bFaces=false;
	m_drawStyle = DSMaterial;
	m_DSList = 0;
	m_mx = m_my = 0.0f;
	m_ox = m_oy = 0.0f;
	m_ax = m_ay = 0.0f;
	SetSize(800,600);
}//MyWnd

void MyWnd::OnCreate() {
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	// turn on two-sided lighting, in case model has two-sided materials
	// (you may not need this; only a few objects use this)
	glLightModeli(GL_LIGHT_MODEL_TWO_SIDE,GL_TRUE);
}//OnCreate

void MyWnd::OnDestroy() {
	Model &model = ((MyApp*)App::Get())->GetModel();
	// allow the model to clean up any OpenGL resources
	model.FreeGL();
}//OnDestroy

void MyWnd::DrawNorms() {
	Model &model = ((MyApp*)App::Get())->GetModel();

	Model::Vector3f size = model.GetBoxSize();
	const float S = (size.x+size.y+size.z)/(3.0f*40.0f);
	glPushAttrib(GL_ENABLE_BIT | GL_CURRENT_BIT);
		glDisable(GL_LIGHTING);
		glEnable(GL_COLOR_MATERIAL);
		glDisable(GL_TEXTURE_2D);
		glColor3f(0,0,1);

		glBegin(GL_LINES);
			for (long n=0; n<model.GetNumVerts(); n++) {
				Model::Vector3f
					P( model.GetVert(n) ),
					N( model.GetNorm(n) );
				glVertex3f(P.x,P.y,P.z);
				glVertex3f(P.x+N.x*S, P.y+N.y*S, P.z+N.z*S);
			}
		glEnd();
	glPopAttrib();
}//DrawNorms

void MyWnd::DrawFaces() {
	Model &model = ((MyApp*)App::Get())->GetModel();

	glPushAttrib(GL_ENABLE_BIT | GL_CURRENT_BIT);
		glEnable(GL_COLOR_MATERIAL);
		glDisable(GL_TEXTURE_2D);
		glColor3f(1,1,0.5);

		glBegin(GL_TRIANGLES);
			for (long n=0; n<model.GetNumFaces(); n++) {
				Model::Face			// three vertex indices for the face
					face( model.GetFace(n) );
				Model::Vector3f		// three vertices for the face
					A( model.GetVert(face.a) ),
					B( model.GetVert(face.b) ),
					C( model.GetVert(face.c) );
				Model::Vector3f		// three normals for the face
					I( model.GetNorm(face.a) ),
					J( model.GetNorm(face.b) ),
					K( model.GetNorm(face.c) );
				glNormal3f(I.x,I.y,I.z);
				glVertex3f(A.x,A.y,A.z);
				glNormal3f(J.x,J.y,J.z);
				glVertex3f(B.x,B.y,B.z);
				glNormal3f(K.x,K.y,K.z);
				glVertex3f(C.x,C.y,C.z);
			}
		glEnd();
	glPopAttrib();
}//DrawFaces

void MyWnd::OnDisplay() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	const Model &model = ((MyApp*)App::Get())->GetModel();

	glPushAttrib(GL_ENABLE_BIT);
		glEnable(GL_COLOR_MATERIAL);
		glDisable(GL_DEPTH_TEST);
		glBegin(GL_QUADS);
			glColor3f(0.5f,0.5f,0.5f);
			glVertex2f(-1.0f,-1.0f);
			glVertex2f(+1.0f,-1.0f);
			glColor3f(0.0f,0.0f,0.0f);
			glVertex2f(+1.0f,+1.0f);
			glVertex2f(-1.0f,+1.0f);
		glEnd();
	glPopAttrib();

	const Model::Vector3f
		centre( model.GetBoxCentre() ),
		size  ( model.GetBoxSize() );
	float sz = size.x;
	if (size.y > sz) sz = size.y;
	if (size.z > sz) sz = size.z;
	sz *= 1.5f;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0f, Aspect(), 0.5*sz, sz*1.5);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(
		0,0,sz,
		0,0,0,
		0,1,0
	);

	glPushAttrib(GL_ENABLE_BIT);
	glPushMatrix();
		glRotatef(m_ax, 0.f,1.f,0.f);
		glRotatef(m_ay, 1.f,0.f,0.f);
		glTranslatef(-centre.x,-centre.y,-centre.z);

		switch (m_drawStyle) {
		case DSPoints:
		case DSWire:
			glDisable(GL_LIGHTING);
		case DSFlat:
		case DSSmooth:
			glColor3f(1,1,1);
			glEnable(GL_COLOR_MATERIAL);
			break;
		case DSMaterial:
			glDisable(GL_COLOR_MATERIAL);
			break;
		}

		if (m_bFaces) {
			// draw it ourselves, by reading faces from the model
			DrawFaces();
		} else {
			// draw it the easy way
			model.DrawGL(m_drawStyle | m_DSList);
		}

		if (m_bNorms) DrawNorms();
	glPopMatrix();
	glPopAttrib();

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0,Width(),0,Height(),-1,1);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glPushAttrib(GL_ENABLE_BIT);
		glEnable(GL_COLOR_MATERIAL);
		glDisable(GL_DEPTH_TEST);

		glColor3f(1,1,1);
		glRasterPos2f(8,8);
		if (m_fps.Rate() > 0.0f)
			Printf("%.0f Hz %s", (float)m_fps.Rate(), (m_DSList?"(native)":"(d.list)"));
		glRasterPos2f(8.0f,Height()-20.0f);
		Printf("%ld faces", (long)model.GetNumFaces() );
		glRasterPos2f(8.0f,Height()-40.0f);
		Printf("%ld verts", (long)model.GetNumVerts() );
	glPopAttrib();

	SwapBuffers();

	m_fps.Update( (float)App::GetTime() );
}//OnDisplay

void MyWnd::OnMouseButton(MouseButton button, bool down) {
	if (button == MBLeft) {
		m_bDrag = down;
	}
	Redraw();
}

void MyWnd::OnMouseMove(int x, int y) {
	m_mx = (float)x;
	m_my = (float)y;
	if (m_bDrag) {
		m_ax += 0.5f * (m_mx - m_ox);
		m_ay -= 0.5f * (m_my - m_oy);
	}
	m_ox = m_mx;
	m_oy = m_my;
	Redraw();
}

void MyWnd::OnKeyboard(int key, bool down) {
	Model &model = ((MyApp*)App::Get())->GetModel();
	if (down) switch (tolower(key)) {
		case 'p':	// points
			m_drawStyle = DSPoints;
			break;
		case 'w':	// wireframe
			m_drawStyle = DSWire;
			break;
		case 'm':	// materials
			m_drawStyle = DSMaterial;
			break;
		case 's':	// smooth
			if (m_drawStyle != DSSmooth)
				m_drawStyle = DSSmooth;
			else
				m_drawStyle = DSFlat;
			break;
		case 'd':	// toggle display list option
			m_DSList ^= DSNoDisplayList;
			break;
		case 'l':	// load new object
			FileOpen();
			break;
		case 'f':	// toggle fullscreen
			SetFullscreen( !GetFullscreen() );
			break;
		case 'n':	// draw normals?
			m_bNorms = !m_bNorms;
			break;
		case 't':	// draw triangles?
			m_bFaces = !m_bFaces;
			break;
		case VK_ESCAPE:
			App::Get()->Close();
			break;
	}
	Redraw();
}

void MyWnd::OnIdle() {
	Redraw();
}//OnIdle

void MyWnd::FileOpen() {
	OpenFileDialog dlg;
	dlg.SetFilter("3DS Objects (*.3ds)|*.3ds|All Files (*.*)|*.*||");
	if (dlg.Show()) {
		Cursor old = GetCursor();
		SetCursor(CRHourglass);
		MyApp::GetApp().Load( dlg.GetPathName() );
		SetCursor(old);
	}
}//FileOpen
