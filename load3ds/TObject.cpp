#ifdef  _WIN32
#include <windows.h>
#endif//_WIN32
#include <GL/gl.h>

/**************************************************************************\
 *
 * This file is part of the GXBase graphics library.
 * Copyright (C) 2003-2006 James Ward, Department of Computer Science,
 * University of Hull. All rights reserved.
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 *
 \**************************************************************************/

//-----------------------------------------------------------------------------

#include "TObject.h"

//-----------------------------------------------------------------------------

void TObject::Reset() {
	m_nMatId    = -1;
	m_sName		= "";
	m_bBoxValid = false;
	m_bPivot	= false;
	m_bSubObjTex= false;
	m_matrix.Identity();
	m_pivot.Zero();
	m_matrixGL.Identity();
	memset(m_glmat,0,sizeof(m_glmat));
}//Reset

//-----------------------------------------------------------------------------

void TObject::Free() {
	m_verts.clear();
	m_norms.clear();
	m_texuv.clear();
	m_faces.clear();
	Reset();
}//Free

//-----------------------------------------------------------------------------

/**
 * The update method recalculates the object bounding box, normals
 * and other properties that are required for rendering. It is
 * important to update the object after making any changes to the
 * structure, for example vertices, normals, faces, texture coords.
 */
bool TObject::Update() {
	CalcMatrix();
	CalcBox();
	return CalcNormals();
}//Update

//-----------------------------------------------------------------------------

void TObject::UpdateBox() {
	CalcBox();
}

void TObject::CalcBox() {
	if (m_verts.size()) {
		// we have some vertices, so calculate the bounding box
		Vector3f a( XFormVert(m_verts[0]) );	// first vertex
		m_box = Box3f(a,a);
		for (unsigned n=1; n<m_verts.size(); n++)
			m_box.Include( XFormVert(m_verts[n]) );
	} else {
		// no vertices, zero it
		m_box.Zero();
	}

	// box is valid now
	m_bBoxValid=true;
}//CalcBox

//-----------------------------------------------------------------------------

/**
 * This computes an OpenGL matrix that will transform the object at
 * time of drawing. It considers the object matrix and pivot point.
 */
void TObject::CalcMatrix() {
	// start with identity matrix
	Matrix44f m;
	m.Identity();

	// we only need this transformation if the object has a pivot point
	// (since 3DS stores objects in world coordinates)
	if (m_bPivot) {
		// inverse of model matrix
		Matrix44f modInv(m_matrix);
		modInv.Invert();

		// calculate final OpenGL matrix
		m *= modInv;			// xform by modInv: move to origin
		m.Translate(-m_pivot);	// xform by -pivot: move pivot to origin
		m *= m_matrix;			// xform by m_matrix: final location
	}//if

	// copy into member variable
	m_matrixGL = m;

	// copy into raw GLfloat[16] array
	for (int n=0;n<16;n++) m_glmat[n] = m[n%4][n/4];
}//CalcMatrix

//-----------------------------------------------------------------------------

/**
 * Calculate normals for the object
 */
