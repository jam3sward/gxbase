#ifndef MATRIX44F_H
#define MATRIX44F_H

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

#include <iostream>
using namespace std;

#include "MathCon.h"
#include "Vector3f.h"
#include "Vector4f.h"

//-----------------------------------------------------------------------------

/**
 * 4x4 single-precision matrix class
 */
MATHSVM_CLASS_PREFIX
class MATHSVM_DLL_CLASS Matrix44f {
public:
	Matrix44f();

	Matrix44f(const Matrix44f &);

	Matrix44f(float M[16]);

	//-------------------------------------------------------------------------

	const Matrix44f & Zero();
	const Matrix44f & Identity();

	const Matrix44f & Invert();			// Invert matrix (can throw)
    const Matrix44f & Transpose();		// Transpose matrix

    Matrix44f Inverted()   const;		// Return inverse (can throw)
    Matrix44f Transposed() const;		// Return transpose of matrix

    float Determinant() const;         // Return determinant

	//-------------------------------------------------------------------------

	const Vector4f & operator [] (int) const;
	Vector4f & operator [] (int);

	//-------------------------------------------------------------------------

	const Matrix44f & operator += ( const Matrix44f & );
	Matrix44f operator + ( const Matrix44f & ) const;

    const Matrix44f & operator -= ( const Matrix44f & );
	Matrix44f operator - ( const Matrix44f & ) const;

	const Matrix44f & operator *= ( const Matrix44f & );
    Matrix44f operator * ( const Matrix44f & ) const;

	//---- Vector Access ------------------------------------------------------

	Vector4f Row(int) const;		// Returns 4-element row    vector
	Vector4f Column(int) const;		// Returns 4-element column vector

    Vector3f Vector(int) const;		// Returns column vector (0..3)

    Vector3f XVector() const { return Vector(0); }    // X axis
    Vector3f YVector() const { return Vector(1); }    // Y axis
    Vector3f ZVector() const { return Vector(2); }    // Z axis
    Vector3f PVector() const { return Vector(3); }    // Position vector

    const Matrix44f & SetVector(int, const Vector3f &); // set column vector

    const Matrix44f & SetXVector (const Vector3f &v) { return SetVector(0,v); }
    const Matrix44f & SetYVector (const Vector3f &v) { return SetVector(1,v); }
    const Matrix44f & SetZVector (const Vector3f &v) { return SetVector(2,v); }
    const Matrix44f & SetPVector (const Vector3f &v) { return SetVector(3,v); }

	//---- Rotation -----------------------------------------------------------

    // Make rotation matrices for simple X,Y,Z axis rotations

    const Matrix44f & MakeRotateX ( float a );
    const Matrix44f & MakeRotateY ( float a );
    const Matrix44f & MakeRotateZ ( float a );

    // Make rotation matrix from three unit direction vectors

    const Matrix44f & MakeRotate  (
   	    const Vector3f &x,
        const Vector3f &y,
        const Vector3f &z
    );

    // Make arbitrary axis rotation matrix (given angle and axis)

    const Matrix44f & MakeRotate ( float, const Vector3f & );

    // Static methods: return various types of rotation matrix

    static Matrix44f XRotationOf ( float a );
    static Matrix44f YRotationOf ( float a );
    static Matrix44f ZRotationOf ( float a );
    static Matrix44f RotationOf  ( float a, const Vector3f &v );

    static Matrix44f RotationOf (
        const Vector3f &x,
        const Vector3f &y,
        const Vector3f &z
	);

    // Apply X,Y,Z, general or arbitrary-axis rotation to current matrix

	const Matrix44f & RotateX ( float a );
	const Matrix44f & RotateY ( float a );
	const Matrix44f & RotateZ ( float a );

	const Matrix44f & Rotate (
		const Vector3f &x,
        const Vector3f &y,
        const Vector3f &z
	);

	const Matrix44f & Rotate ( float a, const Vector3f &v );

    //---- Translation ---------------------------------------------------------

