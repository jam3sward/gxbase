#ifndef VECTOR3F_H
#define VECTOR3F_H

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

#include <math.h>
#include "MathCon.h"
#include <string.h>	// for memcmp()
#include <stdlib.h>	// for rand()

#ifndef V3_EPSILON
#define V3_EPSILON 1.0E-8
#endif

#if defined(_IOSTREAM_) || defined(__STD_IOSTREAM__)
#define VECTOR3F_IOSTREAM
#endif

//-----------------------------------------------------------------------------

/**
 * Single precision, 3D vector class.
 */

MATHSVM_CLASS_PREFIX
class MATHSVM_DLL_CLASS Vector3f {
public:
    float x;
    float y;
    float z;

public:
	//-------------------------------------------------------------------------

	/**
	 * Default constructor. Initialises vector to zero.
	 */
    Vector3f();

	/**
	 * Construct from float. Assigns float value to all elements of vector.
	 */
    Vector3f(float);

	/**
	 * Copy constructor.
	 */
    Vector3f(const Vector3f & V);

	/**
	 * Construct from three floats. Assigns the three parameters to the
	 * X,Y,Z elements of the vector.
	 */
	Vector3f(float, float, float);

	/**
	 * Construct from array of floats. The first three values of a 1D array
	 * of floats are assigned to the X,Y,Z elements of the vector.
	 */
	Vector3f(const float *);

	//-------------------------------------------------------------------------

	/**
	 * Assignment operator. Assigns RHS to LHS and returns LHS.
	 */
	const Vector3f & operator = ( const Vector3f & );

	//-------------------------------------------------------------------------

	/**
	 * Unary negation. Returns a negated version of a vector.
	 */
	Vector3f operator -() const;

	/**
	 * Subtraction operator. Allows vector subtraction.
	 */
	Vector3f operator - ( const Vector3f & ) const;

	/**
	 * Addition. Allows vector addition.
	 */
	Vector3f operator + ( const Vector3f & ) const;

	/**
	 * Dot product. Returns the dot product of two vectors.
	 */
	float   operator * ( const Vector3f & ) const;

	/**
	 * Cross product. Returns the vector cross product of two vectors.
	 */
	Vector3f operator ^ ( const Vector3f & ) const;

	/**
	 * Multiply by float. Multiplies (scales) a vector by a float.
	 */
    Vector3f operator * ( float ) const;

	/**
	 * Divide by float. Divides a vector by a float. An attempt to divide
	 * by zero will usually result in an exception being thrown.
	 */
    Vector3f operator / ( float ) const;

	/**
	 * Increment operator. The operation L+=R is equivalent to the operation
	 * L=L+R. It is usually faster also, since a temporary is not returned.
	 */
    const Vector3f & operator += ( const Vector3f & );

	/**
	 * Decrement operator. The operation L-=R is equivalent to the operation
	 * L=L-R. It is usually faster also, since a temporary is not returned.
	 */
    const Vector3f & operator -= ( const Vector3f & );

	/**
	 * Multiply by float. The operation L*=R is equivalent to the operation
	 * L=L*R. It is usually faster also, since a temporary is not returned.
	 */
    const Vector3f & operator *= ( float );


	/**
	 * Divide by float. The operation L/=R is equivalent to the operation
	 * L=L/R. It is usually faster also, since a temporary is not returned.
	 */
    const Vector3f & operator /= ( float );

	//-------------------------------------------------------------------------

	/**
	 * Exact equality. Returns true if both vectors are exactly equal. It is
	 * not good practice to use this operator. Use IsEqual() instead.
	 */
	bool operator == (const Vector3f &) const;

	/**
	 * Inequality operator. Returns true if the vectors are not exactly equal.
	 * It is not good practice to use this operator. Use !IsEqual() instead.
	 */
	bool operator != (const Vector3f &) const;

	//-------------------------------------------------------------------------

	/**
	 * Vector addition. The code A.Add(L,R) is equivalent to A=L+R, but faster
	 * since a temporary is not returned.
	 */
	const Vector3f & Add( const Vector3f &L, const Vector3f &R );

	/**
	 * Vector subtraction. The code A.Subtract(L,R) is equivalent to A=L-R, but
	 * faster since a temporary is not returned.
	 */
	const Vector3f & Subtract( const Vector3f &L, const Vector3f &R );

	/**
	 * Multiply by float. The code A.Multiply(L,R) is equivalent to A=L*R, but
	 * faster since a temporary is not returned.
	 */
	const Vector3f & Multiply( const Vector3f &L, float R );