bool TObject::CalcNormals() {
	// vertex, face, group counters
	unsigned v,f,g;

	// current normal index, used when generating face normal indices below
	DWORD nc=0;

	// used to record index of normal assigned for a particular vertex
	vector<int> count;
	count.resize( m_verts.size() );

	DWORD groupMask=0;
	for (f=0; f<m_faces.size(); f++) {
		TFace &face = m_faces[f];
		// make a mask, containing a set bit for every smooth group in use
		groupMask |= face.smooth;
		// JWW 25/11/03 - used to check for any unassigned normals
		face.normal[0]=-1;
		face.normal[1]=-1;
		face.normal[2]=-1;
	}

	// for each smooth group that is in use..
	DWORD gm=1;
	for (g=0; g<32; g++,gm<<=1) if (gm & groupMask) {
		// clear normal assignment array to -1
		for (v=0; v<count.size(); v++) count[v]=-1;
		// for each face in smooth group g
		for (f=0; f<m_faces.size(); f++) {
			TFace &face = m_faces[f];
			// if this face belongs to smooth group g..
			if (face.smooth & gm) {
				// assign new normals for each unassigned vertex
				int i = face.vertex[0];
				if (count[i]<0) count[i]=nc++;	// generate new normal index
				face.normal[0]=count[i];		// store normal index

				i = face.vertex[1];
				if (count[i]<0) count[i]=nc++;	// generate new normal index
				face.normal[1]=count[i];		// store normal index

				i = face.vertex[2];
				if (count[i]<0) count[i]=nc++;	// generate new normal index
				face.normal[2]=count[i];		// store normal index
			}
		}//for(f)
	}//for(g)

	// JWW 03/11/03 - no normals generated by smooth group search
	if (!nc) {
		// use normal per vertex, single smooth group
		nc = (DWORD)m_verts.size();
		// make (normal index == vertex index) for every face
		for (f=0; f<m_faces.size(); f++) {
			TFace &face = m_faces[f];
			face.normal[0] = face.vertex[0];
			face.normal[1] = face.vertex[1];
			face.normal[2] = face.vertex[2];
		}
	} else {
		// normals generated by smooth group search..
		// JWW 25/11/03 - any unassigned normals?
		DWORD oldnc=nc;
		for (f=0; f<m_faces.size(); f++) {
			// assign some extra normals
			if (m_faces[f].normal[0]<0) m_faces[f].normal[0]=nc++;
			if (m_faces[f].normal[1]<0) m_faces[f].normal[1]=nc++;
			if (m_faces[f].normal[2]<0) m_faces[f].normal[2]=nc++;
		}
		if (nc>oldnc) printf("note: added %ld normals\n", (long)(nc-oldnc));
	}

	// resize normal array
	m_norms.resize(nc);
	// resize count array: used to count contributions to each normal now
	count.resize(nc);
	// prepare the normal array, and contribution count
	for (v=0; v<count.size(); v++) {
		m_norms[v]=0.0f;
		count[v]=0;
	}

	// calculate face normals
	for (f=0; f<m_faces.size(); f++) {
		TFace &face = m_faces[f];

		// vertex indices for face
		int
			ia = face.vertex[0],
			ib = face.vertex[1],
			ic = face.vertex[2];

		// three vertices of the face (A,B,C)
		const Vector3f
			&A = m_verts[ia],
			&B = m_verts[ib],
			&C = m_verts[ic];

		// two edges of the face
		Vector3f L(C-B),R(A-C);

		// cross product L+R to find face normal
		Vector3f N;
		N.Cross(L, R);
		// note: we don't normalise yet

		// normal indices for face
		int
			na = face.normal[0],
			nb = face.normal[1],
			nc = face.normal[2];

		// contribute to each attached normal, and count contributions
		m_norms[na] += N;
		count[na]++;
		m_norms[nb] += N;
		count[nb]++;
		m_norms[nc] += N;
		count[nc]++;
	}//for(f)

	/*for (f=0; f<m_faces.size(); f++)
		printf("F%02d: V=(%2d,%2d,%2d) N=(%2d,%2d,%2d) C=(%2d,%2d,%2d)\n", (int)f,
			m_faces[f].vertex[0], m_faces[f].vertex[1], m_faces[f].vertex[2],
			m_faces[f].normal[0], m_faces[f].normal[1], m_faces[f].normal[2],
			count[m_faces[f].normal[0]],
			count[m_faces[f].normal[1]],
			count[m_faces[f].normal[2]]
		);*/

	// scale normals: divide by number of contributions, then normalise
	for (v=0; v<m_norms.size(); v++) {
		if (count[v]) m_norms[v] /= (float)count[v];
		m_norms[v].Normalise();
	}

#ifdef  _DEBUG
	printf("generated %ld normals\n", (long)m_norms.size());
#endif//_DEBUG

	// success
	return true;
}//CalcNormals

//-----------------------------------------------------------------------------

/**
 * Draw faces, using vertices, normals and texture coordinates.
 */
void TObject::DrawFacesTNV() const {
	// fall back in case of no texture coordinates
	if (!m_texuv.size()) {
		DrawFacesNV();
		return;
	}
	glBegin(GL_TRIANGLES);
		for (unsigned n=0; n<m_faces.size(); n++) {
			// vertex indices
			int
				ia = m_faces[n].vertex[0],
				ib = m_faces[n].vertex[1],
				ic = m_faces[n].vertex[2];
			int
				ja = m_faces[n].normal[0],
				jb = m_faces[n].normal[1],
				jc = m_faces[n].normal[2];
			const Vector3f	// vertex
				&a = m_verts[ia],
				&b = m_verts[ib],
				&c = m_verts[ic];
			const Vector3f	// normal
				&na = m_norms[ja],
				&nb = m_norms[jb],
				&nc = m_norms[jc];
			const Vector2f	// texture coords.
				&ta = m_texuv[ia],
				&tb = m_texuv[ib],
				&tc = m_texuv[ic];
			glTexCoord2f(ta.x,ta.y);
			glNormal3f(na.x,na.y,na.z);
			glVertex3f(a.x,a.y,a.z);
			glTexCoord2f(tb.x,tb.y);
			glNormal3f(nb.x,nb.y,nb.z);
			glVertex3f(b.x,b.y,b.z);
			glTexCoord2f(tc.x,tc.y);
			glNormal3f(nc.x,nc.y,nc.z);
			glVertex3f(c.x,c.y,c.z);
		}
	glEnd();
}//DrawFacesTNV