    static Matrix44f   TranslationOf ( const Vector3f & );
    const  Matrix44f & MakeTranslate ( const Vector3f & );
    const  Matrix44f & Translate     ( const Vector3f & );

    static Matrix44f   TranslationOf ( float, float, float );
    const  Matrix44f & MakeTranslate ( float, float, float );
    const  Matrix44f & Translate     ( float, float, float );

    //---- Scaling -------------------------------------------------------------

    static Matrix44f   ScaleOf   ( const Vector3f & );
	const  Matrix44f & MakeScale ( const Vector3f & );
	const  Matrix44f & Scale     ( const Vector3f & );

    static Matrix44f   ScaleOf   ( float, float, float );
    const  Matrix44f & MakeScale ( float, float, float );
    const  Matrix44f & Scale     ( float, float, float );

    //---- Comparison ----------------------------------------------------------

    bool operator == ( const Matrix44f & ) const;

    bool IsEqual    ( const Matrix44f &m, float Tolerance = EPSILON ) const;
    bool IsIdentity ( float Tolerance = EPSILON ) const;

    //---- Stream --------------------------------------------------------------

    friend ostream & operator << (ostream &out, const Matrix44f &o);
	friend istream & operator >> (istream &in, Matrix44f &o);

private:
	Vector4f m[4];	// rows
};

//-----------------------------------------------------------------------------

inline Matrix44f::Matrix44f()
{
	// PERF: 4 x duplicate writes (Vector4f initialises to zero)
	m[0][0] = 1.0;
	m[1][1] = 1.0;
	m[2][2] = 1.0;
	m[3][3] = 1.0;
}

inline Matrix44f::Matrix44f(const Matrix44f &M)
{
	// PERF: 16 x duplicate writes (Vector4f initialises to zero)
	for (int r=0; r<4; r++)
		for (int c=0; c<4; c++)
			m[r][c] = M[r][c];
}

inline Matrix44f::Matrix44f(float M[16])
{
	// PERF: 16 x duplicate writes (Vector4f initialises to zero)
	for (int r=0; r<4; r++)
		for (int c=0; c<4; c++)
			m[r][c] = M[c+4*r];
}

//-------------------------------------------------------------------------

/**
 * Set matrix to zero
 */

inline const Matrix44f & Matrix44f::Zero()
{
	for (int r=0; r<4; r++)
		for (int c=0; c<4; c++)
			m[r][c] = 0.0;
	return *this;
}

/**
 * Set matrix to identity
 */

inline const Matrix44f & Matrix44f::Identity()
{
	// PERF: 4 x duplicate writes
	Zero();
	m[0][0] = 1.0;
	m[1][1] = 1.0;
	m[2][2] = 1.0;
	m[3][3] = 1.0;
	return *this;
}

/**
 * Invert matrix in place (can throw)
 */

inline const Matrix44f & Matrix44f::Invert()
    { return *this = this->Inverted(); }

/**
 * Transpose matrix in place
 */

inline const Matrix44f & Matrix44f::Transpose()
    { return *this = this->Transposed(); }

//-------------------------------------------------------------------------


inline const Vector4f & Matrix44f::operator [] (int i) const
{
	return m[i];
}


inline Vector4f & Matrix44f::operator [] (int i)
{
	return m[i];
}


//---- Addition ----------------------------------------------------------------


inline const Matrix44f &
Matrix44f::operator += ( const Matrix44f &m2 )
{
    return *this = *this + m2;
}


inline Matrix44f
Matrix44f::operator + ( const Matrix44f &m2 ) const
{
    Matrix44f R;

#if defined(_MSC_VER)
	// Normal loops optimise nicely on Visual C++
    for (int r=0; r<4; r++)
        for (int c=0; c<4; c++)
            R[r][c] = m[r][c] + m2[r][c];
#else
	// Unrolled loops are faster on Borland C++ Builder
	// because it doesn't seem to optimise them itself
    #define RC(i,j) R[i][j]=m[i][j]+m2[i][j]
        RC(0,0); RC(0,1); RC(0,2); RC(0,3);
        RC(1,0); RC(1,1); RC(1,2); RC(1,3);
        RC(2,0); RC(2,1); RC(2,2); RC(2,3);
        RC(3,0); RC(3,1); RC(3,2); RC(3,3);
    #undef RC
#endif

    return R;
}


