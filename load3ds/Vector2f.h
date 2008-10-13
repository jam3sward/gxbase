#ifndef VECTOR2F_H
#define VECTOR2F_H

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
#include <string.h>
#include <stdlib.h>	// rand() - ANSI compatible

#ifndef V2_EPSILON
#define V2_EPSILON 1.0E-8
#endif

#if defined(_IOSTREAM_) || defined(__STD_IOSTREAM__)
#define VECTOR2F_IOSTREAM
#endif

//-----------------------------------------------------------------------------

/**
 * Double precision, 2F vector class.
 */
MATHSVM_CLASS_PREFIX
class MATHSVM_DLL_CLASS Vector2f {
public:
    float x;
    float y;

public:
	//-------------------------------------------------------------------------

	/**
	 * Default constructor. Initialises vector to zero.
	 */
    Vector2f();

	/**
	 * Construct from float. Assigns float value to all elements of vector.
	 */
    Vector2f(float);

	/**
	 * Copy constructor.
	 */
    Vector2f(const Vector2f & V);

	/**
	 * Construct from two floats. Assigns the two parameters to the
	 * X,Y elements of the vector.
	 */
	Vector2f(float, float);

	/**
	 * Construct from array of floats. The first two values of a 1D array
	 * of floats are assigned to the X,Y elements of the vector.
	 */
	Vector2f(const float *);

	//-------------------------------------------------------------------------

	/**
	 * Assignment operator. Assigns RHS to LHS and returns LHS.
	 */
	const Vector2f & operator = ( const Vector2f & );

	//-------------------------------------------------------------------------

	/**
	 * Unary negation. Returns a negated version of a vector.
	 */
	Vector2f operator -() const;

	/**
	 * Subtraction operator. Allows vector subtraction.
	 */
	Vector2f operator - ( const Vector2f & ) const;

	/**
	 * Addition. Allows vector addition.
	 */
	Vector2f operator + ( const Vector2f & ) const;

	/**
	 * Multiply by float. Multiplies (scales) a vector by a float.
	 */
    Vector2f operator * ( float ) const;

	/**
	 * Divide by float. Divides a vector by a float. An attempt to divide
	 * by zero will usually result in an exception being thrown.
	 */
    Vector2f operator / ( float ) const;

	/**
	 * Increment operator. The operation L+=R is equivalent to the operation
	 * L=L+R. It is usually faster also, since a temporary is not returned.
	 */
    const Vector2f & operator += ( const Vector2f & );

	/**
	 * Decrement operator. The operation L-=R is equivalent to the operation
	 * L=L-R. It is usually faster also, since a temporary is not returned.
	 */
    const Vector2f & operator -= ( const Vector2f & );

	/**
	 * Multiply by float. The operation L*=R is equivalent to the operation
	 * L=L*R. It is usually faster also, since a temporary is not returned.
	 */
    const Vector2f & operator *= ( float );

	/**
	 * Divide by float. The operation L/=R is equivalent to the operation
	 * L=L/R. It is usually faster also, since a temporary is not returned.
	 */
    const Vector2f & operator /= ( float );

	//-------------------------------------------------------------------------

	/**
	 * Exact equality. Returns true if both vectors are exactly equal. It is
	 * not good practice to use this operator. Use IsEqual() instead.
	 */
	bool operator == (const Vector2f &) const;

	/**
	 * Inequality operator. Returns true if the vectors are not exactly equal.
	 * It is not good practice to use this operator. Use !IsEqual() instead.
	 */
	bool operator != (const Vector2f &) const;

	//-------------------------------------------------------------------------

	/**
	 * Vector addition. The code A.Add(L,R) is equivalent to A=L+R, but faster
	 * since a temporary is not returned.
	 */
	const Vector2f & Add( const Vector2f &L, const Vector2f &R );

	/**
	 * Vector subtraction. The code A.Subtract(L,R) is equivalent to A=L-R, but
	 * faster since a temporary is not returned.
	 */
	const Vector2f & Subtract( const Vector2f &L, const Vector2f &R );

	/**
	 * Multiply by float. The code A.Multiply(L,R) is equivalent to A=L*R, but
	 * faster since a temporary is not returned.
	 */
	const Vector2f & Multiply( const Vector2f &L, float R );

	/**
	 * Divide by float. The code A.Divide(L,R) is equivalent to A=L/R, but
	 * faster since a temporary is not returned.
	 */
	const Vector2f & Divide( const Vector2f &L, float R );

	/**
	 * Equivalent to Subtract(L,R).
	 */
	const Vector2f & Sub( const Vector2f &L, const Vector2f &R );

	/**
	 * Equivalent to Multiply(L,R).
	 */
	const Vector2f & Mul( const Vector2f &L, float R );