//-----------------------------------------------------------------------------

/**
 * Draw faces, using vertices and normals.
 */
void TObject::DrawFacesNV() const {
	// fall back in case of no normals
	if (!m_norms.size()) {
		DrawFacesV();
		return;
	}
	glBegin(GL_TRIANGLES);
		for (unsigned n=0; n<m_faces.size(); n++) {
			const Vector3f
				&a = m_verts[ m_faces[n].vertex[0] ],
				&b = m_verts[ m_faces[n].vertex[1] ],
				&c = m_verts[ m_faces[n].vertex[2] ];
			const Vector3f
				&na = m_norms[ m_faces[n].normal[0] ],
				&nb = m_norms[ m_faces[n].normal[1] ],
				&nc = m_norms[ m_faces[n].normal[2] ];
			glNormal3f(na.x,na.y,na.z);
			glVertex3f(a.x,a.y,a.z);
			glNormal3f(nb.x,nb.y,nb.z);
			glVertex3f(b.x,b.y,b.z);
			glNormal3f(nc.x,nc.y,nc.z);
			glVertex3f(c.x,c.y,c.z);
		}
	glEnd();
}//DrawFacesNV

//-----------------------------------------------------------------------------

/**
 * Draw faces, using vertices only.
 */
void TObject::DrawFacesV() const {
	// Vertex
	glBegin(GL_TRIANGLES);
		for (unsigned n=0; n<m_faces.size(); n++) {
			const Vector3f
				&a = m_verts[ m_faces[n].vertex[0] ],
				&b = m_verts[ m_faces[n].vertex[1] ],
				&c = m_verts[ m_faces[n].vertex[2] ];
			glVertex3f(a.x,a.y,a.z);
			glVertex3f(b.x,b.y,b.z);
			glVertex3f(c.x,c.y,c.z);
		}
	glEnd();
}//DrawFacesV

//-----------------------------------------------------------------------------

void TObject::DrawWireV() const {
	glBegin(GL_LINES);
		for (unsigned n=0; n<m_faces.size(); n++) {
			const TFace &face = m_faces[n];
			const Vector3f
				&a = m_verts[ face.vertex[0] ],
				&b = m_verts[ face.vertex[1] ],
				&c = m_verts[ face.vertex[2] ];
			if (face.flags & TFace::ABedge) {
				glVertex3f(a.x,a.y,a.z);
				glVertex3f(b.x,b.y,b.z);
			}
			if (face.flags & TFace::BCedge) {
				glVertex3f(b.x,b.y,b.z);
				glVertex3f(c.x,c.y,c.z);
			}
			if (face.flags & TFace::CAedge) {
				glVertex3f(c.x,c.y,c.z);
				glVertex3f(a.x,a.y,a.z);
			}
		}
	glEnd();
}//DrawWireV

//-----------------------------------------------------------------------------

void TObject::DrawPointV() const {
	glBegin(GL_POINTS);
		for (unsigned n=0; n<m_verts.size(); n++) {
			const Vector3f &p = m_verts[n];
			glVertex3f(p.x,p.y,p.z);
		}
	glEnd();
}//DrawPointV

//-----------------------------------------------------------------------------

void TObject::ApplyXForm() const {
	// if object has a pivot, apply OpenGL matrix transform
	if (m_bPivot) glMultMatrixf(m_glmat);
}//ApplyXForm

//-----------------------------------------------------------------------------

void TObject::Draw() const {
	//glPushMatrix();
	//	// if object has a pivot, apply OpenGL matrix transform
	//	if (m_bPivot) glMultMatrixf(m_glmat);

		// draw triangles
		if (m_norms.size()) {
			if (m_texuv.size())
				DrawFacesTNV();
			else {
				DrawFacesNV();
			}
		} else {
			DrawFacesV();
		}

	//// restore matrix
	//glPopMatrix();
}//Draw

