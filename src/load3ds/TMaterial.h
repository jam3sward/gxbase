#ifndef __tmaterial_h
#define __tmaterial_h

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

#include <string>

#include "GXBase.h"
using namespace gxbase;

#include "Vector2f.h"
#include "Vector3f.h"

//-----------------------------------------------------------------------------

class TMaterial {
public:
	TMaterial();
	TMaterial(const TMaterial &);

	TMaterial & operator = (const TMaterial &);

	void SetName(const std::string &name);
	const std::string & GetName() const;

	void SetAmbient( const Vector3f &rhs ) { m_ambient=rhs; }
	const Vector3f & GetAmbient() const { return m_ambient; }

	void SetDiffuse( const Vector3f &rhs ) { m_diffuse=rhs; }
	const Vector3f & GetDiffuse() const { return m_diffuse; }

	void SetSpecular( const Vector3f &rhs ) { m_specular=rhs; }
	const Vector3f & GetSpecular() const { return m_specular; }

	void SetTexOffset( const Vector2f &off ) { m_texOff=off; }
	const Vector2f & GetTexOffset() const { return m_texOff; }

	void SetTexScale( const Vector2f &s ) { m_texScale=s; }
	const Vector2f & GetTexScale() const { return m_texScale; }

	void SetTexAngle( float angle ) { m_texAngle=angle; }
	float GetTexAngle() const { return m_texAngle; }

	void SetTransparency( float trans ) { m_alpha=1.0f-trans; }
	float GetTransparency() const { return 1.0f-m_alpha; }

	void SetShininess( float shiny ) { m_shininess = shiny; }
	float GetShininess() const { return m_shininess; }

	void SetSelfIllum( float illum ) { m_illum = illum; }
	float GetSelfIllum() const { return m_illum; }

	void SetTwoSide( bool on ) { m_b2side=on; }
	bool GetTwoSide() const { return m_b2side; }

	bool LoadTexture( const std::string &name );

	/**
	 * Apply material using OpenGL calls. Must be called from a valid
	 * OpenGL display context.
	 */
	void GLApply() const;

	void GLApplyMat() const;
	void GLApplyTex() const;

private:
	std::string	m_sName;		///> material name
	std::string	m_sTexName;		///> texture map filename
	Vector3f m_ambient;
	Vector3f m_diffuse;
	Vector3f m_specular;
	float	 m_alpha;			///> alpha value (opacity)
	float	 m_illum;			///> self illumination
	float	 m_shininess;		///> shininess
	Vector2f m_texOff;			///> texture (u,v) offset
	Vector2f m_texScale;		///> texture (u,v) scale
	float    m_texAngle;		///> texture angle
	mutable Image m_texmap;		///> texture map image
	bool	 m_b2side;			///> two sided material?
};

//-----------------------------------------------------------------------------

inline TMaterial::TMaterial() {
	m_sName	   = "";
	m_sTexName = "";
	m_ambient  = 0.0f;
	m_diffuse  = 1.0f;
	m_specular = 0.0f;
	m_alpha    = 1.0f;
	m_illum    = 0.0f;
	m_shininess= 0.0f;
	m_texOff   = 0.0f;
	m_texScale = 1.0f;
	m_texAngle = 0.0f;
	m_b2side   = false;
}

inline TMaterial::TMaterial(const TMaterial &rhs) {
	*this = rhs;
}

inline TMaterial & TMaterial::operator = (const TMaterial &rhs) {
	m_sName		= rhs.m_sName;
	m_sTexName  = rhs.m_sTexName;
	m_ambient	= rhs.m_ambient;
	m_diffuse	= rhs.m_diffuse;
	m_specular	= rhs.m_specular;
	m_alpha     = rhs.m_alpha;
	m_illum     = rhs.m_illum;
	m_shininess = rhs.m_shininess;
	m_texmap    = rhs.m_texmap;
	m_texOff    = rhs.m_texOff;
	m_texScale  = rhs.m_texScale;
	m_texAngle  = rhs.m_texAngle;
	m_b2side    = rhs.m_b2side;
	return *this;
}

inline void TMaterial::SetName(const std::string &name) {
	m_sName = name;
}

inline const std::string & TMaterial::GetName() const {
	return m_sName;
}

//-----------------------------------------------------------------------------

#endif//__tmaterial_h
