#include "TMaterial.h"

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

static const bool
	TMAT_USE_MIPMAPS  = true,		// use mip-mapping
	TMAT_FALLBACK_TEX = true,		// fall back to JPG files if can't load?
	TMAT_CLAMP		  = false;		// clamp texture?

//-----------------------------------------------------------------------------

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable: 4127)	// conditional expression constant
#endif//_MSC_VER

bool TMaterial::LoadTexture( const string &name ) {
	m_sTexName = name;
	bool ok = m_texmap.Load(m_sTexName.c_str());
	if (ok || !TMAT_FALLBACK_TEX) return ok;
	// fallback: if we fail to load 'some.tif', look for JPG substitute
	// under the name 'some_tif.jpg'
	{
		string str(m_sTexName.c_str());
		int nDot = (int)str.find_last_of('.');
		if (nDot < 0) return false;	// no extension!?
		str[nDot]='_';				// replace . with _
		str += string(".jpg");		// append JPG
		//return m_texmap.Load(str.c_str());
		// JWW 16/09/04 modified to allow another fallback to 'some.jpg'
		if (m_texmap.Load(str.c_str())) return true;
	}
	// JWW 16/09/04 modified to also try 'some.jpg'
	// this makes it much easier to simply batch convert all the textures
	string str(m_sTexName.c_str());
	int nDot = (int)str.find_last_of('.');
	str.resize(nDot);			// remove extension
	str += string(".jpg");		// append JPG
	// this is the last attempt: try and load as 'some.jpg'
	return m_texmap.Load(str.c_str());
}//LoadTexture

//-----------------------------------------------------------------------------

void TMaterial::GLApply() const {
	GLApplyMat();
	GLApplyTex();
}//GLApply

//-----------------------------------------------------------------------------

void TMaterial::GLApplyMat() const {
	// apply ambient, diffuse, specular, emission colours
	Vector3f emission = m_diffuse * m_illum;
	GLfloat
		pfAmbient [] = {m_ambient .x, m_ambient .y, m_ambient .z, m_alpha},
		pfDiffuse [] = {m_diffuse .x, m_diffuse .y, m_diffuse .z, m_alpha},
		//pfSpecular[] = {m_specular.x, m_specular.y, m_specular.z, 1},// m_alpha},
		pfEmission[] = {emission  .x, emission  .y, emission  .z, m_alpha},
		pfZero    [] = {0.0f,0.0f,0.0f,0.0f},
		//pfOne     [] = {1.0f,1.0f,1.0f,0.0f},
		pfOneAlpha[] = {1.0f,1.0f,1.0f, m_alpha},	// JWW 11/04/05 added
		pfShininess[]= {m_shininess*128.0f};

	if (m_alpha < 1.0f) {
		glEnable(GL_BLEND);
		glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	} else
		glDisable(GL_BLEND);

	// JWW 12/12/03 added this
	GLenum matFace = GL_FRONT_AND_BACK;	// JWW 12/12/03 made 'em all front+back

	if (m_texmap.GetData()) {
		glEnable(GL_TEXTURE_2D);
		// JWW 11/04/05 changed these to consider material alpha, but left
		// diffuse intensity at full white (otherwise textures look really dingy)
		glMaterialfv(matFace, GL_AMBIENT,  pfZero);
		glMaterialfv(matFace, GL_DIFFUSE,  pfOneAlpha);
		glMaterialfv(matFace, GL_SPECULAR, pfZero);
		glMaterialfv(matFace, GL_EMISSION, pfEmission);
		glMaterialfv(matFace, GL_SHININESS,pfShininess);
		glPushAttrib(GL_TRANSFORM_BIT);
			glMatrixMode(GL_TEXTURE);
			glLoadIdentity();
			glTranslatef(m_texOff.x, m_texOff.y, 0.0f);	// TODO: check
			glScalef(m_texScale.x, m_texScale.y, 1.0f);	// TODO: check
			glRotatef(m_texAngle, 0,0,1);				// TODO: check
		glPopAttrib();
	} else {
		glDisable(GL_TEXTURE_2D);
		// JWW 12/12/03 replaced all GL_FRONT with matFace
		glMaterialfv(matFace, GL_AMBIENT,  pfAmbient );
		glMaterialfv(matFace, GL_DIFFUSE,  pfDiffuse );
		//glMaterialfv(matFace, GL_SPECULAR, pfSpecular);	// JWW 11/04/05 removed
		glMaterialfv(matFace, GL_SPECULAR, pfZero);
		glMaterialfv(matFace, GL_EMISSION, pfEmission);
		glMaterialfv(matFace, GL_SHININESS,pfShininess);
		glPushAttrib(GL_TRANSFORM_BIT);
			glMatrixMode(GL_TEXTURE);
			glLoadIdentity();
		glPopAttrib();
	}
}//ApplyMat

//-----------------------------------------------------------------------------

void TMaterial::GLApplyTex() const {
	if (m_texmap.GetData()) {
		if (TMAT_CLAMP) {
			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
			glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);
		}
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
		glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER, GL_LINEAR);
		if (TMAT_USE_MIPMAPS) {
			glTexParameteri(GL_TEXTURE_2D,
				GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
			glTexParameteri(GL_TEXTURE_2D,
				GL_TEXTURE_MAG_FILTER, GL_LINEAR);
			m_texmap.gluBuild2DMipmaps();
		} else {
			if (TMAT_CLAMP) {
				glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
				glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);
			}
			glTexParameteri(GL_TEXTURE_2D,
				GL_TEXTURE_MIN_FILTER, GL_LINEAR);
			glTexParameteri(GL_TEXTURE_2D,
				GL_TEXTURE_MAG_FILTER, GL_LINEAR);
			#ifdef _DEBUG
				fprintf(stderr,"ScaleImagePow2.. ");
			#endif
			m_texmap.ScaleImagePow2();
			#ifdef _DEBUG
				fprintf(stderr,"done\nglTexImage2D.. ");
			#endif
			m_texmap.glTexImage2D();
			#ifdef _DEBUG
				fprintf(stderr,"done\n");
			#endif
		}
	} else {
		// no texture
	}
}//ApplyTex

#ifdef _MSC_VER
#pragma warning(pop)
#endif//_MSC_VER

//-----------------------------------------------------------------------------