	/**
	 * Equivalent to Divide(L,R).
	 */
	const Vector2f & Div( const Vector2f &L, float R );

	//-------------------------------------------------------------------------

	/**
	 * Distance between two vectors.
	 */
    float Distance (const Vector2f &V) const;

	/**
	 * Squared distance between two vectors. When comparing distances, it is
	 * generally faster to compare the squared distance to avoid the square
	 * root calculation.
	 */
    float DistanceSqr (const Vector2f &V) const;

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
	const Vector2f & Randomise( float scaleFac );

	//-------------------------------------------------------------------------

	/**
	 * Zero a vector. Replaces a vector with all zeros.
	 */
	const Vector2f & Zero();

	//-------------------------------------------------------------------------

	/**
	 * Normalised vector. Returns a normalised (unit length) version of a
	 * vector, without modifying the original vector. If the vector is zero
	 * magnitude, then a zero vector is returned.
	 */
	Vector2f Normalise() const;

    /**
     * Normalise a vector. The operation L.Normalise(R) replaces L with
	 * the normalised (unit length) version of R. It is equivalent to
	 * L=R.Normalise() but with less overhead, since a temporary object
	 * is not returned.
     */
	const Vector2f & Normalise( const Vector2f &V );

	//-------------------------------------------------------------------------

	/**
	 * Constant array operator. This operator is used to read an indexed
	 * element of a vector. Valid indices are (0,1) corresponding to (X,Y).
	 * An out of range index will always return Y.
	 */
	float operator [] (int) const;

	/**
	 * Array operator. This operator is used for assignment to an indexed
	 * elment of a vector. Valid indices are (0,1) corresponding to (X,Y).
	 * An out of range index will always return a reference to Y.
	 */
	float & operator [] (int);

	//-------------------------------------------------------------------------

	/**
	 * Vector is near zero. Returns true if a vector is very close to zero.
	 * The default tolerance can be overidden.
	 */
    bool IsZero  (float Tolerance = V2_EPSILON) const;
	
	/**
	 * Vector is near unit-length. Returns true if vector is very close to
	 * unit length. The default tolerance can be overidden.
	 */
    bool IsUnit  (float Tolerance = V2_EPSILON) const;
    
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

#ifdef  VECTOR2D_H
	// Vector2d declared before us - provide conversions

	/**
	 * Construct from Vector2d.
	 */
	Vector2f(const Vector2d &V) :x(V.x),y(V.y) {}

	/**
	 * Convert to Vector2f.
	 */
	operator Vector2d() const { return Vector2d(x,y); }
#endif//VECTOR2D_H

#ifdef  VECTOR2F_IOSTREAM
	// iostream is included - provide streaming support

	/**
	 * Output stream operator. This operator is only provided when the iostream
	 * header is included prior to this header. This allows the vector classes
	 * to be used on systems where iostream is not available.
	 */
	friend ostream & operator << (ostream &, const Vector2f &);

	/**
	 * Input stream operator. This operator is only provided when the iostream
	 * header is included prior to this header. This allows the vector classes
	 * to be used on systems where iostream is not available.
	 */
	friend istream & operator >> (istream &, Vector2f &);
#endif//VECTOR2F_IOSTREAM
};

//-----------------------------------------------------------------------------

inline Vector2f::Vector2f()
{
    x=0.0;
    y=0.0;
}

//-----------------------------------------------------------------------------

inline Vector2f::Vector2f(float d)
{
    x=d;
    y=d;
}

//-----------------------------------------------------------------------------

inline Vector2f::Vector2f(const Vector2f & V)
{
	*this=V;
}

//-----------------------------------------------------------------------------

inline Vector2f::Vector2f(float X, float Y)
{
    x=X;
    y=Y;
}

//-----------------------------------------------------------------------------

inline Vector2f::Vector2f(const float *v)
{
	x=v[0];
	y=v[1];
}

//-----------------------------------------------------------------------------

inline const Vector2f & Vector2f::operator = ( const Vector2f &V )
{
	x=V.x;
	y=V.y;
	return *this;
}

//-----------------------------------------------------------------------------

inline Vector2f Vector2f::operator -() const
{
	return Vector2f(-x, -y);
}

inline Vector2f Vector2f::operator - (const Vector2f &V) const
{
	return Vector2f( x-V.x, y-V.y );
}

inline Vector2f Vector2f::operator + (const Vector2f &V) const
{
	return Vector2f( x+V.x, y+V.y );
}

inline Vector2f Vector2f::operator * ( float v ) const
{
	return Vector2f( x*v, y*v );
}

inline Vector2f Vector2f::operator / ( float v ) const
{
	return Vector2f( x/v, y/v );
}