	/**
	 * Divide by float. The code A.Divide(L,R) is equivalent to A=L/R, but
	 * faster since a temporary is not returned.
	 */
	const Vector3f & Divide( const Vector3f &L, float R );

	/**
	 * Equivalent to Subtract(L,R).
	 */
	const Vector3f & Sub( const Vector3f &L, const Vector3f &R );

	/**
	 * Equivalent to Multiply(L,R).
	 */
	const Vector3f & Mul( const Vector3f &L, float R );

	/**
	 * Equivalent to Divide(L,R).
	 */
	const Vector3f & Div( const Vector3f &L, float R );

	//-------------------------------------------------------------------------

	/**
	 * Dot product. Returns the dot product of two vectors.
	 */
	float Dot (const Vector3f &V) const;

	/**
	 * Cross product. A.Cross(B) returns the cross product of A and B.
	 */
	Vector3f Cross (const Vector3f &V) const;

	/**
	 * Cross product. A.Cross(L,R) replaces A with the cross product of L and
	 * R. The result is also returned. This method is preferred over A.Cross(B)
	 * for performance reasons (no temporary is involved).
	 */
	const Vector3f & Cross (const Vector3f &L, const Vector3f &R);

	//-------------------------------------------------------------------------

	/**
	 * Distance between two vectors.
	 */
    float Distance (const Vector3f &V) const;

	/**
	 * Squared distance between two vectors. When comparing distances, it is
	 * generally faster to compare the squared distance to avoid the square
	 * root calculation.
	 */
    float DistanceSqr (const Vector3f &V) const;

	/**
	 * Length of vector. This returns the length (magnitude) of the vector.
	 */
	float Length () const;

	/**
	 * Squared length of vector. This returns the squared length of the
	 * vector (squared magnitude). When comparing length, it is generally
	 * faster to compare the squared length to avoid the square root
	 * calculation.
	 */
	float LengthSqr () const;

	//-------------------------------------------------------------------------

	/**
	 * Randomise a vector. This randomises a vector (in-place) with random
	 * components in the range -scaleFac to +scaleFac on each axis. The results
	 * lie within a cube with linear distribution on each axis.
	 */
	const Vector3f & Randomise( float scaleFac );

	//-------------------------------------------------------------------------

	/**
	 * Zero a vector. Replaces a vector with all zeros.
	 */
	const Vector3f & Zero();

	//-------------------------------------------------------------------------

	/**
	 * Normalise a vector in place. If the vector is zero magnitude, then
	 * the result is a zero vector.
	 */
	const Vector3f & Normalise();

    /**
     * Normalise a vector. The operation L.Normalise(R) replaces L with
	 * the normalised (unit length) version of R. It is equivalent to
	 * L=R.Normalise() but with less overhead, since a temporary object
	 * is not returned.
     */
	const Vector3f & Normalise( const Vector3f &V );

	//-------------------------------------------------------------------------

	/**
	 * Constant array operator. This operator is used to read an indexed
	 * element of a vector. Valid indices are (0,1,2) corresponding to (X,Y,Z).
	 * An out of range index will always return Z.
	 */
	float operator [] (int) const;

	/**
	 * Array operator. This operator is used for assignment to an indexed
	 * elment of a vector. Valid indices are (0,1,2) corresponding to (X,Y,Z).
	 * An out of range index will always return a reference to Z.
	 */
	float & operator [] (int);

	//-------------------------------------------------------------------------

	/**
	 * Vector is near zero. Returns true if a vector is very close to zero.
	 * The default tolerance can be overidden.
	 */
    bool IsZero  (float Tolerance = V3_EPSILON) const;
	
	/**
	 * Vector is near unit-length. Returns true if vector is very close to
	 * unit length. The default tolerance can be overidden.
	 */
    bool IsUnit  (float Tolerance = V3_EPSILON) const;
    
	/**
	 * Vector is valid. Returns true if the vector is valid, false if invalid.
	 * This is normally used in conjunction with the Invalidate() method.
	 */
	bool IsValid () const;

	/**
	 * Invalidate a vector. This method marks a vector as 'invalid', so that
	 * the IsValid() method will fail (return false) on this vector. Setting
	 * the same vector to any valid value will clear this state, so that the
	 * IsValid() method will then succeed (return true) on the vector.
	 * These methods are typically used to denote that certain vectors do not
	 * contain valid data (for example, a bad position value from a tracking
	 * device).
	 * NOTE: after invalidating a vector, it does not contain a valid value.
	 * You should not use it as input to any calculation, since the result
	 * can be unpredictable. On most platforms, the result will be another
	 * invalid vector, but you should not rely on this behaviour.
	 */
	void Invalidate ();

