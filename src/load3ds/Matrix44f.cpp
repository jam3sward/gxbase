//------------------------------------------------------------------------------

#include "MathCon.h"
#include "Matrix44f.h"
using namespace std;

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

//------------------------------------------------------------------------------


/**
 * Return inverse of a matrix (can throw)
 */

Matrix44f Matrix44f::Inverted() const
{
    // This is what gets thrown on an error
    const char *myError = "Cannot invert";

    int i,j,k;						// Loop indices

    float a[4][8];
    for (i=0;i<4;i++) {
      for (j=0;j<4;j++) {
         a[i][j]   = m[i][j];
         a[i][j+4] = (float)(i==j?1.0:0.0);
      }
    }

    int order[4];					// Pivot order
    int flags[4]={1,1,1,1};			// All rows available as pivot

    for (i=0;i<4;i++) {				// work along columns finding pivot
      float pivot = 0;				// max value in column
      int pivotIndex = 0;			// row containing pivot
      for (j=0;j<4;j++)
         if ((flags[j]) && (fabs(a[j][i]) > pivot)) {
            pivot = (float)fabs(a[j][i]);
            pivotIndex = j;
         }

      if (!pivot) throw myError;    // Error

      pivot = a[pivotIndex][i];		// get it with sign

      flags[pivotIndex] = 0;
      order[i] = pivotIndex;

      for (k=i+1;k<8;k++)
         a[pivotIndex][k] /= pivot;	// normalize equation

      for (j=0;j<4;j++)
         if (j != pivotIndex) {
            float mult = a[j][i];	// row multiplier
            for (k=i+1;k<8;k++)
               a[j][k] -= mult * a[pivotIndex][k];
         }
    }

    // copy result: return
    Matrix44f m;
    for (i=0;i<4;i++) {
      int rowNumber = order[i];
      for (j=0;j<4;j++)
         m[i][j] = a[rowNumber][j+4];
    }

    return m;
}


//------------------------------------------------------------------------------


/**
 * Return transpose of matrix
 */

Matrix44f Matrix44f::Transposed() const
{
    Matrix44f R;
	R[0][1] = m[1][0]; R[0][2] = m[2][0]; R[0][3] = m[3][0]; R[0][0] = m[0][0];
	R[1][0] = m[0][1]; R[1][2] = m[2][1]; R[1][3] = m[3][1]; R[1][1] = m[1][1];
	R[2][0] = m[0][2]; R[2][1] = m[1][2]; R[2][3] = m[3][2]; R[2][2] = m[2][2];
	R[3][0] = m[0][3]; R[3][1] = m[1][3]; R[3][2] = m[2][3]; R[3][3] = m[3][3];
	return R;
}


//---- Translation -------------------------------------------------------------


/**
 * Make a translation matrix
 */

const Matrix44f &
Matrix44f::MakeTranslate ( const Vector3f &v )
{
    Identity();
    m[0][3] = v.x;
    m[1][3] = v.y;
    m[2][3] = v.z;
    return *this;
}


//---- Scaling -----------------------------------------------------------------


/**
 * Makes a scale matrix
 */

const Matrix44f &
Matrix44f::MakeScale ( const Vector3f &v )
{
    Identity();
    m[0][0] = v.x;
    m[1][1] = v.y;
    m[2][2] = v.z;
    return *this;
}


//---- MakeRotateX(a) ----------------------------------------------------------


/**
 * Rotation about X axis
 */

const Matrix44f & Matrix44f::MakeRotateX ( float a )
{
    float ar = (float)a;
    float CA = (float)cos(ar), SA = (float)sin(ar);

    m[0][0]=1.0; m[0][1]= 0.0; m[0][2]= 0.0; m[0][3]=0.0;
    m[1][0]=0.0; m[1][1]=  CA; m[1][2]= -SA; m[1][3]=0.0;
    m[2][0]=0.0; m[2][1]=  SA; m[2][2]=  CA; m[2][3]=0.0;
    m[3][0]=0.0; m[3][1]= 0.0; m[3][2]= 0.0; m[3][3]=1.0;

    return *this;
}


//---- MakeRotateY(a) ----------------------------------------------------------


/**
 * Rotation about Y axis
 */

const Matrix44f & Matrix44f::MakeRotateY ( float a )
{
   float ar = (float)a;
   float CA = (float)cos(ar), SA = (float)sin(ar);

   m[0][0]= CA; m[0][1]= 0.0; m[0][2]=  SA; m[0][3]=0.0;
   m[1][0]=0.0; m[1][1]= 1.0; m[1][2]= 0.0; m[1][3]=0.0;
   m[2][0]=-SA; m[2][1]= 0.0; m[2][2]=  CA; m[2][3]=0.0;
   m[3][0]=0.0; m[3][1]= 0.0; m[3][2]= 0.0; m[3][3]=1.0;

   return *this;
}


