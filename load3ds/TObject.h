#ifndef __tobject_h
#define __tobject_h

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

#include <vector>
#include <string>
using namespace std;

//-----------------------------------------------------------------------------

#include "Vector2f.h"
#include "Vector3f.h"
#include "Matrix44f.h"
#include "Box3f.h"
#include "TFace.h"

//-----------------------------------------------------------------------------

class TObject {
public:
	TObject();
	TObject(const TObject &rhs);

	TObject & operator = (const TObject &rhs);

	void Free();

	const Box3f &Box() const;

	void SetName(const string &name);
	const string & GetName() const;

	void SetMaterialID(int id) { m_nMatId=id; }
	int GetMaterialID() const { return m_nMatId; }

	vector<Vector3f> & Vertices();
	const vector<Vector3f> & Vertices() const;

	vector<Vector3f> & Normals();
	const vector<Vector3f> & Normals() const;

	vector<Vector2f> & TexCoords();
	const vector<Vector2f> & TexCoords() const;

	vector<TFace> & Faces();
	const vector<TFace> & Faces() const;

	void SetPivot(const Vector3f &p);
	const Vector3f &GetPivot() const;

	void SetMatrix(const Matrix44f &m);
	const Matrix44f &GetMatrix() const;

	void SetSubObjTex(bool bSubTex);
	bool GetSubObjTex() const;

	void ApplyXForm() const;
	void Draw() const;

	void DrawFacesTNV() const;
	void DrawFacesNV() const;
	void DrawFacesV() const;
	void DrawWireV() const;
	void DrawPointV() const;

	const Matrix44f &GetMatrixGL() const;

	/**
	 * Delete current contents of object (if any), then copy faces from
	 * the (rhs) object that match the given material (id). If no faces
	 * match the given material (id), the object is left empty. The
	 * object material id will then be set to (id).
	 */
	bool AssignFacesByMatID(const TObject &rhs, int id);

public:
	/**
	 * The update method recalculates the object bounding box, normals
	 * and other properties that are required for rendering. It is
	 * important to update the object after making any changes to the
	 * structure, for example vertices, normals, faces, texture coords.
	 */
	bool Update();

	/**
	 * Update bounding box
	 */
	void UpdateBox();

private:
	/**
	 * Calculate bounding box
	 */
	void CalcBox();

	/**
	 * Calculate matrix
	 */
	void CalcMatrix();

	/**
	 * Calculate object normals
	 */
	bool CalcNormals();

	/**
	 * Reset member variables
	 */
	void Reset();

	/**
	 * Transform a vertex
	 */
	Vector3f XFormVert(const Vector3f &v);

private:
	int		m_nMatId;		// material ID
	string	m_sName;		// object name

	Matrix44f m_matrix;		// object transformation matrix
	Vector3f  m_pivot;		// pivot point
	Matrix44f m_matrixGL;	// final OpenGL matrix
	GLfloat   m_glmat[16];	// final OpenGL matrix

	vector<Vector3f> m_verts;	// object vertices
	vector<Vector3f> m_norms;	// object normals
	vector<Vector2f> m_texuv;	// texture UV coords.
	vector<TFace>	 m_faces;	// faces (triangles)

	Box3f m_box;		// object bounding box
	bool  m_bBoxValid;	// is box valid?
	bool  m_bPivot;		// do we have a pivot point?
	bool  m_bSubObjTex;	// do we have sub-object textures?
};

//-----------------------------------------------------------------------------

inline TObject::TObject() {
	Reset();
}

inline TObject::TObject(const TObject &rhs) {
	*this = rhs;
}
#include <assert.h>
inline TObject & TObject::operator = (const TObject &rhs) {
	Free();
	m_nMatId    = rhs.m_nMatId;
	m_sName     = rhs.m_sName;
	m_box       = rhs.m_box;
	m_bBoxValid = rhs.m_bBoxValid;
	m_verts     = rhs.m_verts;
	m_norms     = rhs.m_norms;
	m_texuv     = rhs.m_texuv;
	m_faces     = rhs.m_faces;
	m_matrix    = rhs.m_matrix;
	m_matrixGL  = rhs.m_matrixGL;	// JWW 26/11/03 added
	m_pivot		= rhs.m_pivot;
	m_bPivot	= rhs.m_bPivot;
	m_bSubObjTex= rhs.m_bSubObjTex;
	assert(sizeof(m_glmat)==16*4);
	memcpy(m_glmat, rhs.m_glmat, sizeof(m_glmat));
	return *this;
}

inline const Box3f &TObject::Box() const {
	if (!m_bBoxValid) ((TObject*)this)->CalcBox();	// naughty
	return m_box;
}

inline vector<Vector3f> & TObject::Vertices() {
	m_bBoxValid=false;
	return m_verts;
}

inline void TObject::SetName(const string &name) {
	m_sName = name;
}

inline const string & TObject::GetName() const {
	return m_sName;
}

inline const Matrix44f &TObject::GetMatrixGL() const {
	return m_matrixGL;
}

inline const vector<Vector3f> & TObject::Vertices() const { return m_verts; }

inline vector<Vector3f> & TObject::Normals() { return m_norms; }
inline const vector<Vector3f> & TObject::Normals() const { return m_norms; }

inline vector<Vector2f> & TObject::TexCoords() { return m_texuv; }
inline const vector<Vector2f> & TObject::TexCoords() const { return m_texuv; }

inline vector<TFace> & TObject::Faces() { return m_faces; }
inline const vector<TFace> & TObject::Faces() const { return m_faces; }

inline void TObject::SetSubObjTex(bool bSubTex) { m_bSubObjTex=bSubTex; }
inline bool TObject::GetSubObjTex() const { return m_bSubObjTex; }

inline Vector3f TObject::XFormVert(const Vector3f &v) {
	// get the object matrix
	const Matrix44f &m = m_matrixGL;
	return Vector3f(
		v.x*m[0][0] + v.y*m[0][1] + v.z*m[0][2] + m[0][3],
		v.x*m[1][0] + v.y*m[1][1] + v.z*m[1][2] + m[1][3],
		v.x*m[2][0] + v.y*m[2][1] + v.z*m[2][2] + m[2][3]
	);
}//xform

//-----------------------------------------------------------------------------

#endif//__tobject_h