//---- Subtraction -------------------------------------------------------------


inline const Matrix44f &
Matrix44f::operator -= ( const Matrix44f &m2 )
{
    return *this = *this - m2;
}


inline Matrix44f
Matrix44f::operator - ( const Matrix44f &m2 ) const
{
    Matrix44f R;

#if defined(_MSC_VER)
	// Normal loops optimise nicely on Visual C++
    for (int r=0; r<4; r++)
        for (int c=0; c<4; c++)
            R[r][c] = m[r][c] - m2[r][c];
#else
	// Unrolled loops are faster on Borland C++ Builder (and others?)
    #define RC(i,j) R[i][j]=m[i][j]-m2[i][j]
        RC(0,0); RC(0,1); RC(0,2); RC(0,3);
        RC(1,0); RC(1,1); RC(1,2); RC(1,3);
        RC(2,0); RC(2,1); RC(2,2); RC(2,3);
        RC(3,0); RC(3,1); RC(3,2); RC(3,3);
    #undef RC
#endif

    return R;
}


//---- Multiplication ----------------------------------------------------------


inline
const Matrix44f &
Matrix44f::operator *= ( const Matrix44f &m2 )
{
    return *this = *this * m2;
}


inline
Matrix44f Matrix44f::operator * ( const Matrix44f &m2 ) const
{
    Matrix44f R;   // temporary to receive result

#if defined(_MSC_VER)
	// Normal loops optimise nicely on Visual C++
    for (int i=0; i<4; i++)
        for (int j=0; j<4; j++)
            R[i][j] = m2[i][0]*m[0][j] + m2[i][1]*m[1][j] +
                      m2[i][2]*m[2][j] + m2[i][3]*m[3][j];
#else
	// Unrolled loops are faster on Borland C++ Builder (and others?)
    #define RC(i,j) R[i][j]=\
       m2[i][0]*m[0][j] + m2[i][1]*m[1][j] + m2[i][2]*m[2][j] + m2[i][3]*m[3][j]
        RC(0,0); RC(0,1); RC(0,2); RC(0,3);
        RC(1,0); RC(1,1); RC(1,2); RC(1,3);
        RC(2,0); RC(2,1); RC(2,2); RC(2,3);
        RC(3,0); RC(3,1); RC(3,2); RC(3,3);
    #undef RC
#endif

    return R;
}


//------------------------------------------------------------------------------


/**
 * Return matrix determinant
 */

inline
float Matrix44f::Determinant() const
{
  return
    (m[2][2]*m[3][3]-m[3][2]*m[2][3]) * (m[0][0]*m[1][1]-m[1][0]*m[0][1]) +
    (m[2][0]*m[3][3]-m[3][0]*m[2][3]) * (m[0][1]*m[1][2]-m[1][1]*m[0][2]) +
    (m[2][0]*m[3][1]-m[3][0]*m[2][1]) * (m[0][2]*m[1][3]-m[1][2]*m[0][3]) +
    (m[2][1]*m[3][2]-m[3][1]*m[2][2]) * (m[0][0]*m[1][3]-m[1][0]*m[0][3]) +
    (m[2][0]*m[3][2]-m[3][0]*m[2][2]) * (m[1][1]*m[0][3]-m[0][1]*m[1][3]) +
    (m[2][1]*m[3][3]-m[3][1]*m[2][3]) * (m[1][0]*m[0][2]-m[0][0]*m[1][2]);
}

//---- Vector Access -----------------------------------------------------------

/**
 * Return a 4-element row vector
 */

inline
Vector4f Matrix44f::Row(int i) const
{
	return m[i];
}

/**
 * Return a 4-element column vector
 */