//-----------------------------------------------------------------------------

void TObject::SetMatrix(const Matrix44f &m) {
	m_matrix = m;
}//SetMatrix

//-----------------------------------------------------------------------------

const Matrix44f &TObject::GetMatrix() const {
	return m_matrix;
}//GetMatrix

//-----------------------------------------------------------------------------

void TObject::SetPivot(const Vector3f &p) {
	m_pivot=p;
	const float tiny=1.0E-9f;
	m_bPivot = (fabs(p.x)>tiny) || (fabs(p.y)>tiny) || (fabs(p.z)>tiny);
}

//-----------------------------------------------------------------------------

const Vector3f &TObject::GetPivot() const { return m_pivot; }

bool TObject::AssignFacesByMatID(const TObject &rhs, int id) {
	// free existing contents (if any)
	Free();

	unsigned i;

	// vertex/normal maps: map old indices to new indices
	vector<int> vmap,nmap;
	vmap.resize(rhs.Vertices().size());
	for (i=0;i<vmap.size();i++) vmap[i]=-1;
	nmap.resize(rhs.Normals().size());
	for (i=0;i<nmap.size();i++) nmap[i]=-1;

	int nTex=(int)rhs.TexCoords().size();
	
	vector<TFace>::const_iterator it;
	for (it=rhs.Faces().begin(); it!=rhs.Faces().end(); it++) {
		// does it match material id?
		if (it->matid == id) {
			// yes, add face to list
			m_faces.push_back(*it);
			TFace &face = m_faces.back();
			// which vertices did it use?
			int
				a = face.vertex[0],
				b = face.vertex[1],
				c = face.vertex[2];
			// add vertices if new, remap if not
			if (vmap[a]<0) {
				m_verts.push_back( rhs.Vertices()[a] );
				if (a < nTex) m_texuv.push_back( rhs.TexCoords()[a] );
				vmap[a] = ((int)m_verts.size())-1;
			}
			if (vmap[b]<0) {
				m_verts.push_back( rhs.Vertices()[b] );
				if (b < nTex) m_texuv.push_back( rhs.TexCoords()[b] );
				vmap[b] = ((int)m_verts.size())-1;
			}
			if (vmap[c]<0) {
				m_verts.push_back( rhs.Vertices()[c] );
				if (c < nTex) m_texuv.push_back( rhs.TexCoords()[c] );
				vmap[c] = ((int)m_verts.size())-1;
			}
			// store new vertex indices
			face.vertex[0]=vmap[a];
			face.vertex[1]=vmap[b];
			face.vertex[2]=vmap[c];

			// which normals did it use?
			a = face.normal[0];
			b = face.normal[1];
			c = face.normal[2];
			// add normals if new, remap if not
			if (nmap[a]<0) {
				m_norms.push_back( rhs.Normals()[a] );
				nmap[a] = ((int)m_norms.size())-1;
			}
			if (nmap[b]<0) {
				m_norms.push_back( rhs.Normals()[b] );
				nmap[b] = ((int)m_norms.size())-1;
			}
			if (nmap[c]<0) {
				m_norms.push_back( rhs.Normals()[c] );
				nmap[c] = ((int)m_norms.size())-1;
			}
			// store new normal indices
			face.normal[0]=nmap[a];
			face.normal[1]=nmap[b];
			face.normal[2]=nmap[c];
		}
	}

	m_nMatId = id;
	//m_nMatId    = rhs.m_nMatId;
	m_sName     = rhs.m_sName;
	//m_box       = rhs.m_box;
	//m_bBoxValid = rhs.m_bBoxValid;
	m_bBoxValid   = false;
	CalcBox();
	//m_verts     = rhs.m_verts;
	//m_norms     = rhs.m_norms;
	//m_texuv     = rhs.m_texuv;	// ATTN!!
	//m_faces     = rhs.m_faces;
	m_matrix    = rhs.m_matrix;
	m_matrixGL	= rhs.m_matrixGL;	// JWW 25/11/03 added
	m_pivot		= rhs.m_pivot;
	m_bPivot	= rhs.m_bPivot;
	m_bSubObjTex= false;
	assert(sizeof(m_glmat)==16*4);
	memcpy(m_glmat, rhs.m_glmat, sizeof(m_glmat));

	return (m_faces.size()>0);
}//AssignFacesByMatID

//-----------------------------------------------------------------------------