inline const Vector2f & Vector2f::operator += ( const Vector2f &V )
{
	x+=V.x;
	y+=V.y;
	return *this;
}

inline const Vector2f & Vector2f::operator -= ( const Vector2f &V )
{
	x-=V.x;
	y-=V.y;
	return *this;
}

inline const Vector2f & Vector2f::operator *= ( float v )
{
	x*=v;
	y*=v;
	return *this;
}

inline const Vector2f & Vector2f::operator /= ( float v )
{
	x/=v;
	y/=v;
	return *this;
}

//-----------------------------------------------------------------------------

inline bool Vector2f::operator == (const Vector2f &V) const
{
	return (x==V.x) && (y==V.y);
}

//-----------------------------------------------------------------------------

inline bool Vector2f::operator != (const Vector2f &V) const
{
	return !(*this==V);
}

//-----------------------------------------------------------------------------

inline const Vector2f & Vector2f::Add( const Vector2f &L, const Vector2f &R )
{
	x=L.x+R.x;
	y=L.y+R.y;
	return *this;	
}

//-----------------------------------------------------------------------------

inline const Vector2f & Vector2f::Subtract(
	const Vector2f &L,
	const Vector2f &R
) {
	x=L.x-R.x;
	y=L.y-R.y;
	return *this;
}

//-----------------------------------------------------------------------------

inline const Vector2f & Vector2f::Multiply( const Vector2f &L, float R )
{
	x=L.x*R;
	y=L.y*R;
	return *this;
}

//-----------------------------------------------------------------------------

inline const Vector2f & Vector2f::Divide( const Vector2f &L, float R )
{
	x=L.x/R;
	y=L.y/R;
	return *this;
}

//-----------------------------------------------------------------------------

inline const Vector2f & Vector2f::Sub( const Vector2f &L, const Vector2f &R )
	{ return Subtract(L,R); }

//-----------------------------------------------------------------------------

inline const Vector2f & Vector2f::Mul( const Vector2f &L, float R )
	{ return Multiply(L,R); }

//-----------------------------------------------------------------------------

inline const Vector2f & Vector2f::Div( const Vector2f &L, float R )
	{ return Divide(L,R); }

//-----------------------------------------------------------------------------

inline float Vector2f::Distance  (const Vector2f &V) const
{
	return (float)sqrt( DistanceSqr(V) );
}

inline float Vector2f::DistanceSqr (const Vector2f &V) const
{
	return (*this-V).LengthSqr();
}

//-----------------------------------------------------------------------------

inline float Vector2f::Length  () const
{
	return (float)sqrt( LengthSqr() );
}

inline float Vector2f::LengthSqr () const
{
	return (x*x + y*y);
}

//-----------------------------------------------------------------------------

inline const Vector2f & Vector2f::Randomise( float scaleFac )
{
	float k = scaleFac * 2.0f*(float)RAND_MAX;
	x = k*(float)rand() - scaleFac;
	y = k*(float)rand() - scaleFac;
	return *this;
}

//-----------------------------------------------------------------------------

inline const Vector2f & Vector2f::Zero()
{
	x=0.0;
	y=0.0;
	return *this;
}

//-----------------------------------------------------------------------------

inline Vector2f Vector2f::Normalise() const
{
	return Vector2f().Normalise(*this);
}

//-----------------------------------------------------------------------------

inline float Vector2f::operator [] (int i) const {
	return (i==0)?x:y;
}

inline float & Vector2f::operator [] (int i) {
	return (i==0)?x:y;
}

//-----------------------------------------------------------------------------

inline bool Vector2f::IsZero  (float Tolerance) const
{
    return (LengthSqr() <= Tolerance*Tolerance);
}

inline bool Vector2f::IsUnit (float Tolerance) const
{
    return fabs(Length() - 1.0) <= Tolerance;
}

inline bool Vector2f::IsValid () const
{
    // Testing for equality with QNAN generates exceptions on Borland C++, so
    // we use memcmp to do a bitwise comparison on first element only
	Vector2f bad;
	bad.Invalidate();
    return (memcmp(&x, &bad.x, sizeof(x)) != 0);
}

//-----------------------------------------------------------------------------

#ifdef  VECTOR2F_IOSTREAM
inline ostream & operator << (ostream &o, const Vector2f &v) {
	o<<v.x<<','<<v.y;
	return o;
}

inline istream & operator >> (istream &i, Vector2f &v) {
	char ch;
	i>>v.x>>ch>>v.y;
	return i;
}
#endif//VECTOR2F_IOSTREAM

//-----------------------------------------------------------------------------

inline Vector2f operator * (float d, const Vector2f &v) { return v*d; }

//-----------------------------------------------------------------------------

#endif //VECTOR2F_H