//---- MakeRotateZ(a) ----------------------------------------------------------


/**
 * Rotation about Z axis
 */

const Matrix44f & Matrix44f::MakeRotateZ ( float a )
{
   float ar = (float)a;
   float CA = (float)cos(ar), SA = (float)sin(ar);

   m[0][0]= CA; m[0][1]= -SA; m[0][2]= 0.0; m[0][3]=0.0;
   m[1][0]= SA; m[1][1]=  CA; m[1][2]= 0.0; m[1][3]=0.0;
   m[2][0]=0.0; m[2][1]= 0.0; m[2][2]= 1.0; m[2][3]=0.0;
   m[3][0]=0.0; m[3][1]= 0.0; m[3][2]= 0.0; m[3][3]=1.0;

   return *this;
}


//---- MakeRotate(x,y,z) -------------------------------------------------------


/**
 * Rotation matrix from unit direction vectors of axes
 * The three input vectors are assumed to be mutually orthogonal and unit length
 */

const Matrix44f & Matrix44f::MakeRotate (
   const Vector3f &x,
   const Vector3f &y,
   const Vector3f &z
) {
    // Put the three axis vectors in the top left 3x3 portion
    // of the matrix
    m[0][0]=x.x;  m[0][1]=y.x;  m[0][2]=z.x;
    m[1][0]=x.y;  m[1][1]=y.y;  m[1][2]=z.y;
    m[2][0]=x.z;  m[2][1]=y.z;  m[2][2]=z.z;

    // Rest of the matrix is just part of identity matrix
    m[0][3]=0.0;  m[1][3]=0.0;  m[2][3]=0.0;
    m[3][0]=0.0;  m[3][1]=0.0;  m[3][2]=0.0; m[3][3]=1.0;

    return *this;
}


//---- MakeRotate(angle,axis) --------------------------------------------------


/**
 * Rotation about an arbitrary axis
 */

const Matrix44f &
Matrix44f::MakeRotate ( float angle, const Vector3f & axis )
{
    // Ensure that rotation axis is unit length
    // If axis is zero length, return identity matrix (to avoid divide by zero)
    float r = axis.Length();
    if (!r) return Identity();

    // Unit direction vector of axis (x,y,z)
    float
        x = axis.x/r,					// unit direction vector of rotation axis
        y = axis.y/r,
        z = axis.z/r,
        d = (float)sqrt( y*y + z*z );	// length of axis in YZ plane

    // If axis is coincident with x-axis, perform simple x-axis rotation
    if (d < 1E-9) return MakeRotateX( (x>=0.0) ? angle : -angle );

    // R = Rotation to place axis c on z-axis
    // Note: These are column vectors (ie. they appear transposed below)
    Matrix44f R;
    R.MakeRotate(
        Vector3f(  d , -x*y/d , x*z/d ),
        Vector3f(  0 ,   z/d  ,  y/d  ),
        Vector3f( -x ,   -y   ,   z   )
    );

    *this = R;                  // Rotate onto z-axis
    this->RotateZ(angle);       // Perform rotation about z-axis
    *this *= R.Transposed();    // Take out rotation Ra

    return *this;               // Return result
}//MakeRotate(angle,vector)


//---- Comparison --------------------------------------------------------------


/**
 * Exact comparison
 */

bool Matrix44f::operator == ( const Matrix44f &m2 ) const
{
    for (int r=0; r<4; r++)
        for (int c=0; c<4; c++)
            if (m[r][c] != m2[r][c]) return false;
    return true;
}


/**
 * Approximate comparison (with tolerance per term)
 */

bool Matrix44f::IsEqual ( const Matrix44f &m2, float tol ) const
{
    for (int r=0; r<4; r++)
        for (int c=0; c<4; c++)
            if (fabs(m[r][c]-m2[r][c]) > tol) return false;
    return true;
}


//---- Stream ------------------------------------------------------------------


ostream & operator << (ostream &out, const Matrix44f &o)
{
    for (int r=0; r<4; r++)
        for (int c=0; c<4; c++)
            out << o[r][c] << ((c==3)?'\n':' ');
	return out;
}

istream & operator >> (istream &in, Matrix44f &o)
{
    for (int r=0; r<4; r++)
        for (int c=0; c<4; c++)
            in >> o[r][c];
	return in;
}


//------------------------------------------------------------------------------

#undef M4_AngleScale
