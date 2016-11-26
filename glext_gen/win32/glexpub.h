#pragma once
#ifndef __glexpub_h
#define __glexpub_h

#include "interceptor.h"
#include <stdlib.h>

/**
 * This is an automatically generated file: do not edit
 * Generated on Sat Nov 26 01:34:23 2016
 * J.Ward, Computer Science, University of Hull, UK
 * Visit the OpenGL Extensions Registry for detailed
 * extension specifications:
 *   http://www.opengl.org/registry
 */

//----------------------------------------------------------------------------

namespace glext {

inline void glDrawRangeElements(GLenum  a, GLuint  b, GLuint  c, GLsizei  d, GLenum  e, const void *f) {
	interceptor::getCurrentExt()->glDrawRangeElements(a,b,c,d,e,f);
}
inline void glTexImage3D(GLenum  a, GLint  b, GLint  c, GLsizei  d, GLsizei  e, GLsizei  f, GLint  g, GLenum  h, GLenum  i, const void *j) {
	interceptor::getCurrentExt()->glTexImage3D(a,b,c,d,e,f,g,h,i,j);
}
inline void glTexSubImage3D(GLenum  a, GLint  b, GLint  c, GLint  d, GLint  e, GLsizei  f, GLsizei  g, GLsizei  h, GLenum  i, GLenum  j, const void *k) {
	interceptor::getCurrentExt()->glTexSubImage3D(a,b,c,d,e,f,g,h,i,j,k);
}
inline void glCopyTexSubImage3D(GLenum  a, GLint  b, GLint  c, GLint  d, GLint  e, GLint  f, GLint  g, GLsizei  h, GLsizei  i) {
	interceptor::getCurrentExt()->glCopyTexSubImage3D(a,b,c,d,e,f,g,h,i);
}
inline void glActiveTexture(GLenum  a) {
	interceptor::getCurrentExt()->glActiveTexture(a);
}
inline void glSampleCoverage(GLfloat  a, GLboolean  b) {
	interceptor::getCurrentExt()->glSampleCoverage(a,b);
}
inline void glCompressedTexImage3D(GLenum  a, GLint  b, GLenum  c, GLsizei  d, GLsizei  e, GLsizei  f, GLint  g, GLsizei  h, const void *i) {
	interceptor::getCurrentExt()->glCompressedTexImage3D(a,b,c,d,e,f,g,h,i);
}
inline void glCompressedTexImage2D(GLenum  a, GLint  b, GLenum  c, GLsizei  d, GLsizei  e, GLint  f, GLsizei  g, const void *h) {
	interceptor::getCurrentExt()->glCompressedTexImage2D(a,b,c,d,e,f,g,h);
}
inline void glCompressedTexImage1D(GLenum  a, GLint  b, GLenum  c, GLsizei  d, GLint  e, GLsizei  f, const void *g) {
	interceptor::getCurrentExt()->glCompressedTexImage1D(a,b,c,d,e,f,g);
}
inline void glCompressedTexSubImage3D(GLenum  a, GLint  b, GLint  c, GLint  d, GLint  e, GLsizei  f, GLsizei  g, GLsizei  h, GLenum  i, GLsizei  j, const void *k) {
	interceptor::getCurrentExt()->glCompressedTexSubImage3D(a,b,c,d,e,f,g,h,i,j,k);
}
inline void glCompressedTexSubImage2D(GLenum  a, GLint  b, GLint  c, GLint  d, GLsizei  e, GLsizei  f, GLenum  g, GLsizei  h, const void *i) {
	interceptor::getCurrentExt()->glCompressedTexSubImage2D(a,b,c,d,e,f,g,h,i);
}
inline void glCompressedTexSubImage1D(GLenum  a, GLint  b, GLint  c, GLsizei  d, GLenum  e, GLsizei  f, const void *g) {
	interceptor::getCurrentExt()->glCompressedTexSubImage1D(a,b,c,d,e,f,g);
}
inline void glGetCompressedTexImage(GLenum  a, GLint  b, void *c) {
	interceptor::getCurrentExt()->glGetCompressedTexImage(a,b,c);
}
inline void glClientActiveTexture(GLenum  a) {
	interceptor::getCurrentExt()->glClientActiveTexture(a);
}
inline void glMultiTexCoord1d(GLenum  a, GLdouble  b) {
	interceptor::getCurrentExt()->glMultiTexCoord1d(a,b);
}
inline void glMultiTexCoord1dv(GLenum  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glMultiTexCoord1dv(a,b);
}
inline void glMultiTexCoord1f(GLenum  a, GLfloat  b) {
	interceptor::getCurrentExt()->glMultiTexCoord1f(a,b);
}
inline void glMultiTexCoord1fv(GLenum  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glMultiTexCoord1fv(a,b);
}
inline void glMultiTexCoord1i(GLenum  a, GLint  b) {
	interceptor::getCurrentExt()->glMultiTexCoord1i(a,b);
}
inline void glMultiTexCoord1iv(GLenum  a, const GLint *b) {
	interceptor::getCurrentExt()->glMultiTexCoord1iv(a,b);
}
inline void glMultiTexCoord1s(GLenum  a, GLshort  b) {
	interceptor::getCurrentExt()->glMultiTexCoord1s(a,b);
}
inline void glMultiTexCoord1sv(GLenum  a, const GLshort *b) {
	interceptor::getCurrentExt()->glMultiTexCoord1sv(a,b);
}
inline void glMultiTexCoord2d(GLenum  a, GLdouble  b, GLdouble  c) {
	interceptor::getCurrentExt()->glMultiTexCoord2d(a,b,c);
}
inline void glMultiTexCoord2dv(GLenum  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glMultiTexCoord2dv(a,b);
}
inline void glMultiTexCoord2f(GLenum  a, GLfloat  b, GLfloat  c) {
	interceptor::getCurrentExt()->glMultiTexCoord2f(a,b,c);
}
inline void glMultiTexCoord2fv(GLenum  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glMultiTexCoord2fv(a,b);
}
inline void glMultiTexCoord2i(GLenum  a, GLint  b, GLint  c) {
	interceptor::getCurrentExt()->glMultiTexCoord2i(a,b,c);
}
inline void glMultiTexCoord2iv(GLenum  a, const GLint *b) {
	interceptor::getCurrentExt()->glMultiTexCoord2iv(a,b);
}
inline void glMultiTexCoord2s(GLenum  a, GLshort  b, GLshort  c) {
	interceptor::getCurrentExt()->glMultiTexCoord2s(a,b,c);
}
inline void glMultiTexCoord2sv(GLenum  a, const GLshort *b) {
	interceptor::getCurrentExt()->glMultiTexCoord2sv(a,b);
}
inline void glMultiTexCoord3d(GLenum  a, GLdouble  b, GLdouble  c, GLdouble  d) {
	interceptor::getCurrentExt()->glMultiTexCoord3d(a,b,c,d);
}
inline void glMultiTexCoord3dv(GLenum  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glMultiTexCoord3dv(a,b);
}
inline void glMultiTexCoord3f(GLenum  a, GLfloat  b, GLfloat  c, GLfloat  d) {
	interceptor::getCurrentExt()->glMultiTexCoord3f(a,b,c,d);
}
inline void glMultiTexCoord3fv(GLenum  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glMultiTexCoord3fv(a,b);
}
inline void glMultiTexCoord3i(GLenum  a, GLint  b, GLint  c, GLint  d) {
	interceptor::getCurrentExt()->glMultiTexCoord3i(a,b,c,d);
}
inline void glMultiTexCoord3iv(GLenum  a, const GLint *b) {
	interceptor::getCurrentExt()->glMultiTexCoord3iv(a,b);
}
inline void glMultiTexCoord3s(GLenum  a, GLshort  b, GLshort  c, GLshort  d) {
	interceptor::getCurrentExt()->glMultiTexCoord3s(a,b,c,d);
}
inline void glMultiTexCoord3sv(GLenum  a, const GLshort *b) {
	interceptor::getCurrentExt()->glMultiTexCoord3sv(a,b);
}
inline void glMultiTexCoord4d(GLenum  a, GLdouble  b, GLdouble  c, GLdouble  d, GLdouble  e) {
	interceptor::getCurrentExt()->glMultiTexCoord4d(a,b,c,d,e);
}
inline void glMultiTexCoord4dv(GLenum  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glMultiTexCoord4dv(a,b);
}
inline void glMultiTexCoord4f(GLenum  a, GLfloat  b, GLfloat  c, GLfloat  d, GLfloat  e) {
	interceptor::getCurrentExt()->glMultiTexCoord4f(a,b,c,d,e);
}
inline void glMultiTexCoord4fv(GLenum  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glMultiTexCoord4fv(a,b);
}
inline void glMultiTexCoord4i(GLenum  a, GLint  b, GLint  c, GLint  d, GLint  e) {
	interceptor::getCurrentExt()->glMultiTexCoord4i(a,b,c,d,e);
}
inline void glMultiTexCoord4iv(GLenum  a, const GLint *b) {
	interceptor::getCurrentExt()->glMultiTexCoord4iv(a,b);
}
inline void glMultiTexCoord4s(GLenum  a, GLshort  b, GLshort  c, GLshort  d, GLshort  e) {
	interceptor::getCurrentExt()->glMultiTexCoord4s(a,b,c,d,e);
}
inline void glMultiTexCoord4sv(GLenum  a, const GLshort *b) {
	interceptor::getCurrentExt()->glMultiTexCoord4sv(a,b);
}
inline void glLoadTransposeMatrixf(const GLfloat *a) {
	interceptor::getCurrentExt()->glLoadTransposeMatrixf(a);
}
inline void glLoadTransposeMatrixd(const GLdouble *a) {
	interceptor::getCurrentExt()->glLoadTransposeMatrixd(a);
}
inline void glMultTransposeMatrixf(const GLfloat *a) {
	interceptor::getCurrentExt()->glMultTransposeMatrixf(a);
}
inline void glMultTransposeMatrixd(const GLdouble *a) {
	interceptor::getCurrentExt()->glMultTransposeMatrixd(a);
}
inline void glBlendFuncSeparate(GLenum  a, GLenum  b, GLenum  c, GLenum  d) {
	interceptor::getCurrentExt()->glBlendFuncSeparate(a,b,c,d);
}
inline void glMultiDrawArrays(GLenum  a, const GLint *b, const GLsizei *c, GLsizei  d) {
	interceptor::getCurrentExt()->glMultiDrawArrays(a,b,c,d);
}
inline void glMultiDrawElements(GLenum  a, const GLsizei *b, GLenum  c, const void *const*d, GLsizei  e) {
	interceptor::getCurrentExt()->glMultiDrawElements(a,b,c,d,e);
}
inline void glPointParameterf(GLenum  a, GLfloat  b) {
	interceptor::getCurrentExt()->glPointParameterf(a,b);
}
inline void glPointParameterfv(GLenum  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glPointParameterfv(a,b);
}
inline void glPointParameteri(GLenum  a, GLint  b) {
	interceptor::getCurrentExt()->glPointParameteri(a,b);
}
inline void glPointParameteriv(GLenum  a, const GLint *b) {
	interceptor::getCurrentExt()->glPointParameteriv(a,b);
}
inline void glFogCoordf(GLfloat  a) {
	interceptor::getCurrentExt()->glFogCoordf(a);
}
inline void glFogCoordfv(const GLfloat *a) {
	interceptor::getCurrentExt()->glFogCoordfv(a);
}
inline void glFogCoordd(GLdouble  a) {
	interceptor::getCurrentExt()->glFogCoordd(a);
}
inline void glFogCoorddv(const GLdouble *a) {
	interceptor::getCurrentExt()->glFogCoorddv(a);
}
inline void glFogCoordPointer(GLenum  a, GLsizei  b, const void *c) {
	interceptor::getCurrentExt()->glFogCoordPointer(a,b,c);
}
inline void glSecondaryColor3b(GLbyte  a, GLbyte  b, GLbyte  c) {
	interceptor::getCurrentExt()->glSecondaryColor3b(a,b,c);
}
inline void glSecondaryColor3bv(const GLbyte *a) {
	interceptor::getCurrentExt()->glSecondaryColor3bv(a);
}
inline void glSecondaryColor3d(GLdouble  a, GLdouble  b, GLdouble  c) {
	interceptor::getCurrentExt()->glSecondaryColor3d(a,b,c);
}
inline void glSecondaryColor3dv(const GLdouble *a) {
	interceptor::getCurrentExt()->glSecondaryColor3dv(a);
}
inline void glSecondaryColor3f(GLfloat  a, GLfloat  b, GLfloat  c) {
	interceptor::getCurrentExt()->glSecondaryColor3f(a,b,c);
}
inline void glSecondaryColor3fv(const GLfloat *a) {
	interceptor::getCurrentExt()->glSecondaryColor3fv(a);
}
inline void glSecondaryColor3i(GLint  a, GLint  b, GLint  c) {
	interceptor::getCurrentExt()->glSecondaryColor3i(a,b,c);
}
inline void glSecondaryColor3iv(const GLint *a) {
	interceptor::getCurrentExt()->glSecondaryColor3iv(a);
}
inline void glSecondaryColor3s(GLshort  a, GLshort  b, GLshort  c) {
	interceptor::getCurrentExt()->glSecondaryColor3s(a,b,c);
}
inline void glSecondaryColor3sv(const GLshort *a) {
	interceptor::getCurrentExt()->glSecondaryColor3sv(a);
}
inline void glSecondaryColor3ub(GLubyte  a, GLubyte  b, GLubyte  c) {
	interceptor::getCurrentExt()->glSecondaryColor3ub(a,b,c);
}
inline void glSecondaryColor3ubv(const GLubyte *a) {
	interceptor::getCurrentExt()->glSecondaryColor3ubv(a);
}
inline void glSecondaryColor3ui(GLuint  a, GLuint  b, GLuint  c) {
	interceptor::getCurrentExt()->glSecondaryColor3ui(a,b,c);
}
inline void glSecondaryColor3uiv(const GLuint *a) {
	interceptor::getCurrentExt()->glSecondaryColor3uiv(a);
}
inline void glSecondaryColor3us(GLushort  a, GLushort  b, GLushort  c) {
	interceptor::getCurrentExt()->glSecondaryColor3us(a,b,c);
}
inline void glSecondaryColor3usv(const GLushort *a) {
	interceptor::getCurrentExt()->glSecondaryColor3usv(a);
}
inline void glSecondaryColorPointer(GLint  a, GLenum  b, GLsizei  c, const void *d) {
	interceptor::getCurrentExt()->glSecondaryColorPointer(a,b,c,d);
}
inline void glWindowPos2d(GLdouble  a, GLdouble  b) {
	interceptor::getCurrentExt()->glWindowPos2d(a,b);
}
inline void glWindowPos2dv(const GLdouble *a) {
	interceptor::getCurrentExt()->glWindowPos2dv(a);
}
inline void glWindowPos2f(GLfloat  a, GLfloat  b) {
	interceptor::getCurrentExt()->glWindowPos2f(a,b);
}
inline void glWindowPos2fv(const GLfloat *a) {
	interceptor::getCurrentExt()->glWindowPos2fv(a);
}
inline void glWindowPos2i(GLint  a, GLint  b) {
	interceptor::getCurrentExt()->glWindowPos2i(a,b);
}
inline void glWindowPos2iv(const GLint *a) {
	interceptor::getCurrentExt()->glWindowPos2iv(a);
}
inline void glWindowPos2s(GLshort  a, GLshort  b) {
	interceptor::getCurrentExt()->glWindowPos2s(a,b);
}
inline void glWindowPos2sv(const GLshort *a) {
	interceptor::getCurrentExt()->glWindowPos2sv(a);
}
inline void glWindowPos3d(GLdouble  a, GLdouble  b, GLdouble  c) {
	interceptor::getCurrentExt()->glWindowPos3d(a,b,c);
}
inline void glWindowPos3dv(const GLdouble *a) {
	interceptor::getCurrentExt()->glWindowPos3dv(a);
}
inline void glWindowPos3f(GLfloat  a, GLfloat  b, GLfloat  c) {
	interceptor::getCurrentExt()->glWindowPos3f(a,b,c);
}
inline void glWindowPos3fv(const GLfloat *a) {
	interceptor::getCurrentExt()->glWindowPos3fv(a);
}
inline void glWindowPos3i(GLint  a, GLint  b, GLint  c) {
	interceptor::getCurrentExt()->glWindowPos3i(a,b,c);
}
inline void glWindowPos3iv(const GLint *a) {
	interceptor::getCurrentExt()->glWindowPos3iv(a);
}
inline void glWindowPos3s(GLshort  a, GLshort  b, GLshort  c) {
	interceptor::getCurrentExt()->glWindowPos3s(a,b,c);
}
inline void glWindowPos3sv(const GLshort *a) {
	interceptor::getCurrentExt()->glWindowPos3sv(a);
}
inline void glBlendColor(GLfloat  a, GLfloat  b, GLfloat  c, GLfloat  d) {
	interceptor::getCurrentExt()->glBlendColor(a,b,c,d);
}
inline void glBlendEquation(GLenum  a) {
	interceptor::getCurrentExt()->glBlendEquation(a);
}
inline void glGenQueries(GLsizei  a, GLuint *b) {
	interceptor::getCurrentExt()->glGenQueries(a,b);
}
inline void glDeleteQueries(GLsizei  a, const GLuint *b) {
	interceptor::getCurrentExt()->glDeleteQueries(a,b);
}
inline GLboolean glIsQuery(GLuint  a) {
	return interceptor::getCurrentExt()->glIsQuery(a);
}
inline void glBeginQuery(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glBeginQuery(a,b);
}
inline void glEndQuery(GLenum  a) {
	interceptor::getCurrentExt()->glEndQuery(a);
}
inline void glGetQueryiv(GLenum  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetQueryiv(a,b,c);
}
inline void glGetQueryObjectiv(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetQueryObjectiv(a,b,c);
}
inline void glGetQueryObjectuiv(GLuint  a, GLenum  b, GLuint *c) {
	interceptor::getCurrentExt()->glGetQueryObjectuiv(a,b,c);
}
inline void glBindBuffer(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glBindBuffer(a,b);
}
inline void glDeleteBuffers(GLsizei  a, const GLuint *b) {
	interceptor::getCurrentExt()->glDeleteBuffers(a,b);
}
inline void glGenBuffers(GLsizei  a, GLuint *b) {
	interceptor::getCurrentExt()->glGenBuffers(a,b);
}
inline GLboolean glIsBuffer(GLuint  a) {
	return interceptor::getCurrentExt()->glIsBuffer(a);
}
inline void glBufferData(GLenum  a, GLsizeiptr  b, const void *c, GLenum  d) {
	interceptor::getCurrentExt()->glBufferData(a,b,c,d);
}
inline void glBufferSubData(GLenum  a, GLintptr  b, GLsizeiptr  c, const void *d) {
	interceptor::getCurrentExt()->glBufferSubData(a,b,c,d);
}
inline void glGetBufferSubData(GLenum  a, GLintptr  b, GLsizeiptr  c, void *d) {
	interceptor::getCurrentExt()->glGetBufferSubData(a,b,c,d);
}
inline void * glMapBuffer(GLenum  a, GLenum  b) {
	return interceptor::getCurrentExt()->glMapBuffer(a,b);
}
inline GLboolean glUnmapBuffer(GLenum  a) {
	return interceptor::getCurrentExt()->glUnmapBuffer(a);
}
inline void glGetBufferParameteriv(GLenum  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetBufferParameteriv(a,b,c);
}
inline void glGetBufferPointerv(GLenum  a, GLenum  b, void **c) {
	interceptor::getCurrentExt()->glGetBufferPointerv(a,b,c);
}
inline void glBlendEquationSeparate(GLenum  a, GLenum  b) {
	interceptor::getCurrentExt()->glBlendEquationSeparate(a,b);
}
inline void glDrawBuffers(GLsizei  a, const GLenum *b) {
	interceptor::getCurrentExt()->glDrawBuffers(a,b);
}
inline void glStencilOpSeparate(GLenum  a, GLenum  b, GLenum  c, GLenum  d) {
	interceptor::getCurrentExt()->glStencilOpSeparate(a,b,c,d);
}
inline void glStencilFuncSeparate(GLenum  a, GLenum  b, GLint  c, GLuint  d) {
	interceptor::getCurrentExt()->glStencilFuncSeparate(a,b,c,d);
}
inline void glStencilMaskSeparate(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glStencilMaskSeparate(a,b);
}
inline void glAttachShader(GLuint  a, GLuint  b) {
	interceptor::getCurrentExt()->glAttachShader(a,b);
}
inline void glBindAttribLocation(GLuint  a, GLuint  b, const GLchar *c) {
	interceptor::getCurrentExt()->glBindAttribLocation(a,b,c);
}
inline void glCompileShader(GLuint  a) {
	interceptor::getCurrentExt()->glCompileShader(a);
}
inline GLuint glCreateProgram(void) {
	return interceptor::getCurrentExt()->glCreateProgram();
}
inline GLuint glCreateShader(GLenum  a) {
	return interceptor::getCurrentExt()->glCreateShader(a);
}
inline void glDeleteProgram(GLuint  a) {
	interceptor::getCurrentExt()->glDeleteProgram(a);
}
inline void glDeleteShader(GLuint  a) {
	interceptor::getCurrentExt()->glDeleteShader(a);
}
inline void glDetachShader(GLuint  a, GLuint  b) {
	interceptor::getCurrentExt()->glDetachShader(a,b);
}
inline void glDisableVertexAttribArray(GLuint  a) {
	interceptor::getCurrentExt()->glDisableVertexAttribArray(a);
}
inline void glEnableVertexAttribArray(GLuint  a) {
	interceptor::getCurrentExt()->glEnableVertexAttribArray(a);
}
inline void glGetActiveAttrib(GLuint  a, GLuint  b, GLsizei  c, GLsizei *d, GLint *e, GLenum *f, GLchar *g) {
	interceptor::getCurrentExt()->glGetActiveAttrib(a,b,c,d,e,f,g);
}
inline void glGetActiveUniform(GLuint  a, GLuint  b, GLsizei  c, GLsizei *d, GLint *e, GLenum *f, GLchar *g) {
	interceptor::getCurrentExt()->glGetActiveUniform(a,b,c,d,e,f,g);
}
inline void glGetAttachedShaders(GLuint  a, GLsizei  b, GLsizei *c, GLuint *d) {
	interceptor::getCurrentExt()->glGetAttachedShaders(a,b,c,d);
}
inline GLint glGetAttribLocation(GLuint  a, const GLchar *b) {
	return interceptor::getCurrentExt()->glGetAttribLocation(a,b);
}
inline void glGetProgramiv(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetProgramiv(a,b,c);
}
inline void glGetProgramInfoLog(GLuint  a, GLsizei  b, GLsizei *c, GLchar *d) {
	interceptor::getCurrentExt()->glGetProgramInfoLog(a,b,c,d);
}
inline void glGetShaderiv(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetShaderiv(a,b,c);
}
inline void glGetShaderInfoLog(GLuint  a, GLsizei  b, GLsizei *c, GLchar *d) {
	interceptor::getCurrentExt()->glGetShaderInfoLog(a,b,c,d);
}
inline void glGetShaderSource(GLuint  a, GLsizei  b, GLsizei *c, GLchar *d) {
	interceptor::getCurrentExt()->glGetShaderSource(a,b,c,d);
}
inline GLint glGetUniformLocation(GLuint  a, const GLchar *b) {
	return interceptor::getCurrentExt()->glGetUniformLocation(a,b);
}
inline void glGetUniformfv(GLuint  a, GLint  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetUniformfv(a,b,c);
}
inline void glGetUniformiv(GLuint  a, GLint  b, GLint *c) {
	interceptor::getCurrentExt()->glGetUniformiv(a,b,c);
}
inline void glGetVertexAttribdv(GLuint  a, GLenum  b, GLdouble *c) {
	interceptor::getCurrentExt()->glGetVertexAttribdv(a,b,c);
}
inline void glGetVertexAttribfv(GLuint  a, GLenum  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetVertexAttribfv(a,b,c);
}
inline void glGetVertexAttribiv(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetVertexAttribiv(a,b,c);
}
inline void glGetVertexAttribPointerv(GLuint  a, GLenum  b, void **c) {
	interceptor::getCurrentExt()->glGetVertexAttribPointerv(a,b,c);
}
inline GLboolean glIsProgram(GLuint  a) {
	return interceptor::getCurrentExt()->glIsProgram(a);
}
inline GLboolean glIsShader(GLuint  a) {
	return interceptor::getCurrentExt()->glIsShader(a);
}
inline void glLinkProgram(GLuint  a) {
	interceptor::getCurrentExt()->glLinkProgram(a);
}
inline void glShaderSource(GLuint  a, GLsizei  b, const GLchar *const*c, const GLint *d) {
	interceptor::getCurrentExt()->glShaderSource(a,b,c,d);
}
inline void glUseProgram(GLuint  a) {
	interceptor::getCurrentExt()->glUseProgram(a);
}
inline void glUniform1f(GLint  a, GLfloat  b) {
	interceptor::getCurrentExt()->glUniform1f(a,b);
}
inline void glUniform2f(GLint  a, GLfloat  b, GLfloat  c) {
	interceptor::getCurrentExt()->glUniform2f(a,b,c);
}
inline void glUniform3f(GLint  a, GLfloat  b, GLfloat  c, GLfloat  d) {
	interceptor::getCurrentExt()->glUniform3f(a,b,c,d);
}
inline void glUniform4f(GLint  a, GLfloat  b, GLfloat  c, GLfloat  d, GLfloat  e) {
	interceptor::getCurrentExt()->glUniform4f(a,b,c,d,e);
}
inline void glUniform1i(GLint  a, GLint  b) {
	interceptor::getCurrentExt()->glUniform1i(a,b);
}
inline void glUniform2i(GLint  a, GLint  b, GLint  c) {
	interceptor::getCurrentExt()->glUniform2i(a,b,c);
}
inline void glUniform3i(GLint  a, GLint  b, GLint  c, GLint  d) {
	interceptor::getCurrentExt()->glUniform3i(a,b,c,d);
}
inline void glUniform4i(GLint  a, GLint  b, GLint  c, GLint  d, GLint  e) {
	interceptor::getCurrentExt()->glUniform4i(a,b,c,d,e);
}
inline void glUniform1fv(GLint  a, GLsizei  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glUniform1fv(a,b,c);
}
inline void glUniform2fv(GLint  a, GLsizei  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glUniform2fv(a,b,c);
}
inline void glUniform3fv(GLint  a, GLsizei  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glUniform3fv(a,b,c);
}
inline void glUniform4fv(GLint  a, GLsizei  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glUniform4fv(a,b,c);
}
inline void glUniform1iv(GLint  a, GLsizei  b, const GLint *c) {
	interceptor::getCurrentExt()->glUniform1iv(a,b,c);
}
inline void glUniform2iv(GLint  a, GLsizei  b, const GLint *c) {
	interceptor::getCurrentExt()->glUniform2iv(a,b,c);
}
inline void glUniform3iv(GLint  a, GLsizei  b, const GLint *c) {
	interceptor::getCurrentExt()->glUniform3iv(a,b,c);
}
inline void glUniform4iv(GLint  a, GLsizei  b, const GLint *c) {
	interceptor::getCurrentExt()->glUniform4iv(a,b,c);
}
inline void glUniformMatrix2fv(GLint  a, GLsizei  b, GLboolean  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glUniformMatrix2fv(a,b,c,d);
}
inline void glUniformMatrix3fv(GLint  a, GLsizei  b, GLboolean  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glUniformMatrix3fv(a,b,c,d);
}
inline void glUniformMatrix4fv(GLint  a, GLsizei  b, GLboolean  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glUniformMatrix4fv(a,b,c,d);
}
inline void glValidateProgram(GLuint  a) {
	interceptor::getCurrentExt()->glValidateProgram(a);
}
inline void glVertexAttrib1d(GLuint  a, GLdouble  b) {
	interceptor::getCurrentExt()->glVertexAttrib1d(a,b);
}
inline void glVertexAttrib1dv(GLuint  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glVertexAttrib1dv(a,b);
}
inline void glVertexAttrib1f(GLuint  a, GLfloat  b) {
	interceptor::getCurrentExt()->glVertexAttrib1f(a,b);
}
inline void glVertexAttrib1fv(GLuint  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glVertexAttrib1fv(a,b);
}
inline void glVertexAttrib1s(GLuint  a, GLshort  b) {
	interceptor::getCurrentExt()->glVertexAttrib1s(a,b);
}
inline void glVertexAttrib1sv(GLuint  a, const GLshort *b) {
	interceptor::getCurrentExt()->glVertexAttrib1sv(a,b);
}
inline void glVertexAttrib2d(GLuint  a, GLdouble  b, GLdouble  c) {
	interceptor::getCurrentExt()->glVertexAttrib2d(a,b,c);
}
inline void glVertexAttrib2dv(GLuint  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glVertexAttrib2dv(a,b);
}
inline void glVertexAttrib2f(GLuint  a, GLfloat  b, GLfloat  c) {
	interceptor::getCurrentExt()->glVertexAttrib2f(a,b,c);
}
inline void glVertexAttrib2fv(GLuint  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glVertexAttrib2fv(a,b);
}
inline void glVertexAttrib2s(GLuint  a, GLshort  b, GLshort  c) {
	interceptor::getCurrentExt()->glVertexAttrib2s(a,b,c);
}
inline void glVertexAttrib2sv(GLuint  a, const GLshort *b) {
	interceptor::getCurrentExt()->glVertexAttrib2sv(a,b);
}
inline void glVertexAttrib3d(GLuint  a, GLdouble  b, GLdouble  c, GLdouble  d) {
	interceptor::getCurrentExt()->glVertexAttrib3d(a,b,c,d);
}
inline void glVertexAttrib3dv(GLuint  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glVertexAttrib3dv(a,b);
}
inline void glVertexAttrib3f(GLuint  a, GLfloat  b, GLfloat  c, GLfloat  d) {
	interceptor::getCurrentExt()->glVertexAttrib3f(a,b,c,d);
}
inline void glVertexAttrib3fv(GLuint  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glVertexAttrib3fv(a,b);
}
inline void glVertexAttrib3s(GLuint  a, GLshort  b, GLshort  c, GLshort  d) {
	interceptor::getCurrentExt()->glVertexAttrib3s(a,b,c,d);
}
inline void glVertexAttrib3sv(GLuint  a, const GLshort *b) {
	interceptor::getCurrentExt()->glVertexAttrib3sv(a,b);
}
inline void glVertexAttrib4Nbv(GLuint  a, const GLbyte *b) {
	interceptor::getCurrentExt()->glVertexAttrib4Nbv(a,b);
}
inline void glVertexAttrib4Niv(GLuint  a, const GLint *b) {
	interceptor::getCurrentExt()->glVertexAttrib4Niv(a,b);
}
inline void glVertexAttrib4Nsv(GLuint  a, const GLshort *b) {
	interceptor::getCurrentExt()->glVertexAttrib4Nsv(a,b);
}
inline void glVertexAttrib4Nub(GLuint  a, GLubyte  b, GLubyte  c, GLubyte  d, GLubyte  e) {
	interceptor::getCurrentExt()->glVertexAttrib4Nub(a,b,c,d,e);
}
inline void glVertexAttrib4Nubv(GLuint  a, const GLubyte *b) {
	interceptor::getCurrentExt()->glVertexAttrib4Nubv(a,b);
}
inline void glVertexAttrib4Nuiv(GLuint  a, const GLuint *b) {
	interceptor::getCurrentExt()->glVertexAttrib4Nuiv(a,b);
}
inline void glVertexAttrib4Nusv(GLuint  a, const GLushort *b) {
	interceptor::getCurrentExt()->glVertexAttrib4Nusv(a,b);
}
inline void glVertexAttrib4bv(GLuint  a, const GLbyte *b) {
	interceptor::getCurrentExt()->glVertexAttrib4bv(a,b);
}
inline void glVertexAttrib4d(GLuint  a, GLdouble  b, GLdouble  c, GLdouble  d, GLdouble  e) {
	interceptor::getCurrentExt()->glVertexAttrib4d(a,b,c,d,e);
}
inline void glVertexAttrib4dv(GLuint  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glVertexAttrib4dv(a,b);
}
inline void glVertexAttrib4f(GLuint  a, GLfloat  b, GLfloat  c, GLfloat  d, GLfloat  e) {
	interceptor::getCurrentExt()->glVertexAttrib4f(a,b,c,d,e);
}
inline void glVertexAttrib4fv(GLuint  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glVertexAttrib4fv(a,b);
}
inline void glVertexAttrib4iv(GLuint  a, const GLint *b) {
	interceptor::getCurrentExt()->glVertexAttrib4iv(a,b);
}
inline void glVertexAttrib4s(GLuint  a, GLshort  b, GLshort  c, GLshort  d, GLshort  e) {
	interceptor::getCurrentExt()->glVertexAttrib4s(a,b,c,d,e);
}
inline void glVertexAttrib4sv(GLuint  a, const GLshort *b) {
	interceptor::getCurrentExt()->glVertexAttrib4sv(a,b);
}
inline void glVertexAttrib4ubv(GLuint  a, const GLubyte *b) {
	interceptor::getCurrentExt()->glVertexAttrib4ubv(a,b);
}
inline void glVertexAttrib4uiv(GLuint  a, const GLuint *b) {
	interceptor::getCurrentExt()->glVertexAttrib4uiv(a,b);
}
inline void glVertexAttrib4usv(GLuint  a, const GLushort *b) {
	interceptor::getCurrentExt()->glVertexAttrib4usv(a,b);
}
inline void glVertexAttribPointer(GLuint  a, GLint  b, GLenum  c, GLboolean  d, GLsizei  e, const void *f) {
	interceptor::getCurrentExt()->glVertexAttribPointer(a,b,c,d,e,f);
}
inline void glUniformMatrix2x3fv(GLint  a, GLsizei  b, GLboolean  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glUniformMatrix2x3fv(a,b,c,d);
}
inline void glUniformMatrix3x2fv(GLint  a, GLsizei  b, GLboolean  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glUniformMatrix3x2fv(a,b,c,d);
}
inline void glUniformMatrix2x4fv(GLint  a, GLsizei  b, GLboolean  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glUniformMatrix2x4fv(a,b,c,d);
}
inline void glUniformMatrix4x2fv(GLint  a, GLsizei  b, GLboolean  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glUniformMatrix4x2fv(a,b,c,d);
}
inline void glUniformMatrix3x4fv(GLint  a, GLsizei  b, GLboolean  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glUniformMatrix3x4fv(a,b,c,d);
}
inline void glUniformMatrix4x3fv(GLint  a, GLsizei  b, GLboolean  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glUniformMatrix4x3fv(a,b,c,d);
}
inline void glColorMaski(GLuint  a, GLboolean  b, GLboolean  c, GLboolean  d, GLboolean  e) {
	interceptor::getCurrentExt()->glColorMaski(a,b,c,d,e);
}
inline void glGetBooleani_v(GLenum  a, GLuint  b, GLboolean *c) {
	interceptor::getCurrentExt()->glGetBooleani_v(a,b,c);
}
inline void glGetIntegeri_v(GLenum  a, GLuint  b, GLint *c) {
	interceptor::getCurrentExt()->glGetIntegeri_v(a,b,c);
}
inline void glEnablei(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glEnablei(a,b);
}
inline void glDisablei(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glDisablei(a,b);
}
inline GLboolean glIsEnabledi(GLenum  a, GLuint  b) {
	return interceptor::getCurrentExt()->glIsEnabledi(a,b);
}
inline void glBeginTransformFeedback(GLenum  a) {
	interceptor::getCurrentExt()->glBeginTransformFeedback(a);
}
inline void glEndTransformFeedback(void) {
	interceptor::getCurrentExt()->glEndTransformFeedback();
}
inline void glBindBufferRange(GLenum  a, GLuint  b, GLuint  c, GLintptr  d, GLsizeiptr  e) {
	interceptor::getCurrentExt()->glBindBufferRange(a,b,c,d,e);
}
inline void glBindBufferBase(GLenum  a, GLuint  b, GLuint  c) {
	interceptor::getCurrentExt()->glBindBufferBase(a,b,c);
}
inline void glTransformFeedbackVaryings(GLuint  a, GLsizei  b, const GLchar *const*c, GLenum  d) {
	interceptor::getCurrentExt()->glTransformFeedbackVaryings(a,b,c,d);
}
inline void glGetTransformFeedbackVarying(GLuint  a, GLuint  b, GLsizei  c, GLsizei *d, GLsizei *e, GLenum *f, GLchar *g) {
	interceptor::getCurrentExt()->glGetTransformFeedbackVarying(a,b,c,d,e,f,g);
}
inline void glClampColor(GLenum  a, GLenum  b) {
	interceptor::getCurrentExt()->glClampColor(a,b);
}
inline void glBeginConditionalRender(GLuint  a, GLenum  b) {
	interceptor::getCurrentExt()->glBeginConditionalRender(a,b);
}
inline void glEndConditionalRender(void) {
	interceptor::getCurrentExt()->glEndConditionalRender();
}
inline void glVertexAttribIPointer(GLuint  a, GLint  b, GLenum  c, GLsizei  d, const void *e) {
	interceptor::getCurrentExt()->glVertexAttribIPointer(a,b,c,d,e);
}
inline void glGetVertexAttribIiv(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetVertexAttribIiv(a,b,c);
}
inline void glGetVertexAttribIuiv(GLuint  a, GLenum  b, GLuint *c) {
	interceptor::getCurrentExt()->glGetVertexAttribIuiv(a,b,c);
}
inline void glVertexAttribI1i(GLuint  a, GLint  b) {
	interceptor::getCurrentExt()->glVertexAttribI1i(a,b);
}
inline void glVertexAttribI2i(GLuint  a, GLint  b, GLint  c) {
	interceptor::getCurrentExt()->glVertexAttribI2i(a,b,c);
}
inline void glVertexAttribI3i(GLuint  a, GLint  b, GLint  c, GLint  d) {
	interceptor::getCurrentExt()->glVertexAttribI3i(a,b,c,d);
}
inline void glVertexAttribI4i(GLuint  a, GLint  b, GLint  c, GLint  d, GLint  e) {
	interceptor::getCurrentExt()->glVertexAttribI4i(a,b,c,d,e);
}
inline void glVertexAttribI1ui(GLuint  a, GLuint  b) {
	interceptor::getCurrentExt()->glVertexAttribI1ui(a,b);
}
inline void glVertexAttribI2ui(GLuint  a, GLuint  b, GLuint  c) {
	interceptor::getCurrentExt()->glVertexAttribI2ui(a,b,c);
}
inline void glVertexAttribI3ui(GLuint  a, GLuint  b, GLuint  c, GLuint  d) {
	interceptor::getCurrentExt()->glVertexAttribI3ui(a,b,c,d);
}
inline void glVertexAttribI4ui(GLuint  a, GLuint  b, GLuint  c, GLuint  d, GLuint  e) {
	interceptor::getCurrentExt()->glVertexAttribI4ui(a,b,c,d,e);
}
inline void glVertexAttribI1iv(GLuint  a, const GLint *b) {
	interceptor::getCurrentExt()->glVertexAttribI1iv(a,b);
}
inline void glVertexAttribI2iv(GLuint  a, const GLint *b) {
	interceptor::getCurrentExt()->glVertexAttribI2iv(a,b);
}
inline void glVertexAttribI3iv(GLuint  a, const GLint *b) {
	interceptor::getCurrentExt()->glVertexAttribI3iv(a,b);
}
inline void glVertexAttribI4iv(GLuint  a, const GLint *b) {
	interceptor::getCurrentExt()->glVertexAttribI4iv(a,b);
}
inline void glVertexAttribI1uiv(GLuint  a, const GLuint *b) {
	interceptor::getCurrentExt()->glVertexAttribI1uiv(a,b);
}
inline void glVertexAttribI2uiv(GLuint  a, const GLuint *b) {
	interceptor::getCurrentExt()->glVertexAttribI2uiv(a,b);
}
inline void glVertexAttribI3uiv(GLuint  a, const GLuint *b) {
	interceptor::getCurrentExt()->glVertexAttribI3uiv(a,b);
}
inline void glVertexAttribI4uiv(GLuint  a, const GLuint *b) {
	interceptor::getCurrentExt()->glVertexAttribI4uiv(a,b);
}
inline void glVertexAttribI4bv(GLuint  a, const GLbyte *b) {
	interceptor::getCurrentExt()->glVertexAttribI4bv(a,b);
}
inline void glVertexAttribI4sv(GLuint  a, const GLshort *b) {
	interceptor::getCurrentExt()->glVertexAttribI4sv(a,b);
}
inline void glVertexAttribI4ubv(GLuint  a, const GLubyte *b) {
	interceptor::getCurrentExt()->glVertexAttribI4ubv(a,b);
}
inline void glVertexAttribI4usv(GLuint  a, const GLushort *b) {
	interceptor::getCurrentExt()->glVertexAttribI4usv(a,b);
}
inline void glGetUniformuiv(GLuint  a, GLint  b, GLuint *c) {
	interceptor::getCurrentExt()->glGetUniformuiv(a,b,c);
}
inline void glBindFragDataLocation(GLuint  a, GLuint  b, const GLchar *c) {
	interceptor::getCurrentExt()->glBindFragDataLocation(a,b,c);
}
inline GLint glGetFragDataLocation(GLuint  a, const GLchar *b) {
	return interceptor::getCurrentExt()->glGetFragDataLocation(a,b);
}
inline void glUniform1ui(GLint  a, GLuint  b) {
	interceptor::getCurrentExt()->glUniform1ui(a,b);
}
inline void glUniform2ui(GLint  a, GLuint  b, GLuint  c) {
	interceptor::getCurrentExt()->glUniform2ui(a,b,c);
}
inline void glUniform3ui(GLint  a, GLuint  b, GLuint  c, GLuint  d) {
	interceptor::getCurrentExt()->glUniform3ui(a,b,c,d);
}
inline void glUniform4ui(GLint  a, GLuint  b, GLuint  c, GLuint  d, GLuint  e) {
	interceptor::getCurrentExt()->glUniform4ui(a,b,c,d,e);
}
inline void glUniform1uiv(GLint  a, GLsizei  b, const GLuint *c) {
	interceptor::getCurrentExt()->glUniform1uiv(a,b,c);
}
inline void glUniform2uiv(GLint  a, GLsizei  b, const GLuint *c) {
	interceptor::getCurrentExt()->glUniform2uiv(a,b,c);
}
inline void glUniform3uiv(GLint  a, GLsizei  b, const GLuint *c) {
	interceptor::getCurrentExt()->glUniform3uiv(a,b,c);
}
inline void glUniform4uiv(GLint  a, GLsizei  b, const GLuint *c) {
	interceptor::getCurrentExt()->glUniform4uiv(a,b,c);
}
inline void glTexParameterIiv(GLenum  a, GLenum  b, const GLint *c) {
	interceptor::getCurrentExt()->glTexParameterIiv(a,b,c);
}
inline void glTexParameterIuiv(GLenum  a, GLenum  b, const GLuint *c) {
	interceptor::getCurrentExt()->glTexParameterIuiv(a,b,c);
}
inline void glGetTexParameterIiv(GLenum  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetTexParameterIiv(a,b,c);
}
inline void glGetTexParameterIuiv(GLenum  a, GLenum  b, GLuint *c) {
	interceptor::getCurrentExt()->glGetTexParameterIuiv(a,b,c);
}
inline void glClearBufferiv(GLenum  a, GLint  b, const GLint *c) {
	interceptor::getCurrentExt()->glClearBufferiv(a,b,c);
}
inline void glClearBufferuiv(GLenum  a, GLint  b, const GLuint *c) {
	interceptor::getCurrentExt()->glClearBufferuiv(a,b,c);
}
inline void glClearBufferfv(GLenum  a, GLint  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glClearBufferfv(a,b,c);
}
inline void glClearBufferfi(GLenum  a, GLint  b, GLfloat  c, GLint  d) {
	interceptor::getCurrentExt()->glClearBufferfi(a,b,c,d);
}
inline const GLubyte * glGetStringi(GLenum  a, GLuint  b) {
	return interceptor::getCurrentExt()->glGetStringi(a,b);
}
inline GLboolean glIsRenderbuffer(GLuint  a) {
	return interceptor::getCurrentExt()->glIsRenderbuffer(a);
}
inline void glBindRenderbuffer(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glBindRenderbuffer(a,b);
}
inline void glDeleteRenderbuffers(GLsizei  a, const GLuint *b) {
	interceptor::getCurrentExt()->glDeleteRenderbuffers(a,b);
}
inline void glGenRenderbuffers(GLsizei  a, GLuint *b) {
	interceptor::getCurrentExt()->glGenRenderbuffers(a,b);
}
inline void glRenderbufferStorage(GLenum  a, GLenum  b, GLsizei  c, GLsizei  d) {
	interceptor::getCurrentExt()->glRenderbufferStorage(a,b,c,d);
}
inline void glGetRenderbufferParameteriv(GLenum  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetRenderbufferParameteriv(a,b,c);
}
inline GLboolean glIsFramebuffer(GLuint  a) {
	return interceptor::getCurrentExt()->glIsFramebuffer(a);
}
inline void glBindFramebuffer(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glBindFramebuffer(a,b);
}
inline void glDeleteFramebuffers(GLsizei  a, const GLuint *b) {
	interceptor::getCurrentExt()->glDeleteFramebuffers(a,b);
}
inline void glGenFramebuffers(GLsizei  a, GLuint *b) {
	interceptor::getCurrentExt()->glGenFramebuffers(a,b);
}
inline GLenum glCheckFramebufferStatus(GLenum  a) {
	return interceptor::getCurrentExt()->glCheckFramebufferStatus(a);
}
inline void glFramebufferTexture1D(GLenum  a, GLenum  b, GLenum  c, GLuint  d, GLint  e) {
	interceptor::getCurrentExt()->glFramebufferTexture1D(a,b,c,d,e);
}
inline void glFramebufferTexture2D(GLenum  a, GLenum  b, GLenum  c, GLuint  d, GLint  e) {
	interceptor::getCurrentExt()->glFramebufferTexture2D(a,b,c,d,e);
}
inline void glFramebufferTexture3D(GLenum  a, GLenum  b, GLenum  c, GLuint  d, GLint  e, GLint  f) {
	interceptor::getCurrentExt()->glFramebufferTexture3D(a,b,c,d,e,f);
}
inline void glFramebufferRenderbuffer(GLenum  a, GLenum  b, GLenum  c, GLuint  d) {
	interceptor::getCurrentExt()->glFramebufferRenderbuffer(a,b,c,d);
}
inline void glGetFramebufferAttachmentParameteriv(GLenum  a, GLenum  b, GLenum  c, GLint *d) {
	interceptor::getCurrentExt()->glGetFramebufferAttachmentParameteriv(a,b,c,d);
}
inline void glGenerateMipmap(GLenum  a) {
	interceptor::getCurrentExt()->glGenerateMipmap(a);
}
inline void glBlitFramebuffer(GLint  a, GLint  b, GLint  c, GLint  d, GLint  e, GLint  f, GLint  g, GLint  h, GLbitfield  i, GLenum  j) {
	interceptor::getCurrentExt()->glBlitFramebuffer(a,b,c,d,e,f,g,h,i,j);
}
inline void glRenderbufferStorageMultisample(GLenum  a, GLsizei  b, GLenum  c, GLsizei  d, GLsizei  e) {
	interceptor::getCurrentExt()->glRenderbufferStorageMultisample(a,b,c,d,e);
}
inline void glFramebufferTextureLayer(GLenum  a, GLenum  b, GLuint  c, GLint  d, GLint  e) {
	interceptor::getCurrentExt()->glFramebufferTextureLayer(a,b,c,d,e);
}
inline void * glMapBufferRange(GLenum  a, GLintptr  b, GLsizeiptr  c, GLbitfield  d) {
	return interceptor::getCurrentExt()->glMapBufferRange(a,b,c,d);
}
inline void glFlushMappedBufferRange(GLenum  a, GLintptr  b, GLsizeiptr  c) {
	interceptor::getCurrentExt()->glFlushMappedBufferRange(a,b,c);
}
inline void glBindVertexArray(GLuint  a) {
	interceptor::getCurrentExt()->glBindVertexArray(a);
}
inline void glDeleteVertexArrays(GLsizei  a, const GLuint *b) {
	interceptor::getCurrentExt()->glDeleteVertexArrays(a,b);
}
inline void glGenVertexArrays(GLsizei  a, GLuint *b) {
	interceptor::getCurrentExt()->glGenVertexArrays(a,b);
}
inline GLboolean glIsVertexArray(GLuint  a) {
	return interceptor::getCurrentExt()->glIsVertexArray(a);
}
inline void glDrawArraysInstanced(GLenum  a, GLint  b, GLsizei  c, GLsizei  d) {
	interceptor::getCurrentExt()->glDrawArraysInstanced(a,b,c,d);
}
inline void glDrawElementsInstanced(GLenum  a, GLsizei  b, GLenum  c, const void *d, GLsizei  e) {
	interceptor::getCurrentExt()->glDrawElementsInstanced(a,b,c,d,e);
}
inline void glTexBuffer(GLenum  a, GLenum  b, GLuint  c) {
	interceptor::getCurrentExt()->glTexBuffer(a,b,c);
}
inline void glPrimitiveRestartIndex(GLuint  a) {
	interceptor::getCurrentExt()->glPrimitiveRestartIndex(a);
}
inline void glCopyBufferSubData(GLenum  a, GLenum  b, GLintptr  c, GLintptr  d, GLsizeiptr  e) {
	interceptor::getCurrentExt()->glCopyBufferSubData(a,b,c,d,e);
}
inline void glGetUniformIndices(GLuint  a, GLsizei  b, const GLchar *const*c, GLuint *d) {
	interceptor::getCurrentExt()->glGetUniformIndices(a,b,c,d);
}
inline void glGetActiveUniformsiv(GLuint  a, GLsizei  b, const GLuint *c, GLenum  d, GLint *e) {
	interceptor::getCurrentExt()->glGetActiveUniformsiv(a,b,c,d,e);
}
inline void glGetActiveUniformName(GLuint  a, GLuint  b, GLsizei  c, GLsizei *d, GLchar *e) {
	interceptor::getCurrentExt()->glGetActiveUniformName(a,b,c,d,e);
}
inline GLuint glGetUniformBlockIndex(GLuint  a, const GLchar *b) {
	return interceptor::getCurrentExt()->glGetUniformBlockIndex(a,b);
}
inline void glGetActiveUniformBlockiv(GLuint  a, GLuint  b, GLenum  c, GLint *d) {
	interceptor::getCurrentExt()->glGetActiveUniformBlockiv(a,b,c,d);
}
inline void glGetActiveUniformBlockName(GLuint  a, GLuint  b, GLsizei  c, GLsizei *d, GLchar *e) {
	interceptor::getCurrentExt()->glGetActiveUniformBlockName(a,b,c,d,e);
}
inline void glUniformBlockBinding(GLuint  a, GLuint  b, GLuint  c) {
	interceptor::getCurrentExt()->glUniformBlockBinding(a,b,c);
}
inline void glDrawElementsBaseVertex(GLenum  a, GLsizei  b, GLenum  c, const void *d, GLint  e) {
	interceptor::getCurrentExt()->glDrawElementsBaseVertex(a,b,c,d,e);
}
inline void glDrawRangeElementsBaseVertex(GLenum  a, GLuint  b, GLuint  c, GLsizei  d, GLenum  e, const void *f, GLint  g) {
	interceptor::getCurrentExt()->glDrawRangeElementsBaseVertex(a,b,c,d,e,f,g);
}
inline void glDrawElementsInstancedBaseVertex(GLenum  a, GLsizei  b, GLenum  c, const void *d, GLsizei  e, GLint  f) {
	interceptor::getCurrentExt()->glDrawElementsInstancedBaseVertex(a,b,c,d,e,f);
}
inline void glMultiDrawElementsBaseVertex(GLenum  a, const GLsizei *b, GLenum  c, const void *const*d, GLsizei  e, const GLint *f) {
	interceptor::getCurrentExt()->glMultiDrawElementsBaseVertex(a,b,c,d,e,f);
}
inline void glProvokingVertex(GLenum  a) {
	interceptor::getCurrentExt()->glProvokingVertex(a);
}
inline GLsync glFenceSync(GLenum  a, GLbitfield  b) {
	return interceptor::getCurrentExt()->glFenceSync(a,b);
}
inline GLboolean glIsSync(GLsync  a) {
	return interceptor::getCurrentExt()->glIsSync(a);
}
inline void glDeleteSync(GLsync  a) {
	interceptor::getCurrentExt()->glDeleteSync(a);
}
inline GLenum glClientWaitSync(GLsync  a, GLbitfield  b, GLuint64  c) {
	return interceptor::getCurrentExt()->glClientWaitSync(a,b,c);
}
inline void glWaitSync(GLsync  a, GLbitfield  b, GLuint64  c) {
	interceptor::getCurrentExt()->glWaitSync(a,b,c);
}
inline void glGetInteger64v(GLenum  a, GLint64 *b) {
	interceptor::getCurrentExt()->glGetInteger64v(a,b);
}
inline void glGetSynciv(GLsync  a, GLenum  b, GLsizei  c, GLsizei *d, GLint *e) {
	interceptor::getCurrentExt()->glGetSynciv(a,b,c,d,e);
}
inline void glGetInteger64i_v(GLenum  a, GLuint  b, GLint64 *c) {
	interceptor::getCurrentExt()->glGetInteger64i_v(a,b,c);
}
inline void glGetBufferParameteri64v(GLenum  a, GLenum  b, GLint64 *c) {
	interceptor::getCurrentExt()->glGetBufferParameteri64v(a,b,c);
}
inline void glFramebufferTexture(GLenum  a, GLenum  b, GLuint  c, GLint  d) {
	interceptor::getCurrentExt()->glFramebufferTexture(a,b,c,d);
}
inline void glTexImage2DMultisample(GLenum  a, GLsizei  b, GLenum  c, GLsizei  d, GLsizei  e, GLboolean  f) {
	interceptor::getCurrentExt()->glTexImage2DMultisample(a,b,c,d,e,f);
}
inline void glTexImage3DMultisample(GLenum  a, GLsizei  b, GLenum  c, GLsizei  d, GLsizei  e, GLsizei  f, GLboolean  g) {
	interceptor::getCurrentExt()->glTexImage3DMultisample(a,b,c,d,e,f,g);
}
inline void glGetMultisamplefv(GLenum  a, GLuint  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetMultisamplefv(a,b,c);
}
inline void glSampleMaski(GLuint  a, GLbitfield  b) {
	interceptor::getCurrentExt()->glSampleMaski(a,b);
}
inline void glBindFragDataLocationIndexed(GLuint  a, GLuint  b, GLuint  c, const GLchar *d) {
	interceptor::getCurrentExt()->glBindFragDataLocationIndexed(a,b,c,d);
}
inline GLint glGetFragDataIndex(GLuint  a, const GLchar *b) {
	return interceptor::getCurrentExt()->glGetFragDataIndex(a,b);
}
inline void glGenSamplers(GLsizei  a, GLuint *b) {
	interceptor::getCurrentExt()->glGenSamplers(a,b);
}
inline void glDeleteSamplers(GLsizei  a, const GLuint *b) {
	interceptor::getCurrentExt()->glDeleteSamplers(a,b);
}
inline GLboolean glIsSampler(GLuint  a) {
	return interceptor::getCurrentExt()->glIsSampler(a);
}
inline void glBindSampler(GLuint  a, GLuint  b) {
	interceptor::getCurrentExt()->glBindSampler(a,b);
}
inline void glSamplerParameteri(GLuint  a, GLenum  b, GLint  c) {
	interceptor::getCurrentExt()->glSamplerParameteri(a,b,c);
}
inline void glSamplerParameteriv(GLuint  a, GLenum  b, const GLint *c) {
	interceptor::getCurrentExt()->glSamplerParameteriv(a,b,c);
}
inline void glSamplerParameterf(GLuint  a, GLenum  b, GLfloat  c) {
	interceptor::getCurrentExt()->glSamplerParameterf(a,b,c);
}
inline void glSamplerParameterfv(GLuint  a, GLenum  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glSamplerParameterfv(a,b,c);
}
inline void glSamplerParameterIiv(GLuint  a, GLenum  b, const GLint *c) {
	interceptor::getCurrentExt()->glSamplerParameterIiv(a,b,c);
}
inline void glSamplerParameterIuiv(GLuint  a, GLenum  b, const GLuint *c) {
	interceptor::getCurrentExt()->glSamplerParameterIuiv(a,b,c);
}
inline void glGetSamplerParameteriv(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetSamplerParameteriv(a,b,c);
}
inline void glGetSamplerParameterIiv(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetSamplerParameterIiv(a,b,c);
}
inline void glGetSamplerParameterfv(GLuint  a, GLenum  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetSamplerParameterfv(a,b,c);
}
inline void glGetSamplerParameterIuiv(GLuint  a, GLenum  b, GLuint *c) {
	interceptor::getCurrentExt()->glGetSamplerParameterIuiv(a,b,c);
}
inline void glQueryCounter(GLuint  a, GLenum  b) {
	interceptor::getCurrentExt()->glQueryCounter(a,b);
}
inline void glGetQueryObjecti64v(GLuint  a, GLenum  b, GLint64 *c) {
	interceptor::getCurrentExt()->glGetQueryObjecti64v(a,b,c);
}
inline void glGetQueryObjectui64v(GLuint  a, GLenum  b, GLuint64 *c) {
	interceptor::getCurrentExt()->glGetQueryObjectui64v(a,b,c);
}
inline void glVertexAttribDivisor(GLuint  a, GLuint  b) {
	interceptor::getCurrentExt()->glVertexAttribDivisor(a,b);
}
inline void glVertexAttribP1ui(GLuint  a, GLenum  b, GLboolean  c, GLuint  d) {
	interceptor::getCurrentExt()->glVertexAttribP1ui(a,b,c,d);
}
inline void glVertexAttribP1uiv(GLuint  a, GLenum  b, GLboolean  c, const GLuint *d) {
	interceptor::getCurrentExt()->glVertexAttribP1uiv(a,b,c,d);
}
inline void glVertexAttribP2ui(GLuint  a, GLenum  b, GLboolean  c, GLuint  d) {
	interceptor::getCurrentExt()->glVertexAttribP2ui(a,b,c,d);
}
inline void glVertexAttribP2uiv(GLuint  a, GLenum  b, GLboolean  c, const GLuint *d) {
	interceptor::getCurrentExt()->glVertexAttribP2uiv(a,b,c,d);
}
inline void glVertexAttribP3ui(GLuint  a, GLenum  b, GLboolean  c, GLuint  d) {
	interceptor::getCurrentExt()->glVertexAttribP3ui(a,b,c,d);
}
inline void glVertexAttribP3uiv(GLuint  a, GLenum  b, GLboolean  c, const GLuint *d) {
	interceptor::getCurrentExt()->glVertexAttribP3uiv(a,b,c,d);
}
inline void glVertexAttribP4ui(GLuint  a, GLenum  b, GLboolean  c, GLuint  d) {
	interceptor::getCurrentExt()->glVertexAttribP4ui(a,b,c,d);
}
inline void glVertexAttribP4uiv(GLuint  a, GLenum  b, GLboolean  c, const GLuint *d) {
	interceptor::getCurrentExt()->glVertexAttribP4uiv(a,b,c,d);
}
inline void glVertexP2ui(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glVertexP2ui(a,b);
}
inline void glVertexP2uiv(GLenum  a, const GLuint *b) {
	interceptor::getCurrentExt()->glVertexP2uiv(a,b);
}
inline void glVertexP3ui(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glVertexP3ui(a,b);
}
inline void glVertexP3uiv(GLenum  a, const GLuint *b) {
	interceptor::getCurrentExt()->glVertexP3uiv(a,b);
}
inline void glVertexP4ui(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glVertexP4ui(a,b);
}
inline void glVertexP4uiv(GLenum  a, const GLuint *b) {
	interceptor::getCurrentExt()->glVertexP4uiv(a,b);
}
inline void glTexCoordP1ui(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glTexCoordP1ui(a,b);
}
inline void glTexCoordP1uiv(GLenum  a, const GLuint *b) {
	interceptor::getCurrentExt()->glTexCoordP1uiv(a,b);
}
inline void glTexCoordP2ui(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glTexCoordP2ui(a,b);
}
inline void glTexCoordP2uiv(GLenum  a, const GLuint *b) {
	interceptor::getCurrentExt()->glTexCoordP2uiv(a,b);
}
inline void glTexCoordP3ui(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glTexCoordP3ui(a,b);
}
inline void glTexCoordP3uiv(GLenum  a, const GLuint *b) {
	interceptor::getCurrentExt()->glTexCoordP3uiv(a,b);
}
inline void glTexCoordP4ui(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glTexCoordP4ui(a,b);
}
inline void glTexCoordP4uiv(GLenum  a, const GLuint *b) {
	interceptor::getCurrentExt()->glTexCoordP4uiv(a,b);
}
inline void glMultiTexCoordP1ui(GLenum  a, GLenum  b, GLuint  c) {
	interceptor::getCurrentExt()->glMultiTexCoordP1ui(a,b,c);
}
inline void glMultiTexCoordP1uiv(GLenum  a, GLenum  b, const GLuint *c) {
	interceptor::getCurrentExt()->glMultiTexCoordP1uiv(a,b,c);
}
inline void glMultiTexCoordP2ui(GLenum  a, GLenum  b, GLuint  c) {
	interceptor::getCurrentExt()->glMultiTexCoordP2ui(a,b,c);
}
inline void glMultiTexCoordP2uiv(GLenum  a, GLenum  b, const GLuint *c) {
	interceptor::getCurrentExt()->glMultiTexCoordP2uiv(a,b,c);
}
inline void glMultiTexCoordP3ui(GLenum  a, GLenum  b, GLuint  c) {
	interceptor::getCurrentExt()->glMultiTexCoordP3ui(a,b,c);
}
inline void glMultiTexCoordP3uiv(GLenum  a, GLenum  b, const GLuint *c) {
	interceptor::getCurrentExt()->glMultiTexCoordP3uiv(a,b,c);
}
inline void glMultiTexCoordP4ui(GLenum  a, GLenum  b, GLuint  c) {
	interceptor::getCurrentExt()->glMultiTexCoordP4ui(a,b,c);
}
inline void glMultiTexCoordP4uiv(GLenum  a, GLenum  b, const GLuint *c) {
	interceptor::getCurrentExt()->glMultiTexCoordP4uiv(a,b,c);
}
inline void glNormalP3ui(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glNormalP3ui(a,b);
}
inline void glNormalP3uiv(GLenum  a, const GLuint *b) {
	interceptor::getCurrentExt()->glNormalP3uiv(a,b);
}
inline void glColorP3ui(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glColorP3ui(a,b);
}
inline void glColorP3uiv(GLenum  a, const GLuint *b) {
	interceptor::getCurrentExt()->glColorP3uiv(a,b);
}
inline void glColorP4ui(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glColorP4ui(a,b);
}
inline void glColorP4uiv(GLenum  a, const GLuint *b) {
	interceptor::getCurrentExt()->glColorP4uiv(a,b);
}
inline void glSecondaryColorP3ui(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glSecondaryColorP3ui(a,b);
}
inline void glSecondaryColorP3uiv(GLenum  a, const GLuint *b) {
	interceptor::getCurrentExt()->glSecondaryColorP3uiv(a,b);
}
inline void glMinSampleShading(GLfloat  a) {
	interceptor::getCurrentExt()->glMinSampleShading(a);
}
inline void glBlendEquationi(GLuint  a, GLenum  b) {
	interceptor::getCurrentExt()->glBlendEquationi(a,b);
}
inline void glBlendEquationSeparatei(GLuint  a, GLenum  b, GLenum  c) {
	interceptor::getCurrentExt()->glBlendEquationSeparatei(a,b,c);
}
inline void glBlendFunci(GLuint  a, GLenum  b, GLenum  c) {
	interceptor::getCurrentExt()->glBlendFunci(a,b,c);
}
inline void glBlendFuncSeparatei(GLuint  a, GLenum  b, GLenum  c, GLenum  d, GLenum  e) {
	interceptor::getCurrentExt()->glBlendFuncSeparatei(a,b,c,d,e);
}
inline void glDrawArraysIndirect(GLenum  a, const void *b) {
	interceptor::getCurrentExt()->glDrawArraysIndirect(a,b);
}
inline void glDrawElementsIndirect(GLenum  a, GLenum  b, const void *c) {
	interceptor::getCurrentExt()->glDrawElementsIndirect(a,b,c);
}
inline void glUniform1d(GLint  a, GLdouble  b) {
	interceptor::getCurrentExt()->glUniform1d(a,b);
}
inline void glUniform2d(GLint  a, GLdouble  b, GLdouble  c) {
	interceptor::getCurrentExt()->glUniform2d(a,b,c);
}
inline void glUniform3d(GLint  a, GLdouble  b, GLdouble  c, GLdouble  d) {
	interceptor::getCurrentExt()->glUniform3d(a,b,c,d);
}
inline void glUniform4d(GLint  a, GLdouble  b, GLdouble  c, GLdouble  d, GLdouble  e) {
	interceptor::getCurrentExt()->glUniform4d(a,b,c,d,e);
}
inline void glUniform1dv(GLint  a, GLsizei  b, const GLdouble *c) {
	interceptor::getCurrentExt()->glUniform1dv(a,b,c);
}
inline void glUniform2dv(GLint  a, GLsizei  b, const GLdouble *c) {
	interceptor::getCurrentExt()->glUniform2dv(a,b,c);
}
inline void glUniform3dv(GLint  a, GLsizei  b, const GLdouble *c) {
	interceptor::getCurrentExt()->glUniform3dv(a,b,c);
}
inline void glUniform4dv(GLint  a, GLsizei  b, const GLdouble *c) {
	interceptor::getCurrentExt()->glUniform4dv(a,b,c);
}
inline void glUniformMatrix2dv(GLint  a, GLsizei  b, GLboolean  c, const GLdouble *d) {
	interceptor::getCurrentExt()->glUniformMatrix2dv(a,b,c,d);
}
inline void glUniformMatrix3dv(GLint  a, GLsizei  b, GLboolean  c, const GLdouble *d) {
	interceptor::getCurrentExt()->glUniformMatrix3dv(a,b,c,d);
}
inline void glUniformMatrix4dv(GLint  a, GLsizei  b, GLboolean  c, const GLdouble *d) {
	interceptor::getCurrentExt()->glUniformMatrix4dv(a,b,c,d);
}
inline void glUniformMatrix2x3dv(GLint  a, GLsizei  b, GLboolean  c, const GLdouble *d) {
	interceptor::getCurrentExt()->glUniformMatrix2x3dv(a,b,c,d);
}
inline void glUniformMatrix2x4dv(GLint  a, GLsizei  b, GLboolean  c, const GLdouble *d) {
	interceptor::getCurrentExt()->glUniformMatrix2x4dv(a,b,c,d);
}
inline void glUniformMatrix3x2dv(GLint  a, GLsizei  b, GLboolean  c, const GLdouble *d) {
	interceptor::getCurrentExt()->glUniformMatrix3x2dv(a,b,c,d);
}
inline void glUniformMatrix3x4dv(GLint  a, GLsizei  b, GLboolean  c, const GLdouble *d) {
	interceptor::getCurrentExt()->glUniformMatrix3x4dv(a,b,c,d);
}
inline void glUniformMatrix4x2dv(GLint  a, GLsizei  b, GLboolean  c, const GLdouble *d) {
	interceptor::getCurrentExt()->glUniformMatrix4x2dv(a,b,c,d);
}
inline void glUniformMatrix4x3dv(GLint  a, GLsizei  b, GLboolean  c, const GLdouble *d) {
	interceptor::getCurrentExt()->glUniformMatrix4x3dv(a,b,c,d);
}
inline void glGetUniformdv(GLuint  a, GLint  b, GLdouble *c) {
	interceptor::getCurrentExt()->glGetUniformdv(a,b,c);
}
inline GLint glGetSubroutineUniformLocation(GLuint  a, GLenum  b, const GLchar *c) {
	return interceptor::getCurrentExt()->glGetSubroutineUniformLocation(a,b,c);
}
inline GLuint glGetSubroutineIndex(GLuint  a, GLenum  b, const GLchar *c) {
	return interceptor::getCurrentExt()->glGetSubroutineIndex(a,b,c);
}
inline void glGetActiveSubroutineUniformiv(GLuint  a, GLenum  b, GLuint  c, GLenum  d, GLint *e) {
	interceptor::getCurrentExt()->glGetActiveSubroutineUniformiv(a,b,c,d,e);
}
inline void glGetActiveSubroutineUniformName(GLuint  a, GLenum  b, GLuint  c, GLsizei  d, GLsizei *e, GLchar *f) {
	interceptor::getCurrentExt()->glGetActiveSubroutineUniformName(a,b,c,d,e,f);
}
inline void glGetActiveSubroutineName(GLuint  a, GLenum  b, GLuint  c, GLsizei  d, GLsizei *e, GLchar *f) {
	interceptor::getCurrentExt()->glGetActiveSubroutineName(a,b,c,d,e,f);
}
inline void glUniformSubroutinesuiv(GLenum  a, GLsizei  b, const GLuint *c) {
	interceptor::getCurrentExt()->glUniformSubroutinesuiv(a,b,c);
}
inline void glGetUniformSubroutineuiv(GLenum  a, GLint  b, GLuint *c) {
	interceptor::getCurrentExt()->glGetUniformSubroutineuiv(a,b,c);
}
inline void glGetProgramStageiv(GLuint  a, GLenum  b, GLenum  c, GLint *d) {
	interceptor::getCurrentExt()->glGetProgramStageiv(a,b,c,d);
}
inline void glPatchParameteri(GLenum  a, GLint  b) {
	interceptor::getCurrentExt()->glPatchParameteri(a,b);
}
inline void glPatchParameterfv(GLenum  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glPatchParameterfv(a,b);
}
inline void glBindTransformFeedback(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glBindTransformFeedback(a,b);
}
inline void glDeleteTransformFeedbacks(GLsizei  a, const GLuint *b) {
	interceptor::getCurrentExt()->glDeleteTransformFeedbacks(a,b);
}
inline void glGenTransformFeedbacks(GLsizei  a, GLuint *b) {
	interceptor::getCurrentExt()->glGenTransformFeedbacks(a,b);
}
inline GLboolean glIsTransformFeedback(GLuint  a) {
	return interceptor::getCurrentExt()->glIsTransformFeedback(a);
}
inline void glPauseTransformFeedback(void) {
	interceptor::getCurrentExt()->glPauseTransformFeedback();
}
inline void glResumeTransformFeedback(void) {
	interceptor::getCurrentExt()->glResumeTransformFeedback();
}
inline void glDrawTransformFeedback(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glDrawTransformFeedback(a,b);
}
inline void glDrawTransformFeedbackStream(GLenum  a, GLuint  b, GLuint  c) {
	interceptor::getCurrentExt()->glDrawTransformFeedbackStream(a,b,c);
}
inline void glBeginQueryIndexed(GLenum  a, GLuint  b, GLuint  c) {
	interceptor::getCurrentExt()->glBeginQueryIndexed(a,b,c);
}
inline void glEndQueryIndexed(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glEndQueryIndexed(a,b);
}
inline void glGetQueryIndexediv(GLenum  a, GLuint  b, GLenum  c, GLint *d) {
	interceptor::getCurrentExt()->glGetQueryIndexediv(a,b,c,d);
}
inline void glReleaseShaderCompiler(void) {
	interceptor::getCurrentExt()->glReleaseShaderCompiler();
}
inline void glShaderBinary(GLsizei  a, const GLuint *b, GLenum  c, const void *d, GLsizei  e) {
	interceptor::getCurrentExt()->glShaderBinary(a,b,c,d,e);
}
inline void glGetShaderPrecisionFormat(GLenum  a, GLenum  b, GLint *c, GLint *d) {
	interceptor::getCurrentExt()->glGetShaderPrecisionFormat(a,b,c,d);
}
inline void glDepthRangef(GLfloat  a, GLfloat  b) {
	interceptor::getCurrentExt()->glDepthRangef(a,b);
}
inline void glClearDepthf(GLfloat  a) {
	interceptor::getCurrentExt()->glClearDepthf(a);
}
inline void glGetProgramBinary(GLuint  a, GLsizei  b, GLsizei *c, GLenum *d, void *e) {
	interceptor::getCurrentExt()->glGetProgramBinary(a,b,c,d,e);
}
inline void glProgramBinary(GLuint  a, GLenum  b, const void *c, GLsizei  d) {
	interceptor::getCurrentExt()->glProgramBinary(a,b,c,d);
}
inline void glProgramParameteri(GLuint  a, GLenum  b, GLint  c) {
	interceptor::getCurrentExt()->glProgramParameteri(a,b,c);
}
inline void glUseProgramStages(GLuint  a, GLbitfield  b, GLuint  c) {
	interceptor::getCurrentExt()->glUseProgramStages(a,b,c);
}
inline void glActiveShaderProgram(GLuint  a, GLuint  b) {
	interceptor::getCurrentExt()->glActiveShaderProgram(a,b);
}
inline GLuint glCreateShaderProgramv(GLenum  a, GLsizei  b, const GLchar *const*c) {
	return interceptor::getCurrentExt()->glCreateShaderProgramv(a,b,c);
}
inline void glBindProgramPipeline(GLuint  a) {
	interceptor::getCurrentExt()->glBindProgramPipeline(a);
}
inline void glDeleteProgramPipelines(GLsizei  a, const GLuint *b) {
	interceptor::getCurrentExt()->glDeleteProgramPipelines(a,b);
}
inline void glGenProgramPipelines(GLsizei  a, GLuint *b) {
	interceptor::getCurrentExt()->glGenProgramPipelines(a,b);
}
inline GLboolean glIsProgramPipeline(GLuint  a) {
	return interceptor::getCurrentExt()->glIsProgramPipeline(a);
}
inline void glGetProgramPipelineiv(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetProgramPipelineiv(a,b,c);
}
inline void glProgramUniform1i(GLuint  a, GLint  b, GLint  c) {
	interceptor::getCurrentExt()->glProgramUniform1i(a,b,c);
}
inline void glProgramUniform1iv(GLuint  a, GLint  b, GLsizei  c, const GLint *d) {
	interceptor::getCurrentExt()->glProgramUniform1iv(a,b,c,d);
}
inline void glProgramUniform1f(GLuint  a, GLint  b, GLfloat  c) {
	interceptor::getCurrentExt()->glProgramUniform1f(a,b,c);
}
inline void glProgramUniform1fv(GLuint  a, GLint  b, GLsizei  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glProgramUniform1fv(a,b,c,d);
}
inline void glProgramUniform1d(GLuint  a, GLint  b, GLdouble  c) {
	interceptor::getCurrentExt()->glProgramUniform1d(a,b,c);
}
inline void glProgramUniform1dv(GLuint  a, GLint  b, GLsizei  c, const GLdouble *d) {
	interceptor::getCurrentExt()->glProgramUniform1dv(a,b,c,d);
}
inline void glProgramUniform1ui(GLuint  a, GLint  b, GLuint  c) {
	interceptor::getCurrentExt()->glProgramUniform1ui(a,b,c);
}
inline void glProgramUniform1uiv(GLuint  a, GLint  b, GLsizei  c, const GLuint *d) {
	interceptor::getCurrentExt()->glProgramUniform1uiv(a,b,c,d);
}
inline void glProgramUniform2i(GLuint  a, GLint  b, GLint  c, GLint  d) {
	interceptor::getCurrentExt()->glProgramUniform2i(a,b,c,d);
}
inline void glProgramUniform2iv(GLuint  a, GLint  b, GLsizei  c, const GLint *d) {
	interceptor::getCurrentExt()->glProgramUniform2iv(a,b,c,d);
}
inline void glProgramUniform2f(GLuint  a, GLint  b, GLfloat  c, GLfloat  d) {
	interceptor::getCurrentExt()->glProgramUniform2f(a,b,c,d);
}
inline void glProgramUniform2fv(GLuint  a, GLint  b, GLsizei  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glProgramUniform2fv(a,b,c,d);
}
inline void glProgramUniform2d(GLuint  a, GLint  b, GLdouble  c, GLdouble  d) {
	interceptor::getCurrentExt()->glProgramUniform2d(a,b,c,d);
}
inline void glProgramUniform2dv(GLuint  a, GLint  b, GLsizei  c, const GLdouble *d) {
	interceptor::getCurrentExt()->glProgramUniform2dv(a,b,c,d);
}
inline void glProgramUniform2ui(GLuint  a, GLint  b, GLuint  c, GLuint  d) {
	interceptor::getCurrentExt()->glProgramUniform2ui(a,b,c,d);
}
inline void glProgramUniform2uiv(GLuint  a, GLint  b, GLsizei  c, const GLuint *d) {
	interceptor::getCurrentExt()->glProgramUniform2uiv(a,b,c,d);
}
inline void glProgramUniform3i(GLuint  a, GLint  b, GLint  c, GLint  d, GLint  e) {
	interceptor::getCurrentExt()->glProgramUniform3i(a,b,c,d,e);
}
inline void glProgramUniform3iv(GLuint  a, GLint  b, GLsizei  c, const GLint *d) {
	interceptor::getCurrentExt()->glProgramUniform3iv(a,b,c,d);
}
inline void glProgramUniform3f(GLuint  a, GLint  b, GLfloat  c, GLfloat  d, GLfloat  e) {
	interceptor::getCurrentExt()->glProgramUniform3f(a,b,c,d,e);
}
inline void glProgramUniform3fv(GLuint  a, GLint  b, GLsizei  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glProgramUniform3fv(a,b,c,d);
}
inline void glProgramUniform3d(GLuint  a, GLint  b, GLdouble  c, GLdouble  d, GLdouble  e) {
	interceptor::getCurrentExt()->glProgramUniform3d(a,b,c,d,e);
}
inline void glProgramUniform3dv(GLuint  a, GLint  b, GLsizei  c, const GLdouble *d) {
	interceptor::getCurrentExt()->glProgramUniform3dv(a,b,c,d);
}
inline void glProgramUniform3ui(GLuint  a, GLint  b, GLuint  c, GLuint  d, GLuint  e) {
	interceptor::getCurrentExt()->glProgramUniform3ui(a,b,c,d,e);
}
inline void glProgramUniform3uiv(GLuint  a, GLint  b, GLsizei  c, const GLuint *d) {
	interceptor::getCurrentExt()->glProgramUniform3uiv(a,b,c,d);
}
inline void glProgramUniform4i(GLuint  a, GLint  b, GLint  c, GLint  d, GLint  e, GLint  f) {
	interceptor::getCurrentExt()->glProgramUniform4i(a,b,c,d,e,f);
}
inline void glProgramUniform4iv(GLuint  a, GLint  b, GLsizei  c, const GLint *d) {
	interceptor::getCurrentExt()->glProgramUniform4iv(a,b,c,d);
}
inline void glProgramUniform4f(GLuint  a, GLint  b, GLfloat  c, GLfloat  d, GLfloat  e, GLfloat  f) {
	interceptor::getCurrentExt()->glProgramUniform4f(a,b,c,d,e,f);
}
inline void glProgramUniform4fv(GLuint  a, GLint  b, GLsizei  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glProgramUniform4fv(a,b,c,d);
}
inline void glProgramUniform4d(GLuint  a, GLint  b, GLdouble  c, GLdouble  d, GLdouble  e, GLdouble  f) {
	interceptor::getCurrentExt()->glProgramUniform4d(a,b,c,d,e,f);
}
inline void glProgramUniform4dv(GLuint  a, GLint  b, GLsizei  c, const GLdouble *d) {
	interceptor::getCurrentExt()->glProgramUniform4dv(a,b,c,d);
}
inline void glProgramUniform4ui(GLuint  a, GLint  b, GLuint  c, GLuint  d, GLuint  e, GLuint  f) {
	interceptor::getCurrentExt()->glProgramUniform4ui(a,b,c,d,e,f);
}
inline void glProgramUniform4uiv(GLuint  a, GLint  b, GLsizei  c, const GLuint *d) {
	interceptor::getCurrentExt()->glProgramUniform4uiv(a,b,c,d);
}
inline void glProgramUniformMatrix2fv(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLfloat *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix2fv(a,b,c,d,e);
}
inline void glProgramUniformMatrix3fv(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLfloat *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix3fv(a,b,c,d,e);
}
inline void glProgramUniformMatrix4fv(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLfloat *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix4fv(a,b,c,d,e);
}
inline void glProgramUniformMatrix2dv(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLdouble *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix2dv(a,b,c,d,e);
}
inline void glProgramUniformMatrix3dv(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLdouble *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix3dv(a,b,c,d,e);
}
inline void glProgramUniformMatrix4dv(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLdouble *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix4dv(a,b,c,d,e);
}
inline void glProgramUniformMatrix2x3fv(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLfloat *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix2x3fv(a,b,c,d,e);
}
inline void glProgramUniformMatrix3x2fv(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLfloat *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix3x2fv(a,b,c,d,e);
}
inline void glProgramUniformMatrix2x4fv(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLfloat *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix2x4fv(a,b,c,d,e);
}
inline void glProgramUniformMatrix4x2fv(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLfloat *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix4x2fv(a,b,c,d,e);
}
inline void glProgramUniformMatrix3x4fv(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLfloat *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix3x4fv(a,b,c,d,e);
}
inline void glProgramUniformMatrix4x3fv(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLfloat *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix4x3fv(a,b,c,d,e);
}
inline void glProgramUniformMatrix2x3dv(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLdouble *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix2x3dv(a,b,c,d,e);
}
inline void glProgramUniformMatrix3x2dv(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLdouble *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix3x2dv(a,b,c,d,e);
}
inline void glProgramUniformMatrix2x4dv(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLdouble *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix2x4dv(a,b,c,d,e);
}
inline void glProgramUniformMatrix4x2dv(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLdouble *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix4x2dv(a,b,c,d,e);
}
inline void glProgramUniformMatrix3x4dv(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLdouble *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix3x4dv(a,b,c,d,e);
}
inline void glProgramUniformMatrix4x3dv(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLdouble *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix4x3dv(a,b,c,d,e);
}
inline void glValidateProgramPipeline(GLuint  a) {
	interceptor::getCurrentExt()->glValidateProgramPipeline(a);
}
inline void glGetProgramPipelineInfoLog(GLuint  a, GLsizei  b, GLsizei *c, GLchar *d) {
	interceptor::getCurrentExt()->glGetProgramPipelineInfoLog(a,b,c,d);
}
inline void glVertexAttribL1d(GLuint  a, GLdouble  b) {
	interceptor::getCurrentExt()->glVertexAttribL1d(a,b);
}
inline void glVertexAttribL2d(GLuint  a, GLdouble  b, GLdouble  c) {
	interceptor::getCurrentExt()->glVertexAttribL2d(a,b,c);
}
inline void glVertexAttribL3d(GLuint  a, GLdouble  b, GLdouble  c, GLdouble  d) {
	interceptor::getCurrentExt()->glVertexAttribL3d(a,b,c,d);
}
inline void glVertexAttribL4d(GLuint  a, GLdouble  b, GLdouble  c, GLdouble  d, GLdouble  e) {
	interceptor::getCurrentExt()->glVertexAttribL4d(a,b,c,d,e);
}
inline void glVertexAttribL1dv(GLuint  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glVertexAttribL1dv(a,b);
}
inline void glVertexAttribL2dv(GLuint  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glVertexAttribL2dv(a,b);
}
inline void glVertexAttribL3dv(GLuint  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glVertexAttribL3dv(a,b);
}
inline void glVertexAttribL4dv(GLuint  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glVertexAttribL4dv(a,b);
}
inline void glVertexAttribLPointer(GLuint  a, GLint  b, GLenum  c, GLsizei  d, const void *e) {
	interceptor::getCurrentExt()->glVertexAttribLPointer(a,b,c,d,e);
}
inline void glGetVertexAttribLdv(GLuint  a, GLenum  b, GLdouble *c) {
	interceptor::getCurrentExt()->glGetVertexAttribLdv(a,b,c);
}
inline void glViewportArrayv(GLuint  a, GLsizei  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glViewportArrayv(a,b,c);
}
inline void glViewportIndexedf(GLuint  a, GLfloat  b, GLfloat  c, GLfloat  d, GLfloat  e) {
	interceptor::getCurrentExt()->glViewportIndexedf(a,b,c,d,e);
}
inline void glViewportIndexedfv(GLuint  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glViewportIndexedfv(a,b);
}
inline void glScissorArrayv(GLuint  a, GLsizei  b, const GLint *c) {
	interceptor::getCurrentExt()->glScissorArrayv(a,b,c);
}
inline void glScissorIndexed(GLuint  a, GLint  b, GLint  c, GLsizei  d, GLsizei  e) {
	interceptor::getCurrentExt()->glScissorIndexed(a,b,c,d,e);
}
inline void glScissorIndexedv(GLuint  a, const GLint *b) {
	interceptor::getCurrentExt()->glScissorIndexedv(a,b);
}
inline void glDepthRangeArrayv(GLuint  a, GLsizei  b, const GLdouble *c) {
	interceptor::getCurrentExt()->glDepthRangeArrayv(a,b,c);
}
inline void glDepthRangeIndexed(GLuint  a, GLdouble  b, GLdouble  c) {
	interceptor::getCurrentExt()->glDepthRangeIndexed(a,b,c);
}
inline void glGetFloati_v(GLenum  a, GLuint  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetFloati_v(a,b,c);
}
inline void glGetDoublei_v(GLenum  a, GLuint  b, GLdouble *c) {
	interceptor::getCurrentExt()->glGetDoublei_v(a,b,c);
}
inline void glDrawArraysInstancedBaseInstance(GLenum  a, GLint  b, GLsizei  c, GLsizei  d, GLuint  e) {
	interceptor::getCurrentExt()->glDrawArraysInstancedBaseInstance(a,b,c,d,e);
}
inline void glDrawElementsInstancedBaseInstance(GLenum  a, GLsizei  b, GLenum  c, const void *d, GLsizei  e, GLuint  f) {
	interceptor::getCurrentExt()->glDrawElementsInstancedBaseInstance(a,b,c,d,e,f);
}
inline void glDrawElementsInstancedBaseVertexBaseInstance(GLenum  a, GLsizei  b, GLenum  c, const void *d, GLsizei  e, GLint  f, GLuint  g) {
	interceptor::getCurrentExt()->glDrawElementsInstancedBaseVertexBaseInstance(a,b,c,d,e,f,g);
}
inline void glGetInternalformativ(GLenum  a, GLenum  b, GLenum  c, GLsizei  d, GLint *e) {
	interceptor::getCurrentExt()->glGetInternalformativ(a,b,c,d,e);
}
inline void glGetActiveAtomicCounterBufferiv(GLuint  a, GLuint  b, GLenum  c, GLint *d) {
	interceptor::getCurrentExt()->glGetActiveAtomicCounterBufferiv(a,b,c,d);
}
inline void glBindImageTexture(GLuint  a, GLuint  b, GLint  c, GLboolean  d, GLint  e, GLenum  f, GLenum  g) {
	interceptor::getCurrentExt()->glBindImageTexture(a,b,c,d,e,f,g);
}
inline void glMemoryBarrier(GLbitfield  a) {
	interceptor::getCurrentExt()->glMemoryBarrier(a);
}
inline void glTexStorage1D(GLenum  a, GLsizei  b, GLenum  c, GLsizei  d) {
	interceptor::getCurrentExt()->glTexStorage1D(a,b,c,d);
}
inline void glTexStorage2D(GLenum  a, GLsizei  b, GLenum  c, GLsizei  d, GLsizei  e) {
	interceptor::getCurrentExt()->glTexStorage2D(a,b,c,d,e);
}
inline void glTexStorage3D(GLenum  a, GLsizei  b, GLenum  c, GLsizei  d, GLsizei  e, GLsizei  f) {
	interceptor::getCurrentExt()->glTexStorage3D(a,b,c,d,e,f);
}
inline void glDrawTransformFeedbackInstanced(GLenum  a, GLuint  b, GLsizei  c) {
	interceptor::getCurrentExt()->glDrawTransformFeedbackInstanced(a,b,c);
}
inline void glDrawTransformFeedbackStreamInstanced(GLenum  a, GLuint  b, GLuint  c, GLsizei  d) {
	interceptor::getCurrentExt()->glDrawTransformFeedbackStreamInstanced(a,b,c,d);
}
inline void glClearBufferData(GLenum  a, GLenum  b, GLenum  c, GLenum  d, const void *e) {
	interceptor::getCurrentExt()->glClearBufferData(a,b,c,d,e);
}
inline void glClearBufferSubData(GLenum  a, GLenum  b, GLintptr  c, GLsizeiptr  d, GLenum  e, GLenum  f, const void *g) {
	interceptor::getCurrentExt()->glClearBufferSubData(a,b,c,d,e,f,g);
}
inline void glDispatchCompute(GLuint  a, GLuint  b, GLuint  c) {
	interceptor::getCurrentExt()->glDispatchCompute(a,b,c);
}
inline void glDispatchComputeIndirect(GLintptr  a) {
	interceptor::getCurrentExt()->glDispatchComputeIndirect(a);
}
inline void glCopyImageSubData(GLuint  a, GLenum  b, GLint  c, GLint  d, GLint  e, GLint  f, GLuint  g, GLenum  h, GLint  i, GLint  j, GLint  k, GLint  l, GLsizei  m, GLsizei  n, GLsizei  o) {
	interceptor::getCurrentExt()->glCopyImageSubData(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o);
}
inline void glFramebufferParameteri(GLenum  a, GLenum  b, GLint  c) {
	interceptor::getCurrentExt()->glFramebufferParameteri(a,b,c);
}
inline void glGetFramebufferParameteriv(GLenum  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetFramebufferParameteriv(a,b,c);
}
inline void glGetInternalformati64v(GLenum  a, GLenum  b, GLenum  c, GLsizei  d, GLint64 *e) {
	interceptor::getCurrentExt()->glGetInternalformati64v(a,b,c,d,e);
}
inline void glInvalidateTexSubImage(GLuint  a, GLint  b, GLint  c, GLint  d, GLint  e, GLsizei  f, GLsizei  g, GLsizei  h) {
	interceptor::getCurrentExt()->glInvalidateTexSubImage(a,b,c,d,e,f,g,h);
}
inline void glInvalidateTexImage(GLuint  a, GLint  b) {
	interceptor::getCurrentExt()->glInvalidateTexImage(a,b);
}
inline void glInvalidateBufferSubData(GLuint  a, GLintptr  b, GLsizeiptr  c) {
	interceptor::getCurrentExt()->glInvalidateBufferSubData(a,b,c);
}
inline void glInvalidateBufferData(GLuint  a) {
	interceptor::getCurrentExt()->glInvalidateBufferData(a);
}
inline void glInvalidateFramebuffer(GLenum  a, GLsizei  b, const GLenum *c) {
	interceptor::getCurrentExt()->glInvalidateFramebuffer(a,b,c);
}
inline void glInvalidateSubFramebuffer(GLenum  a, GLsizei  b, const GLenum *c, GLint  d, GLint  e, GLsizei  f, GLsizei  g) {
	interceptor::getCurrentExt()->glInvalidateSubFramebuffer(a,b,c,d,e,f,g);
}
inline void glMultiDrawArraysIndirect(GLenum  a, const void *b, GLsizei  c, GLsizei  d) {
	interceptor::getCurrentExt()->glMultiDrawArraysIndirect(a,b,c,d);
}
inline void glMultiDrawElementsIndirect(GLenum  a, GLenum  b, const void *c, GLsizei  d, GLsizei  e) {
	interceptor::getCurrentExt()->glMultiDrawElementsIndirect(a,b,c,d,e);
}
inline void glGetProgramInterfaceiv(GLuint  a, GLenum  b, GLenum  c, GLint *d) {
	interceptor::getCurrentExt()->glGetProgramInterfaceiv(a,b,c,d);
}
inline GLuint glGetProgramResourceIndex(GLuint  a, GLenum  b, const GLchar *c) {
	return interceptor::getCurrentExt()->glGetProgramResourceIndex(a,b,c);
}
inline void glGetProgramResourceName(GLuint  a, GLenum  b, GLuint  c, GLsizei  d, GLsizei *e, GLchar *f) {
	interceptor::getCurrentExt()->glGetProgramResourceName(a,b,c,d,e,f);
}
inline void glGetProgramResourceiv(GLuint  a, GLenum  b, GLuint  c, GLsizei  d, const GLenum *e, GLsizei  f, GLsizei *g, GLint *h) {
	interceptor::getCurrentExt()->glGetProgramResourceiv(a,b,c,d,e,f,g,h);
}
inline GLint glGetProgramResourceLocation(GLuint  a, GLenum  b, const GLchar *c) {
	return interceptor::getCurrentExt()->glGetProgramResourceLocation(a,b,c);
}
inline GLint glGetProgramResourceLocationIndex(GLuint  a, GLenum  b, const GLchar *c) {
	return interceptor::getCurrentExt()->glGetProgramResourceLocationIndex(a,b,c);
}
inline void glShaderStorageBlockBinding(GLuint  a, GLuint  b, GLuint  c) {
	interceptor::getCurrentExt()->glShaderStorageBlockBinding(a,b,c);
}
inline void glTexBufferRange(GLenum  a, GLenum  b, GLuint  c, GLintptr  d, GLsizeiptr  e) {
	interceptor::getCurrentExt()->glTexBufferRange(a,b,c,d,e);
}
inline void glTexStorage2DMultisample(GLenum  a, GLsizei  b, GLenum  c, GLsizei  d, GLsizei  e, GLboolean  f) {
	interceptor::getCurrentExt()->glTexStorage2DMultisample(a,b,c,d,e,f);
}
inline void glTexStorage3DMultisample(GLenum  a, GLsizei  b, GLenum  c, GLsizei  d, GLsizei  e, GLsizei  f, GLboolean  g) {
	interceptor::getCurrentExt()->glTexStorage3DMultisample(a,b,c,d,e,f,g);
}
inline void glTextureView(GLuint  a, GLenum  b, GLuint  c, GLenum  d, GLuint  e, GLuint  f, GLuint  g, GLuint  h) {
	interceptor::getCurrentExt()->glTextureView(a,b,c,d,e,f,g,h);
}
inline void glBindVertexBuffer(GLuint  a, GLuint  b, GLintptr  c, GLsizei  d) {
	interceptor::getCurrentExt()->glBindVertexBuffer(a,b,c,d);
}
inline void glVertexAttribFormat(GLuint  a, GLint  b, GLenum  c, GLboolean  d, GLuint  e) {
	interceptor::getCurrentExt()->glVertexAttribFormat(a,b,c,d,e);
}
inline void glVertexAttribIFormat(GLuint  a, GLint  b, GLenum  c, GLuint  d) {
	interceptor::getCurrentExt()->glVertexAttribIFormat(a,b,c,d);
}
inline void glVertexAttribLFormat(GLuint  a, GLint  b, GLenum  c, GLuint  d) {
	interceptor::getCurrentExt()->glVertexAttribLFormat(a,b,c,d);
}
inline void glVertexAttribBinding(GLuint  a, GLuint  b) {
	interceptor::getCurrentExt()->glVertexAttribBinding(a,b);
}
inline void glVertexBindingDivisor(GLuint  a, GLuint  b) {
	interceptor::getCurrentExt()->glVertexBindingDivisor(a,b);
}
inline void glDebugMessageControl(GLenum  a, GLenum  b, GLenum  c, GLsizei  d, const GLuint *e, GLboolean  f) {
	interceptor::getCurrentExt()->glDebugMessageControl(a,b,c,d,e,f);
}
inline void glDebugMessageInsert(GLenum  a, GLenum  b, GLuint  c, GLenum  d, GLsizei  e, const GLchar *f) {
	interceptor::getCurrentExt()->glDebugMessageInsert(a,b,c,d,e,f);
}
inline void glDebugMessageCallback(GLDEBUGPROC  a, const void *b) {
	interceptor::getCurrentExt()->glDebugMessageCallback(a,b);
}
inline GLuint glGetDebugMessageLog(GLuint  a, GLsizei  b, GLenum *c, GLenum *d, GLuint *e, GLenum *f, GLsizei *g, GLchar *h) {
	return interceptor::getCurrentExt()->glGetDebugMessageLog(a,b,c,d,e,f,g,h);
}
inline void glPushDebugGroup(GLenum  a, GLuint  b, GLsizei  c, const GLchar *d) {
	interceptor::getCurrentExt()->glPushDebugGroup(a,b,c,d);
}
inline void glPopDebugGroup(void) {
	interceptor::getCurrentExt()->glPopDebugGroup();
}
inline void glObjectLabel(GLenum  a, GLuint  b, GLsizei  c, const GLchar *d) {
	interceptor::getCurrentExt()->glObjectLabel(a,b,c,d);
}
inline void glGetObjectLabel(GLenum  a, GLuint  b, GLsizei  c, GLsizei *d, GLchar *e) {
	interceptor::getCurrentExt()->glGetObjectLabel(a,b,c,d,e);
}
inline void glObjectPtrLabel(const void *a, GLsizei  b, const GLchar *c) {
	interceptor::getCurrentExt()->glObjectPtrLabel(a,b,c);
}
inline void glGetObjectPtrLabel(const void *a, GLsizei  b, GLsizei *c, GLchar *d) {
	interceptor::getCurrentExt()->glGetObjectPtrLabel(a,b,c,d);
}
inline void glBufferStorage(GLenum  a, GLsizeiptr  b, const void *c, GLbitfield  d) {
	interceptor::getCurrentExt()->glBufferStorage(a,b,c,d);
}
inline void glClearTexImage(GLuint  a, GLint  b, GLenum  c, GLenum  d, const void *e) {
	interceptor::getCurrentExt()->glClearTexImage(a,b,c,d,e);
}
inline void glClearTexSubImage(GLuint  a, GLint  b, GLint  c, GLint  d, GLint  e, GLsizei  f, GLsizei  g, GLsizei  h, GLenum  i, GLenum  j, const void *k) {
	interceptor::getCurrentExt()->glClearTexSubImage(a,b,c,d,e,f,g,h,i,j,k);
}
inline void glBindBuffersBase(GLenum  a, GLuint  b, GLsizei  c, const GLuint *d) {
	interceptor::getCurrentExt()->glBindBuffersBase(a,b,c,d);
}
inline void glBindBuffersRange(GLenum  a, GLuint  b, GLsizei  c, const GLuint *d, const GLintptr *e, const GLsizeiptr *f) {
	interceptor::getCurrentExt()->glBindBuffersRange(a,b,c,d,e,f);
}
inline void glBindTextures(GLuint  a, GLsizei  b, const GLuint *c) {
	interceptor::getCurrentExt()->glBindTextures(a,b,c);
}
inline void glBindSamplers(GLuint  a, GLsizei  b, const GLuint *c) {
	interceptor::getCurrentExt()->glBindSamplers(a,b,c);
}
inline void glBindImageTextures(GLuint  a, GLsizei  b, const GLuint *c) {
	interceptor::getCurrentExt()->glBindImageTextures(a,b,c);
}
inline void glBindVertexBuffers(GLuint  a, GLsizei  b, const GLuint *c, const GLintptr *d, const GLsizei *e) {
	interceptor::getCurrentExt()->glBindVertexBuffers(a,b,c,d,e);
}
inline void glClipControl(GLenum  a, GLenum  b) {
	interceptor::getCurrentExt()->glClipControl(a,b);
}
inline void glCreateTransformFeedbacks(GLsizei  a, GLuint *b) {
	interceptor::getCurrentExt()->glCreateTransformFeedbacks(a,b);
}
inline void glTransformFeedbackBufferBase(GLuint  a, GLuint  b, GLuint  c) {
	interceptor::getCurrentExt()->glTransformFeedbackBufferBase(a,b,c);
}
inline void glTransformFeedbackBufferRange(GLuint  a, GLuint  b, GLuint  c, GLintptr  d, GLsizeiptr  e) {
	interceptor::getCurrentExt()->glTransformFeedbackBufferRange(a,b,c,d,e);
}
inline void glGetTransformFeedbackiv(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetTransformFeedbackiv(a,b,c);
}
inline void glGetTransformFeedbacki_v(GLuint  a, GLenum  b, GLuint  c, GLint *d) {
	interceptor::getCurrentExt()->glGetTransformFeedbacki_v(a,b,c,d);
}
inline void glGetTransformFeedbacki64_v(GLuint  a, GLenum  b, GLuint  c, GLint64 *d) {
	interceptor::getCurrentExt()->glGetTransformFeedbacki64_v(a,b,c,d);
}
inline void glCreateBuffers(GLsizei  a, GLuint *b) {
	interceptor::getCurrentExt()->glCreateBuffers(a,b);
}
inline void glNamedBufferStorage(GLuint  a, GLsizeiptr  b, const void *c, GLbitfield  d) {
	interceptor::getCurrentExt()->glNamedBufferStorage(a,b,c,d);
}
inline void glNamedBufferData(GLuint  a, GLsizeiptr  b, const void *c, GLenum  d) {
	interceptor::getCurrentExt()->glNamedBufferData(a,b,c,d);
}
inline void glNamedBufferSubData(GLuint  a, GLintptr  b, GLsizeiptr  c, const void *d) {
	interceptor::getCurrentExt()->glNamedBufferSubData(a,b,c,d);
}
inline void glCopyNamedBufferSubData(GLuint  a, GLuint  b, GLintptr  c, GLintptr  d, GLsizeiptr  e) {
	interceptor::getCurrentExt()->glCopyNamedBufferSubData(a,b,c,d,e);
}
inline void glClearNamedBufferData(GLuint  a, GLenum  b, GLenum  c, GLenum  d, const void *e) {
	interceptor::getCurrentExt()->glClearNamedBufferData(a,b,c,d,e);
}
inline void glClearNamedBufferSubData(GLuint  a, GLenum  b, GLintptr  c, GLsizeiptr  d, GLenum  e, GLenum  f, const void *g) {
	interceptor::getCurrentExt()->glClearNamedBufferSubData(a,b,c,d,e,f,g);
}
inline void * glMapNamedBuffer(GLuint  a, GLenum  b) {
	return interceptor::getCurrentExt()->glMapNamedBuffer(a,b);
}
inline void * glMapNamedBufferRange(GLuint  a, GLintptr  b, GLsizeiptr  c, GLbitfield  d) {
	return interceptor::getCurrentExt()->glMapNamedBufferRange(a,b,c,d);
}
inline GLboolean glUnmapNamedBuffer(GLuint  a) {
	return interceptor::getCurrentExt()->glUnmapNamedBuffer(a);
}
inline void glFlushMappedNamedBufferRange(GLuint  a, GLintptr  b, GLsizeiptr  c) {
	interceptor::getCurrentExt()->glFlushMappedNamedBufferRange(a,b,c);
}
inline void glGetNamedBufferParameteriv(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetNamedBufferParameteriv(a,b,c);
}
inline void glGetNamedBufferParameteri64v(GLuint  a, GLenum  b, GLint64 *c) {
	interceptor::getCurrentExt()->glGetNamedBufferParameteri64v(a,b,c);
}
inline void glGetNamedBufferPointerv(GLuint  a, GLenum  b, void **c) {
	interceptor::getCurrentExt()->glGetNamedBufferPointerv(a,b,c);
}
inline void glGetNamedBufferSubData(GLuint  a, GLintptr  b, GLsizeiptr  c, void *d) {
	interceptor::getCurrentExt()->glGetNamedBufferSubData(a,b,c,d);
}
inline void glCreateFramebuffers(GLsizei  a, GLuint *b) {
	interceptor::getCurrentExt()->glCreateFramebuffers(a,b);
}
inline void glNamedFramebufferRenderbuffer(GLuint  a, GLenum  b, GLenum  c, GLuint  d) {
	interceptor::getCurrentExt()->glNamedFramebufferRenderbuffer(a,b,c,d);
}
inline void glNamedFramebufferParameteri(GLuint  a, GLenum  b, GLint  c) {
	interceptor::getCurrentExt()->glNamedFramebufferParameteri(a,b,c);
}
inline void glNamedFramebufferTexture(GLuint  a, GLenum  b, GLuint  c, GLint  d) {
	interceptor::getCurrentExt()->glNamedFramebufferTexture(a,b,c,d);
}
inline void glNamedFramebufferTextureLayer(GLuint  a, GLenum  b, GLuint  c, GLint  d, GLint  e) {
	interceptor::getCurrentExt()->glNamedFramebufferTextureLayer(a,b,c,d,e);
}
inline void glNamedFramebufferDrawBuffer(GLuint  a, GLenum  b) {
	interceptor::getCurrentExt()->glNamedFramebufferDrawBuffer(a,b);
}
inline void glNamedFramebufferDrawBuffers(GLuint  a, GLsizei  b, const GLenum *c) {
	interceptor::getCurrentExt()->glNamedFramebufferDrawBuffers(a,b,c);
}
inline void glNamedFramebufferReadBuffer(GLuint  a, GLenum  b) {
	interceptor::getCurrentExt()->glNamedFramebufferReadBuffer(a,b);
}
inline void glInvalidateNamedFramebufferData(GLuint  a, GLsizei  b, const GLenum *c) {
	interceptor::getCurrentExt()->glInvalidateNamedFramebufferData(a,b,c);
}
inline void glInvalidateNamedFramebufferSubData(GLuint  a, GLsizei  b, const GLenum *c, GLint  d, GLint  e, GLsizei  f, GLsizei  g) {
	interceptor::getCurrentExt()->glInvalidateNamedFramebufferSubData(a,b,c,d,e,f,g);
}
inline void glClearNamedFramebufferiv(GLuint  a, GLenum  b, GLint  c, const GLint *d) {
	interceptor::getCurrentExt()->glClearNamedFramebufferiv(a,b,c,d);
}
inline void glClearNamedFramebufferuiv(GLuint  a, GLenum  b, GLint  c, const GLuint *d) {
	interceptor::getCurrentExt()->glClearNamedFramebufferuiv(a,b,c,d);
}
inline void glClearNamedFramebufferfv(GLuint  a, GLenum  b, GLint  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glClearNamedFramebufferfv(a,b,c,d);
}
inline void glClearNamedFramebufferfi(GLuint  a, GLenum  b, GLint  c, GLfloat  d, GLint  e) {
	interceptor::getCurrentExt()->glClearNamedFramebufferfi(a,b,c,d,e);
}
inline void glBlitNamedFramebuffer(GLuint  a, GLuint  b, GLint  c, GLint  d, GLint  e, GLint  f, GLint  g, GLint  h, GLint  i, GLint  j, GLbitfield  k, GLenum  l) {
	interceptor::getCurrentExt()->glBlitNamedFramebuffer(a,b,c,d,e,f,g,h,i,j,k,l);
}
inline GLenum glCheckNamedFramebufferStatus(GLuint  a, GLenum  b) {
	return interceptor::getCurrentExt()->glCheckNamedFramebufferStatus(a,b);
}
inline void glGetNamedFramebufferParameteriv(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetNamedFramebufferParameteriv(a,b,c);
}
inline void glGetNamedFramebufferAttachmentParameteriv(GLuint  a, GLenum  b, GLenum  c, GLint *d) {
	interceptor::getCurrentExt()->glGetNamedFramebufferAttachmentParameteriv(a,b,c,d);
}
inline void glCreateRenderbuffers(GLsizei  a, GLuint *b) {
	interceptor::getCurrentExt()->glCreateRenderbuffers(a,b);
}
inline void glNamedRenderbufferStorage(GLuint  a, GLenum  b, GLsizei  c, GLsizei  d) {
	interceptor::getCurrentExt()->glNamedRenderbufferStorage(a,b,c,d);
}
inline void glNamedRenderbufferStorageMultisample(GLuint  a, GLsizei  b, GLenum  c, GLsizei  d, GLsizei  e) {
	interceptor::getCurrentExt()->glNamedRenderbufferStorageMultisample(a,b,c,d,e);
}
inline void glGetNamedRenderbufferParameteriv(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetNamedRenderbufferParameteriv(a,b,c);
}
inline void glCreateTextures(GLenum  a, GLsizei  b, GLuint *c) {
	interceptor::getCurrentExt()->glCreateTextures(a,b,c);
}
inline void glTextureBuffer(GLuint  a, GLenum  b, GLuint  c) {
	interceptor::getCurrentExt()->glTextureBuffer(a,b,c);
}
inline void glTextureBufferRange(GLuint  a, GLenum  b, GLuint  c, GLintptr  d, GLsizeiptr  e) {
	interceptor::getCurrentExt()->glTextureBufferRange(a,b,c,d,e);
}
inline void glTextureStorage1D(GLuint  a, GLsizei  b, GLenum  c, GLsizei  d) {
	interceptor::getCurrentExt()->glTextureStorage1D(a,b,c,d);
}
inline void glTextureStorage2D(GLuint  a, GLsizei  b, GLenum  c, GLsizei  d, GLsizei  e) {
	interceptor::getCurrentExt()->glTextureStorage2D(a,b,c,d,e);
}
inline void glTextureStorage3D(GLuint  a, GLsizei  b, GLenum  c, GLsizei  d, GLsizei  e, GLsizei  f) {
	interceptor::getCurrentExt()->glTextureStorage3D(a,b,c,d,e,f);
}
inline void glTextureStorage2DMultisample(GLuint  a, GLsizei  b, GLenum  c, GLsizei  d, GLsizei  e, GLboolean  f) {
	interceptor::getCurrentExt()->glTextureStorage2DMultisample(a,b,c,d,e,f);
}
inline void glTextureStorage3DMultisample(GLuint  a, GLsizei  b, GLenum  c, GLsizei  d, GLsizei  e, GLsizei  f, GLboolean  g) {
	interceptor::getCurrentExt()->glTextureStorage3DMultisample(a,b,c,d,e,f,g);
}
inline void glTextureSubImage1D(GLuint  a, GLint  b, GLint  c, GLsizei  d, GLenum  e, GLenum  f, const void *g) {
	interceptor::getCurrentExt()->glTextureSubImage1D(a,b,c,d,e,f,g);
}
inline void glTextureSubImage2D(GLuint  a, GLint  b, GLint  c, GLint  d, GLsizei  e, GLsizei  f, GLenum  g, GLenum  h, const void *i) {
	interceptor::getCurrentExt()->glTextureSubImage2D(a,b,c,d,e,f,g,h,i);
}
inline void glTextureSubImage3D(GLuint  a, GLint  b, GLint  c, GLint  d, GLint  e, GLsizei  f, GLsizei  g, GLsizei  h, GLenum  i, GLenum  j, const void *k) {
	interceptor::getCurrentExt()->glTextureSubImage3D(a,b,c,d,e,f,g,h,i,j,k);
}
inline void glCompressedTextureSubImage1D(GLuint  a, GLint  b, GLint  c, GLsizei  d, GLenum  e, GLsizei  f, const void *g) {
	interceptor::getCurrentExt()->glCompressedTextureSubImage1D(a,b,c,d,e,f,g);
}
inline void glCompressedTextureSubImage2D(GLuint  a, GLint  b, GLint  c, GLint  d, GLsizei  e, GLsizei  f, GLenum  g, GLsizei  h, const void *i) {
	interceptor::getCurrentExt()->glCompressedTextureSubImage2D(a,b,c,d,e,f,g,h,i);
}
inline void glCompressedTextureSubImage3D(GLuint  a, GLint  b, GLint  c, GLint  d, GLint  e, GLsizei  f, GLsizei  g, GLsizei  h, GLenum  i, GLsizei  j, const void *k) {
	interceptor::getCurrentExt()->glCompressedTextureSubImage3D(a,b,c,d,e,f,g,h,i,j,k);
}
inline void glCopyTextureSubImage1D(GLuint  a, GLint  b, GLint  c, GLint  d, GLint  e, GLsizei  f) {
	interceptor::getCurrentExt()->glCopyTextureSubImage1D(a,b,c,d,e,f);
}
inline void glCopyTextureSubImage2D(GLuint  a, GLint  b, GLint  c, GLint  d, GLint  e, GLint  f, GLsizei  g, GLsizei  h) {
	interceptor::getCurrentExt()->glCopyTextureSubImage2D(a,b,c,d,e,f,g,h);
}
inline void glCopyTextureSubImage3D(GLuint  a, GLint  b, GLint  c, GLint  d, GLint  e, GLint  f, GLint  g, GLsizei  h, GLsizei  i) {
	interceptor::getCurrentExt()->glCopyTextureSubImage3D(a,b,c,d,e,f,g,h,i);
}
inline void glTextureParameterf(GLuint  a, GLenum  b, GLfloat  c) {
	interceptor::getCurrentExt()->glTextureParameterf(a,b,c);
}
inline void glTextureParameterfv(GLuint  a, GLenum  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glTextureParameterfv(a,b,c);
}
inline void glTextureParameteri(GLuint  a, GLenum  b, GLint  c) {
	interceptor::getCurrentExt()->glTextureParameteri(a,b,c);
}
inline void glTextureParameterIiv(GLuint  a, GLenum  b, const GLint *c) {
	interceptor::getCurrentExt()->glTextureParameterIiv(a,b,c);
}
inline void glTextureParameterIuiv(GLuint  a, GLenum  b, const GLuint *c) {
	interceptor::getCurrentExt()->glTextureParameterIuiv(a,b,c);
}
inline void glTextureParameteriv(GLuint  a, GLenum  b, const GLint *c) {
	interceptor::getCurrentExt()->glTextureParameteriv(a,b,c);
}
inline void glGenerateTextureMipmap(GLuint  a) {
	interceptor::getCurrentExt()->glGenerateTextureMipmap(a);
}
inline void glBindTextureUnit(GLuint  a, GLuint  b) {
	interceptor::getCurrentExt()->glBindTextureUnit(a,b);
}
inline void glGetTextureImage(GLuint  a, GLint  b, GLenum  c, GLenum  d, GLsizei  e, void *f) {
	interceptor::getCurrentExt()->glGetTextureImage(a,b,c,d,e,f);
}
inline void glGetCompressedTextureImage(GLuint  a, GLint  b, GLsizei  c, void *d) {
	interceptor::getCurrentExt()->glGetCompressedTextureImage(a,b,c,d);
}
inline void glGetTextureLevelParameterfv(GLuint  a, GLint  b, GLenum  c, GLfloat *d) {
	interceptor::getCurrentExt()->glGetTextureLevelParameterfv(a,b,c,d);
}
inline void glGetTextureLevelParameteriv(GLuint  a, GLint  b, GLenum  c, GLint *d) {
	interceptor::getCurrentExt()->glGetTextureLevelParameteriv(a,b,c,d);
}
inline void glGetTextureParameterfv(GLuint  a, GLenum  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetTextureParameterfv(a,b,c);
}
inline void glGetTextureParameterIiv(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetTextureParameterIiv(a,b,c);
}
inline void glGetTextureParameterIuiv(GLuint  a, GLenum  b, GLuint *c) {
	interceptor::getCurrentExt()->glGetTextureParameterIuiv(a,b,c);
}
inline void glGetTextureParameteriv(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetTextureParameteriv(a,b,c);
}
inline void glCreateVertexArrays(GLsizei  a, GLuint *b) {
	interceptor::getCurrentExt()->glCreateVertexArrays(a,b);
}
inline void glDisableVertexArrayAttrib(GLuint  a, GLuint  b) {
	interceptor::getCurrentExt()->glDisableVertexArrayAttrib(a,b);
}
inline void glEnableVertexArrayAttrib(GLuint  a, GLuint  b) {
	interceptor::getCurrentExt()->glEnableVertexArrayAttrib(a,b);
}
inline void glVertexArrayElementBuffer(GLuint  a, GLuint  b) {
	interceptor::getCurrentExt()->glVertexArrayElementBuffer(a,b);
}
inline void glVertexArrayVertexBuffer(GLuint  a, GLuint  b, GLuint  c, GLintptr  d, GLsizei  e) {
	interceptor::getCurrentExt()->glVertexArrayVertexBuffer(a,b,c,d,e);
}
inline void glVertexArrayVertexBuffers(GLuint  a, GLuint  b, GLsizei  c, const GLuint *d, const GLintptr *e, const GLsizei *f) {
	interceptor::getCurrentExt()->glVertexArrayVertexBuffers(a,b,c,d,e,f);
}
inline void glVertexArrayAttribBinding(GLuint  a, GLuint  b, GLuint  c) {
	interceptor::getCurrentExt()->glVertexArrayAttribBinding(a,b,c);
}
inline void glVertexArrayAttribFormat(GLuint  a, GLuint  b, GLint  c, GLenum  d, GLboolean  e, GLuint  f) {
	interceptor::getCurrentExt()->glVertexArrayAttribFormat(a,b,c,d,e,f);
}
inline void glVertexArrayAttribIFormat(GLuint  a, GLuint  b, GLint  c, GLenum  d, GLuint  e) {
	interceptor::getCurrentExt()->glVertexArrayAttribIFormat(a,b,c,d,e);
}
inline void glVertexArrayAttribLFormat(GLuint  a, GLuint  b, GLint  c, GLenum  d, GLuint  e) {
	interceptor::getCurrentExt()->glVertexArrayAttribLFormat(a,b,c,d,e);
}
inline void glVertexArrayBindingDivisor(GLuint  a, GLuint  b, GLuint  c) {
	interceptor::getCurrentExt()->glVertexArrayBindingDivisor(a,b,c);
}
inline void glGetVertexArrayiv(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetVertexArrayiv(a,b,c);
}
inline void glGetVertexArrayIndexediv(GLuint  a, GLuint  b, GLenum  c, GLint *d) {
	interceptor::getCurrentExt()->glGetVertexArrayIndexediv(a,b,c,d);
}
inline void glGetVertexArrayIndexed64iv(GLuint  a, GLuint  b, GLenum  c, GLint64 *d) {
	interceptor::getCurrentExt()->glGetVertexArrayIndexed64iv(a,b,c,d);
}
inline void glCreateSamplers(GLsizei  a, GLuint *b) {
	interceptor::getCurrentExt()->glCreateSamplers(a,b);
}
inline void glCreateProgramPipelines(GLsizei  a, GLuint *b) {
	interceptor::getCurrentExt()->glCreateProgramPipelines(a,b);
}
inline void glCreateQueries(GLenum  a, GLsizei  b, GLuint *c) {
	interceptor::getCurrentExt()->glCreateQueries(a,b,c);
}
inline void glGetQueryBufferObjecti64v(GLuint  a, GLuint  b, GLenum  c, GLintptr  d) {
	interceptor::getCurrentExt()->glGetQueryBufferObjecti64v(a,b,c,d);
}
inline void glGetQueryBufferObjectiv(GLuint  a, GLuint  b, GLenum  c, GLintptr  d) {
	interceptor::getCurrentExt()->glGetQueryBufferObjectiv(a,b,c,d);
}
inline void glGetQueryBufferObjectui64v(GLuint  a, GLuint  b, GLenum  c, GLintptr  d) {
	interceptor::getCurrentExt()->glGetQueryBufferObjectui64v(a,b,c,d);
}
inline void glGetQueryBufferObjectuiv(GLuint  a, GLuint  b, GLenum  c, GLintptr  d) {
	interceptor::getCurrentExt()->glGetQueryBufferObjectuiv(a,b,c,d);
}
inline void glMemoryBarrierByRegion(GLbitfield  a) {
	interceptor::getCurrentExt()->glMemoryBarrierByRegion(a);
}
inline void glGetTextureSubImage(GLuint  a, GLint  b, GLint  c, GLint  d, GLint  e, GLsizei  f, GLsizei  g, GLsizei  h, GLenum  i, GLenum  j, GLsizei  k, void *l) {
	interceptor::getCurrentExt()->glGetTextureSubImage(a,b,c,d,e,f,g,h,i,j,k,l);
}
inline void glGetCompressedTextureSubImage(GLuint  a, GLint  b, GLint  c, GLint  d, GLint  e, GLsizei  f, GLsizei  g, GLsizei  h, GLsizei  i, void *j) {
	interceptor::getCurrentExt()->glGetCompressedTextureSubImage(a,b,c,d,e,f,g,h,i,j);
}
inline GLenum glGetGraphicsResetStatus(void) {
	return interceptor::getCurrentExt()->glGetGraphicsResetStatus();
}
inline void glGetnCompressedTexImage(GLenum  a, GLint  b, GLsizei  c, void *d) {
	interceptor::getCurrentExt()->glGetnCompressedTexImage(a,b,c,d);
}
inline void glGetnTexImage(GLenum  a, GLint  b, GLenum  c, GLenum  d, GLsizei  e, void *f) {
	interceptor::getCurrentExt()->glGetnTexImage(a,b,c,d,e,f);
}
inline void glGetnUniformdv(GLuint  a, GLint  b, GLsizei  c, GLdouble *d) {
	interceptor::getCurrentExt()->glGetnUniformdv(a,b,c,d);
}
inline void glGetnUniformfv(GLuint  a, GLint  b, GLsizei  c, GLfloat *d) {
	interceptor::getCurrentExt()->glGetnUniformfv(a,b,c,d);
}
inline void glGetnUniformiv(GLuint  a, GLint  b, GLsizei  c, GLint *d) {
	interceptor::getCurrentExt()->glGetnUniformiv(a,b,c,d);
}
inline void glGetnUniformuiv(GLuint  a, GLint  b, GLsizei  c, GLuint *d) {
	interceptor::getCurrentExt()->glGetnUniformuiv(a,b,c,d);
}
inline void glReadnPixels(GLint  a, GLint  b, GLsizei  c, GLsizei  d, GLenum  e, GLenum  f, GLsizei  g, void *h) {
	interceptor::getCurrentExt()->glReadnPixels(a,b,c,d,e,f,g,h);
}
inline void glGetnMapdv(GLenum  a, GLenum  b, GLsizei  c, GLdouble *d) {
	interceptor::getCurrentExt()->glGetnMapdv(a,b,c,d);
}
inline void glGetnMapfv(GLenum  a, GLenum  b, GLsizei  c, GLfloat *d) {
	interceptor::getCurrentExt()->glGetnMapfv(a,b,c,d);
}
inline void glGetnMapiv(GLenum  a, GLenum  b, GLsizei  c, GLint *d) {
	interceptor::getCurrentExt()->glGetnMapiv(a,b,c,d);
}
inline void glGetnPixelMapfv(GLenum  a, GLsizei  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetnPixelMapfv(a,b,c);
}
inline void glGetnPixelMapuiv(GLenum  a, GLsizei  b, GLuint *c) {
	interceptor::getCurrentExt()->glGetnPixelMapuiv(a,b,c);
}
inline void glGetnPixelMapusv(GLenum  a, GLsizei  b, GLushort *c) {
	interceptor::getCurrentExt()->glGetnPixelMapusv(a,b,c);
}
inline void glGetnPolygonStipple(GLsizei  a, GLubyte *b) {
	interceptor::getCurrentExt()->glGetnPolygonStipple(a,b);
}
inline void glGetnColorTable(GLenum  a, GLenum  b, GLenum  c, GLsizei  d, void *e) {
	interceptor::getCurrentExt()->glGetnColorTable(a,b,c,d,e);
}
inline void glGetnConvolutionFilter(GLenum  a, GLenum  b, GLenum  c, GLsizei  d, void *e) {
	interceptor::getCurrentExt()->glGetnConvolutionFilter(a,b,c,d,e);
}
inline void glGetnSeparableFilter(GLenum  a, GLenum  b, GLenum  c, GLsizei  d, void *e, GLsizei  f, void *g, void *h) {
	interceptor::getCurrentExt()->glGetnSeparableFilter(a,b,c,d,e,f,g,h);
}
inline void glGetnHistogram(GLenum  a, GLboolean  b, GLenum  c, GLenum  d, GLsizei  e, void *f) {
	interceptor::getCurrentExt()->glGetnHistogram(a,b,c,d,e,f);
}
inline void glGetnMinmax(GLenum  a, GLboolean  b, GLenum  c, GLenum  d, GLsizei  e, void *f) {
	interceptor::getCurrentExt()->glGetnMinmax(a,b,c,d,e,f);
}
inline void glTextureBarrier(void) {
	interceptor::getCurrentExt()->glTextureBarrier();
}
inline void glPrimitiveBoundingBoxARB(GLfloat  a, GLfloat  b, GLfloat  c, GLfloat  d, GLfloat  e, GLfloat  f, GLfloat  g, GLfloat  h) {
	interceptor::getCurrentExt()->glPrimitiveBoundingBoxARB(a,b,c,d,e,f,g,h);
}
inline GLuint64 glGetTextureHandleARB(GLuint  a) {
	return interceptor::getCurrentExt()->glGetTextureHandleARB(a);
}
inline GLuint64 glGetTextureSamplerHandleARB(GLuint  a, GLuint  b) {
	return interceptor::getCurrentExt()->glGetTextureSamplerHandleARB(a,b);
}
inline void glMakeTextureHandleResidentARB(GLuint64  a) {
	interceptor::getCurrentExt()->glMakeTextureHandleResidentARB(a);
}
inline void glMakeTextureHandleNonResidentARB(GLuint64  a) {
	interceptor::getCurrentExt()->glMakeTextureHandleNonResidentARB(a);
}
inline GLuint64 glGetImageHandleARB(GLuint  a, GLint  b, GLboolean  c, GLint  d, GLenum  e) {
	return interceptor::getCurrentExt()->glGetImageHandleARB(a,b,c,d,e);
}
inline void glMakeImageHandleResidentARB(GLuint64  a, GLenum  b) {
	interceptor::getCurrentExt()->glMakeImageHandleResidentARB(a,b);
}
inline void glMakeImageHandleNonResidentARB(GLuint64  a) {
	interceptor::getCurrentExt()->glMakeImageHandleNonResidentARB(a);
}
inline void glUniformHandleui64ARB(GLint  a, GLuint64  b) {
	interceptor::getCurrentExt()->glUniformHandleui64ARB(a,b);
}
inline void glUniformHandleui64vARB(GLint  a, GLsizei  b, const GLuint64 *c) {
	interceptor::getCurrentExt()->glUniformHandleui64vARB(a,b,c);
}
inline void glProgramUniformHandleui64ARB(GLuint  a, GLint  b, GLuint64  c) {
	interceptor::getCurrentExt()->glProgramUniformHandleui64ARB(a,b,c);
}
inline void glProgramUniformHandleui64vARB(GLuint  a, GLint  b, GLsizei  c, const GLuint64 *d) {
	interceptor::getCurrentExt()->glProgramUniformHandleui64vARB(a,b,c,d);
}
inline GLboolean glIsTextureHandleResidentARB(GLuint64  a) {
	return interceptor::getCurrentExt()->glIsTextureHandleResidentARB(a);
}
inline GLboolean glIsImageHandleResidentARB(GLuint64  a) {
	return interceptor::getCurrentExt()->glIsImageHandleResidentARB(a);
}
inline void glVertexAttribL1ui64ARB(GLuint  a, GLuint64EXT  b) {
	interceptor::getCurrentExt()->glVertexAttribL1ui64ARB(a,b);
}
inline void glVertexAttribL1ui64vARB(GLuint  a, const GLuint64EXT *b) {
	interceptor::getCurrentExt()->glVertexAttribL1ui64vARB(a,b);
}
inline void glGetVertexAttribLui64vARB(GLuint  a, GLenum  b, GLuint64EXT *c) {
	interceptor::getCurrentExt()->glGetVertexAttribLui64vARB(a,b,c);
}
inline GLsync glCreateSyncFromCLeventARB(struct _cl_context *a, struct _cl_event *b, GLbitfield  c) {
	return interceptor::getCurrentExt()->glCreateSyncFromCLeventARB(a,b,c);
}
inline void glClampColorARB(GLenum  a, GLenum  b) {
	interceptor::getCurrentExt()->glClampColorARB(a,b);
}
inline void glDispatchComputeGroupSizeARB(GLuint  a, GLuint  b, GLuint  c, GLuint  d, GLuint  e, GLuint  f) {
	interceptor::getCurrentExt()->glDispatchComputeGroupSizeARB(a,b,c,d,e,f);
}
inline void glDebugMessageControlARB(GLenum  a, GLenum  b, GLenum  c, GLsizei  d, const GLuint *e, GLboolean  f) {
	interceptor::getCurrentExt()->glDebugMessageControlARB(a,b,c,d,e,f);
}
inline void glDebugMessageInsertARB(GLenum  a, GLenum  b, GLuint  c, GLenum  d, GLsizei  e, const GLchar *f) {
	interceptor::getCurrentExt()->glDebugMessageInsertARB(a,b,c,d,e,f);
}
inline void glDebugMessageCallbackARB(GLDEBUGPROCARB  a, const void *b) {
	interceptor::getCurrentExt()->glDebugMessageCallbackARB(a,b);
}
inline GLuint glGetDebugMessageLogARB(GLuint  a, GLsizei  b, GLenum *c, GLenum *d, GLuint *e, GLenum *f, GLsizei *g, GLchar *h) {
	return interceptor::getCurrentExt()->glGetDebugMessageLogARB(a,b,c,d,e,f,g,h);
}
inline void glDrawBuffersARB(GLsizei  a, const GLenum *b) {
	interceptor::getCurrentExt()->glDrawBuffersARB(a,b);
}
inline void glBlendEquationiARB(GLuint  a, GLenum  b) {
	interceptor::getCurrentExt()->glBlendEquationiARB(a,b);
}
inline void glBlendEquationSeparateiARB(GLuint  a, GLenum  b, GLenum  c) {
	interceptor::getCurrentExt()->glBlendEquationSeparateiARB(a,b,c);
}
inline void glBlendFunciARB(GLuint  a, GLenum  b, GLenum  c) {
	interceptor::getCurrentExt()->glBlendFunciARB(a,b,c);
}
inline void glBlendFuncSeparateiARB(GLuint  a, GLenum  b, GLenum  c, GLenum  d, GLenum  e) {
	interceptor::getCurrentExt()->glBlendFuncSeparateiARB(a,b,c,d,e);
}
inline void glDrawArraysInstancedARB(GLenum  a, GLint  b, GLsizei  c, GLsizei  d) {
	interceptor::getCurrentExt()->glDrawArraysInstancedARB(a,b,c,d);
}
inline void glDrawElementsInstancedARB(GLenum  a, GLsizei  b, GLenum  c, const void *d, GLsizei  e) {
	interceptor::getCurrentExt()->glDrawElementsInstancedARB(a,b,c,d,e);
}
inline void glProgramStringARB(GLenum  a, GLenum  b, GLsizei  c, const void *d) {
	interceptor::getCurrentExt()->glProgramStringARB(a,b,c,d);
}
inline void glBindProgramARB(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glBindProgramARB(a,b);
}
inline void glDeleteProgramsARB(GLsizei  a, const GLuint *b) {
	interceptor::getCurrentExt()->glDeleteProgramsARB(a,b);
}
inline void glGenProgramsARB(GLsizei  a, GLuint *b) {
	interceptor::getCurrentExt()->glGenProgramsARB(a,b);
}
inline void glProgramEnvParameter4dARB(GLenum  a, GLuint  b, GLdouble  c, GLdouble  d, GLdouble  e, GLdouble  f) {
	interceptor::getCurrentExt()->glProgramEnvParameter4dARB(a,b,c,d,e,f);
}
inline void glProgramEnvParameter4dvARB(GLenum  a, GLuint  b, const GLdouble *c) {
	interceptor::getCurrentExt()->glProgramEnvParameter4dvARB(a,b,c);
}
inline void glProgramEnvParameter4fARB(GLenum  a, GLuint  b, GLfloat  c, GLfloat  d, GLfloat  e, GLfloat  f) {
	interceptor::getCurrentExt()->glProgramEnvParameter4fARB(a,b,c,d,e,f);
}
inline void glProgramEnvParameter4fvARB(GLenum  a, GLuint  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glProgramEnvParameter4fvARB(a,b,c);
}
inline void glProgramLocalParameter4dARB(GLenum  a, GLuint  b, GLdouble  c, GLdouble  d, GLdouble  e, GLdouble  f) {
	interceptor::getCurrentExt()->glProgramLocalParameter4dARB(a,b,c,d,e,f);
}
inline void glProgramLocalParameter4dvARB(GLenum  a, GLuint  b, const GLdouble *c) {
	interceptor::getCurrentExt()->glProgramLocalParameter4dvARB(a,b,c);
}
inline void glProgramLocalParameter4fARB(GLenum  a, GLuint  b, GLfloat  c, GLfloat  d, GLfloat  e, GLfloat  f) {
	interceptor::getCurrentExt()->glProgramLocalParameter4fARB(a,b,c,d,e,f);
}
inline void glProgramLocalParameter4fvARB(GLenum  a, GLuint  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glProgramLocalParameter4fvARB(a,b,c);
}
inline void glGetProgramEnvParameterdvARB(GLenum  a, GLuint  b, GLdouble *c) {
	interceptor::getCurrentExt()->glGetProgramEnvParameterdvARB(a,b,c);
}
inline void glGetProgramEnvParameterfvARB(GLenum  a, GLuint  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetProgramEnvParameterfvARB(a,b,c);
}
inline void glGetProgramLocalParameterdvARB(GLenum  a, GLuint  b, GLdouble *c) {
	interceptor::getCurrentExt()->glGetProgramLocalParameterdvARB(a,b,c);
}
inline void glGetProgramLocalParameterfvARB(GLenum  a, GLuint  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetProgramLocalParameterfvARB(a,b,c);
}
inline void glGetProgramivARB(GLenum  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetProgramivARB(a,b,c);
}
inline void glGetProgramStringARB(GLenum  a, GLenum  b, void *c) {
	interceptor::getCurrentExt()->glGetProgramStringARB(a,b,c);
}
inline GLboolean glIsProgramARB(GLuint  a) {
	return interceptor::getCurrentExt()->glIsProgramARB(a);
}
inline void glProgramParameteriARB(GLuint  a, GLenum  b, GLint  c) {
	interceptor::getCurrentExt()->glProgramParameteriARB(a,b,c);
}
inline void glFramebufferTextureARB(GLenum  a, GLenum  b, GLuint  c, GLint  d) {
	interceptor::getCurrentExt()->glFramebufferTextureARB(a,b,c,d);
}
inline void glFramebufferTextureLayerARB(GLenum  a, GLenum  b, GLuint  c, GLint  d, GLint  e) {
	interceptor::getCurrentExt()->glFramebufferTextureLayerARB(a,b,c,d,e);
}
inline void glFramebufferTextureFaceARB(GLenum  a, GLenum  b, GLuint  c, GLint  d, GLenum  e) {
	interceptor::getCurrentExt()->glFramebufferTextureFaceARB(a,b,c,d,e);
}
inline void glUniform1i64ARB(GLint  a, GLint64  b) {
	interceptor::getCurrentExt()->glUniform1i64ARB(a,b);
}
inline void glUniform2i64ARB(GLint  a, GLint64  b, GLint64  c) {
	interceptor::getCurrentExt()->glUniform2i64ARB(a,b,c);
}
inline void glUniform3i64ARB(GLint  a, GLint64  b, GLint64  c, GLint64  d) {
	interceptor::getCurrentExt()->glUniform3i64ARB(a,b,c,d);
}
inline void glUniform4i64ARB(GLint  a, GLint64  b, GLint64  c, GLint64  d, GLint64  e) {
	interceptor::getCurrentExt()->glUniform4i64ARB(a,b,c,d,e);
}
inline void glUniform1i64vARB(GLint  a, GLsizei  b, const GLint64 *c) {
	interceptor::getCurrentExt()->glUniform1i64vARB(a,b,c);
}
inline void glUniform2i64vARB(GLint  a, GLsizei  b, const GLint64 *c) {
	interceptor::getCurrentExt()->glUniform2i64vARB(a,b,c);
}
inline void glUniform3i64vARB(GLint  a, GLsizei  b, const GLint64 *c) {
	interceptor::getCurrentExt()->glUniform3i64vARB(a,b,c);
}
inline void glUniform4i64vARB(GLint  a, GLsizei  b, const GLint64 *c) {
	interceptor::getCurrentExt()->glUniform4i64vARB(a,b,c);
}
inline void glUniform1ui64ARB(GLint  a, GLuint64  b) {
	interceptor::getCurrentExt()->glUniform1ui64ARB(a,b);
}
inline void glUniform2ui64ARB(GLint  a, GLuint64  b, GLuint64  c) {
	interceptor::getCurrentExt()->glUniform2ui64ARB(a,b,c);
}
inline void glUniform3ui64ARB(GLint  a, GLuint64  b, GLuint64  c, GLuint64  d) {
	interceptor::getCurrentExt()->glUniform3ui64ARB(a,b,c,d);
}
inline void glUniform4ui64ARB(GLint  a, GLuint64  b, GLuint64  c, GLuint64  d, GLuint64  e) {
	interceptor::getCurrentExt()->glUniform4ui64ARB(a,b,c,d,e);
}
inline void glUniform1ui64vARB(GLint  a, GLsizei  b, const GLuint64 *c) {
	interceptor::getCurrentExt()->glUniform1ui64vARB(a,b,c);
}
inline void glUniform2ui64vARB(GLint  a, GLsizei  b, const GLuint64 *c) {
	interceptor::getCurrentExt()->glUniform2ui64vARB(a,b,c);
}
inline void glUniform3ui64vARB(GLint  a, GLsizei  b, const GLuint64 *c) {
	interceptor::getCurrentExt()->glUniform3ui64vARB(a,b,c);
}
inline void glUniform4ui64vARB(GLint  a, GLsizei  b, const GLuint64 *c) {
	interceptor::getCurrentExt()->glUniform4ui64vARB(a,b,c);
}
inline void glGetUniformi64vARB(GLuint  a, GLint  b, GLint64 *c) {
	interceptor::getCurrentExt()->glGetUniformi64vARB(a,b,c);
}
inline void glGetUniformui64vARB(GLuint  a, GLint  b, GLuint64 *c) {
	interceptor::getCurrentExt()->glGetUniformui64vARB(a,b,c);
}
inline void glGetnUniformi64vARB(GLuint  a, GLint  b, GLsizei  c, GLint64 *d) {
	interceptor::getCurrentExt()->glGetnUniformi64vARB(a,b,c,d);
}
inline void glGetnUniformui64vARB(GLuint  a, GLint  b, GLsizei  c, GLuint64 *d) {
	interceptor::getCurrentExt()->glGetnUniformui64vARB(a,b,c,d);
}
inline void glProgramUniform1i64ARB(GLuint  a, GLint  b, GLint64  c) {
	interceptor::getCurrentExt()->glProgramUniform1i64ARB(a,b,c);
}
inline void glProgramUniform2i64ARB(GLuint  a, GLint  b, GLint64  c, GLint64  d) {
	interceptor::getCurrentExt()->glProgramUniform2i64ARB(a,b,c,d);
}
inline void glProgramUniform3i64ARB(GLuint  a, GLint  b, GLint64  c, GLint64  d, GLint64  e) {
	interceptor::getCurrentExt()->glProgramUniform3i64ARB(a,b,c,d,e);
}
inline void glProgramUniform4i64ARB(GLuint  a, GLint  b, GLint64  c, GLint64  d, GLint64  e, GLint64  f) {
	interceptor::getCurrentExt()->glProgramUniform4i64ARB(a,b,c,d,e,f);
}
inline void glProgramUniform1i64vARB(GLuint  a, GLint  b, GLsizei  c, const GLint64 *d) {
	interceptor::getCurrentExt()->glProgramUniform1i64vARB(a,b,c,d);
}
inline void glProgramUniform2i64vARB(GLuint  a, GLint  b, GLsizei  c, const GLint64 *d) {
	interceptor::getCurrentExt()->glProgramUniform2i64vARB(a,b,c,d);
}
inline void glProgramUniform3i64vARB(GLuint  a, GLint  b, GLsizei  c, const GLint64 *d) {
	interceptor::getCurrentExt()->glProgramUniform3i64vARB(a,b,c,d);
}
inline void glProgramUniform4i64vARB(GLuint  a, GLint  b, GLsizei  c, const GLint64 *d) {
	interceptor::getCurrentExt()->glProgramUniform4i64vARB(a,b,c,d);
}
inline void glProgramUniform1ui64ARB(GLuint  a, GLint  b, GLuint64  c) {
	interceptor::getCurrentExt()->glProgramUniform1ui64ARB(a,b,c);
}
inline void glProgramUniform2ui64ARB(GLuint  a, GLint  b, GLuint64  c, GLuint64  d) {
	interceptor::getCurrentExt()->glProgramUniform2ui64ARB(a,b,c,d);
}
inline void glProgramUniform3ui64ARB(GLuint  a, GLint  b, GLuint64  c, GLuint64  d, GLuint64  e) {
	interceptor::getCurrentExt()->glProgramUniform3ui64ARB(a,b,c,d,e);
}
inline void glProgramUniform4ui64ARB(GLuint  a, GLint  b, GLuint64  c, GLuint64  d, GLuint64  e, GLuint64  f) {
	interceptor::getCurrentExt()->glProgramUniform4ui64ARB(a,b,c,d,e,f);
}
inline void glProgramUniform1ui64vARB(GLuint  a, GLint  b, GLsizei  c, const GLuint64 *d) {
	interceptor::getCurrentExt()->glProgramUniform1ui64vARB(a,b,c,d);
}
inline void glProgramUniform2ui64vARB(GLuint  a, GLint  b, GLsizei  c, const GLuint64 *d) {
	interceptor::getCurrentExt()->glProgramUniform2ui64vARB(a,b,c,d);
}
inline void glProgramUniform3ui64vARB(GLuint  a, GLint  b, GLsizei  c, const GLuint64 *d) {
	interceptor::getCurrentExt()->glProgramUniform3ui64vARB(a,b,c,d);
}
inline void glProgramUniform4ui64vARB(GLuint  a, GLint  b, GLsizei  c, const GLuint64 *d) {
	interceptor::getCurrentExt()->glProgramUniform4ui64vARB(a,b,c,d);
}
inline void glColorTable(GLenum  a, GLenum  b, GLsizei  c, GLenum  d, GLenum  e, const void *f) {
	interceptor::getCurrentExt()->glColorTable(a,b,c,d,e,f);
}
inline void glColorTableParameterfv(GLenum  a, GLenum  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glColorTableParameterfv(a,b,c);
}
inline void glColorTableParameteriv(GLenum  a, GLenum  b, const GLint *c) {
	interceptor::getCurrentExt()->glColorTableParameteriv(a,b,c);
}
inline void glCopyColorTable(GLenum  a, GLenum  b, GLint  c, GLint  d, GLsizei  e) {
	interceptor::getCurrentExt()->glCopyColorTable(a,b,c,d,e);
}
inline void glGetColorTable(GLenum  a, GLenum  b, GLenum  c, void *d) {
	interceptor::getCurrentExt()->glGetColorTable(a,b,c,d);
}
inline void glGetColorTableParameterfv(GLenum  a, GLenum  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetColorTableParameterfv(a,b,c);
}
inline void glGetColorTableParameteriv(GLenum  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetColorTableParameteriv(a,b,c);
}
inline void glColorSubTable(GLenum  a, GLsizei  b, GLsizei  c, GLenum  d, GLenum  e, const void *f) {
	interceptor::getCurrentExt()->glColorSubTable(a,b,c,d,e,f);
}
inline void glCopyColorSubTable(GLenum  a, GLsizei  b, GLint  c, GLint  d, GLsizei  e) {
	interceptor::getCurrentExt()->glCopyColorSubTable(a,b,c,d,e);
}
inline void glConvolutionFilter1D(GLenum  a, GLenum  b, GLsizei  c, GLenum  d, GLenum  e, const void *f) {
	interceptor::getCurrentExt()->glConvolutionFilter1D(a,b,c,d,e,f);
}
inline void glConvolutionFilter2D(GLenum  a, GLenum  b, GLsizei  c, GLsizei  d, GLenum  e, GLenum  f, const void *g) {
	interceptor::getCurrentExt()->glConvolutionFilter2D(a,b,c,d,e,f,g);
}
inline void glConvolutionParameterf(GLenum  a, GLenum  b, GLfloat  c) {
	interceptor::getCurrentExt()->glConvolutionParameterf(a,b,c);
}
inline void glConvolutionParameterfv(GLenum  a, GLenum  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glConvolutionParameterfv(a,b,c);
}
inline void glConvolutionParameteri(GLenum  a, GLenum  b, GLint  c) {
	interceptor::getCurrentExt()->glConvolutionParameteri(a,b,c);
}
inline void glConvolutionParameteriv(GLenum  a, GLenum  b, const GLint *c) {
	interceptor::getCurrentExt()->glConvolutionParameteriv(a,b,c);
}
inline void glCopyConvolutionFilter1D(GLenum  a, GLenum  b, GLint  c, GLint  d, GLsizei  e) {
	interceptor::getCurrentExt()->glCopyConvolutionFilter1D(a,b,c,d,e);
}
inline void glCopyConvolutionFilter2D(GLenum  a, GLenum  b, GLint  c, GLint  d, GLsizei  e, GLsizei  f) {
	interceptor::getCurrentExt()->glCopyConvolutionFilter2D(a,b,c,d,e,f);
}
inline void glGetConvolutionFilter(GLenum  a, GLenum  b, GLenum  c, void *d) {
	interceptor::getCurrentExt()->glGetConvolutionFilter(a,b,c,d);
}
inline void glGetConvolutionParameterfv(GLenum  a, GLenum  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetConvolutionParameterfv(a,b,c);
}
inline void glGetConvolutionParameteriv(GLenum  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetConvolutionParameteriv(a,b,c);
}
inline void glGetSeparableFilter(GLenum  a, GLenum  b, GLenum  c, void *d, void *e, void *f) {
	interceptor::getCurrentExt()->glGetSeparableFilter(a,b,c,d,e,f);
}
inline void glSeparableFilter2D(GLenum  a, GLenum  b, GLsizei  c, GLsizei  d, GLenum  e, GLenum  f, const void *g, const void *h) {
	interceptor::getCurrentExt()->glSeparableFilter2D(a,b,c,d,e,f,g,h);
}
inline void glGetHistogram(GLenum  a, GLboolean  b, GLenum  c, GLenum  d, void *e) {
	interceptor::getCurrentExt()->glGetHistogram(a,b,c,d,e);
}
inline void glGetHistogramParameterfv(GLenum  a, GLenum  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetHistogramParameterfv(a,b,c);
}
inline void glGetHistogramParameteriv(GLenum  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetHistogramParameteriv(a,b,c);
}
inline void glGetMinmax(GLenum  a, GLboolean  b, GLenum  c, GLenum  d, void *e) {
	interceptor::getCurrentExt()->glGetMinmax(a,b,c,d,e);
}
inline void glGetMinmaxParameterfv(GLenum  a, GLenum  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetMinmaxParameterfv(a,b,c);
}
inline void glGetMinmaxParameteriv(GLenum  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetMinmaxParameteriv(a,b,c);
}
inline void glHistogram(GLenum  a, GLsizei  b, GLenum  c, GLboolean  d) {
	interceptor::getCurrentExt()->glHistogram(a,b,c,d);
}
inline void glMinmax(GLenum  a, GLenum  b, GLboolean  c) {
	interceptor::getCurrentExt()->glMinmax(a,b,c);
}
inline void glResetHistogram(GLenum  a) {
	interceptor::getCurrentExt()->glResetHistogram(a);
}
inline void glResetMinmax(GLenum  a) {
	interceptor::getCurrentExt()->glResetMinmax(a);
}
inline void glMultiDrawArraysIndirectCountARB(GLenum  a, GLintptr  b, GLintptr  c, GLsizei  d, GLsizei  e) {
	interceptor::getCurrentExt()->glMultiDrawArraysIndirectCountARB(a,b,c,d,e);
}
inline void glMultiDrawElementsIndirectCountARB(GLenum  a, GLenum  b, GLintptr  c, GLintptr  d, GLsizei  e, GLsizei  f) {
	interceptor::getCurrentExt()->glMultiDrawElementsIndirectCountARB(a,b,c,d,e,f);
}
inline void glVertexAttribDivisorARB(GLuint  a, GLuint  b) {
	interceptor::getCurrentExt()->glVertexAttribDivisorARB(a,b);
}
inline void glCurrentPaletteMatrixARB(GLint  a) {
	interceptor::getCurrentExt()->glCurrentPaletteMatrixARB(a);
}
inline void glMatrixIndexubvARB(GLint  a, const GLubyte *b) {
	interceptor::getCurrentExt()->glMatrixIndexubvARB(a,b);
}
inline void glMatrixIndexusvARB(GLint  a, const GLushort *b) {
	interceptor::getCurrentExt()->glMatrixIndexusvARB(a,b);
}
inline void glMatrixIndexuivARB(GLint  a, const GLuint *b) {
	interceptor::getCurrentExt()->glMatrixIndexuivARB(a,b);
}
inline void glMatrixIndexPointerARB(GLint  a, GLenum  b, GLsizei  c, const void *d) {
	interceptor::getCurrentExt()->glMatrixIndexPointerARB(a,b,c,d);
}
inline void glSampleCoverageARB(GLfloat  a, GLboolean  b) {
	interceptor::getCurrentExt()->glSampleCoverageARB(a,b);
}
inline void glActiveTextureARB(GLenum  a) {
	interceptor::getCurrentExt()->glActiveTextureARB(a);
}
inline void glClientActiveTextureARB(GLenum  a) {
	interceptor::getCurrentExt()->glClientActiveTextureARB(a);
}
inline void glMultiTexCoord1dARB(GLenum  a, GLdouble  b) {
	interceptor::getCurrentExt()->glMultiTexCoord1dARB(a,b);
}
inline void glMultiTexCoord1dvARB(GLenum  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glMultiTexCoord1dvARB(a,b);
}
inline void glMultiTexCoord1fARB(GLenum  a, GLfloat  b) {
	interceptor::getCurrentExt()->glMultiTexCoord1fARB(a,b);
}
inline void glMultiTexCoord1fvARB(GLenum  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glMultiTexCoord1fvARB(a,b);
}
inline void glMultiTexCoord1iARB(GLenum  a, GLint  b) {
	interceptor::getCurrentExt()->glMultiTexCoord1iARB(a,b);
}
inline void glMultiTexCoord1ivARB(GLenum  a, const GLint *b) {
	interceptor::getCurrentExt()->glMultiTexCoord1ivARB(a,b);
}
inline void glMultiTexCoord1sARB(GLenum  a, GLshort  b) {
	interceptor::getCurrentExt()->glMultiTexCoord1sARB(a,b);
}
inline void glMultiTexCoord1svARB(GLenum  a, const GLshort *b) {
	interceptor::getCurrentExt()->glMultiTexCoord1svARB(a,b);
}
inline void glMultiTexCoord2dARB(GLenum  a, GLdouble  b, GLdouble  c) {
	interceptor::getCurrentExt()->glMultiTexCoord2dARB(a,b,c);
}
inline void glMultiTexCoord2dvARB(GLenum  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glMultiTexCoord2dvARB(a,b);
}
inline void glMultiTexCoord2fARB(GLenum  a, GLfloat  b, GLfloat  c) {
	interceptor::getCurrentExt()->glMultiTexCoord2fARB(a,b,c);
}
inline void glMultiTexCoord2fvARB(GLenum  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glMultiTexCoord2fvARB(a,b);
}
inline void glMultiTexCoord2iARB(GLenum  a, GLint  b, GLint  c) {
	interceptor::getCurrentExt()->glMultiTexCoord2iARB(a,b,c);
}
inline void glMultiTexCoord2ivARB(GLenum  a, const GLint *b) {
	interceptor::getCurrentExt()->glMultiTexCoord2ivARB(a,b);
}
inline void glMultiTexCoord2sARB(GLenum  a, GLshort  b, GLshort  c) {
	interceptor::getCurrentExt()->glMultiTexCoord2sARB(a,b,c);
}
inline void glMultiTexCoord2svARB(GLenum  a, const GLshort *b) {
	interceptor::getCurrentExt()->glMultiTexCoord2svARB(a,b);
}
inline void glMultiTexCoord3dARB(GLenum  a, GLdouble  b, GLdouble  c, GLdouble  d) {
	interceptor::getCurrentExt()->glMultiTexCoord3dARB(a,b,c,d);
}
inline void glMultiTexCoord3dvARB(GLenum  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glMultiTexCoord3dvARB(a,b);
}
inline void glMultiTexCoord3fARB(GLenum  a, GLfloat  b, GLfloat  c, GLfloat  d) {
	interceptor::getCurrentExt()->glMultiTexCoord3fARB(a,b,c,d);
}
inline void glMultiTexCoord3fvARB(GLenum  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glMultiTexCoord3fvARB(a,b);
}
inline void glMultiTexCoord3iARB(GLenum  a, GLint  b, GLint  c, GLint  d) {
	interceptor::getCurrentExt()->glMultiTexCoord3iARB(a,b,c,d);
}
inline void glMultiTexCoord3ivARB(GLenum  a, const GLint *b) {
	interceptor::getCurrentExt()->glMultiTexCoord3ivARB(a,b);
}
inline void glMultiTexCoord3sARB(GLenum  a, GLshort  b, GLshort  c, GLshort  d) {
	interceptor::getCurrentExt()->glMultiTexCoord3sARB(a,b,c,d);
}
inline void glMultiTexCoord3svARB(GLenum  a, const GLshort *b) {
	interceptor::getCurrentExt()->glMultiTexCoord3svARB(a,b);
}
inline void glMultiTexCoord4dARB(GLenum  a, GLdouble  b, GLdouble  c, GLdouble  d, GLdouble  e) {
	interceptor::getCurrentExt()->glMultiTexCoord4dARB(a,b,c,d,e);
}
inline void glMultiTexCoord4dvARB(GLenum  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glMultiTexCoord4dvARB(a,b);
}
inline void glMultiTexCoord4fARB(GLenum  a, GLfloat  b, GLfloat  c, GLfloat  d, GLfloat  e) {
	interceptor::getCurrentExt()->glMultiTexCoord4fARB(a,b,c,d,e);
}
inline void glMultiTexCoord4fvARB(GLenum  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glMultiTexCoord4fvARB(a,b);
}
inline void glMultiTexCoord4iARB(GLenum  a, GLint  b, GLint  c, GLint  d, GLint  e) {
	interceptor::getCurrentExt()->glMultiTexCoord4iARB(a,b,c,d,e);
}
inline void glMultiTexCoord4ivARB(GLenum  a, const GLint *b) {
	interceptor::getCurrentExt()->glMultiTexCoord4ivARB(a,b);
}
inline void glMultiTexCoord4sARB(GLenum  a, GLshort  b, GLshort  c, GLshort  d, GLshort  e) {
	interceptor::getCurrentExt()->glMultiTexCoord4sARB(a,b,c,d,e);
}
inline void glMultiTexCoord4svARB(GLenum  a, const GLshort *b) {
	interceptor::getCurrentExt()->glMultiTexCoord4svARB(a,b);
}
inline void glGenQueriesARB(GLsizei  a, GLuint *b) {
	interceptor::getCurrentExt()->glGenQueriesARB(a,b);
}
inline void glDeleteQueriesARB(GLsizei  a, const GLuint *b) {
	interceptor::getCurrentExt()->glDeleteQueriesARB(a,b);
}
inline GLboolean glIsQueryARB(GLuint  a) {
	return interceptor::getCurrentExt()->glIsQueryARB(a);
}
inline void glBeginQueryARB(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glBeginQueryARB(a,b);
}
inline void glEndQueryARB(GLenum  a) {
	interceptor::getCurrentExt()->glEndQueryARB(a);
}
inline void glGetQueryivARB(GLenum  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetQueryivARB(a,b,c);
}
inline void glGetQueryObjectivARB(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetQueryObjectivARB(a,b,c);
}
inline void glGetQueryObjectuivARB(GLuint  a, GLenum  b, GLuint *c) {
	interceptor::getCurrentExt()->glGetQueryObjectuivARB(a,b,c);
}
inline void glMaxShaderCompilerThreadsARB(GLuint  a) {
	interceptor::getCurrentExt()->glMaxShaderCompilerThreadsARB(a);
}
inline void glPointParameterfARB(GLenum  a, GLfloat  b) {
	interceptor::getCurrentExt()->glPointParameterfARB(a,b);
}
inline void glPointParameterfvARB(GLenum  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glPointParameterfvARB(a,b);
}
inline GLenum glGetGraphicsResetStatusARB(void) {
	return interceptor::getCurrentExt()->glGetGraphicsResetStatusARB();
}
inline void glGetnTexImageARB(GLenum  a, GLint  b, GLenum  c, GLenum  d, GLsizei  e, void *f) {
	interceptor::getCurrentExt()->glGetnTexImageARB(a,b,c,d,e,f);
}
inline void glReadnPixelsARB(GLint  a, GLint  b, GLsizei  c, GLsizei  d, GLenum  e, GLenum  f, GLsizei  g, void *h) {
	interceptor::getCurrentExt()->glReadnPixelsARB(a,b,c,d,e,f,g,h);
}
inline void glGetnCompressedTexImageARB(GLenum  a, GLint  b, GLsizei  c, void *d) {
	interceptor::getCurrentExt()->glGetnCompressedTexImageARB(a,b,c,d);
}
inline void glGetnUniformfvARB(GLuint  a, GLint  b, GLsizei  c, GLfloat *d) {
	interceptor::getCurrentExt()->glGetnUniformfvARB(a,b,c,d);
}
inline void glGetnUniformivARB(GLuint  a, GLint  b, GLsizei  c, GLint *d) {
	interceptor::getCurrentExt()->glGetnUniformivARB(a,b,c,d);
}
inline void glGetnUniformuivARB(GLuint  a, GLint  b, GLsizei  c, GLuint *d) {
	interceptor::getCurrentExt()->glGetnUniformuivARB(a,b,c,d);
}
inline void glGetnUniformdvARB(GLuint  a, GLint  b, GLsizei  c, GLdouble *d) {
	interceptor::getCurrentExt()->glGetnUniformdvARB(a,b,c,d);
}
inline void glGetnMapdvARB(GLenum  a, GLenum  b, GLsizei  c, GLdouble *d) {
	interceptor::getCurrentExt()->glGetnMapdvARB(a,b,c,d);
}
inline void glGetnMapfvARB(GLenum  a, GLenum  b, GLsizei  c, GLfloat *d) {
	interceptor::getCurrentExt()->glGetnMapfvARB(a,b,c,d);
}
inline void glGetnMapivARB(GLenum  a, GLenum  b, GLsizei  c, GLint *d) {
	interceptor::getCurrentExt()->glGetnMapivARB(a,b,c,d);
}
inline void glGetnPixelMapfvARB(GLenum  a, GLsizei  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetnPixelMapfvARB(a,b,c);
}
inline void glGetnPixelMapuivARB(GLenum  a, GLsizei  b, GLuint *c) {
	interceptor::getCurrentExt()->glGetnPixelMapuivARB(a,b,c);
}
inline void glGetnPixelMapusvARB(GLenum  a, GLsizei  b, GLushort *c) {
	interceptor::getCurrentExt()->glGetnPixelMapusvARB(a,b,c);
}
inline void glGetnPolygonStippleARB(GLsizei  a, GLubyte *b) {
	interceptor::getCurrentExt()->glGetnPolygonStippleARB(a,b);
}
inline void glGetnColorTableARB(GLenum  a, GLenum  b, GLenum  c, GLsizei  d, void *e) {
	interceptor::getCurrentExt()->glGetnColorTableARB(a,b,c,d,e);
}
inline void glGetnConvolutionFilterARB(GLenum  a, GLenum  b, GLenum  c, GLsizei  d, void *e) {
	interceptor::getCurrentExt()->glGetnConvolutionFilterARB(a,b,c,d,e);
}
inline void glGetnSeparableFilterARB(GLenum  a, GLenum  b, GLenum  c, GLsizei  d, void *e, GLsizei  f, void *g, void *h) {
	interceptor::getCurrentExt()->glGetnSeparableFilterARB(a,b,c,d,e,f,g,h);
}
inline void glGetnHistogramARB(GLenum  a, GLboolean  b, GLenum  c, GLenum  d, GLsizei  e, void *f) {
	interceptor::getCurrentExt()->glGetnHistogramARB(a,b,c,d,e,f);
}
inline void glGetnMinmaxARB(GLenum  a, GLboolean  b, GLenum  c, GLenum  d, GLsizei  e, void *f) {
	interceptor::getCurrentExt()->glGetnMinmaxARB(a,b,c,d,e,f);
}
inline void glFramebufferSampleLocationsfvARB(GLenum  a, GLuint  b, GLsizei  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glFramebufferSampleLocationsfvARB(a,b,c,d);
}
inline void glNamedFramebufferSampleLocationsfvARB(GLuint  a, GLuint  b, GLsizei  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glNamedFramebufferSampleLocationsfvARB(a,b,c,d);
}
inline void glEvaluateDepthValuesARB(void) {
	interceptor::getCurrentExt()->glEvaluateDepthValuesARB();
}
inline void glMinSampleShadingARB(GLfloat  a) {
	interceptor::getCurrentExt()->glMinSampleShadingARB(a);
}
inline void glDeleteObjectARB(GLhandleARB  a) {
	interceptor::getCurrentExt()->glDeleteObjectARB(a);
}
inline GLhandleARB glGetHandleARB(GLenum  a) {
	return interceptor::getCurrentExt()->glGetHandleARB(a);
}
inline void glDetachObjectARB(GLhandleARB  a, GLhandleARB  b) {
	interceptor::getCurrentExt()->glDetachObjectARB(a,b);
}
inline GLhandleARB glCreateShaderObjectARB(GLenum  a) {
	return interceptor::getCurrentExt()->glCreateShaderObjectARB(a);
}
inline void glShaderSourceARB(GLhandleARB  a, GLsizei  b, const GLcharARB **c, const GLint *d) {
	interceptor::getCurrentExt()->glShaderSourceARB(a,b,c,d);
}
inline void glCompileShaderARB(GLhandleARB  a) {
	interceptor::getCurrentExt()->glCompileShaderARB(a);
}
inline GLhandleARB glCreateProgramObjectARB(void) {
	return interceptor::getCurrentExt()->glCreateProgramObjectARB();
}
inline void glAttachObjectARB(GLhandleARB  a, GLhandleARB  b) {
	interceptor::getCurrentExt()->glAttachObjectARB(a,b);
}
inline void glLinkProgramARB(GLhandleARB  a) {
	interceptor::getCurrentExt()->glLinkProgramARB(a);
}
inline void glUseProgramObjectARB(GLhandleARB  a) {
	interceptor::getCurrentExt()->glUseProgramObjectARB(a);
}
inline void glValidateProgramARB(GLhandleARB  a) {
	interceptor::getCurrentExt()->glValidateProgramARB(a);
}
inline void glUniform1fARB(GLint  a, GLfloat  b) {
	interceptor::getCurrentExt()->glUniform1fARB(a,b);
}
inline void glUniform2fARB(GLint  a, GLfloat  b, GLfloat  c) {
	interceptor::getCurrentExt()->glUniform2fARB(a,b,c);
}
inline void glUniform3fARB(GLint  a, GLfloat  b, GLfloat  c, GLfloat  d) {
	interceptor::getCurrentExt()->glUniform3fARB(a,b,c,d);
}
inline void glUniform4fARB(GLint  a, GLfloat  b, GLfloat  c, GLfloat  d, GLfloat  e) {
	interceptor::getCurrentExt()->glUniform4fARB(a,b,c,d,e);
}
inline void glUniform1iARB(GLint  a, GLint  b) {
	interceptor::getCurrentExt()->glUniform1iARB(a,b);
}
inline void glUniform2iARB(GLint  a, GLint  b, GLint  c) {
	interceptor::getCurrentExt()->glUniform2iARB(a,b,c);
}
inline void glUniform3iARB(GLint  a, GLint  b, GLint  c, GLint  d) {
	interceptor::getCurrentExt()->glUniform3iARB(a,b,c,d);
}
inline void glUniform4iARB(GLint  a, GLint  b, GLint  c, GLint  d, GLint  e) {
	interceptor::getCurrentExt()->glUniform4iARB(a,b,c,d,e);
}
inline void glUniform1fvARB(GLint  a, GLsizei  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glUniform1fvARB(a,b,c);
}
inline void glUniform2fvARB(GLint  a, GLsizei  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glUniform2fvARB(a,b,c);
}
inline void glUniform3fvARB(GLint  a, GLsizei  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glUniform3fvARB(a,b,c);
}
inline void glUniform4fvARB(GLint  a, GLsizei  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glUniform4fvARB(a,b,c);
}
inline void glUniform1ivARB(GLint  a, GLsizei  b, const GLint *c) {
	interceptor::getCurrentExt()->glUniform1ivARB(a,b,c);
}
inline void glUniform2ivARB(GLint  a, GLsizei  b, const GLint *c) {
	interceptor::getCurrentExt()->glUniform2ivARB(a,b,c);
}
inline void glUniform3ivARB(GLint  a, GLsizei  b, const GLint *c) {
	interceptor::getCurrentExt()->glUniform3ivARB(a,b,c);
}
inline void glUniform4ivARB(GLint  a, GLsizei  b, const GLint *c) {
	interceptor::getCurrentExt()->glUniform4ivARB(a,b,c);
}
inline void glUniformMatrix2fvARB(GLint  a, GLsizei  b, GLboolean  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glUniformMatrix2fvARB(a,b,c,d);
}
inline void glUniformMatrix3fvARB(GLint  a, GLsizei  b, GLboolean  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glUniformMatrix3fvARB(a,b,c,d);
}
inline void glUniformMatrix4fvARB(GLint  a, GLsizei  b, GLboolean  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glUniformMatrix4fvARB(a,b,c,d);
}
inline void glGetObjectParameterfvARB(GLhandleARB  a, GLenum  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetObjectParameterfvARB(a,b,c);
}
inline void glGetObjectParameterivARB(GLhandleARB  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetObjectParameterivARB(a,b,c);
}
inline void glGetInfoLogARB(GLhandleARB  a, GLsizei  b, GLsizei *c, GLcharARB *d) {
	interceptor::getCurrentExt()->glGetInfoLogARB(a,b,c,d);
}
inline void glGetAttachedObjectsARB(GLhandleARB  a, GLsizei  b, GLsizei *c, GLhandleARB *d) {
	interceptor::getCurrentExt()->glGetAttachedObjectsARB(a,b,c,d);
}
inline GLint glGetUniformLocationARB(GLhandleARB  a, const GLcharARB *b) {
	return interceptor::getCurrentExt()->glGetUniformLocationARB(a,b);
}
inline void glGetActiveUniformARB(GLhandleARB  a, GLuint  b, GLsizei  c, GLsizei *d, GLint *e, GLenum *f, GLcharARB *g) {
	interceptor::getCurrentExt()->glGetActiveUniformARB(a,b,c,d,e,f,g);
}
inline void glGetUniformfvARB(GLhandleARB  a, GLint  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetUniformfvARB(a,b,c);
}
inline void glGetUniformivARB(GLhandleARB  a, GLint  b, GLint *c) {
	interceptor::getCurrentExt()->glGetUniformivARB(a,b,c);
}
inline void glGetShaderSourceARB(GLhandleARB  a, GLsizei  b, GLsizei *c, GLcharARB *d) {
	interceptor::getCurrentExt()->glGetShaderSourceARB(a,b,c,d);
}
inline void glNamedStringARB(GLenum  a, GLint  b, const GLchar *c, GLint  d, const GLchar *e) {
	interceptor::getCurrentExt()->glNamedStringARB(a,b,c,d,e);
}
inline void glDeleteNamedStringARB(GLint  a, const GLchar *b) {
	interceptor::getCurrentExt()->glDeleteNamedStringARB(a,b);
}
inline void glCompileShaderIncludeARB(GLuint  a, GLsizei  b, const GLchar *const*c, const GLint *d) {
	interceptor::getCurrentExt()->glCompileShaderIncludeARB(a,b,c,d);
}
inline GLboolean glIsNamedStringARB(GLint  a, const GLchar *b) {
	return interceptor::getCurrentExt()->glIsNamedStringARB(a,b);
}
inline void glGetNamedStringARB(GLint  a, const GLchar *b, GLsizei  c, GLint *d, GLchar *e) {
	interceptor::getCurrentExt()->glGetNamedStringARB(a,b,c,d,e);
}
inline void glGetNamedStringivARB(GLint  a, const GLchar *b, GLenum  c, GLint *d) {
	interceptor::getCurrentExt()->glGetNamedStringivARB(a,b,c,d);
}
inline void glBufferPageCommitmentARB(GLenum  a, GLintptr  b, GLsizeiptr  c, GLboolean  d) {
	interceptor::getCurrentExt()->glBufferPageCommitmentARB(a,b,c,d);
}
inline void glNamedBufferPageCommitmentEXT(GLuint  a, GLintptr  b, GLsizeiptr  c, GLboolean  d) {
	interceptor::getCurrentExt()->glNamedBufferPageCommitmentEXT(a,b,c,d);
}
inline void glNamedBufferPageCommitmentARB(GLuint  a, GLintptr  b, GLsizeiptr  c, GLboolean  d) {
	interceptor::getCurrentExt()->glNamedBufferPageCommitmentARB(a,b,c,d);
}
inline void glTexPageCommitmentARB(GLenum  a, GLint  b, GLint  c, GLint  d, GLint  e, GLsizei  f, GLsizei  g, GLsizei  h, GLboolean  i) {
	interceptor::getCurrentExt()->glTexPageCommitmentARB(a,b,c,d,e,f,g,h,i);
}
inline void glTexBufferARB(GLenum  a, GLenum  b, GLuint  c) {
	interceptor::getCurrentExt()->glTexBufferARB(a,b,c);
}
inline void glCompressedTexImage3DARB(GLenum  a, GLint  b, GLenum  c, GLsizei  d, GLsizei  e, GLsizei  f, GLint  g, GLsizei  h, const void *i) {
	interceptor::getCurrentExt()->glCompressedTexImage3DARB(a,b,c,d,e,f,g,h,i);
}
inline void glCompressedTexImage2DARB(GLenum  a, GLint  b, GLenum  c, GLsizei  d, GLsizei  e, GLint  f, GLsizei  g, const void *h) {
	interceptor::getCurrentExt()->glCompressedTexImage2DARB(a,b,c,d,e,f,g,h);
}
inline void glCompressedTexImage1DARB(GLenum  a, GLint  b, GLenum  c, GLsizei  d, GLint  e, GLsizei  f, const void *g) {
	interceptor::getCurrentExt()->glCompressedTexImage1DARB(a,b,c,d,e,f,g);
}
inline void glCompressedTexSubImage3DARB(GLenum  a, GLint  b, GLint  c, GLint  d, GLint  e, GLsizei  f, GLsizei  g, GLsizei  h, GLenum  i, GLsizei  j, const void *k) {
	interceptor::getCurrentExt()->glCompressedTexSubImage3DARB(a,b,c,d,e,f,g,h,i,j,k);
}
inline void glCompressedTexSubImage2DARB(GLenum  a, GLint  b, GLint  c, GLint  d, GLsizei  e, GLsizei  f, GLenum  g, GLsizei  h, const void *i) {
	interceptor::getCurrentExt()->glCompressedTexSubImage2DARB(a,b,c,d,e,f,g,h,i);
}
inline void glCompressedTexSubImage1DARB(GLenum  a, GLint  b, GLint  c, GLsizei  d, GLenum  e, GLsizei  f, const void *g) {
	interceptor::getCurrentExt()->glCompressedTexSubImage1DARB(a,b,c,d,e,f,g);
}
inline void glGetCompressedTexImageARB(GLenum  a, GLint  b, void *c) {
	interceptor::getCurrentExt()->glGetCompressedTexImageARB(a,b,c);
}
inline void glLoadTransposeMatrixfARB(const GLfloat *a) {
	interceptor::getCurrentExt()->glLoadTransposeMatrixfARB(a);
}
inline void glLoadTransposeMatrixdARB(const GLdouble *a) {
	interceptor::getCurrentExt()->glLoadTransposeMatrixdARB(a);
}
inline void glMultTransposeMatrixfARB(const GLfloat *a) {
	interceptor::getCurrentExt()->glMultTransposeMatrixfARB(a);
}
inline void glMultTransposeMatrixdARB(const GLdouble *a) {
	interceptor::getCurrentExt()->glMultTransposeMatrixdARB(a);
}
inline void glWeightbvARB(GLint  a, const GLbyte *b) {
	interceptor::getCurrentExt()->glWeightbvARB(a,b);
}
inline void glWeightsvARB(GLint  a, const GLshort *b) {
	interceptor::getCurrentExt()->glWeightsvARB(a,b);
}
inline void glWeightivARB(GLint  a, const GLint *b) {
	interceptor::getCurrentExt()->glWeightivARB(a,b);
}
inline void glWeightfvARB(GLint  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glWeightfvARB(a,b);
}
inline void glWeightdvARB(GLint  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glWeightdvARB(a,b);
}
inline void glWeightubvARB(GLint  a, const GLubyte *b) {
	interceptor::getCurrentExt()->glWeightubvARB(a,b);
}
inline void glWeightusvARB(GLint  a, const GLushort *b) {
	interceptor::getCurrentExt()->glWeightusvARB(a,b);
}
inline void glWeightuivARB(GLint  a, const GLuint *b) {
	interceptor::getCurrentExt()->glWeightuivARB(a,b);
}
inline void glWeightPointerARB(GLint  a, GLenum  b, GLsizei  c, const void *d) {
	interceptor::getCurrentExt()->glWeightPointerARB(a,b,c,d);
}
inline void glVertexBlendARB(GLint  a) {
	interceptor::getCurrentExt()->glVertexBlendARB(a);
}
inline void glBindBufferARB(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glBindBufferARB(a,b);
}
inline void glDeleteBuffersARB(GLsizei  a, const GLuint *b) {
	interceptor::getCurrentExt()->glDeleteBuffersARB(a,b);
}
inline void glGenBuffersARB(GLsizei  a, GLuint *b) {
	interceptor::getCurrentExt()->glGenBuffersARB(a,b);
}
inline GLboolean glIsBufferARB(GLuint  a) {
	return interceptor::getCurrentExt()->glIsBufferARB(a);
}
inline void glBufferDataARB(GLenum  a, GLsizeiptrARB  b, const void *c, GLenum  d) {
	interceptor::getCurrentExt()->glBufferDataARB(a,b,c,d);
}
inline void glBufferSubDataARB(GLenum  a, GLintptrARB  b, GLsizeiptrARB  c, const void *d) {
	interceptor::getCurrentExt()->glBufferSubDataARB(a,b,c,d);
}
inline void glGetBufferSubDataARB(GLenum  a, GLintptrARB  b, GLsizeiptrARB  c, void *d) {
	interceptor::getCurrentExt()->glGetBufferSubDataARB(a,b,c,d);
}
inline void * glMapBufferARB(GLenum  a, GLenum  b) {
	return interceptor::getCurrentExt()->glMapBufferARB(a,b);
}
inline GLboolean glUnmapBufferARB(GLenum  a) {
	return interceptor::getCurrentExt()->glUnmapBufferARB(a);
}
inline void glGetBufferParameterivARB(GLenum  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetBufferParameterivARB(a,b,c);
}
inline void glGetBufferPointervARB(GLenum  a, GLenum  b, void **c) {
	interceptor::getCurrentExt()->glGetBufferPointervARB(a,b,c);
}
inline void glVertexAttrib1dARB(GLuint  a, GLdouble  b) {
	interceptor::getCurrentExt()->glVertexAttrib1dARB(a,b);
}
inline void glVertexAttrib1dvARB(GLuint  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glVertexAttrib1dvARB(a,b);
}
inline void glVertexAttrib1fARB(GLuint  a, GLfloat  b) {
	interceptor::getCurrentExt()->glVertexAttrib1fARB(a,b);
}
inline void glVertexAttrib1fvARB(GLuint  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glVertexAttrib1fvARB(a,b);
}
inline void glVertexAttrib1sARB(GLuint  a, GLshort  b) {
	interceptor::getCurrentExt()->glVertexAttrib1sARB(a,b);
}
inline void glVertexAttrib1svARB(GLuint  a, const GLshort *b) {
	interceptor::getCurrentExt()->glVertexAttrib1svARB(a,b);
}
inline void glVertexAttrib2dARB(GLuint  a, GLdouble  b, GLdouble  c) {
	interceptor::getCurrentExt()->glVertexAttrib2dARB(a,b,c);
}
inline void glVertexAttrib2dvARB(GLuint  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glVertexAttrib2dvARB(a,b);
}
inline void glVertexAttrib2fARB(GLuint  a, GLfloat  b, GLfloat  c) {
	interceptor::getCurrentExt()->glVertexAttrib2fARB(a,b,c);
}
inline void glVertexAttrib2fvARB(GLuint  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glVertexAttrib2fvARB(a,b);
}
inline void glVertexAttrib2sARB(GLuint  a, GLshort  b, GLshort  c) {
	interceptor::getCurrentExt()->glVertexAttrib2sARB(a,b,c);
}
inline void glVertexAttrib2svARB(GLuint  a, const GLshort *b) {
	interceptor::getCurrentExt()->glVertexAttrib2svARB(a,b);
}
inline void glVertexAttrib3dARB(GLuint  a, GLdouble  b, GLdouble  c, GLdouble  d) {
	interceptor::getCurrentExt()->glVertexAttrib3dARB(a,b,c,d);
}
inline void glVertexAttrib3dvARB(GLuint  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glVertexAttrib3dvARB(a,b);
}
inline void glVertexAttrib3fARB(GLuint  a, GLfloat  b, GLfloat  c, GLfloat  d) {
	interceptor::getCurrentExt()->glVertexAttrib3fARB(a,b,c,d);
}
inline void glVertexAttrib3fvARB(GLuint  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glVertexAttrib3fvARB(a,b);
}
inline void glVertexAttrib3sARB(GLuint  a, GLshort  b, GLshort  c, GLshort  d) {
	interceptor::getCurrentExt()->glVertexAttrib3sARB(a,b,c,d);
}
inline void glVertexAttrib3svARB(GLuint  a, const GLshort *b) {
	interceptor::getCurrentExt()->glVertexAttrib3svARB(a,b);
}
inline void glVertexAttrib4NbvARB(GLuint  a, const GLbyte *b) {
	interceptor::getCurrentExt()->glVertexAttrib4NbvARB(a,b);
}
inline void glVertexAttrib4NivARB(GLuint  a, const GLint *b) {
	interceptor::getCurrentExt()->glVertexAttrib4NivARB(a,b);
}
inline void glVertexAttrib4NsvARB(GLuint  a, const GLshort *b) {
	interceptor::getCurrentExt()->glVertexAttrib4NsvARB(a,b);
}
inline void glVertexAttrib4NubARB(GLuint  a, GLubyte  b, GLubyte  c, GLubyte  d, GLubyte  e) {
	interceptor::getCurrentExt()->glVertexAttrib4NubARB(a,b,c,d,e);
}
inline void glVertexAttrib4NubvARB(GLuint  a, const GLubyte *b) {
	interceptor::getCurrentExt()->glVertexAttrib4NubvARB(a,b);
}
inline void glVertexAttrib4NuivARB(GLuint  a, const GLuint *b) {
	interceptor::getCurrentExt()->glVertexAttrib4NuivARB(a,b);
}
inline void glVertexAttrib4NusvARB(GLuint  a, const GLushort *b) {
	interceptor::getCurrentExt()->glVertexAttrib4NusvARB(a,b);
}
inline void glVertexAttrib4bvARB(GLuint  a, const GLbyte *b) {
	interceptor::getCurrentExt()->glVertexAttrib4bvARB(a,b);
}
inline void glVertexAttrib4dARB(GLuint  a, GLdouble  b, GLdouble  c, GLdouble  d, GLdouble  e) {
	interceptor::getCurrentExt()->glVertexAttrib4dARB(a,b,c,d,e);
}
inline void glVertexAttrib4dvARB(GLuint  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glVertexAttrib4dvARB(a,b);
}
inline void glVertexAttrib4fARB(GLuint  a, GLfloat  b, GLfloat  c, GLfloat  d, GLfloat  e) {
	interceptor::getCurrentExt()->glVertexAttrib4fARB(a,b,c,d,e);
}
inline void glVertexAttrib4fvARB(GLuint  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glVertexAttrib4fvARB(a,b);
}
inline void glVertexAttrib4ivARB(GLuint  a, const GLint *b) {
	interceptor::getCurrentExt()->glVertexAttrib4ivARB(a,b);
}
inline void glVertexAttrib4sARB(GLuint  a, GLshort  b, GLshort  c, GLshort  d, GLshort  e) {
	interceptor::getCurrentExt()->glVertexAttrib4sARB(a,b,c,d,e);
}
inline void glVertexAttrib4svARB(GLuint  a, const GLshort *b) {
	interceptor::getCurrentExt()->glVertexAttrib4svARB(a,b);
}
inline void glVertexAttrib4ubvARB(GLuint  a, const GLubyte *b) {
	interceptor::getCurrentExt()->glVertexAttrib4ubvARB(a,b);
}
inline void glVertexAttrib4uivARB(GLuint  a, const GLuint *b) {
	interceptor::getCurrentExt()->glVertexAttrib4uivARB(a,b);
}
inline void glVertexAttrib4usvARB(GLuint  a, const GLushort *b) {
	interceptor::getCurrentExt()->glVertexAttrib4usvARB(a,b);
}
inline void glVertexAttribPointerARB(GLuint  a, GLint  b, GLenum  c, GLboolean  d, GLsizei  e, const void *f) {
	interceptor::getCurrentExt()->glVertexAttribPointerARB(a,b,c,d,e,f);
}
inline void glEnableVertexAttribArrayARB(GLuint  a) {
	interceptor::getCurrentExt()->glEnableVertexAttribArrayARB(a);
}
inline void glDisableVertexAttribArrayARB(GLuint  a) {
	interceptor::getCurrentExt()->glDisableVertexAttribArrayARB(a);
}
inline void glGetVertexAttribdvARB(GLuint  a, GLenum  b, GLdouble *c) {
	interceptor::getCurrentExt()->glGetVertexAttribdvARB(a,b,c);
}
inline void glGetVertexAttribfvARB(GLuint  a, GLenum  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetVertexAttribfvARB(a,b,c);
}
inline void glGetVertexAttribivARB(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetVertexAttribivARB(a,b,c);
}
inline void glGetVertexAttribPointervARB(GLuint  a, GLenum  b, void **c) {
	interceptor::getCurrentExt()->glGetVertexAttribPointervARB(a,b,c);
}
inline void glBindAttribLocationARB(GLhandleARB  a, GLuint  b, const GLcharARB *c) {
	interceptor::getCurrentExt()->glBindAttribLocationARB(a,b,c);
}
inline void glGetActiveAttribARB(GLhandleARB  a, GLuint  b, GLsizei  c, GLsizei *d, GLint *e, GLenum *f, GLcharARB *g) {
	interceptor::getCurrentExt()->glGetActiveAttribARB(a,b,c,d,e,f,g);
}
inline GLint glGetAttribLocationARB(GLhandleARB  a, const GLcharARB *b) {
	return interceptor::getCurrentExt()->glGetAttribLocationARB(a,b);
}
inline void glWindowPos2dARB(GLdouble  a, GLdouble  b) {
	interceptor::getCurrentExt()->glWindowPos2dARB(a,b);
}
inline void glWindowPos2dvARB(const GLdouble *a) {
	interceptor::getCurrentExt()->glWindowPos2dvARB(a);
}
inline void glWindowPos2fARB(GLfloat  a, GLfloat  b) {
	interceptor::getCurrentExt()->glWindowPos2fARB(a,b);
}
inline void glWindowPos2fvARB(const GLfloat *a) {
	interceptor::getCurrentExt()->glWindowPos2fvARB(a);
}
inline void glWindowPos2iARB(GLint  a, GLint  b) {
	interceptor::getCurrentExt()->glWindowPos2iARB(a,b);
}
inline void glWindowPos2ivARB(const GLint *a) {
	interceptor::getCurrentExt()->glWindowPos2ivARB(a);
}
inline void glWindowPos2sARB(GLshort  a, GLshort  b) {
	interceptor::getCurrentExt()->glWindowPos2sARB(a,b);
}
inline void glWindowPos2svARB(const GLshort *a) {
	interceptor::getCurrentExt()->glWindowPos2svARB(a);
}
inline void glWindowPos3dARB(GLdouble  a, GLdouble  b, GLdouble  c) {
	interceptor::getCurrentExt()->glWindowPos3dARB(a,b,c);
}
inline void glWindowPos3dvARB(const GLdouble *a) {
	interceptor::getCurrentExt()->glWindowPos3dvARB(a);
}
inline void glWindowPos3fARB(GLfloat  a, GLfloat  b, GLfloat  c) {
	interceptor::getCurrentExt()->glWindowPos3fARB(a,b,c);
}
inline void glWindowPos3fvARB(const GLfloat *a) {
	interceptor::getCurrentExt()->glWindowPos3fvARB(a);
}
inline void glWindowPos3iARB(GLint  a, GLint  b, GLint  c) {
	interceptor::getCurrentExt()->glWindowPos3iARB(a,b,c);
}
inline void glWindowPos3ivARB(const GLint *a) {
	interceptor::getCurrentExt()->glWindowPos3ivARB(a);
}
inline void glWindowPos3sARB(GLshort  a, GLshort  b, GLshort  c) {
	interceptor::getCurrentExt()->glWindowPos3sARB(a,b,c);
}
inline void glWindowPos3svARB(const GLshort *a) {
	interceptor::getCurrentExt()->glWindowPos3svARB(a);
}
inline void glBlendBarrierKHR(void) {
	interceptor::getCurrentExt()->glBlendBarrierKHR();
}
inline void glMultiTexCoord1bOES(GLenum  a, GLbyte  b) {
	interceptor::getCurrentExt()->glMultiTexCoord1bOES(a,b);
}
inline void glMultiTexCoord1bvOES(GLenum  a, const GLbyte *b) {
	interceptor::getCurrentExt()->glMultiTexCoord1bvOES(a,b);
}
inline void glMultiTexCoord2bOES(GLenum  a, GLbyte  b, GLbyte  c) {
	interceptor::getCurrentExt()->glMultiTexCoord2bOES(a,b,c);
}
inline void glMultiTexCoord2bvOES(GLenum  a, const GLbyte *b) {
	interceptor::getCurrentExt()->glMultiTexCoord2bvOES(a,b);
}
inline void glMultiTexCoord3bOES(GLenum  a, GLbyte  b, GLbyte  c, GLbyte  d) {
	interceptor::getCurrentExt()->glMultiTexCoord3bOES(a,b,c,d);
}
inline void glMultiTexCoord3bvOES(GLenum  a, const GLbyte *b) {
	interceptor::getCurrentExt()->glMultiTexCoord3bvOES(a,b);
}
inline void glMultiTexCoord4bOES(GLenum  a, GLbyte  b, GLbyte  c, GLbyte  d, GLbyte  e) {
	interceptor::getCurrentExt()->glMultiTexCoord4bOES(a,b,c,d,e);
}
inline void glMultiTexCoord4bvOES(GLenum  a, const GLbyte *b) {
	interceptor::getCurrentExt()->glMultiTexCoord4bvOES(a,b);
}
inline void glTexCoord1bOES(GLbyte  a) {
	interceptor::getCurrentExt()->glTexCoord1bOES(a);
}
inline void glTexCoord1bvOES(const GLbyte *a) {
	interceptor::getCurrentExt()->glTexCoord1bvOES(a);
}
inline void glTexCoord2bOES(GLbyte  a, GLbyte  b) {
	interceptor::getCurrentExt()->glTexCoord2bOES(a,b);
}
inline void glTexCoord2bvOES(const GLbyte *a) {
	interceptor::getCurrentExt()->glTexCoord2bvOES(a);
}
inline void glTexCoord3bOES(GLbyte  a, GLbyte  b, GLbyte  c) {
	interceptor::getCurrentExt()->glTexCoord3bOES(a,b,c);
}
inline void glTexCoord3bvOES(const GLbyte *a) {
	interceptor::getCurrentExt()->glTexCoord3bvOES(a);
}
inline void glTexCoord4bOES(GLbyte  a, GLbyte  b, GLbyte  c, GLbyte  d) {
	interceptor::getCurrentExt()->glTexCoord4bOES(a,b,c,d);
}
inline void glTexCoord4bvOES(const GLbyte *a) {
	interceptor::getCurrentExt()->glTexCoord4bvOES(a);
}
inline void glVertex2bOES(GLbyte  a, GLbyte  b) {
	interceptor::getCurrentExt()->glVertex2bOES(a,b);
}
inline void glVertex2bvOES(const GLbyte *a) {
	interceptor::getCurrentExt()->glVertex2bvOES(a);
}
inline void glVertex3bOES(GLbyte  a, GLbyte  b, GLbyte  c) {
	interceptor::getCurrentExt()->glVertex3bOES(a,b,c);
}
inline void glVertex3bvOES(const GLbyte *a) {
	interceptor::getCurrentExt()->glVertex3bvOES(a);
}
inline void glVertex4bOES(GLbyte  a, GLbyte  b, GLbyte  c, GLbyte  d) {
	interceptor::getCurrentExt()->glVertex4bOES(a,b,c,d);
}
inline void glVertex4bvOES(const GLbyte *a) {
	interceptor::getCurrentExt()->glVertex4bvOES(a);
}
inline void glAlphaFuncxOES(GLenum  a, GLfixed  b) {
	interceptor::getCurrentExt()->glAlphaFuncxOES(a,b);
}
inline void glClearColorxOES(GLfixed  a, GLfixed  b, GLfixed  c, GLfixed  d) {
	interceptor::getCurrentExt()->glClearColorxOES(a,b,c,d);
}
inline void glClearDepthxOES(GLfixed  a) {
	interceptor::getCurrentExt()->glClearDepthxOES(a);
}
inline void glClipPlanexOES(GLenum  a, const GLfixed *b) {
	interceptor::getCurrentExt()->glClipPlanexOES(a,b);
}
inline void glColor4xOES(GLfixed  a, GLfixed  b, GLfixed  c, GLfixed  d) {
	interceptor::getCurrentExt()->glColor4xOES(a,b,c,d);
}
inline void glDepthRangexOES(GLfixed  a, GLfixed  b) {
	interceptor::getCurrentExt()->glDepthRangexOES(a,b);
}
inline void glFogxOES(GLenum  a, GLfixed  b) {
	interceptor::getCurrentExt()->glFogxOES(a,b);
}
inline void glFogxvOES(GLenum  a, const GLfixed *b) {
	interceptor::getCurrentExt()->glFogxvOES(a,b);
}
inline void glFrustumxOES(GLfixed  a, GLfixed  b, GLfixed  c, GLfixed  d, GLfixed  e, GLfixed  f) {
	interceptor::getCurrentExt()->glFrustumxOES(a,b,c,d,e,f);
}
inline void glGetClipPlanexOES(GLenum  a, GLfixed *b) {
	interceptor::getCurrentExt()->glGetClipPlanexOES(a,b);
}
inline void glGetFixedvOES(GLenum  a, GLfixed *b) {
	interceptor::getCurrentExt()->glGetFixedvOES(a,b);
}
inline void glGetTexEnvxvOES(GLenum  a, GLenum  b, GLfixed *c) {
	interceptor::getCurrentExt()->glGetTexEnvxvOES(a,b,c);
}
inline void glGetTexParameterxvOES(GLenum  a, GLenum  b, GLfixed *c) {
	interceptor::getCurrentExt()->glGetTexParameterxvOES(a,b,c);
}
inline void glLightModelxOES(GLenum  a, GLfixed  b) {
	interceptor::getCurrentExt()->glLightModelxOES(a,b);
}
inline void glLightModelxvOES(GLenum  a, const GLfixed *b) {
	interceptor::getCurrentExt()->glLightModelxvOES(a,b);
}
inline void glLightxOES(GLenum  a, GLenum  b, GLfixed  c) {
	interceptor::getCurrentExt()->glLightxOES(a,b,c);
}
inline void glLightxvOES(GLenum  a, GLenum  b, const GLfixed *c) {
	interceptor::getCurrentExt()->glLightxvOES(a,b,c);
}
inline void glLineWidthxOES(GLfixed  a) {
	interceptor::getCurrentExt()->glLineWidthxOES(a);
}
inline void glLoadMatrixxOES(const GLfixed *a) {
	interceptor::getCurrentExt()->glLoadMatrixxOES(a);
}
inline void glMaterialxOES(GLenum  a, GLenum  b, GLfixed  c) {
	interceptor::getCurrentExt()->glMaterialxOES(a,b,c);
}
inline void glMaterialxvOES(GLenum  a, GLenum  b, const GLfixed *c) {
	interceptor::getCurrentExt()->glMaterialxvOES(a,b,c);
}
inline void glMultMatrixxOES(const GLfixed *a) {
	interceptor::getCurrentExt()->glMultMatrixxOES(a);
}
inline void glMultiTexCoord4xOES(GLenum  a, GLfixed  b, GLfixed  c, GLfixed  d, GLfixed  e) {
	interceptor::getCurrentExt()->glMultiTexCoord4xOES(a,b,c,d,e);
}
inline void glNormal3xOES(GLfixed  a, GLfixed  b, GLfixed  c) {
	interceptor::getCurrentExt()->glNormal3xOES(a,b,c);
}
inline void glOrthoxOES(GLfixed  a, GLfixed  b, GLfixed  c, GLfixed  d, GLfixed  e, GLfixed  f) {
	interceptor::getCurrentExt()->glOrthoxOES(a,b,c,d,e,f);
}
inline void glPointParameterxvOES(GLenum  a, const GLfixed *b) {
	interceptor::getCurrentExt()->glPointParameterxvOES(a,b);
}
inline void glPointSizexOES(GLfixed  a) {
	interceptor::getCurrentExt()->glPointSizexOES(a);
}
inline void glPolygonOffsetxOES(GLfixed  a, GLfixed  b) {
	interceptor::getCurrentExt()->glPolygonOffsetxOES(a,b);
}
inline void glRotatexOES(GLfixed  a, GLfixed  b, GLfixed  c, GLfixed  d) {
	interceptor::getCurrentExt()->glRotatexOES(a,b,c,d);
}
inline void glScalexOES(GLfixed  a, GLfixed  b, GLfixed  c) {
	interceptor::getCurrentExt()->glScalexOES(a,b,c);
}
inline void glTexEnvxOES(GLenum  a, GLenum  b, GLfixed  c) {
	interceptor::getCurrentExt()->glTexEnvxOES(a,b,c);
}
inline void glTexEnvxvOES(GLenum  a, GLenum  b, const GLfixed *c) {
	interceptor::getCurrentExt()->glTexEnvxvOES(a,b,c);
}
inline void glTexParameterxOES(GLenum  a, GLenum  b, GLfixed  c) {
	interceptor::getCurrentExt()->glTexParameterxOES(a,b,c);
}
inline void glTexParameterxvOES(GLenum  a, GLenum  b, const GLfixed *c) {
	interceptor::getCurrentExt()->glTexParameterxvOES(a,b,c);
}
inline void glTranslatexOES(GLfixed  a, GLfixed  b, GLfixed  c) {
	interceptor::getCurrentExt()->glTranslatexOES(a,b,c);
}
inline void glAccumxOES(GLenum  a, GLfixed  b) {
	interceptor::getCurrentExt()->glAccumxOES(a,b);
}
inline void glBitmapxOES(GLsizei  a, GLsizei  b, GLfixed  c, GLfixed  d, GLfixed  e, GLfixed  f, const GLubyte *g) {
	interceptor::getCurrentExt()->glBitmapxOES(a,b,c,d,e,f,g);
}
inline void glBlendColorxOES(GLfixed  a, GLfixed  b, GLfixed  c, GLfixed  d) {
	interceptor::getCurrentExt()->glBlendColorxOES(a,b,c,d);
}
inline void glClearAccumxOES(GLfixed  a, GLfixed  b, GLfixed  c, GLfixed  d) {
	interceptor::getCurrentExt()->glClearAccumxOES(a,b,c,d);
}
inline void glColor3xOES(GLfixed  a, GLfixed  b, GLfixed  c) {
	interceptor::getCurrentExt()->glColor3xOES(a,b,c);
}
inline void glColor3xvOES(const GLfixed *a) {
	interceptor::getCurrentExt()->glColor3xvOES(a);
}
inline void glColor4xvOES(const GLfixed *a) {
	interceptor::getCurrentExt()->glColor4xvOES(a);
}
inline void glConvolutionParameterxOES(GLenum  a, GLenum  b, GLfixed  c) {
	interceptor::getCurrentExt()->glConvolutionParameterxOES(a,b,c);
}
inline void glConvolutionParameterxvOES(GLenum  a, GLenum  b, const GLfixed *c) {
	interceptor::getCurrentExt()->glConvolutionParameterxvOES(a,b,c);
}
inline void glEvalCoord1xOES(GLfixed  a) {
	interceptor::getCurrentExt()->glEvalCoord1xOES(a);
}
inline void glEvalCoord1xvOES(const GLfixed *a) {
	interceptor::getCurrentExt()->glEvalCoord1xvOES(a);
}
inline void glEvalCoord2xOES(GLfixed  a, GLfixed  b) {
	interceptor::getCurrentExt()->glEvalCoord2xOES(a,b);
}
inline void glEvalCoord2xvOES(const GLfixed *a) {
	interceptor::getCurrentExt()->glEvalCoord2xvOES(a);
}
inline void glFeedbackBufferxOES(GLsizei  a, GLenum  b, const GLfixed *c) {
	interceptor::getCurrentExt()->glFeedbackBufferxOES(a,b,c);
}
inline void glGetConvolutionParameterxvOES(GLenum  a, GLenum  b, GLfixed *c) {
	interceptor::getCurrentExt()->glGetConvolutionParameterxvOES(a,b,c);
}
inline void glGetHistogramParameterxvOES(GLenum  a, GLenum  b, GLfixed *c) {
	interceptor::getCurrentExt()->glGetHistogramParameterxvOES(a,b,c);
}
inline void glGetLightxOES(GLenum  a, GLenum  b, GLfixed *c) {
	interceptor::getCurrentExt()->glGetLightxOES(a,b,c);
}
inline void glGetMapxvOES(GLenum  a, GLenum  b, GLfixed *c) {
	interceptor::getCurrentExt()->glGetMapxvOES(a,b,c);
}
inline void glGetMaterialxOES(GLenum  a, GLenum  b, GLfixed  c) {
	interceptor::getCurrentExt()->glGetMaterialxOES(a,b,c);
}
inline void glGetPixelMapxv(GLenum  a, GLint  b, GLfixed *c) {
	interceptor::getCurrentExt()->glGetPixelMapxv(a,b,c);
}
inline void glGetTexGenxvOES(GLenum  a, GLenum  b, GLfixed *c) {
	interceptor::getCurrentExt()->glGetTexGenxvOES(a,b,c);
}
inline void glGetTexLevelParameterxvOES(GLenum  a, GLint  b, GLenum  c, GLfixed *d) {
	interceptor::getCurrentExt()->glGetTexLevelParameterxvOES(a,b,c,d);
}
inline void glIndexxOES(GLfixed  a) {
	interceptor::getCurrentExt()->glIndexxOES(a);
}
inline void glIndexxvOES(const GLfixed *a) {
	interceptor::getCurrentExt()->glIndexxvOES(a);
}
inline void glLoadTransposeMatrixxOES(const GLfixed *a) {
	interceptor::getCurrentExt()->glLoadTransposeMatrixxOES(a);
}
inline void glMap1xOES(GLenum  a, GLfixed  b, GLfixed  c, GLint  d, GLint  e, GLfixed  f) {
	interceptor::getCurrentExt()->glMap1xOES(a,b,c,d,e,f);
}
inline void glMap2xOES(GLenum  a, GLfixed  b, GLfixed  c, GLint  d, GLint  e, GLfixed  f, GLfixed  g, GLint  h, GLint  i, GLfixed  j) {
	interceptor::getCurrentExt()->glMap2xOES(a,b,c,d,e,f,g,h,i,j);
}
inline void glMapGrid1xOES(GLint  a, GLfixed  b, GLfixed  c) {
	interceptor::getCurrentExt()->glMapGrid1xOES(a,b,c);
}
inline void glMapGrid2xOES(GLint  a, GLfixed  b, GLfixed  c, GLfixed  d, GLfixed  e) {
	interceptor::getCurrentExt()->glMapGrid2xOES(a,b,c,d,e);
}
inline void glMultTransposeMatrixxOES(const GLfixed *a) {
	interceptor::getCurrentExt()->glMultTransposeMatrixxOES(a);
}
inline void glMultiTexCoord1xOES(GLenum  a, GLfixed  b) {
	interceptor::getCurrentExt()->glMultiTexCoord1xOES(a,b);
}
inline void glMultiTexCoord1xvOES(GLenum  a, const GLfixed *b) {
	interceptor::getCurrentExt()->glMultiTexCoord1xvOES(a,b);
}
inline void glMultiTexCoord2xOES(GLenum  a, GLfixed  b, GLfixed  c) {
	interceptor::getCurrentExt()->glMultiTexCoord2xOES(a,b,c);
}
inline void glMultiTexCoord2xvOES(GLenum  a, const GLfixed *b) {
	interceptor::getCurrentExt()->glMultiTexCoord2xvOES(a,b);
}
inline void glMultiTexCoord3xOES(GLenum  a, GLfixed  b, GLfixed  c, GLfixed  d) {
	interceptor::getCurrentExt()->glMultiTexCoord3xOES(a,b,c,d);
}
inline void glMultiTexCoord3xvOES(GLenum  a, const GLfixed *b) {
	interceptor::getCurrentExt()->glMultiTexCoord3xvOES(a,b);
}
inline void glMultiTexCoord4xvOES(GLenum  a, const GLfixed *b) {
	interceptor::getCurrentExt()->glMultiTexCoord4xvOES(a,b);
}
inline void glNormal3xvOES(const GLfixed *a) {
	interceptor::getCurrentExt()->glNormal3xvOES(a);
}
inline void glPassThroughxOES(GLfixed  a) {
	interceptor::getCurrentExt()->glPassThroughxOES(a);
}
inline void glPixelMapx(GLenum  a, GLint  b, const GLfixed *c) {
	interceptor::getCurrentExt()->glPixelMapx(a,b,c);
}
inline void glPixelStorex(GLenum  a, GLfixed  b) {
	interceptor::getCurrentExt()->glPixelStorex(a,b);
}
inline void glPixelTransferxOES(GLenum  a, GLfixed  b) {
	interceptor::getCurrentExt()->glPixelTransferxOES(a,b);
}
inline void glPixelZoomxOES(GLfixed  a, GLfixed  b) {
	interceptor::getCurrentExt()->glPixelZoomxOES(a,b);
}
inline void glPrioritizeTexturesxOES(GLsizei  a, const GLuint *b, const GLfixed *c) {
	interceptor::getCurrentExt()->glPrioritizeTexturesxOES(a,b,c);
}
inline void glRasterPos2xOES(GLfixed  a, GLfixed  b) {
	interceptor::getCurrentExt()->glRasterPos2xOES(a,b);
}
inline void glRasterPos2xvOES(const GLfixed *a) {
	interceptor::getCurrentExt()->glRasterPos2xvOES(a);
}
inline void glRasterPos3xOES(GLfixed  a, GLfixed  b, GLfixed  c) {
	interceptor::getCurrentExt()->glRasterPos3xOES(a,b,c);
}
inline void glRasterPos3xvOES(const GLfixed *a) {
	interceptor::getCurrentExt()->glRasterPos3xvOES(a);
}
inline void glRasterPos4xOES(GLfixed  a, GLfixed  b, GLfixed  c, GLfixed  d) {
	interceptor::getCurrentExt()->glRasterPos4xOES(a,b,c,d);
}
inline void glRasterPos4xvOES(const GLfixed *a) {
	interceptor::getCurrentExt()->glRasterPos4xvOES(a);
}
inline void glRectxOES(GLfixed  a, GLfixed  b, GLfixed  c, GLfixed  d) {
	interceptor::getCurrentExt()->glRectxOES(a,b,c,d);
}
inline void glRectxvOES(const GLfixed *a, const GLfixed *b) {
	interceptor::getCurrentExt()->glRectxvOES(a,b);
}
inline void glTexCoord1xOES(GLfixed  a) {
	interceptor::getCurrentExt()->glTexCoord1xOES(a);
}
inline void glTexCoord1xvOES(const GLfixed *a) {
	interceptor::getCurrentExt()->glTexCoord1xvOES(a);
}
inline void glTexCoord2xOES(GLfixed  a, GLfixed  b) {
	interceptor::getCurrentExt()->glTexCoord2xOES(a,b);
}
inline void glTexCoord2xvOES(const GLfixed *a) {
	interceptor::getCurrentExt()->glTexCoord2xvOES(a);
}
inline void glTexCoord3xOES(GLfixed  a, GLfixed  b, GLfixed  c) {
	interceptor::getCurrentExt()->glTexCoord3xOES(a,b,c);
}
inline void glTexCoord3xvOES(const GLfixed *a) {
	interceptor::getCurrentExt()->glTexCoord3xvOES(a);
}
inline void glTexCoord4xOES(GLfixed  a, GLfixed  b, GLfixed  c, GLfixed  d) {
	interceptor::getCurrentExt()->glTexCoord4xOES(a,b,c,d);
}
inline void glTexCoord4xvOES(const GLfixed *a) {
	interceptor::getCurrentExt()->glTexCoord4xvOES(a);
}
inline void glTexGenxOES(GLenum  a, GLenum  b, GLfixed  c) {
	interceptor::getCurrentExt()->glTexGenxOES(a,b,c);
}
inline void glTexGenxvOES(GLenum  a, GLenum  b, const GLfixed *c) {
	interceptor::getCurrentExt()->glTexGenxvOES(a,b,c);
}
inline void glVertex2xOES(GLfixed  a) {
	interceptor::getCurrentExt()->glVertex2xOES(a);
}
inline void glVertex2xvOES(const GLfixed *a) {
	interceptor::getCurrentExt()->glVertex2xvOES(a);
}
inline void glVertex3xOES(GLfixed  a, GLfixed  b) {
	interceptor::getCurrentExt()->glVertex3xOES(a,b);
}
inline void glVertex3xvOES(const GLfixed *a) {
	interceptor::getCurrentExt()->glVertex3xvOES(a);
}
inline void glVertex4xOES(GLfixed  a, GLfixed  b, GLfixed  c) {
	interceptor::getCurrentExt()->glVertex4xOES(a,b,c);
}
inline void glVertex4xvOES(const GLfixed *a) {
	interceptor::getCurrentExt()->glVertex4xvOES(a);
}
inline GLbitfield glQueryMatrixxOES(GLfixed *a, GLint *b) {
	return interceptor::getCurrentExt()->glQueryMatrixxOES(a,b);
}
inline void glClearDepthfOES(GLclampf  a) {
	interceptor::getCurrentExt()->glClearDepthfOES(a);
}
inline void glClipPlanefOES(GLenum  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glClipPlanefOES(a,b);
}
inline void glDepthRangefOES(GLclampf  a, GLclampf  b) {
	interceptor::getCurrentExt()->glDepthRangefOES(a,b);
}
inline void glFrustumfOES(GLfloat  a, GLfloat  b, GLfloat  c, GLfloat  d, GLfloat  e, GLfloat  f) {
	interceptor::getCurrentExt()->glFrustumfOES(a,b,c,d,e,f);
}
inline void glGetClipPlanefOES(GLenum  a, GLfloat *b) {
	interceptor::getCurrentExt()->glGetClipPlanefOES(a,b);
}
inline void glOrthofOES(GLfloat  a, GLfloat  b, GLfloat  c, GLfloat  d, GLfloat  e, GLfloat  f) {
	interceptor::getCurrentExt()->glOrthofOES(a,b,c,d,e,f);
}
inline void glTbufferMask3DFX(GLuint  a) {
	interceptor::getCurrentExt()->glTbufferMask3DFX(a);
}
inline void glDebugMessageEnableAMD(GLenum  a, GLenum  b, GLsizei  c, const GLuint *d, GLboolean  e) {
	interceptor::getCurrentExt()->glDebugMessageEnableAMD(a,b,c,d,e);
}
inline void glDebugMessageInsertAMD(GLenum  a, GLenum  b, GLuint  c, GLsizei  d, const GLchar *e) {
	interceptor::getCurrentExt()->glDebugMessageInsertAMD(a,b,c,d,e);
}
inline void glDebugMessageCallbackAMD(GLDEBUGPROCAMD  a, void *b) {
	interceptor::getCurrentExt()->glDebugMessageCallbackAMD(a,b);
}
inline GLuint glGetDebugMessageLogAMD(GLuint  a, GLsizei  b, GLenum *c, GLuint *d, GLuint *e, GLsizei *f, GLchar *g) {
	return interceptor::getCurrentExt()->glGetDebugMessageLogAMD(a,b,c,d,e,f,g);
}
inline void glBlendFuncIndexedAMD(GLuint  a, GLenum  b, GLenum  c) {
	interceptor::getCurrentExt()->glBlendFuncIndexedAMD(a,b,c);
}
inline void glBlendFuncSeparateIndexedAMD(GLuint  a, GLenum  b, GLenum  c, GLenum  d, GLenum  e) {
	interceptor::getCurrentExt()->glBlendFuncSeparateIndexedAMD(a,b,c,d,e);
}
inline void glBlendEquationIndexedAMD(GLuint  a, GLenum  b) {
	interceptor::getCurrentExt()->glBlendEquationIndexedAMD(a,b);
}
inline void glBlendEquationSeparateIndexedAMD(GLuint  a, GLenum  b, GLenum  c) {
	interceptor::getCurrentExt()->glBlendEquationSeparateIndexedAMD(a,b,c);
}
inline void glUniform1i64NV(GLint  a, GLint64EXT  b) {
	interceptor::getCurrentExt()->glUniform1i64NV(a,b);
}
inline void glUniform2i64NV(GLint  a, GLint64EXT  b, GLint64EXT  c) {
	interceptor::getCurrentExt()->glUniform2i64NV(a,b,c);
}
inline void glUniform3i64NV(GLint  a, GLint64EXT  b, GLint64EXT  c, GLint64EXT  d) {
	interceptor::getCurrentExt()->glUniform3i64NV(a,b,c,d);
}
inline void glUniform4i64NV(GLint  a, GLint64EXT  b, GLint64EXT  c, GLint64EXT  d, GLint64EXT  e) {
	interceptor::getCurrentExt()->glUniform4i64NV(a,b,c,d,e);
}
inline void glUniform1i64vNV(GLint  a, GLsizei  b, const GLint64EXT *c) {
	interceptor::getCurrentExt()->glUniform1i64vNV(a,b,c);
}
inline void glUniform2i64vNV(GLint  a, GLsizei  b, const GLint64EXT *c) {
	interceptor::getCurrentExt()->glUniform2i64vNV(a,b,c);
}
inline void glUniform3i64vNV(GLint  a, GLsizei  b, const GLint64EXT *c) {
	interceptor::getCurrentExt()->glUniform3i64vNV(a,b,c);
}
inline void glUniform4i64vNV(GLint  a, GLsizei  b, const GLint64EXT *c) {
	interceptor::getCurrentExt()->glUniform4i64vNV(a,b,c);
}
inline void glUniform1ui64NV(GLint  a, GLuint64EXT  b) {
	interceptor::getCurrentExt()->glUniform1ui64NV(a,b);
}
inline void glUniform2ui64NV(GLint  a, GLuint64EXT  b, GLuint64EXT  c) {
	interceptor::getCurrentExt()->glUniform2ui64NV(a,b,c);
}
inline void glUniform3ui64NV(GLint  a, GLuint64EXT  b, GLuint64EXT  c, GLuint64EXT  d) {
	interceptor::getCurrentExt()->glUniform3ui64NV(a,b,c,d);
}
inline void glUniform4ui64NV(GLint  a, GLuint64EXT  b, GLuint64EXT  c, GLuint64EXT  d, GLuint64EXT  e) {
	interceptor::getCurrentExt()->glUniform4ui64NV(a,b,c,d,e);
}
inline void glUniform1ui64vNV(GLint  a, GLsizei  b, const GLuint64EXT *c) {
	interceptor::getCurrentExt()->glUniform1ui64vNV(a,b,c);
}
inline void glUniform2ui64vNV(GLint  a, GLsizei  b, const GLuint64EXT *c) {
	interceptor::getCurrentExt()->glUniform2ui64vNV(a,b,c);
}
inline void glUniform3ui64vNV(GLint  a, GLsizei  b, const GLuint64EXT *c) {
	interceptor::getCurrentExt()->glUniform3ui64vNV(a,b,c);
}
inline void glUniform4ui64vNV(GLint  a, GLsizei  b, const GLuint64EXT *c) {
	interceptor::getCurrentExt()->glUniform4ui64vNV(a,b,c);
}
inline void glGetUniformi64vNV(GLuint  a, GLint  b, GLint64EXT *c) {
	interceptor::getCurrentExt()->glGetUniformi64vNV(a,b,c);
}
inline void glGetUniformui64vNV(GLuint  a, GLint  b, GLuint64EXT *c) {
	interceptor::getCurrentExt()->glGetUniformui64vNV(a,b,c);
}
inline void glProgramUniform1i64NV(GLuint  a, GLint  b, GLint64EXT  c) {
	interceptor::getCurrentExt()->glProgramUniform1i64NV(a,b,c);
}
inline void glProgramUniform2i64NV(GLuint  a, GLint  b, GLint64EXT  c, GLint64EXT  d) {
	interceptor::getCurrentExt()->glProgramUniform2i64NV(a,b,c,d);
}
inline void glProgramUniform3i64NV(GLuint  a, GLint  b, GLint64EXT  c, GLint64EXT  d, GLint64EXT  e) {
	interceptor::getCurrentExt()->glProgramUniform3i64NV(a,b,c,d,e);
}
inline void glProgramUniform4i64NV(GLuint  a, GLint  b, GLint64EXT  c, GLint64EXT  d, GLint64EXT  e, GLint64EXT  f) {
	interceptor::getCurrentExt()->glProgramUniform4i64NV(a,b,c,d,e,f);
}
inline void glProgramUniform1i64vNV(GLuint  a, GLint  b, GLsizei  c, const GLint64EXT *d) {
	interceptor::getCurrentExt()->glProgramUniform1i64vNV(a,b,c,d);
}
inline void glProgramUniform2i64vNV(GLuint  a, GLint  b, GLsizei  c, const GLint64EXT *d) {
	interceptor::getCurrentExt()->glProgramUniform2i64vNV(a,b,c,d);
}
inline void glProgramUniform3i64vNV(GLuint  a, GLint  b, GLsizei  c, const GLint64EXT *d) {
	interceptor::getCurrentExt()->glProgramUniform3i64vNV(a,b,c,d);
}
inline void glProgramUniform4i64vNV(GLuint  a, GLint  b, GLsizei  c, const GLint64EXT *d) {
	interceptor::getCurrentExt()->glProgramUniform4i64vNV(a,b,c,d);
}
inline void glProgramUniform1ui64NV(GLuint  a, GLint  b, GLuint64EXT  c) {
	interceptor::getCurrentExt()->glProgramUniform1ui64NV(a,b,c);
}
inline void glProgramUniform2ui64NV(GLuint  a, GLint  b, GLuint64EXT  c, GLuint64EXT  d) {
	interceptor::getCurrentExt()->glProgramUniform2ui64NV(a,b,c,d);
}
inline void glProgramUniform3ui64NV(GLuint  a, GLint  b, GLuint64EXT  c, GLuint64EXT  d, GLuint64EXT  e) {
	interceptor::getCurrentExt()->glProgramUniform3ui64NV(a,b,c,d,e);
}
inline void glProgramUniform4ui64NV(GLuint  a, GLint  b, GLuint64EXT  c, GLuint64EXT  d, GLuint64EXT  e, GLuint64EXT  f) {
	interceptor::getCurrentExt()->glProgramUniform4ui64NV(a,b,c,d,e,f);
}
inline void glProgramUniform1ui64vNV(GLuint  a, GLint  b, GLsizei  c, const GLuint64EXT *d) {
	interceptor::getCurrentExt()->glProgramUniform1ui64vNV(a,b,c,d);
}
inline void glProgramUniform2ui64vNV(GLuint  a, GLint  b, GLsizei  c, const GLuint64EXT *d) {
	interceptor::getCurrentExt()->glProgramUniform2ui64vNV(a,b,c,d);
}
inline void glProgramUniform3ui64vNV(GLuint  a, GLint  b, GLsizei  c, const GLuint64EXT *d) {
	interceptor::getCurrentExt()->glProgramUniform3ui64vNV(a,b,c,d);
}
inline void glProgramUniform4ui64vNV(GLuint  a, GLint  b, GLsizei  c, const GLuint64EXT *d) {
	interceptor::getCurrentExt()->glProgramUniform4ui64vNV(a,b,c,d);
}
inline void glVertexAttribParameteriAMD(GLuint  a, GLenum  b, GLint  c) {
	interceptor::getCurrentExt()->glVertexAttribParameteriAMD(a,b,c);
}
inline void glMultiDrawArraysIndirectAMD(GLenum  a, const void *b, GLsizei  c, GLsizei  d) {
	interceptor::getCurrentExt()->glMultiDrawArraysIndirectAMD(a,b,c,d);
}
inline void glMultiDrawElementsIndirectAMD(GLenum  a, GLenum  b, const void *c, GLsizei  d, GLsizei  e) {
	interceptor::getCurrentExt()->glMultiDrawElementsIndirectAMD(a,b,c,d,e);
}
inline void glGenNamesAMD(GLenum  a, GLuint  b, GLuint *c) {
	interceptor::getCurrentExt()->glGenNamesAMD(a,b,c);
}
inline void glDeleteNamesAMD(GLenum  a, GLuint  b, const GLuint *c) {
	interceptor::getCurrentExt()->glDeleteNamesAMD(a,b,c);
}
inline GLboolean glIsNameAMD(GLenum  a, GLuint  b) {
	return interceptor::getCurrentExt()->glIsNameAMD(a,b);
}
inline void glQueryObjectParameteruiAMD(GLenum  a, GLuint  b, GLenum  c, GLuint  d) {
	interceptor::getCurrentExt()->glQueryObjectParameteruiAMD(a,b,c,d);
}
inline void glGetPerfMonitorGroupsAMD(GLint *a, GLsizei  b, GLuint *c) {
	interceptor::getCurrentExt()->glGetPerfMonitorGroupsAMD(a,b,c);
}
inline void glGetPerfMonitorCountersAMD(GLuint  a, GLint *b, GLint *c, GLsizei  d, GLuint *e) {
	interceptor::getCurrentExt()->glGetPerfMonitorCountersAMD(a,b,c,d,e);
}
inline void glGetPerfMonitorGroupStringAMD(GLuint  a, GLsizei  b, GLsizei *c, GLchar *d) {
	interceptor::getCurrentExt()->glGetPerfMonitorGroupStringAMD(a,b,c,d);
}
inline void glGetPerfMonitorCounterStringAMD(GLuint  a, GLuint  b, GLsizei  c, GLsizei *d, GLchar *e) {
	interceptor::getCurrentExt()->glGetPerfMonitorCounterStringAMD(a,b,c,d,e);
}
inline void glGetPerfMonitorCounterInfoAMD(GLuint  a, GLuint  b, GLenum  c, void *d) {
	interceptor::getCurrentExt()->glGetPerfMonitorCounterInfoAMD(a,b,c,d);
}
inline void glGenPerfMonitorsAMD(GLsizei  a, GLuint *b) {
	interceptor::getCurrentExt()->glGenPerfMonitorsAMD(a,b);
}
inline void glDeletePerfMonitorsAMD(GLsizei  a, GLuint *b) {
	interceptor::getCurrentExt()->glDeletePerfMonitorsAMD(a,b);
}
inline void glSelectPerfMonitorCountersAMD(GLuint  a, GLboolean  b, GLuint  c, GLint  d, GLuint *e) {
	interceptor::getCurrentExt()->glSelectPerfMonitorCountersAMD(a,b,c,d,e);
}
inline void glBeginPerfMonitorAMD(GLuint  a) {
	interceptor::getCurrentExt()->glBeginPerfMonitorAMD(a);
}
inline void glEndPerfMonitorAMD(GLuint  a) {
	interceptor::getCurrentExt()->glEndPerfMonitorAMD(a);
}
inline void glGetPerfMonitorCounterDataAMD(GLuint  a, GLenum  b, GLsizei  c, GLuint *d, GLint *e) {
	interceptor::getCurrentExt()->glGetPerfMonitorCounterDataAMD(a,b,c,d,e);
}
inline void glSetMultisamplefvAMD(GLenum  a, GLuint  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glSetMultisamplefvAMD(a,b,c);
}
inline void glTexStorageSparseAMD(GLenum  a, GLenum  b, GLsizei  c, GLsizei  d, GLsizei  e, GLsizei  f, GLbitfield  g) {
	interceptor::getCurrentExt()->glTexStorageSparseAMD(a,b,c,d,e,f,g);
}
inline void glTextureStorageSparseAMD(GLuint  a, GLenum  b, GLenum  c, GLsizei  d, GLsizei  e, GLsizei  f, GLsizei  g, GLbitfield  h) {
	interceptor::getCurrentExt()->glTextureStorageSparseAMD(a,b,c,d,e,f,g,h);
}
inline void glStencilOpValueAMD(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glStencilOpValueAMD(a,b);
}
inline void glTessellationFactorAMD(GLfloat  a) {
	interceptor::getCurrentExt()->glTessellationFactorAMD(a);
}
inline void glTessellationModeAMD(GLenum  a) {
	interceptor::getCurrentExt()->glTessellationModeAMD(a);
}
inline void glElementPointerAPPLE(GLenum  a, const void *b) {
	interceptor::getCurrentExt()->glElementPointerAPPLE(a,b);
}
inline void glDrawElementArrayAPPLE(GLenum  a, GLint  b, GLsizei  c) {
	interceptor::getCurrentExt()->glDrawElementArrayAPPLE(a,b,c);
}
inline void glDrawRangeElementArrayAPPLE(GLenum  a, GLuint  b, GLuint  c, GLint  d, GLsizei  e) {
	interceptor::getCurrentExt()->glDrawRangeElementArrayAPPLE(a,b,c,d,e);
}
inline void glMultiDrawElementArrayAPPLE(GLenum  a, const GLint *b, const GLsizei *c, GLsizei  d) {
	interceptor::getCurrentExt()->glMultiDrawElementArrayAPPLE(a,b,c,d);
}
inline void glMultiDrawRangeElementArrayAPPLE(GLenum  a, GLuint  b, GLuint  c, const GLint *d, const GLsizei *e, GLsizei  f) {
	interceptor::getCurrentExt()->glMultiDrawRangeElementArrayAPPLE(a,b,c,d,e,f);
}
inline void glGenFencesAPPLE(GLsizei  a, GLuint *b) {
	interceptor::getCurrentExt()->glGenFencesAPPLE(a,b);
}
inline void glDeleteFencesAPPLE(GLsizei  a, const GLuint *b) {
	interceptor::getCurrentExt()->glDeleteFencesAPPLE(a,b);
}
inline void glSetFenceAPPLE(GLuint  a) {
	interceptor::getCurrentExt()->glSetFenceAPPLE(a);
}
inline GLboolean glIsFenceAPPLE(GLuint  a) {
	return interceptor::getCurrentExt()->glIsFenceAPPLE(a);
}
inline GLboolean glTestFenceAPPLE(GLuint  a) {
	return interceptor::getCurrentExt()->glTestFenceAPPLE(a);
}
inline void glFinishFenceAPPLE(GLuint  a) {
	interceptor::getCurrentExt()->glFinishFenceAPPLE(a);
}
inline GLboolean glTestObjectAPPLE(GLenum  a, GLuint  b) {
	return interceptor::getCurrentExt()->glTestObjectAPPLE(a,b);
}
inline void glFinishObjectAPPLE(GLenum  a, GLint  b) {
	interceptor::getCurrentExt()->glFinishObjectAPPLE(a,b);
}
inline void glBufferParameteriAPPLE(GLenum  a, GLenum  b, GLint  c) {
	interceptor::getCurrentExt()->glBufferParameteriAPPLE(a,b,c);
}
inline void glFlushMappedBufferRangeAPPLE(GLenum  a, GLintptr  b, GLsizeiptr  c) {
	interceptor::getCurrentExt()->glFlushMappedBufferRangeAPPLE(a,b,c);
}
inline GLenum glObjectPurgeableAPPLE(GLenum  a, GLuint  b, GLenum  c) {
	return interceptor::getCurrentExt()->glObjectPurgeableAPPLE(a,b,c);
}
inline GLenum glObjectUnpurgeableAPPLE(GLenum  a, GLuint  b, GLenum  c) {
	return interceptor::getCurrentExt()->glObjectUnpurgeableAPPLE(a,b,c);
}
inline void glGetObjectParameterivAPPLE(GLenum  a, GLuint  b, GLenum  c, GLint *d) {
	interceptor::getCurrentExt()->glGetObjectParameterivAPPLE(a,b,c,d);
}
inline void glTextureRangeAPPLE(GLenum  a, GLsizei  b, const void *c) {
	interceptor::getCurrentExt()->glTextureRangeAPPLE(a,b,c);
}
inline void glGetTexParameterPointervAPPLE(GLenum  a, GLenum  b, void **c) {
	interceptor::getCurrentExt()->glGetTexParameterPointervAPPLE(a,b,c);
}
inline void glBindVertexArrayAPPLE(GLuint  a) {
	interceptor::getCurrentExt()->glBindVertexArrayAPPLE(a);
}
inline void glDeleteVertexArraysAPPLE(GLsizei  a, const GLuint *b) {
	interceptor::getCurrentExt()->glDeleteVertexArraysAPPLE(a,b);
}
inline void glGenVertexArraysAPPLE(GLsizei  a, GLuint *b) {
	interceptor::getCurrentExt()->glGenVertexArraysAPPLE(a,b);
}
inline GLboolean glIsVertexArrayAPPLE(GLuint  a) {
	return interceptor::getCurrentExt()->glIsVertexArrayAPPLE(a);
}
inline void glVertexArrayRangeAPPLE(GLsizei  a, void *b) {
	interceptor::getCurrentExt()->glVertexArrayRangeAPPLE(a,b);
}
inline void glFlushVertexArrayRangeAPPLE(GLsizei  a, void *b) {
	interceptor::getCurrentExt()->glFlushVertexArrayRangeAPPLE(a,b);
}
inline void glVertexArrayParameteriAPPLE(GLenum  a, GLint  b) {
	interceptor::getCurrentExt()->glVertexArrayParameteriAPPLE(a,b);
}
inline void glEnableVertexAttribAPPLE(GLuint  a, GLenum  b) {
	interceptor::getCurrentExt()->glEnableVertexAttribAPPLE(a,b);
}
inline void glDisableVertexAttribAPPLE(GLuint  a, GLenum  b) {
	interceptor::getCurrentExt()->glDisableVertexAttribAPPLE(a,b);
}
inline GLboolean glIsVertexAttribEnabledAPPLE(GLuint  a, GLenum  b) {
	return interceptor::getCurrentExt()->glIsVertexAttribEnabledAPPLE(a,b);
}
inline void glMapVertexAttrib1dAPPLE(GLuint  a, GLuint  b, GLdouble  c, GLdouble  d, GLint  e, GLint  f, const GLdouble *g) {
	interceptor::getCurrentExt()->glMapVertexAttrib1dAPPLE(a,b,c,d,e,f,g);
}
inline void glMapVertexAttrib1fAPPLE(GLuint  a, GLuint  b, GLfloat  c, GLfloat  d, GLint  e, GLint  f, const GLfloat *g) {
	interceptor::getCurrentExt()->glMapVertexAttrib1fAPPLE(a,b,c,d,e,f,g);
}
inline void glMapVertexAttrib2dAPPLE(GLuint  a, GLuint  b, GLdouble  c, GLdouble  d, GLint  e, GLint  f, GLdouble  g, GLdouble  h, GLint  i, GLint  j, const GLdouble *k) {
	interceptor::getCurrentExt()->glMapVertexAttrib2dAPPLE(a,b,c,d,e,f,g,h,i,j,k);
}
inline void glMapVertexAttrib2fAPPLE(GLuint  a, GLuint  b, GLfloat  c, GLfloat  d, GLint  e, GLint  f, GLfloat  g, GLfloat  h, GLint  i, GLint  j, const GLfloat *k) {
	interceptor::getCurrentExt()->glMapVertexAttrib2fAPPLE(a,b,c,d,e,f,g,h,i,j,k);
}
inline void glDrawBuffersATI(GLsizei  a, const GLenum *b) {
	interceptor::getCurrentExt()->glDrawBuffersATI(a,b);
}
inline void glElementPointerATI(GLenum  a, const void *b) {
	interceptor::getCurrentExt()->glElementPointerATI(a,b);
}
inline void glDrawElementArrayATI(GLenum  a, GLsizei  b) {
	interceptor::getCurrentExt()->glDrawElementArrayATI(a,b);
}
inline void glDrawRangeElementArrayATI(GLenum  a, GLuint  b, GLuint  c, GLsizei  d) {
	interceptor::getCurrentExt()->glDrawRangeElementArrayATI(a,b,c,d);
}
inline void glTexBumpParameterivATI(GLenum  a, const GLint *b) {
	interceptor::getCurrentExt()->glTexBumpParameterivATI(a,b);
}
inline void glTexBumpParameterfvATI(GLenum  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glTexBumpParameterfvATI(a,b);
}
inline void glGetTexBumpParameterivATI(GLenum  a, GLint *b) {
	interceptor::getCurrentExt()->glGetTexBumpParameterivATI(a,b);
}
inline void glGetTexBumpParameterfvATI(GLenum  a, GLfloat *b) {
	interceptor::getCurrentExt()->glGetTexBumpParameterfvATI(a,b);
}
inline GLuint glGenFragmentShadersATI(GLuint  a) {
	return interceptor::getCurrentExt()->glGenFragmentShadersATI(a);
}
inline void glBindFragmentShaderATI(GLuint  a) {
	interceptor::getCurrentExt()->glBindFragmentShaderATI(a);
}
inline void glDeleteFragmentShaderATI(GLuint  a) {
	interceptor::getCurrentExt()->glDeleteFragmentShaderATI(a);
}
inline void glBeginFragmentShaderATI(void) {
	interceptor::getCurrentExt()->glBeginFragmentShaderATI();
}
inline void glEndFragmentShaderATI(void) {
	interceptor::getCurrentExt()->glEndFragmentShaderATI();
}
inline void glPassTexCoordATI(GLuint  a, GLuint  b, GLenum  c) {
	interceptor::getCurrentExt()->glPassTexCoordATI(a,b,c);
}
inline void glSampleMapATI(GLuint  a, GLuint  b, GLenum  c) {
	interceptor::getCurrentExt()->glSampleMapATI(a,b,c);
}
inline void glColorFragmentOp1ATI(GLenum  a, GLuint  b, GLuint  c, GLuint  d, GLuint  e, GLuint  f, GLuint  g) {
	interceptor::getCurrentExt()->glColorFragmentOp1ATI(a,b,c,d,e,f,g);
}
inline void glColorFragmentOp2ATI(GLenum  a, GLuint  b, GLuint  c, GLuint  d, GLuint  e, GLuint  f, GLuint  g, GLuint  h, GLuint  i, GLuint  j) {
	interceptor::getCurrentExt()->glColorFragmentOp2ATI(a,b,c,d,e,f,g,h,i,j);
}
inline void glColorFragmentOp3ATI(GLenum  a, GLuint  b, GLuint  c, GLuint  d, GLuint  e, GLuint  f, GLuint  g, GLuint  h, GLuint  i, GLuint  j, GLuint  k, GLuint  l, GLuint  m) {
	interceptor::getCurrentExt()->glColorFragmentOp3ATI(a,b,c,d,e,f,g,h,i,j,k,l,m);
}
inline void glAlphaFragmentOp1ATI(GLenum  a, GLuint  b, GLuint  c, GLuint  d, GLuint  e, GLuint  f) {
	interceptor::getCurrentExt()->glAlphaFragmentOp1ATI(a,b,c,d,e,f);
}
inline void glAlphaFragmentOp2ATI(GLenum  a, GLuint  b, GLuint  c, GLuint  d, GLuint  e, GLuint  f, GLuint  g, GLuint  h, GLuint  i) {
	interceptor::getCurrentExt()->glAlphaFragmentOp2ATI(a,b,c,d,e,f,g,h,i);
}
inline void glAlphaFragmentOp3ATI(GLenum  a, GLuint  b, GLuint  c, GLuint  d, GLuint  e, GLuint  f, GLuint  g, GLuint  h, GLuint  i, GLuint  j, GLuint  k, GLuint  l) {
	interceptor::getCurrentExt()->glAlphaFragmentOp3ATI(a,b,c,d,e,f,g,h,i,j,k,l);
}
inline void glSetFragmentShaderConstantATI(GLuint  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glSetFragmentShaderConstantATI(a,b);
}
inline void * glMapObjectBufferATI(GLuint  a) {
	return interceptor::getCurrentExt()->glMapObjectBufferATI(a);
}
inline void glUnmapObjectBufferATI(GLuint  a) {
	interceptor::getCurrentExt()->glUnmapObjectBufferATI(a);
}
inline void glPNTrianglesiATI(GLenum  a, GLint  b) {
	interceptor::getCurrentExt()->glPNTrianglesiATI(a,b);
}
inline void glPNTrianglesfATI(GLenum  a, GLfloat  b) {
	interceptor::getCurrentExt()->glPNTrianglesfATI(a,b);
}
inline void glStencilOpSeparateATI(GLenum  a, GLenum  b, GLenum  c, GLenum  d) {
	interceptor::getCurrentExt()->glStencilOpSeparateATI(a,b,c,d);
}
inline void glStencilFuncSeparateATI(GLenum  a, GLenum  b, GLint  c, GLuint  d) {
	interceptor::getCurrentExt()->glStencilFuncSeparateATI(a,b,c,d);
}
inline GLuint glNewObjectBufferATI(GLsizei  a, const void *b, GLenum  c) {
	return interceptor::getCurrentExt()->glNewObjectBufferATI(a,b,c);
}
inline GLboolean glIsObjectBufferATI(GLuint  a) {
	return interceptor::getCurrentExt()->glIsObjectBufferATI(a);
}
inline void glUpdateObjectBufferATI(GLuint  a, GLuint  b, GLsizei  c, const void *d, GLenum  e) {
	interceptor::getCurrentExt()->glUpdateObjectBufferATI(a,b,c,d,e);
}
inline void glGetObjectBufferfvATI(GLuint  a, GLenum  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetObjectBufferfvATI(a,b,c);
}
inline void glGetObjectBufferivATI(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetObjectBufferivATI(a,b,c);
}
inline void glFreeObjectBufferATI(GLuint  a) {
	interceptor::getCurrentExt()->glFreeObjectBufferATI(a);
}
inline void glArrayObjectATI(GLenum  a, GLint  b, GLenum  c, GLsizei  d, GLuint  e, GLuint  f) {
	interceptor::getCurrentExt()->glArrayObjectATI(a,b,c,d,e,f);
}
inline void glGetArrayObjectfvATI(GLenum  a, GLenum  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetArrayObjectfvATI(a,b,c);
}
inline void glGetArrayObjectivATI(GLenum  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetArrayObjectivATI(a,b,c);
}
inline void glVariantArrayObjectATI(GLuint  a, GLenum  b, GLsizei  c, GLuint  d, GLuint  e) {
	interceptor::getCurrentExt()->glVariantArrayObjectATI(a,b,c,d,e);
}
inline void glGetVariantArrayObjectfvATI(GLuint  a, GLenum  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetVariantArrayObjectfvATI(a,b,c);
}
inline void glGetVariantArrayObjectivATI(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetVariantArrayObjectivATI(a,b,c);
}
inline void glVertexAttribArrayObjectATI(GLuint  a, GLint  b, GLenum  c, GLboolean  d, GLsizei  e, GLuint  f, GLuint  g) {
	interceptor::getCurrentExt()->glVertexAttribArrayObjectATI(a,b,c,d,e,f,g);
}
inline void glGetVertexAttribArrayObjectfvATI(GLuint  a, GLenum  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetVertexAttribArrayObjectfvATI(a,b,c);
}
inline void glGetVertexAttribArrayObjectivATI(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetVertexAttribArrayObjectivATI(a,b,c);
}
inline void glVertexStream1sATI(GLenum  a, GLshort  b) {
	interceptor::getCurrentExt()->glVertexStream1sATI(a,b);
}
inline void glVertexStream1svATI(GLenum  a, const GLshort *b) {
	interceptor::getCurrentExt()->glVertexStream1svATI(a,b);
}
inline void glVertexStream1iATI(GLenum  a, GLint  b) {
	interceptor::getCurrentExt()->glVertexStream1iATI(a,b);
}
inline void glVertexStream1ivATI(GLenum  a, const GLint *b) {
	interceptor::getCurrentExt()->glVertexStream1ivATI(a,b);
}
inline void glVertexStream1fATI(GLenum  a, GLfloat  b) {
	interceptor::getCurrentExt()->glVertexStream1fATI(a,b);
}
inline void glVertexStream1fvATI(GLenum  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glVertexStream1fvATI(a,b);
}
inline void glVertexStream1dATI(GLenum  a, GLdouble  b) {
	interceptor::getCurrentExt()->glVertexStream1dATI(a,b);
}
inline void glVertexStream1dvATI(GLenum  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glVertexStream1dvATI(a,b);
}
inline void glVertexStream2sATI(GLenum  a, GLshort  b, GLshort  c) {
	interceptor::getCurrentExt()->glVertexStream2sATI(a,b,c);
}
inline void glVertexStream2svATI(GLenum  a, const GLshort *b) {
	interceptor::getCurrentExt()->glVertexStream2svATI(a,b);
}
inline void glVertexStream2iATI(GLenum  a, GLint  b, GLint  c) {
	interceptor::getCurrentExt()->glVertexStream2iATI(a,b,c);
}
inline void glVertexStream2ivATI(GLenum  a, const GLint *b) {
	interceptor::getCurrentExt()->glVertexStream2ivATI(a,b);
}
inline void glVertexStream2fATI(GLenum  a, GLfloat  b, GLfloat  c) {
	interceptor::getCurrentExt()->glVertexStream2fATI(a,b,c);
}
inline void glVertexStream2fvATI(GLenum  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glVertexStream2fvATI(a,b);
}
inline void glVertexStream2dATI(GLenum  a, GLdouble  b, GLdouble  c) {
	interceptor::getCurrentExt()->glVertexStream2dATI(a,b,c);
}
inline void glVertexStream2dvATI(GLenum  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glVertexStream2dvATI(a,b);
}
inline void glVertexStream3sATI(GLenum  a, GLshort  b, GLshort  c, GLshort  d) {
	interceptor::getCurrentExt()->glVertexStream3sATI(a,b,c,d);
}
inline void glVertexStream3svATI(GLenum  a, const GLshort *b) {
	interceptor::getCurrentExt()->glVertexStream3svATI(a,b);
}
inline void glVertexStream3iATI(GLenum  a, GLint  b, GLint  c, GLint  d) {
	interceptor::getCurrentExt()->glVertexStream3iATI(a,b,c,d);
}
inline void glVertexStream3ivATI(GLenum  a, const GLint *b) {
	interceptor::getCurrentExt()->glVertexStream3ivATI(a,b);
}
inline void glVertexStream3fATI(GLenum  a, GLfloat  b, GLfloat  c, GLfloat  d) {
	interceptor::getCurrentExt()->glVertexStream3fATI(a,b,c,d);
}
inline void glVertexStream3fvATI(GLenum  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glVertexStream3fvATI(a,b);
}
inline void glVertexStream3dATI(GLenum  a, GLdouble  b, GLdouble  c, GLdouble  d) {
	interceptor::getCurrentExt()->glVertexStream3dATI(a,b,c,d);
}
inline void glVertexStream3dvATI(GLenum  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glVertexStream3dvATI(a,b);
}
inline void glVertexStream4sATI(GLenum  a, GLshort  b, GLshort  c, GLshort  d, GLshort  e) {
	interceptor::getCurrentExt()->glVertexStream4sATI(a,b,c,d,e);
}
inline void glVertexStream4svATI(GLenum  a, const GLshort *b) {
	interceptor::getCurrentExt()->glVertexStream4svATI(a,b);
}
inline void glVertexStream4iATI(GLenum  a, GLint  b, GLint  c, GLint  d, GLint  e) {
	interceptor::getCurrentExt()->glVertexStream4iATI(a,b,c,d,e);
}
inline void glVertexStream4ivATI(GLenum  a, const GLint *b) {
	interceptor::getCurrentExt()->glVertexStream4ivATI(a,b);
}
inline void glVertexStream4fATI(GLenum  a, GLfloat  b, GLfloat  c, GLfloat  d, GLfloat  e) {
	interceptor::getCurrentExt()->glVertexStream4fATI(a,b,c,d,e);
}
inline void glVertexStream4fvATI(GLenum  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glVertexStream4fvATI(a,b);
}
inline void glVertexStream4dATI(GLenum  a, GLdouble  b, GLdouble  c, GLdouble  d, GLdouble  e) {
	interceptor::getCurrentExt()->glVertexStream4dATI(a,b,c,d,e);
}
inline void glVertexStream4dvATI(GLenum  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glVertexStream4dvATI(a,b);
}
inline void glNormalStream3bATI(GLenum  a, GLbyte  b, GLbyte  c, GLbyte  d) {
	interceptor::getCurrentExt()->glNormalStream3bATI(a,b,c,d);
}
inline void glNormalStream3bvATI(GLenum  a, const GLbyte *b) {
	interceptor::getCurrentExt()->glNormalStream3bvATI(a,b);
}
inline void glNormalStream3sATI(GLenum  a, GLshort  b, GLshort  c, GLshort  d) {
	interceptor::getCurrentExt()->glNormalStream3sATI(a,b,c,d);
}
inline void glNormalStream3svATI(GLenum  a, const GLshort *b) {
	interceptor::getCurrentExt()->glNormalStream3svATI(a,b);
}
inline void glNormalStream3iATI(GLenum  a, GLint  b, GLint  c, GLint  d) {
	interceptor::getCurrentExt()->glNormalStream3iATI(a,b,c,d);
}
inline void glNormalStream3ivATI(GLenum  a, const GLint *b) {
	interceptor::getCurrentExt()->glNormalStream3ivATI(a,b);
}
inline void glNormalStream3fATI(GLenum  a, GLfloat  b, GLfloat  c, GLfloat  d) {
	interceptor::getCurrentExt()->glNormalStream3fATI(a,b,c,d);
}
inline void glNormalStream3fvATI(GLenum  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glNormalStream3fvATI(a,b);
}
inline void glNormalStream3dATI(GLenum  a, GLdouble  b, GLdouble  c, GLdouble  d) {
	interceptor::getCurrentExt()->glNormalStream3dATI(a,b,c,d);
}
inline void glNormalStream3dvATI(GLenum  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glNormalStream3dvATI(a,b);
}
inline void glClientActiveVertexStreamATI(GLenum  a) {
	interceptor::getCurrentExt()->glClientActiveVertexStreamATI(a);
}
inline void glVertexBlendEnviATI(GLenum  a, GLint  b) {
	interceptor::getCurrentExt()->glVertexBlendEnviATI(a,b);
}
inline void glVertexBlendEnvfATI(GLenum  a, GLfloat  b) {
	interceptor::getCurrentExt()->glVertexBlendEnvfATI(a,b);
}
inline void glUniformBufferEXT(GLuint  a, GLint  b, GLuint  c) {
	interceptor::getCurrentExt()->glUniformBufferEXT(a,b,c);
}
inline GLint glGetUniformBufferSizeEXT(GLuint  a, GLint  b) {
	return interceptor::getCurrentExt()->glGetUniformBufferSizeEXT(a,b);
}
inline GLintptr glGetUniformOffsetEXT(GLuint  a, GLint  b) {
	return interceptor::getCurrentExt()->glGetUniformOffsetEXT(a,b);
}
inline void glBlendColorEXT(GLfloat  a, GLfloat  b, GLfloat  c, GLfloat  d) {
	interceptor::getCurrentExt()->glBlendColorEXT(a,b,c,d);
}
inline void glBlendEquationSeparateEXT(GLenum  a, GLenum  b) {
	interceptor::getCurrentExt()->glBlendEquationSeparateEXT(a,b);
}
inline void glBlendFuncSeparateEXT(GLenum  a, GLenum  b, GLenum  c, GLenum  d) {
	interceptor::getCurrentExt()->glBlendFuncSeparateEXT(a,b,c,d);
}
inline void glBlendEquationEXT(GLenum  a) {
	interceptor::getCurrentExt()->glBlendEquationEXT(a);
}
inline void glColorSubTableEXT(GLenum  a, GLsizei  b, GLsizei  c, GLenum  d, GLenum  e, const void *f) {
	interceptor::getCurrentExt()->glColorSubTableEXT(a,b,c,d,e,f);
}
inline void glCopyColorSubTableEXT(GLenum  a, GLsizei  b, GLint  c, GLint  d, GLsizei  e) {
	interceptor::getCurrentExt()->glCopyColorSubTableEXT(a,b,c,d,e);
}
inline void glLockArraysEXT(GLint  a, GLsizei  b) {
	interceptor::getCurrentExt()->glLockArraysEXT(a,b);
}
inline void glUnlockArraysEXT(void) {
	interceptor::getCurrentExt()->glUnlockArraysEXT();
}
inline void glConvolutionFilter1DEXT(GLenum  a, GLenum  b, GLsizei  c, GLenum  d, GLenum  e, const void *f) {
	interceptor::getCurrentExt()->glConvolutionFilter1DEXT(a,b,c,d,e,f);
}
inline void glConvolutionFilter2DEXT(GLenum  a, GLenum  b, GLsizei  c, GLsizei  d, GLenum  e, GLenum  f, const void *g) {
	interceptor::getCurrentExt()->glConvolutionFilter2DEXT(a,b,c,d,e,f,g);
}
inline void glConvolutionParameterfEXT(GLenum  a, GLenum  b, GLfloat  c) {
	interceptor::getCurrentExt()->glConvolutionParameterfEXT(a,b,c);
}
inline void glConvolutionParameterfvEXT(GLenum  a, GLenum  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glConvolutionParameterfvEXT(a,b,c);
}
inline void glConvolutionParameteriEXT(GLenum  a, GLenum  b, GLint  c) {
	interceptor::getCurrentExt()->glConvolutionParameteriEXT(a,b,c);
}
inline void glConvolutionParameterivEXT(GLenum  a, GLenum  b, const GLint *c) {
	interceptor::getCurrentExt()->glConvolutionParameterivEXT(a,b,c);
}
inline void glCopyConvolutionFilter1DEXT(GLenum  a, GLenum  b, GLint  c, GLint  d, GLsizei  e) {
	interceptor::getCurrentExt()->glCopyConvolutionFilter1DEXT(a,b,c,d,e);
}
inline void glCopyConvolutionFilter2DEXT(GLenum  a, GLenum  b, GLint  c, GLint  d, GLsizei  e, GLsizei  f) {
	interceptor::getCurrentExt()->glCopyConvolutionFilter2DEXT(a,b,c,d,e,f);
}
inline void glGetConvolutionFilterEXT(GLenum  a, GLenum  b, GLenum  c, void *d) {
	interceptor::getCurrentExt()->glGetConvolutionFilterEXT(a,b,c,d);
}
inline void glGetConvolutionParameterfvEXT(GLenum  a, GLenum  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetConvolutionParameterfvEXT(a,b,c);
}
inline void glGetConvolutionParameterivEXT(GLenum  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetConvolutionParameterivEXT(a,b,c);
}
inline void glGetSeparableFilterEXT(GLenum  a, GLenum  b, GLenum  c, void *d, void *e, void *f) {
	interceptor::getCurrentExt()->glGetSeparableFilterEXT(a,b,c,d,e,f);
}
inline void glSeparableFilter2DEXT(GLenum  a, GLenum  b, GLsizei  c, GLsizei  d, GLenum  e, GLenum  f, const void *g, const void *h) {
	interceptor::getCurrentExt()->glSeparableFilter2DEXT(a,b,c,d,e,f,g,h);
}
inline void glTangent3bEXT(GLbyte  a, GLbyte  b, GLbyte  c) {
	interceptor::getCurrentExt()->glTangent3bEXT(a,b,c);
}
inline void glTangent3bvEXT(const GLbyte *a) {
	interceptor::getCurrentExt()->glTangent3bvEXT(a);
}
inline void glTangent3dEXT(GLdouble  a, GLdouble  b, GLdouble  c) {
	interceptor::getCurrentExt()->glTangent3dEXT(a,b,c);
}
inline void glTangent3dvEXT(const GLdouble *a) {
	interceptor::getCurrentExt()->glTangent3dvEXT(a);
}
inline void glTangent3fEXT(GLfloat  a, GLfloat  b, GLfloat  c) {
	interceptor::getCurrentExt()->glTangent3fEXT(a,b,c);
}
inline void glTangent3fvEXT(const GLfloat *a) {
	interceptor::getCurrentExt()->glTangent3fvEXT(a);
}
inline void glTangent3iEXT(GLint  a, GLint  b, GLint  c) {
	interceptor::getCurrentExt()->glTangent3iEXT(a,b,c);
}
inline void glTangent3ivEXT(const GLint *a) {
	interceptor::getCurrentExt()->glTangent3ivEXT(a);
}
inline void glTangent3sEXT(GLshort  a, GLshort  b, GLshort  c) {
	interceptor::getCurrentExt()->glTangent3sEXT(a,b,c);
}
inline void glTangent3svEXT(const GLshort *a) {
	interceptor::getCurrentExt()->glTangent3svEXT(a);
}
inline void glBinormal3bEXT(GLbyte  a, GLbyte  b, GLbyte  c) {
	interceptor::getCurrentExt()->glBinormal3bEXT(a,b,c);
}
inline void glBinormal3bvEXT(const GLbyte *a) {
	interceptor::getCurrentExt()->glBinormal3bvEXT(a);
}
inline void glBinormal3dEXT(GLdouble  a, GLdouble  b, GLdouble  c) {
	interceptor::getCurrentExt()->glBinormal3dEXT(a,b,c);
}
inline void glBinormal3dvEXT(const GLdouble *a) {
	interceptor::getCurrentExt()->glBinormal3dvEXT(a);
}
inline void glBinormal3fEXT(GLfloat  a, GLfloat  b, GLfloat  c) {
	interceptor::getCurrentExt()->glBinormal3fEXT(a,b,c);
}
inline void glBinormal3fvEXT(const GLfloat *a) {
	interceptor::getCurrentExt()->glBinormal3fvEXT(a);
}
inline void glBinormal3iEXT(GLint  a, GLint  b, GLint  c) {
	interceptor::getCurrentExt()->glBinormal3iEXT(a,b,c);
}
inline void glBinormal3ivEXT(const GLint *a) {
	interceptor::getCurrentExt()->glBinormal3ivEXT(a);
}
inline void glBinormal3sEXT(GLshort  a, GLshort  b, GLshort  c) {
	interceptor::getCurrentExt()->glBinormal3sEXT(a,b,c);
}
inline void glBinormal3svEXT(const GLshort *a) {
	interceptor::getCurrentExt()->glBinormal3svEXT(a);
}
inline void glTangentPointerEXT(GLenum  a, GLsizei  b, const void *c) {
	interceptor::getCurrentExt()->glTangentPointerEXT(a,b,c);
}
inline void glBinormalPointerEXT(GLenum  a, GLsizei  b, const void *c) {
	interceptor::getCurrentExt()->glBinormalPointerEXT(a,b,c);
}
inline void glCopyTexImage1DEXT(GLenum  a, GLint  b, GLenum  c, GLint  d, GLint  e, GLsizei  f, GLint  g) {
	interceptor::getCurrentExt()->glCopyTexImage1DEXT(a,b,c,d,e,f,g);
}
inline void glCopyTexImage2DEXT(GLenum  a, GLint  b, GLenum  c, GLint  d, GLint  e, GLsizei  f, GLsizei  g, GLint  h) {
	interceptor::getCurrentExt()->glCopyTexImage2DEXT(a,b,c,d,e,f,g,h);
}
inline void glCopyTexSubImage1DEXT(GLenum  a, GLint  b, GLint  c, GLint  d, GLint  e, GLsizei  f) {
	interceptor::getCurrentExt()->glCopyTexSubImage1DEXT(a,b,c,d,e,f);
}
inline void glCopyTexSubImage2DEXT(GLenum  a, GLint  b, GLint  c, GLint  d, GLint  e, GLint  f, GLsizei  g, GLsizei  h) {
	interceptor::getCurrentExt()->glCopyTexSubImage2DEXT(a,b,c,d,e,f,g,h);
}
inline void glCopyTexSubImage3DEXT(GLenum  a, GLint  b, GLint  c, GLint  d, GLint  e, GLint  f, GLint  g, GLsizei  h, GLsizei  i) {
	interceptor::getCurrentExt()->glCopyTexSubImage3DEXT(a,b,c,d,e,f,g,h,i);
}
inline void glCullParameterdvEXT(GLenum  a, GLdouble *b) {
	interceptor::getCurrentExt()->glCullParameterdvEXT(a,b);
}
inline void glCullParameterfvEXT(GLenum  a, GLfloat *b) {
	interceptor::getCurrentExt()->glCullParameterfvEXT(a,b);
}
inline void glLabelObjectEXT(GLenum  a, GLuint  b, GLsizei  c, const GLchar *d) {
	interceptor::getCurrentExt()->glLabelObjectEXT(a,b,c,d);
}
inline void glGetObjectLabelEXT(GLenum  a, GLuint  b, GLsizei  c, GLsizei *d, GLchar *e) {
	interceptor::getCurrentExt()->glGetObjectLabelEXT(a,b,c,d,e);
}
inline void glInsertEventMarkerEXT(GLsizei  a, const GLchar *b) {
	interceptor::getCurrentExt()->glInsertEventMarkerEXT(a,b);
}
inline void glPushGroupMarkerEXT(GLsizei  a, const GLchar *b) {
	interceptor::getCurrentExt()->glPushGroupMarkerEXT(a,b);
}
inline void glPopGroupMarkerEXT(void) {
	interceptor::getCurrentExt()->glPopGroupMarkerEXT();
}
inline void glDepthBoundsEXT(GLclampd  a, GLclampd  b) {
	interceptor::getCurrentExt()->glDepthBoundsEXT(a,b);
}
inline void glMatrixLoadfEXT(GLenum  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glMatrixLoadfEXT(a,b);
}
inline void glMatrixLoaddEXT(GLenum  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glMatrixLoaddEXT(a,b);
}
inline void glMatrixMultfEXT(GLenum  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glMatrixMultfEXT(a,b);
}
inline void glMatrixMultdEXT(GLenum  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glMatrixMultdEXT(a,b);
}
inline void glMatrixLoadIdentityEXT(GLenum  a) {
	interceptor::getCurrentExt()->glMatrixLoadIdentityEXT(a);
}
inline void glMatrixRotatefEXT(GLenum  a, GLfloat  b, GLfloat  c, GLfloat  d, GLfloat  e) {
	interceptor::getCurrentExt()->glMatrixRotatefEXT(a,b,c,d,e);
}
inline void glMatrixRotatedEXT(GLenum  a, GLdouble  b, GLdouble  c, GLdouble  d, GLdouble  e) {
	interceptor::getCurrentExt()->glMatrixRotatedEXT(a,b,c,d,e);
}
inline void glMatrixScalefEXT(GLenum  a, GLfloat  b, GLfloat  c, GLfloat  d) {
	interceptor::getCurrentExt()->glMatrixScalefEXT(a,b,c,d);
}
inline void glMatrixScaledEXT(GLenum  a, GLdouble  b, GLdouble  c, GLdouble  d) {
	interceptor::getCurrentExt()->glMatrixScaledEXT(a,b,c,d);
}
inline void glMatrixTranslatefEXT(GLenum  a, GLfloat  b, GLfloat  c, GLfloat  d) {
	interceptor::getCurrentExt()->glMatrixTranslatefEXT(a,b,c,d);
}
inline void glMatrixTranslatedEXT(GLenum  a, GLdouble  b, GLdouble  c, GLdouble  d) {
	interceptor::getCurrentExt()->glMatrixTranslatedEXT(a,b,c,d);
}
inline void glMatrixFrustumEXT(GLenum  a, GLdouble  b, GLdouble  c, GLdouble  d, GLdouble  e, GLdouble  f, GLdouble  g) {
	interceptor::getCurrentExt()->glMatrixFrustumEXT(a,b,c,d,e,f,g);
}
inline void glMatrixOrthoEXT(GLenum  a, GLdouble  b, GLdouble  c, GLdouble  d, GLdouble  e, GLdouble  f, GLdouble  g) {
	interceptor::getCurrentExt()->glMatrixOrthoEXT(a,b,c,d,e,f,g);
}
inline void glMatrixPopEXT(GLenum  a) {
	interceptor::getCurrentExt()->glMatrixPopEXT(a);
}
inline void glMatrixPushEXT(GLenum  a) {
	interceptor::getCurrentExt()->glMatrixPushEXT(a);
}
inline void glClientAttribDefaultEXT(GLbitfield  a) {
	interceptor::getCurrentExt()->glClientAttribDefaultEXT(a);
}
inline void glPushClientAttribDefaultEXT(GLbitfield  a) {
	interceptor::getCurrentExt()->glPushClientAttribDefaultEXT(a);
}
inline void glTextureParameterfEXT(GLuint  a, GLenum  b, GLenum  c, GLfloat  d) {
	interceptor::getCurrentExt()->glTextureParameterfEXT(a,b,c,d);
}
inline void glTextureParameterfvEXT(GLuint  a, GLenum  b, GLenum  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glTextureParameterfvEXT(a,b,c,d);
}
inline void glTextureParameteriEXT(GLuint  a, GLenum  b, GLenum  c, GLint  d) {
	interceptor::getCurrentExt()->glTextureParameteriEXT(a,b,c,d);
}
inline void glTextureParameterivEXT(GLuint  a, GLenum  b, GLenum  c, const GLint *d) {
	interceptor::getCurrentExt()->glTextureParameterivEXT(a,b,c,d);
}
inline void glTextureImage1DEXT(GLuint  a, GLenum  b, GLint  c, GLint  d, GLsizei  e, GLint  f, GLenum  g, GLenum  h, const void *i) {
	interceptor::getCurrentExt()->glTextureImage1DEXT(a,b,c,d,e,f,g,h,i);
}
inline void glTextureImage2DEXT(GLuint  a, GLenum  b, GLint  c, GLint  d, GLsizei  e, GLsizei  f, GLint  g, GLenum  h, GLenum  i, const void *j) {
	interceptor::getCurrentExt()->glTextureImage2DEXT(a,b,c,d,e,f,g,h,i,j);
}
inline void glTextureSubImage1DEXT(GLuint  a, GLenum  b, GLint  c, GLint  d, GLsizei  e, GLenum  f, GLenum  g, const void *h) {
	interceptor::getCurrentExt()->glTextureSubImage1DEXT(a,b,c,d,e,f,g,h);
}
inline void glTextureSubImage2DEXT(GLuint  a, GLenum  b, GLint  c, GLint  d, GLint  e, GLsizei  f, GLsizei  g, GLenum  h, GLenum  i, const void *j) {
	interceptor::getCurrentExt()->glTextureSubImage2DEXT(a,b,c,d,e,f,g,h,i,j);
}
inline void glCopyTextureImage1DEXT(GLuint  a, GLenum  b, GLint  c, GLenum  d, GLint  e, GLint  f, GLsizei  g, GLint  h) {
	interceptor::getCurrentExt()->glCopyTextureImage1DEXT(a,b,c,d,e,f,g,h);
}
inline void glCopyTextureImage2DEXT(GLuint  a, GLenum  b, GLint  c, GLenum  d, GLint  e, GLint  f, GLsizei  g, GLsizei  h, GLint  i) {
	interceptor::getCurrentExt()->glCopyTextureImage2DEXT(a,b,c,d,e,f,g,h,i);
}
inline void glCopyTextureSubImage1DEXT(GLuint  a, GLenum  b, GLint  c, GLint  d, GLint  e, GLint  f, GLsizei  g) {
	interceptor::getCurrentExt()->glCopyTextureSubImage1DEXT(a,b,c,d,e,f,g);
}
inline void glCopyTextureSubImage2DEXT(GLuint  a, GLenum  b, GLint  c, GLint  d, GLint  e, GLint  f, GLint  g, GLsizei  h, GLsizei  i) {
	interceptor::getCurrentExt()->glCopyTextureSubImage2DEXT(a,b,c,d,e,f,g,h,i);
}
inline void glGetTextureImageEXT(GLuint  a, GLenum  b, GLint  c, GLenum  d, GLenum  e, void *f) {
	interceptor::getCurrentExt()->glGetTextureImageEXT(a,b,c,d,e,f);
}
inline void glGetTextureParameterfvEXT(GLuint  a, GLenum  b, GLenum  c, GLfloat *d) {
	interceptor::getCurrentExt()->glGetTextureParameterfvEXT(a,b,c,d);
}
inline void glGetTextureParameterivEXT(GLuint  a, GLenum  b, GLenum  c, GLint *d) {
	interceptor::getCurrentExt()->glGetTextureParameterivEXT(a,b,c,d);
}
inline void glGetTextureLevelParameterfvEXT(GLuint  a, GLenum  b, GLint  c, GLenum  d, GLfloat *e) {
	interceptor::getCurrentExt()->glGetTextureLevelParameterfvEXT(a,b,c,d,e);
}
inline void glGetTextureLevelParameterivEXT(GLuint  a, GLenum  b, GLint  c, GLenum  d, GLint *e) {
	interceptor::getCurrentExt()->glGetTextureLevelParameterivEXT(a,b,c,d,e);
}
inline void glTextureImage3DEXT(GLuint  a, GLenum  b, GLint  c, GLint  d, GLsizei  e, GLsizei  f, GLsizei  g, GLint  h, GLenum  i, GLenum  j, const void *k) {
	interceptor::getCurrentExt()->glTextureImage3DEXT(a,b,c,d,e,f,g,h,i,j,k);
}
inline void glTextureSubImage3DEXT(GLuint  a, GLenum  b, GLint  c, GLint  d, GLint  e, GLint  f, GLsizei  g, GLsizei  h, GLsizei  i, GLenum  j, GLenum  k, const void *l) {
	interceptor::getCurrentExt()->glTextureSubImage3DEXT(a,b,c,d,e,f,g,h,i,j,k,l);
}
inline void glCopyTextureSubImage3DEXT(GLuint  a, GLenum  b, GLint  c, GLint  d, GLint  e, GLint  f, GLint  g, GLint  h, GLsizei  i, GLsizei  j) {
	interceptor::getCurrentExt()->glCopyTextureSubImage3DEXT(a,b,c,d,e,f,g,h,i,j);
}
inline void glBindMultiTextureEXT(GLenum  a, GLenum  b, GLuint  c) {
	interceptor::getCurrentExt()->glBindMultiTextureEXT(a,b,c);
}
inline void glMultiTexCoordPointerEXT(GLenum  a, GLint  b, GLenum  c, GLsizei  d, const void *e) {
	interceptor::getCurrentExt()->glMultiTexCoordPointerEXT(a,b,c,d,e);
}
inline void glMultiTexEnvfEXT(GLenum  a, GLenum  b, GLenum  c, GLfloat  d) {
	interceptor::getCurrentExt()->glMultiTexEnvfEXT(a,b,c,d);
}
inline void glMultiTexEnvfvEXT(GLenum  a, GLenum  b, GLenum  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glMultiTexEnvfvEXT(a,b,c,d);
}
inline void glMultiTexEnviEXT(GLenum  a, GLenum  b, GLenum  c, GLint  d) {
	interceptor::getCurrentExt()->glMultiTexEnviEXT(a,b,c,d);
}
inline void glMultiTexEnvivEXT(GLenum  a, GLenum  b, GLenum  c, const GLint *d) {
	interceptor::getCurrentExt()->glMultiTexEnvivEXT(a,b,c,d);
}
inline void glMultiTexGendEXT(GLenum  a, GLenum  b, GLenum  c, GLdouble  d) {
	interceptor::getCurrentExt()->glMultiTexGendEXT(a,b,c,d);
}
inline void glMultiTexGendvEXT(GLenum  a, GLenum  b, GLenum  c, const GLdouble *d) {
	interceptor::getCurrentExt()->glMultiTexGendvEXT(a,b,c,d);
}
inline void glMultiTexGenfEXT(GLenum  a, GLenum  b, GLenum  c, GLfloat  d) {
	interceptor::getCurrentExt()->glMultiTexGenfEXT(a,b,c,d);
}
inline void glMultiTexGenfvEXT(GLenum  a, GLenum  b, GLenum  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glMultiTexGenfvEXT(a,b,c,d);
}
inline void glMultiTexGeniEXT(GLenum  a, GLenum  b, GLenum  c, GLint  d) {
	interceptor::getCurrentExt()->glMultiTexGeniEXT(a,b,c,d);
}
inline void glMultiTexGenivEXT(GLenum  a, GLenum  b, GLenum  c, const GLint *d) {
	interceptor::getCurrentExt()->glMultiTexGenivEXT(a,b,c,d);
}
inline void glGetMultiTexEnvfvEXT(GLenum  a, GLenum  b, GLenum  c, GLfloat *d) {
	interceptor::getCurrentExt()->glGetMultiTexEnvfvEXT(a,b,c,d);
}
inline void glGetMultiTexEnvivEXT(GLenum  a, GLenum  b, GLenum  c, GLint *d) {
	interceptor::getCurrentExt()->glGetMultiTexEnvivEXT(a,b,c,d);
}
inline void glGetMultiTexGendvEXT(GLenum  a, GLenum  b, GLenum  c, GLdouble *d) {
	interceptor::getCurrentExt()->glGetMultiTexGendvEXT(a,b,c,d);
}
inline void glGetMultiTexGenfvEXT(GLenum  a, GLenum  b, GLenum  c, GLfloat *d) {
	interceptor::getCurrentExt()->glGetMultiTexGenfvEXT(a,b,c,d);
}
inline void glGetMultiTexGenivEXT(GLenum  a, GLenum  b, GLenum  c, GLint *d) {
	interceptor::getCurrentExt()->glGetMultiTexGenivEXT(a,b,c,d);
}
inline void glMultiTexParameteriEXT(GLenum  a, GLenum  b, GLenum  c, GLint  d) {
	interceptor::getCurrentExt()->glMultiTexParameteriEXT(a,b,c,d);
}
inline void glMultiTexParameterivEXT(GLenum  a, GLenum  b, GLenum  c, const GLint *d) {
	interceptor::getCurrentExt()->glMultiTexParameterivEXT(a,b,c,d);
}
inline void glMultiTexParameterfEXT(GLenum  a, GLenum  b, GLenum  c, GLfloat  d) {
	interceptor::getCurrentExt()->glMultiTexParameterfEXT(a,b,c,d);
}
inline void glMultiTexParameterfvEXT(GLenum  a, GLenum  b, GLenum  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glMultiTexParameterfvEXT(a,b,c,d);
}
inline void glMultiTexImage1DEXT(GLenum  a, GLenum  b, GLint  c, GLint  d, GLsizei  e, GLint  f, GLenum  g, GLenum  h, const void *i) {
	interceptor::getCurrentExt()->glMultiTexImage1DEXT(a,b,c,d,e,f,g,h,i);
}
inline void glMultiTexImage2DEXT(GLenum  a, GLenum  b, GLint  c, GLint  d, GLsizei  e, GLsizei  f, GLint  g, GLenum  h, GLenum  i, const void *j) {
	interceptor::getCurrentExt()->glMultiTexImage2DEXT(a,b,c,d,e,f,g,h,i,j);
}
inline void glMultiTexSubImage1DEXT(GLenum  a, GLenum  b, GLint  c, GLint  d, GLsizei  e, GLenum  f, GLenum  g, const void *h) {
	interceptor::getCurrentExt()->glMultiTexSubImage1DEXT(a,b,c,d,e,f,g,h);
}
inline void glMultiTexSubImage2DEXT(GLenum  a, GLenum  b, GLint  c, GLint  d, GLint  e, GLsizei  f, GLsizei  g, GLenum  h, GLenum  i, const void *j) {
	interceptor::getCurrentExt()->glMultiTexSubImage2DEXT(a,b,c,d,e,f,g,h,i,j);
}
inline void glCopyMultiTexImage1DEXT(GLenum  a, GLenum  b, GLint  c, GLenum  d, GLint  e, GLint  f, GLsizei  g, GLint  h) {
	interceptor::getCurrentExt()->glCopyMultiTexImage1DEXT(a,b,c,d,e,f,g,h);
}
inline void glCopyMultiTexImage2DEXT(GLenum  a, GLenum  b, GLint  c, GLenum  d, GLint  e, GLint  f, GLsizei  g, GLsizei  h, GLint  i) {
	interceptor::getCurrentExt()->glCopyMultiTexImage2DEXT(a,b,c,d,e,f,g,h,i);
}
inline void glCopyMultiTexSubImage1DEXT(GLenum  a, GLenum  b, GLint  c, GLint  d, GLint  e, GLint  f, GLsizei  g) {
	interceptor::getCurrentExt()->glCopyMultiTexSubImage1DEXT(a,b,c,d,e,f,g);
}
inline void glCopyMultiTexSubImage2DEXT(GLenum  a, GLenum  b, GLint  c, GLint  d, GLint  e, GLint  f, GLint  g, GLsizei  h, GLsizei  i) {
	interceptor::getCurrentExt()->glCopyMultiTexSubImage2DEXT(a,b,c,d,e,f,g,h,i);
}
inline void glGetMultiTexImageEXT(GLenum  a, GLenum  b, GLint  c, GLenum  d, GLenum  e, void *f) {
	interceptor::getCurrentExt()->glGetMultiTexImageEXT(a,b,c,d,e,f);
}
inline void glGetMultiTexParameterfvEXT(GLenum  a, GLenum  b, GLenum  c, GLfloat *d) {
	interceptor::getCurrentExt()->glGetMultiTexParameterfvEXT(a,b,c,d);
}
inline void glGetMultiTexParameterivEXT(GLenum  a, GLenum  b, GLenum  c, GLint *d) {
	interceptor::getCurrentExt()->glGetMultiTexParameterivEXT(a,b,c,d);
}
inline void glGetMultiTexLevelParameterfvEXT(GLenum  a, GLenum  b, GLint  c, GLenum  d, GLfloat *e) {
	interceptor::getCurrentExt()->glGetMultiTexLevelParameterfvEXT(a,b,c,d,e);
}
inline void glGetMultiTexLevelParameterivEXT(GLenum  a, GLenum  b, GLint  c, GLenum  d, GLint *e) {
	interceptor::getCurrentExt()->glGetMultiTexLevelParameterivEXT(a,b,c,d,e);
}
inline void glMultiTexImage3DEXT(GLenum  a, GLenum  b, GLint  c, GLint  d, GLsizei  e, GLsizei  f, GLsizei  g, GLint  h, GLenum  i, GLenum  j, const void *k) {
	interceptor::getCurrentExt()->glMultiTexImage3DEXT(a,b,c,d,e,f,g,h,i,j,k);
}
inline void glMultiTexSubImage3DEXT(GLenum  a, GLenum  b, GLint  c, GLint  d, GLint  e, GLint  f, GLsizei  g, GLsizei  h, GLsizei  i, GLenum  j, GLenum  k, const void *l) {
	interceptor::getCurrentExt()->glMultiTexSubImage3DEXT(a,b,c,d,e,f,g,h,i,j,k,l);
}
inline void glCopyMultiTexSubImage3DEXT(GLenum  a, GLenum  b, GLint  c, GLint  d, GLint  e, GLint  f, GLint  g, GLint  h, GLsizei  i, GLsizei  j) {
	interceptor::getCurrentExt()->glCopyMultiTexSubImage3DEXT(a,b,c,d,e,f,g,h,i,j);
}
inline void glEnableClientStateIndexedEXT(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glEnableClientStateIndexedEXT(a,b);
}
inline void glDisableClientStateIndexedEXT(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glDisableClientStateIndexedEXT(a,b);
}
inline void glGetFloatIndexedvEXT(GLenum  a, GLuint  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetFloatIndexedvEXT(a,b,c);
}
inline void glGetDoubleIndexedvEXT(GLenum  a, GLuint  b, GLdouble *c) {
	interceptor::getCurrentExt()->glGetDoubleIndexedvEXT(a,b,c);
}
inline void glGetPointerIndexedvEXT(GLenum  a, GLuint  b, void **c) {
	interceptor::getCurrentExt()->glGetPointerIndexedvEXT(a,b,c);
}
inline void glEnableIndexedEXT(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glEnableIndexedEXT(a,b);
}
inline void glDisableIndexedEXT(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glDisableIndexedEXT(a,b);
}
inline GLboolean glIsEnabledIndexedEXT(GLenum  a, GLuint  b) {
	return interceptor::getCurrentExt()->glIsEnabledIndexedEXT(a,b);
}
inline void glGetIntegerIndexedvEXT(GLenum  a, GLuint  b, GLint *c) {
	interceptor::getCurrentExt()->glGetIntegerIndexedvEXT(a,b,c);
}
inline void glGetBooleanIndexedvEXT(GLenum  a, GLuint  b, GLboolean *c) {
	interceptor::getCurrentExt()->glGetBooleanIndexedvEXT(a,b,c);
}
inline void glCompressedTextureImage3DEXT(GLuint  a, GLenum  b, GLint  c, GLenum  d, GLsizei  e, GLsizei  f, GLsizei  g, GLint  h, GLsizei  i, const void *j) {
	interceptor::getCurrentExt()->glCompressedTextureImage3DEXT(a,b,c,d,e,f,g,h,i,j);
}
inline void glCompressedTextureImage2DEXT(GLuint  a, GLenum  b, GLint  c, GLenum  d, GLsizei  e, GLsizei  f, GLint  g, GLsizei  h, const void *i) {
	interceptor::getCurrentExt()->glCompressedTextureImage2DEXT(a,b,c,d,e,f,g,h,i);
}
inline void glCompressedTextureImage1DEXT(GLuint  a, GLenum  b, GLint  c, GLenum  d, GLsizei  e, GLint  f, GLsizei  g, const void *h) {
	interceptor::getCurrentExt()->glCompressedTextureImage1DEXT(a,b,c,d,e,f,g,h);
}
inline void glCompressedTextureSubImage3DEXT(GLuint  a, GLenum  b, GLint  c, GLint  d, GLint  e, GLint  f, GLsizei  g, GLsizei  h, GLsizei  i, GLenum  j, GLsizei  k, const void *l) {
	interceptor::getCurrentExt()->glCompressedTextureSubImage3DEXT(a,b,c,d,e,f,g,h,i,j,k,l);
}
inline void glCompressedTextureSubImage2DEXT(GLuint  a, GLenum  b, GLint  c, GLint  d, GLint  e, GLsizei  f, GLsizei  g, GLenum  h, GLsizei  i, const void *j) {
	interceptor::getCurrentExt()->glCompressedTextureSubImage2DEXT(a,b,c,d,e,f,g,h,i,j);
}
inline void glCompressedTextureSubImage1DEXT(GLuint  a, GLenum  b, GLint  c, GLint  d, GLsizei  e, GLenum  f, GLsizei  g, const void *h) {
	interceptor::getCurrentExt()->glCompressedTextureSubImage1DEXT(a,b,c,d,e,f,g,h);
}
inline void glGetCompressedTextureImageEXT(GLuint  a, GLenum  b, GLint  c, void *d) {
	interceptor::getCurrentExt()->glGetCompressedTextureImageEXT(a,b,c,d);
}
inline void glCompressedMultiTexImage3DEXT(GLenum  a, GLenum  b, GLint  c, GLenum  d, GLsizei  e, GLsizei  f, GLsizei  g, GLint  h, GLsizei  i, const void *j) {
	interceptor::getCurrentExt()->glCompressedMultiTexImage3DEXT(a,b,c,d,e,f,g,h,i,j);
}
inline void glCompressedMultiTexImage2DEXT(GLenum  a, GLenum  b, GLint  c, GLenum  d, GLsizei  e, GLsizei  f, GLint  g, GLsizei  h, const void *i) {
	interceptor::getCurrentExt()->glCompressedMultiTexImage2DEXT(a,b,c,d,e,f,g,h,i);
}
inline void glCompressedMultiTexImage1DEXT(GLenum  a, GLenum  b, GLint  c, GLenum  d, GLsizei  e, GLint  f, GLsizei  g, const void *h) {
	interceptor::getCurrentExt()->glCompressedMultiTexImage1DEXT(a,b,c,d,e,f,g,h);
}
inline void glCompressedMultiTexSubImage3DEXT(GLenum  a, GLenum  b, GLint  c, GLint  d, GLint  e, GLint  f, GLsizei  g, GLsizei  h, GLsizei  i, GLenum  j, GLsizei  k, const void *l) {
	interceptor::getCurrentExt()->glCompressedMultiTexSubImage3DEXT(a,b,c,d,e,f,g,h,i,j,k,l);
}
inline void glCompressedMultiTexSubImage2DEXT(GLenum  a, GLenum  b, GLint  c, GLint  d, GLint  e, GLsizei  f, GLsizei  g, GLenum  h, GLsizei  i, const void *j) {
	interceptor::getCurrentExt()->glCompressedMultiTexSubImage2DEXT(a,b,c,d,e,f,g,h,i,j);
}
inline void glCompressedMultiTexSubImage1DEXT(GLenum  a, GLenum  b, GLint  c, GLint  d, GLsizei  e, GLenum  f, GLsizei  g, const void *h) {
	interceptor::getCurrentExt()->glCompressedMultiTexSubImage1DEXT(a,b,c,d,e,f,g,h);
}
inline void glGetCompressedMultiTexImageEXT(GLenum  a, GLenum  b, GLint  c, void *d) {
	interceptor::getCurrentExt()->glGetCompressedMultiTexImageEXT(a,b,c,d);
}
inline void glMatrixLoadTransposefEXT(GLenum  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glMatrixLoadTransposefEXT(a,b);
}
inline void glMatrixLoadTransposedEXT(GLenum  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glMatrixLoadTransposedEXT(a,b);
}
inline void glMatrixMultTransposefEXT(GLenum  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glMatrixMultTransposefEXT(a,b);
}
inline void glMatrixMultTransposedEXT(GLenum  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glMatrixMultTransposedEXT(a,b);
}
inline void glNamedBufferDataEXT(GLuint  a, GLsizeiptr  b, const void *c, GLenum  d) {
	interceptor::getCurrentExt()->glNamedBufferDataEXT(a,b,c,d);
}
inline void glNamedBufferSubDataEXT(GLuint  a, GLintptr  b, GLsizeiptr  c, const void *d) {
	interceptor::getCurrentExt()->glNamedBufferSubDataEXT(a,b,c,d);
}
inline void * glMapNamedBufferEXT(GLuint  a, GLenum  b) {
	return interceptor::getCurrentExt()->glMapNamedBufferEXT(a,b);
}
inline GLboolean glUnmapNamedBufferEXT(GLuint  a) {
	return interceptor::getCurrentExt()->glUnmapNamedBufferEXT(a);
}
inline void glGetNamedBufferParameterivEXT(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetNamedBufferParameterivEXT(a,b,c);
}
inline void glGetNamedBufferPointervEXT(GLuint  a, GLenum  b, void **c) {
	interceptor::getCurrentExt()->glGetNamedBufferPointervEXT(a,b,c);
}
inline void glGetNamedBufferSubDataEXT(GLuint  a, GLintptr  b, GLsizeiptr  c, void *d) {
	interceptor::getCurrentExt()->glGetNamedBufferSubDataEXT(a,b,c,d);
}
inline void glProgramUniform1fEXT(GLuint  a, GLint  b, GLfloat  c) {
	interceptor::getCurrentExt()->glProgramUniform1fEXT(a,b,c);
}
inline void glProgramUniform2fEXT(GLuint  a, GLint  b, GLfloat  c, GLfloat  d) {
	interceptor::getCurrentExt()->glProgramUniform2fEXT(a,b,c,d);
}
inline void glProgramUniform3fEXT(GLuint  a, GLint  b, GLfloat  c, GLfloat  d, GLfloat  e) {
	interceptor::getCurrentExt()->glProgramUniform3fEXT(a,b,c,d,e);
}
inline void glProgramUniform4fEXT(GLuint  a, GLint  b, GLfloat  c, GLfloat  d, GLfloat  e, GLfloat  f) {
	interceptor::getCurrentExt()->glProgramUniform4fEXT(a,b,c,d,e,f);
}
inline void glProgramUniform1iEXT(GLuint  a, GLint  b, GLint  c) {
	interceptor::getCurrentExt()->glProgramUniform1iEXT(a,b,c);
}
inline void glProgramUniform2iEXT(GLuint  a, GLint  b, GLint  c, GLint  d) {
	interceptor::getCurrentExt()->glProgramUniform2iEXT(a,b,c,d);
}
inline void glProgramUniform3iEXT(GLuint  a, GLint  b, GLint  c, GLint  d, GLint  e) {
	interceptor::getCurrentExt()->glProgramUniform3iEXT(a,b,c,d,e);
}
inline void glProgramUniform4iEXT(GLuint  a, GLint  b, GLint  c, GLint  d, GLint  e, GLint  f) {
	interceptor::getCurrentExt()->glProgramUniform4iEXT(a,b,c,d,e,f);
}
inline void glProgramUniform1fvEXT(GLuint  a, GLint  b, GLsizei  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glProgramUniform1fvEXT(a,b,c,d);
}
inline void glProgramUniform2fvEXT(GLuint  a, GLint  b, GLsizei  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glProgramUniform2fvEXT(a,b,c,d);
}
inline void glProgramUniform3fvEXT(GLuint  a, GLint  b, GLsizei  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glProgramUniform3fvEXT(a,b,c,d);
}
inline void glProgramUniform4fvEXT(GLuint  a, GLint  b, GLsizei  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glProgramUniform4fvEXT(a,b,c,d);
}
inline void glProgramUniform1ivEXT(GLuint  a, GLint  b, GLsizei  c, const GLint *d) {
	interceptor::getCurrentExt()->glProgramUniform1ivEXT(a,b,c,d);
}
inline void glProgramUniform2ivEXT(GLuint  a, GLint  b, GLsizei  c, const GLint *d) {
	interceptor::getCurrentExt()->glProgramUniform2ivEXT(a,b,c,d);
}
inline void glProgramUniform3ivEXT(GLuint  a, GLint  b, GLsizei  c, const GLint *d) {
	interceptor::getCurrentExt()->glProgramUniform3ivEXT(a,b,c,d);
}
inline void glProgramUniform4ivEXT(GLuint  a, GLint  b, GLsizei  c, const GLint *d) {
	interceptor::getCurrentExt()->glProgramUniform4ivEXT(a,b,c,d);
}
inline void glProgramUniformMatrix2fvEXT(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLfloat *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix2fvEXT(a,b,c,d,e);
}
inline void glProgramUniformMatrix3fvEXT(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLfloat *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix3fvEXT(a,b,c,d,e);
}
inline void glProgramUniformMatrix4fvEXT(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLfloat *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix4fvEXT(a,b,c,d,e);
}
inline void glProgramUniformMatrix2x3fvEXT(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLfloat *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix2x3fvEXT(a,b,c,d,e);
}
inline void glProgramUniformMatrix3x2fvEXT(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLfloat *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix3x2fvEXT(a,b,c,d,e);
}
inline void glProgramUniformMatrix2x4fvEXT(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLfloat *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix2x4fvEXT(a,b,c,d,e);
}
inline void glProgramUniformMatrix4x2fvEXT(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLfloat *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix4x2fvEXT(a,b,c,d,e);
}
inline void glProgramUniformMatrix3x4fvEXT(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLfloat *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix3x4fvEXT(a,b,c,d,e);
}
inline void glProgramUniformMatrix4x3fvEXT(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLfloat *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix4x3fvEXT(a,b,c,d,e);
}
inline void glTextureBufferEXT(GLuint  a, GLenum  b, GLenum  c, GLuint  d) {
	interceptor::getCurrentExt()->glTextureBufferEXT(a,b,c,d);
}
inline void glMultiTexBufferEXT(GLenum  a, GLenum  b, GLenum  c, GLuint  d) {
	interceptor::getCurrentExt()->glMultiTexBufferEXT(a,b,c,d);
}
inline void glTextureParameterIivEXT(GLuint  a, GLenum  b, GLenum  c, const GLint *d) {
	interceptor::getCurrentExt()->glTextureParameterIivEXT(a,b,c,d);
}
inline void glTextureParameterIuivEXT(GLuint  a, GLenum  b, GLenum  c, const GLuint *d) {
	interceptor::getCurrentExt()->glTextureParameterIuivEXT(a,b,c,d);
}
inline void glGetTextureParameterIivEXT(GLuint  a, GLenum  b, GLenum  c, GLint *d) {
	interceptor::getCurrentExt()->glGetTextureParameterIivEXT(a,b,c,d);
}
inline void glGetTextureParameterIuivEXT(GLuint  a, GLenum  b, GLenum  c, GLuint *d) {
	interceptor::getCurrentExt()->glGetTextureParameterIuivEXT(a,b,c,d);
}
inline void glMultiTexParameterIivEXT(GLenum  a, GLenum  b, GLenum  c, const GLint *d) {
	interceptor::getCurrentExt()->glMultiTexParameterIivEXT(a,b,c,d);
}
inline void glMultiTexParameterIuivEXT(GLenum  a, GLenum  b, GLenum  c, const GLuint *d) {
	interceptor::getCurrentExt()->glMultiTexParameterIuivEXT(a,b,c,d);
}
inline void glGetMultiTexParameterIivEXT(GLenum  a, GLenum  b, GLenum  c, GLint *d) {
	interceptor::getCurrentExt()->glGetMultiTexParameterIivEXT(a,b,c,d);
}
inline void glGetMultiTexParameterIuivEXT(GLenum  a, GLenum  b, GLenum  c, GLuint *d) {
	interceptor::getCurrentExt()->glGetMultiTexParameterIuivEXT(a,b,c,d);
}
inline void glProgramUniform1uiEXT(GLuint  a, GLint  b, GLuint  c) {
	interceptor::getCurrentExt()->glProgramUniform1uiEXT(a,b,c);
}
inline void glProgramUniform2uiEXT(GLuint  a, GLint  b, GLuint  c, GLuint  d) {
	interceptor::getCurrentExt()->glProgramUniform2uiEXT(a,b,c,d);
}
inline void glProgramUniform3uiEXT(GLuint  a, GLint  b, GLuint  c, GLuint  d, GLuint  e) {
	interceptor::getCurrentExt()->glProgramUniform3uiEXT(a,b,c,d,e);
}
inline void glProgramUniform4uiEXT(GLuint  a, GLint  b, GLuint  c, GLuint  d, GLuint  e, GLuint  f) {
	interceptor::getCurrentExt()->glProgramUniform4uiEXT(a,b,c,d,e,f);
}
inline void glProgramUniform1uivEXT(GLuint  a, GLint  b, GLsizei  c, const GLuint *d) {
	interceptor::getCurrentExt()->glProgramUniform1uivEXT(a,b,c,d);
}
inline void glProgramUniform2uivEXT(GLuint  a, GLint  b, GLsizei  c, const GLuint *d) {
	interceptor::getCurrentExt()->glProgramUniform2uivEXT(a,b,c,d);
}
inline void glProgramUniform3uivEXT(GLuint  a, GLint  b, GLsizei  c, const GLuint *d) {
	interceptor::getCurrentExt()->glProgramUniform3uivEXT(a,b,c,d);
}
inline void glProgramUniform4uivEXT(GLuint  a, GLint  b, GLsizei  c, const GLuint *d) {
	interceptor::getCurrentExt()->glProgramUniform4uivEXT(a,b,c,d);
}
inline void glNamedProgramLocalParameters4fvEXT(GLuint  a, GLenum  b, GLuint  c, GLsizei  d, const GLfloat *e) {
	interceptor::getCurrentExt()->glNamedProgramLocalParameters4fvEXT(a,b,c,d,e);
}
inline void glNamedProgramLocalParameterI4iEXT(GLuint  a, GLenum  b, GLuint  c, GLint  d, GLint  e, GLint  f, GLint  g) {
	interceptor::getCurrentExt()->glNamedProgramLocalParameterI4iEXT(a,b,c,d,e,f,g);
}
inline void glNamedProgramLocalParameterI4ivEXT(GLuint  a, GLenum  b, GLuint  c, const GLint *d) {
	interceptor::getCurrentExt()->glNamedProgramLocalParameterI4ivEXT(a,b,c,d);
}
inline void glNamedProgramLocalParametersI4ivEXT(GLuint  a, GLenum  b, GLuint  c, GLsizei  d, const GLint *e) {
	interceptor::getCurrentExt()->glNamedProgramLocalParametersI4ivEXT(a,b,c,d,e);
}
inline void glNamedProgramLocalParameterI4uiEXT(GLuint  a, GLenum  b, GLuint  c, GLuint  d, GLuint  e, GLuint  f, GLuint  g) {
	interceptor::getCurrentExt()->glNamedProgramLocalParameterI4uiEXT(a,b,c,d,e,f,g);
}
inline void glNamedProgramLocalParameterI4uivEXT(GLuint  a, GLenum  b, GLuint  c, const GLuint *d) {
	interceptor::getCurrentExt()->glNamedProgramLocalParameterI4uivEXT(a,b,c,d);
}
inline void glNamedProgramLocalParametersI4uivEXT(GLuint  a, GLenum  b, GLuint  c, GLsizei  d, const GLuint *e) {
	interceptor::getCurrentExt()->glNamedProgramLocalParametersI4uivEXT(a,b,c,d,e);
}
inline void glGetNamedProgramLocalParameterIivEXT(GLuint  a, GLenum  b, GLuint  c, GLint *d) {
	interceptor::getCurrentExt()->glGetNamedProgramLocalParameterIivEXT(a,b,c,d);
}
inline void glGetNamedProgramLocalParameterIuivEXT(GLuint  a, GLenum  b, GLuint  c, GLuint *d) {
	interceptor::getCurrentExt()->glGetNamedProgramLocalParameterIuivEXT(a,b,c,d);
}
inline void glEnableClientStateiEXT(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glEnableClientStateiEXT(a,b);
}
inline void glDisableClientStateiEXT(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glDisableClientStateiEXT(a,b);
}
inline void glGetFloati_vEXT(GLenum  a, GLuint  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetFloati_vEXT(a,b,c);
}
inline void glGetDoublei_vEXT(GLenum  a, GLuint  b, GLdouble *c) {
	interceptor::getCurrentExt()->glGetDoublei_vEXT(a,b,c);
}
inline void glGetPointeri_vEXT(GLenum  a, GLuint  b, void **c) {
	interceptor::getCurrentExt()->glGetPointeri_vEXT(a,b,c);
}
inline void glNamedProgramStringEXT(GLuint  a, GLenum  b, GLenum  c, GLsizei  d, const void *e) {
	interceptor::getCurrentExt()->glNamedProgramStringEXT(a,b,c,d,e);
}
inline void glNamedProgramLocalParameter4dEXT(GLuint  a, GLenum  b, GLuint  c, GLdouble  d, GLdouble  e, GLdouble  f, GLdouble  g) {
	interceptor::getCurrentExt()->glNamedProgramLocalParameter4dEXT(a,b,c,d,e,f,g);
}
inline void glNamedProgramLocalParameter4dvEXT(GLuint  a, GLenum  b, GLuint  c, const GLdouble *d) {
	interceptor::getCurrentExt()->glNamedProgramLocalParameter4dvEXT(a,b,c,d);
}
inline void glNamedProgramLocalParameter4fEXT(GLuint  a, GLenum  b, GLuint  c, GLfloat  d, GLfloat  e, GLfloat  f, GLfloat  g) {
	interceptor::getCurrentExt()->glNamedProgramLocalParameter4fEXT(a,b,c,d,e,f,g);
}
inline void glNamedProgramLocalParameter4fvEXT(GLuint  a, GLenum  b, GLuint  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glNamedProgramLocalParameter4fvEXT(a,b,c,d);
}
inline void glGetNamedProgramLocalParameterdvEXT(GLuint  a, GLenum  b, GLuint  c, GLdouble *d) {
	interceptor::getCurrentExt()->glGetNamedProgramLocalParameterdvEXT(a,b,c,d);
}
inline void glGetNamedProgramLocalParameterfvEXT(GLuint  a, GLenum  b, GLuint  c, GLfloat *d) {
	interceptor::getCurrentExt()->glGetNamedProgramLocalParameterfvEXT(a,b,c,d);
}
inline void glGetNamedProgramivEXT(GLuint  a, GLenum  b, GLenum  c, GLint *d) {
	interceptor::getCurrentExt()->glGetNamedProgramivEXT(a,b,c,d);
}
inline void glGetNamedProgramStringEXT(GLuint  a, GLenum  b, GLenum  c, void *d) {
	interceptor::getCurrentExt()->glGetNamedProgramStringEXT(a,b,c,d);
}
inline void glNamedRenderbufferStorageEXT(GLuint  a, GLenum  b, GLsizei  c, GLsizei  d) {
	interceptor::getCurrentExt()->glNamedRenderbufferStorageEXT(a,b,c,d);
}
inline void glGetNamedRenderbufferParameterivEXT(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetNamedRenderbufferParameterivEXT(a,b,c);
}
inline void glNamedRenderbufferStorageMultisampleEXT(GLuint  a, GLsizei  b, GLenum  c, GLsizei  d, GLsizei  e) {
	interceptor::getCurrentExt()->glNamedRenderbufferStorageMultisampleEXT(a,b,c,d,e);
}
inline void glNamedRenderbufferStorageMultisampleCoverageEXT(GLuint  a, GLsizei  b, GLsizei  c, GLenum  d, GLsizei  e, GLsizei  f) {
	interceptor::getCurrentExt()->glNamedRenderbufferStorageMultisampleCoverageEXT(a,b,c,d,e,f);
}
inline GLenum glCheckNamedFramebufferStatusEXT(GLuint  a, GLenum  b) {
	return interceptor::getCurrentExt()->glCheckNamedFramebufferStatusEXT(a,b);
}
inline void glNamedFramebufferTexture1DEXT(GLuint  a, GLenum  b, GLenum  c, GLuint  d, GLint  e) {
	interceptor::getCurrentExt()->glNamedFramebufferTexture1DEXT(a,b,c,d,e);
}
inline void glNamedFramebufferTexture2DEXT(GLuint  a, GLenum  b, GLenum  c, GLuint  d, GLint  e) {
	interceptor::getCurrentExt()->glNamedFramebufferTexture2DEXT(a,b,c,d,e);
}
inline void glNamedFramebufferTexture3DEXT(GLuint  a, GLenum  b, GLenum  c, GLuint  d, GLint  e, GLint  f) {
	interceptor::getCurrentExt()->glNamedFramebufferTexture3DEXT(a,b,c,d,e,f);
}
inline void glNamedFramebufferRenderbufferEXT(GLuint  a, GLenum  b, GLenum  c, GLuint  d) {
	interceptor::getCurrentExt()->glNamedFramebufferRenderbufferEXT(a,b,c,d);
}
inline void glGetNamedFramebufferAttachmentParameterivEXT(GLuint  a, GLenum  b, GLenum  c, GLint *d) {
	interceptor::getCurrentExt()->glGetNamedFramebufferAttachmentParameterivEXT(a,b,c,d);
}
inline void glGenerateTextureMipmapEXT(GLuint  a, GLenum  b) {
	interceptor::getCurrentExt()->glGenerateTextureMipmapEXT(a,b);
}
inline void glGenerateMultiTexMipmapEXT(GLenum  a, GLenum  b) {
	interceptor::getCurrentExt()->glGenerateMultiTexMipmapEXT(a,b);
}
inline void glFramebufferDrawBufferEXT(GLuint  a, GLenum  b) {
	interceptor::getCurrentExt()->glFramebufferDrawBufferEXT(a,b);
}
inline void glFramebufferDrawBuffersEXT(GLuint  a, GLsizei  b, const GLenum *c) {
	interceptor::getCurrentExt()->glFramebufferDrawBuffersEXT(a,b,c);
}
inline void glFramebufferReadBufferEXT(GLuint  a, GLenum  b) {
	interceptor::getCurrentExt()->glFramebufferReadBufferEXT(a,b);
}
inline void glGetFramebufferParameterivEXT(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetFramebufferParameterivEXT(a,b,c);
}
inline void glNamedCopyBufferSubDataEXT(GLuint  a, GLuint  b, GLintptr  c, GLintptr  d, GLsizeiptr  e) {
	interceptor::getCurrentExt()->glNamedCopyBufferSubDataEXT(a,b,c,d,e);
}
inline void glNamedFramebufferTextureEXT(GLuint  a, GLenum  b, GLuint  c, GLint  d) {
	interceptor::getCurrentExt()->glNamedFramebufferTextureEXT(a,b,c,d);
}
inline void glNamedFramebufferTextureLayerEXT(GLuint  a, GLenum  b, GLuint  c, GLint  d, GLint  e) {
	interceptor::getCurrentExt()->glNamedFramebufferTextureLayerEXT(a,b,c,d,e);
}
inline void glNamedFramebufferTextureFaceEXT(GLuint  a, GLenum  b, GLuint  c, GLint  d, GLenum  e) {
	interceptor::getCurrentExt()->glNamedFramebufferTextureFaceEXT(a,b,c,d,e);
}
inline void glTextureRenderbufferEXT(GLuint  a, GLenum  b, GLuint  c) {
	interceptor::getCurrentExt()->glTextureRenderbufferEXT(a,b,c);
}
inline void glMultiTexRenderbufferEXT(GLenum  a, GLenum  b, GLuint  c) {
	interceptor::getCurrentExt()->glMultiTexRenderbufferEXT(a,b,c);
}
inline void glVertexArrayVertexOffsetEXT(GLuint  a, GLuint  b, GLint  c, GLenum  d, GLsizei  e, GLintptr  f) {
	interceptor::getCurrentExt()->glVertexArrayVertexOffsetEXT(a,b,c,d,e,f);
}
inline void glVertexArrayColorOffsetEXT(GLuint  a, GLuint  b, GLint  c, GLenum  d, GLsizei  e, GLintptr  f) {
	interceptor::getCurrentExt()->glVertexArrayColorOffsetEXT(a,b,c,d,e,f);
}
inline void glVertexArrayEdgeFlagOffsetEXT(GLuint  a, GLuint  b, GLsizei  c, GLintptr  d) {
	interceptor::getCurrentExt()->glVertexArrayEdgeFlagOffsetEXT(a,b,c,d);
}
inline void glVertexArrayIndexOffsetEXT(GLuint  a, GLuint  b, GLenum  c, GLsizei  d, GLintptr  e) {
	interceptor::getCurrentExt()->glVertexArrayIndexOffsetEXT(a,b,c,d,e);
}
inline void glVertexArrayNormalOffsetEXT(GLuint  a, GLuint  b, GLenum  c, GLsizei  d, GLintptr  e) {
	interceptor::getCurrentExt()->glVertexArrayNormalOffsetEXT(a,b,c,d,e);
}
inline void glVertexArrayTexCoordOffsetEXT(GLuint  a, GLuint  b, GLint  c, GLenum  d, GLsizei  e, GLintptr  f) {
	interceptor::getCurrentExt()->glVertexArrayTexCoordOffsetEXT(a,b,c,d,e,f);
}
inline void glVertexArrayMultiTexCoordOffsetEXT(GLuint  a, GLuint  b, GLenum  c, GLint  d, GLenum  e, GLsizei  f, GLintptr  g) {
	interceptor::getCurrentExt()->glVertexArrayMultiTexCoordOffsetEXT(a,b,c,d,e,f,g);
}
inline void glVertexArrayFogCoordOffsetEXT(GLuint  a, GLuint  b, GLenum  c, GLsizei  d, GLintptr  e) {
	interceptor::getCurrentExt()->glVertexArrayFogCoordOffsetEXT(a,b,c,d,e);
}
inline void glVertexArraySecondaryColorOffsetEXT(GLuint  a, GLuint  b, GLint  c, GLenum  d, GLsizei  e, GLintptr  f) {
	interceptor::getCurrentExt()->glVertexArraySecondaryColorOffsetEXT(a,b,c,d,e,f);
}
inline void glVertexArrayVertexAttribOffsetEXT(GLuint  a, GLuint  b, GLuint  c, GLint  d, GLenum  e, GLboolean  f, GLsizei  g, GLintptr  h) {
	interceptor::getCurrentExt()->glVertexArrayVertexAttribOffsetEXT(a,b,c,d,e,f,g,h);
}
inline void glVertexArrayVertexAttribIOffsetEXT(GLuint  a, GLuint  b, GLuint  c, GLint  d, GLenum  e, GLsizei  f, GLintptr  g) {
	interceptor::getCurrentExt()->glVertexArrayVertexAttribIOffsetEXT(a,b,c,d,e,f,g);
}
inline void glEnableVertexArrayEXT(GLuint  a, GLenum  b) {
	interceptor::getCurrentExt()->glEnableVertexArrayEXT(a,b);
}
inline void glDisableVertexArrayEXT(GLuint  a, GLenum  b) {
	interceptor::getCurrentExt()->glDisableVertexArrayEXT(a,b);
}
inline void glEnableVertexArrayAttribEXT(GLuint  a, GLuint  b) {
	interceptor::getCurrentExt()->glEnableVertexArrayAttribEXT(a,b);
}
inline void glDisableVertexArrayAttribEXT(GLuint  a, GLuint  b) {
	interceptor::getCurrentExt()->glDisableVertexArrayAttribEXT(a,b);
}
inline void glGetVertexArrayIntegervEXT(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetVertexArrayIntegervEXT(a,b,c);
}
inline void glGetVertexArrayPointervEXT(GLuint  a, GLenum  b, void **c) {
	interceptor::getCurrentExt()->glGetVertexArrayPointervEXT(a,b,c);
}
inline void glGetVertexArrayIntegeri_vEXT(GLuint  a, GLuint  b, GLenum  c, GLint *d) {
	interceptor::getCurrentExt()->glGetVertexArrayIntegeri_vEXT(a,b,c,d);
}
inline void glGetVertexArrayPointeri_vEXT(GLuint  a, GLuint  b, GLenum  c, void **d) {
	interceptor::getCurrentExt()->glGetVertexArrayPointeri_vEXT(a,b,c,d);
}
inline void * glMapNamedBufferRangeEXT(GLuint  a, GLintptr  b, GLsizeiptr  c, GLbitfield  d) {
	return interceptor::getCurrentExt()->glMapNamedBufferRangeEXT(a,b,c,d);
}
inline void glFlushMappedNamedBufferRangeEXT(GLuint  a, GLintptr  b, GLsizeiptr  c) {
	interceptor::getCurrentExt()->glFlushMappedNamedBufferRangeEXT(a,b,c);
}
inline void glNamedBufferStorageEXT(GLuint  a, GLsizeiptr  b, const void *c, GLbitfield  d) {
	interceptor::getCurrentExt()->glNamedBufferStorageEXT(a,b,c,d);
}
inline void glClearNamedBufferDataEXT(GLuint  a, GLenum  b, GLenum  c, GLenum  d, const void *e) {
	interceptor::getCurrentExt()->glClearNamedBufferDataEXT(a,b,c,d,e);
}
inline void glClearNamedBufferSubDataEXT(GLuint  a, GLenum  b, GLsizeiptr  c, GLsizeiptr  d, GLenum  e, GLenum  f, const void *g) {
	interceptor::getCurrentExt()->glClearNamedBufferSubDataEXT(a,b,c,d,e,f,g);
}
inline void glNamedFramebufferParameteriEXT(GLuint  a, GLenum  b, GLint  c) {
	interceptor::getCurrentExt()->glNamedFramebufferParameteriEXT(a,b,c);
}
inline void glGetNamedFramebufferParameterivEXT(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetNamedFramebufferParameterivEXT(a,b,c);
}
inline void glProgramUniform1dEXT(GLuint  a, GLint  b, GLdouble  c) {
	interceptor::getCurrentExt()->glProgramUniform1dEXT(a,b,c);
}
inline void glProgramUniform2dEXT(GLuint  a, GLint  b, GLdouble  c, GLdouble  d) {
	interceptor::getCurrentExt()->glProgramUniform2dEXT(a,b,c,d);
}
inline void glProgramUniform3dEXT(GLuint  a, GLint  b, GLdouble  c, GLdouble  d, GLdouble  e) {
	interceptor::getCurrentExt()->glProgramUniform3dEXT(a,b,c,d,e);
}
inline void glProgramUniform4dEXT(GLuint  a, GLint  b, GLdouble  c, GLdouble  d, GLdouble  e, GLdouble  f) {
	interceptor::getCurrentExt()->glProgramUniform4dEXT(a,b,c,d,e,f);
}
inline void glProgramUniform1dvEXT(GLuint  a, GLint  b, GLsizei  c, const GLdouble *d) {
	interceptor::getCurrentExt()->glProgramUniform1dvEXT(a,b,c,d);
}
inline void glProgramUniform2dvEXT(GLuint  a, GLint  b, GLsizei  c, const GLdouble *d) {
	interceptor::getCurrentExt()->glProgramUniform2dvEXT(a,b,c,d);
}
inline void glProgramUniform3dvEXT(GLuint  a, GLint  b, GLsizei  c, const GLdouble *d) {
	interceptor::getCurrentExt()->glProgramUniform3dvEXT(a,b,c,d);
}
inline void glProgramUniform4dvEXT(GLuint  a, GLint  b, GLsizei  c, const GLdouble *d) {
	interceptor::getCurrentExt()->glProgramUniform4dvEXT(a,b,c,d);
}
inline void glProgramUniformMatrix2dvEXT(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLdouble *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix2dvEXT(a,b,c,d,e);
}
inline void glProgramUniformMatrix3dvEXT(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLdouble *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix3dvEXT(a,b,c,d,e);
}
inline void glProgramUniformMatrix4dvEXT(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLdouble *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix4dvEXT(a,b,c,d,e);
}
inline void glProgramUniformMatrix2x3dvEXT(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLdouble *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix2x3dvEXT(a,b,c,d,e);
}
inline void glProgramUniformMatrix2x4dvEXT(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLdouble *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix2x4dvEXT(a,b,c,d,e);
}
inline void glProgramUniformMatrix3x2dvEXT(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLdouble *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix3x2dvEXT(a,b,c,d,e);
}
inline void glProgramUniformMatrix3x4dvEXT(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLdouble *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix3x4dvEXT(a,b,c,d,e);
}
inline void glProgramUniformMatrix4x2dvEXT(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLdouble *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix4x2dvEXT(a,b,c,d,e);
}
inline void glProgramUniformMatrix4x3dvEXT(GLuint  a, GLint  b, GLsizei  c, GLboolean  d, const GLdouble *e) {
	interceptor::getCurrentExt()->glProgramUniformMatrix4x3dvEXT(a,b,c,d,e);
}
inline void glTextureBufferRangeEXT(GLuint  a, GLenum  b, GLenum  c, GLuint  d, GLintptr  e, GLsizeiptr  f) {
	interceptor::getCurrentExt()->glTextureBufferRangeEXT(a,b,c,d,e,f);
}
inline void glTextureStorage1DEXT(GLuint  a, GLenum  b, GLsizei  c, GLenum  d, GLsizei  e) {
	interceptor::getCurrentExt()->glTextureStorage1DEXT(a,b,c,d,e);
}
inline void glTextureStorage2DEXT(GLuint  a, GLenum  b, GLsizei  c, GLenum  d, GLsizei  e, GLsizei  f) {
	interceptor::getCurrentExt()->glTextureStorage2DEXT(a,b,c,d,e,f);
}
inline void glTextureStorage3DEXT(GLuint  a, GLenum  b, GLsizei  c, GLenum  d, GLsizei  e, GLsizei  f, GLsizei  g) {
	interceptor::getCurrentExt()->glTextureStorage3DEXT(a,b,c,d,e,f,g);
}
inline void glTextureStorage2DMultisampleEXT(GLuint  a, GLenum  b, GLsizei  c, GLenum  d, GLsizei  e, GLsizei  f, GLboolean  g) {
	interceptor::getCurrentExt()->glTextureStorage2DMultisampleEXT(a,b,c,d,e,f,g);
}
inline void glTextureStorage3DMultisampleEXT(GLuint  a, GLenum  b, GLsizei  c, GLenum  d, GLsizei  e, GLsizei  f, GLsizei  g, GLboolean  h) {
	interceptor::getCurrentExt()->glTextureStorage3DMultisampleEXT(a,b,c,d,e,f,g,h);
}
inline void glVertexArrayBindVertexBufferEXT(GLuint  a, GLuint  b, GLuint  c, GLintptr  d, GLsizei  e) {
	interceptor::getCurrentExt()->glVertexArrayBindVertexBufferEXT(a,b,c,d,e);
}
inline void glVertexArrayVertexAttribFormatEXT(GLuint  a, GLuint  b, GLint  c, GLenum  d, GLboolean  e, GLuint  f) {
	interceptor::getCurrentExt()->glVertexArrayVertexAttribFormatEXT(a,b,c,d,e,f);
}
inline void glVertexArrayVertexAttribIFormatEXT(GLuint  a, GLuint  b, GLint  c, GLenum  d, GLuint  e) {
	interceptor::getCurrentExt()->glVertexArrayVertexAttribIFormatEXT(a,b,c,d,e);
}
inline void glVertexArrayVertexAttribLFormatEXT(GLuint  a, GLuint  b, GLint  c, GLenum  d, GLuint  e) {
	interceptor::getCurrentExt()->glVertexArrayVertexAttribLFormatEXT(a,b,c,d,e);
}
inline void glVertexArrayVertexAttribBindingEXT(GLuint  a, GLuint  b, GLuint  c) {
	interceptor::getCurrentExt()->glVertexArrayVertexAttribBindingEXT(a,b,c);
}
inline void glVertexArrayVertexBindingDivisorEXT(GLuint  a, GLuint  b, GLuint  c) {
	interceptor::getCurrentExt()->glVertexArrayVertexBindingDivisorEXT(a,b,c);
}
inline void glVertexArrayVertexAttribLOffsetEXT(GLuint  a, GLuint  b, GLuint  c, GLint  d, GLenum  e, GLsizei  f, GLintptr  g) {
	interceptor::getCurrentExt()->glVertexArrayVertexAttribLOffsetEXT(a,b,c,d,e,f,g);
}
inline void glTexturePageCommitmentEXT(GLuint  a, GLint  b, GLint  c, GLint  d, GLint  e, GLsizei  f, GLsizei  g, GLsizei  h, GLboolean  i) {
	interceptor::getCurrentExt()->glTexturePageCommitmentEXT(a,b,c,d,e,f,g,h,i);
}
inline void glVertexArrayVertexAttribDivisorEXT(GLuint  a, GLuint  b, GLuint  c) {
	interceptor::getCurrentExt()->glVertexArrayVertexAttribDivisorEXT(a,b,c);
}
inline void glColorMaskIndexedEXT(GLuint  a, GLboolean  b, GLboolean  c, GLboolean  d, GLboolean  e) {
	interceptor::getCurrentExt()->glColorMaskIndexedEXT(a,b,c,d,e);
}
inline void glDrawArraysInstancedEXT(GLenum  a, GLint  b, GLsizei  c, GLsizei  d) {
	interceptor::getCurrentExt()->glDrawArraysInstancedEXT(a,b,c,d);
}
inline void glDrawElementsInstancedEXT(GLenum  a, GLsizei  b, GLenum  c, const void *d, GLsizei  e) {
	interceptor::getCurrentExt()->glDrawElementsInstancedEXT(a,b,c,d,e);
}
inline void glDrawRangeElementsEXT(GLenum  a, GLuint  b, GLuint  c, GLsizei  d, GLenum  e, const void *f) {
	interceptor::getCurrentExt()->glDrawRangeElementsEXT(a,b,c,d,e,f);
}
inline void glFogCoordfEXT(GLfloat  a) {
	interceptor::getCurrentExt()->glFogCoordfEXT(a);
}
inline void glFogCoordfvEXT(const GLfloat *a) {
	interceptor::getCurrentExt()->glFogCoordfvEXT(a);
}
inline void glFogCoorddEXT(GLdouble  a) {
	interceptor::getCurrentExt()->glFogCoorddEXT(a);
}
inline void glFogCoorddvEXT(const GLdouble *a) {
	interceptor::getCurrentExt()->glFogCoorddvEXT(a);
}
inline void glFogCoordPointerEXT(GLenum  a, GLsizei  b, const void *c) {
	interceptor::getCurrentExt()->glFogCoordPointerEXT(a,b,c);
}
inline void glBlitFramebufferEXT(GLint  a, GLint  b, GLint  c, GLint  d, GLint  e, GLint  f, GLint  g, GLint  h, GLbitfield  i, GLenum  j) {
	interceptor::getCurrentExt()->glBlitFramebufferEXT(a,b,c,d,e,f,g,h,i,j);
}
inline void glRenderbufferStorageMultisampleEXT(GLenum  a, GLsizei  b, GLenum  c, GLsizei  d, GLsizei  e) {
	interceptor::getCurrentExt()->glRenderbufferStorageMultisampleEXT(a,b,c,d,e);
}
inline GLboolean glIsRenderbufferEXT(GLuint  a) {
	return interceptor::getCurrentExt()->glIsRenderbufferEXT(a);
}
inline void glBindRenderbufferEXT(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glBindRenderbufferEXT(a,b);
}
inline void glDeleteRenderbuffersEXT(GLsizei  a, const GLuint *b) {
	interceptor::getCurrentExt()->glDeleteRenderbuffersEXT(a,b);
}
inline void glGenRenderbuffersEXT(GLsizei  a, GLuint *b) {
	interceptor::getCurrentExt()->glGenRenderbuffersEXT(a,b);
}
inline void glRenderbufferStorageEXT(GLenum  a, GLenum  b, GLsizei  c, GLsizei  d) {
	interceptor::getCurrentExt()->glRenderbufferStorageEXT(a,b,c,d);
}
inline void glGetRenderbufferParameterivEXT(GLenum  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetRenderbufferParameterivEXT(a,b,c);
}
inline GLboolean glIsFramebufferEXT(GLuint  a) {
	return interceptor::getCurrentExt()->glIsFramebufferEXT(a);
}
inline void glBindFramebufferEXT(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glBindFramebufferEXT(a,b);
}
inline void glDeleteFramebuffersEXT(GLsizei  a, const GLuint *b) {
	interceptor::getCurrentExt()->glDeleteFramebuffersEXT(a,b);
}
inline void glGenFramebuffersEXT(GLsizei  a, GLuint *b) {
	interceptor::getCurrentExt()->glGenFramebuffersEXT(a,b);
}
inline GLenum glCheckFramebufferStatusEXT(GLenum  a) {
	return interceptor::getCurrentExt()->glCheckFramebufferStatusEXT(a);
}
inline void glFramebufferTexture1DEXT(GLenum  a, GLenum  b, GLenum  c, GLuint  d, GLint  e) {
	interceptor::getCurrentExt()->glFramebufferTexture1DEXT(a,b,c,d,e);
}
inline void glFramebufferTexture2DEXT(GLenum  a, GLenum  b, GLenum  c, GLuint  d, GLint  e) {
	interceptor::getCurrentExt()->glFramebufferTexture2DEXT(a,b,c,d,e);
}
inline void glFramebufferTexture3DEXT(GLenum  a, GLenum  b, GLenum  c, GLuint  d, GLint  e, GLint  f) {
	interceptor::getCurrentExt()->glFramebufferTexture3DEXT(a,b,c,d,e,f);
}
inline void glFramebufferRenderbufferEXT(GLenum  a, GLenum  b, GLenum  c, GLuint  d) {
	interceptor::getCurrentExt()->glFramebufferRenderbufferEXT(a,b,c,d);
}
inline void glGetFramebufferAttachmentParameterivEXT(GLenum  a, GLenum  b, GLenum  c, GLint *d) {
	interceptor::getCurrentExt()->glGetFramebufferAttachmentParameterivEXT(a,b,c,d);
}
inline void glGenerateMipmapEXT(GLenum  a) {
	interceptor::getCurrentExt()->glGenerateMipmapEXT(a);
}
inline void glProgramParameteriEXT(GLuint  a, GLenum  b, GLint  c) {
	interceptor::getCurrentExt()->glProgramParameteriEXT(a,b,c);
}
inline void glProgramEnvParameters4fvEXT(GLenum  a, GLuint  b, GLsizei  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glProgramEnvParameters4fvEXT(a,b,c,d);
}
inline void glProgramLocalParameters4fvEXT(GLenum  a, GLuint  b, GLsizei  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glProgramLocalParameters4fvEXT(a,b,c,d);
}
inline void glGetUniformuivEXT(GLuint  a, GLint  b, GLuint *c) {
	interceptor::getCurrentExt()->glGetUniformuivEXT(a,b,c);
}
inline void glBindFragDataLocationEXT(GLuint  a, GLuint  b, const GLchar *c) {
	interceptor::getCurrentExt()->glBindFragDataLocationEXT(a,b,c);
}
inline GLint glGetFragDataLocationEXT(GLuint  a, const GLchar *b) {
	return interceptor::getCurrentExt()->glGetFragDataLocationEXT(a,b);
}
inline void glUniform1uiEXT(GLint  a, GLuint  b) {
	interceptor::getCurrentExt()->glUniform1uiEXT(a,b);
}
inline void glUniform2uiEXT(GLint  a, GLuint  b, GLuint  c) {
	interceptor::getCurrentExt()->glUniform2uiEXT(a,b,c);
}
inline void glUniform3uiEXT(GLint  a, GLuint  b, GLuint  c, GLuint  d) {
	interceptor::getCurrentExt()->glUniform3uiEXT(a,b,c,d);
}
inline void glUniform4uiEXT(GLint  a, GLuint  b, GLuint  c, GLuint  d, GLuint  e) {
	interceptor::getCurrentExt()->glUniform4uiEXT(a,b,c,d,e);
}
inline void glUniform1uivEXT(GLint  a, GLsizei  b, const GLuint *c) {
	interceptor::getCurrentExt()->glUniform1uivEXT(a,b,c);
}
inline void glUniform2uivEXT(GLint  a, GLsizei  b, const GLuint *c) {
	interceptor::getCurrentExt()->glUniform2uivEXT(a,b,c);
}
inline void glUniform3uivEXT(GLint  a, GLsizei  b, const GLuint *c) {
	interceptor::getCurrentExt()->glUniform3uivEXT(a,b,c);
}
inline void glUniform4uivEXT(GLint  a, GLsizei  b, const GLuint *c) {
	interceptor::getCurrentExt()->glUniform4uivEXT(a,b,c);
}
inline void glGetHistogramEXT(GLenum  a, GLboolean  b, GLenum  c, GLenum  d, void *e) {
	interceptor::getCurrentExt()->glGetHistogramEXT(a,b,c,d,e);
}
inline void glGetHistogramParameterfvEXT(GLenum  a, GLenum  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetHistogramParameterfvEXT(a,b,c);
}
inline void glGetHistogramParameterivEXT(GLenum  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetHistogramParameterivEXT(a,b,c);
}
inline void glGetMinmaxEXT(GLenum  a, GLboolean  b, GLenum  c, GLenum  d, void *e) {
	interceptor::getCurrentExt()->glGetMinmaxEXT(a,b,c,d,e);
}
inline void glGetMinmaxParameterfvEXT(GLenum  a, GLenum  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetMinmaxParameterfvEXT(a,b,c);
}
inline void glGetMinmaxParameterivEXT(GLenum  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetMinmaxParameterivEXT(a,b,c);
}
inline void glHistogramEXT(GLenum  a, GLsizei  b, GLenum  c, GLboolean  d) {
	interceptor::getCurrentExt()->glHistogramEXT(a,b,c,d);
}
inline void glMinmaxEXT(GLenum  a, GLenum  b, GLboolean  c) {
	interceptor::getCurrentExt()->glMinmaxEXT(a,b,c);
}
inline void glResetHistogramEXT(GLenum  a) {
	interceptor::getCurrentExt()->glResetHistogramEXT(a);
}
inline void glResetMinmaxEXT(GLenum  a) {
	interceptor::getCurrentExt()->glResetMinmaxEXT(a);
}
inline void glIndexFuncEXT(GLenum  a, GLclampf  b) {
	interceptor::getCurrentExt()->glIndexFuncEXT(a,b);
}
inline void glIndexMaterialEXT(GLenum  a, GLenum  b) {
	interceptor::getCurrentExt()->glIndexMaterialEXT(a,b);
}
inline void glApplyTextureEXT(GLenum  a) {
	interceptor::getCurrentExt()->glApplyTextureEXT(a);
}
inline void glTextureLightEXT(GLenum  a) {
	interceptor::getCurrentExt()->glTextureLightEXT(a);
}
inline void glTextureMaterialEXT(GLenum  a, GLenum  b) {
	interceptor::getCurrentExt()->glTextureMaterialEXT(a,b);
}
inline void glMultiDrawArraysEXT(GLenum  a, const GLint *b, const GLsizei *c, GLsizei  d) {
	interceptor::getCurrentExt()->glMultiDrawArraysEXT(a,b,c,d);
}
inline void glMultiDrawElementsEXT(GLenum  a, const GLsizei *b, GLenum  c, const void *const*d, GLsizei  e) {
	interceptor::getCurrentExt()->glMultiDrawElementsEXT(a,b,c,d,e);
}
inline void glSampleMaskEXT(GLclampf  a, GLboolean  b) {
	interceptor::getCurrentExt()->glSampleMaskEXT(a,b);
}
inline void glSamplePatternEXT(GLenum  a) {
	interceptor::getCurrentExt()->glSamplePatternEXT(a);
}
inline void glColorTableEXT(GLenum  a, GLenum  b, GLsizei  c, GLenum  d, GLenum  e, const void *f) {
	interceptor::getCurrentExt()->glColorTableEXT(a,b,c,d,e,f);
}
inline void glGetColorTableEXT(GLenum  a, GLenum  b, GLenum  c, void *d) {
	interceptor::getCurrentExt()->glGetColorTableEXT(a,b,c,d);
}
inline void glGetColorTableParameterivEXT(GLenum  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetColorTableParameterivEXT(a,b,c);
}
inline void glGetColorTableParameterfvEXT(GLenum  a, GLenum  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetColorTableParameterfvEXT(a,b,c);
}
inline void glPixelTransformParameteriEXT(GLenum  a, GLenum  b, GLint  c) {
	interceptor::getCurrentExt()->glPixelTransformParameteriEXT(a,b,c);
}
inline void glPixelTransformParameterfEXT(GLenum  a, GLenum  b, GLfloat  c) {
	interceptor::getCurrentExt()->glPixelTransformParameterfEXT(a,b,c);
}
inline void glPixelTransformParameterivEXT(GLenum  a, GLenum  b, const GLint *c) {
	interceptor::getCurrentExt()->glPixelTransformParameterivEXT(a,b,c);
}
inline void glPixelTransformParameterfvEXT(GLenum  a, GLenum  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glPixelTransformParameterfvEXT(a,b,c);
}
inline void glGetPixelTransformParameterivEXT(GLenum  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetPixelTransformParameterivEXT(a,b,c);
}
inline void glGetPixelTransformParameterfvEXT(GLenum  a, GLenum  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetPixelTransformParameterfvEXT(a,b,c);
}
inline void glPointParameterfEXT(GLenum  a, GLfloat  b) {
	interceptor::getCurrentExt()->glPointParameterfEXT(a,b);
}
inline void glPointParameterfvEXT(GLenum  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glPointParameterfvEXT(a,b);
}
inline void glPolygonOffsetEXT(GLfloat  a, GLfloat  b) {
	interceptor::getCurrentExt()->glPolygonOffsetEXT(a,b);
}
inline void glPolygonOffsetClampEXT(GLfloat  a, GLfloat  b, GLfloat  c) {
	interceptor::getCurrentExt()->glPolygonOffsetClampEXT(a,b,c);
}
inline void glProvokingVertexEXT(GLenum  a) {
	interceptor::getCurrentExt()->glProvokingVertexEXT(a);
}
inline void glRasterSamplesEXT(GLuint  a, GLboolean  b) {
	interceptor::getCurrentExt()->glRasterSamplesEXT(a,b);
}
inline void glSecondaryColor3bEXT(GLbyte  a, GLbyte  b, GLbyte  c) {
	interceptor::getCurrentExt()->glSecondaryColor3bEXT(a,b,c);
}
inline void glSecondaryColor3bvEXT(const GLbyte *a) {
	interceptor::getCurrentExt()->glSecondaryColor3bvEXT(a);
}
inline void glSecondaryColor3dEXT(GLdouble  a, GLdouble  b, GLdouble  c) {
	interceptor::getCurrentExt()->glSecondaryColor3dEXT(a,b,c);
}
inline void glSecondaryColor3dvEXT(const GLdouble *a) {
	interceptor::getCurrentExt()->glSecondaryColor3dvEXT(a);
}
inline void glSecondaryColor3fEXT(GLfloat  a, GLfloat  b, GLfloat  c) {
	interceptor::getCurrentExt()->glSecondaryColor3fEXT(a,b,c);
}
inline void glSecondaryColor3fvEXT(const GLfloat *a) {
	interceptor::getCurrentExt()->glSecondaryColor3fvEXT(a);
}
inline void glSecondaryColor3iEXT(GLint  a, GLint  b, GLint  c) {
	interceptor::getCurrentExt()->glSecondaryColor3iEXT(a,b,c);
}
inline void glSecondaryColor3ivEXT(const GLint *a) {
	interceptor::getCurrentExt()->glSecondaryColor3ivEXT(a);
}
inline void glSecondaryColor3sEXT(GLshort  a, GLshort  b, GLshort  c) {
	interceptor::getCurrentExt()->glSecondaryColor3sEXT(a,b,c);
}
inline void glSecondaryColor3svEXT(const GLshort *a) {
	interceptor::getCurrentExt()->glSecondaryColor3svEXT(a);
}
inline void glSecondaryColor3ubEXT(GLubyte  a, GLubyte  b, GLubyte  c) {
	interceptor::getCurrentExt()->glSecondaryColor3ubEXT(a,b,c);
}
inline void glSecondaryColor3ubvEXT(const GLubyte *a) {
	interceptor::getCurrentExt()->glSecondaryColor3ubvEXT(a);
}
inline void glSecondaryColor3uiEXT(GLuint  a, GLuint  b, GLuint  c) {
	interceptor::getCurrentExt()->glSecondaryColor3uiEXT(a,b,c);
}
inline void glSecondaryColor3uivEXT(const GLuint *a) {
	interceptor::getCurrentExt()->glSecondaryColor3uivEXT(a);
}
inline void glSecondaryColor3usEXT(GLushort  a, GLushort  b, GLushort  c) {
	interceptor::getCurrentExt()->glSecondaryColor3usEXT(a,b,c);
}
inline void glSecondaryColor3usvEXT(const GLushort *a) {
	interceptor::getCurrentExt()->glSecondaryColor3usvEXT(a);
}
inline void glSecondaryColorPointerEXT(GLint  a, GLenum  b, GLsizei  c, const void *d) {
	interceptor::getCurrentExt()->glSecondaryColorPointerEXT(a,b,c,d);
}
inline void glUseShaderProgramEXT(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glUseShaderProgramEXT(a,b);
}
inline void glActiveProgramEXT(GLuint  a) {
	interceptor::getCurrentExt()->glActiveProgramEXT(a);
}
inline GLuint glCreateShaderProgramEXT(GLenum  a, const GLchar *b) {
	return interceptor::getCurrentExt()->glCreateShaderProgramEXT(a,b);
}
inline void glBindImageTextureEXT(GLuint  a, GLuint  b, GLint  c, GLboolean  d, GLint  e, GLenum  f, GLint  g) {
	interceptor::getCurrentExt()->glBindImageTextureEXT(a,b,c,d,e,f,g);
}
inline void glMemoryBarrierEXT(GLbitfield  a) {
	interceptor::getCurrentExt()->glMemoryBarrierEXT(a);
}
inline void glStencilClearTagEXT(GLsizei  a, GLuint  b) {
	interceptor::getCurrentExt()->glStencilClearTagEXT(a,b);
}
inline void glActiveStencilFaceEXT(GLenum  a) {
	interceptor::getCurrentExt()->glActiveStencilFaceEXT(a);
}
inline void glTexSubImage1DEXT(GLenum  a, GLint  b, GLint  c, GLsizei  d, GLenum  e, GLenum  f, const void *g) {
	interceptor::getCurrentExt()->glTexSubImage1DEXT(a,b,c,d,e,f,g);
}
inline void glTexSubImage2DEXT(GLenum  a, GLint  b, GLint  c, GLint  d, GLsizei  e, GLsizei  f, GLenum  g, GLenum  h, const void *i) {
	interceptor::getCurrentExt()->glTexSubImage2DEXT(a,b,c,d,e,f,g,h,i);
}
inline void glTexImage3DEXT(GLenum  a, GLint  b, GLenum  c, GLsizei  d, GLsizei  e, GLsizei  f, GLint  g, GLenum  h, GLenum  i, const void *j) {
	interceptor::getCurrentExt()->glTexImage3DEXT(a,b,c,d,e,f,g,h,i,j);
}
inline void glTexSubImage3DEXT(GLenum  a, GLint  b, GLint  c, GLint  d, GLint  e, GLsizei  f, GLsizei  g, GLsizei  h, GLenum  i, GLenum  j, const void *k) {
	interceptor::getCurrentExt()->glTexSubImage3DEXT(a,b,c,d,e,f,g,h,i,j,k);
}
inline void glFramebufferTextureLayerEXT(GLenum  a, GLenum  b, GLuint  c, GLint  d, GLint  e) {
	interceptor::getCurrentExt()->glFramebufferTextureLayerEXT(a,b,c,d,e);
}
inline void glTexBufferEXT(GLenum  a, GLenum  b, GLuint  c) {
	interceptor::getCurrentExt()->glTexBufferEXT(a,b,c);
}
inline void glTexParameterIivEXT(GLenum  a, GLenum  b, const GLint *c) {
	interceptor::getCurrentExt()->glTexParameterIivEXT(a,b,c);
}
inline void glTexParameterIuivEXT(GLenum  a, GLenum  b, const GLuint *c) {
	interceptor::getCurrentExt()->glTexParameterIuivEXT(a,b,c);
}
inline void glGetTexParameterIivEXT(GLenum  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetTexParameterIivEXT(a,b,c);
}
inline void glGetTexParameterIuivEXT(GLenum  a, GLenum  b, GLuint *c) {
	interceptor::getCurrentExt()->glGetTexParameterIuivEXT(a,b,c);
}
inline void glClearColorIiEXT(GLint  a, GLint  b, GLint  c, GLint  d) {
	interceptor::getCurrentExt()->glClearColorIiEXT(a,b,c,d);
}
inline void glClearColorIuiEXT(GLuint  a, GLuint  b, GLuint  c, GLuint  d) {
	interceptor::getCurrentExt()->glClearColorIuiEXT(a,b,c,d);
}
inline GLboolean glAreTexturesResidentEXT(GLsizei  a, const GLuint *b, GLboolean *c) {
	return interceptor::getCurrentExt()->glAreTexturesResidentEXT(a,b,c);
}
inline void glBindTextureEXT(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glBindTextureEXT(a,b);
}
inline void glDeleteTexturesEXT(GLsizei  a, const GLuint *b) {
	interceptor::getCurrentExt()->glDeleteTexturesEXT(a,b);
}
inline void glGenTexturesEXT(GLsizei  a, GLuint *b) {
	interceptor::getCurrentExt()->glGenTexturesEXT(a,b);
}
inline GLboolean glIsTextureEXT(GLuint  a) {
	return interceptor::getCurrentExt()->glIsTextureEXT(a);
}
inline void glPrioritizeTexturesEXT(GLsizei  a, const GLuint *b, const GLclampf *c) {
	interceptor::getCurrentExt()->glPrioritizeTexturesEXT(a,b,c);
}
inline void glTextureNormalEXT(GLenum  a) {
	interceptor::getCurrentExt()->glTextureNormalEXT(a);
}
inline void glGetQueryObjecti64vEXT(GLuint  a, GLenum  b, GLint64 *c) {
	interceptor::getCurrentExt()->glGetQueryObjecti64vEXT(a,b,c);
}
inline void glGetQueryObjectui64vEXT(GLuint  a, GLenum  b, GLuint64 *c) {
	interceptor::getCurrentExt()->glGetQueryObjectui64vEXT(a,b,c);
}
inline void glBeginTransformFeedbackEXT(GLenum  a) {
	interceptor::getCurrentExt()->glBeginTransformFeedbackEXT(a);
}
inline void glEndTransformFeedbackEXT(void) {
	interceptor::getCurrentExt()->glEndTransformFeedbackEXT();
}
inline void glBindBufferRangeEXT(GLenum  a, GLuint  b, GLuint  c, GLintptr  d, GLsizeiptr  e) {
	interceptor::getCurrentExt()->glBindBufferRangeEXT(a,b,c,d,e);
}
inline void glBindBufferOffsetEXT(GLenum  a, GLuint  b, GLuint  c, GLintptr  d) {
	interceptor::getCurrentExt()->glBindBufferOffsetEXT(a,b,c,d);
}
inline void glBindBufferBaseEXT(GLenum  a, GLuint  b, GLuint  c) {
	interceptor::getCurrentExt()->glBindBufferBaseEXT(a,b,c);
}
inline void glTransformFeedbackVaryingsEXT(GLuint  a, GLsizei  b, const GLchar *const*c, GLenum  d) {
	interceptor::getCurrentExt()->glTransformFeedbackVaryingsEXT(a,b,c,d);
}
inline void glGetTransformFeedbackVaryingEXT(GLuint  a, GLuint  b, GLsizei  c, GLsizei *d, GLsizei *e, GLenum *f, GLchar *g) {
	interceptor::getCurrentExt()->glGetTransformFeedbackVaryingEXT(a,b,c,d,e,f,g);
}
inline void glArrayElementEXT(GLint  a) {
	interceptor::getCurrentExt()->glArrayElementEXT(a);
}
inline void glColorPointerEXT(GLint  a, GLenum  b, GLsizei  c, GLsizei  d, const void *e) {
	interceptor::getCurrentExt()->glColorPointerEXT(a,b,c,d,e);
}
inline void glDrawArraysEXT(GLenum  a, GLint  b, GLsizei  c) {
	interceptor::getCurrentExt()->glDrawArraysEXT(a,b,c);
}
inline void glEdgeFlagPointerEXT(GLsizei  a, GLsizei  b, const GLboolean *c) {
	interceptor::getCurrentExt()->glEdgeFlagPointerEXT(a,b,c);
}
inline void glGetPointervEXT(GLenum  a, void **b) {
	interceptor::getCurrentExt()->glGetPointervEXT(a,b);
}
inline void glIndexPointerEXT(GLenum  a, GLsizei  b, GLsizei  c, const void *d) {
	interceptor::getCurrentExt()->glIndexPointerEXT(a,b,c,d);
}
inline void glNormalPointerEXT(GLenum  a, GLsizei  b, GLsizei  c, const void *d) {
	interceptor::getCurrentExt()->glNormalPointerEXT(a,b,c,d);
}
inline void glTexCoordPointerEXT(GLint  a, GLenum  b, GLsizei  c, GLsizei  d, const void *e) {
	interceptor::getCurrentExt()->glTexCoordPointerEXT(a,b,c,d,e);
}
inline void glVertexPointerEXT(GLint  a, GLenum  b, GLsizei  c, GLsizei  d, const void *e) {
	interceptor::getCurrentExt()->glVertexPointerEXT(a,b,c,d,e);
}
inline void glVertexAttribL1dEXT(GLuint  a, GLdouble  b) {
	interceptor::getCurrentExt()->glVertexAttribL1dEXT(a,b);
}
inline void glVertexAttribL2dEXT(GLuint  a, GLdouble  b, GLdouble  c) {
	interceptor::getCurrentExt()->glVertexAttribL2dEXT(a,b,c);
}
inline void glVertexAttribL3dEXT(GLuint  a, GLdouble  b, GLdouble  c, GLdouble  d) {
	interceptor::getCurrentExt()->glVertexAttribL3dEXT(a,b,c,d);
}
inline void glVertexAttribL4dEXT(GLuint  a, GLdouble  b, GLdouble  c, GLdouble  d, GLdouble  e) {
	interceptor::getCurrentExt()->glVertexAttribL4dEXT(a,b,c,d,e);
}
inline void glVertexAttribL1dvEXT(GLuint  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glVertexAttribL1dvEXT(a,b);
}
inline void glVertexAttribL2dvEXT(GLuint  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glVertexAttribL2dvEXT(a,b);
}
inline void glVertexAttribL3dvEXT(GLuint  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glVertexAttribL3dvEXT(a,b);
}
inline void glVertexAttribL4dvEXT(GLuint  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glVertexAttribL4dvEXT(a,b);
}
inline void glVertexAttribLPointerEXT(GLuint  a, GLint  b, GLenum  c, GLsizei  d, const void *e) {
	interceptor::getCurrentExt()->glVertexAttribLPointerEXT(a,b,c,d,e);
}
inline void glGetVertexAttribLdvEXT(GLuint  a, GLenum  b, GLdouble *c) {
	interceptor::getCurrentExt()->glGetVertexAttribLdvEXT(a,b,c);
}
inline void glBeginVertexShaderEXT(void) {
	interceptor::getCurrentExt()->glBeginVertexShaderEXT();
}
inline void glEndVertexShaderEXT(void) {
	interceptor::getCurrentExt()->glEndVertexShaderEXT();
}
inline void glBindVertexShaderEXT(GLuint  a) {
	interceptor::getCurrentExt()->glBindVertexShaderEXT(a);
}
inline GLuint glGenVertexShadersEXT(GLuint  a) {
	return interceptor::getCurrentExt()->glGenVertexShadersEXT(a);
}
inline void glDeleteVertexShaderEXT(GLuint  a) {
	interceptor::getCurrentExt()->glDeleteVertexShaderEXT(a);
}
inline void glShaderOp1EXT(GLenum  a, GLuint  b, GLuint  c) {
	interceptor::getCurrentExt()->glShaderOp1EXT(a,b,c);
}
inline void glShaderOp2EXT(GLenum  a, GLuint  b, GLuint  c, GLuint  d) {
	interceptor::getCurrentExt()->glShaderOp2EXT(a,b,c,d);
}
inline void glShaderOp3EXT(GLenum  a, GLuint  b, GLuint  c, GLuint  d, GLuint  e) {
	interceptor::getCurrentExt()->glShaderOp3EXT(a,b,c,d,e);
}
inline void glSwizzleEXT(GLuint  a, GLuint  b, GLenum  c, GLenum  d, GLenum  e, GLenum  f) {
	interceptor::getCurrentExt()->glSwizzleEXT(a,b,c,d,e,f);
}
inline void glWriteMaskEXT(GLuint  a, GLuint  b, GLenum  c, GLenum  d, GLenum  e, GLenum  f) {
	interceptor::getCurrentExt()->glWriteMaskEXT(a,b,c,d,e,f);
}
inline void glInsertComponentEXT(GLuint  a, GLuint  b, GLuint  c) {
	interceptor::getCurrentExt()->glInsertComponentEXT(a,b,c);
}
inline void glExtractComponentEXT(GLuint  a, GLuint  b, GLuint  c) {
	interceptor::getCurrentExt()->glExtractComponentEXT(a,b,c);
}
inline GLuint glGenSymbolsEXT(GLenum  a, GLenum  b, GLenum  c, GLuint  d) {
	return interceptor::getCurrentExt()->glGenSymbolsEXT(a,b,c,d);
}
inline void glSetInvariantEXT(GLuint  a, GLenum  b, const void *c) {
	interceptor::getCurrentExt()->glSetInvariantEXT(a,b,c);
}
inline void glSetLocalConstantEXT(GLuint  a, GLenum  b, const void *c) {
	interceptor::getCurrentExt()->glSetLocalConstantEXT(a,b,c);
}
inline void glVariantbvEXT(GLuint  a, const GLbyte *b) {
	interceptor::getCurrentExt()->glVariantbvEXT(a,b);
}
inline void glVariantsvEXT(GLuint  a, const GLshort *b) {
	interceptor::getCurrentExt()->glVariantsvEXT(a,b);
}
inline void glVariantivEXT(GLuint  a, const GLint *b) {
	interceptor::getCurrentExt()->glVariantivEXT(a,b);
}
inline void glVariantfvEXT(GLuint  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glVariantfvEXT(a,b);
}
inline void glVariantdvEXT(GLuint  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glVariantdvEXT(a,b);
}
inline void glVariantubvEXT(GLuint  a, const GLubyte *b) {
	interceptor::getCurrentExt()->glVariantubvEXT(a,b);
}
inline void glVariantusvEXT(GLuint  a, const GLushort *b) {
	interceptor::getCurrentExt()->glVariantusvEXT(a,b);
}
inline void glVariantuivEXT(GLuint  a, const GLuint *b) {
	interceptor::getCurrentExt()->glVariantuivEXT(a,b);
}
inline void glVariantPointerEXT(GLuint  a, GLenum  b, GLuint  c, const void *d) {
	interceptor::getCurrentExt()->glVariantPointerEXT(a,b,c,d);
}
inline void glEnableVariantClientStateEXT(GLuint  a) {
	interceptor::getCurrentExt()->glEnableVariantClientStateEXT(a);
}
inline void glDisableVariantClientStateEXT(GLuint  a) {
	interceptor::getCurrentExt()->glDisableVariantClientStateEXT(a);
}
inline GLuint glBindLightParameterEXT(GLenum  a, GLenum  b) {
	return interceptor::getCurrentExt()->glBindLightParameterEXT(a,b);
}
inline GLuint glBindMaterialParameterEXT(GLenum  a, GLenum  b) {
	return interceptor::getCurrentExt()->glBindMaterialParameterEXT(a,b);
}
inline GLuint glBindTexGenParameterEXT(GLenum  a, GLenum  b, GLenum  c) {
	return interceptor::getCurrentExt()->glBindTexGenParameterEXT(a,b,c);
}
inline GLuint glBindTextureUnitParameterEXT(GLenum  a, GLenum  b) {
	return interceptor::getCurrentExt()->glBindTextureUnitParameterEXT(a,b);
}
inline GLuint glBindParameterEXT(GLenum  a) {
	return interceptor::getCurrentExt()->glBindParameterEXT(a);
}
inline GLboolean glIsVariantEnabledEXT(GLuint  a, GLenum  b) {
	return interceptor::getCurrentExt()->glIsVariantEnabledEXT(a,b);
}
inline void glGetVariantBooleanvEXT(GLuint  a, GLenum  b, GLboolean *c) {
	interceptor::getCurrentExt()->glGetVariantBooleanvEXT(a,b,c);
}
inline void glGetVariantIntegervEXT(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetVariantIntegervEXT(a,b,c);
}
inline void glGetVariantFloatvEXT(GLuint  a, GLenum  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetVariantFloatvEXT(a,b,c);
}
inline void glGetVariantPointervEXT(GLuint  a, GLenum  b, void **c) {
	interceptor::getCurrentExt()->glGetVariantPointervEXT(a,b,c);
}
inline void glGetInvariantBooleanvEXT(GLuint  a, GLenum  b, GLboolean *c) {
	interceptor::getCurrentExt()->glGetInvariantBooleanvEXT(a,b,c);
}
inline void glGetInvariantIntegervEXT(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetInvariantIntegervEXT(a,b,c);
}
inline void glGetInvariantFloatvEXT(GLuint  a, GLenum  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetInvariantFloatvEXT(a,b,c);
}
inline void glGetLocalConstantBooleanvEXT(GLuint  a, GLenum  b, GLboolean *c) {
	interceptor::getCurrentExt()->glGetLocalConstantBooleanvEXT(a,b,c);
}
inline void glGetLocalConstantIntegervEXT(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetLocalConstantIntegervEXT(a,b,c);
}
inline void glGetLocalConstantFloatvEXT(GLuint  a, GLenum  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetLocalConstantFloatvEXT(a,b,c);
}
inline void glVertexWeightfEXT(GLfloat  a) {
	interceptor::getCurrentExt()->glVertexWeightfEXT(a);
}
inline void glVertexWeightfvEXT(const GLfloat *a) {
	interceptor::getCurrentExt()->glVertexWeightfvEXT(a);
}
inline void glVertexWeightPointerEXT(GLint  a, GLenum  b, GLsizei  c, const void *d) {
	interceptor::getCurrentExt()->glVertexWeightPointerEXT(a,b,c,d);
}
inline void glWindowRectanglesEXT(GLenum  a, GLsizei  b, const GLint *c) {
	interceptor::getCurrentExt()->glWindowRectanglesEXT(a,b,c);
}
inline GLsync glImportSyncEXT(GLenum  a, GLintptr  b, GLbitfield  c) {
	return interceptor::getCurrentExt()->glImportSyncEXT(a,b,c);
}
inline void glFrameTerminatorGREMEDY(void) {
	interceptor::getCurrentExt()->glFrameTerminatorGREMEDY();
}
inline void glStringMarkerGREMEDY(GLsizei  a, const void *b) {
	interceptor::getCurrentExt()->glStringMarkerGREMEDY(a,b);
}
inline void glImageTransformParameteriHP(GLenum  a, GLenum  b, GLint  c) {
	interceptor::getCurrentExt()->glImageTransformParameteriHP(a,b,c);
}
inline void glImageTransformParameterfHP(GLenum  a, GLenum  b, GLfloat  c) {
	interceptor::getCurrentExt()->glImageTransformParameterfHP(a,b,c);
}
inline void glImageTransformParameterivHP(GLenum  a, GLenum  b, const GLint *c) {
	interceptor::getCurrentExt()->glImageTransformParameterivHP(a,b,c);
}
inline void glImageTransformParameterfvHP(GLenum  a, GLenum  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glImageTransformParameterfvHP(a,b,c);
}
inline void glGetImageTransformParameterivHP(GLenum  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetImageTransformParameterivHP(a,b,c);
}
inline void glGetImageTransformParameterfvHP(GLenum  a, GLenum  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetImageTransformParameterfvHP(a,b,c);
}
inline void glMultiModeDrawArraysIBM(const GLenum *a, const GLint *b, const GLsizei *c, GLsizei  d, GLint  e) {
	interceptor::getCurrentExt()->glMultiModeDrawArraysIBM(a,b,c,d,e);
}
inline void glMultiModeDrawElementsIBM(const GLenum *a, const GLsizei *b, GLenum  c, const void *const*d, GLsizei  e, GLint  f) {
	interceptor::getCurrentExt()->glMultiModeDrawElementsIBM(a,b,c,d,e,f);
}
inline void glFlushStaticDataIBM(GLenum  a) {
	interceptor::getCurrentExt()->glFlushStaticDataIBM(a);
}
inline void glColorPointerListIBM(GLint  a, GLenum  b, GLint  c, const void **d, GLint  e) {
	interceptor::getCurrentExt()->glColorPointerListIBM(a,b,c,d,e);
}
inline void glSecondaryColorPointerListIBM(GLint  a, GLenum  b, GLint  c, const void **d, GLint  e) {
	interceptor::getCurrentExt()->glSecondaryColorPointerListIBM(a,b,c,d,e);
}
inline void glEdgeFlagPointerListIBM(GLint  a, const GLboolean **b, GLint  c) {
	interceptor::getCurrentExt()->glEdgeFlagPointerListIBM(a,b,c);
}
inline void glFogCoordPointerListIBM(GLenum  a, GLint  b, const void **c, GLint  d) {
	interceptor::getCurrentExt()->glFogCoordPointerListIBM(a,b,c,d);
}
inline void glIndexPointerListIBM(GLenum  a, GLint  b, const void **c, GLint  d) {
	interceptor::getCurrentExt()->glIndexPointerListIBM(a,b,c,d);
}
inline void glNormalPointerListIBM(GLenum  a, GLint  b, const void **c, GLint  d) {
	interceptor::getCurrentExt()->glNormalPointerListIBM(a,b,c,d);
}
inline void glTexCoordPointerListIBM(GLint  a, GLenum  b, GLint  c, const void **d, GLint  e) {
	interceptor::getCurrentExt()->glTexCoordPointerListIBM(a,b,c,d,e);
}
inline void glVertexPointerListIBM(GLint  a, GLenum  b, GLint  c, const void **d, GLint  e) {
	interceptor::getCurrentExt()->glVertexPointerListIBM(a,b,c,d,e);
}
inline void glBlendFuncSeparateINGR(GLenum  a, GLenum  b, GLenum  c, GLenum  d) {
	interceptor::getCurrentExt()->glBlendFuncSeparateINGR(a,b,c,d);
}
inline void glApplyFramebufferAttachmentCMAAINTEL(void) {
	interceptor::getCurrentExt()->glApplyFramebufferAttachmentCMAAINTEL();
}
inline void glSyncTextureINTEL(GLuint  a) {
	interceptor::getCurrentExt()->glSyncTextureINTEL(a);
}
inline void glUnmapTexture2DINTEL(GLuint  a, GLint  b) {
	interceptor::getCurrentExt()->glUnmapTexture2DINTEL(a,b);
}
inline void * glMapTexture2DINTEL(GLuint  a, GLint  b, GLbitfield  c, GLint *d, GLenum *e) {
	return interceptor::getCurrentExt()->glMapTexture2DINTEL(a,b,c,d,e);
}
inline void glVertexPointervINTEL(GLint  a, GLenum  b, const void **c) {
	interceptor::getCurrentExt()->glVertexPointervINTEL(a,b,c);
}
inline void glNormalPointervINTEL(GLenum  a, const void **b) {
	interceptor::getCurrentExt()->glNormalPointervINTEL(a,b);
}
inline void glColorPointervINTEL(GLint  a, GLenum  b, const void **c) {
	interceptor::getCurrentExt()->glColorPointervINTEL(a,b,c);
}
inline void glTexCoordPointervINTEL(GLint  a, GLenum  b, const void **c) {
	interceptor::getCurrentExt()->glTexCoordPointervINTEL(a,b,c);
}
inline void glBeginPerfQueryINTEL(GLuint  a) {
	interceptor::getCurrentExt()->glBeginPerfQueryINTEL(a);
}
inline void glCreatePerfQueryINTEL(GLuint  a, GLuint *b) {
	interceptor::getCurrentExt()->glCreatePerfQueryINTEL(a,b);
}
inline void glDeletePerfQueryINTEL(GLuint  a) {
	interceptor::getCurrentExt()->glDeletePerfQueryINTEL(a);
}
inline void glEndPerfQueryINTEL(GLuint  a) {
	interceptor::getCurrentExt()->glEndPerfQueryINTEL(a);
}
inline void glGetFirstPerfQueryIdINTEL(GLuint *a) {
	interceptor::getCurrentExt()->glGetFirstPerfQueryIdINTEL(a);
}
inline void glGetNextPerfQueryIdINTEL(GLuint  a, GLuint *b) {
	interceptor::getCurrentExt()->glGetNextPerfQueryIdINTEL(a,b);
}
inline void glGetPerfCounterInfoINTEL(GLuint  a, GLuint  b, GLuint  c, GLchar *d, GLuint  e, GLchar *f, GLuint *g, GLuint *h, GLuint *i, GLuint *j, GLuint64 *k) {
	interceptor::getCurrentExt()->glGetPerfCounterInfoINTEL(a,b,c,d,e,f,g,h,i,j,k);
}
inline void glGetPerfQueryDataINTEL(GLuint  a, GLuint  b, GLsizei  c, GLvoid *d, GLuint *e) {
	interceptor::getCurrentExt()->glGetPerfQueryDataINTEL(a,b,c,d,e);
}
inline void glGetPerfQueryIdByNameINTEL(GLchar *a, GLuint *b) {
	interceptor::getCurrentExt()->glGetPerfQueryIdByNameINTEL(a,b);
}
inline void glGetPerfQueryInfoINTEL(GLuint  a, GLuint  b, GLchar *c, GLuint *d, GLuint *e, GLuint *f, GLuint *g) {
	interceptor::getCurrentExt()->glGetPerfQueryInfoINTEL(a,b,c,d,e,f,g);
}
inline void glResizeBuffersMESA(void) {
	interceptor::getCurrentExt()->glResizeBuffersMESA();
}
inline void glWindowPos2dMESA(GLdouble  a, GLdouble  b) {
	interceptor::getCurrentExt()->glWindowPos2dMESA(a,b);
}
inline void glWindowPos2dvMESA(const GLdouble *a) {
	interceptor::getCurrentExt()->glWindowPos2dvMESA(a);
}
inline void glWindowPos2fMESA(GLfloat  a, GLfloat  b) {
	interceptor::getCurrentExt()->glWindowPos2fMESA(a,b);
}
inline void glWindowPos2fvMESA(const GLfloat *a) {
	interceptor::getCurrentExt()->glWindowPos2fvMESA(a);
}
inline void glWindowPos2iMESA(GLint  a, GLint  b) {
	interceptor::getCurrentExt()->glWindowPos2iMESA(a,b);
}
inline void glWindowPos2ivMESA(const GLint *a) {
	interceptor::getCurrentExt()->glWindowPos2ivMESA(a);
}
inline void glWindowPos2sMESA(GLshort  a, GLshort  b) {
	interceptor::getCurrentExt()->glWindowPos2sMESA(a,b);
}
inline void glWindowPos2svMESA(const GLshort *a) {
	interceptor::getCurrentExt()->glWindowPos2svMESA(a);
}
inline void glWindowPos3dMESA(GLdouble  a, GLdouble  b, GLdouble  c) {
	interceptor::getCurrentExt()->glWindowPos3dMESA(a,b,c);
}
inline void glWindowPos3dvMESA(const GLdouble *a) {
	interceptor::getCurrentExt()->glWindowPos3dvMESA(a);
}
inline void glWindowPos3fMESA(GLfloat  a, GLfloat  b, GLfloat  c) {
	interceptor::getCurrentExt()->glWindowPos3fMESA(a,b,c);
}
inline void glWindowPos3fvMESA(const GLfloat *a) {
	interceptor::getCurrentExt()->glWindowPos3fvMESA(a);
}
inline void glWindowPos3iMESA(GLint  a, GLint  b, GLint  c) {
	interceptor::getCurrentExt()->glWindowPos3iMESA(a,b,c);
}
inline void glWindowPos3ivMESA(const GLint *a) {
	interceptor::getCurrentExt()->glWindowPos3ivMESA(a);
}
inline void glWindowPos3sMESA(GLshort  a, GLshort  b, GLshort  c) {
	interceptor::getCurrentExt()->glWindowPos3sMESA(a,b,c);
}
inline void glWindowPos3svMESA(const GLshort *a) {
	interceptor::getCurrentExt()->glWindowPos3svMESA(a);
}
inline void glWindowPos4dMESA(GLdouble  a, GLdouble  b, GLdouble  c, GLdouble  d) {
	interceptor::getCurrentExt()->glWindowPos4dMESA(a,b,c,d);
}
inline void glWindowPos4dvMESA(const GLdouble *a) {
	interceptor::getCurrentExt()->glWindowPos4dvMESA(a);
}
inline void glWindowPos4fMESA(GLfloat  a, GLfloat  b, GLfloat  c, GLfloat  d) {
	interceptor::getCurrentExt()->glWindowPos4fMESA(a,b,c,d);
}
inline void glWindowPos4fvMESA(const GLfloat *a) {
	interceptor::getCurrentExt()->glWindowPos4fvMESA(a);
}
inline void glWindowPos4iMESA(GLint  a, GLint  b, GLint  c, GLint  d) {
	interceptor::getCurrentExt()->glWindowPos4iMESA(a,b,c,d);
}
inline void glWindowPos4ivMESA(const GLint *a) {
	interceptor::getCurrentExt()->glWindowPos4ivMESA(a);
}
inline void glWindowPos4sMESA(GLshort  a, GLshort  b, GLshort  c, GLshort  d) {
	interceptor::getCurrentExt()->glWindowPos4sMESA(a,b,c,d);
}
inline void glWindowPos4svMESA(const GLshort *a) {
	interceptor::getCurrentExt()->glWindowPos4svMESA(a);
}
inline void glBeginConditionalRenderNVX(GLuint  a) {
	interceptor::getCurrentExt()->glBeginConditionalRenderNVX(a);
}
inline void glEndConditionalRenderNVX(void) {
	interceptor::getCurrentExt()->glEndConditionalRenderNVX();
}
inline void glMultiDrawArraysIndirectBindlessNV(GLenum  a, const void *b, GLsizei  c, GLsizei  d, GLint  e) {
	interceptor::getCurrentExt()->glMultiDrawArraysIndirectBindlessNV(a,b,c,d,e);
}
inline void glMultiDrawElementsIndirectBindlessNV(GLenum  a, GLenum  b, const void *c, GLsizei  d, GLsizei  e, GLint  f) {
	interceptor::getCurrentExt()->glMultiDrawElementsIndirectBindlessNV(a,b,c,d,e,f);
}
inline void glMultiDrawArraysIndirectBindlessCountNV(GLenum  a, const void *b, GLsizei  c, GLsizei  d, GLsizei  e, GLint  f) {
	interceptor::getCurrentExt()->glMultiDrawArraysIndirectBindlessCountNV(a,b,c,d,e,f);
}
inline void glMultiDrawElementsIndirectBindlessCountNV(GLenum  a, GLenum  b, const void *c, GLsizei  d, GLsizei  e, GLsizei  f, GLint  g) {
	interceptor::getCurrentExt()->glMultiDrawElementsIndirectBindlessCountNV(a,b,c,d,e,f,g);
}
inline GLuint64 glGetTextureHandleNV(GLuint  a) {
	return interceptor::getCurrentExt()->glGetTextureHandleNV(a);
}
inline GLuint64 glGetTextureSamplerHandleNV(GLuint  a, GLuint  b) {
	return interceptor::getCurrentExt()->glGetTextureSamplerHandleNV(a,b);
}
inline void glMakeTextureHandleResidentNV(GLuint64  a) {
	interceptor::getCurrentExt()->glMakeTextureHandleResidentNV(a);
}
inline void glMakeTextureHandleNonResidentNV(GLuint64  a) {
	interceptor::getCurrentExt()->glMakeTextureHandleNonResidentNV(a);
}
inline GLuint64 glGetImageHandleNV(GLuint  a, GLint  b, GLboolean  c, GLint  d, GLenum  e) {
	return interceptor::getCurrentExt()->glGetImageHandleNV(a,b,c,d,e);
}
inline void glMakeImageHandleResidentNV(GLuint64  a, GLenum  b) {
	interceptor::getCurrentExt()->glMakeImageHandleResidentNV(a,b);
}
inline void glMakeImageHandleNonResidentNV(GLuint64  a) {
	interceptor::getCurrentExt()->glMakeImageHandleNonResidentNV(a);
}
inline void glUniformHandleui64NV(GLint  a, GLuint64  b) {
	interceptor::getCurrentExt()->glUniformHandleui64NV(a,b);
}
inline void glUniformHandleui64vNV(GLint  a, GLsizei  b, const GLuint64 *c) {
	interceptor::getCurrentExt()->glUniformHandleui64vNV(a,b,c);
}
inline void glProgramUniformHandleui64NV(GLuint  a, GLint  b, GLuint64  c) {
	interceptor::getCurrentExt()->glProgramUniformHandleui64NV(a,b,c);
}
inline void glProgramUniformHandleui64vNV(GLuint  a, GLint  b, GLsizei  c, const GLuint64 *d) {
	interceptor::getCurrentExt()->glProgramUniformHandleui64vNV(a,b,c,d);
}
inline GLboolean glIsTextureHandleResidentNV(GLuint64  a) {
	return interceptor::getCurrentExt()->glIsTextureHandleResidentNV(a);
}
inline GLboolean glIsImageHandleResidentNV(GLuint64  a) {
	return interceptor::getCurrentExt()->glIsImageHandleResidentNV(a);
}
inline void glBlendParameteriNV(GLenum  a, GLint  b) {
	interceptor::getCurrentExt()->glBlendParameteriNV(a,b);
}
inline void glBlendBarrierNV(void) {
	interceptor::getCurrentExt()->glBlendBarrierNV();
}
inline void glViewportPositionWScaleNV(GLuint  a, GLfloat  b, GLfloat  c) {
	interceptor::getCurrentExt()->glViewportPositionWScaleNV(a,b,c);
}
inline void glCreateStatesNV(GLsizei  a, GLuint *b) {
	interceptor::getCurrentExt()->glCreateStatesNV(a,b);
}
inline void glDeleteStatesNV(GLsizei  a, const GLuint *b) {
	interceptor::getCurrentExt()->glDeleteStatesNV(a,b);
}
inline GLboolean glIsStateNV(GLuint  a) {
	return interceptor::getCurrentExt()->glIsStateNV(a);
}
inline void glStateCaptureNV(GLuint  a, GLenum  b) {
	interceptor::getCurrentExt()->glStateCaptureNV(a,b);
}
inline GLuint glGetCommandHeaderNV(GLenum  a, GLuint  b) {
	return interceptor::getCurrentExt()->glGetCommandHeaderNV(a,b);
}
inline GLushort glGetStageIndexNV(GLenum  a) {
	return interceptor::getCurrentExt()->glGetStageIndexNV(a);
}
inline void glDrawCommandsNV(GLenum  a, GLuint  b, const GLintptr *c, const GLsizei *d, GLuint  e) {
	interceptor::getCurrentExt()->glDrawCommandsNV(a,b,c,d,e);
}
inline void glDrawCommandsAddressNV(GLenum  a, const GLuint64 *b, const GLsizei *c, GLuint  d) {
	interceptor::getCurrentExt()->glDrawCommandsAddressNV(a,b,c,d);
}
inline void glDrawCommandsStatesNV(GLuint  a, const GLintptr *b, const GLsizei *c, const GLuint *d, const GLuint *e, GLuint  f) {
	interceptor::getCurrentExt()->glDrawCommandsStatesNV(a,b,c,d,e,f);
}
inline void glDrawCommandsStatesAddressNV(const GLuint64 *a, const GLsizei *b, const GLuint *c, const GLuint *d, GLuint  e) {
	interceptor::getCurrentExt()->glDrawCommandsStatesAddressNV(a,b,c,d,e);
}
inline void glCreateCommandListsNV(GLsizei  a, GLuint *b) {
	interceptor::getCurrentExt()->glCreateCommandListsNV(a,b);
}
inline void glDeleteCommandListsNV(GLsizei  a, const GLuint *b) {
	interceptor::getCurrentExt()->glDeleteCommandListsNV(a,b);
}
inline GLboolean glIsCommandListNV(GLuint  a) {
	return interceptor::getCurrentExt()->glIsCommandListNV(a);
}
inline void glListDrawCommandsStatesClientNV(GLuint  a, GLuint  b, const void **c, const GLsizei *d, const GLuint *e, const GLuint *f, GLuint  g) {
	interceptor::getCurrentExt()->glListDrawCommandsStatesClientNV(a,b,c,d,e,f,g);
}
inline void glCommandListSegmentsNV(GLuint  a, GLuint  b) {
	interceptor::getCurrentExt()->glCommandListSegmentsNV(a,b);
}
inline void glCompileCommandListNV(GLuint  a) {
	interceptor::getCurrentExt()->glCompileCommandListNV(a);
}
inline void glCallCommandListNV(GLuint  a) {
	interceptor::getCurrentExt()->glCallCommandListNV(a);
}
inline void glBeginConditionalRenderNV(GLuint  a, GLenum  b) {
	interceptor::getCurrentExt()->glBeginConditionalRenderNV(a,b);
}
inline void glEndConditionalRenderNV(void) {
	interceptor::getCurrentExt()->glEndConditionalRenderNV();
}
inline void glSubpixelPrecisionBiasNV(GLuint  a, GLuint  b) {
	interceptor::getCurrentExt()->glSubpixelPrecisionBiasNV(a,b);
}
inline void glConservativeRasterParameterfNV(GLenum  a, GLfloat  b) {
	interceptor::getCurrentExt()->glConservativeRasterParameterfNV(a,b);
}
inline void glConservativeRasterParameteriNV(GLenum  a, GLint  b) {
	interceptor::getCurrentExt()->glConservativeRasterParameteriNV(a,b);
}
inline void glCopyImageSubDataNV(GLuint  a, GLenum  b, GLint  c, GLint  d, GLint  e, GLint  f, GLuint  g, GLenum  h, GLint  i, GLint  j, GLint  k, GLint  l, GLsizei  m, GLsizei  n, GLsizei  o) {
	interceptor::getCurrentExt()->glCopyImageSubDataNV(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o);
}
inline void glDepthRangedNV(GLdouble  a, GLdouble  b) {
	interceptor::getCurrentExt()->glDepthRangedNV(a,b);
}
inline void glClearDepthdNV(GLdouble  a) {
	interceptor::getCurrentExt()->glClearDepthdNV(a);
}
inline void glDepthBoundsdNV(GLdouble  a, GLdouble  b) {
	interceptor::getCurrentExt()->glDepthBoundsdNV(a,b);
}
inline void glDrawTextureNV(GLuint  a, GLuint  b, GLfloat  c, GLfloat  d, GLfloat  e, GLfloat  f, GLfloat  g, GLfloat  h, GLfloat  i, GLfloat  j, GLfloat  k) {
	interceptor::getCurrentExt()->glDrawTextureNV(a,b,c,d,e,f,g,h,i,j,k);
}
inline void glMapControlPointsNV(GLenum  a, GLuint  b, GLenum  c, GLsizei  d, GLsizei  e, GLint  f, GLint  g, GLboolean  h, const void *i) {
	interceptor::getCurrentExt()->glMapControlPointsNV(a,b,c,d,e,f,g,h,i);
}
inline void glMapParameterivNV(GLenum  a, GLenum  b, const GLint *c) {
	interceptor::getCurrentExt()->glMapParameterivNV(a,b,c);
}
inline void glMapParameterfvNV(GLenum  a, GLenum  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glMapParameterfvNV(a,b,c);
}
inline void glGetMapControlPointsNV(GLenum  a, GLuint  b, GLenum  c, GLsizei  d, GLsizei  e, GLboolean  f, void *g) {
	interceptor::getCurrentExt()->glGetMapControlPointsNV(a,b,c,d,e,f,g);
}
inline void glGetMapParameterivNV(GLenum  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetMapParameterivNV(a,b,c);
}
inline void glGetMapParameterfvNV(GLenum  a, GLenum  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetMapParameterfvNV(a,b,c);
}
inline void glGetMapAttribParameterivNV(GLenum  a, GLuint  b, GLenum  c, GLint *d) {
	interceptor::getCurrentExt()->glGetMapAttribParameterivNV(a,b,c,d);
}
inline void glGetMapAttribParameterfvNV(GLenum  a, GLuint  b, GLenum  c, GLfloat *d) {
	interceptor::getCurrentExt()->glGetMapAttribParameterfvNV(a,b,c,d);
}
inline void glEvalMapsNV(GLenum  a, GLenum  b) {
	interceptor::getCurrentExt()->glEvalMapsNV(a,b);
}
inline void glGetMultisamplefvNV(GLenum  a, GLuint  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetMultisamplefvNV(a,b,c);
}
inline void glSampleMaskIndexedNV(GLuint  a, GLbitfield  b) {
	interceptor::getCurrentExt()->glSampleMaskIndexedNV(a,b);
}
inline void glTexRenderbufferNV(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glTexRenderbufferNV(a,b);
}
inline void glDeleteFencesNV(GLsizei  a, const GLuint *b) {
	interceptor::getCurrentExt()->glDeleteFencesNV(a,b);
}
inline void glGenFencesNV(GLsizei  a, GLuint *b) {
	interceptor::getCurrentExt()->glGenFencesNV(a,b);
}
inline GLboolean glIsFenceNV(GLuint  a) {
	return interceptor::getCurrentExt()->glIsFenceNV(a);
}
inline GLboolean glTestFenceNV(GLuint  a) {
	return interceptor::getCurrentExt()->glTestFenceNV(a);
}
inline void glGetFenceivNV(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetFenceivNV(a,b,c);
}
inline void glFinishFenceNV(GLuint  a) {
	interceptor::getCurrentExt()->glFinishFenceNV(a);
}
inline void glSetFenceNV(GLuint  a, GLenum  b) {
	interceptor::getCurrentExt()->glSetFenceNV(a,b);
}
inline void glFragmentCoverageColorNV(GLuint  a) {
	interceptor::getCurrentExt()->glFragmentCoverageColorNV(a);
}
inline void glProgramNamedParameter4fNV(GLuint  a, GLsizei  b, const GLubyte *c, GLfloat  d, GLfloat  e, GLfloat  f, GLfloat  g) {
	interceptor::getCurrentExt()->glProgramNamedParameter4fNV(a,b,c,d,e,f,g);
}
inline void glProgramNamedParameter4fvNV(GLuint  a, GLsizei  b, const GLubyte *c, const GLfloat *d) {
	interceptor::getCurrentExt()->glProgramNamedParameter4fvNV(a,b,c,d);
}
inline void glProgramNamedParameter4dNV(GLuint  a, GLsizei  b, const GLubyte *c, GLdouble  d, GLdouble  e, GLdouble  f, GLdouble  g) {
	interceptor::getCurrentExt()->glProgramNamedParameter4dNV(a,b,c,d,e,f,g);
}
inline void glProgramNamedParameter4dvNV(GLuint  a, GLsizei  b, const GLubyte *c, const GLdouble *d) {
	interceptor::getCurrentExt()->glProgramNamedParameter4dvNV(a,b,c,d);
}
inline void glGetProgramNamedParameterfvNV(GLuint  a, GLsizei  b, const GLubyte *c, GLfloat *d) {
	interceptor::getCurrentExt()->glGetProgramNamedParameterfvNV(a,b,c,d);
}
inline void glGetProgramNamedParameterdvNV(GLuint  a, GLsizei  b, const GLubyte *c, GLdouble *d) {
	interceptor::getCurrentExt()->glGetProgramNamedParameterdvNV(a,b,c,d);
}
inline void glCoverageModulationTableNV(GLsizei  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glCoverageModulationTableNV(a,b);
}
inline void glGetCoverageModulationTableNV(GLsizei  a, GLfloat *b) {
	interceptor::getCurrentExt()->glGetCoverageModulationTableNV(a,b);
}
inline void glCoverageModulationNV(GLenum  a) {
	interceptor::getCurrentExt()->glCoverageModulationNV(a);
}
inline void glRenderbufferStorageMultisampleCoverageNV(GLenum  a, GLsizei  b, GLsizei  c, GLenum  d, GLsizei  e, GLsizei  f) {
	interceptor::getCurrentExt()->glRenderbufferStorageMultisampleCoverageNV(a,b,c,d,e,f);
}
inline void glProgramVertexLimitNV(GLenum  a, GLint  b) {
	interceptor::getCurrentExt()->glProgramVertexLimitNV(a,b);
}
inline void glFramebufferTextureEXT(GLenum  a, GLenum  b, GLuint  c, GLint  d) {
	interceptor::getCurrentExt()->glFramebufferTextureEXT(a,b,c,d);
}
inline void glFramebufferTextureFaceEXT(GLenum  a, GLenum  b, GLuint  c, GLint  d, GLenum  e) {
	interceptor::getCurrentExt()->glFramebufferTextureFaceEXT(a,b,c,d,e);
}
inline void glProgramLocalParameterI4iNV(GLenum  a, GLuint  b, GLint  c, GLint  d, GLint  e, GLint  f) {
	interceptor::getCurrentExt()->glProgramLocalParameterI4iNV(a,b,c,d,e,f);
}
inline void glProgramLocalParameterI4ivNV(GLenum  a, GLuint  b, const GLint *c) {
	interceptor::getCurrentExt()->glProgramLocalParameterI4ivNV(a,b,c);
}
inline void glProgramLocalParametersI4ivNV(GLenum  a, GLuint  b, GLsizei  c, const GLint *d) {
	interceptor::getCurrentExt()->glProgramLocalParametersI4ivNV(a,b,c,d);
}
inline void glProgramLocalParameterI4uiNV(GLenum  a, GLuint  b, GLuint  c, GLuint  d, GLuint  e, GLuint  f) {
	interceptor::getCurrentExt()->glProgramLocalParameterI4uiNV(a,b,c,d,e,f);
}
inline void glProgramLocalParameterI4uivNV(GLenum  a, GLuint  b, const GLuint *c) {
	interceptor::getCurrentExt()->glProgramLocalParameterI4uivNV(a,b,c);
}
inline void glProgramLocalParametersI4uivNV(GLenum  a, GLuint  b, GLsizei  c, const GLuint *d) {
	interceptor::getCurrentExt()->glProgramLocalParametersI4uivNV(a,b,c,d);
}
inline void glProgramEnvParameterI4iNV(GLenum  a, GLuint  b, GLint  c, GLint  d, GLint  e, GLint  f) {
	interceptor::getCurrentExt()->glProgramEnvParameterI4iNV(a,b,c,d,e,f);
}
inline void glProgramEnvParameterI4ivNV(GLenum  a, GLuint  b, const GLint *c) {
	interceptor::getCurrentExt()->glProgramEnvParameterI4ivNV(a,b,c);
}
inline void glProgramEnvParametersI4ivNV(GLenum  a, GLuint  b, GLsizei  c, const GLint *d) {
	interceptor::getCurrentExt()->glProgramEnvParametersI4ivNV(a,b,c,d);
}
inline void glProgramEnvParameterI4uiNV(GLenum  a, GLuint  b, GLuint  c, GLuint  d, GLuint  e, GLuint  f) {
	interceptor::getCurrentExt()->glProgramEnvParameterI4uiNV(a,b,c,d,e,f);
}
inline void glProgramEnvParameterI4uivNV(GLenum  a, GLuint  b, const GLuint *c) {
	interceptor::getCurrentExt()->glProgramEnvParameterI4uivNV(a,b,c);
}
inline void glProgramEnvParametersI4uivNV(GLenum  a, GLuint  b, GLsizei  c, const GLuint *d) {
	interceptor::getCurrentExt()->glProgramEnvParametersI4uivNV(a,b,c,d);
}
inline void glGetProgramLocalParameterIivNV(GLenum  a, GLuint  b, GLint *c) {
	interceptor::getCurrentExt()->glGetProgramLocalParameterIivNV(a,b,c);
}
inline void glGetProgramLocalParameterIuivNV(GLenum  a, GLuint  b, GLuint *c) {
	interceptor::getCurrentExt()->glGetProgramLocalParameterIuivNV(a,b,c);
}
inline void glGetProgramEnvParameterIivNV(GLenum  a, GLuint  b, GLint *c) {
	interceptor::getCurrentExt()->glGetProgramEnvParameterIivNV(a,b,c);
}
inline void glGetProgramEnvParameterIuivNV(GLenum  a, GLuint  b, GLuint *c) {
	interceptor::getCurrentExt()->glGetProgramEnvParameterIuivNV(a,b,c);
}
inline void glProgramSubroutineParametersuivNV(GLenum  a, GLsizei  b, const GLuint *c) {
	interceptor::getCurrentExt()->glProgramSubroutineParametersuivNV(a,b,c);
}
inline void glGetProgramSubroutineParameteruivNV(GLenum  a, GLuint  b, GLuint *c) {
	interceptor::getCurrentExt()->glGetProgramSubroutineParameteruivNV(a,b,c);
}
inline void glVertex2hNV(GLhalfNV  a, GLhalfNV  b) {
	interceptor::getCurrentExt()->glVertex2hNV(a,b);
}
inline void glVertex2hvNV(const GLhalfNV *a) {
	interceptor::getCurrentExt()->glVertex2hvNV(a);
}
inline void glVertex3hNV(GLhalfNV  a, GLhalfNV  b, GLhalfNV  c) {
	interceptor::getCurrentExt()->glVertex3hNV(a,b,c);
}
inline void glVertex3hvNV(const GLhalfNV *a) {
	interceptor::getCurrentExt()->glVertex3hvNV(a);
}
inline void glVertex4hNV(GLhalfNV  a, GLhalfNV  b, GLhalfNV  c, GLhalfNV  d) {
	interceptor::getCurrentExt()->glVertex4hNV(a,b,c,d);
}
inline void glVertex4hvNV(const GLhalfNV *a) {
	interceptor::getCurrentExt()->glVertex4hvNV(a);
}
inline void glNormal3hNV(GLhalfNV  a, GLhalfNV  b, GLhalfNV  c) {
	interceptor::getCurrentExt()->glNormal3hNV(a,b,c);
}
inline void glNormal3hvNV(const GLhalfNV *a) {
	interceptor::getCurrentExt()->glNormal3hvNV(a);
}
inline void glColor3hNV(GLhalfNV  a, GLhalfNV  b, GLhalfNV  c) {
	interceptor::getCurrentExt()->glColor3hNV(a,b,c);
}
inline void glColor3hvNV(const GLhalfNV *a) {
	interceptor::getCurrentExt()->glColor3hvNV(a);
}
inline void glColor4hNV(GLhalfNV  a, GLhalfNV  b, GLhalfNV  c, GLhalfNV  d) {
	interceptor::getCurrentExt()->glColor4hNV(a,b,c,d);
}
inline void glColor4hvNV(const GLhalfNV *a) {
	interceptor::getCurrentExt()->glColor4hvNV(a);
}
inline void glTexCoord1hNV(GLhalfNV  a) {
	interceptor::getCurrentExt()->glTexCoord1hNV(a);
}
inline void glTexCoord1hvNV(const GLhalfNV *a) {
	interceptor::getCurrentExt()->glTexCoord1hvNV(a);
}
inline void glTexCoord2hNV(GLhalfNV  a, GLhalfNV  b) {
	interceptor::getCurrentExt()->glTexCoord2hNV(a,b);
}
inline void glTexCoord2hvNV(const GLhalfNV *a) {
	interceptor::getCurrentExt()->glTexCoord2hvNV(a);
}
inline void glTexCoord3hNV(GLhalfNV  a, GLhalfNV  b, GLhalfNV  c) {
	interceptor::getCurrentExt()->glTexCoord3hNV(a,b,c);
}
inline void glTexCoord3hvNV(const GLhalfNV *a) {
	interceptor::getCurrentExt()->glTexCoord3hvNV(a);
}
inline void glTexCoord4hNV(GLhalfNV  a, GLhalfNV  b, GLhalfNV  c, GLhalfNV  d) {
	interceptor::getCurrentExt()->glTexCoord4hNV(a,b,c,d);
}
inline void glTexCoord4hvNV(const GLhalfNV *a) {
	interceptor::getCurrentExt()->glTexCoord4hvNV(a);
}
inline void glMultiTexCoord1hNV(GLenum  a, GLhalfNV  b) {
	interceptor::getCurrentExt()->glMultiTexCoord1hNV(a,b);
}
inline void glMultiTexCoord1hvNV(GLenum  a, const GLhalfNV *b) {
	interceptor::getCurrentExt()->glMultiTexCoord1hvNV(a,b);
}
inline void glMultiTexCoord2hNV(GLenum  a, GLhalfNV  b, GLhalfNV  c) {
	interceptor::getCurrentExt()->glMultiTexCoord2hNV(a,b,c);
}
inline void glMultiTexCoord2hvNV(GLenum  a, const GLhalfNV *b) {
	interceptor::getCurrentExt()->glMultiTexCoord2hvNV(a,b);
}
inline void glMultiTexCoord3hNV(GLenum  a, GLhalfNV  b, GLhalfNV  c, GLhalfNV  d) {
	interceptor::getCurrentExt()->glMultiTexCoord3hNV(a,b,c,d);
}
inline void glMultiTexCoord3hvNV(GLenum  a, const GLhalfNV *b) {
	interceptor::getCurrentExt()->glMultiTexCoord3hvNV(a,b);
}
inline void glMultiTexCoord4hNV(GLenum  a, GLhalfNV  b, GLhalfNV  c, GLhalfNV  d, GLhalfNV  e) {
	interceptor::getCurrentExt()->glMultiTexCoord4hNV(a,b,c,d,e);
}
inline void glMultiTexCoord4hvNV(GLenum  a, const GLhalfNV *b) {
	interceptor::getCurrentExt()->glMultiTexCoord4hvNV(a,b);
}
inline void glFogCoordhNV(GLhalfNV  a) {
	interceptor::getCurrentExt()->glFogCoordhNV(a);
}
inline void glFogCoordhvNV(const GLhalfNV *a) {
	interceptor::getCurrentExt()->glFogCoordhvNV(a);
}
inline void glSecondaryColor3hNV(GLhalfNV  a, GLhalfNV  b, GLhalfNV  c) {
	interceptor::getCurrentExt()->glSecondaryColor3hNV(a,b,c);
}
inline void glSecondaryColor3hvNV(const GLhalfNV *a) {
	interceptor::getCurrentExt()->glSecondaryColor3hvNV(a);
}
inline void glVertexWeighthNV(GLhalfNV  a) {
	interceptor::getCurrentExt()->glVertexWeighthNV(a);
}
inline void glVertexWeighthvNV(const GLhalfNV *a) {
	interceptor::getCurrentExt()->glVertexWeighthvNV(a);
}
inline void glVertexAttrib1hNV(GLuint  a, GLhalfNV  b) {
	interceptor::getCurrentExt()->glVertexAttrib1hNV(a,b);
}
inline void glVertexAttrib1hvNV(GLuint  a, const GLhalfNV *b) {
	interceptor::getCurrentExt()->glVertexAttrib1hvNV(a,b);
}
inline void glVertexAttrib2hNV(GLuint  a, GLhalfNV  b, GLhalfNV  c) {
	interceptor::getCurrentExt()->glVertexAttrib2hNV(a,b,c);
}
inline void glVertexAttrib2hvNV(GLuint  a, const GLhalfNV *b) {
	interceptor::getCurrentExt()->glVertexAttrib2hvNV(a,b);
}
inline void glVertexAttrib3hNV(GLuint  a, GLhalfNV  b, GLhalfNV  c, GLhalfNV  d) {
	interceptor::getCurrentExt()->glVertexAttrib3hNV(a,b,c,d);
}
inline void glVertexAttrib3hvNV(GLuint  a, const GLhalfNV *b) {
	interceptor::getCurrentExt()->glVertexAttrib3hvNV(a,b);
}
inline void glVertexAttrib4hNV(GLuint  a, GLhalfNV  b, GLhalfNV  c, GLhalfNV  d, GLhalfNV  e) {
	interceptor::getCurrentExt()->glVertexAttrib4hNV(a,b,c,d,e);
}
inline void glVertexAttrib4hvNV(GLuint  a, const GLhalfNV *b) {
	interceptor::getCurrentExt()->glVertexAttrib4hvNV(a,b);
}
inline void glVertexAttribs1hvNV(GLuint  a, GLsizei  b, const GLhalfNV *c) {
	interceptor::getCurrentExt()->glVertexAttribs1hvNV(a,b,c);
}
inline void glVertexAttribs2hvNV(GLuint  a, GLsizei  b, const GLhalfNV *c) {
	interceptor::getCurrentExt()->glVertexAttribs2hvNV(a,b,c);
}
inline void glVertexAttribs3hvNV(GLuint  a, GLsizei  b, const GLhalfNV *c) {
	interceptor::getCurrentExt()->glVertexAttribs3hvNV(a,b,c);
}
inline void glVertexAttribs4hvNV(GLuint  a, GLsizei  b, const GLhalfNV *c) {
	interceptor::getCurrentExt()->glVertexAttribs4hvNV(a,b,c);
}
inline void glGetInternalformatSampleivNV(GLenum  a, GLenum  b, GLsizei  c, GLenum  d, GLsizei  e, GLint *f) {
	interceptor::getCurrentExt()->glGetInternalformatSampleivNV(a,b,c,d,e,f);
}
inline void glGenOcclusionQueriesNV(GLsizei  a, GLuint *b) {
	interceptor::getCurrentExt()->glGenOcclusionQueriesNV(a,b);
}
inline void glDeleteOcclusionQueriesNV(GLsizei  a, const GLuint *b) {
	interceptor::getCurrentExt()->glDeleteOcclusionQueriesNV(a,b);
}
inline GLboolean glIsOcclusionQueryNV(GLuint  a) {
	return interceptor::getCurrentExt()->glIsOcclusionQueryNV(a);
}
inline void glBeginOcclusionQueryNV(GLuint  a) {
	interceptor::getCurrentExt()->glBeginOcclusionQueryNV(a);
}
inline void glEndOcclusionQueryNV(void) {
	interceptor::getCurrentExt()->glEndOcclusionQueryNV();
}
inline void glGetOcclusionQueryivNV(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetOcclusionQueryivNV(a,b,c);
}
inline void glGetOcclusionQueryuivNV(GLuint  a, GLenum  b, GLuint *c) {
	interceptor::getCurrentExt()->glGetOcclusionQueryuivNV(a,b,c);
}
inline void glProgramBufferParametersfvNV(GLenum  a, GLuint  b, GLuint  c, GLsizei  d, const GLfloat *e) {
	interceptor::getCurrentExt()->glProgramBufferParametersfvNV(a,b,c,d,e);
}
inline void glProgramBufferParametersIivNV(GLenum  a, GLuint  b, GLuint  c, GLsizei  d, const GLint *e) {
	interceptor::getCurrentExt()->glProgramBufferParametersIivNV(a,b,c,d,e);
}
inline void glProgramBufferParametersIuivNV(GLenum  a, GLuint  b, GLuint  c, GLsizei  d, const GLuint *e) {
	interceptor::getCurrentExt()->glProgramBufferParametersIuivNV(a,b,c,d,e);
}
inline GLuint glGenPathsNV(GLsizei  a) {
	return interceptor::getCurrentExt()->glGenPathsNV(a);
}
inline void glDeletePathsNV(GLuint  a, GLsizei  b) {
	interceptor::getCurrentExt()->glDeletePathsNV(a,b);
}
inline GLboolean glIsPathNV(GLuint  a) {
	return interceptor::getCurrentExt()->glIsPathNV(a);
}
inline void glPathCommandsNV(GLuint  a, GLsizei  b, const GLubyte *c, GLsizei  d, GLenum  e, const void *f) {
	interceptor::getCurrentExt()->glPathCommandsNV(a,b,c,d,e,f);
}
inline void glPathCoordsNV(GLuint  a, GLsizei  b, GLenum  c, const void *d) {
	interceptor::getCurrentExt()->glPathCoordsNV(a,b,c,d);
}
inline void glPathSubCommandsNV(GLuint  a, GLsizei  b, GLsizei  c, GLsizei  d, const GLubyte *e, GLsizei  f, GLenum  g, const void *h) {
	interceptor::getCurrentExt()->glPathSubCommandsNV(a,b,c,d,e,f,g,h);
}
inline void glPathSubCoordsNV(GLuint  a, GLsizei  b, GLsizei  c, GLenum  d, const void *e) {
	interceptor::getCurrentExt()->glPathSubCoordsNV(a,b,c,d,e);
}
inline void glPathStringNV(GLuint  a, GLenum  b, GLsizei  c, const void *d) {
	interceptor::getCurrentExt()->glPathStringNV(a,b,c,d);
}
inline void glPathGlyphsNV(GLuint  a, GLenum  b, const void *c, GLbitfield  d, GLsizei  e, GLenum  f, const void *g, GLenum  h, GLuint  i, GLfloat  j) {
	interceptor::getCurrentExt()->glPathGlyphsNV(a,b,c,d,e,f,g,h,i,j);
}
inline void glPathGlyphRangeNV(GLuint  a, GLenum  b, const void *c, GLbitfield  d, GLuint  e, GLsizei  f, GLenum  g, GLuint  h, GLfloat  i) {
	interceptor::getCurrentExt()->glPathGlyphRangeNV(a,b,c,d,e,f,g,h,i);
}
inline void glWeightPathsNV(GLuint  a, GLsizei  b, const GLuint *c, const GLfloat *d) {
	interceptor::getCurrentExt()->glWeightPathsNV(a,b,c,d);
}
inline void glCopyPathNV(GLuint  a, GLuint  b) {
	interceptor::getCurrentExt()->glCopyPathNV(a,b);
}
inline void glInterpolatePathsNV(GLuint  a, GLuint  b, GLuint  c, GLfloat  d) {
	interceptor::getCurrentExt()->glInterpolatePathsNV(a,b,c,d);
}
inline void glTransformPathNV(GLuint  a, GLuint  b, GLenum  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glTransformPathNV(a,b,c,d);
}
inline void glPathParameterivNV(GLuint  a, GLenum  b, const GLint *c) {
	interceptor::getCurrentExt()->glPathParameterivNV(a,b,c);
}
inline void glPathParameteriNV(GLuint  a, GLenum  b, GLint  c) {
	interceptor::getCurrentExt()->glPathParameteriNV(a,b,c);
}
inline void glPathParameterfvNV(GLuint  a, GLenum  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glPathParameterfvNV(a,b,c);
}
inline void glPathParameterfNV(GLuint  a, GLenum  b, GLfloat  c) {
	interceptor::getCurrentExt()->glPathParameterfNV(a,b,c);
}
inline void glPathDashArrayNV(GLuint  a, GLsizei  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glPathDashArrayNV(a,b,c);
}
inline void glPathStencilFuncNV(GLenum  a, GLint  b, GLuint  c) {
	interceptor::getCurrentExt()->glPathStencilFuncNV(a,b,c);
}
inline void glPathStencilDepthOffsetNV(GLfloat  a, GLfloat  b) {
	interceptor::getCurrentExt()->glPathStencilDepthOffsetNV(a,b);
}
inline void glStencilFillPathNV(GLuint  a, GLenum  b, GLuint  c) {
	interceptor::getCurrentExt()->glStencilFillPathNV(a,b,c);
}
inline void glStencilStrokePathNV(GLuint  a, GLint  b, GLuint  c) {
	interceptor::getCurrentExt()->glStencilStrokePathNV(a,b,c);
}
inline void glStencilFillPathInstancedNV(GLsizei  a, GLenum  b, const void *c, GLuint  d, GLenum  e, GLuint  f, GLenum  g, const GLfloat *h) {
	interceptor::getCurrentExt()->glStencilFillPathInstancedNV(a,b,c,d,e,f,g,h);
}
inline void glStencilStrokePathInstancedNV(GLsizei  a, GLenum  b, const void *c, GLuint  d, GLint  e, GLuint  f, GLenum  g, const GLfloat *h) {
	interceptor::getCurrentExt()->glStencilStrokePathInstancedNV(a,b,c,d,e,f,g,h);
}
inline void glPathCoverDepthFuncNV(GLenum  a) {
	interceptor::getCurrentExt()->glPathCoverDepthFuncNV(a);
}
inline void glCoverFillPathNV(GLuint  a, GLenum  b) {
	interceptor::getCurrentExt()->glCoverFillPathNV(a,b);
}
inline void glCoverStrokePathNV(GLuint  a, GLenum  b) {
	interceptor::getCurrentExt()->glCoverStrokePathNV(a,b);
}
inline void glCoverFillPathInstancedNV(GLsizei  a, GLenum  b, const void *c, GLuint  d, GLenum  e, GLenum  f, const GLfloat *g) {
	interceptor::getCurrentExt()->glCoverFillPathInstancedNV(a,b,c,d,e,f,g);
}
inline void glCoverStrokePathInstancedNV(GLsizei  a, GLenum  b, const void *c, GLuint  d, GLenum  e, GLenum  f, const GLfloat *g) {
	interceptor::getCurrentExt()->glCoverStrokePathInstancedNV(a,b,c,d,e,f,g);
}
inline void glGetPathParameterivNV(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetPathParameterivNV(a,b,c);
}
inline void glGetPathParameterfvNV(GLuint  a, GLenum  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetPathParameterfvNV(a,b,c);
}
inline void glGetPathCommandsNV(GLuint  a, GLubyte *b) {
	interceptor::getCurrentExt()->glGetPathCommandsNV(a,b);
}
inline void glGetPathCoordsNV(GLuint  a, GLfloat *b) {
	interceptor::getCurrentExt()->glGetPathCoordsNV(a,b);
}
inline void glGetPathDashArrayNV(GLuint  a, GLfloat *b) {
	interceptor::getCurrentExt()->glGetPathDashArrayNV(a,b);
}
inline void glGetPathMetricsNV(GLbitfield  a, GLsizei  b, GLenum  c, const void *d, GLuint  e, GLsizei  f, GLfloat *g) {
	interceptor::getCurrentExt()->glGetPathMetricsNV(a,b,c,d,e,f,g);
}
inline void glGetPathMetricRangeNV(GLbitfield  a, GLuint  b, GLsizei  c, GLsizei  d, GLfloat *e) {
	interceptor::getCurrentExt()->glGetPathMetricRangeNV(a,b,c,d,e);
}
inline void glGetPathSpacingNV(GLenum  a, GLsizei  b, GLenum  c, const void *d, GLuint  e, GLfloat  f, GLfloat  g, GLenum  h, GLfloat *i) {
	interceptor::getCurrentExt()->glGetPathSpacingNV(a,b,c,d,e,f,g,h,i);
}
inline GLboolean glIsPointInFillPathNV(GLuint  a, GLuint  b, GLfloat  c, GLfloat  d) {
	return interceptor::getCurrentExt()->glIsPointInFillPathNV(a,b,c,d);
}
inline GLboolean glIsPointInStrokePathNV(GLuint  a, GLfloat  b, GLfloat  c) {
	return interceptor::getCurrentExt()->glIsPointInStrokePathNV(a,b,c);
}
inline GLfloat glGetPathLengthNV(GLuint  a, GLsizei  b, GLsizei  c) {
	return interceptor::getCurrentExt()->glGetPathLengthNV(a,b,c);
}
inline GLboolean glPointAlongPathNV(GLuint  a, GLsizei  b, GLsizei  c, GLfloat  d, GLfloat *e, GLfloat *f, GLfloat *g, GLfloat *h) {
	return interceptor::getCurrentExt()->glPointAlongPathNV(a,b,c,d,e,f,g,h);
}
inline void glMatrixLoad3x2fNV(GLenum  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glMatrixLoad3x2fNV(a,b);
}
inline void glMatrixLoad3x3fNV(GLenum  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glMatrixLoad3x3fNV(a,b);
}
inline void glMatrixLoadTranspose3x3fNV(GLenum  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glMatrixLoadTranspose3x3fNV(a,b);
}
inline void glMatrixMult3x2fNV(GLenum  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glMatrixMult3x2fNV(a,b);
}
inline void glMatrixMult3x3fNV(GLenum  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glMatrixMult3x3fNV(a,b);
}
inline void glMatrixMultTranspose3x3fNV(GLenum  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glMatrixMultTranspose3x3fNV(a,b);
}
inline void glStencilThenCoverFillPathNV(GLuint  a, GLenum  b, GLuint  c, GLenum  d) {
	interceptor::getCurrentExt()->glStencilThenCoverFillPathNV(a,b,c,d);
}
inline void glStencilThenCoverStrokePathNV(GLuint  a, GLint  b, GLuint  c, GLenum  d) {
	interceptor::getCurrentExt()->glStencilThenCoverStrokePathNV(a,b,c,d);
}
inline void glStencilThenCoverFillPathInstancedNV(GLsizei  a, GLenum  b, const void *c, GLuint  d, GLenum  e, GLuint  f, GLenum  g, GLenum  h, const GLfloat *i) {
	interceptor::getCurrentExt()->glStencilThenCoverFillPathInstancedNV(a,b,c,d,e,f,g,h,i);
}
inline void glStencilThenCoverStrokePathInstancedNV(GLsizei  a, GLenum  b, const void *c, GLuint  d, GLint  e, GLuint  f, GLenum  g, GLenum  h, const GLfloat *i) {
	interceptor::getCurrentExt()->glStencilThenCoverStrokePathInstancedNV(a,b,c,d,e,f,g,h,i);
}
inline GLenum glPathGlyphIndexRangeNV(GLenum  a, const void *b, GLbitfield  c, GLuint  d, GLfloat  e, GLuint *f) {
	return interceptor::getCurrentExt()->glPathGlyphIndexRangeNV(a,b,c,d,e,f);
}
inline GLenum glPathGlyphIndexArrayNV(GLuint  a, GLenum  b, const void *c, GLbitfield  d, GLuint  e, GLsizei  f, GLuint  g, GLfloat  h) {
	return interceptor::getCurrentExt()->glPathGlyphIndexArrayNV(a,b,c,d,e,f,g,h);
}
inline GLenum glPathMemoryGlyphIndexArrayNV(GLuint  a, GLenum  b, GLsizeiptr  c, const void *d, GLsizei  e, GLuint  f, GLsizei  g, GLuint  h, GLfloat  i) {
	return interceptor::getCurrentExt()->glPathMemoryGlyphIndexArrayNV(a,b,c,d,e,f,g,h,i);
}
inline void glProgramPathFragmentInputGenNV(GLuint  a, GLint  b, GLenum  c, GLint  d, const GLfloat *e) {
	interceptor::getCurrentExt()->glProgramPathFragmentInputGenNV(a,b,c,d,e);
}
inline void glGetProgramResourcefvNV(GLuint  a, GLenum  b, GLuint  c, GLsizei  d, const GLenum *e, GLsizei  f, GLsizei *g, GLfloat *h) {
	interceptor::getCurrentExt()->glGetProgramResourcefvNV(a,b,c,d,e,f,g,h);
}
inline void glPathColorGenNV(GLenum  a, GLenum  b, GLenum  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glPathColorGenNV(a,b,c,d);
}
inline void glPathTexGenNV(GLenum  a, GLenum  b, GLint  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glPathTexGenNV(a,b,c,d);
}
inline void glPathFogGenNV(GLenum  a) {
	interceptor::getCurrentExt()->glPathFogGenNV(a);
}
inline void glGetPathColorGenivNV(GLenum  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetPathColorGenivNV(a,b,c);
}
inline void glGetPathColorGenfvNV(GLenum  a, GLenum  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetPathColorGenfvNV(a,b,c);
}
inline void glGetPathTexGenivNV(GLenum  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetPathTexGenivNV(a,b,c);
}
inline void glGetPathTexGenfvNV(GLenum  a, GLenum  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetPathTexGenfvNV(a,b,c);
}
inline void glPixelDataRangeNV(GLenum  a, GLsizei  b, const void *c) {
	interceptor::getCurrentExt()->glPixelDataRangeNV(a,b,c);
}
inline void glFlushPixelDataRangeNV(GLenum  a) {
	interceptor::getCurrentExt()->glFlushPixelDataRangeNV(a);
}
inline void glPointParameteriNV(GLenum  a, GLint  b) {
	interceptor::getCurrentExt()->glPointParameteriNV(a,b);
}
inline void glPointParameterivNV(GLenum  a, const GLint *b) {
	interceptor::getCurrentExt()->glPointParameterivNV(a,b);
}
inline void glPresentFrameKeyedNV(GLuint  a, GLuint64EXT  b, GLuint  c, GLuint  d, GLenum  e, GLenum  f, GLuint  g, GLuint  h, GLenum  i, GLuint  j, GLuint  k) {
	interceptor::getCurrentExt()->glPresentFrameKeyedNV(a,b,c,d,e,f,g,h,i,j,k);
}
inline void glPresentFrameDualFillNV(GLuint  a, GLuint64EXT  b, GLuint  c, GLuint  d, GLenum  e, GLenum  f, GLuint  g, GLenum  h, GLuint  i, GLenum  j, GLuint  k, GLenum  l, GLuint  m) {
	interceptor::getCurrentExt()->glPresentFrameDualFillNV(a,b,c,d,e,f,g,h,i,j,k,l,m);
}
inline void glGetVideoivNV(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetVideoivNV(a,b,c);
}
inline void glGetVideouivNV(GLuint  a, GLenum  b, GLuint *c) {
	interceptor::getCurrentExt()->glGetVideouivNV(a,b,c);
}
inline void glGetVideoi64vNV(GLuint  a, GLenum  b, GLint64EXT *c) {
	interceptor::getCurrentExt()->glGetVideoi64vNV(a,b,c);
}
inline void glGetVideoui64vNV(GLuint  a, GLenum  b, GLuint64EXT *c) {
	interceptor::getCurrentExt()->glGetVideoui64vNV(a,b,c);
}
inline void glPrimitiveRestartNV(void) {
	interceptor::getCurrentExt()->glPrimitiveRestartNV();
}
inline void glPrimitiveRestartIndexNV(GLuint  a) {
	interceptor::getCurrentExt()->glPrimitiveRestartIndexNV(a);
}
inline void glCombinerParameterfvNV(GLenum  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glCombinerParameterfvNV(a,b);
}
inline void glCombinerParameterfNV(GLenum  a, GLfloat  b) {
	interceptor::getCurrentExt()->glCombinerParameterfNV(a,b);
}
inline void glCombinerParameterivNV(GLenum  a, const GLint *b) {
	interceptor::getCurrentExt()->glCombinerParameterivNV(a,b);
}
inline void glCombinerParameteriNV(GLenum  a, GLint  b) {
	interceptor::getCurrentExt()->glCombinerParameteriNV(a,b);
}
inline void glCombinerInputNV(GLenum  a, GLenum  b, GLenum  c, GLenum  d, GLenum  e, GLenum  f) {
	interceptor::getCurrentExt()->glCombinerInputNV(a,b,c,d,e,f);
}
inline void glCombinerOutputNV(GLenum  a, GLenum  b, GLenum  c, GLenum  d, GLenum  e, GLenum  f, GLenum  g, GLboolean  h, GLboolean  i, GLboolean  j) {
	interceptor::getCurrentExt()->glCombinerOutputNV(a,b,c,d,e,f,g,h,i,j);
}
inline void glFinalCombinerInputNV(GLenum  a, GLenum  b, GLenum  c, GLenum  d) {
	interceptor::getCurrentExt()->glFinalCombinerInputNV(a,b,c,d);
}
inline void glGetCombinerInputParameterfvNV(GLenum  a, GLenum  b, GLenum  c, GLenum  d, GLfloat *e) {
	interceptor::getCurrentExt()->glGetCombinerInputParameterfvNV(a,b,c,d,e);
}
inline void glGetCombinerInputParameterivNV(GLenum  a, GLenum  b, GLenum  c, GLenum  d, GLint *e) {
	interceptor::getCurrentExt()->glGetCombinerInputParameterivNV(a,b,c,d,e);
}
inline void glGetCombinerOutputParameterfvNV(GLenum  a, GLenum  b, GLenum  c, GLfloat *d) {
	interceptor::getCurrentExt()->glGetCombinerOutputParameterfvNV(a,b,c,d);
}
inline void glGetCombinerOutputParameterivNV(GLenum  a, GLenum  b, GLenum  c, GLint *d) {
	interceptor::getCurrentExt()->glGetCombinerOutputParameterivNV(a,b,c,d);
}
inline void glGetFinalCombinerInputParameterfvNV(GLenum  a, GLenum  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetFinalCombinerInputParameterfvNV(a,b,c);
}
inline void glGetFinalCombinerInputParameterivNV(GLenum  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetFinalCombinerInputParameterivNV(a,b,c);
}
inline void glCombinerStageParameterfvNV(GLenum  a, GLenum  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glCombinerStageParameterfvNV(a,b,c);
}
inline void glGetCombinerStageParameterfvNV(GLenum  a, GLenum  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetCombinerStageParameterfvNV(a,b,c);
}
inline void glFramebufferSampleLocationsfvNV(GLenum  a, GLuint  b, GLsizei  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glFramebufferSampleLocationsfvNV(a,b,c,d);
}
inline void glNamedFramebufferSampleLocationsfvNV(GLuint  a, GLuint  b, GLsizei  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glNamedFramebufferSampleLocationsfvNV(a,b,c,d);
}
inline void glResolveDepthValuesNV(void) {
	interceptor::getCurrentExt()->glResolveDepthValuesNV();
}
inline void glMakeBufferResidentNV(GLenum  a, GLenum  b) {
	interceptor::getCurrentExt()->glMakeBufferResidentNV(a,b);
}
inline void glMakeBufferNonResidentNV(GLenum  a) {
	interceptor::getCurrentExt()->glMakeBufferNonResidentNV(a);
}
inline GLboolean glIsBufferResidentNV(GLenum  a) {
	return interceptor::getCurrentExt()->glIsBufferResidentNV(a);
}
inline void glMakeNamedBufferResidentNV(GLuint  a, GLenum  b) {
	interceptor::getCurrentExt()->glMakeNamedBufferResidentNV(a,b);
}
inline void glMakeNamedBufferNonResidentNV(GLuint  a) {
	interceptor::getCurrentExt()->glMakeNamedBufferNonResidentNV(a);
}
inline GLboolean glIsNamedBufferResidentNV(GLuint  a) {
	return interceptor::getCurrentExt()->glIsNamedBufferResidentNV(a);
}
inline void glGetBufferParameterui64vNV(GLenum  a, GLenum  b, GLuint64EXT *c) {
	interceptor::getCurrentExt()->glGetBufferParameterui64vNV(a,b,c);
}
inline void glGetNamedBufferParameterui64vNV(GLuint  a, GLenum  b, GLuint64EXT *c) {
	interceptor::getCurrentExt()->glGetNamedBufferParameterui64vNV(a,b,c);
}
inline void glGetIntegerui64vNV(GLenum  a, GLuint64EXT *b) {
	interceptor::getCurrentExt()->glGetIntegerui64vNV(a,b);
}
inline void glUniformui64NV(GLint  a, GLuint64EXT  b) {
	interceptor::getCurrentExt()->glUniformui64NV(a,b);
}
inline void glUniformui64vNV(GLint  a, GLsizei  b, const GLuint64EXT *c) {
	interceptor::getCurrentExt()->glUniformui64vNV(a,b,c);
}
inline void glProgramUniformui64NV(GLuint  a, GLint  b, GLuint64EXT  c) {
	interceptor::getCurrentExt()->glProgramUniformui64NV(a,b,c);
}
inline void glProgramUniformui64vNV(GLuint  a, GLint  b, GLsizei  c, const GLuint64EXT *d) {
	interceptor::getCurrentExt()->glProgramUniformui64vNV(a,b,c,d);
}
inline void glTextureBarrierNV(void) {
	interceptor::getCurrentExt()->glTextureBarrierNV();
}
inline void glTexImage2DMultisampleCoverageNV(GLenum  a, GLsizei  b, GLsizei  c, GLint  d, GLsizei  e, GLsizei  f, GLboolean  g) {
	interceptor::getCurrentExt()->glTexImage2DMultisampleCoverageNV(a,b,c,d,e,f,g);
}
inline void glTexImage3DMultisampleCoverageNV(GLenum  a, GLsizei  b, GLsizei  c, GLint  d, GLsizei  e, GLsizei  f, GLsizei  g, GLboolean  h) {
	interceptor::getCurrentExt()->glTexImage3DMultisampleCoverageNV(a,b,c,d,e,f,g,h);
}
inline void glTextureImage2DMultisampleNV(GLuint  a, GLenum  b, GLsizei  c, GLint  d, GLsizei  e, GLsizei  f, GLboolean  g) {
	interceptor::getCurrentExt()->glTextureImage2DMultisampleNV(a,b,c,d,e,f,g);
}
inline void glTextureImage3DMultisampleNV(GLuint  a, GLenum  b, GLsizei  c, GLint  d, GLsizei  e, GLsizei  f, GLsizei  g, GLboolean  h) {
	interceptor::getCurrentExt()->glTextureImage3DMultisampleNV(a,b,c,d,e,f,g,h);
}
inline void glTextureImage2DMultisampleCoverageNV(GLuint  a, GLenum  b, GLsizei  c, GLsizei  d, GLint  e, GLsizei  f, GLsizei  g, GLboolean  h) {
	interceptor::getCurrentExt()->glTextureImage2DMultisampleCoverageNV(a,b,c,d,e,f,g,h);
}
inline void glTextureImage3DMultisampleCoverageNV(GLuint  a, GLenum  b, GLsizei  c, GLsizei  d, GLint  e, GLsizei  f, GLsizei  g, GLsizei  h, GLboolean  i) {
	interceptor::getCurrentExt()->glTextureImage3DMultisampleCoverageNV(a,b,c,d,e,f,g,h,i);
}
inline void glBeginTransformFeedbackNV(GLenum  a) {
	interceptor::getCurrentExt()->glBeginTransformFeedbackNV(a);
}
inline void glEndTransformFeedbackNV(void) {
	interceptor::getCurrentExt()->glEndTransformFeedbackNV();
}
inline void glTransformFeedbackAttribsNV(GLsizei  a, const GLint *b, GLenum  c) {
	interceptor::getCurrentExt()->glTransformFeedbackAttribsNV(a,b,c);
}
inline void glBindBufferRangeNV(GLenum  a, GLuint  b, GLuint  c, GLintptr  d, GLsizeiptr  e) {
	interceptor::getCurrentExt()->glBindBufferRangeNV(a,b,c,d,e);
}
inline void glBindBufferOffsetNV(GLenum  a, GLuint  b, GLuint  c, GLintptr  d) {
	interceptor::getCurrentExt()->glBindBufferOffsetNV(a,b,c,d);
}
inline void glBindBufferBaseNV(GLenum  a, GLuint  b, GLuint  c) {
	interceptor::getCurrentExt()->glBindBufferBaseNV(a,b,c);
}
inline void glTransformFeedbackVaryingsNV(GLuint  a, GLsizei  b, const GLint *c, GLenum  d) {
	interceptor::getCurrentExt()->glTransformFeedbackVaryingsNV(a,b,c,d);
}
inline void glActiveVaryingNV(GLuint  a, const GLchar *b) {
	interceptor::getCurrentExt()->glActiveVaryingNV(a,b);
}
inline GLint glGetVaryingLocationNV(GLuint  a, const GLchar *b) {
	return interceptor::getCurrentExt()->glGetVaryingLocationNV(a,b);
}
inline void glGetActiveVaryingNV(GLuint  a, GLuint  b, GLsizei  c, GLsizei *d, GLsizei *e, GLenum *f, GLchar *g) {
	interceptor::getCurrentExt()->glGetActiveVaryingNV(a,b,c,d,e,f,g);
}
inline void glGetTransformFeedbackVaryingNV(GLuint  a, GLuint  b, GLint *c) {
	interceptor::getCurrentExt()->glGetTransformFeedbackVaryingNV(a,b,c);
}
inline void glTransformFeedbackStreamAttribsNV(GLsizei  a, const GLint *b, GLsizei  c, const GLint *d, GLenum  e) {
	interceptor::getCurrentExt()->glTransformFeedbackStreamAttribsNV(a,b,c,d,e);
}
inline void glBindTransformFeedbackNV(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glBindTransformFeedbackNV(a,b);
}
inline void glDeleteTransformFeedbacksNV(GLsizei  a, const GLuint *b) {
	interceptor::getCurrentExt()->glDeleteTransformFeedbacksNV(a,b);
}
inline void glGenTransformFeedbacksNV(GLsizei  a, GLuint *b) {
	interceptor::getCurrentExt()->glGenTransformFeedbacksNV(a,b);
}
inline GLboolean glIsTransformFeedbackNV(GLuint  a) {
	return interceptor::getCurrentExt()->glIsTransformFeedbackNV(a);
}
inline void glPauseTransformFeedbackNV(void) {
	interceptor::getCurrentExt()->glPauseTransformFeedbackNV();
}
inline void glResumeTransformFeedbackNV(void) {
	interceptor::getCurrentExt()->glResumeTransformFeedbackNV();
}
inline void glDrawTransformFeedbackNV(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glDrawTransformFeedbackNV(a,b);
}
inline void glVDPAUInitNV(const void *a, const void *b) {
	interceptor::getCurrentExt()->glVDPAUInitNV(a,b);
}
inline void glVDPAUFiniNV(void) {
	interceptor::getCurrentExt()->glVDPAUFiniNV();
}
inline GLvdpauSurfaceNV glVDPAURegisterVideoSurfaceNV(const void *a, GLenum  b, GLsizei  c, const GLuint *d) {
	return interceptor::getCurrentExt()->glVDPAURegisterVideoSurfaceNV(a,b,c,d);
}
inline GLvdpauSurfaceNV glVDPAURegisterOutputSurfaceNV(const void *a, GLenum  b, GLsizei  c, const GLuint *d) {
	return interceptor::getCurrentExt()->glVDPAURegisterOutputSurfaceNV(a,b,c,d);
}
inline GLboolean glVDPAUIsSurfaceNV(GLvdpauSurfaceNV  a) {
	return interceptor::getCurrentExt()->glVDPAUIsSurfaceNV(a);
}
inline void glVDPAUUnregisterSurfaceNV(GLvdpauSurfaceNV  a) {
	interceptor::getCurrentExt()->glVDPAUUnregisterSurfaceNV(a);
}
inline void glVDPAUGetSurfaceivNV(GLvdpauSurfaceNV  a, GLenum  b, GLsizei  c, GLsizei *d, GLint *e) {
	interceptor::getCurrentExt()->glVDPAUGetSurfaceivNV(a,b,c,d,e);
}
inline void glVDPAUSurfaceAccessNV(GLvdpauSurfaceNV  a, GLenum  b) {
	interceptor::getCurrentExt()->glVDPAUSurfaceAccessNV(a,b);
}
inline void glVDPAUMapSurfacesNV(GLsizei  a, const GLvdpauSurfaceNV *b) {
	interceptor::getCurrentExt()->glVDPAUMapSurfacesNV(a,b);
}
inline void glVDPAUUnmapSurfacesNV(GLsizei  a, const GLvdpauSurfaceNV *b) {
	interceptor::getCurrentExt()->glVDPAUUnmapSurfacesNV(a,b);
}
inline void glFlushVertexArrayRangeNV(void) {
	interceptor::getCurrentExt()->glFlushVertexArrayRangeNV();
}
inline void glVertexArrayRangeNV(GLsizei  a, const void *b) {
	interceptor::getCurrentExt()->glVertexArrayRangeNV(a,b);
}
inline void glVertexAttribL1i64NV(GLuint  a, GLint64EXT  b) {
	interceptor::getCurrentExt()->glVertexAttribL1i64NV(a,b);
}
inline void glVertexAttribL2i64NV(GLuint  a, GLint64EXT  b, GLint64EXT  c) {
	interceptor::getCurrentExt()->glVertexAttribL2i64NV(a,b,c);
}
inline void glVertexAttribL3i64NV(GLuint  a, GLint64EXT  b, GLint64EXT  c, GLint64EXT  d) {
	interceptor::getCurrentExt()->glVertexAttribL3i64NV(a,b,c,d);
}
inline void glVertexAttribL4i64NV(GLuint  a, GLint64EXT  b, GLint64EXT  c, GLint64EXT  d, GLint64EXT  e) {
	interceptor::getCurrentExt()->glVertexAttribL4i64NV(a,b,c,d,e);
}
inline void glVertexAttribL1i64vNV(GLuint  a, const GLint64EXT *b) {
	interceptor::getCurrentExt()->glVertexAttribL1i64vNV(a,b);
}
inline void glVertexAttribL2i64vNV(GLuint  a, const GLint64EXT *b) {
	interceptor::getCurrentExt()->glVertexAttribL2i64vNV(a,b);
}
inline void glVertexAttribL3i64vNV(GLuint  a, const GLint64EXT *b) {
	interceptor::getCurrentExt()->glVertexAttribL3i64vNV(a,b);
}
inline void glVertexAttribL4i64vNV(GLuint  a, const GLint64EXT *b) {
	interceptor::getCurrentExt()->glVertexAttribL4i64vNV(a,b);
}
inline void glVertexAttribL1ui64NV(GLuint  a, GLuint64EXT  b) {
	interceptor::getCurrentExt()->glVertexAttribL1ui64NV(a,b);
}
inline void glVertexAttribL2ui64NV(GLuint  a, GLuint64EXT  b, GLuint64EXT  c) {
	interceptor::getCurrentExt()->glVertexAttribL2ui64NV(a,b,c);
}
inline void glVertexAttribL3ui64NV(GLuint  a, GLuint64EXT  b, GLuint64EXT  c, GLuint64EXT  d) {
	interceptor::getCurrentExt()->glVertexAttribL3ui64NV(a,b,c,d);
}
inline void glVertexAttribL4ui64NV(GLuint  a, GLuint64EXT  b, GLuint64EXT  c, GLuint64EXT  d, GLuint64EXT  e) {
	interceptor::getCurrentExt()->glVertexAttribL4ui64NV(a,b,c,d,e);
}
inline void glVertexAttribL1ui64vNV(GLuint  a, const GLuint64EXT *b) {
	interceptor::getCurrentExt()->glVertexAttribL1ui64vNV(a,b);
}
inline void glVertexAttribL2ui64vNV(GLuint  a, const GLuint64EXT *b) {
	interceptor::getCurrentExt()->glVertexAttribL2ui64vNV(a,b);
}
inline void glVertexAttribL3ui64vNV(GLuint  a, const GLuint64EXT *b) {
	interceptor::getCurrentExt()->glVertexAttribL3ui64vNV(a,b);
}
inline void glVertexAttribL4ui64vNV(GLuint  a, const GLuint64EXT *b) {
	interceptor::getCurrentExt()->glVertexAttribL4ui64vNV(a,b);
}
inline void glGetVertexAttribLi64vNV(GLuint  a, GLenum  b, GLint64EXT *c) {
	interceptor::getCurrentExt()->glGetVertexAttribLi64vNV(a,b,c);
}
inline void glGetVertexAttribLui64vNV(GLuint  a, GLenum  b, GLuint64EXT *c) {
	interceptor::getCurrentExt()->glGetVertexAttribLui64vNV(a,b,c);
}
inline void glVertexAttribLFormatNV(GLuint  a, GLint  b, GLenum  c, GLsizei  d) {
	interceptor::getCurrentExt()->glVertexAttribLFormatNV(a,b,c,d);
}
inline void glBufferAddressRangeNV(GLenum  a, GLuint  b, GLuint64EXT  c, GLsizeiptr  d) {
	interceptor::getCurrentExt()->glBufferAddressRangeNV(a,b,c,d);
}
inline void glVertexFormatNV(GLint  a, GLenum  b, GLsizei  c) {
	interceptor::getCurrentExt()->glVertexFormatNV(a,b,c);
}
inline void glNormalFormatNV(GLenum  a, GLsizei  b) {
	interceptor::getCurrentExt()->glNormalFormatNV(a,b);
}
inline void glColorFormatNV(GLint  a, GLenum  b, GLsizei  c) {
	interceptor::getCurrentExt()->glColorFormatNV(a,b,c);
}
inline void glIndexFormatNV(GLenum  a, GLsizei  b) {
	interceptor::getCurrentExt()->glIndexFormatNV(a,b);
}
inline void glTexCoordFormatNV(GLint  a, GLenum  b, GLsizei  c) {
	interceptor::getCurrentExt()->glTexCoordFormatNV(a,b,c);
}
inline void glEdgeFlagFormatNV(GLsizei  a) {
	interceptor::getCurrentExt()->glEdgeFlagFormatNV(a);
}
inline void glSecondaryColorFormatNV(GLint  a, GLenum  b, GLsizei  c) {
	interceptor::getCurrentExt()->glSecondaryColorFormatNV(a,b,c);
}
inline void glFogCoordFormatNV(GLenum  a, GLsizei  b) {
	interceptor::getCurrentExt()->glFogCoordFormatNV(a,b);
}
inline void glVertexAttribFormatNV(GLuint  a, GLint  b, GLenum  c, GLboolean  d, GLsizei  e) {
	interceptor::getCurrentExt()->glVertexAttribFormatNV(a,b,c,d,e);
}
inline void glVertexAttribIFormatNV(GLuint  a, GLint  b, GLenum  c, GLsizei  d) {
	interceptor::getCurrentExt()->glVertexAttribIFormatNV(a,b,c,d);
}
inline void glGetIntegerui64i_vNV(GLenum  a, GLuint  b, GLuint64EXT *c) {
	interceptor::getCurrentExt()->glGetIntegerui64i_vNV(a,b,c);
}
inline GLboolean glAreProgramsResidentNV(GLsizei  a, const GLuint *b, GLboolean *c) {
	return interceptor::getCurrentExt()->glAreProgramsResidentNV(a,b,c);
}
inline void glBindProgramNV(GLenum  a, GLuint  b) {
	interceptor::getCurrentExt()->glBindProgramNV(a,b);
}
inline void glDeleteProgramsNV(GLsizei  a, const GLuint *b) {
	interceptor::getCurrentExt()->glDeleteProgramsNV(a,b);
}
inline void glExecuteProgramNV(GLenum  a, GLuint  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glExecuteProgramNV(a,b,c);
}
inline void glGenProgramsNV(GLsizei  a, GLuint *b) {
	interceptor::getCurrentExt()->glGenProgramsNV(a,b);
}
inline void glGetProgramParameterdvNV(GLenum  a, GLuint  b, GLenum  c, GLdouble *d) {
	interceptor::getCurrentExt()->glGetProgramParameterdvNV(a,b,c,d);
}
inline void glGetProgramParameterfvNV(GLenum  a, GLuint  b, GLenum  c, GLfloat *d) {
	interceptor::getCurrentExt()->glGetProgramParameterfvNV(a,b,c,d);
}
inline void glGetProgramivNV(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetProgramivNV(a,b,c);
}
inline void glGetProgramStringNV(GLuint  a, GLenum  b, GLubyte *c) {
	interceptor::getCurrentExt()->glGetProgramStringNV(a,b,c);
}
inline void glGetTrackMatrixivNV(GLenum  a, GLuint  b, GLenum  c, GLint *d) {
	interceptor::getCurrentExt()->glGetTrackMatrixivNV(a,b,c,d);
}
inline void glGetVertexAttribdvNV(GLuint  a, GLenum  b, GLdouble *c) {
	interceptor::getCurrentExt()->glGetVertexAttribdvNV(a,b,c);
}
inline void glGetVertexAttribfvNV(GLuint  a, GLenum  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetVertexAttribfvNV(a,b,c);
}
inline void glGetVertexAttribivNV(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetVertexAttribivNV(a,b,c);
}
inline void glGetVertexAttribPointervNV(GLuint  a, GLenum  b, void **c) {
	interceptor::getCurrentExt()->glGetVertexAttribPointervNV(a,b,c);
}
inline GLboolean glIsProgramNV(GLuint  a) {
	return interceptor::getCurrentExt()->glIsProgramNV(a);
}
inline void glLoadProgramNV(GLenum  a, GLuint  b, GLsizei  c, const GLubyte *d) {
	interceptor::getCurrentExt()->glLoadProgramNV(a,b,c,d);
}
inline void glProgramParameter4dNV(GLenum  a, GLuint  b, GLdouble  c, GLdouble  d, GLdouble  e, GLdouble  f) {
	interceptor::getCurrentExt()->glProgramParameter4dNV(a,b,c,d,e,f);
}
inline void glProgramParameter4dvNV(GLenum  a, GLuint  b, const GLdouble *c) {
	interceptor::getCurrentExt()->glProgramParameter4dvNV(a,b,c);
}
inline void glProgramParameter4fNV(GLenum  a, GLuint  b, GLfloat  c, GLfloat  d, GLfloat  e, GLfloat  f) {
	interceptor::getCurrentExt()->glProgramParameter4fNV(a,b,c,d,e,f);
}
inline void glProgramParameter4fvNV(GLenum  a, GLuint  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glProgramParameter4fvNV(a,b,c);
}
inline void glProgramParameters4dvNV(GLenum  a, GLuint  b, GLsizei  c, const GLdouble *d) {
	interceptor::getCurrentExt()->glProgramParameters4dvNV(a,b,c,d);
}
inline void glProgramParameters4fvNV(GLenum  a, GLuint  b, GLsizei  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glProgramParameters4fvNV(a,b,c,d);
}
inline void glRequestResidentProgramsNV(GLsizei  a, const GLuint *b) {
	interceptor::getCurrentExt()->glRequestResidentProgramsNV(a,b);
}
inline void glTrackMatrixNV(GLenum  a, GLuint  b, GLenum  c, GLenum  d) {
	interceptor::getCurrentExt()->glTrackMatrixNV(a,b,c,d);
}
inline void glVertexAttribPointerNV(GLuint  a, GLint  b, GLenum  c, GLsizei  d, const void *e) {
	interceptor::getCurrentExt()->glVertexAttribPointerNV(a,b,c,d,e);
}
inline void glVertexAttrib1dNV(GLuint  a, GLdouble  b) {
	interceptor::getCurrentExt()->glVertexAttrib1dNV(a,b);
}
inline void glVertexAttrib1dvNV(GLuint  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glVertexAttrib1dvNV(a,b);
}
inline void glVertexAttrib1fNV(GLuint  a, GLfloat  b) {
	interceptor::getCurrentExt()->glVertexAttrib1fNV(a,b);
}
inline void glVertexAttrib1fvNV(GLuint  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glVertexAttrib1fvNV(a,b);
}
inline void glVertexAttrib1sNV(GLuint  a, GLshort  b) {
	interceptor::getCurrentExt()->glVertexAttrib1sNV(a,b);
}
inline void glVertexAttrib1svNV(GLuint  a, const GLshort *b) {
	interceptor::getCurrentExt()->glVertexAttrib1svNV(a,b);
}
inline void glVertexAttrib2dNV(GLuint  a, GLdouble  b, GLdouble  c) {
	interceptor::getCurrentExt()->glVertexAttrib2dNV(a,b,c);
}
inline void glVertexAttrib2dvNV(GLuint  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glVertexAttrib2dvNV(a,b);
}
inline void glVertexAttrib2fNV(GLuint  a, GLfloat  b, GLfloat  c) {
	interceptor::getCurrentExt()->glVertexAttrib2fNV(a,b,c);
}
inline void glVertexAttrib2fvNV(GLuint  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glVertexAttrib2fvNV(a,b);
}
inline void glVertexAttrib2sNV(GLuint  a, GLshort  b, GLshort  c) {
	interceptor::getCurrentExt()->glVertexAttrib2sNV(a,b,c);
}
inline void glVertexAttrib2svNV(GLuint  a, const GLshort *b) {
	interceptor::getCurrentExt()->glVertexAttrib2svNV(a,b);
}
inline void glVertexAttrib3dNV(GLuint  a, GLdouble  b, GLdouble  c, GLdouble  d) {
	interceptor::getCurrentExt()->glVertexAttrib3dNV(a,b,c,d);
}
inline void glVertexAttrib3dvNV(GLuint  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glVertexAttrib3dvNV(a,b);
}
inline void glVertexAttrib3fNV(GLuint  a, GLfloat  b, GLfloat  c, GLfloat  d) {
	interceptor::getCurrentExt()->glVertexAttrib3fNV(a,b,c,d);
}
inline void glVertexAttrib3fvNV(GLuint  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glVertexAttrib3fvNV(a,b);
}
inline void glVertexAttrib3sNV(GLuint  a, GLshort  b, GLshort  c, GLshort  d) {
	interceptor::getCurrentExt()->glVertexAttrib3sNV(a,b,c,d);
}
inline void glVertexAttrib3svNV(GLuint  a, const GLshort *b) {
	interceptor::getCurrentExt()->glVertexAttrib3svNV(a,b);
}
inline void glVertexAttrib4dNV(GLuint  a, GLdouble  b, GLdouble  c, GLdouble  d, GLdouble  e) {
	interceptor::getCurrentExt()->glVertexAttrib4dNV(a,b,c,d,e);
}
inline void glVertexAttrib4dvNV(GLuint  a, const GLdouble *b) {
	interceptor::getCurrentExt()->glVertexAttrib4dvNV(a,b);
}
inline void glVertexAttrib4fNV(GLuint  a, GLfloat  b, GLfloat  c, GLfloat  d, GLfloat  e) {
	interceptor::getCurrentExt()->glVertexAttrib4fNV(a,b,c,d,e);
}
inline void glVertexAttrib4fvNV(GLuint  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glVertexAttrib4fvNV(a,b);
}
inline void glVertexAttrib4sNV(GLuint  a, GLshort  b, GLshort  c, GLshort  d, GLshort  e) {
	interceptor::getCurrentExt()->glVertexAttrib4sNV(a,b,c,d,e);
}
inline void glVertexAttrib4svNV(GLuint  a, const GLshort *b) {
	interceptor::getCurrentExt()->glVertexAttrib4svNV(a,b);
}
inline void glVertexAttrib4ubNV(GLuint  a, GLubyte  b, GLubyte  c, GLubyte  d, GLubyte  e) {
	interceptor::getCurrentExt()->glVertexAttrib4ubNV(a,b,c,d,e);
}
inline void glVertexAttrib4ubvNV(GLuint  a, const GLubyte *b) {
	interceptor::getCurrentExt()->glVertexAttrib4ubvNV(a,b);
}
inline void glVertexAttribs1dvNV(GLuint  a, GLsizei  b, const GLdouble *c) {
	interceptor::getCurrentExt()->glVertexAttribs1dvNV(a,b,c);
}
inline void glVertexAttribs1fvNV(GLuint  a, GLsizei  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glVertexAttribs1fvNV(a,b,c);
}
inline void glVertexAttribs1svNV(GLuint  a, GLsizei  b, const GLshort *c) {
	interceptor::getCurrentExt()->glVertexAttribs1svNV(a,b,c);
}
inline void glVertexAttribs2dvNV(GLuint  a, GLsizei  b, const GLdouble *c) {
	interceptor::getCurrentExt()->glVertexAttribs2dvNV(a,b,c);
}
inline void glVertexAttribs2fvNV(GLuint  a, GLsizei  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glVertexAttribs2fvNV(a,b,c);
}
inline void glVertexAttribs2svNV(GLuint  a, GLsizei  b, const GLshort *c) {
	interceptor::getCurrentExt()->glVertexAttribs2svNV(a,b,c);
}
inline void glVertexAttribs3dvNV(GLuint  a, GLsizei  b, const GLdouble *c) {
	interceptor::getCurrentExt()->glVertexAttribs3dvNV(a,b,c);
}
inline void glVertexAttribs3fvNV(GLuint  a, GLsizei  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glVertexAttribs3fvNV(a,b,c);
}
inline void glVertexAttribs3svNV(GLuint  a, GLsizei  b, const GLshort *c) {
	interceptor::getCurrentExt()->glVertexAttribs3svNV(a,b,c);
}
inline void glVertexAttribs4dvNV(GLuint  a, GLsizei  b, const GLdouble *c) {
	interceptor::getCurrentExt()->glVertexAttribs4dvNV(a,b,c);
}
inline void glVertexAttribs4fvNV(GLuint  a, GLsizei  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glVertexAttribs4fvNV(a,b,c);
}
inline void glVertexAttribs4svNV(GLuint  a, GLsizei  b, const GLshort *c) {
	interceptor::getCurrentExt()->glVertexAttribs4svNV(a,b,c);
}
inline void glVertexAttribs4ubvNV(GLuint  a, GLsizei  b, const GLubyte *c) {
	interceptor::getCurrentExt()->glVertexAttribs4ubvNV(a,b,c);
}
inline void glVertexAttribI1iEXT(GLuint  a, GLint  b) {
	interceptor::getCurrentExt()->glVertexAttribI1iEXT(a,b);
}
inline void glVertexAttribI2iEXT(GLuint  a, GLint  b, GLint  c) {
	interceptor::getCurrentExt()->glVertexAttribI2iEXT(a,b,c);
}
inline void glVertexAttribI3iEXT(GLuint  a, GLint  b, GLint  c, GLint  d) {
	interceptor::getCurrentExt()->glVertexAttribI3iEXT(a,b,c,d);
}
inline void glVertexAttribI4iEXT(GLuint  a, GLint  b, GLint  c, GLint  d, GLint  e) {
	interceptor::getCurrentExt()->glVertexAttribI4iEXT(a,b,c,d,e);
}
inline void glVertexAttribI1uiEXT(GLuint  a, GLuint  b) {
	interceptor::getCurrentExt()->glVertexAttribI1uiEXT(a,b);
}
inline void glVertexAttribI2uiEXT(GLuint  a, GLuint  b, GLuint  c) {
	interceptor::getCurrentExt()->glVertexAttribI2uiEXT(a,b,c);
}
inline void glVertexAttribI3uiEXT(GLuint  a, GLuint  b, GLuint  c, GLuint  d) {
	interceptor::getCurrentExt()->glVertexAttribI3uiEXT(a,b,c,d);
}
inline void glVertexAttribI4uiEXT(GLuint  a, GLuint  b, GLuint  c, GLuint  d, GLuint  e) {
	interceptor::getCurrentExt()->glVertexAttribI4uiEXT(a,b,c,d,e);
}
inline void glVertexAttribI1ivEXT(GLuint  a, const GLint *b) {
	interceptor::getCurrentExt()->glVertexAttribI1ivEXT(a,b);
}
inline void glVertexAttribI2ivEXT(GLuint  a, const GLint *b) {
	interceptor::getCurrentExt()->glVertexAttribI2ivEXT(a,b);
}
inline void glVertexAttribI3ivEXT(GLuint  a, const GLint *b) {
	interceptor::getCurrentExt()->glVertexAttribI3ivEXT(a,b);
}
inline void glVertexAttribI4ivEXT(GLuint  a, const GLint *b) {
	interceptor::getCurrentExt()->glVertexAttribI4ivEXT(a,b);
}
inline void glVertexAttribI1uivEXT(GLuint  a, const GLuint *b) {
	interceptor::getCurrentExt()->glVertexAttribI1uivEXT(a,b);
}
inline void glVertexAttribI2uivEXT(GLuint  a, const GLuint *b) {
	interceptor::getCurrentExt()->glVertexAttribI2uivEXT(a,b);
}
inline void glVertexAttribI3uivEXT(GLuint  a, const GLuint *b) {
	interceptor::getCurrentExt()->glVertexAttribI3uivEXT(a,b);
}
inline void glVertexAttribI4uivEXT(GLuint  a, const GLuint *b) {
	interceptor::getCurrentExt()->glVertexAttribI4uivEXT(a,b);
}
inline void glVertexAttribI4bvEXT(GLuint  a, const GLbyte *b) {
	interceptor::getCurrentExt()->glVertexAttribI4bvEXT(a,b);
}
inline void glVertexAttribI4svEXT(GLuint  a, const GLshort *b) {
	interceptor::getCurrentExt()->glVertexAttribI4svEXT(a,b);
}
inline void glVertexAttribI4ubvEXT(GLuint  a, const GLubyte *b) {
	interceptor::getCurrentExt()->glVertexAttribI4ubvEXT(a,b);
}
inline void glVertexAttribI4usvEXT(GLuint  a, const GLushort *b) {
	interceptor::getCurrentExt()->glVertexAttribI4usvEXT(a,b);
}
inline void glVertexAttribIPointerEXT(GLuint  a, GLint  b, GLenum  c, GLsizei  d, const void *e) {
	interceptor::getCurrentExt()->glVertexAttribIPointerEXT(a,b,c,d,e);
}
inline void glGetVertexAttribIivEXT(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetVertexAttribIivEXT(a,b,c);
}
inline void glGetVertexAttribIuivEXT(GLuint  a, GLenum  b, GLuint *c) {
	interceptor::getCurrentExt()->glGetVertexAttribIuivEXT(a,b,c);
}
inline void glBeginVideoCaptureNV(GLuint  a) {
	interceptor::getCurrentExt()->glBeginVideoCaptureNV(a);
}
inline void glBindVideoCaptureStreamBufferNV(GLuint  a, GLuint  b, GLenum  c, GLintptrARB  d) {
	interceptor::getCurrentExt()->glBindVideoCaptureStreamBufferNV(a,b,c,d);
}
inline void glBindVideoCaptureStreamTextureNV(GLuint  a, GLuint  b, GLenum  c, GLenum  d, GLuint  e) {
	interceptor::getCurrentExt()->glBindVideoCaptureStreamTextureNV(a,b,c,d,e);
}
inline void glEndVideoCaptureNV(GLuint  a) {
	interceptor::getCurrentExt()->glEndVideoCaptureNV(a);
}
inline void glGetVideoCaptureivNV(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetVideoCaptureivNV(a,b,c);
}
inline void glGetVideoCaptureStreamivNV(GLuint  a, GLuint  b, GLenum  c, GLint *d) {
	interceptor::getCurrentExt()->glGetVideoCaptureStreamivNV(a,b,c,d);
}
inline void glGetVideoCaptureStreamfvNV(GLuint  a, GLuint  b, GLenum  c, GLfloat *d) {
	interceptor::getCurrentExt()->glGetVideoCaptureStreamfvNV(a,b,c,d);
}
inline void glGetVideoCaptureStreamdvNV(GLuint  a, GLuint  b, GLenum  c, GLdouble *d) {
	interceptor::getCurrentExt()->glGetVideoCaptureStreamdvNV(a,b,c,d);
}
inline GLenum glVideoCaptureNV(GLuint  a, GLuint *b, GLuint64EXT *c) {
	return interceptor::getCurrentExt()->glVideoCaptureNV(a,b,c);
}
inline void glVideoCaptureStreamParameterivNV(GLuint  a, GLuint  b, GLenum  c, const GLint *d) {
	interceptor::getCurrentExt()->glVideoCaptureStreamParameterivNV(a,b,c,d);
}
inline void glVideoCaptureStreamParameterfvNV(GLuint  a, GLuint  b, GLenum  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glVideoCaptureStreamParameterfvNV(a,b,c,d);
}
inline void glVideoCaptureStreamParameterdvNV(GLuint  a, GLuint  b, GLenum  c, const GLdouble *d) {
	interceptor::getCurrentExt()->glVideoCaptureStreamParameterdvNV(a,b,c,d);
}
inline void glViewportSwizzleNV(GLuint  a, GLenum  b, GLenum  c, GLenum  d, GLenum  e) {
	interceptor::getCurrentExt()->glViewportSwizzleNV(a,b,c,d,e);
}
inline void glFramebufferTextureMultiviewOVR(GLenum  a, GLenum  b, GLuint  c, GLint  d, GLint  e, GLsizei  f) {
	interceptor::getCurrentExt()->glFramebufferTextureMultiviewOVR(a,b,c,d,e,f);
}
inline void glHintPGI(GLenum  a, GLint  b) {
	interceptor::getCurrentExt()->glHintPGI(a,b);
}
inline void glDetailTexFuncSGIS(GLenum  a, GLsizei  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glDetailTexFuncSGIS(a,b,c);
}
inline void glGetDetailTexFuncSGIS(GLenum  a, GLfloat *b) {
	interceptor::getCurrentExt()->glGetDetailTexFuncSGIS(a,b);
}
inline void glFogFuncSGIS(GLsizei  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glFogFuncSGIS(a,b);
}
inline void glGetFogFuncSGIS(GLfloat *a) {
	interceptor::getCurrentExt()->glGetFogFuncSGIS(a);
}
inline void glSampleMaskSGIS(GLclampf  a, GLboolean  b) {
	interceptor::getCurrentExt()->glSampleMaskSGIS(a,b);
}
inline void glSamplePatternSGIS(GLenum  a) {
	interceptor::getCurrentExt()->glSamplePatternSGIS(a);
}
inline void glPixelTexGenParameteriSGIS(GLenum  a, GLint  b) {
	interceptor::getCurrentExt()->glPixelTexGenParameteriSGIS(a,b);
}
inline void glPixelTexGenParameterivSGIS(GLenum  a, const GLint *b) {
	interceptor::getCurrentExt()->glPixelTexGenParameterivSGIS(a,b);
}
inline void glPixelTexGenParameterfSGIS(GLenum  a, GLfloat  b) {
	interceptor::getCurrentExt()->glPixelTexGenParameterfSGIS(a,b);
}
inline void glPixelTexGenParameterfvSGIS(GLenum  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glPixelTexGenParameterfvSGIS(a,b);
}
inline void glGetPixelTexGenParameterivSGIS(GLenum  a, GLint *b) {
	interceptor::getCurrentExt()->glGetPixelTexGenParameterivSGIS(a,b);
}
inline void glGetPixelTexGenParameterfvSGIS(GLenum  a, GLfloat *b) {
	interceptor::getCurrentExt()->glGetPixelTexGenParameterfvSGIS(a,b);
}
inline void glPointParameterfSGIS(GLenum  a, GLfloat  b) {
	interceptor::getCurrentExt()->glPointParameterfSGIS(a,b);
}
inline void glPointParameterfvSGIS(GLenum  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glPointParameterfvSGIS(a,b);
}
inline void glSharpenTexFuncSGIS(GLenum  a, GLsizei  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glSharpenTexFuncSGIS(a,b,c);
}
inline void glGetSharpenTexFuncSGIS(GLenum  a, GLfloat *b) {
	interceptor::getCurrentExt()->glGetSharpenTexFuncSGIS(a,b);
}
inline void glTexImage4DSGIS(GLenum  a, GLint  b, GLenum  c, GLsizei  d, GLsizei  e, GLsizei  f, GLsizei  g, GLint  h, GLenum  i, GLenum  j, const void *k) {
	interceptor::getCurrentExt()->glTexImage4DSGIS(a,b,c,d,e,f,g,h,i,j,k);
}
inline void glTexSubImage4DSGIS(GLenum  a, GLint  b, GLint  c, GLint  d, GLint  e, GLint  f, GLsizei  g, GLsizei  h, GLsizei  i, GLsizei  j, GLenum  k, GLenum  l, const void *m) {
	interceptor::getCurrentExt()->glTexSubImage4DSGIS(a,b,c,d,e,f,g,h,i,j,k,l,m);
}
inline void glTextureColorMaskSGIS(GLboolean  a, GLboolean  b, GLboolean  c, GLboolean  d) {
	interceptor::getCurrentExt()->glTextureColorMaskSGIS(a,b,c,d);
}
inline void glGetTexFilterFuncSGIS(GLenum  a, GLenum  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetTexFilterFuncSGIS(a,b,c);
}
inline void glTexFilterFuncSGIS(GLenum  a, GLenum  b, GLsizei  c, const GLfloat *d) {
	interceptor::getCurrentExt()->glTexFilterFuncSGIS(a,b,c,d);
}
inline void glAsyncMarkerSGIX(GLuint  a) {
	interceptor::getCurrentExt()->glAsyncMarkerSGIX(a);
}
inline GLint glFinishAsyncSGIX(GLuint *a) {
	return interceptor::getCurrentExt()->glFinishAsyncSGIX(a);
}
inline GLint glPollAsyncSGIX(GLuint *a) {
	return interceptor::getCurrentExt()->glPollAsyncSGIX(a);
}
inline GLuint glGenAsyncMarkersSGIX(GLsizei  a) {
	return interceptor::getCurrentExt()->glGenAsyncMarkersSGIX(a);
}
inline void glDeleteAsyncMarkersSGIX(GLuint  a, GLsizei  b) {
	interceptor::getCurrentExt()->glDeleteAsyncMarkersSGIX(a,b);
}
inline GLboolean glIsAsyncMarkerSGIX(GLuint  a) {
	return interceptor::getCurrentExt()->glIsAsyncMarkerSGIX(a);
}
inline void glFlushRasterSGIX(void) {
	interceptor::getCurrentExt()->glFlushRasterSGIX();
}
inline void glFragmentColorMaterialSGIX(GLenum  a, GLenum  b) {
	interceptor::getCurrentExt()->glFragmentColorMaterialSGIX(a,b);
}
inline void glFragmentLightfSGIX(GLenum  a, GLenum  b, GLfloat  c) {
	interceptor::getCurrentExt()->glFragmentLightfSGIX(a,b,c);
}
inline void glFragmentLightfvSGIX(GLenum  a, GLenum  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glFragmentLightfvSGIX(a,b,c);
}
inline void glFragmentLightiSGIX(GLenum  a, GLenum  b, GLint  c) {
	interceptor::getCurrentExt()->glFragmentLightiSGIX(a,b,c);
}
inline void glFragmentLightivSGIX(GLenum  a, GLenum  b, const GLint *c) {
	interceptor::getCurrentExt()->glFragmentLightivSGIX(a,b,c);
}
inline void glFragmentLightModelfSGIX(GLenum  a, GLfloat  b) {
	interceptor::getCurrentExt()->glFragmentLightModelfSGIX(a,b);
}
inline void glFragmentLightModelfvSGIX(GLenum  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glFragmentLightModelfvSGIX(a,b);
}
inline void glFragmentLightModeliSGIX(GLenum  a, GLint  b) {
	interceptor::getCurrentExt()->glFragmentLightModeliSGIX(a,b);
}
inline void glFragmentLightModelivSGIX(GLenum  a, const GLint *b) {
	interceptor::getCurrentExt()->glFragmentLightModelivSGIX(a,b);
}
inline void glFragmentMaterialfSGIX(GLenum  a, GLenum  b, GLfloat  c) {
	interceptor::getCurrentExt()->glFragmentMaterialfSGIX(a,b,c);
}
inline void glFragmentMaterialfvSGIX(GLenum  a, GLenum  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glFragmentMaterialfvSGIX(a,b,c);
}
inline void glFragmentMaterialiSGIX(GLenum  a, GLenum  b, GLint  c) {
	interceptor::getCurrentExt()->glFragmentMaterialiSGIX(a,b,c);
}
inline void glFragmentMaterialivSGIX(GLenum  a, GLenum  b, const GLint *c) {
	interceptor::getCurrentExt()->glFragmentMaterialivSGIX(a,b,c);
}
inline void glGetFragmentLightfvSGIX(GLenum  a, GLenum  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetFragmentLightfvSGIX(a,b,c);
}
inline void glGetFragmentLightivSGIX(GLenum  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetFragmentLightivSGIX(a,b,c);
}
inline void glGetFragmentMaterialfvSGIX(GLenum  a, GLenum  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetFragmentMaterialfvSGIX(a,b,c);
}
inline void glGetFragmentMaterialivSGIX(GLenum  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetFragmentMaterialivSGIX(a,b,c);
}
inline void glLightEnviSGIX(GLenum  a, GLint  b) {
	interceptor::getCurrentExt()->glLightEnviSGIX(a,b);
}
inline void glFrameZoomSGIX(GLint  a) {
	interceptor::getCurrentExt()->glFrameZoomSGIX(a);
}
inline void glIglooInterfaceSGIX(GLenum  a, const void *b) {
	interceptor::getCurrentExt()->glIglooInterfaceSGIX(a,b);
}
inline GLint glGetInstrumentsSGIX(void) {
	return interceptor::getCurrentExt()->glGetInstrumentsSGIX();
}
inline void glInstrumentsBufferSGIX(GLsizei  a, GLint *b) {
	interceptor::getCurrentExt()->glInstrumentsBufferSGIX(a,b);
}
inline GLint glPollInstrumentsSGIX(GLint *a) {
	return interceptor::getCurrentExt()->glPollInstrumentsSGIX(a);
}
inline void glReadInstrumentsSGIX(GLint  a) {
	interceptor::getCurrentExt()->glReadInstrumentsSGIX(a);
}
inline void glStartInstrumentsSGIX(void) {
	interceptor::getCurrentExt()->glStartInstrumentsSGIX();
}
inline void glStopInstrumentsSGIX(GLint  a) {
	interceptor::getCurrentExt()->glStopInstrumentsSGIX(a);
}
inline void glGetListParameterfvSGIX(GLuint  a, GLenum  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetListParameterfvSGIX(a,b,c);
}
inline void glGetListParameterivSGIX(GLuint  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetListParameterivSGIX(a,b,c);
}
inline void glListParameterfSGIX(GLuint  a, GLenum  b, GLfloat  c) {
	interceptor::getCurrentExt()->glListParameterfSGIX(a,b,c);
}
inline void glListParameterfvSGIX(GLuint  a, GLenum  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glListParameterfvSGIX(a,b,c);
}
inline void glListParameteriSGIX(GLuint  a, GLenum  b, GLint  c) {
	interceptor::getCurrentExt()->glListParameteriSGIX(a,b,c);
}
inline void glListParameterivSGIX(GLuint  a, GLenum  b, const GLint *c) {
	interceptor::getCurrentExt()->glListParameterivSGIX(a,b,c);
}
inline void glPixelTexGenSGIX(GLenum  a) {
	interceptor::getCurrentExt()->glPixelTexGenSGIX(a);
}
inline void glDeformationMap3dSGIX(GLenum  a, GLdouble  b, GLdouble  c, GLint  d, GLint  e, GLdouble  f, GLdouble  g, GLint  h, GLint  i, GLdouble  j, GLdouble  k, GLint  l, GLint  m, const GLdouble *n) {
	interceptor::getCurrentExt()->glDeformationMap3dSGIX(a,b,c,d,e,f,g,h,i,j,k,l,m,n);
}
inline void glDeformationMap3fSGIX(GLenum  a, GLfloat  b, GLfloat  c, GLint  d, GLint  e, GLfloat  f, GLfloat  g, GLint  h, GLint  i, GLfloat  j, GLfloat  k, GLint  l, GLint  m, const GLfloat *n) {
	interceptor::getCurrentExt()->glDeformationMap3fSGIX(a,b,c,d,e,f,g,h,i,j,k,l,m,n);
}
inline void glDeformSGIX(GLbitfield  a) {
	interceptor::getCurrentExt()->glDeformSGIX(a);
}
inline void glLoadIdentityDeformationMapSGIX(GLbitfield  a) {
	interceptor::getCurrentExt()->glLoadIdentityDeformationMapSGIX(a);
}
inline void glReferencePlaneSGIX(const GLdouble *a) {
	interceptor::getCurrentExt()->glReferencePlaneSGIX(a);
}
inline void glSpriteParameterfSGIX(GLenum  a, GLfloat  b) {
	interceptor::getCurrentExt()->glSpriteParameterfSGIX(a,b);
}
inline void glSpriteParameterfvSGIX(GLenum  a, const GLfloat *b) {
	interceptor::getCurrentExt()->glSpriteParameterfvSGIX(a,b);
}
inline void glSpriteParameteriSGIX(GLenum  a, GLint  b) {
	interceptor::getCurrentExt()->glSpriteParameteriSGIX(a,b);
}
inline void glSpriteParameterivSGIX(GLenum  a, const GLint *b) {
	interceptor::getCurrentExt()->glSpriteParameterivSGIX(a,b);
}
inline void glTagSampleBufferSGIX(void) {
	interceptor::getCurrentExt()->glTagSampleBufferSGIX();
}
inline void glColorTableSGI(GLenum  a, GLenum  b, GLsizei  c, GLenum  d, GLenum  e, const void *f) {
	interceptor::getCurrentExt()->glColorTableSGI(a,b,c,d,e,f);
}
inline void glColorTableParameterfvSGI(GLenum  a, GLenum  b, const GLfloat *c) {
	interceptor::getCurrentExt()->glColorTableParameterfvSGI(a,b,c);
}
inline void glColorTableParameterivSGI(GLenum  a, GLenum  b, const GLint *c) {
	interceptor::getCurrentExt()->glColorTableParameterivSGI(a,b,c);
}
inline void glCopyColorTableSGI(GLenum  a, GLenum  b, GLint  c, GLint  d, GLsizei  e) {
	interceptor::getCurrentExt()->glCopyColorTableSGI(a,b,c,d,e);
}
inline void glGetColorTableSGI(GLenum  a, GLenum  b, GLenum  c, void *d) {
	interceptor::getCurrentExt()->glGetColorTableSGI(a,b,c,d);
}
inline void glGetColorTableParameterfvSGI(GLenum  a, GLenum  b, GLfloat *c) {
	interceptor::getCurrentExt()->glGetColorTableParameterfvSGI(a,b,c);
}
inline void glGetColorTableParameterivSGI(GLenum  a, GLenum  b, GLint *c) {
	interceptor::getCurrentExt()->glGetColorTableParameterivSGI(a,b,c);
}
inline void glFinishTextureSUNX(void) {
	interceptor::getCurrentExt()->glFinishTextureSUNX();
}
inline void glGlobalAlphaFactorbSUN(GLbyte  a) {
	interceptor::getCurrentExt()->glGlobalAlphaFactorbSUN(a);
}
inline void glGlobalAlphaFactorsSUN(GLshort  a) {
	interceptor::getCurrentExt()->glGlobalAlphaFactorsSUN(a);
}
inline void glGlobalAlphaFactoriSUN(GLint  a) {
	interceptor::getCurrentExt()->glGlobalAlphaFactoriSUN(a);
}
inline void glGlobalAlphaFactorfSUN(GLfloat  a) {
	interceptor::getCurrentExt()->glGlobalAlphaFactorfSUN(a);
}
inline void glGlobalAlphaFactordSUN(GLdouble  a) {
	interceptor::getCurrentExt()->glGlobalAlphaFactordSUN(a);
}
inline void glGlobalAlphaFactorubSUN(GLubyte  a) {
	interceptor::getCurrentExt()->glGlobalAlphaFactorubSUN(a);
}
inline void glGlobalAlphaFactorusSUN(GLushort  a) {
	interceptor::getCurrentExt()->glGlobalAlphaFactorusSUN(a);
}
inline void glGlobalAlphaFactoruiSUN(GLuint  a) {
	interceptor::getCurrentExt()->glGlobalAlphaFactoruiSUN(a);
}
inline void glDrawMeshArraysSUN(GLenum  a, GLint  b, GLsizei  c, GLsizei  d) {
	interceptor::getCurrentExt()->glDrawMeshArraysSUN(a,b,c,d);
}
inline void glReplacementCodeuiSUN(GLuint  a) {
	interceptor::getCurrentExt()->glReplacementCodeuiSUN(a);
}
inline void glReplacementCodeusSUN(GLushort  a) {
	interceptor::getCurrentExt()->glReplacementCodeusSUN(a);
}
inline void glReplacementCodeubSUN(GLubyte  a) {
	interceptor::getCurrentExt()->glReplacementCodeubSUN(a);
}
inline void glReplacementCodeuivSUN(const GLuint *a) {
	interceptor::getCurrentExt()->glReplacementCodeuivSUN(a);
}
inline void glReplacementCodeusvSUN(const GLushort *a) {
	interceptor::getCurrentExt()->glReplacementCodeusvSUN(a);
}
inline void glReplacementCodeubvSUN(const GLubyte *a) {
	interceptor::getCurrentExt()->glReplacementCodeubvSUN(a);
}
inline void glReplacementCodePointerSUN(GLenum  a, GLsizei  b, const void **c) {
	interceptor::getCurrentExt()->glReplacementCodePointerSUN(a,b,c);
}
inline void glColor4ubVertex2fSUN(GLubyte  a, GLubyte  b, GLubyte  c, GLubyte  d, GLfloat  e, GLfloat  f) {
	interceptor::getCurrentExt()->glColor4ubVertex2fSUN(a,b,c,d,e,f);
}
inline void glColor4ubVertex2fvSUN(const GLubyte *a, const GLfloat *b) {
	interceptor::getCurrentExt()->glColor4ubVertex2fvSUN(a,b);
}
inline void glColor4ubVertex3fSUN(GLubyte  a, GLubyte  b, GLubyte  c, GLubyte  d, GLfloat  e, GLfloat  f, GLfloat  g) {
	interceptor::getCurrentExt()->glColor4ubVertex3fSUN(a,b,c,d,e,f,g);
}
inline void glColor4ubVertex3fvSUN(const GLubyte *a, const GLfloat *b) {
	interceptor::getCurrentExt()->glColor4ubVertex3fvSUN(a,b);
}
inline void glColor3fVertex3fSUN(GLfloat  a, GLfloat  b, GLfloat  c, GLfloat  d, GLfloat  e, GLfloat  f) {
	interceptor::getCurrentExt()->glColor3fVertex3fSUN(a,b,c,d,e,f);
}
inline void glColor3fVertex3fvSUN(const GLfloat *a, const GLfloat *b) {
	interceptor::getCurrentExt()->glColor3fVertex3fvSUN(a,b);
}
inline void glNormal3fVertex3fSUN(GLfloat  a, GLfloat  b, GLfloat  c, GLfloat  d, GLfloat  e, GLfloat  f) {
	interceptor::getCurrentExt()->glNormal3fVertex3fSUN(a,b,c,d,e,f);
}
inline void glNormal3fVertex3fvSUN(const GLfloat *a, const GLfloat *b) {
	interceptor::getCurrentExt()->glNormal3fVertex3fvSUN(a,b);
}
inline void glColor4fNormal3fVertex3fSUN(GLfloat  a, GLfloat  b, GLfloat  c, GLfloat  d, GLfloat  e, GLfloat  f, GLfloat  g, GLfloat  h, GLfloat  i, GLfloat  j) {
	interceptor::getCurrentExt()->glColor4fNormal3fVertex3fSUN(a,b,c,d,e,f,g,h,i,j);
}
inline void glColor4fNormal3fVertex3fvSUN(const GLfloat *a, const GLfloat *b, const GLfloat *c) {
	interceptor::getCurrentExt()->glColor4fNormal3fVertex3fvSUN(a,b,c);
}
inline void glTexCoord2fVertex3fSUN(GLfloat  a, GLfloat  b, GLfloat  c, GLfloat  d, GLfloat  e) {
	interceptor::getCurrentExt()->glTexCoord2fVertex3fSUN(a,b,c,d,e);
}
inline void glTexCoord2fVertex3fvSUN(const GLfloat *a, const GLfloat *b) {
	interceptor::getCurrentExt()->glTexCoord2fVertex3fvSUN(a,b);
}
inline void glTexCoord4fVertex4fSUN(GLfloat  a, GLfloat  b, GLfloat  c, GLfloat  d, GLfloat  e, GLfloat  f, GLfloat  g, GLfloat  h) {
	interceptor::getCurrentExt()->glTexCoord4fVertex4fSUN(a,b,c,d,e,f,g,h);
}
inline void glTexCoord4fVertex4fvSUN(const GLfloat *a, const GLfloat *b) {
	interceptor::getCurrentExt()->glTexCoord4fVertex4fvSUN(a,b);
}
inline void glTexCoord2fColor4ubVertex3fSUN(GLfloat  a, GLfloat  b, GLubyte  c, GLubyte  d, GLubyte  e, GLubyte  f, GLfloat  g, GLfloat  h, GLfloat  i) {
	interceptor::getCurrentExt()->glTexCoord2fColor4ubVertex3fSUN(a,b,c,d,e,f,g,h,i);
}
inline void glTexCoord2fColor4ubVertex3fvSUN(const GLfloat *a, const GLubyte *b, const GLfloat *c) {
	interceptor::getCurrentExt()->glTexCoord2fColor4ubVertex3fvSUN(a,b,c);
}
inline void glTexCoord2fColor3fVertex3fSUN(GLfloat  a, GLfloat  b, GLfloat  c, GLfloat  d, GLfloat  e, GLfloat  f, GLfloat  g, GLfloat  h) {
	interceptor::getCurrentExt()->glTexCoord2fColor3fVertex3fSUN(a,b,c,d,e,f,g,h);
}
inline void glTexCoord2fColor3fVertex3fvSUN(const GLfloat *a, const GLfloat *b, const GLfloat *c) {
	interceptor::getCurrentExt()->glTexCoord2fColor3fVertex3fvSUN(a,b,c);
}
inline void glTexCoord2fNormal3fVertex3fSUN(GLfloat  a, GLfloat  b, GLfloat  c, GLfloat  d, GLfloat  e, GLfloat  f, GLfloat  g, GLfloat  h) {
	interceptor::getCurrentExt()->glTexCoord2fNormal3fVertex3fSUN(a,b,c,d,e,f,g,h);
}
inline void glTexCoord2fNormal3fVertex3fvSUN(const GLfloat *a, const GLfloat *b, const GLfloat *c) {
	interceptor::getCurrentExt()->glTexCoord2fNormal3fVertex3fvSUN(a,b,c);
}
inline void glTexCoord2fColor4fNormal3fVertex3fSUN(GLfloat  a, GLfloat  b, GLfloat  c, GLfloat  d, GLfloat  e, GLfloat  f, GLfloat  g, GLfloat  h, GLfloat  i, GLfloat  j, GLfloat  k, GLfloat  l) {
	interceptor::getCurrentExt()->glTexCoord2fColor4fNormal3fVertex3fSUN(a,b,c,d,e,f,g,h,i,j,k,l);
}
inline void glTexCoord2fColor4fNormal3fVertex3fvSUN(const GLfloat *a, const GLfloat *b, const GLfloat *c, const GLfloat *d) {
	interceptor::getCurrentExt()->glTexCoord2fColor4fNormal3fVertex3fvSUN(a,b,c,d);
}
inline void glTexCoord4fColor4fNormal3fVertex4fSUN(GLfloat  a, GLfloat  b, GLfloat  c, GLfloat  d, GLfloat  e, GLfloat  f, GLfloat  g, GLfloat  h, GLfloat  i, GLfloat  j, GLfloat  k, GLfloat  l, GLfloat  m, GLfloat  n, GLfloat  o) {
	interceptor::getCurrentExt()->glTexCoord4fColor4fNormal3fVertex4fSUN(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o);
}
inline void glTexCoord4fColor4fNormal3fVertex4fvSUN(const GLfloat *a, const GLfloat *b, const GLfloat *c, const GLfloat *d) {
	interceptor::getCurrentExt()->glTexCoord4fColor4fNormal3fVertex4fvSUN(a,b,c,d);
}
inline void glReplacementCodeuiVertex3fSUN(GLuint  a, GLfloat  b, GLfloat  c, GLfloat  d) {
	interceptor::getCurrentExt()->glReplacementCodeuiVertex3fSUN(a,b,c,d);
}
inline void glReplacementCodeuiVertex3fvSUN(const GLuint *a, const GLfloat *b) {
	interceptor::getCurrentExt()->glReplacementCodeuiVertex3fvSUN(a,b);
}
inline void glReplacementCodeuiColor4ubVertex3fSUN(GLuint  a, GLubyte  b, GLubyte  c, GLubyte  d, GLubyte  e, GLfloat  f, GLfloat  g, GLfloat  h) {
	interceptor::getCurrentExt()->glReplacementCodeuiColor4ubVertex3fSUN(a,b,c,d,e,f,g,h);
}
inline void glReplacementCodeuiColor4ubVertex3fvSUN(const GLuint *a, const GLubyte *b, const GLfloat *c) {
	interceptor::getCurrentExt()->glReplacementCodeuiColor4ubVertex3fvSUN(a,b,c);
}
inline void glReplacementCodeuiColor3fVertex3fSUN(GLuint  a, GLfloat  b, GLfloat  c, GLfloat  d, GLfloat  e, GLfloat  f, GLfloat  g) {
	interceptor::getCurrentExt()->glReplacementCodeuiColor3fVertex3fSUN(a,b,c,d,e,f,g);
}
inline void glReplacementCodeuiColor3fVertex3fvSUN(const GLuint *a, const GLfloat *b, const GLfloat *c) {
	interceptor::getCurrentExt()->glReplacementCodeuiColor3fVertex3fvSUN(a,b,c);
}
inline void glReplacementCodeuiNormal3fVertex3fSUN(GLuint  a, GLfloat  b, GLfloat  c, GLfloat  d, GLfloat  e, GLfloat  f, GLfloat  g) {
	interceptor::getCurrentExt()->glReplacementCodeuiNormal3fVertex3fSUN(a,b,c,d,e,f,g);
}
inline void glReplacementCodeuiNormal3fVertex3fvSUN(const GLuint *a, const GLfloat *b, const GLfloat *c) {
	interceptor::getCurrentExt()->glReplacementCodeuiNormal3fVertex3fvSUN(a,b,c);
}
inline void glReplacementCodeuiColor4fNormal3fVertex3fSUN(GLuint  a, GLfloat  b, GLfloat  c, GLfloat  d, GLfloat  e, GLfloat  f, GLfloat  g, GLfloat  h, GLfloat  i, GLfloat  j, GLfloat  k) {
	interceptor::getCurrentExt()->glReplacementCodeuiColor4fNormal3fVertex3fSUN(a,b,c,d,e,f,g,h,i,j,k);
}
inline void glReplacementCodeuiColor4fNormal3fVertex3fvSUN(const GLuint *a, const GLfloat *b, const GLfloat *c, const GLfloat *d) {
	interceptor::getCurrentExt()->glReplacementCodeuiColor4fNormal3fVertex3fvSUN(a,b,c,d);
}
inline void glReplacementCodeuiTexCoord2fVertex3fSUN(GLuint  a, GLfloat  b, GLfloat  c, GLfloat  d, GLfloat  e, GLfloat  f) {
	interceptor::getCurrentExt()->glReplacementCodeuiTexCoord2fVertex3fSUN(a,b,c,d,e,f);
}
inline void glReplacementCodeuiTexCoord2fVertex3fvSUN(const GLuint *a, const GLfloat *b, const GLfloat *c) {
	interceptor::getCurrentExt()->glReplacementCodeuiTexCoord2fVertex3fvSUN(a,b,c);
}
inline void glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN(GLuint  a, GLfloat  b, GLfloat  c, GLfloat  d, GLfloat  e, GLfloat  f, GLfloat  g, GLfloat  h, GLfloat  i) {
	interceptor::getCurrentExt()->glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN(a,b,c,d,e,f,g,h,i);
}
inline void glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN(const GLuint *a, const GLfloat *b, const GLfloat *c, const GLfloat *d) {
	interceptor::getCurrentExt()->glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN(a,b,c,d);
}
inline void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN(GLuint  a, GLfloat  b, GLfloat  c, GLfloat  d, GLfloat  e, GLfloat  f, GLfloat  g, GLfloat  h, GLfloat  i, GLfloat  j, GLfloat  k, GLfloat  l, GLfloat  m) {
	interceptor::getCurrentExt()->glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN(a,b,c,d,e,f,g,h,i,j,k,l,m);
}
inline void glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN(const GLuint *a, const GLfloat *b, const GLfloat *c, const GLfloat *d, const GLfloat *e) {
	interceptor::getCurrentExt()->glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN(a,b,c,d,e);
}
inline HANDLE wglCreateBufferRegionARB(HDC  a, int  b, UINT  c) {
	return interceptor::getCurrentExt()->wglCreateBufferRegionARB(a,b,c);
}
inline VOID wglDeleteBufferRegionARB(HANDLE  a) {
	interceptor::getCurrentExt()->wglDeleteBufferRegionARB(a);
}
inline BOOL wglSaveBufferRegionARB(HANDLE  a, int  b, int  c, int  d, int  e) {
	return interceptor::getCurrentExt()->wglSaveBufferRegionARB(a,b,c,d,e);
}
inline BOOL wglRestoreBufferRegionARB(HANDLE  a, int  b, int  c, int  d, int  e, int  f, int  g) {
	return interceptor::getCurrentExt()->wglRestoreBufferRegionARB(a,b,c,d,e,f,g);
}
inline HGLRC wglCreateContextAttribsARB(HDC  a, HGLRC  b, const int *c) {
	return interceptor::getCurrentExt()->wglCreateContextAttribsARB(a,b,c);
}
inline const char * wglGetExtensionsStringARB(HDC  a) {
	return interceptor::getCurrentExt()->wglGetExtensionsStringARB(a);
}
inline BOOL wglMakeContextCurrentARB(HDC  a, HDC  b, HGLRC  c) {
	return interceptor::getCurrentExt()->wglMakeContextCurrentARB(a,b,c);
}
inline HDC wglGetCurrentReadDCARB(void) {
	return interceptor::getCurrentExt()->wglGetCurrentReadDCARB();
}
inline HPBUFFERARB wglCreatePbufferARB(HDC  a, int  b, int  c, int  d, const int *e) {
	return interceptor::getCurrentExt()->wglCreatePbufferARB(a,b,c,d,e);
}
inline HDC wglGetPbufferDCARB(HPBUFFERARB  a) {
	return interceptor::getCurrentExt()->wglGetPbufferDCARB(a);
}
inline int wglReleasePbufferDCARB(HPBUFFERARB  a, HDC  b) {
	return interceptor::getCurrentExt()->wglReleasePbufferDCARB(a,b);
}
inline BOOL wglDestroyPbufferARB(HPBUFFERARB  a) {
	return interceptor::getCurrentExt()->wglDestroyPbufferARB(a);
}
inline BOOL wglQueryPbufferARB(HPBUFFERARB  a, int  b, int *c) {
	return interceptor::getCurrentExt()->wglQueryPbufferARB(a,b,c);
}
inline BOOL wglGetPixelFormatAttribivARB(HDC  a, int  b, int  c, UINT  d, const int *e, int *f) {
	return interceptor::getCurrentExt()->wglGetPixelFormatAttribivARB(a,b,c,d,e,f);
}
inline BOOL wglGetPixelFormatAttribfvARB(HDC  a, int  b, int  c, UINT  d, const int *e, FLOAT *f) {
	return interceptor::getCurrentExt()->wglGetPixelFormatAttribfvARB(a,b,c,d,e,f);
}
inline BOOL wglChoosePixelFormatARB(HDC  a, const int *b, const FLOAT *c, UINT  d, int *e, UINT *f) {
	return interceptor::getCurrentExt()->wglChoosePixelFormatARB(a,b,c,d,e,f);
}
inline BOOL wglBindTexImageARB(HPBUFFERARB  a, int  b) {
	return interceptor::getCurrentExt()->wglBindTexImageARB(a,b);
}
inline BOOL wglReleaseTexImageARB(HPBUFFERARB  a, int  b) {
	return interceptor::getCurrentExt()->wglReleaseTexImageARB(a,b);
}
inline BOOL wglSetPbufferAttribARB(HPBUFFERARB  a, const int *b) {
	return interceptor::getCurrentExt()->wglSetPbufferAttribARB(a,b);
}
inline BOOL wglSetStereoEmitterState3DL(HDC  a, UINT  b) {
	return interceptor::getCurrentExt()->wglSetStereoEmitterState3DL(a,b);
}
inline UINT wglGetGPUIDsAMD(UINT  a, UINT *b) {
	return interceptor::getCurrentExt()->wglGetGPUIDsAMD(a,b);
}
inline INT wglGetGPUInfoAMD(UINT  a, int  b, GLenum  c, UINT  d, void *e) {
	return interceptor::getCurrentExt()->wglGetGPUInfoAMD(a,b,c,d,e);
}
inline UINT wglGetContextGPUIDAMD(HGLRC  a) {
	return interceptor::getCurrentExt()->wglGetContextGPUIDAMD(a);
}
inline HGLRC wglCreateAssociatedContextAMD(UINT  a) {
	return interceptor::getCurrentExt()->wglCreateAssociatedContextAMD(a);
}
inline HGLRC wglCreateAssociatedContextAttribsAMD(UINT  a, HGLRC  b, const int *c) {
	return interceptor::getCurrentExt()->wglCreateAssociatedContextAttribsAMD(a,b,c);
}
inline BOOL wglDeleteAssociatedContextAMD(HGLRC  a) {
	return interceptor::getCurrentExt()->wglDeleteAssociatedContextAMD(a);
}
inline BOOL wglMakeAssociatedContextCurrentAMD(HGLRC  a) {
	return interceptor::getCurrentExt()->wglMakeAssociatedContextCurrentAMD(a);
}
inline HGLRC wglGetCurrentAssociatedContextAMD(void) {
	return interceptor::getCurrentExt()->wglGetCurrentAssociatedContextAMD();
}
inline VOID wglBlitContextFramebufferAMD(HGLRC  a, GLint  b, GLint  c, GLint  d, GLint  e, GLint  f, GLint  g, GLint  h, GLint  i, GLbitfield  j, GLenum  k) {
	interceptor::getCurrentExt()->wglBlitContextFramebufferAMD(a,b,c,d,e,f,g,h,i,j,k);
}
inline GLboolean wglCreateDisplayColorTableEXT(GLushort  a) {
	return interceptor::getCurrentExt()->wglCreateDisplayColorTableEXT(a);
}
inline GLboolean wglLoadDisplayColorTableEXT(const GLushort *a, GLuint  b) {
	return interceptor::getCurrentExt()->wglLoadDisplayColorTableEXT(a,b);
}
inline GLboolean wglBindDisplayColorTableEXT(GLushort  a) {
	return interceptor::getCurrentExt()->wglBindDisplayColorTableEXT(a);
}
inline VOID wglDestroyDisplayColorTableEXT(GLushort  a) {
	interceptor::getCurrentExt()->wglDestroyDisplayColorTableEXT(a);
}
inline const char * wglGetExtensionsStringEXT(void) {
	return interceptor::getCurrentExt()->wglGetExtensionsStringEXT();
}
inline BOOL wglMakeContextCurrentEXT(HDC  a, HDC  b, HGLRC  c) {
	return interceptor::getCurrentExt()->wglMakeContextCurrentEXT(a,b,c);
}
inline HDC wglGetCurrentReadDCEXT(void) {
	return interceptor::getCurrentExt()->wglGetCurrentReadDCEXT();
}
inline HPBUFFEREXT wglCreatePbufferEXT(HDC  a, int  b, int  c, int  d, const int *e) {
	return interceptor::getCurrentExt()->wglCreatePbufferEXT(a,b,c,d,e);
}
inline HDC wglGetPbufferDCEXT(HPBUFFEREXT  a) {
	return interceptor::getCurrentExt()->wglGetPbufferDCEXT(a);
}
inline int wglReleasePbufferDCEXT(HPBUFFEREXT  a, HDC  b) {
	return interceptor::getCurrentExt()->wglReleasePbufferDCEXT(a,b);
}
inline BOOL wglDestroyPbufferEXT(HPBUFFEREXT  a) {
	return interceptor::getCurrentExt()->wglDestroyPbufferEXT(a);
}
inline BOOL wglQueryPbufferEXT(HPBUFFEREXT  a, int  b, int *c) {
	return interceptor::getCurrentExt()->wglQueryPbufferEXT(a,b,c);
}
inline BOOL wglGetPixelFormatAttribivEXT(HDC  a, int  b, int  c, UINT  d, int *e, int *f) {
	return interceptor::getCurrentExt()->wglGetPixelFormatAttribivEXT(a,b,c,d,e,f);
}
inline BOOL wglGetPixelFormatAttribfvEXT(HDC  a, int  b, int  c, UINT  d, int *e, FLOAT *f) {
	return interceptor::getCurrentExt()->wglGetPixelFormatAttribfvEXT(a,b,c,d,e,f);
}
inline BOOL wglChoosePixelFormatEXT(HDC  a, const int *b, const FLOAT *c, UINT  d, int *e, UINT *f) {
	return interceptor::getCurrentExt()->wglChoosePixelFormatEXT(a,b,c,d,e,f);
}
inline BOOL wglSwapIntervalEXT(int  a) {
	return interceptor::getCurrentExt()->wglSwapIntervalEXT(a);
}
inline int wglGetSwapIntervalEXT(void) {
	return interceptor::getCurrentExt()->wglGetSwapIntervalEXT();
}
inline BOOL wglGetDigitalVideoParametersI3D(HDC  a, int  b, int *c) {
	return interceptor::getCurrentExt()->wglGetDigitalVideoParametersI3D(a,b,c);
}
inline BOOL wglSetDigitalVideoParametersI3D(HDC  a, int  b, const int *c) {
	return interceptor::getCurrentExt()->wglSetDigitalVideoParametersI3D(a,b,c);
}
inline BOOL wglGetGammaTableParametersI3D(HDC  a, int  b, int *c) {
	return interceptor::getCurrentExt()->wglGetGammaTableParametersI3D(a,b,c);
}
inline BOOL wglSetGammaTableParametersI3D(HDC  a, int  b, const int *c) {
	return interceptor::getCurrentExt()->wglSetGammaTableParametersI3D(a,b,c);
}
inline BOOL wglGetGammaTableI3D(HDC  a, int  b, USHORT *c, USHORT *d, USHORT *e) {
	return interceptor::getCurrentExt()->wglGetGammaTableI3D(a,b,c,d,e);
}
inline BOOL wglSetGammaTableI3D(HDC  a, int  b, const USHORT *c, const USHORT *d, const USHORT *e) {
	return interceptor::getCurrentExt()->wglSetGammaTableI3D(a,b,c,d,e);
}
inline BOOL wglEnableGenlockI3D(HDC  a) {
	return interceptor::getCurrentExt()->wglEnableGenlockI3D(a);
}
inline BOOL wglDisableGenlockI3D(HDC  a) {
	return interceptor::getCurrentExt()->wglDisableGenlockI3D(a);
}
inline BOOL wglIsEnabledGenlockI3D(HDC  a, BOOL *b) {
	return interceptor::getCurrentExt()->wglIsEnabledGenlockI3D(a,b);
}
inline BOOL wglGenlockSourceI3D(HDC  a, UINT  b) {
	return interceptor::getCurrentExt()->wglGenlockSourceI3D(a,b);
}
inline BOOL wglGetGenlockSourceI3D(HDC  a, UINT *b) {
	return interceptor::getCurrentExt()->wglGetGenlockSourceI3D(a,b);
}
inline BOOL wglGenlockSourceEdgeI3D(HDC  a, UINT  b) {
	return interceptor::getCurrentExt()->wglGenlockSourceEdgeI3D(a,b);
}
inline BOOL wglGetGenlockSourceEdgeI3D(HDC  a, UINT *b) {
	return interceptor::getCurrentExt()->wglGetGenlockSourceEdgeI3D(a,b);
}
inline BOOL wglGenlockSampleRateI3D(HDC  a, UINT  b) {
	return interceptor::getCurrentExt()->wglGenlockSampleRateI3D(a,b);
}
inline BOOL wglGetGenlockSampleRateI3D(HDC  a, UINT *b) {
	return interceptor::getCurrentExt()->wglGetGenlockSampleRateI3D(a,b);
}
inline BOOL wglGenlockSourceDelayI3D(HDC  a, UINT  b) {
	return interceptor::getCurrentExt()->wglGenlockSourceDelayI3D(a,b);
}
inline BOOL wglGetGenlockSourceDelayI3D(HDC  a, UINT *b) {
	return interceptor::getCurrentExt()->wglGetGenlockSourceDelayI3D(a,b);
}
inline BOOL wglQueryGenlockMaxSourceDelayI3D(HDC  a, UINT *b, UINT *c) {
	return interceptor::getCurrentExt()->wglQueryGenlockMaxSourceDelayI3D(a,b,c);
}
inline LPVOID wglCreateImageBufferI3D(HDC  a, DWORD  b, UINT  c) {
	return interceptor::getCurrentExt()->wglCreateImageBufferI3D(a,b,c);
}
inline BOOL wglDestroyImageBufferI3D(HDC  a, LPVOID  b) {
	return interceptor::getCurrentExt()->wglDestroyImageBufferI3D(a,b);
}
inline BOOL wglAssociateImageBufferEventsI3D(HDC  a, const HANDLE *b, const LPVOID *c, const DWORD *d, UINT  e) {
	return interceptor::getCurrentExt()->wglAssociateImageBufferEventsI3D(a,b,c,d,e);
}
inline BOOL wglReleaseImageBufferEventsI3D(HDC  a, const LPVOID *b, UINT  c) {
	return interceptor::getCurrentExt()->wglReleaseImageBufferEventsI3D(a,b,c);
}
inline BOOL wglEnableFrameLockI3D(void) {
	return interceptor::getCurrentExt()->wglEnableFrameLockI3D();
}
inline BOOL wglDisableFrameLockI3D(void) {
	return interceptor::getCurrentExt()->wglDisableFrameLockI3D();
}
inline BOOL wglIsEnabledFrameLockI3D(BOOL *a) {
	return interceptor::getCurrentExt()->wglIsEnabledFrameLockI3D(a);
}
inline BOOL wglQueryFrameLockMasterI3D(BOOL *a) {
	return interceptor::getCurrentExt()->wglQueryFrameLockMasterI3D(a);
}
inline BOOL wglGetFrameUsageI3D(float *a) {
	return interceptor::getCurrentExt()->wglGetFrameUsageI3D(a);
}
inline BOOL wglBeginFrameTrackingI3D(void) {
	return interceptor::getCurrentExt()->wglBeginFrameTrackingI3D();
}
inline BOOL wglEndFrameTrackingI3D(void) {
	return interceptor::getCurrentExt()->wglEndFrameTrackingI3D();
}
inline BOOL wglQueryFrameTrackingI3D(DWORD *a, DWORD *b, float *c) {
	return interceptor::getCurrentExt()->wglQueryFrameTrackingI3D(a,b,c);
}
inline BOOL wglDXSetResourceShareHandleNV(void *a, HANDLE  b) {
	return interceptor::getCurrentExt()->wglDXSetResourceShareHandleNV(a,b);
}
inline HANDLE wglDXOpenDeviceNV(void *a) {
	return interceptor::getCurrentExt()->wglDXOpenDeviceNV(a);
}
inline BOOL wglDXCloseDeviceNV(HANDLE  a) {
	return interceptor::getCurrentExt()->wglDXCloseDeviceNV(a);
}
inline HANDLE wglDXRegisterObjectNV(HANDLE  a, void *b, GLuint  c, GLenum  d, GLenum  e) {
	return interceptor::getCurrentExt()->wglDXRegisterObjectNV(a,b,c,d,e);
}
inline BOOL wglDXUnregisterObjectNV(HANDLE  a, HANDLE  b) {
	return interceptor::getCurrentExt()->wglDXUnregisterObjectNV(a,b);
}
inline BOOL wglDXObjectAccessNV(HANDLE  a, GLenum  b) {
	return interceptor::getCurrentExt()->wglDXObjectAccessNV(a,b);
}
inline BOOL wglDXLockObjectsNV(HANDLE  a, GLint  b, HANDLE *c) {
	return interceptor::getCurrentExt()->wglDXLockObjectsNV(a,b,c);
}
inline BOOL wglDXUnlockObjectsNV(HANDLE  a, GLint  b, HANDLE *c) {
	return interceptor::getCurrentExt()->wglDXUnlockObjectsNV(a,b,c);
}
inline BOOL wglCopyImageSubDataNV(HGLRC  a, GLuint  b, GLenum  c, GLint  d, GLint  e, GLint  f, GLint  g, HGLRC  h, GLuint  i, GLenum  j, GLint  k, GLint  l, GLint  m, GLint  n, GLsizei  o, GLsizei  p, GLsizei  q) {
	return interceptor::getCurrentExt()->wglCopyImageSubDataNV(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q);
}
inline BOOL wglDelayBeforeSwapNV(HDC  a, GLfloat  b) {
	return interceptor::getCurrentExt()->wglDelayBeforeSwapNV(a,b);
}
inline BOOL wglEnumGpusNV(UINT  a, HGPUNV *b) {
	return interceptor::getCurrentExt()->wglEnumGpusNV(a,b);
}
inline BOOL wglEnumGpuDevicesNV(HGPUNV  a, UINT  b, PGPU_DEVICE  c) {
	return interceptor::getCurrentExt()->wglEnumGpuDevicesNV(a,b,c);
}
inline HDC wglCreateAffinityDCNV(const HGPUNV *a) {
	return interceptor::getCurrentExt()->wglCreateAffinityDCNV(a);
}
inline BOOL wglEnumGpusFromAffinityDCNV(HDC  a, UINT  b, HGPUNV *c) {
	return interceptor::getCurrentExt()->wglEnumGpusFromAffinityDCNV(a,b,c);
}
inline BOOL wglDeleteDCNV(HDC  a) {
	return interceptor::getCurrentExt()->wglDeleteDCNV(a);
}
inline int wglEnumerateVideoDevicesNV(HDC  a, HVIDEOOUTPUTDEVICENV *b) {
	return interceptor::getCurrentExt()->wglEnumerateVideoDevicesNV(a,b);
}
inline BOOL wglBindVideoDeviceNV(HDC  a, unsigned int  b, HVIDEOOUTPUTDEVICENV  c, const int *d) {
	return interceptor::getCurrentExt()->wglBindVideoDeviceNV(a,b,c,d);
}
inline BOOL wglQueryCurrentContextNV(int  a, int *b) {
	return interceptor::getCurrentExt()->wglQueryCurrentContextNV(a,b);
}
inline BOOL wglJoinSwapGroupNV(HDC  a, GLuint  b) {
	return interceptor::getCurrentExt()->wglJoinSwapGroupNV(a,b);
}
inline BOOL wglBindSwapBarrierNV(GLuint  a, GLuint  b) {
	return interceptor::getCurrentExt()->wglBindSwapBarrierNV(a,b);
}
inline BOOL wglQuerySwapGroupNV(HDC  a, GLuint *b, GLuint *c) {
	return interceptor::getCurrentExt()->wglQuerySwapGroupNV(a,b,c);
}
inline BOOL wglQueryMaxSwapGroupsNV(HDC  a, GLuint *b, GLuint *c) {
	return interceptor::getCurrentExt()->wglQueryMaxSwapGroupsNV(a,b,c);
}
inline BOOL wglQueryFrameCountNV(HDC  a, GLuint *b) {
	return interceptor::getCurrentExt()->wglQueryFrameCountNV(a,b);
}
inline BOOL wglResetFrameCountNV(HDC  a) {
	return interceptor::getCurrentExt()->wglResetFrameCountNV(a);
}
inline void * wglAllocateMemoryNV(GLsizei  a, GLfloat  b, GLfloat  c, GLfloat  d) {
	return interceptor::getCurrentExt()->wglAllocateMemoryNV(a,b,c,d);
}
inline void wglFreeMemoryNV(void *a) {
	interceptor::getCurrentExt()->wglFreeMemoryNV(a);
}
inline BOOL wglBindVideoCaptureDeviceNV(UINT  a, HVIDEOINPUTDEVICENV  b) {
	return interceptor::getCurrentExt()->wglBindVideoCaptureDeviceNV(a,b);
}
inline UINT wglEnumerateVideoCaptureDevicesNV(HDC  a, HVIDEOINPUTDEVICENV *b) {
	return interceptor::getCurrentExt()->wglEnumerateVideoCaptureDevicesNV(a,b);
}
inline BOOL wglLockVideoCaptureDeviceNV(HDC  a, HVIDEOINPUTDEVICENV  b) {
	return interceptor::getCurrentExt()->wglLockVideoCaptureDeviceNV(a,b);
}
inline BOOL wglQueryVideoCaptureDeviceNV(HDC  a, HVIDEOINPUTDEVICENV  b, int  c, int *d) {
	return interceptor::getCurrentExt()->wglQueryVideoCaptureDeviceNV(a,b,c,d);
}
inline BOOL wglReleaseVideoCaptureDeviceNV(HDC  a, HVIDEOINPUTDEVICENV  b) {
	return interceptor::getCurrentExt()->wglReleaseVideoCaptureDeviceNV(a,b);
}
inline BOOL wglGetVideoDeviceNV(HDC  a, int  b, HPVIDEODEV *c) {
	return interceptor::getCurrentExt()->wglGetVideoDeviceNV(a,b,c);
}
inline BOOL wglReleaseVideoDeviceNV(HPVIDEODEV  a) {
	return interceptor::getCurrentExt()->wglReleaseVideoDeviceNV(a);
}
inline BOOL wglBindVideoImageNV(HPVIDEODEV  a, HPBUFFERARB  b, int  c) {
	return interceptor::getCurrentExt()->wglBindVideoImageNV(a,b,c);
}
inline BOOL wglReleaseVideoImageNV(HPBUFFERARB  a, int  b) {
	return interceptor::getCurrentExt()->wglReleaseVideoImageNV(a,b);
}
inline BOOL wglSendPbufferToVideoNV(HPBUFFERARB  a, int  b, unsigned long *c, BOOL  d) {
	return interceptor::getCurrentExt()->wglSendPbufferToVideoNV(a,b,c,d);
}
inline BOOL wglGetVideoInfoNV(HPVIDEODEV  a, unsigned long *b, unsigned long *c) {
	return interceptor::getCurrentExt()->wglGetVideoInfoNV(a,b,c);
}
inline BOOL wglGetSyncValuesOML(HDC  a, INT64 *b, INT64 *c, INT64 *d) {
	return interceptor::getCurrentExt()->wglGetSyncValuesOML(a,b,c,d);
}
inline BOOL wglGetMscRateOML(HDC  a, INT32 *b, INT32 *c) {
	return interceptor::getCurrentExt()->wglGetMscRateOML(a,b,c);
}
inline INT64 wglSwapBuffersMscOML(HDC  a, INT64  b, INT64  c, INT64  d) {
	return interceptor::getCurrentExt()->wglSwapBuffersMscOML(a,b,c,d);
}
inline INT64 wglSwapLayerBuffersMscOML(HDC  a, int  b, INT64  c, INT64  d, INT64  e) {
	return interceptor::getCurrentExt()->wglSwapLayerBuffersMscOML(a,b,c,d,e);
}
inline BOOL wglWaitForMscOML(HDC  a, INT64  b, INT64  c, INT64  d, INT64 *e, INT64 *f, INT64 *g) {
	return interceptor::getCurrentExt()->wglWaitForMscOML(a,b,c,d,e,f,g);
}
inline BOOL wglWaitForSbcOML(HDC  a, INT64  b, INT64 *c, INT64 *d, INT64 *e) {
	return interceptor::getCurrentExt()->wglWaitForSbcOML(a,b,c,d,e);
}

}//namespace glext

//----------------------------------------------------------------------------

#endif//__glexpub_h