	//-------------------------------------------------------------------------

#ifdef  VECTOR3D_H
	// Vector3d declared before us - provide conversions

	/**
	 * Construct from Vector3d.
	 */
	Vector3f(const Vector3d &V) :x(V.x),y(V.y),z(V.z) {}

	/**
	 * Convert to Vector3d.
	 */
	operator Vector3d() const { return Vector3d(x,y,z); }
#endif//VECTOR3D_H

#ifdef  VECTOR3F_IOSTREAM
	// iostream is included - provide streaming support

	/**
	 * Output stream operator. This operator is only provided when the iostream
	 * header is included prior to this header. This allows the vector classes
	 * to be used on systems where iostream is not available.
	 */
	friend ostream & operator << (ostream &, const Vector3f &);

	/**
	 * Input stream operator. This operator is only provided when the iostream
	 * header is included prior to this header. This allows the vector classes
	 * to be used on systems where iostream is not available.
	 */
	friend istream & operator >> (istream &, Vector3f &);
#endif//VECTOR3F_IOSTREAM
};

//-----------------------------------------------------------------------------

inline Vector3f::Vector3f()
{
    x=0.0;
    y=0.0;
    z=0.0;
}

//-----------------------------------------------------------------------------

inline Vector3f::Vector3f(float d)
{
    x=d;
    y=d;
    z=d;
}

//-----------------------------------------------------------------------------

inline Vector3f::Vector3f(const Vector3f & V)
{
	*this=V;
}

//-----------------------------------------------------------------------------

inline Vector3f::Vector3f(float X, float Y, float Z)
{
    x=X;
    y=Y;
    z=Z;
}

//-----------------------------------------------------------------------------

inline Vector3f::Vector3f(const float *v)
{
	x=v[0];
	y=v[1];
	z=v[2];
}

//-----------------------------------------------------------------------------

inline const Vector3f & Vector3f::operator = ( const Vector3f &V )
{
	x=V.x;
	y=V.y;
	z=V.z;
	return *this;
}

//-----------------------------------------------------------------------------

inline Vector3f Vector3f::operator -() const
{
	return Vector3f(-x, -y, -z);
}

inline Vector3f Vector3f::operator - (const Vector3f &V) const
{
	return Vector3f( x-V.x, y-V.y, z-V.z );
}

inline Vector3f Vector3f::operator + (const Vector3f &V) const
{
	return Vector3f( x+V.x, y+V.y, z+V.z );
}

inline float Vector3f::operator * (const Vector3f &V) const
{
	return Dot(V);
}

inline Vector3f Vector3f::operator ^ (const Vector3f &V) const
{
	return Cross(V);
}

inline Vector3f Vector3f::operator * ( float v ) const
{
	return Vector3f( x*v, y*v, z*v );
}

inline Vector3f Vector3f::operator / ( float v ) const
{
	return Vector3f( x/v, y/v, z/v );
}

inline const Vector3f & Vector3f::operator += ( const Vector3f &V )
{
	x+=V.x;
	y+=V.y;
	z+=V.z;
	return *this;
}

inline const Vector3f & Vector3f::operator -= ( const Vector3f &V )
{
	x-=V.x;
	y-=V.y;
	z-=V.z;
	return *this;
}

inline const Vector3f & Vector3f::operator *= ( float v )
{
	x*=v;
	y*=v;
	z*=v;
	return *this;
}

inline const Vector3f & Vector3f::operator /= ( float v )
{
	x/=v;
	y/=v;
	z/=v;
	return *this;
}

//-----------------------------------------------------------------------------

inline bool Vector3f::operator == (const Vector3f &V) const
{
	return (x==V.x) && (y==V.y) && (z==V.z);
}

//-----------------------------------------------------------------------------

inline bool Vector3f::operator != (const Vector3f &V) const
{
	return !(*this==V);
}

//-----------------------------------------------------------------------------

inline const Vector3f & Vector3f::Add( const Vector3f &L, const Vector3f &R )
{
	x=L.x+R.x;
	y=L.y+R.y;
	z=L.z+R.z;
	return *this;	
}

//-----------------------------------------------------------------------------

inline const Vector3f & Vector3f::Subtract(
	const Vector3f &L,
	const Vector3f &R
) {
	x=L.x-R.x;
	y=L.y-R.y;
	z=L.z-R.z;
	return *this;
}

//-----------------------------------------------------------------------------