inline
Vector4f Matrix44f::Column(int i) const
{
	return Vector4f( m[0][i], m[1][i], m[2][i], m[3][i] );
}


/**
 * Return a 3-element column vector (eg. X,Y,Z direction cosines or
 * the position vector)
 */

inline Vector3f Matrix44f::Vector(int i) const
{
    return Vector3f( m[0][i], m[1][i], m[2][i] );
}


/**
 * Set the specified column vector
 */

inline const Matrix44f & Matrix44f::SetVector(int i, const Vector3f &v)
{
    m[0][i] = v.x;
    m[1][i] = v.y;
    m[2][i] = v.z;
    return *this;
}


//---- Rotation ---------------------------------------------------------------


inline Matrix44f Matrix44f::XRotationOf ( float a )
    { return Matrix44f().MakeRotateX(a); }


inline Matrix44f Matrix44f::YRotationOf ( float a )
    { return Matrix44f().MakeRotateY(a); }


inline Matrix44f Matrix44f::ZRotationOf ( float a )
    { return Matrix44f().MakeRotateZ(a); }


inline Matrix44f Matrix44f::RotationOf ( float a, const Vector3f &v )
    { return Matrix44f().MakeRotate(a,v); }


inline Matrix44f Matrix44f::RotationOf (
    const Vector3f &x,
    const Vector3f &y,
    const Vector3f &z
) {
    return Matrix44f().MakeRotate(x,y,z);
}


// Apply X,Y,Z, general or arbitrary-axis rotation to current matrix


inline const Matrix44f &
Matrix44f::RotateX ( float a )
    { return *this *= XRotationOf(a); }


inline const Matrix44f &
Matrix44f::RotateY  ( float a )
    { return *this *= YRotationOf(a); }


inline const Matrix44f &
Matrix44f::RotateZ  ( float a )
    { return *this *= ZRotationOf(a); }


inline const Matrix44f &
Matrix44f::Rotate (
    const Vector3f &x,
    const Vector3f &y,
    const Vector3f &z
) {
    return *this *= RotationOf(x,y,z);
}


inline const Matrix44f &
Matrix44f::Rotate ( float a, const Vector3f &v ) {
    return *this *= RotationOf(a,v);
}


//---- Translation -------------------------------------------------------------


inline  Matrix44f
Matrix44f::TranslationOf ( const Vector3f &v )
    { return Matrix44f().MakeTranslate(v); }


inline  Matrix44f
Matrix44f::TranslationOf ( float x, float y, float z )
    { return TranslationOf( Vector3f(x,y,z) ); }


inline const Matrix44f &
Matrix44f::MakeTranslate ( float x, float y, float z )
    { return MakeTranslate( Vector3f(x,y,z) ); }


inline const Matrix44f &
Matrix44f::Translate ( const Vector3f &v )
    { return *this *= TranslationOf(v); }


inline const Matrix44f &
Matrix44f::Translate ( float x, float y, float z )
    { return Translate( Vector3f(x,y,z) ); }


//---- Scaling -----------------------------------------------------------------


inline Matrix44f
Matrix44f::ScaleOf ( const Vector3f &v ) {
    return Matrix44f().MakeScale(v);
}


inline const Matrix44f &
Matrix44f::Scale ( const Vector3f &v ) {
    return *this *= ScaleOf(v);
}


inline Matrix44f
Matrix44f::ScaleOf ( float x, float y, float z )
    { return ScaleOf( Vector3f(x,y,z) ); }


inline const Matrix44f &
Matrix44f::MakeScale ( float x, float y, float z )
    { return MakeScale( Vector3f(x,y,z) ); }


inline const Matrix44f &
Matrix44f::Scale ( float x, float y, float z )
    { return Scale( Vector3f(x,y,z) ); }


//---- Comparison -------------------------------------------------------------


inline bool Matrix44f::IsIdentity ( float tol ) const
    { return IsEqual( Matrix44f().Identity(), tol); }


//-----------------------------------------------------------------------------

#endif//MATRIX44F_H