inline const Vector3f & Vector3f::Multiply( const Vector3f &L, float R )
{
	x=L.x*R;
	y=L.y*R;
	z=L.z*R;
	return *this;
}

//-----------------------------------------------------------------------------

inline const Vector3f & Vector3f::Divide( const Vector3f &L, float R )
{
	x=L.x/R;
	y=L.y/R;
	z=L.z/R;
	return *this;
}

//-----------------------------------------------------------------------------

inline const Vector3f & Vector3f::Sub( const Vector3f &L, const Vector3f &R )
	{ return Subtract(L,R); }

//-----------------------------------------------------------------------------

inline const Vector3f & Vector3f::Mul( const Vector3f &L, float R )
	{ return Multiply(L,R); }

//-----------------------------------------------------------------------------

inline const Vector3f & Vector3f::Div( const Vector3f &L, float R )
	{ return Divide(L,R); }

//---- Dot Product ------------------------------------------------------------

inline float Vector3f::Dot (const Vector3f &V) const
{
	return ( x*V.x + y*V.y + z*V.z );
}

//---- Cross Product -----------------------------------------------------------

inline Vector3f Vector3f::Cross (const Vector3f &V) const
{
	return Vector3f( y*V.z - z*V.y, z*V.x - x*V.z, x*V.y - y*V.x );
}

inline const Vector3f & Vector3f::Cross (const Vector3f &L, const Vector3f &R) {
	x = L.y*R.z - L.z*R.y;
    y = L.z*R.x - L.x*R.z;
    z = L.x*R.y - L.y*R.x;
	return *this;
}

//-----------------------------------------------------------------------------

inline float Vector3f::Distance  (const Vector3f &V) const
{
	return (float)sqrt( DistanceSqr(V) );
}

inline float Vector3f::DistanceSqr (const Vector3f &V) const
{
	return (*this-V).LengthSqr();
}

//-----------------------------------------------------------------------------

inline float Vector3f::Length  () const
{
	return (float)sqrt( LengthSqr() );
}

inline float Vector3f::LengthSqr () const
{
	return (x*x + y*y + z*z);
}

//-----------------------------------------------------------------------------

inline const Vector3f & Vector3f::Randomise( float scaleFac )
{
	float k = scaleFac * 2.0f*(float)RAND_MAX;
	x = k*(float)rand() - scaleFac;
	y = k*(float)rand() - scaleFac;
	z = k*(float)rand() - scaleFac;
	return *this;
}

//-----------------------------------------------------------------------------

inline const Vector3f & Vector3f::Zero()
{
	x=0.0;
	y=0.0;
	z=0.0;
	return *this;
}

//-----------------------------------------------------------------------------

inline const Vector3f & Vector3f::Normalise()
{
	return Normalise(*this);
}

inline const Vector3f & Vector3f::Normalise( const Vector3f &V )
{
	float r = V.Length();
	if (r != 0.0f) {
		x = V.x / r;
		y = V.y / r;
		z = V.z / r;
	} else
		Zero();
	return *this;
}

//-----------------------------------------------------------------------------

inline float Vector3f::operator [] (int i) const {
	return (i==0)?x:(i==1)?y:z;
}

inline float & Vector3f::operator [] (int i) {
	return (i==0)?x:(i==1)?y:z;
}

//-----------------------------------------------------------------------------

inline bool Vector3f::IsZero  (float Tolerance) const
{
    return (LengthSqr() <= Tolerance*Tolerance);
}

inline bool Vector3f::IsUnit (float Tolerance) const
{
    return fabs(Length() - 1.0) <= Tolerance;
}

inline bool Vector3f::IsValid () const
{
    // Testing for equality with QNAN generates exceptions on Borland C++, so
    // we use memcmp to do a bitwise comparison on first element only
	Vector3f bad;
	bad.Invalidate();
    return (memcmp(&x, &bad.x, sizeof(x)) != 0);
}

//-----------------------------------------------------------------------------

#ifdef  VECTOR3F_IOSTREAM
inline ostream & operator << (ostream &o, const Vector3f &v) {
	o<<v.x<<','<<v.y<<','<<v.z;
	return o;
}

inline istream & operator >> (istream &i, Vector3f &v) {
	char ch;
	i>>v.x>>ch>>v.y>>ch>>v.z;
	return i;
}
#endif//VECTOR3F_IOSTREAM

//-----------------------------------------------------------------------------

inline Vector3f operator * (float d, const Vector3f &v) { return v*d; }

//-----------------------------------------------------------------------------

#endif //VECTOR3F_H
