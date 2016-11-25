#include "glexfp.h"
#include <stdlib.h>

/**
 * This is an automatically generated file: do not edit
 * Generated on Fri Nov 25 22:11:55 2016
 * J.Ward, Computer Science, University of Hull, UK
 * Visit the OpenGL Extensions Registry for detailed
 * extension specifications:
 *   http://www.opengl.org/registry
 */


//----------------------------------------------------------------------------

glexfp::glexfp() {
	Load();
}//glexfp

//----------------------------------------------------------------------------

long glexfp::Count() const {
	return m_count;
}//Count

//----------------------------------------------------------------------------

long glexfp::Known() const {
	return 2516;
}//Known

//----------------------------------------------------------------------------

GLAPI void APIENTRY stub_glDrawRangeElements (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices) {
}
GLAPI void APIENTRY stub_glTexImage3D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels) {
}
GLAPI void APIENTRY stub_glTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels) {
}
GLAPI void APIENTRY stub_glCopyTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glActiveTexture (GLenum texture) {
}
GLAPI void APIENTRY stub_glSampleCoverage (GLfloat value, GLboolean invert) {
}
GLAPI void APIENTRY stub_glCompressedTexImage3D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data) {
}
GLAPI void APIENTRY stub_glCompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data) {
}
GLAPI void APIENTRY stub_glCompressedTexImage1D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data) {
}
GLAPI void APIENTRY stub_glCompressedTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data) {
}
GLAPI void APIENTRY stub_glCompressedTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data) {
}
GLAPI void APIENTRY stub_glCompressedTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data) {
}
GLAPI void APIENTRY stub_glGetCompressedTexImage (GLenum target, GLint level, void *img) {
}
GLAPI void APIENTRY stub_glClientActiveTexture (GLenum texture) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1d (GLenum target, GLdouble s) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1dv (GLenum target, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1f (GLenum target, GLfloat s) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1fv (GLenum target, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1i (GLenum target, GLint s) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1iv (GLenum target, const GLint *v) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1s (GLenum target, GLshort s) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1sv (GLenum target, const GLshort *v) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2d (GLenum target, GLdouble s, GLdouble t) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2dv (GLenum target, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2f (GLenum target, GLfloat s, GLfloat t) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2fv (GLenum target, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2i (GLenum target, GLint s, GLint t) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2iv (GLenum target, const GLint *v) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2s (GLenum target, GLshort s, GLshort t) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2sv (GLenum target, const GLshort *v) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3d (GLenum target, GLdouble s, GLdouble t, GLdouble r) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3dv (GLenum target, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3f (GLenum target, GLfloat s, GLfloat t, GLfloat r) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3fv (GLenum target, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3i (GLenum target, GLint s, GLint t, GLint r) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3iv (GLenum target, const GLint *v) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3s (GLenum target, GLshort s, GLshort t, GLshort r) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3sv (GLenum target, const GLshort *v) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4d (GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4dv (GLenum target, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4f (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4fv (GLenum target, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4i (GLenum target, GLint s, GLint t, GLint r, GLint q) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4iv (GLenum target, const GLint *v) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4s (GLenum target, GLshort s, GLshort t, GLshort r, GLshort q) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4sv (GLenum target, const GLshort *v) {
}
GLAPI void APIENTRY stub_glLoadTransposeMatrixf (const GLfloat *m) {
}
GLAPI void APIENTRY stub_glLoadTransposeMatrixd (const GLdouble *m) {
}
GLAPI void APIENTRY stub_glMultTransposeMatrixf (const GLfloat *m) {
}
GLAPI void APIENTRY stub_glMultTransposeMatrixd (const GLdouble *m) {
}
GLAPI void APIENTRY stub_glBlendFuncSeparate (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) {
}
GLAPI void APIENTRY stub_glMultiDrawArrays (GLenum mode, const GLint *first, const GLsizei *count, GLsizei drawcount) {
}
GLAPI void APIENTRY stub_glMultiDrawElements (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount) {
}
GLAPI void APIENTRY stub_glPointParameterf (GLenum pname, GLfloat param) {
}
GLAPI void APIENTRY stub_glPointParameterfv (GLenum pname, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glPointParameteri (GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glPointParameteriv (GLenum pname, const GLint *params) {
}
GLAPI void APIENTRY stub_glFogCoordf (GLfloat coord) {
}
GLAPI void APIENTRY stub_glFogCoordfv (const GLfloat *coord) {
}
GLAPI void APIENTRY stub_glFogCoordd (GLdouble coord) {
}
GLAPI void APIENTRY stub_glFogCoorddv (const GLdouble *coord) {
}
GLAPI void APIENTRY stub_glFogCoordPointer (GLenum type, GLsizei stride, const void *pointer) {
}
GLAPI void APIENTRY stub_glSecondaryColor3b (GLbyte red, GLbyte green, GLbyte blue) {
}
GLAPI void APIENTRY stub_glSecondaryColor3bv (const GLbyte *v) {
}
GLAPI void APIENTRY stub_glSecondaryColor3d (GLdouble red, GLdouble green, GLdouble blue) {
}
GLAPI void APIENTRY stub_glSecondaryColor3dv (const GLdouble *v) {
}
GLAPI void APIENTRY stub_glSecondaryColor3f (GLfloat red, GLfloat green, GLfloat blue) {
}
GLAPI void APIENTRY stub_glSecondaryColor3fv (const GLfloat *v) {
}
GLAPI void APIENTRY stub_glSecondaryColor3i (GLint red, GLint green, GLint blue) {
}
GLAPI void APIENTRY stub_glSecondaryColor3iv (const GLint *v) {
}
GLAPI void APIENTRY stub_glSecondaryColor3s (GLshort red, GLshort green, GLshort blue) {
}
GLAPI void APIENTRY stub_glSecondaryColor3sv (const GLshort *v) {
}
GLAPI void APIENTRY stub_glSecondaryColor3ub (GLubyte red, GLubyte green, GLubyte blue) {
}
GLAPI void APIENTRY stub_glSecondaryColor3ubv (const GLubyte *v) {
}
GLAPI void APIENTRY stub_glSecondaryColor3ui (GLuint red, GLuint green, GLuint blue) {
}
GLAPI void APIENTRY stub_glSecondaryColor3uiv (const GLuint *v) {
}
GLAPI void APIENTRY stub_glSecondaryColor3us (GLushort red, GLushort green, GLushort blue) {
}
GLAPI void APIENTRY stub_glSecondaryColor3usv (const GLushort *v) {
}
GLAPI void APIENTRY stub_glSecondaryColorPointer (GLint size, GLenum type, GLsizei stride, const void *pointer) {
}
GLAPI void APIENTRY stub_glWindowPos2d (GLdouble x, GLdouble y) {
}
GLAPI void APIENTRY stub_glWindowPos2dv (const GLdouble *v) {
}
GLAPI void APIENTRY stub_glWindowPos2f (GLfloat x, GLfloat y) {
}
GLAPI void APIENTRY stub_glWindowPos2fv (const GLfloat *v) {
}
GLAPI void APIENTRY stub_glWindowPos2i (GLint x, GLint y) {
}
GLAPI void APIENTRY stub_glWindowPos2iv (const GLint *v) {
}
GLAPI void APIENTRY stub_glWindowPos2s (GLshort x, GLshort y) {
}
GLAPI void APIENTRY stub_glWindowPos2sv (const GLshort *v) {
}
GLAPI void APIENTRY stub_glWindowPos3d (GLdouble x, GLdouble y, GLdouble z) {
}
GLAPI void APIENTRY stub_glWindowPos3dv (const GLdouble *v) {
}
GLAPI void APIENTRY stub_glWindowPos3f (GLfloat x, GLfloat y, GLfloat z) {
}
GLAPI void APIENTRY stub_glWindowPos3fv (const GLfloat *v) {
}
GLAPI void APIENTRY stub_glWindowPos3i (GLint x, GLint y, GLint z) {
}
GLAPI void APIENTRY stub_glWindowPos3iv (const GLint *v) {
}
GLAPI void APIENTRY stub_glWindowPos3s (GLshort x, GLshort y, GLshort z) {
}
GLAPI void APIENTRY stub_glWindowPos3sv (const GLshort *v) {
}
GLAPI void APIENTRY stub_glBlendColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) {
}
GLAPI void APIENTRY stub_glBlendEquation (GLenum mode) {
}
GLAPI void APIENTRY stub_glGenQueries (GLsizei n, GLuint *ids) {
}
GLAPI void APIENTRY stub_glDeleteQueries (GLsizei n, const GLuint *ids) {
}
GLAPI GLboolean APIENTRY stub_glIsQuery (GLuint id) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glBeginQuery (GLenum target, GLuint id) {
}
GLAPI void APIENTRY stub_glEndQuery (GLenum target) {
}
GLAPI void APIENTRY stub_glGetQueryiv (GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetQueryObjectiv (GLuint id, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetQueryObjectuiv (GLuint id, GLenum pname, GLuint *params) {
}
GLAPI void APIENTRY stub_glBindBuffer (GLenum target, GLuint buffer) {
}
GLAPI void APIENTRY stub_glDeleteBuffers (GLsizei n, const GLuint *buffers) {
}
GLAPI void APIENTRY stub_glGenBuffers (GLsizei n, GLuint *buffers) {
}
GLAPI GLboolean APIENTRY stub_glIsBuffer (GLuint buffer) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glBufferData (GLenum target, GLsizeiptr size, const void *data, GLenum usage) {
}
GLAPI void APIENTRY stub_glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const void *data) {
}
GLAPI void APIENTRY stub_glGetBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, void *data) {
}
GLAPI void *APIENTRY stub_glMapBuffer (GLenum target, GLenum access) {
	return (void *)0;
}
GLAPI GLboolean APIENTRY stub_glUnmapBuffer (GLenum target) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glGetBufferParameteriv (GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetBufferPointerv (GLenum target, GLenum pname, void **params) {
}
GLAPI void APIENTRY stub_glBlendEquationSeparate (GLenum modeRGB, GLenum modeAlpha) {
}
GLAPI void APIENTRY stub_glDrawBuffers (GLsizei n, const GLenum *bufs) {
}
GLAPI void APIENTRY stub_glStencilOpSeparate (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass) {
}
GLAPI void APIENTRY stub_glStencilFuncSeparate (GLenum face, GLenum func, GLint ref, GLuint mask) {
}
GLAPI void APIENTRY stub_glStencilMaskSeparate (GLenum face, GLuint mask) {
}
GLAPI void APIENTRY stub_glAttachShader (GLuint program, GLuint shader) {
}
GLAPI void APIENTRY stub_glBindAttribLocation (GLuint program, GLuint index, const GLchar *name) {
}
GLAPI void APIENTRY stub_glCompileShader (GLuint shader) {
}
GLAPI GLuint APIENTRY stub_glCreateProgram (void) {
	return (GLuint)0;
}
GLAPI GLuint APIENTRY stub_glCreateShader (GLenum type) {
	return (GLuint)0;
}
GLAPI void APIENTRY stub_glDeleteProgram (GLuint program) {
}
GLAPI void APIENTRY stub_glDeleteShader (GLuint shader) {
}
GLAPI void APIENTRY stub_glDetachShader (GLuint program, GLuint shader) {
}
GLAPI void APIENTRY stub_glDisableVertexAttribArray (GLuint index) {
}
GLAPI void APIENTRY stub_glEnableVertexAttribArray (GLuint index) {
}
GLAPI void APIENTRY stub_glGetActiveAttrib (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name) {
}
GLAPI void APIENTRY stub_glGetActiveUniform (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name) {
}
GLAPI void APIENTRY stub_glGetAttachedShaders (GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders) {
}
GLAPI GLint APIENTRY stub_glGetAttribLocation (GLuint program, const GLchar *name) {
	return (GLint)0;
}
GLAPI void APIENTRY stub_glGetProgramiv (GLuint program, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetProgramInfoLog (GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog) {
}
GLAPI void APIENTRY stub_glGetShaderiv (GLuint shader, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetShaderInfoLog (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog) {
}
GLAPI void APIENTRY stub_glGetShaderSource (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source) {
}
GLAPI GLint APIENTRY stub_glGetUniformLocation (GLuint program, const GLchar *name) {
	return (GLint)0;
}
GLAPI void APIENTRY stub_glGetUniformfv (GLuint program, GLint location, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetUniformiv (GLuint program, GLint location, GLint *params) {
}
GLAPI void APIENTRY stub_glGetVertexAttribdv (GLuint index, GLenum pname, GLdouble *params) {
}
GLAPI void APIENTRY stub_glGetVertexAttribfv (GLuint index, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetVertexAttribiv (GLuint index, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetVertexAttribPointerv (GLuint index, GLenum pname, void **pointer) {
}
GLAPI GLboolean APIENTRY stub_glIsProgram (GLuint program) {
	return (GLboolean)0;
}
GLAPI GLboolean APIENTRY stub_glIsShader (GLuint shader) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glLinkProgram (GLuint program) {
}
GLAPI void APIENTRY stub_glShaderSource (GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length) {
}
GLAPI void APIENTRY stub_glUseProgram (GLuint program) {
}
GLAPI void APIENTRY stub_glUniform1f (GLint location, GLfloat v0) {
}
GLAPI void APIENTRY stub_glUniform2f (GLint location, GLfloat v0, GLfloat v1) {
}
GLAPI void APIENTRY stub_glUniform3f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2) {
}
GLAPI void APIENTRY stub_glUniform4f (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) {
}
GLAPI void APIENTRY stub_glUniform1i (GLint location, GLint v0) {
}
GLAPI void APIENTRY stub_glUniform2i (GLint location, GLint v0, GLint v1) {
}
GLAPI void APIENTRY stub_glUniform3i (GLint location, GLint v0, GLint v1, GLint v2) {
}
GLAPI void APIENTRY stub_glUniform4i (GLint location, GLint v0, GLint v1, GLint v2, GLint v3) {
}
GLAPI void APIENTRY stub_glUniform1fv (GLint location, GLsizei count, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glUniform2fv (GLint location, GLsizei count, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glUniform3fv (GLint location, GLsizei count, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glUniform4fv (GLint location, GLsizei count, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glUniform1iv (GLint location, GLsizei count, const GLint *value) {
}
GLAPI void APIENTRY stub_glUniform2iv (GLint location, GLsizei count, const GLint *value) {
}
GLAPI void APIENTRY stub_glUniform3iv (GLint location, GLsizei count, const GLint *value) {
}
GLAPI void APIENTRY stub_glUniform4iv (GLint location, GLsizei count, const GLint *value) {
}
GLAPI void APIENTRY stub_glUniformMatrix2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glUniformMatrix3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glUniformMatrix4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glValidateProgram (GLuint program) {
}
GLAPI void APIENTRY stub_glVertexAttrib1d (GLuint index, GLdouble x) {
}
GLAPI void APIENTRY stub_glVertexAttrib1dv (GLuint index, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib1f (GLuint index, GLfloat x) {
}
GLAPI void APIENTRY stub_glVertexAttrib1fv (GLuint index, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib1s (GLuint index, GLshort x) {
}
GLAPI void APIENTRY stub_glVertexAttrib1sv (GLuint index, const GLshort *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib2d (GLuint index, GLdouble x, GLdouble y) {
}
GLAPI void APIENTRY stub_glVertexAttrib2dv (GLuint index, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib2f (GLuint index, GLfloat x, GLfloat y) {
}
GLAPI void APIENTRY stub_glVertexAttrib2fv (GLuint index, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib2s (GLuint index, GLshort x, GLshort y) {
}
GLAPI void APIENTRY stub_glVertexAttrib2sv (GLuint index, const GLshort *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib3d (GLuint index, GLdouble x, GLdouble y, GLdouble z) {
}
GLAPI void APIENTRY stub_glVertexAttrib3dv (GLuint index, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib3f (GLuint index, GLfloat x, GLfloat y, GLfloat z) {
}
GLAPI void APIENTRY stub_glVertexAttrib3fv (GLuint index, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib3s (GLuint index, GLshort x, GLshort y, GLshort z) {
}
GLAPI void APIENTRY stub_glVertexAttrib3sv (GLuint index, const GLshort *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib4Nbv (GLuint index, const GLbyte *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib4Niv (GLuint index, const GLint *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib4Nsv (GLuint index, const GLshort *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib4Nub (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w) {
}
GLAPI void APIENTRY stub_glVertexAttrib4Nubv (GLuint index, const GLubyte *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib4Nuiv (GLuint index, const GLuint *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib4Nusv (GLuint index, const GLushort *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib4bv (GLuint index, const GLbyte *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib4d (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
}
GLAPI void APIENTRY stub_glVertexAttrib4dv (GLuint index, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib4f (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
}
GLAPI void APIENTRY stub_glVertexAttrib4fv (GLuint index, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib4iv (GLuint index, const GLint *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib4s (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w) {
}
GLAPI void APIENTRY stub_glVertexAttrib4sv (GLuint index, const GLshort *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib4ubv (GLuint index, const GLubyte *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib4uiv (GLuint index, const GLuint *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib4usv (GLuint index, const GLushort *v) {
}
GLAPI void APIENTRY stub_glVertexAttribPointer (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer) {
}
GLAPI void APIENTRY stub_glUniformMatrix2x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glUniformMatrix3x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glUniformMatrix2x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glUniformMatrix4x2fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glUniformMatrix3x4fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glUniformMatrix4x3fv (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glColorMaski (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a) {
}
GLAPI void APIENTRY stub_glGetBooleani_v (GLenum target, GLuint index, GLboolean *data) {
}
GLAPI void APIENTRY stub_glGetIntegeri_v (GLenum target, GLuint index, GLint *data) {
}
GLAPI void APIENTRY stub_glEnablei (GLenum target, GLuint index) {
}
GLAPI void APIENTRY stub_glDisablei (GLenum target, GLuint index) {
}
GLAPI GLboolean APIENTRY stub_glIsEnabledi (GLenum target, GLuint index) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glBeginTransformFeedback (GLenum primitiveMode) {
}
GLAPI void APIENTRY stub_glEndTransformFeedback (void) {
}
GLAPI void APIENTRY stub_glBindBufferRange (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) {
}
GLAPI void APIENTRY stub_glBindBufferBase (GLenum target, GLuint index, GLuint buffer) {
}
GLAPI void APIENTRY stub_glTransformFeedbackVaryings (GLuint program, GLsizei count, const GLchar *const*varyings, GLenum bufferMode) {
}
GLAPI void APIENTRY stub_glGetTransformFeedbackVarying (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name) {
}
GLAPI void APIENTRY stub_glClampColor (GLenum target, GLenum clamp) {
}
GLAPI void APIENTRY stub_glBeginConditionalRender (GLuint id, GLenum mode) {
}
GLAPI void APIENTRY stub_glEndConditionalRender (void) {
}
GLAPI void APIENTRY stub_glVertexAttribIPointer (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer) {
}
GLAPI void APIENTRY stub_glGetVertexAttribIiv (GLuint index, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetVertexAttribIuiv (GLuint index, GLenum pname, GLuint *params) {
}
GLAPI void APIENTRY stub_glVertexAttribI1i (GLuint index, GLint x) {
}
GLAPI void APIENTRY stub_glVertexAttribI2i (GLuint index, GLint x, GLint y) {
}
GLAPI void APIENTRY stub_glVertexAttribI3i (GLuint index, GLint x, GLint y, GLint z) {
}
GLAPI void APIENTRY stub_glVertexAttribI4i (GLuint index, GLint x, GLint y, GLint z, GLint w) {
}
GLAPI void APIENTRY stub_glVertexAttribI1ui (GLuint index, GLuint x) {
}
GLAPI void APIENTRY stub_glVertexAttribI2ui (GLuint index, GLuint x, GLuint y) {
}
GLAPI void APIENTRY stub_glVertexAttribI3ui (GLuint index, GLuint x, GLuint y, GLuint z) {
}
GLAPI void APIENTRY stub_glVertexAttribI4ui (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) {
}
GLAPI void APIENTRY stub_glVertexAttribI1iv (GLuint index, const GLint *v) {
}
GLAPI void APIENTRY stub_glVertexAttribI2iv (GLuint index, const GLint *v) {
}
GLAPI void APIENTRY stub_glVertexAttribI3iv (GLuint index, const GLint *v) {
}
GLAPI void APIENTRY stub_glVertexAttribI4iv (GLuint index, const GLint *v) {
}
GLAPI void APIENTRY stub_glVertexAttribI1uiv (GLuint index, const GLuint *v) {
}
GLAPI void APIENTRY stub_glVertexAttribI2uiv (GLuint index, const GLuint *v) {
}
GLAPI void APIENTRY stub_glVertexAttribI3uiv (GLuint index, const GLuint *v) {
}
GLAPI void APIENTRY stub_glVertexAttribI4uiv (GLuint index, const GLuint *v) {
}
GLAPI void APIENTRY stub_glVertexAttribI4bv (GLuint index, const GLbyte *v) {
}
GLAPI void APIENTRY stub_glVertexAttribI4sv (GLuint index, const GLshort *v) {
}
GLAPI void APIENTRY stub_glVertexAttribI4ubv (GLuint index, const GLubyte *v) {
}
GLAPI void APIENTRY stub_glVertexAttribI4usv (GLuint index, const GLushort *v) {
}
GLAPI void APIENTRY stub_glGetUniformuiv (GLuint program, GLint location, GLuint *params) {
}
GLAPI void APIENTRY stub_glBindFragDataLocation (GLuint program, GLuint color, const GLchar *name) {
}
GLAPI GLint APIENTRY stub_glGetFragDataLocation (GLuint program, const GLchar *name) {
	return (GLint)0;
}
GLAPI void APIENTRY stub_glUniform1ui (GLint location, GLuint v0) {
}
GLAPI void APIENTRY stub_glUniform2ui (GLint location, GLuint v0, GLuint v1) {
}
GLAPI void APIENTRY stub_glUniform3ui (GLint location, GLuint v0, GLuint v1, GLuint v2) {
}
GLAPI void APIENTRY stub_glUniform4ui (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) {
}
GLAPI void APIENTRY stub_glUniform1uiv (GLint location, GLsizei count, const GLuint *value) {
}
GLAPI void APIENTRY stub_glUniform2uiv (GLint location, GLsizei count, const GLuint *value) {
}
GLAPI void APIENTRY stub_glUniform3uiv (GLint location, GLsizei count, const GLuint *value) {
}
GLAPI void APIENTRY stub_glUniform4uiv (GLint location, GLsizei count, const GLuint *value) {
}
GLAPI void APIENTRY stub_glTexParameterIiv (GLenum target, GLenum pname, const GLint *params) {
}
GLAPI void APIENTRY stub_glTexParameterIuiv (GLenum target, GLenum pname, const GLuint *params) {
}
GLAPI void APIENTRY stub_glGetTexParameterIiv (GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetTexParameterIuiv (GLenum target, GLenum pname, GLuint *params) {
}
GLAPI void APIENTRY stub_glClearBufferiv (GLenum buffer, GLint drawbuffer, const GLint *value) {
}
GLAPI void APIENTRY stub_glClearBufferuiv (GLenum buffer, GLint drawbuffer, const GLuint *value) {
}
GLAPI void APIENTRY stub_glClearBufferfv (GLenum buffer, GLint drawbuffer, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glClearBufferfi (GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil) {
}
GLAPI const GLubyte *APIENTRY stub_glGetStringi (GLenum name, GLuint index) {
	return (const GLubyte *)0;
}
GLAPI GLboolean APIENTRY stub_glIsRenderbuffer (GLuint renderbuffer) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glBindRenderbuffer (GLenum target, GLuint renderbuffer) {
}
GLAPI void APIENTRY stub_glDeleteRenderbuffers (GLsizei n, const GLuint *renderbuffers) {
}
GLAPI void APIENTRY stub_glGenRenderbuffers (GLsizei n, GLuint *renderbuffers) {
}
GLAPI void APIENTRY stub_glRenderbufferStorage (GLenum target, GLenum internalformat, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glGetRenderbufferParameteriv (GLenum target, GLenum pname, GLint *params) {
}
GLAPI GLboolean APIENTRY stub_glIsFramebuffer (GLuint framebuffer) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glBindFramebuffer (GLenum target, GLuint framebuffer) {
}
GLAPI void APIENTRY stub_glDeleteFramebuffers (GLsizei n, const GLuint *framebuffers) {
}
GLAPI void APIENTRY stub_glGenFramebuffers (GLsizei n, GLuint *framebuffers) {
}
GLAPI GLenum APIENTRY stub_glCheckFramebufferStatus (GLenum target) {
	return (GLenum)0;
}
GLAPI void APIENTRY stub_glFramebufferTexture1D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) {
}
GLAPI void APIENTRY stub_glFramebufferTexture2D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) {
}
GLAPI void APIENTRY stub_glFramebufferTexture3D (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset) {
}
GLAPI void APIENTRY stub_glFramebufferRenderbuffer (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) {
}
GLAPI void APIENTRY stub_glGetFramebufferAttachmentParameteriv (GLenum target, GLenum attachment, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGenerateMipmap (GLenum target) {
}
GLAPI void APIENTRY stub_glBlitFramebuffer (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) {
}
GLAPI void APIENTRY stub_glRenderbufferStorageMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glFramebufferTextureLayer (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) {
}
GLAPI void *APIENTRY stub_glMapBufferRange (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access) {
	return (void *)0;
}
GLAPI void APIENTRY stub_glFlushMappedBufferRange (GLenum target, GLintptr offset, GLsizeiptr length) {
}
GLAPI void APIENTRY stub_glBindVertexArray (GLuint array) {
}
GLAPI void APIENTRY stub_glDeleteVertexArrays (GLsizei n, const GLuint *arrays) {
}
GLAPI void APIENTRY stub_glGenVertexArrays (GLsizei n, GLuint *arrays) {
}
GLAPI GLboolean APIENTRY stub_glIsVertexArray (GLuint array) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glDrawArraysInstanced (GLenum mode, GLint first, GLsizei count, GLsizei instancecount) {
}
GLAPI void APIENTRY stub_glDrawElementsInstanced (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount) {
}
GLAPI void APIENTRY stub_glTexBuffer (GLenum target, GLenum internalformat, GLuint buffer) {
}
GLAPI void APIENTRY stub_glPrimitiveRestartIndex (GLuint index) {
}
GLAPI void APIENTRY stub_glCopyBufferSubData (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) {
}
GLAPI void APIENTRY stub_glGetUniformIndices (GLuint program, GLsizei uniformCount, const GLchar *const*uniformNames, GLuint *uniformIndices) {
}
GLAPI void APIENTRY stub_glGetActiveUniformsiv (GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetActiveUniformName (GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName) {
}
GLAPI GLuint APIENTRY stub_glGetUniformBlockIndex (GLuint program, const GLchar *uniformBlockName) {
	return (GLuint)0;
}
GLAPI void APIENTRY stub_glGetActiveUniformBlockiv (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetActiveUniformBlockName (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName) {
}
GLAPI void APIENTRY stub_glUniformBlockBinding (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding) {
}
GLAPI void APIENTRY stub_glDrawElementsBaseVertex (GLenum mode, GLsizei count, GLenum type, const void *indices, GLint basevertex) {
}
GLAPI void APIENTRY stub_glDrawRangeElementsBaseVertex (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices, GLint basevertex) {
}
GLAPI void APIENTRY stub_glDrawElementsInstancedBaseVertex (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex) {
}
GLAPI void APIENTRY stub_glMultiDrawElementsBaseVertex (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount, const GLint *basevertex) {
}
GLAPI void APIENTRY stub_glProvokingVertex (GLenum mode) {
}
GLAPI GLsync APIENTRY stub_glFenceSync (GLenum condition, GLbitfield flags) {
	return (GLsync)0;
}
GLAPI GLboolean APIENTRY stub_glIsSync (GLsync sync) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glDeleteSync (GLsync sync) {
}
GLAPI GLenum APIENTRY stub_glClientWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout) {
	return (GLenum)0;
}
GLAPI void APIENTRY stub_glWaitSync (GLsync sync, GLbitfield flags, GLuint64 timeout) {
}
GLAPI void APIENTRY stub_glGetInteger64v (GLenum pname, GLint64 *data) {
}
GLAPI void APIENTRY stub_glGetSynciv (GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values) {
}
GLAPI void APIENTRY stub_glGetInteger64i_v (GLenum target, GLuint index, GLint64 *data) {
}
GLAPI void APIENTRY stub_glGetBufferParameteri64v (GLenum target, GLenum pname, GLint64 *params) {
}
GLAPI void APIENTRY stub_glFramebufferTexture (GLenum target, GLenum attachment, GLuint texture, GLint level) {
}
GLAPI void APIENTRY stub_glTexImage2DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) {
}
GLAPI void APIENTRY stub_glTexImage3DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) {
}
GLAPI void APIENTRY stub_glGetMultisamplefv (GLenum pname, GLuint index, GLfloat *val) {
}
GLAPI void APIENTRY stub_glSampleMaski (GLuint maskNumber, GLbitfield mask) {
}
GLAPI void APIENTRY stub_glBindFragDataLocationIndexed (GLuint program, GLuint colorNumber, GLuint index, const GLchar *name) {
}
GLAPI GLint APIENTRY stub_glGetFragDataIndex (GLuint program, const GLchar *name) {
	return (GLint)0;
}
GLAPI void APIENTRY stub_glGenSamplers (GLsizei count, GLuint *samplers) {
}
GLAPI void APIENTRY stub_glDeleteSamplers (GLsizei count, const GLuint *samplers) {
}
GLAPI GLboolean APIENTRY stub_glIsSampler (GLuint sampler) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glBindSampler (GLuint unit, GLuint sampler) {
}
GLAPI void APIENTRY stub_glSamplerParameteri (GLuint sampler, GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glSamplerParameteriv (GLuint sampler, GLenum pname, const GLint *param) {
}
GLAPI void APIENTRY stub_glSamplerParameterf (GLuint sampler, GLenum pname, GLfloat param) {
}
GLAPI void APIENTRY stub_glSamplerParameterfv (GLuint sampler, GLenum pname, const GLfloat *param) {
}
GLAPI void APIENTRY stub_glSamplerParameterIiv (GLuint sampler, GLenum pname, const GLint *param) {
}
GLAPI void APIENTRY stub_glSamplerParameterIuiv (GLuint sampler, GLenum pname, const GLuint *param) {
}
GLAPI void APIENTRY stub_glGetSamplerParameteriv (GLuint sampler, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetSamplerParameterIiv (GLuint sampler, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetSamplerParameterfv (GLuint sampler, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetSamplerParameterIuiv (GLuint sampler, GLenum pname, GLuint *params) {
}
GLAPI void APIENTRY stub_glQueryCounter (GLuint id, GLenum target) {
}
GLAPI void APIENTRY stub_glGetQueryObjecti64v (GLuint id, GLenum pname, GLint64 *params) {
}
GLAPI void APIENTRY stub_glGetQueryObjectui64v (GLuint id, GLenum pname, GLuint64 *params) {
}
GLAPI void APIENTRY stub_glVertexAttribDivisor (GLuint index, GLuint divisor) {
}
GLAPI void APIENTRY stub_glVertexAttribP1ui (GLuint index, GLenum type, GLboolean normalized, GLuint value) {
}
GLAPI void APIENTRY stub_glVertexAttribP1uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint *value) {
}
GLAPI void APIENTRY stub_glVertexAttribP2ui (GLuint index, GLenum type, GLboolean normalized, GLuint value) {
}
GLAPI void APIENTRY stub_glVertexAttribP2uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint *value) {
}
GLAPI void APIENTRY stub_glVertexAttribP3ui (GLuint index, GLenum type, GLboolean normalized, GLuint value) {
}
GLAPI void APIENTRY stub_glVertexAttribP3uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint *value) {
}
GLAPI void APIENTRY stub_glVertexAttribP4ui (GLuint index, GLenum type, GLboolean normalized, GLuint value) {
}
GLAPI void APIENTRY stub_glVertexAttribP4uiv (GLuint index, GLenum type, GLboolean normalized, const GLuint *value) {
}
GLAPI void APIENTRY stub_glVertexP2ui (GLenum type, GLuint value) {
}
GLAPI void APIENTRY stub_glVertexP2uiv (GLenum type, const GLuint *value) {
}
GLAPI void APIENTRY stub_glVertexP3ui (GLenum type, GLuint value) {
}
GLAPI void APIENTRY stub_glVertexP3uiv (GLenum type, const GLuint *value) {
}
GLAPI void APIENTRY stub_glVertexP4ui (GLenum type, GLuint value) {
}
GLAPI void APIENTRY stub_glVertexP4uiv (GLenum type, const GLuint *value) {
}
GLAPI void APIENTRY stub_glTexCoordP1ui (GLenum type, GLuint coords) {
}
GLAPI void APIENTRY stub_glTexCoordP1uiv (GLenum type, const GLuint *coords) {
}
GLAPI void APIENTRY stub_glTexCoordP2ui (GLenum type, GLuint coords) {
}
GLAPI void APIENTRY stub_glTexCoordP2uiv (GLenum type, const GLuint *coords) {
}
GLAPI void APIENTRY stub_glTexCoordP3ui (GLenum type, GLuint coords) {
}
GLAPI void APIENTRY stub_glTexCoordP3uiv (GLenum type, const GLuint *coords) {
}
GLAPI void APIENTRY stub_glTexCoordP4ui (GLenum type, GLuint coords) {
}
GLAPI void APIENTRY stub_glTexCoordP4uiv (GLenum type, const GLuint *coords) {
}
GLAPI void APIENTRY stub_glMultiTexCoordP1ui (GLenum texture, GLenum type, GLuint coords) {
}
GLAPI void APIENTRY stub_glMultiTexCoordP1uiv (GLenum texture, GLenum type, const GLuint *coords) {
}
GLAPI void APIENTRY stub_glMultiTexCoordP2ui (GLenum texture, GLenum type, GLuint coords) {
}
GLAPI void APIENTRY stub_glMultiTexCoordP2uiv (GLenum texture, GLenum type, const GLuint *coords) {
}
GLAPI void APIENTRY stub_glMultiTexCoordP3ui (GLenum texture, GLenum type, GLuint coords) {
}
GLAPI void APIENTRY stub_glMultiTexCoordP3uiv (GLenum texture, GLenum type, const GLuint *coords) {
}
GLAPI void APIENTRY stub_glMultiTexCoordP4ui (GLenum texture, GLenum type, GLuint coords) {
}
GLAPI void APIENTRY stub_glMultiTexCoordP4uiv (GLenum texture, GLenum type, const GLuint *coords) {
}
GLAPI void APIENTRY stub_glNormalP3ui (GLenum type, GLuint coords) {
}
GLAPI void APIENTRY stub_glNormalP3uiv (GLenum type, const GLuint *coords) {
}
GLAPI void APIENTRY stub_glColorP3ui (GLenum type, GLuint color) {
}
GLAPI void APIENTRY stub_glColorP3uiv (GLenum type, const GLuint *color) {
}
GLAPI void APIENTRY stub_glColorP4ui (GLenum type, GLuint color) {
}
GLAPI void APIENTRY stub_glColorP4uiv (GLenum type, const GLuint *color) {
}
GLAPI void APIENTRY stub_glSecondaryColorP3ui (GLenum type, GLuint color) {
}
GLAPI void APIENTRY stub_glSecondaryColorP3uiv (GLenum type, const GLuint *color) {
}
GLAPI void APIENTRY stub_glMinSampleShading (GLfloat value) {
}
GLAPI void APIENTRY stub_glBlendEquationi (GLuint buf, GLenum mode) {
}
GLAPI void APIENTRY stub_glBlendEquationSeparatei (GLuint buf, GLenum modeRGB, GLenum modeAlpha) {
}
GLAPI void APIENTRY stub_glBlendFunci (GLuint buf, GLenum src, GLenum dst) {
}
GLAPI void APIENTRY stub_glBlendFuncSeparatei (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) {
}
GLAPI void APIENTRY stub_glDrawArraysIndirect (GLenum mode, const void *indirect) {
}
GLAPI void APIENTRY stub_glDrawElementsIndirect (GLenum mode, GLenum type, const void *indirect) {
}
GLAPI void APIENTRY stub_glUniform1d (GLint location, GLdouble x) {
}
GLAPI void APIENTRY stub_glUniform2d (GLint location, GLdouble x, GLdouble y) {
}
GLAPI void APIENTRY stub_glUniform3d (GLint location, GLdouble x, GLdouble y, GLdouble z) {
}
GLAPI void APIENTRY stub_glUniform4d (GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
}
GLAPI void APIENTRY stub_glUniform1dv (GLint location, GLsizei count, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glUniform2dv (GLint location, GLsizei count, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glUniform3dv (GLint location, GLsizei count, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glUniform4dv (GLint location, GLsizei count, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glUniformMatrix2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glUniformMatrix3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glUniformMatrix4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glUniformMatrix2x3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glUniformMatrix2x4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glUniformMatrix3x2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glUniformMatrix3x4dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glUniformMatrix4x2dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glUniformMatrix4x3dv (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glGetUniformdv (GLuint program, GLint location, GLdouble *params) {
}
GLAPI GLint APIENTRY stub_glGetSubroutineUniformLocation (GLuint program, GLenum shadertype, const GLchar *name) {
	return (GLint)0;
}
GLAPI GLuint APIENTRY stub_glGetSubroutineIndex (GLuint program, GLenum shadertype, const GLchar *name) {
	return (GLuint)0;
}
GLAPI void APIENTRY stub_glGetActiveSubroutineUniformiv (GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values) {
}
GLAPI void APIENTRY stub_glGetActiveSubroutineUniformName (GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name) {
}
GLAPI void APIENTRY stub_glGetActiveSubroutineName (GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name) {
}
GLAPI void APIENTRY stub_glUniformSubroutinesuiv (GLenum shadertype, GLsizei count, const GLuint *indices) {
}
GLAPI void APIENTRY stub_glGetUniformSubroutineuiv (GLenum shadertype, GLint location, GLuint *params) {
}
GLAPI void APIENTRY stub_glGetProgramStageiv (GLuint program, GLenum shadertype, GLenum pname, GLint *values) {
}
GLAPI void APIENTRY stub_glPatchParameteri (GLenum pname, GLint value) {
}
GLAPI void APIENTRY stub_glPatchParameterfv (GLenum pname, const GLfloat *values) {
}
GLAPI void APIENTRY stub_glBindTransformFeedback (GLenum target, GLuint id) {
}
GLAPI void APIENTRY stub_glDeleteTransformFeedbacks (GLsizei n, const GLuint *ids) {
}
GLAPI void APIENTRY stub_glGenTransformFeedbacks (GLsizei n, GLuint *ids) {
}
GLAPI GLboolean APIENTRY stub_glIsTransformFeedback (GLuint id) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glPauseTransformFeedback (void) {
}
GLAPI void APIENTRY stub_glResumeTransformFeedback (void) {
}
GLAPI void APIENTRY stub_glDrawTransformFeedback (GLenum mode, GLuint id) {
}
GLAPI void APIENTRY stub_glDrawTransformFeedbackStream (GLenum mode, GLuint id, GLuint stream) {
}
GLAPI void APIENTRY stub_glBeginQueryIndexed (GLenum target, GLuint index, GLuint id) {
}
GLAPI void APIENTRY stub_glEndQueryIndexed (GLenum target, GLuint index) {
}
GLAPI void APIENTRY stub_glGetQueryIndexediv (GLenum target, GLuint index, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glReleaseShaderCompiler (void) {
}
GLAPI void APIENTRY stub_glShaderBinary (GLsizei count, const GLuint *shaders, GLenum binaryformat, const void *binary, GLsizei length) {
}
GLAPI void APIENTRY stub_glGetShaderPrecisionFormat (GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision) {
}
GLAPI void APIENTRY stub_glDepthRangef (GLfloat n, GLfloat f) {
}
GLAPI void APIENTRY stub_glClearDepthf (GLfloat d) {
}
GLAPI void APIENTRY stub_glGetProgramBinary (GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary) {
}
GLAPI void APIENTRY stub_glProgramBinary (GLuint program, GLenum binaryFormat, const void *binary, GLsizei length) {
}
GLAPI void APIENTRY stub_glProgramParameteri (GLuint program, GLenum pname, GLint value) {
}
GLAPI void APIENTRY stub_glUseProgramStages (GLuint pipeline, GLbitfield stages, GLuint program) {
}
GLAPI void APIENTRY stub_glActiveShaderProgram (GLuint pipeline, GLuint program) {
}
GLAPI GLuint APIENTRY stub_glCreateShaderProgramv (GLenum type, GLsizei count, const GLchar *const*strings) {
	return (GLuint)0;
}
GLAPI void APIENTRY stub_glBindProgramPipeline (GLuint pipeline) {
}
GLAPI void APIENTRY stub_glDeleteProgramPipelines (GLsizei n, const GLuint *pipelines) {
}
GLAPI void APIENTRY stub_glGenProgramPipelines (GLsizei n, GLuint *pipelines) {
}
GLAPI GLboolean APIENTRY stub_glIsProgramPipeline (GLuint pipeline) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glGetProgramPipelineiv (GLuint pipeline, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glProgramUniform1i (GLuint program, GLint location, GLint v0) {
}
GLAPI void APIENTRY stub_glProgramUniform1iv (GLuint program, GLint location, GLsizei count, const GLint *value) {
}
GLAPI void APIENTRY stub_glProgramUniform1f (GLuint program, GLint location, GLfloat v0) {
}
GLAPI void APIENTRY stub_glProgramUniform1fv (GLuint program, GLint location, GLsizei count, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glProgramUniform1d (GLuint program, GLint location, GLdouble v0) {
}
GLAPI void APIENTRY stub_glProgramUniform1dv (GLuint program, GLint location, GLsizei count, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glProgramUniform1ui (GLuint program, GLint location, GLuint v0) {
}
GLAPI void APIENTRY stub_glProgramUniform1uiv (GLuint program, GLint location, GLsizei count, const GLuint *value) {
}
GLAPI void APIENTRY stub_glProgramUniform2i (GLuint program, GLint location, GLint v0, GLint v1) {
}
GLAPI void APIENTRY stub_glProgramUniform2iv (GLuint program, GLint location, GLsizei count, const GLint *value) {
}
GLAPI void APIENTRY stub_glProgramUniform2f (GLuint program, GLint location, GLfloat v0, GLfloat v1) {
}
GLAPI void APIENTRY stub_glProgramUniform2fv (GLuint program, GLint location, GLsizei count, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glProgramUniform2d (GLuint program, GLint location, GLdouble v0, GLdouble v1) {
}
GLAPI void APIENTRY stub_glProgramUniform2dv (GLuint program, GLint location, GLsizei count, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glProgramUniform2ui (GLuint program, GLint location, GLuint v0, GLuint v1) {
}
GLAPI void APIENTRY stub_glProgramUniform2uiv (GLuint program, GLint location, GLsizei count, const GLuint *value) {
}
GLAPI void APIENTRY stub_glProgramUniform3i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2) {
}
GLAPI void APIENTRY stub_glProgramUniform3iv (GLuint program, GLint location, GLsizei count, const GLint *value) {
}
GLAPI void APIENTRY stub_glProgramUniform3f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2) {
}
GLAPI void APIENTRY stub_glProgramUniform3fv (GLuint program, GLint location, GLsizei count, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glProgramUniform3d (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2) {
}
GLAPI void APIENTRY stub_glProgramUniform3dv (GLuint program, GLint location, GLsizei count, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glProgramUniform3ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2) {
}
GLAPI void APIENTRY stub_glProgramUniform3uiv (GLuint program, GLint location, GLsizei count, const GLuint *value) {
}
GLAPI void APIENTRY stub_glProgramUniform4i (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3) {
}
GLAPI void APIENTRY stub_glProgramUniform4iv (GLuint program, GLint location, GLsizei count, const GLint *value) {
}
GLAPI void APIENTRY stub_glProgramUniform4f (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) {
}
GLAPI void APIENTRY stub_glProgramUniform4fv (GLuint program, GLint location, GLsizei count, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glProgramUniform4d (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3) {
}
GLAPI void APIENTRY stub_glProgramUniform4dv (GLuint program, GLint location, GLsizei count, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glProgramUniform4ui (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) {
}
GLAPI void APIENTRY stub_glProgramUniform4uiv (GLuint program, GLint location, GLsizei count, const GLuint *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix2x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix3x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix2x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix4x2fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix3x4fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix4x3fv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix2x3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix3x2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix2x4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix4x2dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix3x4dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix4x3dv (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glValidateProgramPipeline (GLuint pipeline) {
}
GLAPI void APIENTRY stub_glGetProgramPipelineInfoLog (GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog) {
}
GLAPI void APIENTRY stub_glVertexAttribL1d (GLuint index, GLdouble x) {
}
GLAPI void APIENTRY stub_glVertexAttribL2d (GLuint index, GLdouble x, GLdouble y) {
}
GLAPI void APIENTRY stub_glVertexAttribL3d (GLuint index, GLdouble x, GLdouble y, GLdouble z) {
}
GLAPI void APIENTRY stub_glVertexAttribL4d (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
}
GLAPI void APIENTRY stub_glVertexAttribL1dv (GLuint index, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glVertexAttribL2dv (GLuint index, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glVertexAttribL3dv (GLuint index, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glVertexAttribL4dv (GLuint index, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glVertexAttribLPointer (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer) {
}
GLAPI void APIENTRY stub_glGetVertexAttribLdv (GLuint index, GLenum pname, GLdouble *params) {
}
GLAPI void APIENTRY stub_glViewportArrayv (GLuint first, GLsizei count, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glViewportIndexedf (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h) {
}
GLAPI void APIENTRY stub_glViewportIndexedfv (GLuint index, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glScissorArrayv (GLuint first, GLsizei count, const GLint *v) {
}
GLAPI void APIENTRY stub_glScissorIndexed (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glScissorIndexedv (GLuint index, const GLint *v) {
}
GLAPI void APIENTRY stub_glDepthRangeArrayv (GLuint first, GLsizei count, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glDepthRangeIndexed (GLuint index, GLdouble n, GLdouble f) {
}
GLAPI void APIENTRY stub_glGetFloati_v (GLenum target, GLuint index, GLfloat *data) {
}
GLAPI void APIENTRY stub_glGetDoublei_v (GLenum target, GLuint index, GLdouble *data) {
}
GLAPI void APIENTRY stub_glDrawArraysInstancedBaseInstance (GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance) {
}
GLAPI void APIENTRY stub_glDrawElementsInstancedBaseInstance (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLuint baseinstance) {
}
GLAPI void APIENTRY stub_glDrawElementsInstancedBaseVertexBaseInstance (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance) {
}
GLAPI void APIENTRY stub_glGetInternalformativ (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint *params) {
}
GLAPI void APIENTRY stub_glGetActiveAtomicCounterBufferiv (GLuint program, GLuint bufferIndex, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glBindImageTexture (GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format) {
}
GLAPI void APIENTRY stub_glMemoryBarrier (GLbitfield barriers) {
}
GLAPI void APIENTRY stub_glTexStorage1D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width) {
}
GLAPI void APIENTRY stub_glTexStorage2D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glTexStorage3D (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) {
}
GLAPI void APIENTRY stub_glDrawTransformFeedbackInstanced (GLenum mode, GLuint id, GLsizei instancecount) {
}
GLAPI void APIENTRY stub_glDrawTransformFeedbackStreamInstanced (GLenum mode, GLuint id, GLuint stream, GLsizei instancecount) {
}
GLAPI void APIENTRY stub_glClearBufferData (GLenum target, GLenum internalformat, GLenum format, GLenum type, const void *data) {
}
GLAPI void APIENTRY stub_glClearBufferSubData (GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data) {
}
GLAPI void APIENTRY stub_glDispatchCompute (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z) {
}
GLAPI void APIENTRY stub_glDispatchComputeIndirect (GLintptr indirect) {
}
GLAPI void APIENTRY stub_glCopyImageSubData (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth) {
}
GLAPI void APIENTRY stub_glFramebufferParameteri (GLenum target, GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glGetFramebufferParameteriv (GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetInternalformati64v (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 *params) {
}
GLAPI void APIENTRY stub_glInvalidateTexSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth) {
}
GLAPI void APIENTRY stub_glInvalidateTexImage (GLuint texture, GLint level) {
}
GLAPI void APIENTRY stub_glInvalidateBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr length) {
}
GLAPI void APIENTRY stub_glInvalidateBufferData (GLuint buffer) {
}
GLAPI void APIENTRY stub_glInvalidateFramebuffer (GLenum target, GLsizei numAttachments, const GLenum *attachments) {
}
GLAPI void APIENTRY stub_glInvalidateSubFramebuffer (GLenum target, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glMultiDrawArraysIndirect (GLenum mode, const void *indirect, GLsizei drawcount, GLsizei stride) {
}
GLAPI void APIENTRY stub_glMultiDrawElementsIndirect (GLenum mode, GLenum type, const void *indirect, GLsizei drawcount, GLsizei stride) {
}
GLAPI void APIENTRY stub_glGetProgramInterfaceiv (GLuint program, GLenum programInterface, GLenum pname, GLint *params) {
}
GLAPI GLuint APIENTRY stub_glGetProgramResourceIndex (GLuint program, GLenum programInterface, const GLchar *name) {
	return (GLuint)0;
}
GLAPI void APIENTRY stub_glGetProgramResourceName (GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name) {
}
GLAPI void APIENTRY stub_glGetProgramResourceiv (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei bufSize, GLsizei *length, GLint *params) {
}
GLAPI GLint APIENTRY stub_glGetProgramResourceLocation (GLuint program, GLenum programInterface, const GLchar *name) {
	return (GLint)0;
}
GLAPI GLint APIENTRY stub_glGetProgramResourceLocationIndex (GLuint program, GLenum programInterface, const GLchar *name) {
	return (GLint)0;
}
GLAPI void APIENTRY stub_glShaderStorageBlockBinding (GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding) {
}
GLAPI void APIENTRY stub_glTexBufferRange (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size) {
}
GLAPI void APIENTRY stub_glTexStorage2DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) {
}
GLAPI void APIENTRY stub_glTexStorage3DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) {
}
GLAPI void APIENTRY stub_glTextureView (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers) {
}
GLAPI void APIENTRY stub_glBindVertexBuffer (GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride) {
}
GLAPI void APIENTRY stub_glVertexAttribFormat (GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset) {
}
GLAPI void APIENTRY stub_glVertexAttribIFormat (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) {
}
GLAPI void APIENTRY stub_glVertexAttribLFormat (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) {
}
GLAPI void APIENTRY stub_glVertexAttribBinding (GLuint attribindex, GLuint bindingindex) {
}
GLAPI void APIENTRY stub_glVertexBindingDivisor (GLuint bindingindex, GLuint divisor) {
}
GLAPI void APIENTRY stub_glDebugMessageControl (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled) {
}
GLAPI void APIENTRY stub_glDebugMessageInsert (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf) {
}
GLAPI void APIENTRY stub_glDebugMessageCallback (GLDEBUGPROC callback, const void *userParam) {
}
GLAPI GLuint APIENTRY stub_glGetDebugMessageLog (GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog) {
	return (GLuint)0;
}
GLAPI void APIENTRY stub_glPushDebugGroup (GLenum source, GLuint id, GLsizei length, const GLchar *message) {
}
GLAPI void APIENTRY stub_glPopDebugGroup (void) {
}
GLAPI void APIENTRY stub_glObjectLabel (GLenum identifier, GLuint name, GLsizei length, const GLchar *label) {
}
GLAPI void APIENTRY stub_glGetObjectLabel (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label) {
}
GLAPI void APIENTRY stub_glObjectPtrLabel (const void *ptr, GLsizei length, const GLchar *label) {
}
GLAPI void APIENTRY stub_glGetObjectPtrLabel (const void *ptr, GLsizei bufSize, GLsizei *length, GLchar *label) {
}
GLAPI void APIENTRY stub_glBufferStorage (GLenum target, GLsizeiptr size, const void *data, GLbitfield flags) {
}
GLAPI void APIENTRY stub_glClearTexImage (GLuint texture, GLint level, GLenum format, GLenum type, const void *data) {
}
GLAPI void APIENTRY stub_glClearTexSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data) {
}
GLAPI void APIENTRY stub_glBindBuffersBase (GLenum target, GLuint first, GLsizei count, const GLuint *buffers) {
}
GLAPI void APIENTRY stub_glBindBuffersRange (GLenum target, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizeiptr *sizes) {
}
GLAPI void APIENTRY stub_glBindTextures (GLuint first, GLsizei count, const GLuint *textures) {
}
GLAPI void APIENTRY stub_glBindSamplers (GLuint first, GLsizei count, const GLuint *samplers) {
}
GLAPI void APIENTRY stub_glBindImageTextures (GLuint first, GLsizei count, const GLuint *textures) {
}
GLAPI void APIENTRY stub_glBindVertexBuffers (GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides) {
}
GLAPI void APIENTRY stub_glClipControl (GLenum origin, GLenum depth) {
}
GLAPI void APIENTRY stub_glCreateTransformFeedbacks (GLsizei n, GLuint *ids) {
}
GLAPI void APIENTRY stub_glTransformFeedbackBufferBase (GLuint xfb, GLuint index, GLuint buffer) {
}
GLAPI void APIENTRY stub_glTransformFeedbackBufferRange (GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) {
}
GLAPI void APIENTRY stub_glGetTransformFeedbackiv (GLuint xfb, GLenum pname, GLint *param) {
}
GLAPI void APIENTRY stub_glGetTransformFeedbacki_v (GLuint xfb, GLenum pname, GLuint index, GLint *param) {
}
GLAPI void APIENTRY stub_glGetTransformFeedbacki64_v (GLuint xfb, GLenum pname, GLuint index, GLint64 *param) {
}
GLAPI void APIENTRY stub_glCreateBuffers (GLsizei n, GLuint *buffers) {
}
GLAPI void APIENTRY stub_glNamedBufferStorage (GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags) {
}
GLAPI void APIENTRY stub_glNamedBufferData (GLuint buffer, GLsizeiptr size, const void *data, GLenum usage) {
}
GLAPI void APIENTRY stub_glNamedBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data) {
}
GLAPI void APIENTRY stub_glCopyNamedBufferSubData (GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) {
}
GLAPI void APIENTRY stub_glClearNamedBufferData (GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data) {
}
GLAPI void APIENTRY stub_glClearNamedBufferSubData (GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data) {
}
GLAPI void *APIENTRY stub_glMapNamedBuffer (GLuint buffer, GLenum access) {
	return (void *)0;
}
GLAPI void *APIENTRY stub_glMapNamedBufferRange (GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access) {
	return (void *)0;
}
GLAPI GLboolean APIENTRY stub_glUnmapNamedBuffer (GLuint buffer) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glFlushMappedNamedBufferRange (GLuint buffer, GLintptr offset, GLsizeiptr length) {
}
GLAPI void APIENTRY stub_glGetNamedBufferParameteriv (GLuint buffer, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetNamedBufferParameteri64v (GLuint buffer, GLenum pname, GLint64 *params) {
}
GLAPI void APIENTRY stub_glGetNamedBufferPointerv (GLuint buffer, GLenum pname, void **params) {
}
GLAPI void APIENTRY stub_glGetNamedBufferSubData (GLuint buffer, GLintptr offset, GLsizeiptr size, void *data) {
}
GLAPI void APIENTRY stub_glCreateFramebuffers (GLsizei n, GLuint *framebuffers) {
}
GLAPI void APIENTRY stub_glNamedFramebufferRenderbuffer (GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) {
}
GLAPI void APIENTRY stub_glNamedFramebufferParameteri (GLuint framebuffer, GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glNamedFramebufferTexture (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level) {
}
GLAPI void APIENTRY stub_glNamedFramebufferTextureLayer (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer) {
}
GLAPI void APIENTRY stub_glNamedFramebufferDrawBuffer (GLuint framebuffer, GLenum buf) {
}
GLAPI void APIENTRY stub_glNamedFramebufferDrawBuffers (GLuint framebuffer, GLsizei n, const GLenum *bufs) {
}
GLAPI void APIENTRY stub_glNamedFramebufferReadBuffer (GLuint framebuffer, GLenum src) {
}
GLAPI void APIENTRY stub_glInvalidateNamedFramebufferData (GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments) {
}
GLAPI void APIENTRY stub_glInvalidateNamedFramebufferSubData (GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glClearNamedFramebufferiv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint *value) {
}
GLAPI void APIENTRY stub_glClearNamedFramebufferuiv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint *value) {
}
GLAPI void APIENTRY stub_glClearNamedFramebufferfv (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glClearNamedFramebufferfi (GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil) {
}
GLAPI void APIENTRY stub_glBlitNamedFramebuffer (GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) {
}
GLAPI GLenum APIENTRY stub_glCheckNamedFramebufferStatus (GLuint framebuffer, GLenum target) {
	return (GLenum)0;
}
GLAPI void APIENTRY stub_glGetNamedFramebufferParameteriv (GLuint framebuffer, GLenum pname, GLint *param) {
}
GLAPI void APIENTRY stub_glGetNamedFramebufferAttachmentParameteriv (GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glCreateRenderbuffers (GLsizei n, GLuint *renderbuffers) {
}
GLAPI void APIENTRY stub_glNamedRenderbufferStorage (GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glNamedRenderbufferStorageMultisample (GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glGetNamedRenderbufferParameteriv (GLuint renderbuffer, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glCreateTextures (GLenum target, GLsizei n, GLuint *textures) {
}
GLAPI void APIENTRY stub_glTextureBuffer (GLuint texture, GLenum internalformat, GLuint buffer) {
}
GLAPI void APIENTRY stub_glTextureBufferRange (GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size) {
}
GLAPI void APIENTRY stub_glTextureStorage1D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width) {
}
GLAPI void APIENTRY stub_glTextureStorage2D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glTextureStorage3D (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) {
}
GLAPI void APIENTRY stub_glTextureStorage2DMultisample (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) {
}
GLAPI void APIENTRY stub_glTextureStorage3DMultisample (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) {
}
GLAPI void APIENTRY stub_glTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels) {
}
GLAPI void APIENTRY stub_glTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels) {
}
GLAPI void APIENTRY stub_glTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels) {
}
GLAPI void APIENTRY stub_glCompressedTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data) {
}
GLAPI void APIENTRY stub_glCompressedTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data) {
}
GLAPI void APIENTRY stub_glCompressedTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data) {
}
GLAPI void APIENTRY stub_glCopyTextureSubImage1D (GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) {
}
GLAPI void APIENTRY stub_glCopyTextureSubImage2D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glCopyTextureSubImage3D (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glTextureParameterf (GLuint texture, GLenum pname, GLfloat param) {
}
GLAPI void APIENTRY stub_glTextureParameterfv (GLuint texture, GLenum pname, const GLfloat *param) {
}
GLAPI void APIENTRY stub_glTextureParameteri (GLuint texture, GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glTextureParameterIiv (GLuint texture, GLenum pname, const GLint *params) {
}
GLAPI void APIENTRY stub_glTextureParameterIuiv (GLuint texture, GLenum pname, const GLuint *params) {
}
GLAPI void APIENTRY stub_glTextureParameteriv (GLuint texture, GLenum pname, const GLint *param) {
}
GLAPI void APIENTRY stub_glGenerateTextureMipmap (GLuint texture) {
}
GLAPI void APIENTRY stub_glBindTextureUnit (GLuint unit, GLuint texture) {
}
GLAPI void APIENTRY stub_glGetTextureImage (GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels) {
}
GLAPI void APIENTRY stub_glGetCompressedTextureImage (GLuint texture, GLint level, GLsizei bufSize, void *pixels) {
}
GLAPI void APIENTRY stub_glGetTextureLevelParameterfv (GLuint texture, GLint level, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetTextureLevelParameteriv (GLuint texture, GLint level, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetTextureParameterfv (GLuint texture, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetTextureParameterIiv (GLuint texture, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetTextureParameterIuiv (GLuint texture, GLenum pname, GLuint *params) {
}
GLAPI void APIENTRY stub_glGetTextureParameteriv (GLuint texture, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glCreateVertexArrays (GLsizei n, GLuint *arrays) {
}
GLAPI void APIENTRY stub_glDisableVertexArrayAttrib (GLuint vaobj, GLuint index) {
}
GLAPI void APIENTRY stub_glEnableVertexArrayAttrib (GLuint vaobj, GLuint index) {
}
GLAPI void APIENTRY stub_glVertexArrayElementBuffer (GLuint vaobj, GLuint buffer) {
}
GLAPI void APIENTRY stub_glVertexArrayVertexBuffer (GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride) {
}
GLAPI void APIENTRY stub_glVertexArrayVertexBuffers (GLuint vaobj, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides) {
}
GLAPI void APIENTRY stub_glVertexArrayAttribBinding (GLuint vaobj, GLuint attribindex, GLuint bindingindex) {
}
GLAPI void APIENTRY stub_glVertexArrayAttribFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset) {
}
GLAPI void APIENTRY stub_glVertexArrayAttribIFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) {
}
GLAPI void APIENTRY stub_glVertexArrayAttribLFormat (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) {
}
GLAPI void APIENTRY stub_glVertexArrayBindingDivisor (GLuint vaobj, GLuint bindingindex, GLuint divisor) {
}
GLAPI void APIENTRY stub_glGetVertexArrayiv (GLuint vaobj, GLenum pname, GLint *param) {
}
GLAPI void APIENTRY stub_glGetVertexArrayIndexediv (GLuint vaobj, GLuint index, GLenum pname, GLint *param) {
}
GLAPI void APIENTRY stub_glGetVertexArrayIndexed64iv (GLuint vaobj, GLuint index, GLenum pname, GLint64 *param) {
}
GLAPI void APIENTRY stub_glCreateSamplers (GLsizei n, GLuint *samplers) {
}
GLAPI void APIENTRY stub_glCreateProgramPipelines (GLsizei n, GLuint *pipelines) {
}
GLAPI void APIENTRY stub_glCreateQueries (GLenum target, GLsizei n, GLuint *ids) {
}
GLAPI void APIENTRY stub_glGetQueryBufferObjecti64v (GLuint id, GLuint buffer, GLenum pname, GLintptr offset) {
}
GLAPI void APIENTRY stub_glGetQueryBufferObjectiv (GLuint id, GLuint buffer, GLenum pname, GLintptr offset) {
}
GLAPI void APIENTRY stub_glGetQueryBufferObjectui64v (GLuint id, GLuint buffer, GLenum pname, GLintptr offset) {
}
GLAPI void APIENTRY stub_glGetQueryBufferObjectuiv (GLuint id, GLuint buffer, GLenum pname, GLintptr offset) {
}
GLAPI void APIENTRY stub_glMemoryBarrierByRegion (GLbitfield barriers) {
}
GLAPI void APIENTRY stub_glGetTextureSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void *pixels) {
}
GLAPI void APIENTRY stub_glGetCompressedTextureSubImage (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void *pixels) {
}
GLAPI GLenum APIENTRY stub_glGetGraphicsResetStatus (void) {
	return (GLenum)0;
}
GLAPI void APIENTRY stub_glGetnCompressedTexImage (GLenum target, GLint lod, GLsizei bufSize, void *pixels) {
}
GLAPI void APIENTRY stub_glGetnTexImage (GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels) {
}
GLAPI void APIENTRY stub_glGetnUniformdv (GLuint program, GLint location, GLsizei bufSize, GLdouble *params) {
}
GLAPI void APIENTRY stub_glGetnUniformfv (GLuint program, GLint location, GLsizei bufSize, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetnUniformiv (GLuint program, GLint location, GLsizei bufSize, GLint *params) {
}
GLAPI void APIENTRY stub_glGetnUniformuiv (GLuint program, GLint location, GLsizei bufSize, GLuint *params) {
}
GLAPI void APIENTRY stub_glReadnPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data) {
}
GLAPI void APIENTRY stub_glGetnMapdv (GLenum target, GLenum query, GLsizei bufSize, GLdouble *v) {
}
GLAPI void APIENTRY stub_glGetnMapfv (GLenum target, GLenum query, GLsizei bufSize, GLfloat *v) {
}
GLAPI void APIENTRY stub_glGetnMapiv (GLenum target, GLenum query, GLsizei bufSize, GLint *v) {
}
GLAPI void APIENTRY stub_glGetnPixelMapfv (GLenum map, GLsizei bufSize, GLfloat *values) {
}
GLAPI void APIENTRY stub_glGetnPixelMapuiv (GLenum map, GLsizei bufSize, GLuint *values) {
}
GLAPI void APIENTRY stub_glGetnPixelMapusv (GLenum map, GLsizei bufSize, GLushort *values) {
}
GLAPI void APIENTRY stub_glGetnPolygonStipple (GLsizei bufSize, GLubyte *pattern) {
}
GLAPI void APIENTRY stub_glGetnColorTable (GLenum target, GLenum format, GLenum type, GLsizei bufSize, void *table) {
}
GLAPI void APIENTRY stub_glGetnConvolutionFilter (GLenum target, GLenum format, GLenum type, GLsizei bufSize, void *image) {
}
GLAPI void APIENTRY stub_glGetnSeparableFilter (GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void *row, GLsizei columnBufSize, void *column, void *span) {
}
GLAPI void APIENTRY stub_glGetnHistogram (GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void *values) {
}
GLAPI void APIENTRY stub_glGetnMinmax (GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void *values) {
}
GLAPI void APIENTRY stub_glTextureBarrier (void) {
}
GLAPI void APIENTRY stub_glPrimitiveBoundingBoxARB (GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW) {
}
GLAPI GLuint64 APIENTRY stub_glGetTextureHandleARB (GLuint texture) {
	return (GLuint64)0;
}
GLAPI GLuint64 APIENTRY stub_glGetTextureSamplerHandleARB (GLuint texture, GLuint sampler) {
	return (GLuint64)0;
}
GLAPI void APIENTRY stub_glMakeTextureHandleResidentARB (GLuint64 handle) {
}
GLAPI void APIENTRY stub_glMakeTextureHandleNonResidentARB (GLuint64 handle) {
}
GLAPI GLuint64 APIENTRY stub_glGetImageHandleARB (GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format) {
	return (GLuint64)0;
}
GLAPI void APIENTRY stub_glMakeImageHandleResidentARB (GLuint64 handle, GLenum access) {
}
GLAPI void APIENTRY stub_glMakeImageHandleNonResidentARB (GLuint64 handle) {
}
GLAPI void APIENTRY stub_glUniformHandleui64ARB (GLint location, GLuint64 value) {
}
GLAPI void APIENTRY stub_glUniformHandleui64vARB (GLint location, GLsizei count, const GLuint64 *value) {
}
GLAPI void APIENTRY stub_glProgramUniformHandleui64ARB (GLuint program, GLint location, GLuint64 value) {
}
GLAPI void APIENTRY stub_glProgramUniformHandleui64vARB (GLuint program, GLint location, GLsizei count, const GLuint64 *values) {
}
GLAPI GLboolean APIENTRY stub_glIsTextureHandleResidentARB (GLuint64 handle) {
	return (GLboolean)0;
}
GLAPI GLboolean APIENTRY stub_glIsImageHandleResidentARB (GLuint64 handle) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glVertexAttribL1ui64ARB (GLuint index, GLuint64EXT x) {
}
GLAPI void APIENTRY stub_glVertexAttribL1ui64vARB (GLuint index, const GLuint64EXT *v) {
}
GLAPI void APIENTRY stub_glGetVertexAttribLui64vARB (GLuint index, GLenum pname, GLuint64EXT *params) {
}
GLAPI GLsync APIENTRY stub_glCreateSyncFromCLeventARB (struct _cl_context *context, struct _cl_event *event, GLbitfield flags) {
	return (GLsync)0;
}
GLAPI void APIENTRY stub_glClampColorARB (GLenum target, GLenum clamp) {
}
GLAPI void APIENTRY stub_glDispatchComputeGroupSizeARB (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z) {
}
GLAPI void APIENTRY stub_glDebugMessageControlARB (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled) {
}
GLAPI void APIENTRY stub_glDebugMessageInsertARB (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf) {
}
GLAPI void APIENTRY stub_glDebugMessageCallbackARB (GLDEBUGPROCARB callback, const void *userParam) {
}
GLAPI GLuint APIENTRY stub_glGetDebugMessageLogARB (GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog) {
	return (GLuint)0;
}
GLAPI void APIENTRY stub_glDrawBuffersARB (GLsizei n, const GLenum *bufs) {
}
GLAPI void APIENTRY stub_glBlendEquationiARB (GLuint buf, GLenum mode) {
}
GLAPI void APIENTRY stub_glBlendEquationSeparateiARB (GLuint buf, GLenum modeRGB, GLenum modeAlpha) {
}
GLAPI void APIENTRY stub_glBlendFunciARB (GLuint buf, GLenum src, GLenum dst) {
}
GLAPI void APIENTRY stub_glBlendFuncSeparateiARB (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) {
}
GLAPI void APIENTRY stub_glDrawArraysInstancedARB (GLenum mode, GLint first, GLsizei count, GLsizei primcount) {
}
GLAPI void APIENTRY stub_glDrawElementsInstancedARB (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount) {
}
GLAPI void APIENTRY stub_glProgramStringARB (GLenum target, GLenum format, GLsizei len, const void *string) {
}
GLAPI void APIENTRY stub_glBindProgramARB (GLenum target, GLuint program) {
}
GLAPI void APIENTRY stub_glDeleteProgramsARB (GLsizei n, const GLuint *programs) {
}
GLAPI void APIENTRY stub_glGenProgramsARB (GLsizei n, GLuint *programs) {
}
GLAPI void APIENTRY stub_glProgramEnvParameter4dARB (GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
}
GLAPI void APIENTRY stub_glProgramEnvParameter4dvARB (GLenum target, GLuint index, const GLdouble *params) {
}
GLAPI void APIENTRY stub_glProgramEnvParameter4fARB (GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
}
GLAPI void APIENTRY stub_glProgramEnvParameter4fvARB (GLenum target, GLuint index, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glProgramLocalParameter4dARB (GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
}
GLAPI void APIENTRY stub_glProgramLocalParameter4dvARB (GLenum target, GLuint index, const GLdouble *params) {
}
GLAPI void APIENTRY stub_glProgramLocalParameter4fARB (GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
}
GLAPI void APIENTRY stub_glProgramLocalParameter4fvARB (GLenum target, GLuint index, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetProgramEnvParameterdvARB (GLenum target, GLuint index, GLdouble *params) {
}
GLAPI void APIENTRY stub_glGetProgramEnvParameterfvARB (GLenum target, GLuint index, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetProgramLocalParameterdvARB (GLenum target, GLuint index, GLdouble *params) {
}
GLAPI void APIENTRY stub_glGetProgramLocalParameterfvARB (GLenum target, GLuint index, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetProgramivARB (GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetProgramStringARB (GLenum target, GLenum pname, void *string) {
}
GLAPI GLboolean APIENTRY stub_glIsProgramARB (GLuint program) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glProgramParameteriARB (GLuint program, GLenum pname, GLint value) {
}
GLAPI void APIENTRY stub_glFramebufferTextureARB (GLenum target, GLenum attachment, GLuint texture, GLint level) {
}
GLAPI void APIENTRY stub_glFramebufferTextureLayerARB (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) {
}
GLAPI void APIENTRY stub_glFramebufferTextureFaceARB (GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face) {
}
GLAPI void APIENTRY stub_glUniform1i64ARB (GLint location, GLint64 x) {
}
GLAPI void APIENTRY stub_glUniform2i64ARB (GLint location, GLint64 x, GLint64 y) {
}
GLAPI void APIENTRY stub_glUniform3i64ARB (GLint location, GLint64 x, GLint64 y, GLint64 z) {
}
GLAPI void APIENTRY stub_glUniform4i64ARB (GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w) {
}
GLAPI void APIENTRY stub_glUniform1i64vARB (GLint location, GLsizei count, const GLint64 *value) {
}
GLAPI void APIENTRY stub_glUniform2i64vARB (GLint location, GLsizei count, const GLint64 *value) {
}
GLAPI void APIENTRY stub_glUniform3i64vARB (GLint location, GLsizei count, const GLint64 *value) {
}
GLAPI void APIENTRY stub_glUniform4i64vARB (GLint location, GLsizei count, const GLint64 *value) {
}
GLAPI void APIENTRY stub_glUniform1ui64ARB (GLint location, GLuint64 x) {
}
GLAPI void APIENTRY stub_glUniform2ui64ARB (GLint location, GLuint64 x, GLuint64 y) {
}
GLAPI void APIENTRY stub_glUniform3ui64ARB (GLint location, GLuint64 x, GLuint64 y, GLuint64 z) {
}
GLAPI void APIENTRY stub_glUniform4ui64ARB (GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w) {
}
GLAPI void APIENTRY stub_glUniform1ui64vARB (GLint location, GLsizei count, const GLuint64 *value) {
}
GLAPI void APIENTRY stub_glUniform2ui64vARB (GLint location, GLsizei count, const GLuint64 *value) {
}
GLAPI void APIENTRY stub_glUniform3ui64vARB (GLint location, GLsizei count, const GLuint64 *value) {
}
GLAPI void APIENTRY stub_glUniform4ui64vARB (GLint location, GLsizei count, const GLuint64 *value) {
}
GLAPI void APIENTRY stub_glGetUniformi64vARB (GLuint program, GLint location, GLint64 *params) {
}
GLAPI void APIENTRY stub_glGetUniformui64vARB (GLuint program, GLint location, GLuint64 *params) {
}
GLAPI void APIENTRY stub_glGetnUniformi64vARB (GLuint program, GLint location, GLsizei bufSize, GLint64 *params) {
}
GLAPI void APIENTRY stub_glGetnUniformui64vARB (GLuint program, GLint location, GLsizei bufSize, GLuint64 *params) {
}
GLAPI void APIENTRY stub_glProgramUniform1i64ARB (GLuint program, GLint location, GLint64 x) {
}
GLAPI void APIENTRY stub_glProgramUniform2i64ARB (GLuint program, GLint location, GLint64 x, GLint64 y) {
}
GLAPI void APIENTRY stub_glProgramUniform3i64ARB (GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z) {
}
GLAPI void APIENTRY stub_glProgramUniform4i64ARB (GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w) {
}
GLAPI void APIENTRY stub_glProgramUniform1i64vARB (GLuint program, GLint location, GLsizei count, const GLint64 *value) {
}
GLAPI void APIENTRY stub_glProgramUniform2i64vARB (GLuint program, GLint location, GLsizei count, const GLint64 *value) {
}
GLAPI void APIENTRY stub_glProgramUniform3i64vARB (GLuint program, GLint location, GLsizei count, const GLint64 *value) {
}
GLAPI void APIENTRY stub_glProgramUniform4i64vARB (GLuint program, GLint location, GLsizei count, const GLint64 *value) {
}
GLAPI void APIENTRY stub_glProgramUniform1ui64ARB (GLuint program, GLint location, GLuint64 x) {
}
GLAPI void APIENTRY stub_glProgramUniform2ui64ARB (GLuint program, GLint location, GLuint64 x, GLuint64 y) {
}
GLAPI void APIENTRY stub_glProgramUniform3ui64ARB (GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z) {
}
GLAPI void APIENTRY stub_glProgramUniform4ui64ARB (GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w) {
}
GLAPI void APIENTRY stub_glProgramUniform1ui64vARB (GLuint program, GLint location, GLsizei count, const GLuint64 *value) {
}
GLAPI void APIENTRY stub_glProgramUniform2ui64vARB (GLuint program, GLint location, GLsizei count, const GLuint64 *value) {
}
GLAPI void APIENTRY stub_glProgramUniform3ui64vARB (GLuint program, GLint location, GLsizei count, const GLuint64 *value) {
}
GLAPI void APIENTRY stub_glProgramUniform4ui64vARB (GLuint program, GLint location, GLsizei count, const GLuint64 *value) {
}
GLAPI void APIENTRY stub_glColorTable (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void *table) {
}
GLAPI void APIENTRY stub_glColorTableParameterfv (GLenum target, GLenum pname, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glColorTableParameteriv (GLenum target, GLenum pname, const GLint *params) {
}
GLAPI void APIENTRY stub_glCopyColorTable (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width) {
}
GLAPI void APIENTRY stub_glGetColorTable (GLenum target, GLenum format, GLenum type, void *table) {
}
GLAPI void APIENTRY stub_glGetColorTableParameterfv (GLenum target, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetColorTableParameteriv (GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glColorSubTable (GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void *data) {
}
GLAPI void APIENTRY stub_glCopyColorSubTable (GLenum target, GLsizei start, GLint x, GLint y, GLsizei width) {
}
GLAPI void APIENTRY stub_glConvolutionFilter1D (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void *image) {
}
GLAPI void APIENTRY stub_glConvolutionFilter2D (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *image) {
}
GLAPI void APIENTRY stub_glConvolutionParameterf (GLenum target, GLenum pname, GLfloat params) {
}
GLAPI void APIENTRY stub_glConvolutionParameterfv (GLenum target, GLenum pname, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glConvolutionParameteri (GLenum target, GLenum pname, GLint params) {
}
GLAPI void APIENTRY stub_glConvolutionParameteriv (GLenum target, GLenum pname, const GLint *params) {
}
GLAPI void APIENTRY stub_glCopyConvolutionFilter1D (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width) {
}
GLAPI void APIENTRY stub_glCopyConvolutionFilter2D (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glGetConvolutionFilter (GLenum target, GLenum format, GLenum type, void *image) {
}
GLAPI void APIENTRY stub_glGetConvolutionParameterfv (GLenum target, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetConvolutionParameteriv (GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetSeparableFilter (GLenum target, GLenum format, GLenum type, void *row, void *column, void *span) {
}
GLAPI void APIENTRY stub_glSeparableFilter2D (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *row, const void *column) {
}
GLAPI void APIENTRY stub_glGetHistogram (GLenum target, GLboolean reset, GLenum format, GLenum type, void *values) {
}
GLAPI void APIENTRY stub_glGetHistogramParameterfv (GLenum target, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetHistogramParameteriv (GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetMinmax (GLenum target, GLboolean reset, GLenum format, GLenum type, void *values) {
}
GLAPI void APIENTRY stub_glGetMinmaxParameterfv (GLenum target, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetMinmaxParameteriv (GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glHistogram (GLenum target, GLsizei width, GLenum internalformat, GLboolean sink) {
}
GLAPI void APIENTRY stub_glMinmax (GLenum target, GLenum internalformat, GLboolean sink) {
}
GLAPI void APIENTRY stub_glResetHistogram (GLenum target) {
}
GLAPI void APIENTRY stub_glResetMinmax (GLenum target) {
}
GLAPI void APIENTRY stub_glMultiDrawArraysIndirectCountARB (GLenum mode, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride) {
}
GLAPI void APIENTRY stub_glMultiDrawElementsIndirectCountARB (GLenum mode, GLenum type, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride) {
}
GLAPI void APIENTRY stub_glVertexAttribDivisorARB (GLuint index, GLuint divisor) {
}
GLAPI void APIENTRY stub_glCurrentPaletteMatrixARB (GLint index) {
}
GLAPI void APIENTRY stub_glMatrixIndexubvARB (GLint size, const GLubyte *indices) {
}
GLAPI void APIENTRY stub_glMatrixIndexusvARB (GLint size, const GLushort *indices) {
}
GLAPI void APIENTRY stub_glMatrixIndexuivARB (GLint size, const GLuint *indices) {
}
GLAPI void APIENTRY stub_glMatrixIndexPointerARB (GLint size, GLenum type, GLsizei stride, const void *pointer) {
}
GLAPI void APIENTRY stub_glSampleCoverageARB (GLfloat value, GLboolean invert) {
}
GLAPI void APIENTRY stub_glActiveTextureARB (GLenum texture) {
}
GLAPI void APIENTRY stub_glClientActiveTextureARB (GLenum texture) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1dARB (GLenum target, GLdouble s) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1dvARB (GLenum target, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1fARB (GLenum target, GLfloat s) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1fvARB (GLenum target, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1iARB (GLenum target, GLint s) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1ivARB (GLenum target, const GLint *v) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1sARB (GLenum target, GLshort s) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1svARB (GLenum target, const GLshort *v) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2dARB (GLenum target, GLdouble s, GLdouble t) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2dvARB (GLenum target, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2fARB (GLenum target, GLfloat s, GLfloat t) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2fvARB (GLenum target, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2iARB (GLenum target, GLint s, GLint t) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2ivARB (GLenum target, const GLint *v) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2sARB (GLenum target, GLshort s, GLshort t) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2svARB (GLenum target, const GLshort *v) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3dARB (GLenum target, GLdouble s, GLdouble t, GLdouble r) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3dvARB (GLenum target, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3fARB (GLenum target, GLfloat s, GLfloat t, GLfloat r) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3fvARB (GLenum target, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3iARB (GLenum target, GLint s, GLint t, GLint r) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3ivARB (GLenum target, const GLint *v) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3sARB (GLenum target, GLshort s, GLshort t, GLshort r) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3svARB (GLenum target, const GLshort *v) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4dARB (GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4dvARB (GLenum target, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4fARB (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4fvARB (GLenum target, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4iARB (GLenum target, GLint s, GLint t, GLint r, GLint q) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4ivARB (GLenum target, const GLint *v) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4sARB (GLenum target, GLshort s, GLshort t, GLshort r, GLshort q) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4svARB (GLenum target, const GLshort *v) {
}
GLAPI void APIENTRY stub_glGenQueriesARB (GLsizei n, GLuint *ids) {
}
GLAPI void APIENTRY stub_glDeleteQueriesARB (GLsizei n, const GLuint *ids) {
}
GLAPI GLboolean APIENTRY stub_glIsQueryARB (GLuint id) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glBeginQueryARB (GLenum target, GLuint id) {
}
GLAPI void APIENTRY stub_glEndQueryARB (GLenum target) {
}
GLAPI void APIENTRY stub_glGetQueryivARB (GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetQueryObjectivARB (GLuint id, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetQueryObjectuivARB (GLuint id, GLenum pname, GLuint *params) {
}
GLAPI void APIENTRY stub_glMaxShaderCompilerThreadsARB (GLuint count) {
}
GLAPI void APIENTRY stub_glPointParameterfARB (GLenum pname, GLfloat param) {
}
GLAPI void APIENTRY stub_glPointParameterfvARB (GLenum pname, const GLfloat *params) {
}
GLAPI GLenum APIENTRY stub_glGetGraphicsResetStatusARB (void) {
	return (GLenum)0;
}
GLAPI void APIENTRY stub_glGetnTexImageARB (GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *img) {
}
GLAPI void APIENTRY stub_glReadnPixelsARB (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data) {
}
GLAPI void APIENTRY stub_glGetnCompressedTexImageARB (GLenum target, GLint lod, GLsizei bufSize, void *img) {
}
GLAPI void APIENTRY stub_glGetnUniformfvARB (GLuint program, GLint location, GLsizei bufSize, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetnUniformivARB (GLuint program, GLint location, GLsizei bufSize, GLint *params) {
}
GLAPI void APIENTRY stub_glGetnUniformuivARB (GLuint program, GLint location, GLsizei bufSize, GLuint *params) {
}
GLAPI void APIENTRY stub_glGetnUniformdvARB (GLuint program, GLint location, GLsizei bufSize, GLdouble *params) {
}
GLAPI void APIENTRY stub_glGetnMapdvARB (GLenum target, GLenum query, GLsizei bufSize, GLdouble *v) {
}
GLAPI void APIENTRY stub_glGetnMapfvARB (GLenum target, GLenum query, GLsizei bufSize, GLfloat *v) {
}
GLAPI void APIENTRY stub_glGetnMapivARB (GLenum target, GLenum query, GLsizei bufSize, GLint *v) {
}
GLAPI void APIENTRY stub_glGetnPixelMapfvARB (GLenum map, GLsizei bufSize, GLfloat *values) {
}
GLAPI void APIENTRY stub_glGetnPixelMapuivARB (GLenum map, GLsizei bufSize, GLuint *values) {
}
GLAPI void APIENTRY stub_glGetnPixelMapusvARB (GLenum map, GLsizei bufSize, GLushort *values) {
}
GLAPI void APIENTRY stub_glGetnPolygonStippleARB (GLsizei bufSize, GLubyte *pattern) {
}
GLAPI void APIENTRY stub_glGetnColorTableARB (GLenum target, GLenum format, GLenum type, GLsizei bufSize, void *table) {
}
GLAPI void APIENTRY stub_glGetnConvolutionFilterARB (GLenum target, GLenum format, GLenum type, GLsizei bufSize, void *image) {
}
GLAPI void APIENTRY stub_glGetnSeparableFilterARB (GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void *row, GLsizei columnBufSize, void *column, void *span) {
}
GLAPI void APIENTRY stub_glGetnHistogramARB (GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void *values) {
}
GLAPI void APIENTRY stub_glGetnMinmaxARB (GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void *values) {
}
GLAPI void APIENTRY stub_glFramebufferSampleLocationsfvARB (GLenum target, GLuint start, GLsizei count, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glNamedFramebufferSampleLocationsfvARB (GLuint framebuffer, GLuint start, GLsizei count, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glEvaluateDepthValuesARB (void) {
}
GLAPI void APIENTRY stub_glMinSampleShadingARB (GLfloat value) {
}
GLAPI void APIENTRY stub_glDeleteObjectARB (GLhandleARB obj) {
}
GLAPI GLhandleARB APIENTRY stub_glGetHandleARB (GLenum pname) {
	return (GLhandleARB)0;
}
GLAPI void APIENTRY stub_glDetachObjectARB (GLhandleARB containerObj, GLhandleARB attachedObj) {
}
GLAPI GLhandleARB APIENTRY stub_glCreateShaderObjectARB (GLenum shaderType) {
	return (GLhandleARB)0;
}
GLAPI void APIENTRY stub_glShaderSourceARB (GLhandleARB shaderObj, GLsizei count, const GLcharARB **string, const GLint *length) {
}
GLAPI void APIENTRY stub_glCompileShaderARB (GLhandleARB shaderObj) {
}
GLAPI GLhandleARB APIENTRY stub_glCreateProgramObjectARB (void) {
	return (GLhandleARB)0;
}
GLAPI void APIENTRY stub_glAttachObjectARB (GLhandleARB containerObj, GLhandleARB obj) {
}
GLAPI void APIENTRY stub_glLinkProgramARB (GLhandleARB programObj) {
}
GLAPI void APIENTRY stub_glUseProgramObjectARB (GLhandleARB programObj) {
}
GLAPI void APIENTRY stub_glValidateProgramARB (GLhandleARB programObj) {
}
GLAPI void APIENTRY stub_glUniform1fARB (GLint location, GLfloat v0) {
}
GLAPI void APIENTRY stub_glUniform2fARB (GLint location, GLfloat v0, GLfloat v1) {
}
GLAPI void APIENTRY stub_glUniform3fARB (GLint location, GLfloat v0, GLfloat v1, GLfloat v2) {
}
GLAPI void APIENTRY stub_glUniform4fARB (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) {
}
GLAPI void APIENTRY stub_glUniform1iARB (GLint location, GLint v0) {
}
GLAPI void APIENTRY stub_glUniform2iARB (GLint location, GLint v0, GLint v1) {
}
GLAPI void APIENTRY stub_glUniform3iARB (GLint location, GLint v0, GLint v1, GLint v2) {
}
GLAPI void APIENTRY stub_glUniform4iARB (GLint location, GLint v0, GLint v1, GLint v2, GLint v3) {
}
GLAPI void APIENTRY stub_glUniform1fvARB (GLint location, GLsizei count, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glUniform2fvARB (GLint location, GLsizei count, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glUniform3fvARB (GLint location, GLsizei count, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glUniform4fvARB (GLint location, GLsizei count, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glUniform1ivARB (GLint location, GLsizei count, const GLint *value) {
}
GLAPI void APIENTRY stub_glUniform2ivARB (GLint location, GLsizei count, const GLint *value) {
}
GLAPI void APIENTRY stub_glUniform3ivARB (GLint location, GLsizei count, const GLint *value) {
}
GLAPI void APIENTRY stub_glUniform4ivARB (GLint location, GLsizei count, const GLint *value) {
}
GLAPI void APIENTRY stub_glUniformMatrix2fvARB (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glUniformMatrix3fvARB (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glUniformMatrix4fvARB (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glGetObjectParameterfvARB (GLhandleARB obj, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetObjectParameterivARB (GLhandleARB obj, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetInfoLogARB (GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *infoLog) {
}
GLAPI void APIENTRY stub_glGetAttachedObjectsARB (GLhandleARB containerObj, GLsizei maxCount, GLsizei *count, GLhandleARB *obj) {
}
GLAPI GLint APIENTRY stub_glGetUniformLocationARB (GLhandleARB programObj, const GLcharARB *name) {
	return (GLint)0;
}
GLAPI void APIENTRY stub_glGetActiveUniformARB (GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name) {
}
GLAPI void APIENTRY stub_glGetUniformfvARB (GLhandleARB programObj, GLint location, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetUniformivARB (GLhandleARB programObj, GLint location, GLint *params) {
}
GLAPI void APIENTRY stub_glGetShaderSourceARB (GLhandleARB obj, GLsizei maxLength, GLsizei *length, GLcharARB *source) {
}
GLAPI void APIENTRY stub_glNamedStringARB (GLenum type, GLint namelen, const GLchar *name, GLint stringlen, const GLchar *string) {
}
GLAPI void APIENTRY stub_glDeleteNamedStringARB (GLint namelen, const GLchar *name) {
}
GLAPI void APIENTRY stub_glCompileShaderIncludeARB (GLuint shader, GLsizei count, const GLchar *const*path, const GLint *length) {
}
GLAPI GLboolean APIENTRY stub_glIsNamedStringARB (GLint namelen, const GLchar *name) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glGetNamedStringARB (GLint namelen, const GLchar *name, GLsizei bufSize, GLint *stringlen, GLchar *string) {
}
GLAPI void APIENTRY stub_glGetNamedStringivARB (GLint namelen, const GLchar *name, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glBufferPageCommitmentARB (GLenum target, GLintptr offset, GLsizeiptr size, GLboolean commit) {
}
GLAPI void APIENTRY stub_glNamedBufferPageCommitmentEXT (GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit) {
}
GLAPI void APIENTRY stub_glNamedBufferPageCommitmentARB (GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit) {
}
GLAPI void APIENTRY stub_glTexPageCommitmentARB (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit) {
}
GLAPI void APIENTRY stub_glTexBufferARB (GLenum target, GLenum internalformat, GLuint buffer) {
}
GLAPI void APIENTRY stub_glCompressedTexImage3DARB (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data) {
}
GLAPI void APIENTRY stub_glCompressedTexImage2DARB (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data) {
}
GLAPI void APIENTRY stub_glCompressedTexImage1DARB (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data) {
}
GLAPI void APIENTRY stub_glCompressedTexSubImage3DARB (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data) {
}
GLAPI void APIENTRY stub_glCompressedTexSubImage2DARB (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data) {
}
GLAPI void APIENTRY stub_glCompressedTexSubImage1DARB (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data) {
}
GLAPI void APIENTRY stub_glGetCompressedTexImageARB (GLenum target, GLint level, void *img) {
}
GLAPI void APIENTRY stub_glLoadTransposeMatrixfARB (const GLfloat *m) {
}
GLAPI void APIENTRY stub_glLoadTransposeMatrixdARB (const GLdouble *m) {
}
GLAPI void APIENTRY stub_glMultTransposeMatrixfARB (const GLfloat *m) {
}
GLAPI void APIENTRY stub_glMultTransposeMatrixdARB (const GLdouble *m) {
}
GLAPI void APIENTRY stub_glWeightbvARB (GLint size, const GLbyte *weights) {
}
GLAPI void APIENTRY stub_glWeightsvARB (GLint size, const GLshort *weights) {
}
GLAPI void APIENTRY stub_glWeightivARB (GLint size, const GLint *weights) {
}
GLAPI void APIENTRY stub_glWeightfvARB (GLint size, const GLfloat *weights) {
}
GLAPI void APIENTRY stub_glWeightdvARB (GLint size, const GLdouble *weights) {
}
GLAPI void APIENTRY stub_glWeightubvARB (GLint size, const GLubyte *weights) {
}
GLAPI void APIENTRY stub_glWeightusvARB (GLint size, const GLushort *weights) {
}
GLAPI void APIENTRY stub_glWeightuivARB (GLint size, const GLuint *weights) {
}
GLAPI void APIENTRY stub_glWeightPointerARB (GLint size, GLenum type, GLsizei stride, const void *pointer) {
}
GLAPI void APIENTRY stub_glVertexBlendARB (GLint count) {
}
GLAPI void APIENTRY stub_glBindBufferARB (GLenum target, GLuint buffer) {
}
GLAPI void APIENTRY stub_glDeleteBuffersARB (GLsizei n, const GLuint *buffers) {
}
GLAPI void APIENTRY stub_glGenBuffersARB (GLsizei n, GLuint *buffers) {
}
GLAPI GLboolean APIENTRY stub_glIsBufferARB (GLuint buffer) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glBufferDataARB (GLenum target, GLsizeiptrARB size, const void *data, GLenum usage) {
}
GLAPI void APIENTRY stub_glBufferSubDataARB (GLenum target, GLintptrARB offset, GLsizeiptrARB size, const void *data) {
}
GLAPI void APIENTRY stub_glGetBufferSubDataARB (GLenum target, GLintptrARB offset, GLsizeiptrARB size, void *data) {
}
GLAPI void *APIENTRY stub_glMapBufferARB (GLenum target, GLenum access) {
	return (void *)0;
}
GLAPI GLboolean APIENTRY stub_glUnmapBufferARB (GLenum target) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glGetBufferParameterivARB (GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetBufferPointervARB (GLenum target, GLenum pname, void **params) {
}
GLAPI void APIENTRY stub_glVertexAttrib1dARB (GLuint index, GLdouble x) {
}
GLAPI void APIENTRY stub_glVertexAttrib1dvARB (GLuint index, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib1fARB (GLuint index, GLfloat x) {
}
GLAPI void APIENTRY stub_glVertexAttrib1fvARB (GLuint index, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib1sARB (GLuint index, GLshort x) {
}
GLAPI void APIENTRY stub_glVertexAttrib1svARB (GLuint index, const GLshort *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib2dARB (GLuint index, GLdouble x, GLdouble y) {
}
GLAPI void APIENTRY stub_glVertexAttrib2dvARB (GLuint index, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib2fARB (GLuint index, GLfloat x, GLfloat y) {
}
GLAPI void APIENTRY stub_glVertexAttrib2fvARB (GLuint index, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib2sARB (GLuint index, GLshort x, GLshort y) {
}
GLAPI void APIENTRY stub_glVertexAttrib2svARB (GLuint index, const GLshort *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib3dARB (GLuint index, GLdouble x, GLdouble y, GLdouble z) {
}
GLAPI void APIENTRY stub_glVertexAttrib3dvARB (GLuint index, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib3fARB (GLuint index, GLfloat x, GLfloat y, GLfloat z) {
}
GLAPI void APIENTRY stub_glVertexAttrib3fvARB (GLuint index, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib3sARB (GLuint index, GLshort x, GLshort y, GLshort z) {
}
GLAPI void APIENTRY stub_glVertexAttrib3svARB (GLuint index, const GLshort *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib4NbvARB (GLuint index, const GLbyte *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib4NivARB (GLuint index, const GLint *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib4NsvARB (GLuint index, const GLshort *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib4NubARB (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w) {
}
GLAPI void APIENTRY stub_glVertexAttrib4NubvARB (GLuint index, const GLubyte *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib4NuivARB (GLuint index, const GLuint *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib4NusvARB (GLuint index, const GLushort *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib4bvARB (GLuint index, const GLbyte *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib4dARB (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
}
GLAPI void APIENTRY stub_glVertexAttrib4dvARB (GLuint index, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib4fARB (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
}
GLAPI void APIENTRY stub_glVertexAttrib4fvARB (GLuint index, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib4ivARB (GLuint index, const GLint *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib4sARB (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w) {
}
GLAPI void APIENTRY stub_glVertexAttrib4svARB (GLuint index, const GLshort *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib4ubvARB (GLuint index, const GLubyte *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib4uivARB (GLuint index, const GLuint *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib4usvARB (GLuint index, const GLushort *v) {
}
GLAPI void APIENTRY stub_glVertexAttribPointerARB (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer) {
}
GLAPI void APIENTRY stub_glEnableVertexAttribArrayARB (GLuint index) {
}
GLAPI void APIENTRY stub_glDisableVertexAttribArrayARB (GLuint index) {
}
GLAPI void APIENTRY stub_glGetVertexAttribdvARB (GLuint index, GLenum pname, GLdouble *params) {
}
GLAPI void APIENTRY stub_glGetVertexAttribfvARB (GLuint index, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetVertexAttribivARB (GLuint index, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetVertexAttribPointervARB (GLuint index, GLenum pname, void **pointer) {
}
GLAPI void APIENTRY stub_glBindAttribLocationARB (GLhandleARB programObj, GLuint index, const GLcharARB *name) {
}
GLAPI void APIENTRY stub_glGetActiveAttribARB (GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name) {
}
GLAPI GLint APIENTRY stub_glGetAttribLocationARB (GLhandleARB programObj, const GLcharARB *name) {
	return (GLint)0;
}
GLAPI void APIENTRY stub_glWindowPos2dARB (GLdouble x, GLdouble y) {
}
GLAPI void APIENTRY stub_glWindowPos2dvARB (const GLdouble *v) {
}
GLAPI void APIENTRY stub_glWindowPos2fARB (GLfloat x, GLfloat y) {
}
GLAPI void APIENTRY stub_glWindowPos2fvARB (const GLfloat *v) {
}
GLAPI void APIENTRY stub_glWindowPos2iARB (GLint x, GLint y) {
}
GLAPI void APIENTRY stub_glWindowPos2ivARB (const GLint *v) {
}
GLAPI void APIENTRY stub_glWindowPos2sARB (GLshort x, GLshort y) {
}
GLAPI void APIENTRY stub_glWindowPos2svARB (const GLshort *v) {
}
GLAPI void APIENTRY stub_glWindowPos3dARB (GLdouble x, GLdouble y, GLdouble z) {
}
GLAPI void APIENTRY stub_glWindowPos3dvARB (const GLdouble *v) {
}
GLAPI void APIENTRY stub_glWindowPos3fARB (GLfloat x, GLfloat y, GLfloat z) {
}
GLAPI void APIENTRY stub_glWindowPos3fvARB (const GLfloat *v) {
}
GLAPI void APIENTRY stub_glWindowPos3iARB (GLint x, GLint y, GLint z) {
}
GLAPI void APIENTRY stub_glWindowPos3ivARB (const GLint *v) {
}
GLAPI void APIENTRY stub_glWindowPos3sARB (GLshort x, GLshort y, GLshort z) {
}
GLAPI void APIENTRY stub_glWindowPos3svARB (const GLshort *v) {
}
GLAPI void APIENTRY stub_glBlendBarrierKHR (void) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1bOES (GLenum texture, GLbyte s) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1bvOES (GLenum texture, const GLbyte *coords) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2bOES (GLenum texture, GLbyte s, GLbyte t) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2bvOES (GLenum texture, const GLbyte *coords) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3bOES (GLenum texture, GLbyte s, GLbyte t, GLbyte r) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3bvOES (GLenum texture, const GLbyte *coords) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4bOES (GLenum texture, GLbyte s, GLbyte t, GLbyte r, GLbyte q) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4bvOES (GLenum texture, const GLbyte *coords) {
}
GLAPI void APIENTRY stub_glTexCoord1bOES (GLbyte s) {
}
GLAPI void APIENTRY stub_glTexCoord1bvOES (const GLbyte *coords) {
}
GLAPI void APIENTRY stub_glTexCoord2bOES (GLbyte s, GLbyte t) {
}
GLAPI void APIENTRY stub_glTexCoord2bvOES (const GLbyte *coords) {
}
GLAPI void APIENTRY stub_glTexCoord3bOES (GLbyte s, GLbyte t, GLbyte r) {
}
GLAPI void APIENTRY stub_glTexCoord3bvOES (const GLbyte *coords) {
}
GLAPI void APIENTRY stub_glTexCoord4bOES (GLbyte s, GLbyte t, GLbyte r, GLbyte q) {
}
GLAPI void APIENTRY stub_glTexCoord4bvOES (const GLbyte *coords) {
}
GLAPI void APIENTRY stub_glVertex2bOES (GLbyte x, GLbyte y) {
}
GLAPI void APIENTRY stub_glVertex2bvOES (const GLbyte *coords) {
}
GLAPI void APIENTRY stub_glVertex3bOES (GLbyte x, GLbyte y, GLbyte z) {
}
GLAPI void APIENTRY stub_glVertex3bvOES (const GLbyte *coords) {
}
GLAPI void APIENTRY stub_glVertex4bOES (GLbyte x, GLbyte y, GLbyte z, GLbyte w) {
}
GLAPI void APIENTRY stub_glVertex4bvOES (const GLbyte *coords) {
}
GLAPI void APIENTRY stub_glAlphaFuncxOES (GLenum func, GLfixed ref) {
}
GLAPI void APIENTRY stub_glClearColorxOES (GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha) {
}
GLAPI void APIENTRY stub_glClearDepthxOES (GLfixed depth) {
}
GLAPI void APIENTRY stub_glClipPlanexOES (GLenum plane, const GLfixed *equation) {
}
GLAPI void APIENTRY stub_glColor4xOES (GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha) {
}
GLAPI void APIENTRY stub_glDepthRangexOES (GLfixed n, GLfixed f) {
}
GLAPI void APIENTRY stub_glFogxOES (GLenum pname, GLfixed param) {
}
GLAPI void APIENTRY stub_glFogxvOES (GLenum pname, const GLfixed *param) {
}
GLAPI void APIENTRY stub_glFrustumxOES (GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f) {
}
GLAPI void APIENTRY stub_glGetClipPlanexOES (GLenum plane, GLfixed *equation) {
}
GLAPI void APIENTRY stub_glGetFixedvOES (GLenum pname, GLfixed *params) {
}
GLAPI void APIENTRY stub_glGetTexEnvxvOES (GLenum target, GLenum pname, GLfixed *params) {
}
GLAPI void APIENTRY stub_glGetTexParameterxvOES (GLenum target, GLenum pname, GLfixed *params) {
}
GLAPI void APIENTRY stub_glLightModelxOES (GLenum pname, GLfixed param) {
}
GLAPI void APIENTRY stub_glLightModelxvOES (GLenum pname, const GLfixed *param) {
}
GLAPI void APIENTRY stub_glLightxOES (GLenum light, GLenum pname, GLfixed param) {
}
GLAPI void APIENTRY stub_glLightxvOES (GLenum light, GLenum pname, const GLfixed *params) {
}
GLAPI void APIENTRY stub_glLineWidthxOES (GLfixed width) {
}
GLAPI void APIENTRY stub_glLoadMatrixxOES (const GLfixed *m) {
}
GLAPI void APIENTRY stub_glMaterialxOES (GLenum face, GLenum pname, GLfixed param) {
}
GLAPI void APIENTRY stub_glMaterialxvOES (GLenum face, GLenum pname, const GLfixed *param) {
}
GLAPI void APIENTRY stub_glMultMatrixxOES (const GLfixed *m) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4xOES (GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q) {
}
GLAPI void APIENTRY stub_glNormal3xOES (GLfixed nx, GLfixed ny, GLfixed nz) {
}
GLAPI void APIENTRY stub_glOrthoxOES (GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f) {
}
GLAPI void APIENTRY stub_glPointParameterxvOES (GLenum pname, const GLfixed *params) {
}
GLAPI void APIENTRY stub_glPointSizexOES (GLfixed size) {
}
GLAPI void APIENTRY stub_glPolygonOffsetxOES (GLfixed factor, GLfixed units) {
}
GLAPI void APIENTRY stub_glRotatexOES (GLfixed angle, GLfixed x, GLfixed y, GLfixed z) {
}
GLAPI void APIENTRY stub_glScalexOES (GLfixed x, GLfixed y, GLfixed z) {
}
GLAPI void APIENTRY stub_glTexEnvxOES (GLenum target, GLenum pname, GLfixed param) {
}
GLAPI void APIENTRY stub_glTexEnvxvOES (GLenum target, GLenum pname, const GLfixed *params) {
}
GLAPI void APIENTRY stub_glTexParameterxOES (GLenum target, GLenum pname, GLfixed param) {
}
GLAPI void APIENTRY stub_glTexParameterxvOES (GLenum target, GLenum pname, const GLfixed *params) {
}
GLAPI void APIENTRY stub_glTranslatexOES (GLfixed x, GLfixed y, GLfixed z) {
}
GLAPI void APIENTRY stub_glAccumxOES (GLenum op, GLfixed value) {
}
GLAPI void APIENTRY stub_glBitmapxOES (GLsizei width, GLsizei height, GLfixed xorig, GLfixed yorig, GLfixed xmove, GLfixed ymove, const GLubyte *bitmap) {
}
GLAPI void APIENTRY stub_glBlendColorxOES (GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha) {
}
GLAPI void APIENTRY stub_glClearAccumxOES (GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha) {
}
GLAPI void APIENTRY stub_glColor3xOES (GLfixed red, GLfixed green, GLfixed blue) {
}
GLAPI void APIENTRY stub_glColor3xvOES (const GLfixed *components) {
}
GLAPI void APIENTRY stub_glColor4xvOES (const GLfixed *components) {
}
GLAPI void APIENTRY stub_glConvolutionParameterxOES (GLenum target, GLenum pname, GLfixed param) {
}
GLAPI void APIENTRY stub_glConvolutionParameterxvOES (GLenum target, GLenum pname, const GLfixed *params) {
}
GLAPI void APIENTRY stub_glEvalCoord1xOES (GLfixed u) {
}
GLAPI void APIENTRY stub_glEvalCoord1xvOES (const GLfixed *coords) {
}
GLAPI void APIENTRY stub_glEvalCoord2xOES (GLfixed u, GLfixed v) {
}
GLAPI void APIENTRY stub_glEvalCoord2xvOES (const GLfixed *coords) {
}
GLAPI void APIENTRY stub_glFeedbackBufferxOES (GLsizei n, GLenum type, const GLfixed *buffer) {
}
GLAPI void APIENTRY stub_glGetConvolutionParameterxvOES (GLenum target, GLenum pname, GLfixed *params) {
}
GLAPI void APIENTRY stub_glGetHistogramParameterxvOES (GLenum target, GLenum pname, GLfixed *params) {
}
GLAPI void APIENTRY stub_glGetLightxOES (GLenum light, GLenum pname, GLfixed *params) {
}
GLAPI void APIENTRY stub_glGetMapxvOES (GLenum target, GLenum query, GLfixed *v) {
}
GLAPI void APIENTRY stub_glGetMaterialxOES (GLenum face, GLenum pname, GLfixed param) {
}
GLAPI void APIENTRY stub_glGetPixelMapxv (GLenum map, GLint size, GLfixed *values) {
}
GLAPI void APIENTRY stub_glGetTexGenxvOES (GLenum coord, GLenum pname, GLfixed *params) {
}
GLAPI void APIENTRY stub_glGetTexLevelParameterxvOES (GLenum target, GLint level, GLenum pname, GLfixed *params) {
}
GLAPI void APIENTRY stub_glIndexxOES (GLfixed component) {
}
GLAPI void APIENTRY stub_glIndexxvOES (const GLfixed *component) {
}
GLAPI void APIENTRY stub_glLoadTransposeMatrixxOES (const GLfixed *m) {
}
GLAPI void APIENTRY stub_glMap1xOES (GLenum target, GLfixed u1, GLfixed u2, GLint stride, GLint order, GLfixed points) {
}
GLAPI void APIENTRY stub_glMap2xOES (GLenum target, GLfixed u1, GLfixed u2, GLint ustride, GLint uorder, GLfixed v1, GLfixed v2, GLint vstride, GLint vorder, GLfixed points) {
}
GLAPI void APIENTRY stub_glMapGrid1xOES (GLint n, GLfixed u1, GLfixed u2) {
}
GLAPI void APIENTRY stub_glMapGrid2xOES (GLint n, GLfixed u1, GLfixed u2, GLfixed v1, GLfixed v2) {
}
GLAPI void APIENTRY stub_glMultTransposeMatrixxOES (const GLfixed *m) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1xOES (GLenum texture, GLfixed s) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1xvOES (GLenum texture, const GLfixed *coords) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2xOES (GLenum texture, GLfixed s, GLfixed t) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2xvOES (GLenum texture, const GLfixed *coords) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3xOES (GLenum texture, GLfixed s, GLfixed t, GLfixed r) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3xvOES (GLenum texture, const GLfixed *coords) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4xvOES (GLenum texture, const GLfixed *coords) {
}
GLAPI void APIENTRY stub_glNormal3xvOES (const GLfixed *coords) {
}
GLAPI void APIENTRY stub_glPassThroughxOES (GLfixed token) {
}
GLAPI void APIENTRY stub_glPixelMapx (GLenum map, GLint size, const GLfixed *values) {
}
GLAPI void APIENTRY stub_glPixelStorex (GLenum pname, GLfixed param) {
}
GLAPI void APIENTRY stub_glPixelTransferxOES (GLenum pname, GLfixed param) {
}
GLAPI void APIENTRY stub_glPixelZoomxOES (GLfixed xfactor, GLfixed yfactor) {
}
GLAPI void APIENTRY stub_glPrioritizeTexturesxOES (GLsizei n, const GLuint *textures, const GLfixed *priorities) {
}
GLAPI void APIENTRY stub_glRasterPos2xOES (GLfixed x, GLfixed y) {
}
GLAPI void APIENTRY stub_glRasterPos2xvOES (const GLfixed *coords) {
}
GLAPI void APIENTRY stub_glRasterPos3xOES (GLfixed x, GLfixed y, GLfixed z) {
}
GLAPI void APIENTRY stub_glRasterPos3xvOES (const GLfixed *coords) {
}
GLAPI void APIENTRY stub_glRasterPos4xOES (GLfixed x, GLfixed y, GLfixed z, GLfixed w) {
}
GLAPI void APIENTRY stub_glRasterPos4xvOES (const GLfixed *coords) {
}
GLAPI void APIENTRY stub_glRectxOES (GLfixed x1, GLfixed y1, GLfixed x2, GLfixed y2) {
}
GLAPI void APIENTRY stub_glRectxvOES (const GLfixed *v1, const GLfixed *v2) {
}
GLAPI void APIENTRY stub_glTexCoord1xOES (GLfixed s) {
}
GLAPI void APIENTRY stub_glTexCoord1xvOES (const GLfixed *coords) {
}
GLAPI void APIENTRY stub_glTexCoord2xOES (GLfixed s, GLfixed t) {
}
GLAPI void APIENTRY stub_glTexCoord2xvOES (const GLfixed *coords) {
}
GLAPI void APIENTRY stub_glTexCoord3xOES (GLfixed s, GLfixed t, GLfixed r) {
}
GLAPI void APIENTRY stub_glTexCoord3xvOES (const GLfixed *coords) {
}
GLAPI void APIENTRY stub_glTexCoord4xOES (GLfixed s, GLfixed t, GLfixed r, GLfixed q) {
}
GLAPI void APIENTRY stub_glTexCoord4xvOES (const GLfixed *coords) {
}
GLAPI void APIENTRY stub_glTexGenxOES (GLenum coord, GLenum pname, GLfixed param) {
}
GLAPI void APIENTRY stub_glTexGenxvOES (GLenum coord, GLenum pname, const GLfixed *params) {
}
GLAPI void APIENTRY stub_glVertex2xOES (GLfixed x) {
}
GLAPI void APIENTRY stub_glVertex2xvOES (const GLfixed *coords) {
}
GLAPI void APIENTRY stub_glVertex3xOES (GLfixed x, GLfixed y) {
}
GLAPI void APIENTRY stub_glVertex3xvOES (const GLfixed *coords) {
}
GLAPI void APIENTRY stub_glVertex4xOES (GLfixed x, GLfixed y, GLfixed z) {
}
GLAPI void APIENTRY stub_glVertex4xvOES (const GLfixed *coords) {
}
GLAPI GLbitfield APIENTRY stub_glQueryMatrixxOES (GLfixed *mantissa, GLint *exponent) {
	return (GLbitfield)0;
}
GLAPI void APIENTRY stub_glClearDepthfOES (GLclampf depth) {
}
GLAPI void APIENTRY stub_glClipPlanefOES (GLenum plane, const GLfloat *equation) {
}
GLAPI void APIENTRY stub_glDepthRangefOES (GLclampf n, GLclampf f) {
}
GLAPI void APIENTRY stub_glFrustumfOES (GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f) {
}
GLAPI void APIENTRY stub_glGetClipPlanefOES (GLenum plane, GLfloat *equation) {
}
GLAPI void APIENTRY stub_glOrthofOES (GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f) {
}
GLAPI void APIENTRY stub_glTbufferMask3DFX (GLuint mask) {
}
GLAPI void APIENTRY stub_glDebugMessageEnableAMD (GLenum category, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled) {
}
GLAPI void APIENTRY stub_glDebugMessageInsertAMD (GLenum category, GLenum severity, GLuint id, GLsizei length, const GLchar *buf) {
}
GLAPI void APIENTRY stub_glDebugMessageCallbackAMD (GLDEBUGPROCAMD callback, void *userParam) {
}
GLAPI GLuint APIENTRY stub_glGetDebugMessageLogAMD (GLuint count, GLsizei bufsize, GLenum *categories, GLuint *severities, GLuint *ids, GLsizei *lengths, GLchar *message) {
	return (GLuint)0;
}
GLAPI void APIENTRY stub_glBlendFuncIndexedAMD (GLuint buf, GLenum src, GLenum dst) {
}
GLAPI void APIENTRY stub_glBlendFuncSeparateIndexedAMD (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) {
}
GLAPI void APIENTRY stub_glBlendEquationIndexedAMD (GLuint buf, GLenum mode) {
}
GLAPI void APIENTRY stub_glBlendEquationSeparateIndexedAMD (GLuint buf, GLenum modeRGB, GLenum modeAlpha) {
}
GLAPI void APIENTRY stub_glUniform1i64NV (GLint location, GLint64EXT x) {
}
GLAPI void APIENTRY stub_glUniform2i64NV (GLint location, GLint64EXT x, GLint64EXT y) {
}
GLAPI void APIENTRY stub_glUniform3i64NV (GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z) {
}
GLAPI void APIENTRY stub_glUniform4i64NV (GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w) {
}
GLAPI void APIENTRY stub_glUniform1i64vNV (GLint location, GLsizei count, const GLint64EXT *value) {
}
GLAPI void APIENTRY stub_glUniform2i64vNV (GLint location, GLsizei count, const GLint64EXT *value) {
}
GLAPI void APIENTRY stub_glUniform3i64vNV (GLint location, GLsizei count, const GLint64EXT *value) {
}
GLAPI void APIENTRY stub_glUniform4i64vNV (GLint location, GLsizei count, const GLint64EXT *value) {
}
GLAPI void APIENTRY stub_glUniform1ui64NV (GLint location, GLuint64EXT x) {
}
GLAPI void APIENTRY stub_glUniform2ui64NV (GLint location, GLuint64EXT x, GLuint64EXT y) {
}
GLAPI void APIENTRY stub_glUniform3ui64NV (GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z) {
}
GLAPI void APIENTRY stub_glUniform4ui64NV (GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w) {
}
GLAPI void APIENTRY stub_glUniform1ui64vNV (GLint location, GLsizei count, const GLuint64EXT *value) {
}
GLAPI void APIENTRY stub_glUniform2ui64vNV (GLint location, GLsizei count, const GLuint64EXT *value) {
}
GLAPI void APIENTRY stub_glUniform3ui64vNV (GLint location, GLsizei count, const GLuint64EXT *value) {
}
GLAPI void APIENTRY stub_glUniform4ui64vNV (GLint location, GLsizei count, const GLuint64EXT *value) {
}
GLAPI void APIENTRY stub_glGetUniformi64vNV (GLuint program, GLint location, GLint64EXT *params) {
}
GLAPI void APIENTRY stub_glGetUniformui64vNV (GLuint program, GLint location, GLuint64EXT *params) {
}
GLAPI void APIENTRY stub_glProgramUniform1i64NV (GLuint program, GLint location, GLint64EXT x) {
}
GLAPI void APIENTRY stub_glProgramUniform2i64NV (GLuint program, GLint location, GLint64EXT x, GLint64EXT y) {
}
GLAPI void APIENTRY stub_glProgramUniform3i64NV (GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z) {
}
GLAPI void APIENTRY stub_glProgramUniform4i64NV (GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w) {
}
GLAPI void APIENTRY stub_glProgramUniform1i64vNV (GLuint program, GLint location, GLsizei count, const GLint64EXT *value) {
}
GLAPI void APIENTRY stub_glProgramUniform2i64vNV (GLuint program, GLint location, GLsizei count, const GLint64EXT *value) {
}
GLAPI void APIENTRY stub_glProgramUniform3i64vNV (GLuint program, GLint location, GLsizei count, const GLint64EXT *value) {
}
GLAPI void APIENTRY stub_glProgramUniform4i64vNV (GLuint program, GLint location, GLsizei count, const GLint64EXT *value) {
}
GLAPI void APIENTRY stub_glProgramUniform1ui64NV (GLuint program, GLint location, GLuint64EXT x) {
}
GLAPI void APIENTRY stub_glProgramUniform2ui64NV (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y) {
}
GLAPI void APIENTRY stub_glProgramUniform3ui64NV (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z) {
}
GLAPI void APIENTRY stub_glProgramUniform4ui64NV (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w) {
}
GLAPI void APIENTRY stub_glProgramUniform1ui64vNV (GLuint program, GLint location, GLsizei count, const GLuint64EXT *value) {
}
GLAPI void APIENTRY stub_glProgramUniform2ui64vNV (GLuint program, GLint location, GLsizei count, const GLuint64EXT *value) {
}
GLAPI void APIENTRY stub_glProgramUniform3ui64vNV (GLuint program, GLint location, GLsizei count, const GLuint64EXT *value) {
}
GLAPI void APIENTRY stub_glProgramUniform4ui64vNV (GLuint program, GLint location, GLsizei count, const GLuint64EXT *value) {
}
GLAPI void APIENTRY stub_glVertexAttribParameteriAMD (GLuint index, GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glMultiDrawArraysIndirectAMD (GLenum mode, const void *indirect, GLsizei primcount, GLsizei stride) {
}
GLAPI void APIENTRY stub_glMultiDrawElementsIndirectAMD (GLenum mode, GLenum type, const void *indirect, GLsizei primcount, GLsizei stride) {
}
GLAPI void APIENTRY stub_glGenNamesAMD (GLenum identifier, GLuint num, GLuint *names) {
}
GLAPI void APIENTRY stub_glDeleteNamesAMD (GLenum identifier, GLuint num, const GLuint *names) {
}
GLAPI GLboolean APIENTRY stub_glIsNameAMD (GLenum identifier, GLuint name) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glQueryObjectParameteruiAMD (GLenum target, GLuint id, GLenum pname, GLuint param) {
}
GLAPI void APIENTRY stub_glGetPerfMonitorGroupsAMD (GLint *numGroups, GLsizei groupsSize, GLuint *groups) {
}
GLAPI void APIENTRY stub_glGetPerfMonitorCountersAMD (GLuint group, GLint *numCounters, GLint *maxActiveCounters, GLsizei counterSize, GLuint *counters) {
}
GLAPI void APIENTRY stub_glGetPerfMonitorGroupStringAMD (GLuint group, GLsizei bufSize, GLsizei *length, GLchar *groupString) {
}
GLAPI void APIENTRY stub_glGetPerfMonitorCounterStringAMD (GLuint group, GLuint counter, GLsizei bufSize, GLsizei *length, GLchar *counterString) {
}
GLAPI void APIENTRY stub_glGetPerfMonitorCounterInfoAMD (GLuint group, GLuint counter, GLenum pname, void *data) {
}
GLAPI void APIENTRY stub_glGenPerfMonitorsAMD (GLsizei n, GLuint *monitors) {
}
GLAPI void APIENTRY stub_glDeletePerfMonitorsAMD (GLsizei n, GLuint *monitors) {
}
GLAPI void APIENTRY stub_glSelectPerfMonitorCountersAMD (GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint *counterList) {
}
GLAPI void APIENTRY stub_glBeginPerfMonitorAMD (GLuint monitor) {
}
GLAPI void APIENTRY stub_glEndPerfMonitorAMD (GLuint monitor) {
}
GLAPI void APIENTRY stub_glGetPerfMonitorCounterDataAMD (GLuint monitor, GLenum pname, GLsizei dataSize, GLuint *data, GLint *bytesWritten) {
}
GLAPI void APIENTRY stub_glSetMultisamplefvAMD (GLenum pname, GLuint index, const GLfloat *val) {
}
GLAPI void APIENTRY stub_glTexStorageSparseAMD (GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, GLbitfield flags) {
}
GLAPI void APIENTRY stub_glTextureStorageSparseAMD (GLuint texture, GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, GLbitfield flags) {
}
GLAPI void APIENTRY stub_glStencilOpValueAMD (GLenum face, GLuint value) {
}
GLAPI void APIENTRY stub_glTessellationFactorAMD (GLfloat factor) {
}
GLAPI void APIENTRY stub_glTessellationModeAMD (GLenum mode) {
}
GLAPI void APIENTRY stub_glElementPointerAPPLE (GLenum type, const void *pointer) {
}
GLAPI void APIENTRY stub_glDrawElementArrayAPPLE (GLenum mode, GLint first, GLsizei count) {
}
GLAPI void APIENTRY stub_glDrawRangeElementArrayAPPLE (GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count) {
}
GLAPI void APIENTRY stub_glMultiDrawElementArrayAPPLE (GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount) {
}
GLAPI void APIENTRY stub_glMultiDrawRangeElementArrayAPPLE (GLenum mode, GLuint start, GLuint end, const GLint *first, const GLsizei *count, GLsizei primcount) {
}
GLAPI void APIENTRY stub_glGenFencesAPPLE (GLsizei n, GLuint *fences) {
}
GLAPI void APIENTRY stub_glDeleteFencesAPPLE (GLsizei n, const GLuint *fences) {
}
GLAPI void APIENTRY stub_glSetFenceAPPLE (GLuint fence) {
}
GLAPI GLboolean APIENTRY stub_glIsFenceAPPLE (GLuint fence) {
	return (GLboolean)0;
}
GLAPI GLboolean APIENTRY stub_glTestFenceAPPLE (GLuint fence) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glFinishFenceAPPLE (GLuint fence) {
}
GLAPI GLboolean APIENTRY stub_glTestObjectAPPLE (GLenum object, GLuint name) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glFinishObjectAPPLE (GLenum object, GLint name) {
}
GLAPI void APIENTRY stub_glBufferParameteriAPPLE (GLenum target, GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glFlushMappedBufferRangeAPPLE (GLenum target, GLintptr offset, GLsizeiptr size) {
}
GLAPI GLenum APIENTRY stub_glObjectPurgeableAPPLE (GLenum objectType, GLuint name, GLenum option) {
	return (GLenum)0;
}
GLAPI GLenum APIENTRY stub_glObjectUnpurgeableAPPLE (GLenum objectType, GLuint name, GLenum option) {
	return (GLenum)0;
}
GLAPI void APIENTRY stub_glGetObjectParameterivAPPLE (GLenum objectType, GLuint name, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glTextureRangeAPPLE (GLenum target, GLsizei length, const void *pointer) {
}
GLAPI void APIENTRY stub_glGetTexParameterPointervAPPLE (GLenum target, GLenum pname, void **params) {
}
GLAPI void APIENTRY stub_glBindVertexArrayAPPLE (GLuint array) {
}
GLAPI void APIENTRY stub_glDeleteVertexArraysAPPLE (GLsizei n, const GLuint *arrays) {
}
GLAPI void APIENTRY stub_glGenVertexArraysAPPLE (GLsizei n, GLuint *arrays) {
}
GLAPI GLboolean APIENTRY stub_glIsVertexArrayAPPLE (GLuint array) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glVertexArrayRangeAPPLE (GLsizei length, void *pointer) {
}
GLAPI void APIENTRY stub_glFlushVertexArrayRangeAPPLE (GLsizei length, void *pointer) {
}
GLAPI void APIENTRY stub_glVertexArrayParameteriAPPLE (GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glEnableVertexAttribAPPLE (GLuint index, GLenum pname) {
}
GLAPI void APIENTRY stub_glDisableVertexAttribAPPLE (GLuint index, GLenum pname) {
}
GLAPI GLboolean APIENTRY stub_glIsVertexAttribEnabledAPPLE (GLuint index, GLenum pname) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glMapVertexAttrib1dAPPLE (GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points) {
}
GLAPI void APIENTRY stub_glMapVertexAttrib1fAPPLE (GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points) {
}
GLAPI void APIENTRY stub_glMapVertexAttrib2dAPPLE (GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points) {
}
GLAPI void APIENTRY stub_glMapVertexAttrib2fAPPLE (GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points) {
}
GLAPI void APIENTRY stub_glDrawBuffersATI (GLsizei n, const GLenum *bufs) {
}
GLAPI void APIENTRY stub_glElementPointerATI (GLenum type, const void *pointer) {
}
GLAPI void APIENTRY stub_glDrawElementArrayATI (GLenum mode, GLsizei count) {
}
GLAPI void APIENTRY stub_glDrawRangeElementArrayATI (GLenum mode, GLuint start, GLuint end, GLsizei count) {
}
GLAPI void APIENTRY stub_glTexBumpParameterivATI (GLenum pname, const GLint *param) {
}
GLAPI void APIENTRY stub_glTexBumpParameterfvATI (GLenum pname, const GLfloat *param) {
}
GLAPI void APIENTRY stub_glGetTexBumpParameterivATI (GLenum pname, GLint *param) {
}
GLAPI void APIENTRY stub_glGetTexBumpParameterfvATI (GLenum pname, GLfloat *param) {
}
GLAPI GLuint APIENTRY stub_glGenFragmentShadersATI (GLuint range) {
	return (GLuint)0;
}
GLAPI void APIENTRY stub_glBindFragmentShaderATI (GLuint id) {
}
GLAPI void APIENTRY stub_glDeleteFragmentShaderATI (GLuint id) {
}
GLAPI void APIENTRY stub_glBeginFragmentShaderATI (void) {
}
GLAPI void APIENTRY stub_glEndFragmentShaderATI (void) {
}
GLAPI void APIENTRY stub_glPassTexCoordATI (GLuint dst, GLuint coord, GLenum swizzle) {
}
GLAPI void APIENTRY stub_glSampleMapATI (GLuint dst, GLuint interp, GLenum swizzle) {
}
GLAPI void APIENTRY stub_glColorFragmentOp1ATI (GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod) {
}
GLAPI void APIENTRY stub_glColorFragmentOp2ATI (GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod) {
}
GLAPI void APIENTRY stub_glColorFragmentOp3ATI (GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod) {
}
GLAPI void APIENTRY stub_glAlphaFragmentOp1ATI (GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod) {
}
GLAPI void APIENTRY stub_glAlphaFragmentOp2ATI (GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod) {
}
GLAPI void APIENTRY stub_glAlphaFragmentOp3ATI (GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod) {
}
GLAPI void APIENTRY stub_glSetFragmentShaderConstantATI (GLuint dst, const GLfloat *value) {
}
GLAPI void *APIENTRY stub_glMapObjectBufferATI (GLuint buffer) {
	return (void *)0;
}
GLAPI void APIENTRY stub_glUnmapObjectBufferATI (GLuint buffer) {
}
GLAPI void APIENTRY stub_glPNTrianglesiATI (GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glPNTrianglesfATI (GLenum pname, GLfloat param) {
}
GLAPI void APIENTRY stub_glStencilOpSeparateATI (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass) {
}
GLAPI void APIENTRY stub_glStencilFuncSeparateATI (GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask) {
}
GLAPI GLuint APIENTRY stub_glNewObjectBufferATI (GLsizei size, const void *pointer, GLenum usage) {
	return (GLuint)0;
}
GLAPI GLboolean APIENTRY stub_glIsObjectBufferATI (GLuint buffer) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glUpdateObjectBufferATI (GLuint buffer, GLuint offset, GLsizei size, const void *pointer, GLenum preserve) {
}
GLAPI void APIENTRY stub_glGetObjectBufferfvATI (GLuint buffer, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetObjectBufferivATI (GLuint buffer, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glFreeObjectBufferATI (GLuint buffer) {
}
GLAPI void APIENTRY stub_glArrayObjectATI (GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset) {
}
GLAPI void APIENTRY stub_glGetArrayObjectfvATI (GLenum array, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetArrayObjectivATI (GLenum array, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glVariantArrayObjectATI (GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset) {
}
GLAPI void APIENTRY stub_glGetVariantArrayObjectfvATI (GLuint id, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetVariantArrayObjectivATI (GLuint id, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glVertexAttribArrayObjectATI (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLuint buffer, GLuint offset) {
}
GLAPI void APIENTRY stub_glGetVertexAttribArrayObjectfvATI (GLuint index, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetVertexAttribArrayObjectivATI (GLuint index, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glVertexStream1sATI (GLenum stream, GLshort x) {
}
GLAPI void APIENTRY stub_glVertexStream1svATI (GLenum stream, const GLshort *coords) {
}
GLAPI void APIENTRY stub_glVertexStream1iATI (GLenum stream, GLint x) {
}
GLAPI void APIENTRY stub_glVertexStream1ivATI (GLenum stream, const GLint *coords) {
}
GLAPI void APIENTRY stub_glVertexStream1fATI (GLenum stream, GLfloat x) {
}
GLAPI void APIENTRY stub_glVertexStream1fvATI (GLenum stream, const GLfloat *coords) {
}
GLAPI void APIENTRY stub_glVertexStream1dATI (GLenum stream, GLdouble x) {
}
GLAPI void APIENTRY stub_glVertexStream1dvATI (GLenum stream, const GLdouble *coords) {
}
GLAPI void APIENTRY stub_glVertexStream2sATI (GLenum stream, GLshort x, GLshort y) {
}
GLAPI void APIENTRY stub_glVertexStream2svATI (GLenum stream, const GLshort *coords) {
}
GLAPI void APIENTRY stub_glVertexStream2iATI (GLenum stream, GLint x, GLint y) {
}
GLAPI void APIENTRY stub_glVertexStream2ivATI (GLenum stream, const GLint *coords) {
}
GLAPI void APIENTRY stub_glVertexStream2fATI (GLenum stream, GLfloat x, GLfloat y) {
}
GLAPI void APIENTRY stub_glVertexStream2fvATI (GLenum stream, const GLfloat *coords) {
}
GLAPI void APIENTRY stub_glVertexStream2dATI (GLenum stream, GLdouble x, GLdouble y) {
}
GLAPI void APIENTRY stub_glVertexStream2dvATI (GLenum stream, const GLdouble *coords) {
}
GLAPI void APIENTRY stub_glVertexStream3sATI (GLenum stream, GLshort x, GLshort y, GLshort z) {
}
GLAPI void APIENTRY stub_glVertexStream3svATI (GLenum stream, const GLshort *coords) {
}
GLAPI void APIENTRY stub_glVertexStream3iATI (GLenum stream, GLint x, GLint y, GLint z) {
}
GLAPI void APIENTRY stub_glVertexStream3ivATI (GLenum stream, const GLint *coords) {
}
GLAPI void APIENTRY stub_glVertexStream3fATI (GLenum stream, GLfloat x, GLfloat y, GLfloat z) {
}
GLAPI void APIENTRY stub_glVertexStream3fvATI (GLenum stream, const GLfloat *coords) {
}
GLAPI void APIENTRY stub_glVertexStream3dATI (GLenum stream, GLdouble x, GLdouble y, GLdouble z) {
}
GLAPI void APIENTRY stub_glVertexStream3dvATI (GLenum stream, const GLdouble *coords) {
}
GLAPI void APIENTRY stub_glVertexStream4sATI (GLenum stream, GLshort x, GLshort y, GLshort z, GLshort w) {
}
GLAPI void APIENTRY stub_glVertexStream4svATI (GLenum stream, const GLshort *coords) {
}
GLAPI void APIENTRY stub_glVertexStream4iATI (GLenum stream, GLint x, GLint y, GLint z, GLint w) {
}
GLAPI void APIENTRY stub_glVertexStream4ivATI (GLenum stream, const GLint *coords) {
}
GLAPI void APIENTRY stub_glVertexStream4fATI (GLenum stream, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
}
GLAPI void APIENTRY stub_glVertexStream4fvATI (GLenum stream, const GLfloat *coords) {
}
GLAPI void APIENTRY stub_glVertexStream4dATI (GLenum stream, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
}
GLAPI void APIENTRY stub_glVertexStream4dvATI (GLenum stream, const GLdouble *coords) {
}
GLAPI void APIENTRY stub_glNormalStream3bATI (GLenum stream, GLbyte nx, GLbyte ny, GLbyte nz) {
}
GLAPI void APIENTRY stub_glNormalStream3bvATI (GLenum stream, const GLbyte *coords) {
}
GLAPI void APIENTRY stub_glNormalStream3sATI (GLenum stream, GLshort nx, GLshort ny, GLshort nz) {
}
GLAPI void APIENTRY stub_glNormalStream3svATI (GLenum stream, const GLshort *coords) {
}
GLAPI void APIENTRY stub_glNormalStream3iATI (GLenum stream, GLint nx, GLint ny, GLint nz) {
}
GLAPI void APIENTRY stub_glNormalStream3ivATI (GLenum stream, const GLint *coords) {
}
GLAPI void APIENTRY stub_glNormalStream3fATI (GLenum stream, GLfloat nx, GLfloat ny, GLfloat nz) {
}
GLAPI void APIENTRY stub_glNormalStream3fvATI (GLenum stream, const GLfloat *coords) {
}
GLAPI void APIENTRY stub_glNormalStream3dATI (GLenum stream, GLdouble nx, GLdouble ny, GLdouble nz) {
}
GLAPI void APIENTRY stub_glNormalStream3dvATI (GLenum stream, const GLdouble *coords) {
}
GLAPI void APIENTRY stub_glClientActiveVertexStreamATI (GLenum stream) {
}
GLAPI void APIENTRY stub_glVertexBlendEnviATI (GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glVertexBlendEnvfATI (GLenum pname, GLfloat param) {
}
GLAPI void APIENTRY stub_glUniformBufferEXT (GLuint program, GLint location, GLuint buffer) {
}
GLAPI GLint APIENTRY stub_glGetUniformBufferSizeEXT (GLuint program, GLint location) {
	return (GLint)0;
}
GLAPI GLintptr APIENTRY stub_glGetUniformOffsetEXT (GLuint program, GLint location) {
	return (GLintptr)0;
}
GLAPI void APIENTRY stub_glBlendColorEXT (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) {
}
GLAPI void APIENTRY stub_glBlendEquationSeparateEXT (GLenum modeRGB, GLenum modeAlpha) {
}
GLAPI void APIENTRY stub_glBlendFuncSeparateEXT (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) {
}
GLAPI void APIENTRY stub_glBlendEquationEXT (GLenum mode) {
}
GLAPI void APIENTRY stub_glColorSubTableEXT (GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void *data) {
}
GLAPI void APIENTRY stub_glCopyColorSubTableEXT (GLenum target, GLsizei start, GLint x, GLint y, GLsizei width) {
}
GLAPI void APIENTRY stub_glLockArraysEXT (GLint first, GLsizei count) {
}
GLAPI void APIENTRY stub_glUnlockArraysEXT (void) {
}
GLAPI void APIENTRY stub_glConvolutionFilter1DEXT (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void *image) {
}
GLAPI void APIENTRY stub_glConvolutionFilter2DEXT (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *image) {
}
GLAPI void APIENTRY stub_glConvolutionParameterfEXT (GLenum target, GLenum pname, GLfloat params) {
}
GLAPI void APIENTRY stub_glConvolutionParameterfvEXT (GLenum target, GLenum pname, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glConvolutionParameteriEXT (GLenum target, GLenum pname, GLint params) {
}
GLAPI void APIENTRY stub_glConvolutionParameterivEXT (GLenum target, GLenum pname, const GLint *params) {
}
GLAPI void APIENTRY stub_glCopyConvolutionFilter1DEXT (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width) {
}
GLAPI void APIENTRY stub_glCopyConvolutionFilter2DEXT (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glGetConvolutionFilterEXT (GLenum target, GLenum format, GLenum type, void *image) {
}
GLAPI void APIENTRY stub_glGetConvolutionParameterfvEXT (GLenum target, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetConvolutionParameterivEXT (GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetSeparableFilterEXT (GLenum target, GLenum format, GLenum type, void *row, void *column, void *span) {
}
GLAPI void APIENTRY stub_glSeparableFilter2DEXT (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *row, const void *column) {
}
GLAPI void APIENTRY stub_glTangent3bEXT (GLbyte tx, GLbyte ty, GLbyte tz) {
}
GLAPI void APIENTRY stub_glTangent3bvEXT (const GLbyte *v) {
}
GLAPI void APIENTRY stub_glTangent3dEXT (GLdouble tx, GLdouble ty, GLdouble tz) {
}
GLAPI void APIENTRY stub_glTangent3dvEXT (const GLdouble *v) {
}
GLAPI void APIENTRY stub_glTangent3fEXT (GLfloat tx, GLfloat ty, GLfloat tz) {
}
GLAPI void APIENTRY stub_glTangent3fvEXT (const GLfloat *v) {
}
GLAPI void APIENTRY stub_glTangent3iEXT (GLint tx, GLint ty, GLint tz) {
}
GLAPI void APIENTRY stub_glTangent3ivEXT (const GLint *v) {
}
GLAPI void APIENTRY stub_glTangent3sEXT (GLshort tx, GLshort ty, GLshort tz) {
}
GLAPI void APIENTRY stub_glTangent3svEXT (const GLshort *v) {
}
GLAPI void APIENTRY stub_glBinormal3bEXT (GLbyte bx, GLbyte by, GLbyte bz) {
}
GLAPI void APIENTRY stub_glBinormal3bvEXT (const GLbyte *v) {
}
GLAPI void APIENTRY stub_glBinormal3dEXT (GLdouble bx, GLdouble by, GLdouble bz) {
}
GLAPI void APIENTRY stub_glBinormal3dvEXT (const GLdouble *v) {
}
GLAPI void APIENTRY stub_glBinormal3fEXT (GLfloat bx, GLfloat by, GLfloat bz) {
}
GLAPI void APIENTRY stub_glBinormal3fvEXT (const GLfloat *v) {
}
GLAPI void APIENTRY stub_glBinormal3iEXT (GLint bx, GLint by, GLint bz) {
}
GLAPI void APIENTRY stub_glBinormal3ivEXT (const GLint *v) {
}
GLAPI void APIENTRY stub_glBinormal3sEXT (GLshort bx, GLshort by, GLshort bz) {
}
GLAPI void APIENTRY stub_glBinormal3svEXT (const GLshort *v) {
}
GLAPI void APIENTRY stub_glTangentPointerEXT (GLenum type, GLsizei stride, const void *pointer) {
}
GLAPI void APIENTRY stub_glBinormalPointerEXT (GLenum type, GLsizei stride, const void *pointer) {
}
GLAPI void APIENTRY stub_glCopyTexImage1DEXT (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border) {
}
GLAPI void APIENTRY stub_glCopyTexImage2DEXT (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) {
}
GLAPI void APIENTRY stub_glCopyTexSubImage1DEXT (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) {
}
GLAPI void APIENTRY stub_glCopyTexSubImage2DEXT (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glCopyTexSubImage3DEXT (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glCullParameterdvEXT (GLenum pname, GLdouble *params) {
}
GLAPI void APIENTRY stub_glCullParameterfvEXT (GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glLabelObjectEXT (GLenum type, GLuint object, GLsizei length, const GLchar *label) {
}
GLAPI void APIENTRY stub_glGetObjectLabelEXT (GLenum type, GLuint object, GLsizei bufSize, GLsizei *length, GLchar *label) {
}
GLAPI void APIENTRY stub_glInsertEventMarkerEXT (GLsizei length, const GLchar *marker) {
}
GLAPI void APIENTRY stub_glPushGroupMarkerEXT (GLsizei length, const GLchar *marker) {
}
GLAPI void APIENTRY stub_glPopGroupMarkerEXT (void) {
}
GLAPI void APIENTRY stub_glDepthBoundsEXT (GLclampd zmin, GLclampd zmax) {
}
GLAPI void APIENTRY stub_glMatrixLoadfEXT (GLenum mode, const GLfloat *m) {
}
GLAPI void APIENTRY stub_glMatrixLoaddEXT (GLenum mode, const GLdouble *m) {
}
GLAPI void APIENTRY stub_glMatrixMultfEXT (GLenum mode, const GLfloat *m) {
}
GLAPI void APIENTRY stub_glMatrixMultdEXT (GLenum mode, const GLdouble *m) {
}
GLAPI void APIENTRY stub_glMatrixLoadIdentityEXT (GLenum mode) {
}
GLAPI void APIENTRY stub_glMatrixRotatefEXT (GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z) {
}
GLAPI void APIENTRY stub_glMatrixRotatedEXT (GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z) {
}
GLAPI void APIENTRY stub_glMatrixScalefEXT (GLenum mode, GLfloat x, GLfloat y, GLfloat z) {
}
GLAPI void APIENTRY stub_glMatrixScaledEXT (GLenum mode, GLdouble x, GLdouble y, GLdouble z) {
}
GLAPI void APIENTRY stub_glMatrixTranslatefEXT (GLenum mode, GLfloat x, GLfloat y, GLfloat z) {
}
GLAPI void APIENTRY stub_glMatrixTranslatedEXT (GLenum mode, GLdouble x, GLdouble y, GLdouble z) {
}
GLAPI void APIENTRY stub_glMatrixFrustumEXT (GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar) {
}
GLAPI void APIENTRY stub_glMatrixOrthoEXT (GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar) {
}
GLAPI void APIENTRY stub_glMatrixPopEXT (GLenum mode) {
}
GLAPI void APIENTRY stub_glMatrixPushEXT (GLenum mode) {
}
GLAPI void APIENTRY stub_glClientAttribDefaultEXT (GLbitfield mask) {
}
GLAPI void APIENTRY stub_glPushClientAttribDefaultEXT (GLbitfield mask) {
}
GLAPI void APIENTRY stub_glTextureParameterfEXT (GLuint texture, GLenum target, GLenum pname, GLfloat param) {
}
GLAPI void APIENTRY stub_glTextureParameterfvEXT (GLuint texture, GLenum target, GLenum pname, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glTextureParameteriEXT (GLuint texture, GLenum target, GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glTextureParameterivEXT (GLuint texture, GLenum target, GLenum pname, const GLint *params) {
}
GLAPI void APIENTRY stub_glTextureImage1DEXT (GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels) {
}
GLAPI void APIENTRY stub_glTextureImage2DEXT (GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels) {
}
GLAPI void APIENTRY stub_glTextureSubImage1DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels) {
}
GLAPI void APIENTRY stub_glTextureSubImage2DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels) {
}
GLAPI void APIENTRY stub_glCopyTextureImage1DEXT (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border) {
}
GLAPI void APIENTRY stub_glCopyTextureImage2DEXT (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) {
}
GLAPI void APIENTRY stub_glCopyTextureSubImage1DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) {
}
GLAPI void APIENTRY stub_glCopyTextureSubImage2DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glGetTextureImageEXT (GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, void *pixels) {
}
GLAPI void APIENTRY stub_glGetTextureParameterfvEXT (GLuint texture, GLenum target, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetTextureParameterivEXT (GLuint texture, GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetTextureLevelParameterfvEXT (GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetTextureLevelParameterivEXT (GLuint texture, GLenum target, GLint level, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glTextureImage3DEXT (GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels) {
}
GLAPI void APIENTRY stub_glTextureSubImage3DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels) {
}
GLAPI void APIENTRY stub_glCopyTextureSubImage3DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glBindMultiTextureEXT (GLenum texunit, GLenum target, GLuint texture) {
}
GLAPI void APIENTRY stub_glMultiTexCoordPointerEXT (GLenum texunit, GLint size, GLenum type, GLsizei stride, const void *pointer) {
}
GLAPI void APIENTRY stub_glMultiTexEnvfEXT (GLenum texunit, GLenum target, GLenum pname, GLfloat param) {
}
GLAPI void APIENTRY stub_glMultiTexEnvfvEXT (GLenum texunit, GLenum target, GLenum pname, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glMultiTexEnviEXT (GLenum texunit, GLenum target, GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glMultiTexEnvivEXT (GLenum texunit, GLenum target, GLenum pname, const GLint *params) {
}
GLAPI void APIENTRY stub_glMultiTexGendEXT (GLenum texunit, GLenum coord, GLenum pname, GLdouble param) {
}
GLAPI void APIENTRY stub_glMultiTexGendvEXT (GLenum texunit, GLenum coord, GLenum pname, const GLdouble *params) {
}
GLAPI void APIENTRY stub_glMultiTexGenfEXT (GLenum texunit, GLenum coord, GLenum pname, GLfloat param) {
}
GLAPI void APIENTRY stub_glMultiTexGenfvEXT (GLenum texunit, GLenum coord, GLenum pname, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glMultiTexGeniEXT (GLenum texunit, GLenum coord, GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glMultiTexGenivEXT (GLenum texunit, GLenum coord, GLenum pname, const GLint *params) {
}
GLAPI void APIENTRY stub_glGetMultiTexEnvfvEXT (GLenum texunit, GLenum target, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetMultiTexEnvivEXT (GLenum texunit, GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetMultiTexGendvEXT (GLenum texunit, GLenum coord, GLenum pname, GLdouble *params) {
}
GLAPI void APIENTRY stub_glGetMultiTexGenfvEXT (GLenum texunit, GLenum coord, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetMultiTexGenivEXT (GLenum texunit, GLenum coord, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glMultiTexParameteriEXT (GLenum texunit, GLenum target, GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glMultiTexParameterivEXT (GLenum texunit, GLenum target, GLenum pname, const GLint *params) {
}
GLAPI void APIENTRY stub_glMultiTexParameterfEXT (GLenum texunit, GLenum target, GLenum pname, GLfloat param) {
}
GLAPI void APIENTRY stub_glMultiTexParameterfvEXT (GLenum texunit, GLenum target, GLenum pname, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glMultiTexImage1DEXT (GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels) {
}
GLAPI void APIENTRY stub_glMultiTexImage2DEXT (GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels) {
}
GLAPI void APIENTRY stub_glMultiTexSubImage1DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels) {
}
GLAPI void APIENTRY stub_glMultiTexSubImage2DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels) {
}
GLAPI void APIENTRY stub_glCopyMultiTexImage1DEXT (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border) {
}
GLAPI void APIENTRY stub_glCopyMultiTexImage2DEXT (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) {
}
GLAPI void APIENTRY stub_glCopyMultiTexSubImage1DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) {
}
GLAPI void APIENTRY stub_glCopyMultiTexSubImage2DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glGetMultiTexImageEXT (GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, void *pixels) {
}
GLAPI void APIENTRY stub_glGetMultiTexParameterfvEXT (GLenum texunit, GLenum target, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetMultiTexParameterivEXT (GLenum texunit, GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetMultiTexLevelParameterfvEXT (GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetMultiTexLevelParameterivEXT (GLenum texunit, GLenum target, GLint level, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glMultiTexImage3DEXT (GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels) {
}
GLAPI void APIENTRY stub_glMultiTexSubImage3DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels) {
}
GLAPI void APIENTRY stub_glCopyMultiTexSubImage3DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glEnableClientStateIndexedEXT (GLenum array, GLuint index) {
}
GLAPI void APIENTRY stub_glDisableClientStateIndexedEXT (GLenum array, GLuint index) {
}
GLAPI void APIENTRY stub_glGetFloatIndexedvEXT (GLenum target, GLuint index, GLfloat *data) {
}
GLAPI void APIENTRY stub_glGetDoubleIndexedvEXT (GLenum target, GLuint index, GLdouble *data) {
}
GLAPI void APIENTRY stub_glGetPointerIndexedvEXT (GLenum target, GLuint index, void **data) {
}
GLAPI void APIENTRY stub_glEnableIndexedEXT (GLenum target, GLuint index) {
}
GLAPI void APIENTRY stub_glDisableIndexedEXT (GLenum target, GLuint index) {
}
GLAPI GLboolean APIENTRY stub_glIsEnabledIndexedEXT (GLenum target, GLuint index) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glGetIntegerIndexedvEXT (GLenum target, GLuint index, GLint *data) {
}
GLAPI void APIENTRY stub_glGetBooleanIndexedvEXT (GLenum target, GLuint index, GLboolean *data) {
}
GLAPI void APIENTRY stub_glCompressedTextureImage3DEXT (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *bits) {
}
GLAPI void APIENTRY stub_glCompressedTextureImage2DEXT (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *bits) {
}
GLAPI void APIENTRY stub_glCompressedTextureImage1DEXT (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *bits) {
}
GLAPI void APIENTRY stub_glCompressedTextureSubImage3DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *bits) {
}
GLAPI void APIENTRY stub_glCompressedTextureSubImage2DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *bits) {
}
GLAPI void APIENTRY stub_glCompressedTextureSubImage1DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *bits) {
}
GLAPI void APIENTRY stub_glGetCompressedTextureImageEXT (GLuint texture, GLenum target, GLint lod, void *img) {
}
GLAPI void APIENTRY stub_glCompressedMultiTexImage3DEXT (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *bits) {
}
GLAPI void APIENTRY stub_glCompressedMultiTexImage2DEXT (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *bits) {
}
GLAPI void APIENTRY stub_glCompressedMultiTexImage1DEXT (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *bits) {
}
GLAPI void APIENTRY stub_glCompressedMultiTexSubImage3DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *bits) {
}
GLAPI void APIENTRY stub_glCompressedMultiTexSubImage2DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *bits) {
}
GLAPI void APIENTRY stub_glCompressedMultiTexSubImage1DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *bits) {
}
GLAPI void APIENTRY stub_glGetCompressedMultiTexImageEXT (GLenum texunit, GLenum target, GLint lod, void *img) {
}
GLAPI void APIENTRY stub_glMatrixLoadTransposefEXT (GLenum mode, const GLfloat *m) {
}
GLAPI void APIENTRY stub_glMatrixLoadTransposedEXT (GLenum mode, const GLdouble *m) {
}
GLAPI void APIENTRY stub_glMatrixMultTransposefEXT (GLenum mode, const GLfloat *m) {
}
GLAPI void APIENTRY stub_glMatrixMultTransposedEXT (GLenum mode, const GLdouble *m) {
}
GLAPI void APIENTRY stub_glNamedBufferDataEXT (GLuint buffer, GLsizeiptr size, const void *data, GLenum usage) {
}
GLAPI void APIENTRY stub_glNamedBufferSubDataEXT (GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data) {
}
GLAPI void *APIENTRY stub_glMapNamedBufferEXT (GLuint buffer, GLenum access) {
	return (void *)0;
}
GLAPI GLboolean APIENTRY stub_glUnmapNamedBufferEXT (GLuint buffer) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glGetNamedBufferParameterivEXT (GLuint buffer, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetNamedBufferPointervEXT (GLuint buffer, GLenum pname, void **params) {
}
GLAPI void APIENTRY stub_glGetNamedBufferSubDataEXT (GLuint buffer, GLintptr offset, GLsizeiptr size, void *data) {
}
GLAPI void APIENTRY stub_glProgramUniform1fEXT (GLuint program, GLint location, GLfloat v0) {
}
GLAPI void APIENTRY stub_glProgramUniform2fEXT (GLuint program, GLint location, GLfloat v0, GLfloat v1) {
}
GLAPI void APIENTRY stub_glProgramUniform3fEXT (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2) {
}
GLAPI void APIENTRY stub_glProgramUniform4fEXT (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) {
}
GLAPI void APIENTRY stub_glProgramUniform1iEXT (GLuint program, GLint location, GLint v0) {
}
GLAPI void APIENTRY stub_glProgramUniform2iEXT (GLuint program, GLint location, GLint v0, GLint v1) {
}
GLAPI void APIENTRY stub_glProgramUniform3iEXT (GLuint program, GLint location, GLint v0, GLint v1, GLint v2) {
}
GLAPI void APIENTRY stub_glProgramUniform4iEXT (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3) {
}
GLAPI void APIENTRY stub_glProgramUniform1fvEXT (GLuint program, GLint location, GLsizei count, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glProgramUniform2fvEXT (GLuint program, GLint location, GLsizei count, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glProgramUniform3fvEXT (GLuint program, GLint location, GLsizei count, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glProgramUniform4fvEXT (GLuint program, GLint location, GLsizei count, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glProgramUniform1ivEXT (GLuint program, GLint location, GLsizei count, const GLint *value) {
}
GLAPI void APIENTRY stub_glProgramUniform2ivEXT (GLuint program, GLint location, GLsizei count, const GLint *value) {
}
GLAPI void APIENTRY stub_glProgramUniform3ivEXT (GLuint program, GLint location, GLsizei count, const GLint *value) {
}
GLAPI void APIENTRY stub_glProgramUniform4ivEXT (GLuint program, GLint location, GLsizei count, const GLint *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix2fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix3fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix4fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix2x3fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix3x2fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix2x4fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix4x2fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix3x4fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix4x3fvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glTextureBufferEXT (GLuint texture, GLenum target, GLenum internalformat, GLuint buffer) {
}
GLAPI void APIENTRY stub_glMultiTexBufferEXT (GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer) {
}
GLAPI void APIENTRY stub_glTextureParameterIivEXT (GLuint texture, GLenum target, GLenum pname, const GLint *params) {
}
GLAPI void APIENTRY stub_glTextureParameterIuivEXT (GLuint texture, GLenum target, GLenum pname, const GLuint *params) {
}
GLAPI void APIENTRY stub_glGetTextureParameterIivEXT (GLuint texture, GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetTextureParameterIuivEXT (GLuint texture, GLenum target, GLenum pname, GLuint *params) {
}
GLAPI void APIENTRY stub_glMultiTexParameterIivEXT (GLenum texunit, GLenum target, GLenum pname, const GLint *params) {
}
GLAPI void APIENTRY stub_glMultiTexParameterIuivEXT (GLenum texunit, GLenum target, GLenum pname, const GLuint *params) {
}
GLAPI void APIENTRY stub_glGetMultiTexParameterIivEXT (GLenum texunit, GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetMultiTexParameterIuivEXT (GLenum texunit, GLenum target, GLenum pname, GLuint *params) {
}
GLAPI void APIENTRY stub_glProgramUniform1uiEXT (GLuint program, GLint location, GLuint v0) {
}
GLAPI void APIENTRY stub_glProgramUniform2uiEXT (GLuint program, GLint location, GLuint v0, GLuint v1) {
}
GLAPI void APIENTRY stub_glProgramUniform3uiEXT (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2) {
}
GLAPI void APIENTRY stub_glProgramUniform4uiEXT (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) {
}
GLAPI void APIENTRY stub_glProgramUniform1uivEXT (GLuint program, GLint location, GLsizei count, const GLuint *value) {
}
GLAPI void APIENTRY stub_glProgramUniform2uivEXT (GLuint program, GLint location, GLsizei count, const GLuint *value) {
}
GLAPI void APIENTRY stub_glProgramUniform3uivEXT (GLuint program, GLint location, GLsizei count, const GLuint *value) {
}
GLAPI void APIENTRY stub_glProgramUniform4uivEXT (GLuint program, GLint location, GLsizei count, const GLuint *value) {
}
GLAPI void APIENTRY stub_glNamedProgramLocalParameters4fvEXT (GLuint program, GLenum target, GLuint index, GLsizei count, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glNamedProgramLocalParameterI4iEXT (GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w) {
}
GLAPI void APIENTRY stub_glNamedProgramLocalParameterI4ivEXT (GLuint program, GLenum target, GLuint index, const GLint *params) {
}
GLAPI void APIENTRY stub_glNamedProgramLocalParametersI4ivEXT (GLuint program, GLenum target, GLuint index, GLsizei count, const GLint *params) {
}
GLAPI void APIENTRY stub_glNamedProgramLocalParameterI4uiEXT (GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) {
}
GLAPI void APIENTRY stub_glNamedProgramLocalParameterI4uivEXT (GLuint program, GLenum target, GLuint index, const GLuint *params) {
}
GLAPI void APIENTRY stub_glNamedProgramLocalParametersI4uivEXT (GLuint program, GLenum target, GLuint index, GLsizei count, const GLuint *params) {
}
GLAPI void APIENTRY stub_glGetNamedProgramLocalParameterIivEXT (GLuint program, GLenum target, GLuint index, GLint *params) {
}
GLAPI void APIENTRY stub_glGetNamedProgramLocalParameterIuivEXT (GLuint program, GLenum target, GLuint index, GLuint *params) {
}
GLAPI void APIENTRY stub_glEnableClientStateiEXT (GLenum array, GLuint index) {
}
GLAPI void APIENTRY stub_glDisableClientStateiEXT (GLenum array, GLuint index) {
}
GLAPI void APIENTRY stub_glGetFloati_vEXT (GLenum pname, GLuint index, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetDoublei_vEXT (GLenum pname, GLuint index, GLdouble *params) {
}
GLAPI void APIENTRY stub_glGetPointeri_vEXT (GLenum pname, GLuint index, void **params) {
}
GLAPI void APIENTRY stub_glNamedProgramStringEXT (GLuint program, GLenum target, GLenum format, GLsizei len, const void *string) {
}
GLAPI void APIENTRY stub_glNamedProgramLocalParameter4dEXT (GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
}
GLAPI void APIENTRY stub_glNamedProgramLocalParameter4dvEXT (GLuint program, GLenum target, GLuint index, const GLdouble *params) {
}
GLAPI void APIENTRY stub_glNamedProgramLocalParameter4fEXT (GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
}
GLAPI void APIENTRY stub_glNamedProgramLocalParameter4fvEXT (GLuint program, GLenum target, GLuint index, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetNamedProgramLocalParameterdvEXT (GLuint program, GLenum target, GLuint index, GLdouble *params) {
}
GLAPI void APIENTRY stub_glGetNamedProgramLocalParameterfvEXT (GLuint program, GLenum target, GLuint index, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetNamedProgramivEXT (GLuint program, GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetNamedProgramStringEXT (GLuint program, GLenum target, GLenum pname, void *string) {
}
GLAPI void APIENTRY stub_glNamedRenderbufferStorageEXT (GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glGetNamedRenderbufferParameterivEXT (GLuint renderbuffer, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glNamedRenderbufferStorageMultisampleEXT (GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glNamedRenderbufferStorageMultisampleCoverageEXT (GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height) {
}
GLAPI GLenum APIENTRY stub_glCheckNamedFramebufferStatusEXT (GLuint framebuffer, GLenum target) {
	return (GLenum)0;
}
GLAPI void APIENTRY stub_glNamedFramebufferTexture1DEXT (GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level) {
}
GLAPI void APIENTRY stub_glNamedFramebufferTexture2DEXT (GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level) {
}
GLAPI void APIENTRY stub_glNamedFramebufferTexture3DEXT (GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset) {
}
GLAPI void APIENTRY stub_glNamedFramebufferRenderbufferEXT (GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) {
}
GLAPI void APIENTRY stub_glGetNamedFramebufferAttachmentParameterivEXT (GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGenerateTextureMipmapEXT (GLuint texture, GLenum target) {
}
GLAPI void APIENTRY stub_glGenerateMultiTexMipmapEXT (GLenum texunit, GLenum target) {
}
GLAPI void APIENTRY stub_glFramebufferDrawBufferEXT (GLuint framebuffer, GLenum mode) {
}
GLAPI void APIENTRY stub_glFramebufferDrawBuffersEXT (GLuint framebuffer, GLsizei n, const GLenum *bufs) {
}
GLAPI void APIENTRY stub_glFramebufferReadBufferEXT (GLuint framebuffer, GLenum mode) {
}
GLAPI void APIENTRY stub_glGetFramebufferParameterivEXT (GLuint framebuffer, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glNamedCopyBufferSubDataEXT (GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) {
}
GLAPI void APIENTRY stub_glNamedFramebufferTextureEXT (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level) {
}
GLAPI void APIENTRY stub_glNamedFramebufferTextureLayerEXT (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer) {
}
GLAPI void APIENTRY stub_glNamedFramebufferTextureFaceEXT (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face) {
}
GLAPI void APIENTRY stub_glTextureRenderbufferEXT (GLuint texture, GLenum target, GLuint renderbuffer) {
}
GLAPI void APIENTRY stub_glMultiTexRenderbufferEXT (GLenum texunit, GLenum target, GLuint renderbuffer) {
}
GLAPI void APIENTRY stub_glVertexArrayVertexOffsetEXT (GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset) {
}
GLAPI void APIENTRY stub_glVertexArrayColorOffsetEXT (GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset) {
}
GLAPI void APIENTRY stub_glVertexArrayEdgeFlagOffsetEXT (GLuint vaobj, GLuint buffer, GLsizei stride, GLintptr offset) {
}
GLAPI void APIENTRY stub_glVertexArrayIndexOffsetEXT (GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset) {
}
GLAPI void APIENTRY stub_glVertexArrayNormalOffsetEXT (GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset) {
}
GLAPI void APIENTRY stub_glVertexArrayTexCoordOffsetEXT (GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset) {
}
GLAPI void APIENTRY stub_glVertexArrayMultiTexCoordOffsetEXT (GLuint vaobj, GLuint buffer, GLenum texunit, GLint size, GLenum type, GLsizei stride, GLintptr offset) {
}
GLAPI void APIENTRY stub_glVertexArrayFogCoordOffsetEXT (GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset) {
}
GLAPI void APIENTRY stub_glVertexArraySecondaryColorOffsetEXT (GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset) {
}
GLAPI void APIENTRY stub_glVertexArrayVertexAttribOffsetEXT (GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLintptr offset) {
}
GLAPI void APIENTRY stub_glVertexArrayVertexAttribIOffsetEXT (GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset) {
}
GLAPI void APIENTRY stub_glEnableVertexArrayEXT (GLuint vaobj, GLenum array) {
}
GLAPI void APIENTRY stub_glDisableVertexArrayEXT (GLuint vaobj, GLenum array) {
}
GLAPI void APIENTRY stub_glEnableVertexArrayAttribEXT (GLuint vaobj, GLuint index) {
}
GLAPI void APIENTRY stub_glDisableVertexArrayAttribEXT (GLuint vaobj, GLuint index) {
}
GLAPI void APIENTRY stub_glGetVertexArrayIntegervEXT (GLuint vaobj, GLenum pname, GLint *param) {
}
GLAPI void APIENTRY stub_glGetVertexArrayPointervEXT (GLuint vaobj, GLenum pname, void **param) {
}
GLAPI void APIENTRY stub_glGetVertexArrayIntegeri_vEXT (GLuint vaobj, GLuint index, GLenum pname, GLint *param) {
}
GLAPI void APIENTRY stub_glGetVertexArrayPointeri_vEXT (GLuint vaobj, GLuint index, GLenum pname, void **param) {
}
GLAPI void *APIENTRY stub_glMapNamedBufferRangeEXT (GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access) {
	return (void *)0;
}
GLAPI void APIENTRY stub_glFlushMappedNamedBufferRangeEXT (GLuint buffer, GLintptr offset, GLsizeiptr length) {
}
GLAPI void APIENTRY stub_glNamedBufferStorageEXT (GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags) {
}
GLAPI void APIENTRY stub_glClearNamedBufferDataEXT (GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data) {
}
GLAPI void APIENTRY stub_glClearNamedBufferSubDataEXT (GLuint buffer, GLenum internalformat, GLsizeiptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data) {
}
GLAPI void APIENTRY stub_glNamedFramebufferParameteriEXT (GLuint framebuffer, GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glGetNamedFramebufferParameterivEXT (GLuint framebuffer, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glProgramUniform1dEXT (GLuint program, GLint location, GLdouble x) {
}
GLAPI void APIENTRY stub_glProgramUniform2dEXT (GLuint program, GLint location, GLdouble x, GLdouble y) {
}
GLAPI void APIENTRY stub_glProgramUniform3dEXT (GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z) {
}
GLAPI void APIENTRY stub_glProgramUniform4dEXT (GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
}
GLAPI void APIENTRY stub_glProgramUniform1dvEXT (GLuint program, GLint location, GLsizei count, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glProgramUniform2dvEXT (GLuint program, GLint location, GLsizei count, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glProgramUniform3dvEXT (GLuint program, GLint location, GLsizei count, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glProgramUniform4dvEXT (GLuint program, GLint location, GLsizei count, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix2dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix3dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix4dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix2x3dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix2x4dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix3x2dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix3x4dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix4x2dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix4x3dvEXT (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value) {
}
GLAPI void APIENTRY stub_glTextureBufferRangeEXT (GLuint texture, GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size) {
}
GLAPI void APIENTRY stub_glTextureStorage1DEXT (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width) {
}
GLAPI void APIENTRY stub_glTextureStorage2DEXT (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glTextureStorage3DEXT (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) {
}
GLAPI void APIENTRY stub_glTextureStorage2DMultisampleEXT (GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) {
}
GLAPI void APIENTRY stub_glTextureStorage3DMultisampleEXT (GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) {
}
GLAPI void APIENTRY stub_glVertexArrayBindVertexBufferEXT (GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride) {
}
GLAPI void APIENTRY stub_glVertexArrayVertexAttribFormatEXT (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset) {
}
GLAPI void APIENTRY stub_glVertexArrayVertexAttribIFormatEXT (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) {
}
GLAPI void APIENTRY stub_glVertexArrayVertexAttribLFormatEXT (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset) {
}
GLAPI void APIENTRY stub_glVertexArrayVertexAttribBindingEXT (GLuint vaobj, GLuint attribindex, GLuint bindingindex) {
}
GLAPI void APIENTRY stub_glVertexArrayVertexBindingDivisorEXT (GLuint vaobj, GLuint bindingindex, GLuint divisor) {
}
GLAPI void APIENTRY stub_glVertexArrayVertexAttribLOffsetEXT (GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset) {
}
GLAPI void APIENTRY stub_glTexturePageCommitmentEXT (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit) {
}
GLAPI void APIENTRY stub_glVertexArrayVertexAttribDivisorEXT (GLuint vaobj, GLuint index, GLuint divisor) {
}
GLAPI void APIENTRY stub_glColorMaskIndexedEXT (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a) {
}
GLAPI void APIENTRY stub_glDrawArraysInstancedEXT (GLenum mode, GLint start, GLsizei count, GLsizei primcount) {
}
GLAPI void APIENTRY stub_glDrawElementsInstancedEXT (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount) {
}
GLAPI void APIENTRY stub_glDrawRangeElementsEXT (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices) {
}
GLAPI void APIENTRY stub_glFogCoordfEXT (GLfloat coord) {
}
GLAPI void APIENTRY stub_glFogCoordfvEXT (const GLfloat *coord) {
}
GLAPI void APIENTRY stub_glFogCoorddEXT (GLdouble coord) {
}
GLAPI void APIENTRY stub_glFogCoorddvEXT (const GLdouble *coord) {
}
GLAPI void APIENTRY stub_glFogCoordPointerEXT (GLenum type, GLsizei stride, const void *pointer) {
}
GLAPI void APIENTRY stub_glBlitFramebufferEXT (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) {
}
GLAPI void APIENTRY stub_glRenderbufferStorageMultisampleEXT (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) {
}
GLAPI GLboolean APIENTRY stub_glIsRenderbufferEXT (GLuint renderbuffer) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glBindRenderbufferEXT (GLenum target, GLuint renderbuffer) {
}
GLAPI void APIENTRY stub_glDeleteRenderbuffersEXT (GLsizei n, const GLuint *renderbuffers) {
}
GLAPI void APIENTRY stub_glGenRenderbuffersEXT (GLsizei n, GLuint *renderbuffers) {
}
GLAPI void APIENTRY stub_glRenderbufferStorageEXT (GLenum target, GLenum internalformat, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glGetRenderbufferParameterivEXT (GLenum target, GLenum pname, GLint *params) {
}
GLAPI GLboolean APIENTRY stub_glIsFramebufferEXT (GLuint framebuffer) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glBindFramebufferEXT (GLenum target, GLuint framebuffer) {
}
GLAPI void APIENTRY stub_glDeleteFramebuffersEXT (GLsizei n, const GLuint *framebuffers) {
}
GLAPI void APIENTRY stub_glGenFramebuffersEXT (GLsizei n, GLuint *framebuffers) {
}
GLAPI GLenum APIENTRY stub_glCheckFramebufferStatusEXT (GLenum target) {
	return (GLenum)0;
}
GLAPI void APIENTRY stub_glFramebufferTexture1DEXT (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) {
}
GLAPI void APIENTRY stub_glFramebufferTexture2DEXT (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) {
}
GLAPI void APIENTRY stub_glFramebufferTexture3DEXT (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset) {
}
GLAPI void APIENTRY stub_glFramebufferRenderbufferEXT (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) {
}
GLAPI void APIENTRY stub_glGetFramebufferAttachmentParameterivEXT (GLenum target, GLenum attachment, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGenerateMipmapEXT (GLenum target) {
}
GLAPI void APIENTRY stub_glProgramParameteriEXT (GLuint program, GLenum pname, GLint value) {
}
GLAPI void APIENTRY stub_glProgramEnvParameters4fvEXT (GLenum target, GLuint index, GLsizei count, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glProgramLocalParameters4fvEXT (GLenum target, GLuint index, GLsizei count, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetUniformuivEXT (GLuint program, GLint location, GLuint *params) {
}
GLAPI void APIENTRY stub_glBindFragDataLocationEXT (GLuint program, GLuint color, const GLchar *name) {
}
GLAPI GLint APIENTRY stub_glGetFragDataLocationEXT (GLuint program, const GLchar *name) {
	return (GLint)0;
}
GLAPI void APIENTRY stub_glUniform1uiEXT (GLint location, GLuint v0) {
}
GLAPI void APIENTRY stub_glUniform2uiEXT (GLint location, GLuint v0, GLuint v1) {
}
GLAPI void APIENTRY stub_glUniform3uiEXT (GLint location, GLuint v0, GLuint v1, GLuint v2) {
}
GLAPI void APIENTRY stub_glUniform4uiEXT (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) {
}
GLAPI void APIENTRY stub_glUniform1uivEXT (GLint location, GLsizei count, const GLuint *value) {
}
GLAPI void APIENTRY stub_glUniform2uivEXT (GLint location, GLsizei count, const GLuint *value) {
}
GLAPI void APIENTRY stub_glUniform3uivEXT (GLint location, GLsizei count, const GLuint *value) {
}
GLAPI void APIENTRY stub_glUniform4uivEXT (GLint location, GLsizei count, const GLuint *value) {
}
GLAPI void APIENTRY stub_glGetHistogramEXT (GLenum target, GLboolean reset, GLenum format, GLenum type, void *values) {
}
GLAPI void APIENTRY stub_glGetHistogramParameterfvEXT (GLenum target, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetHistogramParameterivEXT (GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetMinmaxEXT (GLenum target, GLboolean reset, GLenum format, GLenum type, void *values) {
}
GLAPI void APIENTRY stub_glGetMinmaxParameterfvEXT (GLenum target, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetMinmaxParameterivEXT (GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glHistogramEXT (GLenum target, GLsizei width, GLenum internalformat, GLboolean sink) {
}
GLAPI void APIENTRY stub_glMinmaxEXT (GLenum target, GLenum internalformat, GLboolean sink) {
}
GLAPI void APIENTRY stub_glResetHistogramEXT (GLenum target) {
}
GLAPI void APIENTRY stub_glResetMinmaxEXT (GLenum target) {
}
GLAPI void APIENTRY stub_glIndexFuncEXT (GLenum func, GLclampf ref) {
}
GLAPI void APIENTRY stub_glIndexMaterialEXT (GLenum face, GLenum mode) {
}
GLAPI void APIENTRY stub_glApplyTextureEXT (GLenum mode) {
}
GLAPI void APIENTRY stub_glTextureLightEXT (GLenum pname) {
}
GLAPI void APIENTRY stub_glTextureMaterialEXT (GLenum face, GLenum mode) {
}
GLAPI void APIENTRY stub_glMultiDrawArraysEXT (GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount) {
}
GLAPI void APIENTRY stub_glMultiDrawElementsEXT (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei primcount) {
}
GLAPI void APIENTRY stub_glSampleMaskEXT (GLclampf value, GLboolean invert) {
}
GLAPI void APIENTRY stub_glSamplePatternEXT (GLenum pattern) {
}
GLAPI void APIENTRY stub_glColorTableEXT (GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const void *table) {
}
GLAPI void APIENTRY stub_glGetColorTableEXT (GLenum target, GLenum format, GLenum type, void *data) {
}
GLAPI void APIENTRY stub_glGetColorTableParameterivEXT (GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetColorTableParameterfvEXT (GLenum target, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glPixelTransformParameteriEXT (GLenum target, GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glPixelTransformParameterfEXT (GLenum target, GLenum pname, GLfloat param) {
}
GLAPI void APIENTRY stub_glPixelTransformParameterivEXT (GLenum target, GLenum pname, const GLint *params) {
}
GLAPI void APIENTRY stub_glPixelTransformParameterfvEXT (GLenum target, GLenum pname, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetPixelTransformParameterivEXT (GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetPixelTransformParameterfvEXT (GLenum target, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glPointParameterfEXT (GLenum pname, GLfloat param) {
}
GLAPI void APIENTRY stub_glPointParameterfvEXT (GLenum pname, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glPolygonOffsetEXT (GLfloat factor, GLfloat bias) {
}
GLAPI void APIENTRY stub_glPolygonOffsetClampEXT (GLfloat factor, GLfloat units, GLfloat clamp) {
}
GLAPI void APIENTRY stub_glProvokingVertexEXT (GLenum mode) {
}
GLAPI void APIENTRY stub_glRasterSamplesEXT (GLuint samples, GLboolean fixedsamplelocations) {
}
GLAPI void APIENTRY stub_glSecondaryColor3bEXT (GLbyte red, GLbyte green, GLbyte blue) {
}
GLAPI void APIENTRY stub_glSecondaryColor3bvEXT (const GLbyte *v) {
}
GLAPI void APIENTRY stub_glSecondaryColor3dEXT (GLdouble red, GLdouble green, GLdouble blue) {
}
GLAPI void APIENTRY stub_glSecondaryColor3dvEXT (const GLdouble *v) {
}
GLAPI void APIENTRY stub_glSecondaryColor3fEXT (GLfloat red, GLfloat green, GLfloat blue) {
}
GLAPI void APIENTRY stub_glSecondaryColor3fvEXT (const GLfloat *v) {
}
GLAPI void APIENTRY stub_glSecondaryColor3iEXT (GLint red, GLint green, GLint blue) {
}
GLAPI void APIENTRY stub_glSecondaryColor3ivEXT (const GLint *v) {
}
GLAPI void APIENTRY stub_glSecondaryColor3sEXT (GLshort red, GLshort green, GLshort blue) {
}
GLAPI void APIENTRY stub_glSecondaryColor3svEXT (const GLshort *v) {
}
GLAPI void APIENTRY stub_glSecondaryColor3ubEXT (GLubyte red, GLubyte green, GLubyte blue) {
}
GLAPI void APIENTRY stub_glSecondaryColor3ubvEXT (const GLubyte *v) {
}
GLAPI void APIENTRY stub_glSecondaryColor3uiEXT (GLuint red, GLuint green, GLuint blue) {
}
GLAPI void APIENTRY stub_glSecondaryColor3uivEXT (const GLuint *v) {
}
GLAPI void APIENTRY stub_glSecondaryColor3usEXT (GLushort red, GLushort green, GLushort blue) {
}
GLAPI void APIENTRY stub_glSecondaryColor3usvEXT (const GLushort *v) {
}
GLAPI void APIENTRY stub_glSecondaryColorPointerEXT (GLint size, GLenum type, GLsizei stride, const void *pointer) {
}
GLAPI void APIENTRY stub_glUseShaderProgramEXT (GLenum type, GLuint program) {
}
GLAPI void APIENTRY stub_glActiveProgramEXT (GLuint program) {
}
GLAPI GLuint APIENTRY stub_glCreateShaderProgramEXT (GLenum type, const GLchar *string) {
	return (GLuint)0;
}
GLAPI void APIENTRY stub_glBindImageTextureEXT (GLuint index, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLint format) {
}
GLAPI void APIENTRY stub_glMemoryBarrierEXT (GLbitfield barriers) {
}
GLAPI void APIENTRY stub_glStencilClearTagEXT (GLsizei stencilTagBits, GLuint stencilClearTag) {
}
GLAPI void APIENTRY stub_glActiveStencilFaceEXT (GLenum face) {
}
GLAPI void APIENTRY stub_glTexSubImage1DEXT (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels) {
}
GLAPI void APIENTRY stub_glTexSubImage2DEXT (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels) {
}
GLAPI void APIENTRY stub_glTexImage3DEXT (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels) {
}
GLAPI void APIENTRY stub_glTexSubImage3DEXT (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels) {
}
GLAPI void APIENTRY stub_glFramebufferTextureLayerEXT (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) {
}
GLAPI void APIENTRY stub_glTexBufferEXT (GLenum target, GLenum internalformat, GLuint buffer) {
}
GLAPI void APIENTRY stub_glTexParameterIivEXT (GLenum target, GLenum pname, const GLint *params) {
}
GLAPI void APIENTRY stub_glTexParameterIuivEXT (GLenum target, GLenum pname, const GLuint *params) {
}
GLAPI void APIENTRY stub_glGetTexParameterIivEXT (GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetTexParameterIuivEXT (GLenum target, GLenum pname, GLuint *params) {
}
GLAPI void APIENTRY stub_glClearColorIiEXT (GLint red, GLint green, GLint blue, GLint alpha) {
}
GLAPI void APIENTRY stub_glClearColorIuiEXT (GLuint red, GLuint green, GLuint blue, GLuint alpha) {
}
GLAPI GLboolean APIENTRY stub_glAreTexturesResidentEXT (GLsizei n, const GLuint *textures, GLboolean *residences) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glBindTextureEXT (GLenum target, GLuint texture) {
}
GLAPI void APIENTRY stub_glDeleteTexturesEXT (GLsizei n, const GLuint *textures) {
}
GLAPI void APIENTRY stub_glGenTexturesEXT (GLsizei n, GLuint *textures) {
}
GLAPI GLboolean APIENTRY stub_glIsTextureEXT (GLuint texture) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glPrioritizeTexturesEXT (GLsizei n, const GLuint *textures, const GLclampf *priorities) {
}
GLAPI void APIENTRY stub_glTextureNormalEXT (GLenum mode) {
}
GLAPI void APIENTRY stub_glGetQueryObjecti64vEXT (GLuint id, GLenum pname, GLint64 *params) {
}
GLAPI void APIENTRY stub_glGetQueryObjectui64vEXT (GLuint id, GLenum pname, GLuint64 *params) {
}
GLAPI void APIENTRY stub_glBeginTransformFeedbackEXT (GLenum primitiveMode) {
}
GLAPI void APIENTRY stub_glEndTransformFeedbackEXT (void) {
}
GLAPI void APIENTRY stub_glBindBufferRangeEXT (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) {
}
GLAPI void APIENTRY stub_glBindBufferOffsetEXT (GLenum target, GLuint index, GLuint buffer, GLintptr offset) {
}
GLAPI void APIENTRY stub_glBindBufferBaseEXT (GLenum target, GLuint index, GLuint buffer) {
}
GLAPI void APIENTRY stub_glTransformFeedbackVaryingsEXT (GLuint program, GLsizei count, const GLchar *const*varyings, GLenum bufferMode) {
}
GLAPI void APIENTRY stub_glGetTransformFeedbackVaryingEXT (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name) {
}
GLAPI void APIENTRY stub_glArrayElementEXT (GLint i) {
}
GLAPI void APIENTRY stub_glColorPointerEXT (GLint size, GLenum type, GLsizei stride, GLsizei count, const void *pointer) {
}
GLAPI void APIENTRY stub_glDrawArraysEXT (GLenum mode, GLint first, GLsizei count) {
}
GLAPI void APIENTRY stub_glEdgeFlagPointerEXT (GLsizei stride, GLsizei count, const GLboolean *pointer) {
}
GLAPI void APIENTRY stub_glGetPointervEXT (GLenum pname, void **params) {
}
GLAPI void APIENTRY stub_glIndexPointerEXT (GLenum type, GLsizei stride, GLsizei count, const void *pointer) {
}
GLAPI void APIENTRY stub_glNormalPointerEXT (GLenum type, GLsizei stride, GLsizei count, const void *pointer) {
}
GLAPI void APIENTRY stub_glTexCoordPointerEXT (GLint size, GLenum type, GLsizei stride, GLsizei count, const void *pointer) {
}
GLAPI void APIENTRY stub_glVertexPointerEXT (GLint size, GLenum type, GLsizei stride, GLsizei count, const void *pointer) {
}
GLAPI void APIENTRY stub_glVertexAttribL1dEXT (GLuint index, GLdouble x) {
}
GLAPI void APIENTRY stub_glVertexAttribL2dEXT (GLuint index, GLdouble x, GLdouble y) {
}
GLAPI void APIENTRY stub_glVertexAttribL3dEXT (GLuint index, GLdouble x, GLdouble y, GLdouble z) {
}
GLAPI void APIENTRY stub_glVertexAttribL4dEXT (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
}
GLAPI void APIENTRY stub_glVertexAttribL1dvEXT (GLuint index, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glVertexAttribL2dvEXT (GLuint index, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glVertexAttribL3dvEXT (GLuint index, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glVertexAttribL4dvEXT (GLuint index, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glVertexAttribLPointerEXT (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer) {
}
GLAPI void APIENTRY stub_glGetVertexAttribLdvEXT (GLuint index, GLenum pname, GLdouble *params) {
}
GLAPI void APIENTRY stub_glBeginVertexShaderEXT (void) {
}
GLAPI void APIENTRY stub_glEndVertexShaderEXT (void) {
}
GLAPI void APIENTRY stub_glBindVertexShaderEXT (GLuint id) {
}
GLAPI GLuint APIENTRY stub_glGenVertexShadersEXT (GLuint range) {
	return (GLuint)0;
}
GLAPI void APIENTRY stub_glDeleteVertexShaderEXT (GLuint id) {
}
GLAPI void APIENTRY stub_glShaderOp1EXT (GLenum op, GLuint res, GLuint arg1) {
}
GLAPI void APIENTRY stub_glShaderOp2EXT (GLenum op, GLuint res, GLuint arg1, GLuint arg2) {
}
GLAPI void APIENTRY stub_glShaderOp3EXT (GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3) {
}
GLAPI void APIENTRY stub_glSwizzleEXT (GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW) {
}
GLAPI void APIENTRY stub_glWriteMaskEXT (GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW) {
}
GLAPI void APIENTRY stub_glInsertComponentEXT (GLuint res, GLuint src, GLuint num) {
}
GLAPI void APIENTRY stub_glExtractComponentEXT (GLuint res, GLuint src, GLuint num) {
}
GLAPI GLuint APIENTRY stub_glGenSymbolsEXT (GLenum datatype, GLenum storagetype, GLenum range, GLuint components) {
	return (GLuint)0;
}
GLAPI void APIENTRY stub_glSetInvariantEXT (GLuint id, GLenum type, const void *addr) {
}
GLAPI void APIENTRY stub_glSetLocalConstantEXT (GLuint id, GLenum type, const void *addr) {
}
GLAPI void APIENTRY stub_glVariantbvEXT (GLuint id, const GLbyte *addr) {
}
GLAPI void APIENTRY stub_glVariantsvEXT (GLuint id, const GLshort *addr) {
}
GLAPI void APIENTRY stub_glVariantivEXT (GLuint id, const GLint *addr) {
}
GLAPI void APIENTRY stub_glVariantfvEXT (GLuint id, const GLfloat *addr) {
}
GLAPI void APIENTRY stub_glVariantdvEXT (GLuint id, const GLdouble *addr) {
}
GLAPI void APIENTRY stub_glVariantubvEXT (GLuint id, const GLubyte *addr) {
}
GLAPI void APIENTRY stub_glVariantusvEXT (GLuint id, const GLushort *addr) {
}
GLAPI void APIENTRY stub_glVariantuivEXT (GLuint id, const GLuint *addr) {
}
GLAPI void APIENTRY stub_glVariantPointerEXT (GLuint id, GLenum type, GLuint stride, const void *addr) {
}
GLAPI void APIENTRY stub_glEnableVariantClientStateEXT (GLuint id) {
}
GLAPI void APIENTRY stub_glDisableVariantClientStateEXT (GLuint id) {
}
GLAPI GLuint APIENTRY stub_glBindLightParameterEXT (GLenum light, GLenum value) {
	return (GLuint)0;
}
GLAPI GLuint APIENTRY stub_glBindMaterialParameterEXT (GLenum face, GLenum value) {
	return (GLuint)0;
}
GLAPI GLuint APIENTRY stub_glBindTexGenParameterEXT (GLenum unit, GLenum coord, GLenum value) {
	return (GLuint)0;
}
GLAPI GLuint APIENTRY stub_glBindTextureUnitParameterEXT (GLenum unit, GLenum value) {
	return (GLuint)0;
}
GLAPI GLuint APIENTRY stub_glBindParameterEXT (GLenum value) {
	return (GLuint)0;
}
GLAPI GLboolean APIENTRY stub_glIsVariantEnabledEXT (GLuint id, GLenum cap) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glGetVariantBooleanvEXT (GLuint id, GLenum value, GLboolean *data) {
}
GLAPI void APIENTRY stub_glGetVariantIntegervEXT (GLuint id, GLenum value, GLint *data) {
}
GLAPI void APIENTRY stub_glGetVariantFloatvEXT (GLuint id, GLenum value, GLfloat *data) {
}
GLAPI void APIENTRY stub_glGetVariantPointervEXT (GLuint id, GLenum value, void **data) {
}
GLAPI void APIENTRY stub_glGetInvariantBooleanvEXT (GLuint id, GLenum value, GLboolean *data) {
}
GLAPI void APIENTRY stub_glGetInvariantIntegervEXT (GLuint id, GLenum value, GLint *data) {
}
GLAPI void APIENTRY stub_glGetInvariantFloatvEXT (GLuint id, GLenum value, GLfloat *data) {
}
GLAPI void APIENTRY stub_glGetLocalConstantBooleanvEXT (GLuint id, GLenum value, GLboolean *data) {
}
GLAPI void APIENTRY stub_glGetLocalConstantIntegervEXT (GLuint id, GLenum value, GLint *data) {
}
GLAPI void APIENTRY stub_glGetLocalConstantFloatvEXT (GLuint id, GLenum value, GLfloat *data) {
}
GLAPI void APIENTRY stub_glVertexWeightfEXT (GLfloat weight) {
}
GLAPI void APIENTRY stub_glVertexWeightfvEXT (const GLfloat *weight) {
}
GLAPI void APIENTRY stub_glVertexWeightPointerEXT (GLint size, GLenum type, GLsizei stride, const void *pointer) {
}
GLAPI void APIENTRY stub_glWindowRectanglesEXT (GLenum mode, GLsizei count, const GLint *box) {
}
GLAPI GLsync APIENTRY stub_glImportSyncEXT (GLenum external_sync_type, GLintptr external_sync, GLbitfield flags) {
	return (GLsync)0;
}
GLAPI void APIENTRY stub_glFrameTerminatorGREMEDY (void) {
}
GLAPI void APIENTRY stub_glStringMarkerGREMEDY (GLsizei len, const void *string) {
}
GLAPI void APIENTRY stub_glImageTransformParameteriHP (GLenum target, GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glImageTransformParameterfHP (GLenum target, GLenum pname, GLfloat param) {
}
GLAPI void APIENTRY stub_glImageTransformParameterivHP (GLenum target, GLenum pname, const GLint *params) {
}
GLAPI void APIENTRY stub_glImageTransformParameterfvHP (GLenum target, GLenum pname, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetImageTransformParameterivHP (GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetImageTransformParameterfvHP (GLenum target, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glMultiModeDrawArraysIBM (const GLenum *mode, const GLint *first, const GLsizei *count, GLsizei primcount, GLint modestride) {
}
GLAPI void APIENTRY stub_glMultiModeDrawElementsIBM (const GLenum *mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei primcount, GLint modestride) {
}
GLAPI void APIENTRY stub_glFlushStaticDataIBM (GLenum target) {
}
GLAPI void APIENTRY stub_glColorPointerListIBM (GLint size, GLenum type, GLint stride, const void **pointer, GLint ptrstride) {
}
GLAPI void APIENTRY stub_glSecondaryColorPointerListIBM (GLint size, GLenum type, GLint stride, const void **pointer, GLint ptrstride) {
}
GLAPI void APIENTRY stub_glEdgeFlagPointerListIBM (GLint stride, const GLboolean **pointer, GLint ptrstride) {
}
GLAPI void APIENTRY stub_glFogCoordPointerListIBM (GLenum type, GLint stride, const void **pointer, GLint ptrstride) {
}
GLAPI void APIENTRY stub_glIndexPointerListIBM (GLenum type, GLint stride, const void **pointer, GLint ptrstride) {
}
GLAPI void APIENTRY stub_glNormalPointerListIBM (GLenum type, GLint stride, const void **pointer, GLint ptrstride) {
}
GLAPI void APIENTRY stub_glTexCoordPointerListIBM (GLint size, GLenum type, GLint stride, const void **pointer, GLint ptrstride) {
}
GLAPI void APIENTRY stub_glVertexPointerListIBM (GLint size, GLenum type, GLint stride, const void **pointer, GLint ptrstride) {
}
GLAPI void APIENTRY stub_glBlendFuncSeparateINGR (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) {
}
GLAPI void APIENTRY stub_glApplyFramebufferAttachmentCMAAINTEL (void) {
}
GLAPI void APIENTRY stub_glSyncTextureINTEL (GLuint texture) {
}
GLAPI void APIENTRY stub_glUnmapTexture2DINTEL (GLuint texture, GLint level) {
}
GLAPI void *APIENTRY stub_glMapTexture2DINTEL (GLuint texture, GLint level, GLbitfield access, GLint *stride, GLenum *layout) {
	return (void *)0;
}
GLAPI void APIENTRY stub_glVertexPointervINTEL (GLint size, GLenum type, const void **pointer) {
}
GLAPI void APIENTRY stub_glNormalPointervINTEL (GLenum type, const void **pointer) {
}
GLAPI void APIENTRY stub_glColorPointervINTEL (GLint size, GLenum type, const void **pointer) {
}
GLAPI void APIENTRY stub_glTexCoordPointervINTEL (GLint size, GLenum type, const void **pointer) {
}
GLAPI void APIENTRY stub_glBeginPerfQueryINTEL (GLuint queryHandle) {
}
GLAPI void APIENTRY stub_glCreatePerfQueryINTEL (GLuint queryId, GLuint *queryHandle) {
}
GLAPI void APIENTRY stub_glDeletePerfQueryINTEL (GLuint queryHandle) {
}
GLAPI void APIENTRY stub_glEndPerfQueryINTEL (GLuint queryHandle) {
}
GLAPI void APIENTRY stub_glGetFirstPerfQueryIdINTEL (GLuint *queryId) {
}
GLAPI void APIENTRY stub_glGetNextPerfQueryIdINTEL (GLuint queryId, GLuint *nextQueryId) {
}
GLAPI void APIENTRY stub_glGetPerfCounterInfoINTEL (GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar *counterName, GLuint counterDescLength, GLchar *counterDesc, GLuint *counterOffset, GLuint *counterDataSize, GLuint *counterTypeEnum, GLuint *counterDataTypeEnum, GLuint64 *rawCounterMaxValue) {
}
GLAPI void APIENTRY stub_glGetPerfQueryDataINTEL (GLuint queryHandle, GLuint flags, GLsizei dataSize, GLvoid *data, GLuint *bytesWritten) {
}
GLAPI void APIENTRY stub_glGetPerfQueryIdByNameINTEL (GLchar *queryName, GLuint *queryId) {
}
GLAPI void APIENTRY stub_glGetPerfQueryInfoINTEL (GLuint queryId, GLuint queryNameLength, GLchar *queryName, GLuint *dataSize, GLuint *noCounters, GLuint *noInstances, GLuint *capsMask) {
}
GLAPI void APIENTRY stub_glResizeBuffersMESA (void) {
}
GLAPI void APIENTRY stub_glWindowPos2dMESA (GLdouble x, GLdouble y) {
}
GLAPI void APIENTRY stub_glWindowPos2dvMESA (const GLdouble *v) {
}
GLAPI void APIENTRY stub_glWindowPos2fMESA (GLfloat x, GLfloat y) {
}
GLAPI void APIENTRY stub_glWindowPos2fvMESA (const GLfloat *v) {
}
GLAPI void APIENTRY stub_glWindowPos2iMESA (GLint x, GLint y) {
}
GLAPI void APIENTRY stub_glWindowPos2ivMESA (const GLint *v) {
}
GLAPI void APIENTRY stub_glWindowPos2sMESA (GLshort x, GLshort y) {
}
GLAPI void APIENTRY stub_glWindowPos2svMESA (const GLshort *v) {
}
GLAPI void APIENTRY stub_glWindowPos3dMESA (GLdouble x, GLdouble y, GLdouble z) {
}
GLAPI void APIENTRY stub_glWindowPos3dvMESA (const GLdouble *v) {
}
GLAPI void APIENTRY stub_glWindowPos3fMESA (GLfloat x, GLfloat y, GLfloat z) {
}
GLAPI void APIENTRY stub_glWindowPos3fvMESA (const GLfloat *v) {
}
GLAPI void APIENTRY stub_glWindowPos3iMESA (GLint x, GLint y, GLint z) {
}
GLAPI void APIENTRY stub_glWindowPos3ivMESA (const GLint *v) {
}
GLAPI void APIENTRY stub_glWindowPos3sMESA (GLshort x, GLshort y, GLshort z) {
}
GLAPI void APIENTRY stub_glWindowPos3svMESA (const GLshort *v) {
}
GLAPI void APIENTRY stub_glWindowPos4dMESA (GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
}
GLAPI void APIENTRY stub_glWindowPos4dvMESA (const GLdouble *v) {
}
GLAPI void APIENTRY stub_glWindowPos4fMESA (GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
}
GLAPI void APIENTRY stub_glWindowPos4fvMESA (const GLfloat *v) {
}
GLAPI void APIENTRY stub_glWindowPos4iMESA (GLint x, GLint y, GLint z, GLint w) {
}
GLAPI void APIENTRY stub_glWindowPos4ivMESA (const GLint *v) {
}
GLAPI void APIENTRY stub_glWindowPos4sMESA (GLshort x, GLshort y, GLshort z, GLshort w) {
}
GLAPI void APIENTRY stub_glWindowPos4svMESA (const GLshort *v) {
}
GLAPI void APIENTRY stub_glBeginConditionalRenderNVX (GLuint id) {
}
GLAPI void APIENTRY stub_glEndConditionalRenderNVX (void) {
}
GLAPI void APIENTRY stub_glMultiDrawArraysIndirectBindlessNV (GLenum mode, const void *indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount) {
}
GLAPI void APIENTRY stub_glMultiDrawElementsIndirectBindlessNV (GLenum mode, GLenum type, const void *indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount) {
}
GLAPI void APIENTRY stub_glMultiDrawArraysIndirectBindlessCountNV (GLenum mode, const void *indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount) {
}
GLAPI void APIENTRY stub_glMultiDrawElementsIndirectBindlessCountNV (GLenum mode, GLenum type, const void *indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount) {
}
GLAPI GLuint64 APIENTRY stub_glGetTextureHandleNV (GLuint texture) {
	return (GLuint64)0;
}
GLAPI GLuint64 APIENTRY stub_glGetTextureSamplerHandleNV (GLuint texture, GLuint sampler) {
	return (GLuint64)0;
}
GLAPI void APIENTRY stub_glMakeTextureHandleResidentNV (GLuint64 handle) {
}
GLAPI void APIENTRY stub_glMakeTextureHandleNonResidentNV (GLuint64 handle) {
}
GLAPI GLuint64 APIENTRY stub_glGetImageHandleNV (GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format) {
	return (GLuint64)0;
}
GLAPI void APIENTRY stub_glMakeImageHandleResidentNV (GLuint64 handle, GLenum access) {
}
GLAPI void APIENTRY stub_glMakeImageHandleNonResidentNV (GLuint64 handle) {
}
GLAPI void APIENTRY stub_glUniformHandleui64NV (GLint location, GLuint64 value) {
}
GLAPI void APIENTRY stub_glUniformHandleui64vNV (GLint location, GLsizei count, const GLuint64 *value) {
}
GLAPI void APIENTRY stub_glProgramUniformHandleui64NV (GLuint program, GLint location, GLuint64 value) {
}
GLAPI void APIENTRY stub_glProgramUniformHandleui64vNV (GLuint program, GLint location, GLsizei count, const GLuint64 *values) {
}
GLAPI GLboolean APIENTRY stub_glIsTextureHandleResidentNV (GLuint64 handle) {
	return (GLboolean)0;
}
GLAPI GLboolean APIENTRY stub_glIsImageHandleResidentNV (GLuint64 handle) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glBlendParameteriNV (GLenum pname, GLint value) {
}
GLAPI void APIENTRY stub_glBlendBarrierNV (void) {
}
GLAPI void APIENTRY stub_glViewportPositionWScaleNV (GLuint index, GLfloat xcoeff, GLfloat ycoeff) {
}
GLAPI void APIENTRY stub_glCreateStatesNV (GLsizei n, GLuint *states) {
}
GLAPI void APIENTRY stub_glDeleteStatesNV (GLsizei n, const GLuint *states) {
}
GLAPI GLboolean APIENTRY stub_glIsStateNV (GLuint state) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glStateCaptureNV (GLuint state, GLenum mode) {
}
GLAPI GLuint APIENTRY stub_glGetCommandHeaderNV (GLenum tokenID, GLuint size) {
	return (GLuint)0;
}
GLAPI GLushort APIENTRY stub_glGetStageIndexNV (GLenum shadertype) {
	return (GLushort)0;
}
GLAPI void APIENTRY stub_glDrawCommandsNV (GLenum primitiveMode, GLuint buffer, const GLintptr *indirects, const GLsizei *sizes, GLuint count) {
}
GLAPI void APIENTRY stub_glDrawCommandsAddressNV (GLenum primitiveMode, const GLuint64 *indirects, const GLsizei *sizes, GLuint count) {
}
GLAPI void APIENTRY stub_glDrawCommandsStatesNV (GLuint buffer, const GLintptr *indirects, const GLsizei *sizes, const GLuint *states, const GLuint *fbos, GLuint count) {
}
GLAPI void APIENTRY stub_glDrawCommandsStatesAddressNV (const GLuint64 *indirects, const GLsizei *sizes, const GLuint *states, const GLuint *fbos, GLuint count) {
}
GLAPI void APIENTRY stub_glCreateCommandListsNV (GLsizei n, GLuint *lists) {
}
GLAPI void APIENTRY stub_glDeleteCommandListsNV (GLsizei n, const GLuint *lists) {
}
GLAPI GLboolean APIENTRY stub_glIsCommandListNV (GLuint list) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glListDrawCommandsStatesClientNV (GLuint list, GLuint segment, const void **indirects, const GLsizei *sizes, const GLuint *states, const GLuint *fbos, GLuint count) {
}
GLAPI void APIENTRY stub_glCommandListSegmentsNV (GLuint list, GLuint segments) {
}
GLAPI void APIENTRY stub_glCompileCommandListNV (GLuint list) {
}
GLAPI void APIENTRY stub_glCallCommandListNV (GLuint list) {
}
GLAPI void APIENTRY stub_glBeginConditionalRenderNV (GLuint id, GLenum mode) {
}
GLAPI void APIENTRY stub_glEndConditionalRenderNV (void) {
}
GLAPI void APIENTRY stub_glSubpixelPrecisionBiasNV (GLuint xbits, GLuint ybits) {
}
GLAPI void APIENTRY stub_glConservativeRasterParameterfNV (GLenum pname, GLfloat value) {
}
GLAPI void APIENTRY stub_glConservativeRasterParameteriNV (GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glCopyImageSubDataNV (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth) {
}
GLAPI void APIENTRY stub_glDepthRangedNV (GLdouble zNear, GLdouble zFar) {
}
GLAPI void APIENTRY stub_glClearDepthdNV (GLdouble depth) {
}
GLAPI void APIENTRY stub_glDepthBoundsdNV (GLdouble zmin, GLdouble zmax) {
}
GLAPI void APIENTRY stub_glDrawTextureNV (GLuint texture, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1) {
}
GLAPI void APIENTRY stub_glMapControlPointsNV (GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, const void *points) {
}
GLAPI void APIENTRY stub_glMapParameterivNV (GLenum target, GLenum pname, const GLint *params) {
}
GLAPI void APIENTRY stub_glMapParameterfvNV (GLenum target, GLenum pname, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetMapControlPointsNV (GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, void *points) {
}
GLAPI void APIENTRY stub_glGetMapParameterivNV (GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetMapParameterfvNV (GLenum target, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetMapAttribParameterivNV (GLenum target, GLuint index, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetMapAttribParameterfvNV (GLenum target, GLuint index, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glEvalMapsNV (GLenum target, GLenum mode) {
}
GLAPI void APIENTRY stub_glGetMultisamplefvNV (GLenum pname, GLuint index, GLfloat *val) {
}
GLAPI void APIENTRY stub_glSampleMaskIndexedNV (GLuint index, GLbitfield mask) {
}
GLAPI void APIENTRY stub_glTexRenderbufferNV (GLenum target, GLuint renderbuffer) {
}
GLAPI void APIENTRY stub_glDeleteFencesNV (GLsizei n, const GLuint *fences) {
}
GLAPI void APIENTRY stub_glGenFencesNV (GLsizei n, GLuint *fences) {
}
GLAPI GLboolean APIENTRY stub_glIsFenceNV (GLuint fence) {
	return (GLboolean)0;
}
GLAPI GLboolean APIENTRY stub_glTestFenceNV (GLuint fence) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glGetFenceivNV (GLuint fence, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glFinishFenceNV (GLuint fence) {
}
GLAPI void APIENTRY stub_glSetFenceNV (GLuint fence, GLenum condition) {
}
GLAPI void APIENTRY stub_glFragmentCoverageColorNV (GLuint color) {
}
GLAPI void APIENTRY stub_glProgramNamedParameter4fNV (GLuint id, GLsizei len, const GLubyte *name, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
}
GLAPI void APIENTRY stub_glProgramNamedParameter4fvNV (GLuint id, GLsizei len, const GLubyte *name, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glProgramNamedParameter4dNV (GLuint id, GLsizei len, const GLubyte *name, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
}
GLAPI void APIENTRY stub_glProgramNamedParameter4dvNV (GLuint id, GLsizei len, const GLubyte *name, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glGetProgramNamedParameterfvNV (GLuint id, GLsizei len, const GLubyte *name, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetProgramNamedParameterdvNV (GLuint id, GLsizei len, const GLubyte *name, GLdouble *params) {
}
GLAPI void APIENTRY stub_glCoverageModulationTableNV (GLsizei n, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glGetCoverageModulationTableNV (GLsizei bufsize, GLfloat *v) {
}
GLAPI void APIENTRY stub_glCoverageModulationNV (GLenum components) {
}
GLAPI void APIENTRY stub_glRenderbufferStorageMultisampleCoverageNV (GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glProgramVertexLimitNV (GLenum target, GLint limit) {
}
GLAPI void APIENTRY stub_glFramebufferTextureEXT (GLenum target, GLenum attachment, GLuint texture, GLint level) {
}
GLAPI void APIENTRY stub_glFramebufferTextureFaceEXT (GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face) {
}
GLAPI void APIENTRY stub_glProgramLocalParameterI4iNV (GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w) {
}
GLAPI void APIENTRY stub_glProgramLocalParameterI4ivNV (GLenum target, GLuint index, const GLint *params) {
}
GLAPI void APIENTRY stub_glProgramLocalParametersI4ivNV (GLenum target, GLuint index, GLsizei count, const GLint *params) {
}
GLAPI void APIENTRY stub_glProgramLocalParameterI4uiNV (GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) {
}
GLAPI void APIENTRY stub_glProgramLocalParameterI4uivNV (GLenum target, GLuint index, const GLuint *params) {
}
GLAPI void APIENTRY stub_glProgramLocalParametersI4uivNV (GLenum target, GLuint index, GLsizei count, const GLuint *params) {
}
GLAPI void APIENTRY stub_glProgramEnvParameterI4iNV (GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w) {
}
GLAPI void APIENTRY stub_glProgramEnvParameterI4ivNV (GLenum target, GLuint index, const GLint *params) {
}
GLAPI void APIENTRY stub_glProgramEnvParametersI4ivNV (GLenum target, GLuint index, GLsizei count, const GLint *params) {
}
GLAPI void APIENTRY stub_glProgramEnvParameterI4uiNV (GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) {
}
GLAPI void APIENTRY stub_glProgramEnvParameterI4uivNV (GLenum target, GLuint index, const GLuint *params) {
}
GLAPI void APIENTRY stub_glProgramEnvParametersI4uivNV (GLenum target, GLuint index, GLsizei count, const GLuint *params) {
}
GLAPI void APIENTRY stub_glGetProgramLocalParameterIivNV (GLenum target, GLuint index, GLint *params) {
}
GLAPI void APIENTRY stub_glGetProgramLocalParameterIuivNV (GLenum target, GLuint index, GLuint *params) {
}
GLAPI void APIENTRY stub_glGetProgramEnvParameterIivNV (GLenum target, GLuint index, GLint *params) {
}
GLAPI void APIENTRY stub_glGetProgramEnvParameterIuivNV (GLenum target, GLuint index, GLuint *params) {
}
GLAPI void APIENTRY stub_glProgramSubroutineParametersuivNV (GLenum target, GLsizei count, const GLuint *params) {
}
GLAPI void APIENTRY stub_glGetProgramSubroutineParameteruivNV (GLenum target, GLuint index, GLuint *param) {
}
GLAPI void APIENTRY stub_glVertex2hNV (GLhalfNV x, GLhalfNV y) {
}
GLAPI void APIENTRY stub_glVertex2hvNV (const GLhalfNV *v) {
}
GLAPI void APIENTRY stub_glVertex3hNV (GLhalfNV x, GLhalfNV y, GLhalfNV z) {
}
GLAPI void APIENTRY stub_glVertex3hvNV (const GLhalfNV *v) {
}
GLAPI void APIENTRY stub_glVertex4hNV (GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w) {
}
GLAPI void APIENTRY stub_glVertex4hvNV (const GLhalfNV *v) {
}
GLAPI void APIENTRY stub_glNormal3hNV (GLhalfNV nx, GLhalfNV ny, GLhalfNV nz) {
}
GLAPI void APIENTRY stub_glNormal3hvNV (const GLhalfNV *v) {
}
GLAPI void APIENTRY stub_glColor3hNV (GLhalfNV red, GLhalfNV green, GLhalfNV blue) {
}
GLAPI void APIENTRY stub_glColor3hvNV (const GLhalfNV *v) {
}
GLAPI void APIENTRY stub_glColor4hNV (GLhalfNV red, GLhalfNV green, GLhalfNV blue, GLhalfNV alpha) {
}
GLAPI void APIENTRY stub_glColor4hvNV (const GLhalfNV *v) {
}
GLAPI void APIENTRY stub_glTexCoord1hNV (GLhalfNV s) {
}
GLAPI void APIENTRY stub_glTexCoord1hvNV (const GLhalfNV *v) {
}
GLAPI void APIENTRY stub_glTexCoord2hNV (GLhalfNV s, GLhalfNV t) {
}
GLAPI void APIENTRY stub_glTexCoord2hvNV (const GLhalfNV *v) {
}
GLAPI void APIENTRY stub_glTexCoord3hNV (GLhalfNV s, GLhalfNV t, GLhalfNV r) {
}
GLAPI void APIENTRY stub_glTexCoord3hvNV (const GLhalfNV *v) {
}
GLAPI void APIENTRY stub_glTexCoord4hNV (GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q) {
}
GLAPI void APIENTRY stub_glTexCoord4hvNV (const GLhalfNV *v) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1hNV (GLenum target, GLhalfNV s) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1hvNV (GLenum target, const GLhalfNV *v) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2hNV (GLenum target, GLhalfNV s, GLhalfNV t) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2hvNV (GLenum target, const GLhalfNV *v) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3hNV (GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3hvNV (GLenum target, const GLhalfNV *v) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4hNV (GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4hvNV (GLenum target, const GLhalfNV *v) {
}
GLAPI void APIENTRY stub_glFogCoordhNV (GLhalfNV fog) {
}
GLAPI void APIENTRY stub_glFogCoordhvNV (const GLhalfNV *fog) {
}
GLAPI void APIENTRY stub_glSecondaryColor3hNV (GLhalfNV red, GLhalfNV green, GLhalfNV blue) {
}
GLAPI void APIENTRY stub_glSecondaryColor3hvNV (const GLhalfNV *v) {
}
GLAPI void APIENTRY stub_glVertexWeighthNV (GLhalfNV weight) {
}
GLAPI void APIENTRY stub_glVertexWeighthvNV (const GLhalfNV *weight) {
}
GLAPI void APIENTRY stub_glVertexAttrib1hNV (GLuint index, GLhalfNV x) {
}
GLAPI void APIENTRY stub_glVertexAttrib1hvNV (GLuint index, const GLhalfNV *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib2hNV (GLuint index, GLhalfNV x, GLhalfNV y) {
}
GLAPI void APIENTRY stub_glVertexAttrib2hvNV (GLuint index, const GLhalfNV *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib3hNV (GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z) {
}
GLAPI void APIENTRY stub_glVertexAttrib3hvNV (GLuint index, const GLhalfNV *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib4hNV (GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w) {
}
GLAPI void APIENTRY stub_glVertexAttrib4hvNV (GLuint index, const GLhalfNV *v) {
}
GLAPI void APIENTRY stub_glVertexAttribs1hvNV (GLuint index, GLsizei n, const GLhalfNV *v) {
}
GLAPI void APIENTRY stub_glVertexAttribs2hvNV (GLuint index, GLsizei n, const GLhalfNV *v) {
}
GLAPI void APIENTRY stub_glVertexAttribs3hvNV (GLuint index, GLsizei n, const GLhalfNV *v) {
}
GLAPI void APIENTRY stub_glVertexAttribs4hvNV (GLuint index, GLsizei n, const GLhalfNV *v) {
}
GLAPI void APIENTRY stub_glGetInternalformatSampleivNV (GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei bufSize, GLint *params) {
}
GLAPI void APIENTRY stub_glGenOcclusionQueriesNV (GLsizei n, GLuint *ids) {
}
GLAPI void APIENTRY stub_glDeleteOcclusionQueriesNV (GLsizei n, const GLuint *ids) {
}
GLAPI GLboolean APIENTRY stub_glIsOcclusionQueryNV (GLuint id) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glBeginOcclusionQueryNV (GLuint id) {
}
GLAPI void APIENTRY stub_glEndOcclusionQueryNV (void) {
}
GLAPI void APIENTRY stub_glGetOcclusionQueryivNV (GLuint id, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetOcclusionQueryuivNV (GLuint id, GLenum pname, GLuint *params) {
}
GLAPI void APIENTRY stub_glProgramBufferParametersfvNV (GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glProgramBufferParametersIivNV (GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLint *params) {
}
GLAPI void APIENTRY stub_glProgramBufferParametersIuivNV (GLenum target, GLuint bindingIndex, GLuint wordIndex, GLsizei count, const GLuint *params) {
}
GLAPI GLuint APIENTRY stub_glGenPathsNV (GLsizei range) {
	return (GLuint)0;
}
GLAPI void APIENTRY stub_glDeletePathsNV (GLuint path, GLsizei range) {
}
GLAPI GLboolean APIENTRY stub_glIsPathNV (GLuint path) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glPathCommandsNV (GLuint path, GLsizei numCommands, const GLubyte *commands, GLsizei numCoords, GLenum coordType, const void *coords) {
}
GLAPI void APIENTRY stub_glPathCoordsNV (GLuint path, GLsizei numCoords, GLenum coordType, const void *coords) {
}
GLAPI void APIENTRY stub_glPathSubCommandsNV (GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte *commands, GLsizei numCoords, GLenum coordType, const void *coords) {
}
GLAPI void APIENTRY stub_glPathSubCoordsNV (GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void *coords) {
}
GLAPI void APIENTRY stub_glPathStringNV (GLuint path, GLenum format, GLsizei length, const void *pathString) {
}
GLAPI void APIENTRY stub_glPathGlyphsNV (GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLsizei numGlyphs, GLenum type, const void *charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale) {
}
GLAPI void APIENTRY stub_glPathGlyphRangeNV (GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale) {
}
GLAPI void APIENTRY stub_glWeightPathsNV (GLuint resultPath, GLsizei numPaths, const GLuint *paths, const GLfloat *weights) {
}
GLAPI void APIENTRY stub_glCopyPathNV (GLuint resultPath, GLuint srcPath) {
}
GLAPI void APIENTRY stub_glInterpolatePathsNV (GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight) {
}
GLAPI void APIENTRY stub_glTransformPathNV (GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat *transformValues) {
}
GLAPI void APIENTRY stub_glPathParameterivNV (GLuint path, GLenum pname, const GLint *value) {
}
GLAPI void APIENTRY stub_glPathParameteriNV (GLuint path, GLenum pname, GLint value) {
}
GLAPI void APIENTRY stub_glPathParameterfvNV (GLuint path, GLenum pname, const GLfloat *value) {
}
GLAPI void APIENTRY stub_glPathParameterfNV (GLuint path, GLenum pname, GLfloat value) {
}
GLAPI void APIENTRY stub_glPathDashArrayNV (GLuint path, GLsizei dashCount, const GLfloat *dashArray) {
}
GLAPI void APIENTRY stub_glPathStencilFuncNV (GLenum func, GLint ref, GLuint mask) {
}
GLAPI void APIENTRY stub_glPathStencilDepthOffsetNV (GLfloat factor, GLfloat units) {
}
GLAPI void APIENTRY stub_glStencilFillPathNV (GLuint path, GLenum fillMode, GLuint mask) {
}
GLAPI void APIENTRY stub_glStencilStrokePathNV (GLuint path, GLint reference, GLuint mask) {
}
GLAPI void APIENTRY stub_glStencilFillPathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat *transformValues) {
}
GLAPI void APIENTRY stub_glStencilStrokePathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat *transformValues) {
}
GLAPI void APIENTRY stub_glPathCoverDepthFuncNV (GLenum func) {
}
GLAPI void APIENTRY stub_glCoverFillPathNV (GLuint path, GLenum coverMode) {
}
GLAPI void APIENTRY stub_glCoverStrokePathNV (GLuint path, GLenum coverMode) {
}
GLAPI void APIENTRY stub_glCoverFillPathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat *transformValues) {
}
GLAPI void APIENTRY stub_glCoverStrokePathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat *transformValues) {
}
GLAPI void APIENTRY stub_glGetPathParameterivNV (GLuint path, GLenum pname, GLint *value) {
}
GLAPI void APIENTRY stub_glGetPathParameterfvNV (GLuint path, GLenum pname, GLfloat *value) {
}
GLAPI void APIENTRY stub_glGetPathCommandsNV (GLuint path, GLubyte *commands) {
}
GLAPI void APIENTRY stub_glGetPathCoordsNV (GLuint path, GLfloat *coords) {
}
GLAPI void APIENTRY stub_glGetPathDashArrayNV (GLuint path, GLfloat *dashArray) {
}
GLAPI void APIENTRY stub_glGetPathMetricsNV (GLbitfield metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLsizei stride, GLfloat *metrics) {
}
GLAPI void APIENTRY stub_glGetPathMetricRangeNV (GLbitfield metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat *metrics) {
}
GLAPI void APIENTRY stub_glGetPathSpacingNV (GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat *returnedSpacing) {
}
GLAPI GLboolean APIENTRY stub_glIsPointInFillPathNV (GLuint path, GLuint mask, GLfloat x, GLfloat y) {
	return (GLboolean)0;
}
GLAPI GLboolean APIENTRY stub_glIsPointInStrokePathNV (GLuint path, GLfloat x, GLfloat y) {
	return (GLboolean)0;
}
GLAPI GLfloat APIENTRY stub_glGetPathLengthNV (GLuint path, GLsizei startSegment, GLsizei numSegments) {
	return (GLfloat)0;
}
GLAPI GLboolean APIENTRY stub_glPointAlongPathNV (GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat *x, GLfloat *y, GLfloat *tangentX, GLfloat *tangentY) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glMatrixLoad3x2fNV (GLenum matrixMode, const GLfloat *m) {
}
GLAPI void APIENTRY stub_glMatrixLoad3x3fNV (GLenum matrixMode, const GLfloat *m) {
}
GLAPI void APIENTRY stub_glMatrixLoadTranspose3x3fNV (GLenum matrixMode, const GLfloat *m) {
}
GLAPI void APIENTRY stub_glMatrixMult3x2fNV (GLenum matrixMode, const GLfloat *m) {
}
GLAPI void APIENTRY stub_glMatrixMult3x3fNV (GLenum matrixMode, const GLfloat *m) {
}
GLAPI void APIENTRY stub_glMatrixMultTranspose3x3fNV (GLenum matrixMode, const GLfloat *m) {
}
GLAPI void APIENTRY stub_glStencilThenCoverFillPathNV (GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode) {
}
GLAPI void APIENTRY stub_glStencilThenCoverStrokePathNV (GLuint path, GLint reference, GLuint mask, GLenum coverMode) {
}
GLAPI void APIENTRY stub_glStencilThenCoverFillPathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat *transformValues) {
}
GLAPI void APIENTRY stub_glStencilThenCoverStrokePathInstancedNV (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat *transformValues) {
}
GLAPI GLenum APIENTRY stub_glPathGlyphIndexRangeNV (GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint baseAndCount[2]) {
	return (GLenum)0;
}
GLAPI GLenum APIENTRY stub_glPathGlyphIndexArrayNV (GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale) {
	return (GLenum)0;
}
GLAPI GLenum APIENTRY stub_glPathMemoryGlyphIndexArrayNV (GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, const void *fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale) {
	return (GLenum)0;
}
GLAPI void APIENTRY stub_glProgramPathFragmentInputGenNV (GLuint program, GLint location, GLenum genMode, GLint components, const GLfloat *coeffs) {
}
GLAPI void APIENTRY stub_glGetProgramResourcefvNV (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei bufSize, GLsizei *length, GLfloat *params) {
}
GLAPI void APIENTRY stub_glPathColorGenNV (GLenum color, GLenum genMode, GLenum colorFormat, const GLfloat *coeffs) {
}
GLAPI void APIENTRY stub_glPathTexGenNV (GLenum texCoordSet, GLenum genMode, GLint components, const GLfloat *coeffs) {
}
GLAPI void APIENTRY stub_glPathFogGenNV (GLenum genMode) {
}
GLAPI void APIENTRY stub_glGetPathColorGenivNV (GLenum color, GLenum pname, GLint *value) {
}
GLAPI void APIENTRY stub_glGetPathColorGenfvNV (GLenum color, GLenum pname, GLfloat *value) {
}
GLAPI void APIENTRY stub_glGetPathTexGenivNV (GLenum texCoordSet, GLenum pname, GLint *value) {
}
GLAPI void APIENTRY stub_glGetPathTexGenfvNV (GLenum texCoordSet, GLenum pname, GLfloat *value) {
}
GLAPI void APIENTRY stub_glPixelDataRangeNV (GLenum target, GLsizei length, const void *pointer) {
}
GLAPI void APIENTRY stub_glFlushPixelDataRangeNV (GLenum target) {
}
GLAPI void APIENTRY stub_glPointParameteriNV (GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glPointParameterivNV (GLenum pname, const GLint *params) {
}
GLAPI void APIENTRY stub_glPresentFrameKeyedNV (GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLuint key0, GLenum target1, GLuint fill1, GLuint key1) {
}
GLAPI void APIENTRY stub_glPresentFrameDualFillNV (GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLenum target1, GLuint fill1, GLenum target2, GLuint fill2, GLenum target3, GLuint fill3) {
}
GLAPI void APIENTRY stub_glGetVideoivNV (GLuint video_slot, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetVideouivNV (GLuint video_slot, GLenum pname, GLuint *params) {
}
GLAPI void APIENTRY stub_glGetVideoi64vNV (GLuint video_slot, GLenum pname, GLint64EXT *params) {
}
GLAPI void APIENTRY stub_glGetVideoui64vNV (GLuint video_slot, GLenum pname, GLuint64EXT *params) {
}
GLAPI void APIENTRY stub_glPrimitiveRestartNV (void) {
}
GLAPI void APIENTRY stub_glPrimitiveRestartIndexNV (GLuint index) {
}
GLAPI void APIENTRY stub_glCombinerParameterfvNV (GLenum pname, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glCombinerParameterfNV (GLenum pname, GLfloat param) {
}
GLAPI void APIENTRY stub_glCombinerParameterivNV (GLenum pname, const GLint *params) {
}
GLAPI void APIENTRY stub_glCombinerParameteriNV (GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glCombinerInputNV (GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage) {
}
GLAPI void APIENTRY stub_glCombinerOutputNV (GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum) {
}
GLAPI void APIENTRY stub_glFinalCombinerInputNV (GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage) {
}
GLAPI void APIENTRY stub_glGetCombinerInputParameterfvNV (GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetCombinerInputParameterivNV (GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetCombinerOutputParameterfvNV (GLenum stage, GLenum portion, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetCombinerOutputParameterivNV (GLenum stage, GLenum portion, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetFinalCombinerInputParameterfvNV (GLenum variable, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetFinalCombinerInputParameterivNV (GLenum variable, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glCombinerStageParameterfvNV (GLenum stage, GLenum pname, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetCombinerStageParameterfvNV (GLenum stage, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glFramebufferSampleLocationsfvNV (GLenum target, GLuint start, GLsizei count, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glNamedFramebufferSampleLocationsfvNV (GLuint framebuffer, GLuint start, GLsizei count, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glResolveDepthValuesNV (void) {
}
GLAPI void APIENTRY stub_glMakeBufferResidentNV (GLenum target, GLenum access) {
}
GLAPI void APIENTRY stub_glMakeBufferNonResidentNV (GLenum target) {
}
GLAPI GLboolean APIENTRY stub_glIsBufferResidentNV (GLenum target) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glMakeNamedBufferResidentNV (GLuint buffer, GLenum access) {
}
GLAPI void APIENTRY stub_glMakeNamedBufferNonResidentNV (GLuint buffer) {
}
GLAPI GLboolean APIENTRY stub_glIsNamedBufferResidentNV (GLuint buffer) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glGetBufferParameterui64vNV (GLenum target, GLenum pname, GLuint64EXT *params) {
}
GLAPI void APIENTRY stub_glGetNamedBufferParameterui64vNV (GLuint buffer, GLenum pname, GLuint64EXT *params) {
}
GLAPI void APIENTRY stub_glGetIntegerui64vNV (GLenum value, GLuint64EXT *result) {
}
GLAPI void APIENTRY stub_glUniformui64NV (GLint location, GLuint64EXT value) {
}
GLAPI void APIENTRY stub_glUniformui64vNV (GLint location, GLsizei count, const GLuint64EXT *value) {
}
GLAPI void APIENTRY stub_glProgramUniformui64NV (GLuint program, GLint location, GLuint64EXT value) {
}
GLAPI void APIENTRY stub_glProgramUniformui64vNV (GLuint program, GLint location, GLsizei count, const GLuint64EXT *value) {
}
GLAPI void APIENTRY stub_glTextureBarrierNV (void) {
}
GLAPI void APIENTRY stub_glTexImage2DMultisampleCoverageNV (GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations) {
}
GLAPI void APIENTRY stub_glTexImage3DMultisampleCoverageNV (GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations) {
}
GLAPI void APIENTRY stub_glTextureImage2DMultisampleNV (GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations) {
}
GLAPI void APIENTRY stub_glTextureImage3DMultisampleNV (GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations) {
}
GLAPI void APIENTRY stub_glTextureImage2DMultisampleCoverageNV (GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations) {
}
GLAPI void APIENTRY stub_glTextureImage3DMultisampleCoverageNV (GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations) {
}
GLAPI void APIENTRY stub_glBeginTransformFeedbackNV (GLenum primitiveMode) {
}
GLAPI void APIENTRY stub_glEndTransformFeedbackNV (void) {
}
GLAPI void APIENTRY stub_glTransformFeedbackAttribsNV (GLsizei count, const GLint *attribs, GLenum bufferMode) {
}
GLAPI void APIENTRY stub_glBindBufferRangeNV (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) {
}
GLAPI void APIENTRY stub_glBindBufferOffsetNV (GLenum target, GLuint index, GLuint buffer, GLintptr offset) {
}
GLAPI void APIENTRY stub_glBindBufferBaseNV (GLenum target, GLuint index, GLuint buffer) {
}
GLAPI void APIENTRY stub_glTransformFeedbackVaryingsNV (GLuint program, GLsizei count, const GLint *locations, GLenum bufferMode) {
}
GLAPI void APIENTRY stub_glActiveVaryingNV (GLuint program, const GLchar *name) {
}
GLAPI GLint APIENTRY stub_glGetVaryingLocationNV (GLuint program, const GLchar *name) {
	return (GLint)0;
}
GLAPI void APIENTRY stub_glGetActiveVaryingNV (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name) {
}
GLAPI void APIENTRY stub_glGetTransformFeedbackVaryingNV (GLuint program, GLuint index, GLint *location) {
}
GLAPI void APIENTRY stub_glTransformFeedbackStreamAttribsNV (GLsizei count, const GLint *attribs, GLsizei nbuffers, const GLint *bufstreams, GLenum bufferMode) {
}
GLAPI void APIENTRY stub_glBindTransformFeedbackNV (GLenum target, GLuint id) {
}
GLAPI void APIENTRY stub_glDeleteTransformFeedbacksNV (GLsizei n, const GLuint *ids) {
}
GLAPI void APIENTRY stub_glGenTransformFeedbacksNV (GLsizei n, GLuint *ids) {
}
GLAPI GLboolean APIENTRY stub_glIsTransformFeedbackNV (GLuint id) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glPauseTransformFeedbackNV (void) {
}
GLAPI void APIENTRY stub_glResumeTransformFeedbackNV (void) {
}
GLAPI void APIENTRY stub_glDrawTransformFeedbackNV (GLenum mode, GLuint id) {
}
GLAPI void APIENTRY stub_glVDPAUInitNV (const void *vdpDevice, const void *getProcAddress) {
}
GLAPI void APIENTRY stub_glVDPAUFiniNV (void) {
}
GLAPI GLvdpauSurfaceNV APIENTRY stub_glVDPAURegisterVideoSurfaceNV (const void *vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint *textureNames) {
	return (GLvdpauSurfaceNV)0;
}
GLAPI GLvdpauSurfaceNV APIENTRY stub_glVDPAURegisterOutputSurfaceNV (const void *vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint *textureNames) {
	return (GLvdpauSurfaceNV)0;
}
GLAPI GLboolean APIENTRY stub_glVDPAUIsSurfaceNV (GLvdpauSurfaceNV surface) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glVDPAUUnregisterSurfaceNV (GLvdpauSurfaceNV surface) {
}
GLAPI void APIENTRY stub_glVDPAUGetSurfaceivNV (GLvdpauSurfaceNV surface, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values) {
}
GLAPI void APIENTRY stub_glVDPAUSurfaceAccessNV (GLvdpauSurfaceNV surface, GLenum access) {
}
GLAPI void APIENTRY stub_glVDPAUMapSurfacesNV (GLsizei numSurfaces, const GLvdpauSurfaceNV *surfaces) {
}
GLAPI void APIENTRY stub_glVDPAUUnmapSurfacesNV (GLsizei numSurface, const GLvdpauSurfaceNV *surfaces) {
}
GLAPI void APIENTRY stub_glFlushVertexArrayRangeNV (void) {
}
GLAPI void APIENTRY stub_glVertexArrayRangeNV (GLsizei length, const void *pointer) {
}
GLAPI void APIENTRY stub_glVertexAttribL1i64NV (GLuint index, GLint64EXT x) {
}
GLAPI void APIENTRY stub_glVertexAttribL2i64NV (GLuint index, GLint64EXT x, GLint64EXT y) {
}
GLAPI void APIENTRY stub_glVertexAttribL3i64NV (GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z) {
}
GLAPI void APIENTRY stub_glVertexAttribL4i64NV (GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w) {
}
GLAPI void APIENTRY stub_glVertexAttribL1i64vNV (GLuint index, const GLint64EXT *v) {
}
GLAPI void APIENTRY stub_glVertexAttribL2i64vNV (GLuint index, const GLint64EXT *v) {
}
GLAPI void APIENTRY stub_glVertexAttribL3i64vNV (GLuint index, const GLint64EXT *v) {
}
GLAPI void APIENTRY stub_glVertexAttribL4i64vNV (GLuint index, const GLint64EXT *v) {
}
GLAPI void APIENTRY stub_glVertexAttribL1ui64NV (GLuint index, GLuint64EXT x) {
}
GLAPI void APIENTRY stub_glVertexAttribL2ui64NV (GLuint index, GLuint64EXT x, GLuint64EXT y) {
}
GLAPI void APIENTRY stub_glVertexAttribL3ui64NV (GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z) {
}
GLAPI void APIENTRY stub_glVertexAttribL4ui64NV (GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w) {
}
GLAPI void APIENTRY stub_glVertexAttribL1ui64vNV (GLuint index, const GLuint64EXT *v) {
}
GLAPI void APIENTRY stub_glVertexAttribL2ui64vNV (GLuint index, const GLuint64EXT *v) {
}
GLAPI void APIENTRY stub_glVertexAttribL3ui64vNV (GLuint index, const GLuint64EXT *v) {
}
GLAPI void APIENTRY stub_glVertexAttribL4ui64vNV (GLuint index, const GLuint64EXT *v) {
}
GLAPI void APIENTRY stub_glGetVertexAttribLi64vNV (GLuint index, GLenum pname, GLint64EXT *params) {
}
GLAPI void APIENTRY stub_glGetVertexAttribLui64vNV (GLuint index, GLenum pname, GLuint64EXT *params) {
}
GLAPI void APIENTRY stub_glVertexAttribLFormatNV (GLuint index, GLint size, GLenum type, GLsizei stride) {
}
GLAPI void APIENTRY stub_glBufferAddressRangeNV (GLenum pname, GLuint index, GLuint64EXT address, GLsizeiptr length) {
}
GLAPI void APIENTRY stub_glVertexFormatNV (GLint size, GLenum type, GLsizei stride) {
}
GLAPI void APIENTRY stub_glNormalFormatNV (GLenum type, GLsizei stride) {
}
GLAPI void APIENTRY stub_glColorFormatNV (GLint size, GLenum type, GLsizei stride) {
}
GLAPI void APIENTRY stub_glIndexFormatNV (GLenum type, GLsizei stride) {
}
GLAPI void APIENTRY stub_glTexCoordFormatNV (GLint size, GLenum type, GLsizei stride) {
}
GLAPI void APIENTRY stub_glEdgeFlagFormatNV (GLsizei stride) {
}
GLAPI void APIENTRY stub_glSecondaryColorFormatNV (GLint size, GLenum type, GLsizei stride) {
}
GLAPI void APIENTRY stub_glFogCoordFormatNV (GLenum type, GLsizei stride) {
}
GLAPI void APIENTRY stub_glVertexAttribFormatNV (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride) {
}
GLAPI void APIENTRY stub_glVertexAttribIFormatNV (GLuint index, GLint size, GLenum type, GLsizei stride) {
}
GLAPI void APIENTRY stub_glGetIntegerui64i_vNV (GLenum value, GLuint index, GLuint64EXT *result) {
}
GLAPI GLboolean APIENTRY stub_glAreProgramsResidentNV (GLsizei n, const GLuint *programs, GLboolean *residences) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glBindProgramNV (GLenum target, GLuint id) {
}
GLAPI void APIENTRY stub_glDeleteProgramsNV (GLsizei n, const GLuint *programs) {
}
GLAPI void APIENTRY stub_glExecuteProgramNV (GLenum target, GLuint id, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glGenProgramsNV (GLsizei n, GLuint *programs) {
}
GLAPI void APIENTRY stub_glGetProgramParameterdvNV (GLenum target, GLuint index, GLenum pname, GLdouble *params) {
}
GLAPI void APIENTRY stub_glGetProgramParameterfvNV (GLenum target, GLuint index, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetProgramivNV (GLuint id, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetProgramStringNV (GLuint id, GLenum pname, GLubyte *program) {
}
GLAPI void APIENTRY stub_glGetTrackMatrixivNV (GLenum target, GLuint address, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetVertexAttribdvNV (GLuint index, GLenum pname, GLdouble *params) {
}
GLAPI void APIENTRY stub_glGetVertexAttribfvNV (GLuint index, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetVertexAttribivNV (GLuint index, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetVertexAttribPointervNV (GLuint index, GLenum pname, void **pointer) {
}
GLAPI GLboolean APIENTRY stub_glIsProgramNV (GLuint id) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glLoadProgramNV (GLenum target, GLuint id, GLsizei len, const GLubyte *program) {
}
GLAPI void APIENTRY stub_glProgramParameter4dNV (GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
}
GLAPI void APIENTRY stub_glProgramParameter4dvNV (GLenum target, GLuint index, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glProgramParameter4fNV (GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
}
GLAPI void APIENTRY stub_glProgramParameter4fvNV (GLenum target, GLuint index, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glProgramParameters4dvNV (GLenum target, GLuint index, GLsizei count, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glProgramParameters4fvNV (GLenum target, GLuint index, GLsizei count, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glRequestResidentProgramsNV (GLsizei n, const GLuint *programs) {
}
GLAPI void APIENTRY stub_glTrackMatrixNV (GLenum target, GLuint address, GLenum matrix, GLenum transform) {
}
GLAPI void APIENTRY stub_glVertexAttribPointerNV (GLuint index, GLint fsize, GLenum type, GLsizei stride, const void *pointer) {
}
GLAPI void APIENTRY stub_glVertexAttrib1dNV (GLuint index, GLdouble x) {
}
GLAPI void APIENTRY stub_glVertexAttrib1dvNV (GLuint index, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib1fNV (GLuint index, GLfloat x) {
}
GLAPI void APIENTRY stub_glVertexAttrib1fvNV (GLuint index, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib1sNV (GLuint index, GLshort x) {
}
GLAPI void APIENTRY stub_glVertexAttrib1svNV (GLuint index, const GLshort *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib2dNV (GLuint index, GLdouble x, GLdouble y) {
}
GLAPI void APIENTRY stub_glVertexAttrib2dvNV (GLuint index, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib2fNV (GLuint index, GLfloat x, GLfloat y) {
}
GLAPI void APIENTRY stub_glVertexAttrib2fvNV (GLuint index, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib2sNV (GLuint index, GLshort x, GLshort y) {
}
GLAPI void APIENTRY stub_glVertexAttrib2svNV (GLuint index, const GLshort *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib3dNV (GLuint index, GLdouble x, GLdouble y, GLdouble z) {
}
GLAPI void APIENTRY stub_glVertexAttrib3dvNV (GLuint index, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib3fNV (GLuint index, GLfloat x, GLfloat y, GLfloat z) {
}
GLAPI void APIENTRY stub_glVertexAttrib3fvNV (GLuint index, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib3sNV (GLuint index, GLshort x, GLshort y, GLshort z) {
}
GLAPI void APIENTRY stub_glVertexAttrib3svNV (GLuint index, const GLshort *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib4dNV (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
}
GLAPI void APIENTRY stub_glVertexAttrib4dvNV (GLuint index, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib4fNV (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
}
GLAPI void APIENTRY stub_glVertexAttrib4fvNV (GLuint index, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib4sNV (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w) {
}
GLAPI void APIENTRY stub_glVertexAttrib4svNV (GLuint index, const GLshort *v) {
}
GLAPI void APIENTRY stub_glVertexAttrib4ubNV (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w) {
}
GLAPI void APIENTRY stub_glVertexAttrib4ubvNV (GLuint index, const GLubyte *v) {
}
GLAPI void APIENTRY stub_glVertexAttribs1dvNV (GLuint index, GLsizei count, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glVertexAttribs1fvNV (GLuint index, GLsizei count, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glVertexAttribs1svNV (GLuint index, GLsizei count, const GLshort *v) {
}
GLAPI void APIENTRY stub_glVertexAttribs2dvNV (GLuint index, GLsizei count, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glVertexAttribs2fvNV (GLuint index, GLsizei count, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glVertexAttribs2svNV (GLuint index, GLsizei count, const GLshort *v) {
}
GLAPI void APIENTRY stub_glVertexAttribs3dvNV (GLuint index, GLsizei count, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glVertexAttribs3fvNV (GLuint index, GLsizei count, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glVertexAttribs3svNV (GLuint index, GLsizei count, const GLshort *v) {
}
GLAPI void APIENTRY stub_glVertexAttribs4dvNV (GLuint index, GLsizei count, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glVertexAttribs4fvNV (GLuint index, GLsizei count, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glVertexAttribs4svNV (GLuint index, GLsizei count, const GLshort *v) {
}
GLAPI void APIENTRY stub_glVertexAttribs4ubvNV (GLuint index, GLsizei count, const GLubyte *v) {
}
GLAPI void APIENTRY stub_glVertexAttribI1iEXT (GLuint index, GLint x) {
}
GLAPI void APIENTRY stub_glVertexAttribI2iEXT (GLuint index, GLint x, GLint y) {
}
GLAPI void APIENTRY stub_glVertexAttribI3iEXT (GLuint index, GLint x, GLint y, GLint z) {
}
GLAPI void APIENTRY stub_glVertexAttribI4iEXT (GLuint index, GLint x, GLint y, GLint z, GLint w) {
}
GLAPI void APIENTRY stub_glVertexAttribI1uiEXT (GLuint index, GLuint x) {
}
GLAPI void APIENTRY stub_glVertexAttribI2uiEXT (GLuint index, GLuint x, GLuint y) {
}
GLAPI void APIENTRY stub_glVertexAttribI3uiEXT (GLuint index, GLuint x, GLuint y, GLuint z) {
}
GLAPI void APIENTRY stub_glVertexAttribI4uiEXT (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) {
}
GLAPI void APIENTRY stub_glVertexAttribI1ivEXT (GLuint index, const GLint *v) {
}
GLAPI void APIENTRY stub_glVertexAttribI2ivEXT (GLuint index, const GLint *v) {
}
GLAPI void APIENTRY stub_glVertexAttribI3ivEXT (GLuint index, const GLint *v) {
}
GLAPI void APIENTRY stub_glVertexAttribI4ivEXT (GLuint index, const GLint *v) {
}
GLAPI void APIENTRY stub_glVertexAttribI1uivEXT (GLuint index, const GLuint *v) {
}
GLAPI void APIENTRY stub_glVertexAttribI2uivEXT (GLuint index, const GLuint *v) {
}
GLAPI void APIENTRY stub_glVertexAttribI3uivEXT (GLuint index, const GLuint *v) {
}
GLAPI void APIENTRY stub_glVertexAttribI4uivEXT (GLuint index, const GLuint *v) {
}
GLAPI void APIENTRY stub_glVertexAttribI4bvEXT (GLuint index, const GLbyte *v) {
}
GLAPI void APIENTRY stub_glVertexAttribI4svEXT (GLuint index, const GLshort *v) {
}
GLAPI void APIENTRY stub_glVertexAttribI4ubvEXT (GLuint index, const GLubyte *v) {
}
GLAPI void APIENTRY stub_glVertexAttribI4usvEXT (GLuint index, const GLushort *v) {
}
GLAPI void APIENTRY stub_glVertexAttribIPointerEXT (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer) {
}
GLAPI void APIENTRY stub_glGetVertexAttribIivEXT (GLuint index, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetVertexAttribIuivEXT (GLuint index, GLenum pname, GLuint *params) {
}
GLAPI void APIENTRY stub_glBeginVideoCaptureNV (GLuint video_capture_slot) {
}
GLAPI void APIENTRY stub_glBindVideoCaptureStreamBufferNV (GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLintptrARB offset) {
}
GLAPI void APIENTRY stub_glBindVideoCaptureStreamTextureNV (GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLenum target, GLuint texture) {
}
GLAPI void APIENTRY stub_glEndVideoCaptureNV (GLuint video_capture_slot) {
}
GLAPI void APIENTRY stub_glGetVideoCaptureivNV (GLuint video_capture_slot, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetVideoCaptureStreamivNV (GLuint video_capture_slot, GLuint stream, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetVideoCaptureStreamfvNV (GLuint video_capture_slot, GLuint stream, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetVideoCaptureStreamdvNV (GLuint video_capture_slot, GLuint stream, GLenum pname, GLdouble *params) {
}
GLAPI GLenum APIENTRY stub_glVideoCaptureNV (GLuint video_capture_slot, GLuint *sequence_num, GLuint64EXT *capture_time) {
	return (GLenum)0;
}
GLAPI void APIENTRY stub_glVideoCaptureStreamParameterivNV (GLuint video_capture_slot, GLuint stream, GLenum pname, const GLint *params) {
}
GLAPI void APIENTRY stub_glVideoCaptureStreamParameterfvNV (GLuint video_capture_slot, GLuint stream, GLenum pname, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glVideoCaptureStreamParameterdvNV (GLuint video_capture_slot, GLuint stream, GLenum pname, const GLdouble *params) {
}
GLAPI void APIENTRY stub_glViewportSwizzleNV (GLuint index, GLenum swizzlex, GLenum swizzley, GLenum swizzlez, GLenum swizzlew) {
}
GLAPI void APIENTRY stub_glFramebufferTextureMultiviewOVR (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews) {
}
GLAPI void APIENTRY stub_glHintPGI (GLenum target, GLint mode) {
}
GLAPI void APIENTRY stub_glDetailTexFuncSGIS (GLenum target, GLsizei n, const GLfloat *points) {
}
GLAPI void APIENTRY stub_glGetDetailTexFuncSGIS (GLenum target, GLfloat *points) {
}
GLAPI void APIENTRY stub_glFogFuncSGIS (GLsizei n, const GLfloat *points) {
}
GLAPI void APIENTRY stub_glGetFogFuncSGIS (GLfloat *points) {
}
GLAPI void APIENTRY stub_glSampleMaskSGIS (GLclampf value, GLboolean invert) {
}
GLAPI void APIENTRY stub_glSamplePatternSGIS (GLenum pattern) {
}
GLAPI void APIENTRY stub_glPixelTexGenParameteriSGIS (GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glPixelTexGenParameterivSGIS (GLenum pname, const GLint *params) {
}
GLAPI void APIENTRY stub_glPixelTexGenParameterfSGIS (GLenum pname, GLfloat param) {
}
GLAPI void APIENTRY stub_glPixelTexGenParameterfvSGIS (GLenum pname, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetPixelTexGenParameterivSGIS (GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetPixelTexGenParameterfvSGIS (GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glPointParameterfSGIS (GLenum pname, GLfloat param) {
}
GLAPI void APIENTRY stub_glPointParameterfvSGIS (GLenum pname, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glSharpenTexFuncSGIS (GLenum target, GLsizei n, const GLfloat *points) {
}
GLAPI void APIENTRY stub_glGetSharpenTexFuncSGIS (GLenum target, GLfloat *points) {
}
GLAPI void APIENTRY stub_glTexImage4DSGIS (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLint border, GLenum format, GLenum type, const void *pixels) {
}
GLAPI void APIENTRY stub_glTexSubImage4DSGIS (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint woffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLenum format, GLenum type, const void *pixels) {
}
GLAPI void APIENTRY stub_glTextureColorMaskSGIS (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) {
}
GLAPI void APIENTRY stub_glGetTexFilterFuncSGIS (GLenum target, GLenum filter, GLfloat *weights) {
}
GLAPI void APIENTRY stub_glTexFilterFuncSGIS (GLenum target, GLenum filter, GLsizei n, const GLfloat *weights) {
}
GLAPI void APIENTRY stub_glAsyncMarkerSGIX (GLuint marker) {
}
GLAPI GLint APIENTRY stub_glFinishAsyncSGIX (GLuint *markerp) {
	return (GLint)0;
}
GLAPI GLint APIENTRY stub_glPollAsyncSGIX (GLuint *markerp) {
	return (GLint)0;
}
GLAPI GLuint APIENTRY stub_glGenAsyncMarkersSGIX (GLsizei range) {
	return (GLuint)0;
}
GLAPI void APIENTRY stub_glDeleteAsyncMarkersSGIX (GLuint marker, GLsizei range) {
}
GLAPI GLboolean APIENTRY stub_glIsAsyncMarkerSGIX (GLuint marker) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glFlushRasterSGIX (void) {
}
GLAPI void APIENTRY stub_glFragmentColorMaterialSGIX (GLenum face, GLenum mode) {
}
GLAPI void APIENTRY stub_glFragmentLightfSGIX (GLenum light, GLenum pname, GLfloat param) {
}
GLAPI void APIENTRY stub_glFragmentLightfvSGIX (GLenum light, GLenum pname, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glFragmentLightiSGIX (GLenum light, GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glFragmentLightivSGIX (GLenum light, GLenum pname, const GLint *params) {
}
GLAPI void APIENTRY stub_glFragmentLightModelfSGIX (GLenum pname, GLfloat param) {
}
GLAPI void APIENTRY stub_glFragmentLightModelfvSGIX (GLenum pname, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glFragmentLightModeliSGIX (GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glFragmentLightModelivSGIX (GLenum pname, const GLint *params) {
}
GLAPI void APIENTRY stub_glFragmentMaterialfSGIX (GLenum face, GLenum pname, GLfloat param) {
}
GLAPI void APIENTRY stub_glFragmentMaterialfvSGIX (GLenum face, GLenum pname, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glFragmentMaterialiSGIX (GLenum face, GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glFragmentMaterialivSGIX (GLenum face, GLenum pname, const GLint *params) {
}
GLAPI void APIENTRY stub_glGetFragmentLightfvSGIX (GLenum light, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetFragmentLightivSGIX (GLenum light, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetFragmentMaterialfvSGIX (GLenum face, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetFragmentMaterialivSGIX (GLenum face, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glLightEnviSGIX (GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glFrameZoomSGIX (GLint factor) {
}
GLAPI void APIENTRY stub_glIglooInterfaceSGIX (GLenum pname, const void *params) {
}
GLAPI GLint APIENTRY stub_glGetInstrumentsSGIX (void) {
	return (GLint)0;
}
GLAPI void APIENTRY stub_glInstrumentsBufferSGIX (GLsizei size, GLint *buffer) {
}
GLAPI GLint APIENTRY stub_glPollInstrumentsSGIX (GLint *marker_p) {
	return (GLint)0;
}
GLAPI void APIENTRY stub_glReadInstrumentsSGIX (GLint marker) {
}
GLAPI void APIENTRY stub_glStartInstrumentsSGIX (void) {
}
GLAPI void APIENTRY stub_glStopInstrumentsSGIX (GLint marker) {
}
GLAPI void APIENTRY stub_glGetListParameterfvSGIX (GLuint list, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetListParameterivSGIX (GLuint list, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glListParameterfSGIX (GLuint list, GLenum pname, GLfloat param) {
}
GLAPI void APIENTRY stub_glListParameterfvSGIX (GLuint list, GLenum pname, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glListParameteriSGIX (GLuint list, GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glListParameterivSGIX (GLuint list, GLenum pname, const GLint *params) {
}
GLAPI void APIENTRY stub_glPixelTexGenSGIX (GLenum mode) {
}
GLAPI void APIENTRY stub_glDeformationMap3dSGIX (GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble w1, GLdouble w2, GLint wstride, GLint worder, const GLdouble *points) {
}
GLAPI void APIENTRY stub_glDeformationMap3fSGIX (GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat w1, GLfloat w2, GLint wstride, GLint worder, const GLfloat *points) {
}
GLAPI void APIENTRY stub_glDeformSGIX (GLbitfield mask) {
}
GLAPI void APIENTRY stub_glLoadIdentityDeformationMapSGIX (GLbitfield mask) {
}
GLAPI void APIENTRY stub_glReferencePlaneSGIX (const GLdouble *equation) {
}
GLAPI void APIENTRY stub_glSpriteParameterfSGIX (GLenum pname, GLfloat param) {
}
GLAPI void APIENTRY stub_glSpriteParameterfvSGIX (GLenum pname, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glSpriteParameteriSGIX (GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glSpriteParameterivSGIX (GLenum pname, const GLint *params) {
}
GLAPI void APIENTRY stub_glTagSampleBufferSGIX (void) {
}
GLAPI void APIENTRY stub_glColorTableSGI (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void *table) {
}
GLAPI void APIENTRY stub_glColorTableParameterfvSGI (GLenum target, GLenum pname, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glColorTableParameterivSGI (GLenum target, GLenum pname, const GLint *params) {
}
GLAPI void APIENTRY stub_glCopyColorTableSGI (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width) {
}
GLAPI void APIENTRY stub_glGetColorTableSGI (GLenum target, GLenum format, GLenum type, void *table) {
}
GLAPI void APIENTRY stub_glGetColorTableParameterfvSGI (GLenum target, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetColorTableParameterivSGI (GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glFinishTextureSUNX (void) {
}
GLAPI void APIENTRY stub_glGlobalAlphaFactorbSUN (GLbyte factor) {
}
GLAPI void APIENTRY stub_glGlobalAlphaFactorsSUN (GLshort factor) {
}
GLAPI void APIENTRY stub_glGlobalAlphaFactoriSUN (GLint factor) {
}
GLAPI void APIENTRY stub_glGlobalAlphaFactorfSUN (GLfloat factor) {
}
GLAPI void APIENTRY stub_glGlobalAlphaFactordSUN (GLdouble factor) {
}
GLAPI void APIENTRY stub_glGlobalAlphaFactorubSUN (GLubyte factor) {
}
GLAPI void APIENTRY stub_glGlobalAlphaFactorusSUN (GLushort factor) {
}
GLAPI void APIENTRY stub_glGlobalAlphaFactoruiSUN (GLuint factor) {
}
GLAPI void APIENTRY stub_glDrawMeshArraysSUN (GLenum mode, GLint first, GLsizei count, GLsizei width) {
}
GLAPI void APIENTRY stub_glReplacementCodeuiSUN (GLuint code) {
}
GLAPI void APIENTRY stub_glReplacementCodeusSUN (GLushort code) {
}
GLAPI void APIENTRY stub_glReplacementCodeubSUN (GLubyte code) {
}
GLAPI void APIENTRY stub_glReplacementCodeuivSUN (const GLuint *code) {
}
GLAPI void APIENTRY stub_glReplacementCodeusvSUN (const GLushort *code) {
}
GLAPI void APIENTRY stub_glReplacementCodeubvSUN (const GLubyte *code) {
}
GLAPI void APIENTRY stub_glReplacementCodePointerSUN (GLenum type, GLsizei stride, const void **pointer) {
}
GLAPI void APIENTRY stub_glColor4ubVertex2fSUN (GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y) {
}
GLAPI void APIENTRY stub_glColor4ubVertex2fvSUN (const GLubyte *c, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glColor4ubVertex3fSUN (GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z) {
}
GLAPI void APIENTRY stub_glColor4ubVertex3fvSUN (const GLubyte *c, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glColor3fVertex3fSUN (GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z) {
}
GLAPI void APIENTRY stub_glColor3fVertex3fvSUN (const GLfloat *c, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glNormal3fVertex3fSUN (GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z) {
}
GLAPI void APIENTRY stub_glNormal3fVertex3fvSUN (const GLfloat *n, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glColor4fNormal3fVertex3fSUN (GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z) {
}
GLAPI void APIENTRY stub_glColor4fNormal3fVertex3fvSUN (const GLfloat *c, const GLfloat *n, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glTexCoord2fVertex3fSUN (GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z) {
}
GLAPI void APIENTRY stub_glTexCoord2fVertex3fvSUN (const GLfloat *tc, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glTexCoord4fVertex4fSUN (GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
}
GLAPI void APIENTRY stub_glTexCoord4fVertex4fvSUN (const GLfloat *tc, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glTexCoord2fColor4ubVertex3fSUN (GLfloat s, GLfloat t, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z) {
}
GLAPI void APIENTRY stub_glTexCoord2fColor4ubVertex3fvSUN (const GLfloat *tc, const GLubyte *c, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glTexCoord2fColor3fVertex3fSUN (GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z) {
}
GLAPI void APIENTRY stub_glTexCoord2fColor3fVertex3fvSUN (const GLfloat *tc, const GLfloat *c, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glTexCoord2fNormal3fVertex3fSUN (GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z) {
}
GLAPI void APIENTRY stub_glTexCoord2fNormal3fVertex3fvSUN (const GLfloat *tc, const GLfloat *n, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glTexCoord2fColor4fNormal3fVertex3fSUN (GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z) {
}
GLAPI void APIENTRY stub_glTexCoord2fColor4fNormal3fVertex3fvSUN (const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glTexCoord4fColor4fNormal3fVertex4fSUN (GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
}
GLAPI void APIENTRY stub_glTexCoord4fColor4fNormal3fVertex4fvSUN (const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glReplacementCodeuiVertex3fSUN (GLuint rc, GLfloat x, GLfloat y, GLfloat z) {
}
GLAPI void APIENTRY stub_glReplacementCodeuiVertex3fvSUN (const GLuint *rc, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glReplacementCodeuiColor4ubVertex3fSUN (GLuint rc, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z) {
}
GLAPI void APIENTRY stub_glReplacementCodeuiColor4ubVertex3fvSUN (const GLuint *rc, const GLubyte *c, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glReplacementCodeuiColor3fVertex3fSUN (GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z) {
}
GLAPI void APIENTRY stub_glReplacementCodeuiColor3fVertex3fvSUN (const GLuint *rc, const GLfloat *c, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glReplacementCodeuiNormal3fVertex3fSUN (GLuint rc, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z) {
}
GLAPI void APIENTRY stub_glReplacementCodeuiNormal3fVertex3fvSUN (const GLuint *rc, const GLfloat *n, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glReplacementCodeuiColor4fNormal3fVertex3fSUN (GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z) {
}
GLAPI void APIENTRY stub_glReplacementCodeuiColor4fNormal3fVertex3fvSUN (const GLuint *rc, const GLfloat *c, const GLfloat *n, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glReplacementCodeuiTexCoord2fVertex3fSUN (GLuint rc, GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z) {
}
GLAPI void APIENTRY stub_glReplacementCodeuiTexCoord2fVertex3fvSUN (const GLuint *rc, const GLfloat *tc, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN (GLuint rc, GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z) {
}
GLAPI void APIENTRY stub_glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN (const GLuint *rc, const GLfloat *tc, const GLfloat *n, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN (GLuint rc, GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z) {
}
GLAPI void APIENTRY stub_glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN (const GLuint *rc, const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v) {
}

//----------------------------------------------------------------------------

void glexfp::Reset() {
	m_count = 0;
	glDrawRangeElements = stub_glDrawRangeElements;
	glTexImage3D = stub_glTexImage3D;
	glTexSubImage3D = stub_glTexSubImage3D;
	glCopyTexSubImage3D = stub_glCopyTexSubImage3D;
	glActiveTexture = stub_glActiveTexture;
	glSampleCoverage = stub_glSampleCoverage;
	glCompressedTexImage3D = stub_glCompressedTexImage3D;
	glCompressedTexImage2D = stub_glCompressedTexImage2D;
	glCompressedTexImage1D = stub_glCompressedTexImage1D;
	glCompressedTexSubImage3D = stub_glCompressedTexSubImage3D;
	glCompressedTexSubImage2D = stub_glCompressedTexSubImage2D;
	glCompressedTexSubImage1D = stub_glCompressedTexSubImage1D;
	glGetCompressedTexImage = stub_glGetCompressedTexImage;
	glClientActiveTexture = stub_glClientActiveTexture;
	glMultiTexCoord1d = stub_glMultiTexCoord1d;
	glMultiTexCoord1dv = stub_glMultiTexCoord1dv;
	glMultiTexCoord1f = stub_glMultiTexCoord1f;
	glMultiTexCoord1fv = stub_glMultiTexCoord1fv;
	glMultiTexCoord1i = stub_glMultiTexCoord1i;
	glMultiTexCoord1iv = stub_glMultiTexCoord1iv;
	glMultiTexCoord1s = stub_glMultiTexCoord1s;
	glMultiTexCoord1sv = stub_glMultiTexCoord1sv;
	glMultiTexCoord2d = stub_glMultiTexCoord2d;
	glMultiTexCoord2dv = stub_glMultiTexCoord2dv;
	glMultiTexCoord2f = stub_glMultiTexCoord2f;
	glMultiTexCoord2fv = stub_glMultiTexCoord2fv;
	glMultiTexCoord2i = stub_glMultiTexCoord2i;
	glMultiTexCoord2iv = stub_glMultiTexCoord2iv;
	glMultiTexCoord2s = stub_glMultiTexCoord2s;
	glMultiTexCoord2sv = stub_glMultiTexCoord2sv;
	glMultiTexCoord3d = stub_glMultiTexCoord3d;
	glMultiTexCoord3dv = stub_glMultiTexCoord3dv;
	glMultiTexCoord3f = stub_glMultiTexCoord3f;
	glMultiTexCoord3fv = stub_glMultiTexCoord3fv;
	glMultiTexCoord3i = stub_glMultiTexCoord3i;
	glMultiTexCoord3iv = stub_glMultiTexCoord3iv;
	glMultiTexCoord3s = stub_glMultiTexCoord3s;
	glMultiTexCoord3sv = stub_glMultiTexCoord3sv;
	glMultiTexCoord4d = stub_glMultiTexCoord4d;
	glMultiTexCoord4dv = stub_glMultiTexCoord4dv;
	glMultiTexCoord4f = stub_glMultiTexCoord4f;
	glMultiTexCoord4fv = stub_glMultiTexCoord4fv;
	glMultiTexCoord4i = stub_glMultiTexCoord4i;
	glMultiTexCoord4iv = stub_glMultiTexCoord4iv;
	glMultiTexCoord4s = stub_glMultiTexCoord4s;
	glMultiTexCoord4sv = stub_glMultiTexCoord4sv;
	glLoadTransposeMatrixf = stub_glLoadTransposeMatrixf;
	glLoadTransposeMatrixd = stub_glLoadTransposeMatrixd;
	glMultTransposeMatrixf = stub_glMultTransposeMatrixf;
	glMultTransposeMatrixd = stub_glMultTransposeMatrixd;
	glBlendFuncSeparate = stub_glBlendFuncSeparate;
	glMultiDrawArrays = stub_glMultiDrawArrays;
	glMultiDrawElements = stub_glMultiDrawElements;
	glPointParameterf = stub_glPointParameterf;
	glPointParameterfv = stub_glPointParameterfv;
	glPointParameteri = stub_glPointParameteri;
	glPointParameteriv = stub_glPointParameteriv;
	glFogCoordf = stub_glFogCoordf;
	glFogCoordfv = stub_glFogCoordfv;
	glFogCoordd = stub_glFogCoordd;
	glFogCoorddv = stub_glFogCoorddv;
	glFogCoordPointer = stub_glFogCoordPointer;
	glSecondaryColor3b = stub_glSecondaryColor3b;
	glSecondaryColor3bv = stub_glSecondaryColor3bv;
	glSecondaryColor3d = stub_glSecondaryColor3d;
	glSecondaryColor3dv = stub_glSecondaryColor3dv;
	glSecondaryColor3f = stub_glSecondaryColor3f;
	glSecondaryColor3fv = stub_glSecondaryColor3fv;
	glSecondaryColor3i = stub_glSecondaryColor3i;
	glSecondaryColor3iv = stub_glSecondaryColor3iv;
	glSecondaryColor3s = stub_glSecondaryColor3s;
	glSecondaryColor3sv = stub_glSecondaryColor3sv;
	glSecondaryColor3ub = stub_glSecondaryColor3ub;
	glSecondaryColor3ubv = stub_glSecondaryColor3ubv;
	glSecondaryColor3ui = stub_glSecondaryColor3ui;
	glSecondaryColor3uiv = stub_glSecondaryColor3uiv;
	glSecondaryColor3us = stub_glSecondaryColor3us;
	glSecondaryColor3usv = stub_glSecondaryColor3usv;
	glSecondaryColorPointer = stub_glSecondaryColorPointer;
	glWindowPos2d = stub_glWindowPos2d;
	glWindowPos2dv = stub_glWindowPos2dv;
	glWindowPos2f = stub_glWindowPos2f;
	glWindowPos2fv = stub_glWindowPos2fv;
	glWindowPos2i = stub_glWindowPos2i;
	glWindowPos2iv = stub_glWindowPos2iv;
	glWindowPos2s = stub_glWindowPos2s;
	glWindowPos2sv = stub_glWindowPos2sv;
	glWindowPos3d = stub_glWindowPos3d;
	glWindowPos3dv = stub_glWindowPos3dv;
	glWindowPos3f = stub_glWindowPos3f;
	glWindowPos3fv = stub_glWindowPos3fv;
	glWindowPos3i = stub_glWindowPos3i;
	glWindowPos3iv = stub_glWindowPos3iv;
	glWindowPos3s = stub_glWindowPos3s;
	glWindowPos3sv = stub_glWindowPos3sv;
	glBlendColor = stub_glBlendColor;
	glBlendEquation = stub_glBlendEquation;
	glGenQueries = stub_glGenQueries;
	glDeleteQueries = stub_glDeleteQueries;
	glIsQuery = stub_glIsQuery;
	glBeginQuery = stub_glBeginQuery;
	glEndQuery = stub_glEndQuery;
	glGetQueryiv = stub_glGetQueryiv;
	glGetQueryObjectiv = stub_glGetQueryObjectiv;
	glGetQueryObjectuiv = stub_glGetQueryObjectuiv;
	glBindBuffer = stub_glBindBuffer;
	glDeleteBuffers = stub_glDeleteBuffers;
	glGenBuffers = stub_glGenBuffers;
	glIsBuffer = stub_glIsBuffer;
	glBufferData = stub_glBufferData;
	glBufferSubData = stub_glBufferSubData;
	glGetBufferSubData = stub_glGetBufferSubData;
	glMapBuffer = stub_glMapBuffer;
	glUnmapBuffer = stub_glUnmapBuffer;
	glGetBufferParameteriv = stub_glGetBufferParameteriv;
	glGetBufferPointerv = stub_glGetBufferPointerv;
	glBlendEquationSeparate = stub_glBlendEquationSeparate;
	glDrawBuffers = stub_glDrawBuffers;
	glStencilOpSeparate = stub_glStencilOpSeparate;
	glStencilFuncSeparate = stub_glStencilFuncSeparate;
	glStencilMaskSeparate = stub_glStencilMaskSeparate;
	glAttachShader = stub_glAttachShader;
	glBindAttribLocation = stub_glBindAttribLocation;
	glCompileShader = stub_glCompileShader;
	glCreateProgram = stub_glCreateProgram;
	glCreateShader = stub_glCreateShader;
	glDeleteProgram = stub_glDeleteProgram;
	glDeleteShader = stub_glDeleteShader;
	glDetachShader = stub_glDetachShader;
	glDisableVertexAttribArray = stub_glDisableVertexAttribArray;
	glEnableVertexAttribArray = stub_glEnableVertexAttribArray;
	glGetActiveAttrib = stub_glGetActiveAttrib;
	glGetActiveUniform = stub_glGetActiveUniform;
	glGetAttachedShaders = stub_glGetAttachedShaders;
	glGetAttribLocation = stub_glGetAttribLocation;
	glGetProgramiv = stub_glGetProgramiv;
	glGetProgramInfoLog = stub_glGetProgramInfoLog;
	glGetShaderiv = stub_glGetShaderiv;
	glGetShaderInfoLog = stub_glGetShaderInfoLog;
	glGetShaderSource = stub_glGetShaderSource;
	glGetUniformLocation = stub_glGetUniformLocation;
	glGetUniformfv = stub_glGetUniformfv;
	glGetUniformiv = stub_glGetUniformiv;
	glGetVertexAttribdv = stub_glGetVertexAttribdv;
	glGetVertexAttribfv = stub_glGetVertexAttribfv;
	glGetVertexAttribiv = stub_glGetVertexAttribiv;
	glGetVertexAttribPointerv = stub_glGetVertexAttribPointerv;
	glIsProgram = stub_glIsProgram;
	glIsShader = stub_glIsShader;
	glLinkProgram = stub_glLinkProgram;
	glShaderSource = stub_glShaderSource;
	glUseProgram = stub_glUseProgram;
	glUniform1f = stub_glUniform1f;
	glUniform2f = stub_glUniform2f;
	glUniform3f = stub_glUniform3f;
	glUniform4f = stub_glUniform4f;
	glUniform1i = stub_glUniform1i;
	glUniform2i = stub_glUniform2i;
	glUniform3i = stub_glUniform3i;
	glUniform4i = stub_glUniform4i;
	glUniform1fv = stub_glUniform1fv;
	glUniform2fv = stub_glUniform2fv;
	glUniform3fv = stub_glUniform3fv;
	glUniform4fv = stub_glUniform4fv;
	glUniform1iv = stub_glUniform1iv;
	glUniform2iv = stub_glUniform2iv;
	glUniform3iv = stub_glUniform3iv;
	glUniform4iv = stub_glUniform4iv;
	glUniformMatrix2fv = stub_glUniformMatrix2fv;
	glUniformMatrix3fv = stub_glUniformMatrix3fv;
	glUniformMatrix4fv = stub_glUniformMatrix4fv;
	glValidateProgram = stub_glValidateProgram;
	glVertexAttrib1d = stub_glVertexAttrib1d;
	glVertexAttrib1dv = stub_glVertexAttrib1dv;
	glVertexAttrib1f = stub_glVertexAttrib1f;
	glVertexAttrib1fv = stub_glVertexAttrib1fv;
	glVertexAttrib1s = stub_glVertexAttrib1s;
	glVertexAttrib1sv = stub_glVertexAttrib1sv;
	glVertexAttrib2d = stub_glVertexAttrib2d;
	glVertexAttrib2dv = stub_glVertexAttrib2dv;
	glVertexAttrib2f = stub_glVertexAttrib2f;
	glVertexAttrib2fv = stub_glVertexAttrib2fv;
	glVertexAttrib2s = stub_glVertexAttrib2s;
	glVertexAttrib2sv = stub_glVertexAttrib2sv;
	glVertexAttrib3d = stub_glVertexAttrib3d;
	glVertexAttrib3dv = stub_glVertexAttrib3dv;
	glVertexAttrib3f = stub_glVertexAttrib3f;
	glVertexAttrib3fv = stub_glVertexAttrib3fv;
	glVertexAttrib3s = stub_glVertexAttrib3s;
	glVertexAttrib3sv = stub_glVertexAttrib3sv;
	glVertexAttrib4Nbv = stub_glVertexAttrib4Nbv;
	glVertexAttrib4Niv = stub_glVertexAttrib4Niv;
	glVertexAttrib4Nsv = stub_glVertexAttrib4Nsv;
	glVertexAttrib4Nub = stub_glVertexAttrib4Nub;
	glVertexAttrib4Nubv = stub_glVertexAttrib4Nubv;
	glVertexAttrib4Nuiv = stub_glVertexAttrib4Nuiv;
	glVertexAttrib4Nusv = stub_glVertexAttrib4Nusv;
	glVertexAttrib4bv = stub_glVertexAttrib4bv;
	glVertexAttrib4d = stub_glVertexAttrib4d;
	glVertexAttrib4dv = stub_glVertexAttrib4dv;
	glVertexAttrib4f = stub_glVertexAttrib4f;
	glVertexAttrib4fv = stub_glVertexAttrib4fv;
	glVertexAttrib4iv = stub_glVertexAttrib4iv;
	glVertexAttrib4s = stub_glVertexAttrib4s;
	glVertexAttrib4sv = stub_glVertexAttrib4sv;
	glVertexAttrib4ubv = stub_glVertexAttrib4ubv;
	glVertexAttrib4uiv = stub_glVertexAttrib4uiv;
	glVertexAttrib4usv = stub_glVertexAttrib4usv;
	glVertexAttribPointer = stub_glVertexAttribPointer;
	glUniformMatrix2x3fv = stub_glUniformMatrix2x3fv;
	glUniformMatrix3x2fv = stub_glUniformMatrix3x2fv;
	glUniformMatrix2x4fv = stub_glUniformMatrix2x4fv;
	glUniformMatrix4x2fv = stub_glUniformMatrix4x2fv;
	glUniformMatrix3x4fv = stub_glUniformMatrix3x4fv;
	glUniformMatrix4x3fv = stub_glUniformMatrix4x3fv;
	glColorMaski = stub_glColorMaski;
	glGetBooleani_v = stub_glGetBooleani_v;
	glGetIntegeri_v = stub_glGetIntegeri_v;
	glEnablei = stub_glEnablei;
	glDisablei = stub_glDisablei;
	glIsEnabledi = stub_glIsEnabledi;
	glBeginTransformFeedback = stub_glBeginTransformFeedback;
	glEndTransformFeedback = stub_glEndTransformFeedback;
	glBindBufferRange = stub_glBindBufferRange;
	glBindBufferBase = stub_glBindBufferBase;
	glTransformFeedbackVaryings = stub_glTransformFeedbackVaryings;
	glGetTransformFeedbackVarying = stub_glGetTransformFeedbackVarying;
	glClampColor = stub_glClampColor;
	glBeginConditionalRender = stub_glBeginConditionalRender;
	glEndConditionalRender = stub_glEndConditionalRender;
	glVertexAttribIPointer = stub_glVertexAttribIPointer;
	glGetVertexAttribIiv = stub_glGetVertexAttribIiv;
	glGetVertexAttribIuiv = stub_glGetVertexAttribIuiv;
	glVertexAttribI1i = stub_glVertexAttribI1i;
	glVertexAttribI2i = stub_glVertexAttribI2i;
	glVertexAttribI3i = stub_glVertexAttribI3i;
	glVertexAttribI4i = stub_glVertexAttribI4i;
	glVertexAttribI1ui = stub_glVertexAttribI1ui;
	glVertexAttribI2ui = stub_glVertexAttribI2ui;
	glVertexAttribI3ui = stub_glVertexAttribI3ui;
	glVertexAttribI4ui = stub_glVertexAttribI4ui;
	glVertexAttribI1iv = stub_glVertexAttribI1iv;
	glVertexAttribI2iv = stub_glVertexAttribI2iv;
	glVertexAttribI3iv = stub_glVertexAttribI3iv;
	glVertexAttribI4iv = stub_glVertexAttribI4iv;
	glVertexAttribI1uiv = stub_glVertexAttribI1uiv;
	glVertexAttribI2uiv = stub_glVertexAttribI2uiv;
	glVertexAttribI3uiv = stub_glVertexAttribI3uiv;
	glVertexAttribI4uiv = stub_glVertexAttribI4uiv;
	glVertexAttribI4bv = stub_glVertexAttribI4bv;
	glVertexAttribI4sv = stub_glVertexAttribI4sv;
	glVertexAttribI4ubv = stub_glVertexAttribI4ubv;
	glVertexAttribI4usv = stub_glVertexAttribI4usv;
	glGetUniformuiv = stub_glGetUniformuiv;
	glBindFragDataLocation = stub_glBindFragDataLocation;
	glGetFragDataLocation = stub_glGetFragDataLocation;
	glUniform1ui = stub_glUniform1ui;
	glUniform2ui = stub_glUniform2ui;
	glUniform3ui = stub_glUniform3ui;
	glUniform4ui = stub_glUniform4ui;
	glUniform1uiv = stub_glUniform1uiv;
	glUniform2uiv = stub_glUniform2uiv;
	glUniform3uiv = stub_glUniform3uiv;
	glUniform4uiv = stub_glUniform4uiv;
	glTexParameterIiv = stub_glTexParameterIiv;
	glTexParameterIuiv = stub_glTexParameterIuiv;
	glGetTexParameterIiv = stub_glGetTexParameterIiv;
	glGetTexParameterIuiv = stub_glGetTexParameterIuiv;
	glClearBufferiv = stub_glClearBufferiv;
	glClearBufferuiv = stub_glClearBufferuiv;
	glClearBufferfv = stub_glClearBufferfv;
	glClearBufferfi = stub_glClearBufferfi;
	glGetStringi = stub_glGetStringi;
	glIsRenderbuffer = stub_glIsRenderbuffer;
	glBindRenderbuffer = stub_glBindRenderbuffer;
	glDeleteRenderbuffers = stub_glDeleteRenderbuffers;
	glGenRenderbuffers = stub_glGenRenderbuffers;
	glRenderbufferStorage = stub_glRenderbufferStorage;
	glGetRenderbufferParameteriv = stub_glGetRenderbufferParameteriv;
	glIsFramebuffer = stub_glIsFramebuffer;
	glBindFramebuffer = stub_glBindFramebuffer;
	glDeleteFramebuffers = stub_glDeleteFramebuffers;
	glGenFramebuffers = stub_glGenFramebuffers;
	glCheckFramebufferStatus = stub_glCheckFramebufferStatus;
	glFramebufferTexture1D = stub_glFramebufferTexture1D;
	glFramebufferTexture2D = stub_glFramebufferTexture2D;
	glFramebufferTexture3D = stub_glFramebufferTexture3D;
	glFramebufferRenderbuffer = stub_glFramebufferRenderbuffer;
	glGetFramebufferAttachmentParameteriv = stub_glGetFramebufferAttachmentParameteriv;
	glGenerateMipmap = stub_glGenerateMipmap;
	glBlitFramebuffer = stub_glBlitFramebuffer;
	glRenderbufferStorageMultisample = stub_glRenderbufferStorageMultisample;
	glFramebufferTextureLayer = stub_glFramebufferTextureLayer;
	glMapBufferRange = stub_glMapBufferRange;
	glFlushMappedBufferRange = stub_glFlushMappedBufferRange;
	glBindVertexArray = stub_glBindVertexArray;
	glDeleteVertexArrays = stub_glDeleteVertexArrays;
	glGenVertexArrays = stub_glGenVertexArrays;
	glIsVertexArray = stub_glIsVertexArray;
	glDrawArraysInstanced = stub_glDrawArraysInstanced;
	glDrawElementsInstanced = stub_glDrawElementsInstanced;
	glTexBuffer = stub_glTexBuffer;
	glPrimitiveRestartIndex = stub_glPrimitiveRestartIndex;
	glCopyBufferSubData = stub_glCopyBufferSubData;
	glGetUniformIndices = stub_glGetUniformIndices;
	glGetActiveUniformsiv = stub_glGetActiveUniformsiv;
	glGetActiveUniformName = stub_glGetActiveUniformName;
	glGetUniformBlockIndex = stub_glGetUniformBlockIndex;
	glGetActiveUniformBlockiv = stub_glGetActiveUniformBlockiv;
	glGetActiveUniformBlockName = stub_glGetActiveUniformBlockName;
	glUniformBlockBinding = stub_glUniformBlockBinding;
	glDrawElementsBaseVertex = stub_glDrawElementsBaseVertex;
	glDrawRangeElementsBaseVertex = stub_glDrawRangeElementsBaseVertex;
	glDrawElementsInstancedBaseVertex = stub_glDrawElementsInstancedBaseVertex;
	glMultiDrawElementsBaseVertex = stub_glMultiDrawElementsBaseVertex;
	glProvokingVertex = stub_glProvokingVertex;
	glFenceSync = stub_glFenceSync;
	glIsSync = stub_glIsSync;
	glDeleteSync = stub_glDeleteSync;
	glClientWaitSync = stub_glClientWaitSync;
	glWaitSync = stub_glWaitSync;
	glGetInteger64v = stub_glGetInteger64v;
	glGetSynciv = stub_glGetSynciv;
	glGetInteger64i_v = stub_glGetInteger64i_v;
	glGetBufferParameteri64v = stub_glGetBufferParameteri64v;
	glFramebufferTexture = stub_glFramebufferTexture;
	glTexImage2DMultisample = stub_glTexImage2DMultisample;
	glTexImage3DMultisample = stub_glTexImage3DMultisample;
	glGetMultisamplefv = stub_glGetMultisamplefv;
	glSampleMaski = stub_glSampleMaski;
	glBindFragDataLocationIndexed = stub_glBindFragDataLocationIndexed;
	glGetFragDataIndex = stub_glGetFragDataIndex;
	glGenSamplers = stub_glGenSamplers;
	glDeleteSamplers = stub_glDeleteSamplers;
	glIsSampler = stub_glIsSampler;
	glBindSampler = stub_glBindSampler;
	glSamplerParameteri = stub_glSamplerParameteri;
	glSamplerParameteriv = stub_glSamplerParameteriv;
	glSamplerParameterf = stub_glSamplerParameterf;
	glSamplerParameterfv = stub_glSamplerParameterfv;
	glSamplerParameterIiv = stub_glSamplerParameterIiv;
	glSamplerParameterIuiv = stub_glSamplerParameterIuiv;
	glGetSamplerParameteriv = stub_glGetSamplerParameteriv;
	glGetSamplerParameterIiv = stub_glGetSamplerParameterIiv;
	glGetSamplerParameterfv = stub_glGetSamplerParameterfv;
	glGetSamplerParameterIuiv = stub_glGetSamplerParameterIuiv;
	glQueryCounter = stub_glQueryCounter;
	glGetQueryObjecti64v = stub_glGetQueryObjecti64v;
	glGetQueryObjectui64v = stub_glGetQueryObjectui64v;
	glVertexAttribDivisor = stub_glVertexAttribDivisor;
	glVertexAttribP1ui = stub_glVertexAttribP1ui;
	glVertexAttribP1uiv = stub_glVertexAttribP1uiv;
	glVertexAttribP2ui = stub_glVertexAttribP2ui;
	glVertexAttribP2uiv = stub_glVertexAttribP2uiv;
	glVertexAttribP3ui = stub_glVertexAttribP3ui;
	glVertexAttribP3uiv = stub_glVertexAttribP3uiv;
	glVertexAttribP4ui = stub_glVertexAttribP4ui;
	glVertexAttribP4uiv = stub_glVertexAttribP4uiv;
	glVertexP2ui = stub_glVertexP2ui;
	glVertexP2uiv = stub_glVertexP2uiv;
	glVertexP3ui = stub_glVertexP3ui;
	glVertexP3uiv = stub_glVertexP3uiv;
	glVertexP4ui = stub_glVertexP4ui;
	glVertexP4uiv = stub_glVertexP4uiv;
	glTexCoordP1ui = stub_glTexCoordP1ui;
	glTexCoordP1uiv = stub_glTexCoordP1uiv;
	glTexCoordP2ui = stub_glTexCoordP2ui;
	glTexCoordP2uiv = stub_glTexCoordP2uiv;
	glTexCoordP3ui = stub_glTexCoordP3ui;
	glTexCoordP3uiv = stub_glTexCoordP3uiv;
	glTexCoordP4ui = stub_glTexCoordP4ui;
	glTexCoordP4uiv = stub_glTexCoordP4uiv;
	glMultiTexCoordP1ui = stub_glMultiTexCoordP1ui;
	glMultiTexCoordP1uiv = stub_glMultiTexCoordP1uiv;
	glMultiTexCoordP2ui = stub_glMultiTexCoordP2ui;
	glMultiTexCoordP2uiv = stub_glMultiTexCoordP2uiv;
	glMultiTexCoordP3ui = stub_glMultiTexCoordP3ui;
	glMultiTexCoordP3uiv = stub_glMultiTexCoordP3uiv;
	glMultiTexCoordP4ui = stub_glMultiTexCoordP4ui;
	glMultiTexCoordP4uiv = stub_glMultiTexCoordP4uiv;
	glNormalP3ui = stub_glNormalP3ui;
	glNormalP3uiv = stub_glNormalP3uiv;
	glColorP3ui = stub_glColorP3ui;
	glColorP3uiv = stub_glColorP3uiv;
	glColorP4ui = stub_glColorP4ui;
	glColorP4uiv = stub_glColorP4uiv;
	glSecondaryColorP3ui = stub_glSecondaryColorP3ui;
	glSecondaryColorP3uiv = stub_glSecondaryColorP3uiv;
	glMinSampleShading = stub_glMinSampleShading;
	glBlendEquationi = stub_glBlendEquationi;
	glBlendEquationSeparatei = stub_glBlendEquationSeparatei;
	glBlendFunci = stub_glBlendFunci;
	glBlendFuncSeparatei = stub_glBlendFuncSeparatei;
	glDrawArraysIndirect = stub_glDrawArraysIndirect;
	glDrawElementsIndirect = stub_glDrawElementsIndirect;
	glUniform1d = stub_glUniform1d;
	glUniform2d = stub_glUniform2d;
	glUniform3d = stub_glUniform3d;
	glUniform4d = stub_glUniform4d;
	glUniform1dv = stub_glUniform1dv;
	glUniform2dv = stub_glUniform2dv;
	glUniform3dv = stub_glUniform3dv;
	glUniform4dv = stub_glUniform4dv;
	glUniformMatrix2dv = stub_glUniformMatrix2dv;
	glUniformMatrix3dv = stub_glUniformMatrix3dv;
	glUniformMatrix4dv = stub_glUniformMatrix4dv;
	glUniformMatrix2x3dv = stub_glUniformMatrix2x3dv;
	glUniformMatrix2x4dv = stub_glUniformMatrix2x4dv;
	glUniformMatrix3x2dv = stub_glUniformMatrix3x2dv;
	glUniformMatrix3x4dv = stub_glUniformMatrix3x4dv;
	glUniformMatrix4x2dv = stub_glUniformMatrix4x2dv;
	glUniformMatrix4x3dv = stub_glUniformMatrix4x3dv;
	glGetUniformdv = stub_glGetUniformdv;
	glGetSubroutineUniformLocation = stub_glGetSubroutineUniformLocation;
	glGetSubroutineIndex = stub_glGetSubroutineIndex;
	glGetActiveSubroutineUniformiv = stub_glGetActiveSubroutineUniformiv;
	glGetActiveSubroutineUniformName = stub_glGetActiveSubroutineUniformName;
	glGetActiveSubroutineName = stub_glGetActiveSubroutineName;
	glUniformSubroutinesuiv = stub_glUniformSubroutinesuiv;
	glGetUniformSubroutineuiv = stub_glGetUniformSubroutineuiv;
	glGetProgramStageiv = stub_glGetProgramStageiv;
	glPatchParameteri = stub_glPatchParameteri;
	glPatchParameterfv = stub_glPatchParameterfv;
	glBindTransformFeedback = stub_glBindTransformFeedback;
	glDeleteTransformFeedbacks = stub_glDeleteTransformFeedbacks;
	glGenTransformFeedbacks = stub_glGenTransformFeedbacks;
	glIsTransformFeedback = stub_glIsTransformFeedback;
	glPauseTransformFeedback = stub_glPauseTransformFeedback;
	glResumeTransformFeedback = stub_glResumeTransformFeedback;
	glDrawTransformFeedback = stub_glDrawTransformFeedback;
	glDrawTransformFeedbackStream = stub_glDrawTransformFeedbackStream;
	glBeginQueryIndexed = stub_glBeginQueryIndexed;
	glEndQueryIndexed = stub_glEndQueryIndexed;
	glGetQueryIndexediv = stub_glGetQueryIndexediv;
	glReleaseShaderCompiler = stub_glReleaseShaderCompiler;
	glShaderBinary = stub_glShaderBinary;
	glGetShaderPrecisionFormat = stub_glGetShaderPrecisionFormat;
	glDepthRangef = stub_glDepthRangef;
	glClearDepthf = stub_glClearDepthf;
	glGetProgramBinary = stub_glGetProgramBinary;
	glProgramBinary = stub_glProgramBinary;
	glProgramParameteri = stub_glProgramParameteri;
	glUseProgramStages = stub_glUseProgramStages;
	glActiveShaderProgram = stub_glActiveShaderProgram;
	glCreateShaderProgramv = stub_glCreateShaderProgramv;
	glBindProgramPipeline = stub_glBindProgramPipeline;
	glDeleteProgramPipelines = stub_glDeleteProgramPipelines;
	glGenProgramPipelines = stub_glGenProgramPipelines;
	glIsProgramPipeline = stub_glIsProgramPipeline;
	glGetProgramPipelineiv = stub_glGetProgramPipelineiv;
	glProgramUniform1i = stub_glProgramUniform1i;
	glProgramUniform1iv = stub_glProgramUniform1iv;
	glProgramUniform1f = stub_glProgramUniform1f;
	glProgramUniform1fv = stub_glProgramUniform1fv;
	glProgramUniform1d = stub_glProgramUniform1d;
	glProgramUniform1dv = stub_glProgramUniform1dv;
	glProgramUniform1ui = stub_glProgramUniform1ui;
	glProgramUniform1uiv = stub_glProgramUniform1uiv;
	glProgramUniform2i = stub_glProgramUniform2i;
	glProgramUniform2iv = stub_glProgramUniform2iv;
	glProgramUniform2f = stub_glProgramUniform2f;
	glProgramUniform2fv = stub_glProgramUniform2fv;
	glProgramUniform2d = stub_glProgramUniform2d;
	glProgramUniform2dv = stub_glProgramUniform2dv;
	glProgramUniform2ui = stub_glProgramUniform2ui;
	glProgramUniform2uiv = stub_glProgramUniform2uiv;
	glProgramUniform3i = stub_glProgramUniform3i;
	glProgramUniform3iv = stub_glProgramUniform3iv;
	glProgramUniform3f = stub_glProgramUniform3f;
	glProgramUniform3fv = stub_glProgramUniform3fv;
	glProgramUniform3d = stub_glProgramUniform3d;
	glProgramUniform3dv = stub_glProgramUniform3dv;
	glProgramUniform3ui = stub_glProgramUniform3ui;
	glProgramUniform3uiv = stub_glProgramUniform3uiv;
	glProgramUniform4i = stub_glProgramUniform4i;
	glProgramUniform4iv = stub_glProgramUniform4iv;
	glProgramUniform4f = stub_glProgramUniform4f;
	glProgramUniform4fv = stub_glProgramUniform4fv;
	glProgramUniform4d = stub_glProgramUniform4d;
	glProgramUniform4dv = stub_glProgramUniform4dv;
	glProgramUniform4ui = stub_glProgramUniform4ui;
	glProgramUniform4uiv = stub_glProgramUniform4uiv;
	glProgramUniformMatrix2fv = stub_glProgramUniformMatrix2fv;
	glProgramUniformMatrix3fv = stub_glProgramUniformMatrix3fv;
	glProgramUniformMatrix4fv = stub_glProgramUniformMatrix4fv;
	glProgramUniformMatrix2dv = stub_glProgramUniformMatrix2dv;
	glProgramUniformMatrix3dv = stub_glProgramUniformMatrix3dv;
	glProgramUniformMatrix4dv = stub_glProgramUniformMatrix4dv;
	glProgramUniformMatrix2x3fv = stub_glProgramUniformMatrix2x3fv;
	glProgramUniformMatrix3x2fv = stub_glProgramUniformMatrix3x2fv;
	glProgramUniformMatrix2x4fv = stub_glProgramUniformMatrix2x4fv;
	glProgramUniformMatrix4x2fv = stub_glProgramUniformMatrix4x2fv;
	glProgramUniformMatrix3x4fv = stub_glProgramUniformMatrix3x4fv;
	glProgramUniformMatrix4x3fv = stub_glProgramUniformMatrix4x3fv;
	glProgramUniformMatrix2x3dv = stub_glProgramUniformMatrix2x3dv;
	glProgramUniformMatrix3x2dv = stub_glProgramUniformMatrix3x2dv;
	glProgramUniformMatrix2x4dv = stub_glProgramUniformMatrix2x4dv;
	glProgramUniformMatrix4x2dv = stub_glProgramUniformMatrix4x2dv;
	glProgramUniformMatrix3x4dv = stub_glProgramUniformMatrix3x4dv;
	glProgramUniformMatrix4x3dv = stub_glProgramUniformMatrix4x3dv;
	glValidateProgramPipeline = stub_glValidateProgramPipeline;
	glGetProgramPipelineInfoLog = stub_glGetProgramPipelineInfoLog;
	glVertexAttribL1d = stub_glVertexAttribL1d;
	glVertexAttribL2d = stub_glVertexAttribL2d;
	glVertexAttribL3d = stub_glVertexAttribL3d;
	glVertexAttribL4d = stub_glVertexAttribL4d;
	glVertexAttribL1dv = stub_glVertexAttribL1dv;
	glVertexAttribL2dv = stub_glVertexAttribL2dv;
	glVertexAttribL3dv = stub_glVertexAttribL3dv;
	glVertexAttribL4dv = stub_glVertexAttribL4dv;
	glVertexAttribLPointer = stub_glVertexAttribLPointer;
	glGetVertexAttribLdv = stub_glGetVertexAttribLdv;
	glViewportArrayv = stub_glViewportArrayv;
	glViewportIndexedf = stub_glViewportIndexedf;
	glViewportIndexedfv = stub_glViewportIndexedfv;
	glScissorArrayv = stub_glScissorArrayv;
	glScissorIndexed = stub_glScissorIndexed;
	glScissorIndexedv = stub_glScissorIndexedv;
	glDepthRangeArrayv = stub_glDepthRangeArrayv;
	glDepthRangeIndexed = stub_glDepthRangeIndexed;
	glGetFloati_v = stub_glGetFloati_v;
	glGetDoublei_v = stub_glGetDoublei_v;
	glDrawArraysInstancedBaseInstance = stub_glDrawArraysInstancedBaseInstance;
	glDrawElementsInstancedBaseInstance = stub_glDrawElementsInstancedBaseInstance;
	glDrawElementsInstancedBaseVertexBaseInstance = stub_glDrawElementsInstancedBaseVertexBaseInstance;
	glGetInternalformativ = stub_glGetInternalformativ;
	glGetActiveAtomicCounterBufferiv = stub_glGetActiveAtomicCounterBufferiv;
	glBindImageTexture = stub_glBindImageTexture;
	glMemoryBarrier = stub_glMemoryBarrier;
	glTexStorage1D = stub_glTexStorage1D;
	glTexStorage2D = stub_glTexStorage2D;
	glTexStorage3D = stub_glTexStorage3D;
	glDrawTransformFeedbackInstanced = stub_glDrawTransformFeedbackInstanced;
	glDrawTransformFeedbackStreamInstanced = stub_glDrawTransformFeedbackStreamInstanced;
	glClearBufferData = stub_glClearBufferData;
	glClearBufferSubData = stub_glClearBufferSubData;
	glDispatchCompute = stub_glDispatchCompute;
	glDispatchComputeIndirect = stub_glDispatchComputeIndirect;
	glCopyImageSubData = stub_glCopyImageSubData;
	glFramebufferParameteri = stub_glFramebufferParameteri;
	glGetFramebufferParameteriv = stub_glGetFramebufferParameteriv;
	glGetInternalformati64v = stub_glGetInternalformati64v;
	glInvalidateTexSubImage = stub_glInvalidateTexSubImage;
	glInvalidateTexImage = stub_glInvalidateTexImage;
	glInvalidateBufferSubData = stub_glInvalidateBufferSubData;
	glInvalidateBufferData = stub_glInvalidateBufferData;
	glInvalidateFramebuffer = stub_glInvalidateFramebuffer;
	glInvalidateSubFramebuffer = stub_glInvalidateSubFramebuffer;
	glMultiDrawArraysIndirect = stub_glMultiDrawArraysIndirect;
	glMultiDrawElementsIndirect = stub_glMultiDrawElementsIndirect;
	glGetProgramInterfaceiv = stub_glGetProgramInterfaceiv;
	glGetProgramResourceIndex = stub_glGetProgramResourceIndex;
	glGetProgramResourceName = stub_glGetProgramResourceName;
	glGetProgramResourceiv = stub_glGetProgramResourceiv;
	glGetProgramResourceLocation = stub_glGetProgramResourceLocation;
	glGetProgramResourceLocationIndex = stub_glGetProgramResourceLocationIndex;
	glShaderStorageBlockBinding = stub_glShaderStorageBlockBinding;
	glTexBufferRange = stub_glTexBufferRange;
	glTexStorage2DMultisample = stub_glTexStorage2DMultisample;
	glTexStorage3DMultisample = stub_glTexStorage3DMultisample;
	glTextureView = stub_glTextureView;
	glBindVertexBuffer = stub_glBindVertexBuffer;
	glVertexAttribFormat = stub_glVertexAttribFormat;
	glVertexAttribIFormat = stub_glVertexAttribIFormat;
	glVertexAttribLFormat = stub_glVertexAttribLFormat;
	glVertexAttribBinding = stub_glVertexAttribBinding;
	glVertexBindingDivisor = stub_glVertexBindingDivisor;
	glDebugMessageControl = stub_glDebugMessageControl;
	glDebugMessageInsert = stub_glDebugMessageInsert;
	glDebugMessageCallback = stub_glDebugMessageCallback;
	glGetDebugMessageLog = stub_glGetDebugMessageLog;
	glPushDebugGroup = stub_glPushDebugGroup;
	glPopDebugGroup = stub_glPopDebugGroup;
	glObjectLabel = stub_glObjectLabel;
	glGetObjectLabel = stub_glGetObjectLabel;
	glObjectPtrLabel = stub_glObjectPtrLabel;
	glGetObjectPtrLabel = stub_glGetObjectPtrLabel;
	glBufferStorage = stub_glBufferStorage;
	glClearTexImage = stub_glClearTexImage;
	glClearTexSubImage = stub_glClearTexSubImage;
	glBindBuffersBase = stub_glBindBuffersBase;
	glBindBuffersRange = stub_glBindBuffersRange;
	glBindTextures = stub_glBindTextures;
	glBindSamplers = stub_glBindSamplers;
	glBindImageTextures = stub_glBindImageTextures;
	glBindVertexBuffers = stub_glBindVertexBuffers;
	glClipControl = stub_glClipControl;
	glCreateTransformFeedbacks = stub_glCreateTransformFeedbacks;
	glTransformFeedbackBufferBase = stub_glTransformFeedbackBufferBase;
	glTransformFeedbackBufferRange = stub_glTransformFeedbackBufferRange;
	glGetTransformFeedbackiv = stub_glGetTransformFeedbackiv;
	glGetTransformFeedbacki_v = stub_glGetTransformFeedbacki_v;
	glGetTransformFeedbacki64_v = stub_glGetTransformFeedbacki64_v;
	glCreateBuffers = stub_glCreateBuffers;
	glNamedBufferStorage = stub_glNamedBufferStorage;
	glNamedBufferData = stub_glNamedBufferData;
	glNamedBufferSubData = stub_glNamedBufferSubData;
	glCopyNamedBufferSubData = stub_glCopyNamedBufferSubData;
	glClearNamedBufferData = stub_glClearNamedBufferData;
	glClearNamedBufferSubData = stub_glClearNamedBufferSubData;
	glMapNamedBuffer = stub_glMapNamedBuffer;
	glMapNamedBufferRange = stub_glMapNamedBufferRange;
	glUnmapNamedBuffer = stub_glUnmapNamedBuffer;
	glFlushMappedNamedBufferRange = stub_glFlushMappedNamedBufferRange;
	glGetNamedBufferParameteriv = stub_glGetNamedBufferParameteriv;
	glGetNamedBufferParameteri64v = stub_glGetNamedBufferParameteri64v;
	glGetNamedBufferPointerv = stub_glGetNamedBufferPointerv;
	glGetNamedBufferSubData = stub_glGetNamedBufferSubData;
	glCreateFramebuffers = stub_glCreateFramebuffers;
	glNamedFramebufferRenderbuffer = stub_glNamedFramebufferRenderbuffer;
	glNamedFramebufferParameteri = stub_glNamedFramebufferParameteri;
	glNamedFramebufferTexture = stub_glNamedFramebufferTexture;
	glNamedFramebufferTextureLayer = stub_glNamedFramebufferTextureLayer;
	glNamedFramebufferDrawBuffer = stub_glNamedFramebufferDrawBuffer;
	glNamedFramebufferDrawBuffers = stub_glNamedFramebufferDrawBuffers;
	glNamedFramebufferReadBuffer = stub_glNamedFramebufferReadBuffer;
	glInvalidateNamedFramebufferData = stub_glInvalidateNamedFramebufferData;
	glInvalidateNamedFramebufferSubData = stub_glInvalidateNamedFramebufferSubData;
	glClearNamedFramebufferiv = stub_glClearNamedFramebufferiv;
	glClearNamedFramebufferuiv = stub_glClearNamedFramebufferuiv;
	glClearNamedFramebufferfv = stub_glClearNamedFramebufferfv;
	glClearNamedFramebufferfi = stub_glClearNamedFramebufferfi;
	glBlitNamedFramebuffer = stub_glBlitNamedFramebuffer;
	glCheckNamedFramebufferStatus = stub_glCheckNamedFramebufferStatus;
	glGetNamedFramebufferParameteriv = stub_glGetNamedFramebufferParameteriv;
	glGetNamedFramebufferAttachmentParameteriv = stub_glGetNamedFramebufferAttachmentParameteriv;
	glCreateRenderbuffers = stub_glCreateRenderbuffers;
	glNamedRenderbufferStorage = stub_glNamedRenderbufferStorage;
	glNamedRenderbufferStorageMultisample = stub_glNamedRenderbufferStorageMultisample;
	glGetNamedRenderbufferParameteriv = stub_glGetNamedRenderbufferParameteriv;
	glCreateTextures = stub_glCreateTextures;
	glTextureBuffer = stub_glTextureBuffer;
	glTextureBufferRange = stub_glTextureBufferRange;
	glTextureStorage1D = stub_glTextureStorage1D;
	glTextureStorage2D = stub_glTextureStorage2D;
	glTextureStorage3D = stub_glTextureStorage3D;
	glTextureStorage2DMultisample = stub_glTextureStorage2DMultisample;
	glTextureStorage3DMultisample = stub_glTextureStorage3DMultisample;
	glTextureSubImage1D = stub_glTextureSubImage1D;
	glTextureSubImage2D = stub_glTextureSubImage2D;
	glTextureSubImage3D = stub_glTextureSubImage3D;
	glCompressedTextureSubImage1D = stub_glCompressedTextureSubImage1D;
	glCompressedTextureSubImage2D = stub_glCompressedTextureSubImage2D;
	glCompressedTextureSubImage3D = stub_glCompressedTextureSubImage3D;
	glCopyTextureSubImage1D = stub_glCopyTextureSubImage1D;
	glCopyTextureSubImage2D = stub_glCopyTextureSubImage2D;
	glCopyTextureSubImage3D = stub_glCopyTextureSubImage3D;
	glTextureParameterf = stub_glTextureParameterf;
	glTextureParameterfv = stub_glTextureParameterfv;
	glTextureParameteri = stub_glTextureParameteri;
	glTextureParameterIiv = stub_glTextureParameterIiv;
	glTextureParameterIuiv = stub_glTextureParameterIuiv;
	glTextureParameteriv = stub_glTextureParameteriv;
	glGenerateTextureMipmap = stub_glGenerateTextureMipmap;
	glBindTextureUnit = stub_glBindTextureUnit;
	glGetTextureImage = stub_glGetTextureImage;
	glGetCompressedTextureImage = stub_glGetCompressedTextureImage;
	glGetTextureLevelParameterfv = stub_glGetTextureLevelParameterfv;
	glGetTextureLevelParameteriv = stub_glGetTextureLevelParameteriv;
	glGetTextureParameterfv = stub_glGetTextureParameterfv;
	glGetTextureParameterIiv = stub_glGetTextureParameterIiv;
	glGetTextureParameterIuiv = stub_glGetTextureParameterIuiv;
	glGetTextureParameteriv = stub_glGetTextureParameteriv;
	glCreateVertexArrays = stub_glCreateVertexArrays;
	glDisableVertexArrayAttrib = stub_glDisableVertexArrayAttrib;
	glEnableVertexArrayAttrib = stub_glEnableVertexArrayAttrib;
	glVertexArrayElementBuffer = stub_glVertexArrayElementBuffer;
	glVertexArrayVertexBuffer = stub_glVertexArrayVertexBuffer;
	glVertexArrayVertexBuffers = stub_glVertexArrayVertexBuffers;
	glVertexArrayAttribBinding = stub_glVertexArrayAttribBinding;
	glVertexArrayAttribFormat = stub_glVertexArrayAttribFormat;
	glVertexArrayAttribIFormat = stub_glVertexArrayAttribIFormat;
	glVertexArrayAttribLFormat = stub_glVertexArrayAttribLFormat;
	glVertexArrayBindingDivisor = stub_glVertexArrayBindingDivisor;
	glGetVertexArrayiv = stub_glGetVertexArrayiv;
	glGetVertexArrayIndexediv = stub_glGetVertexArrayIndexediv;
	glGetVertexArrayIndexed64iv = stub_glGetVertexArrayIndexed64iv;
	glCreateSamplers = stub_glCreateSamplers;
	glCreateProgramPipelines = stub_glCreateProgramPipelines;
	glCreateQueries = stub_glCreateQueries;
	glGetQueryBufferObjecti64v = stub_glGetQueryBufferObjecti64v;
	glGetQueryBufferObjectiv = stub_glGetQueryBufferObjectiv;
	glGetQueryBufferObjectui64v = stub_glGetQueryBufferObjectui64v;
	glGetQueryBufferObjectuiv = stub_glGetQueryBufferObjectuiv;
	glMemoryBarrierByRegion = stub_glMemoryBarrierByRegion;
	glGetTextureSubImage = stub_glGetTextureSubImage;
	glGetCompressedTextureSubImage = stub_glGetCompressedTextureSubImage;
	glGetGraphicsResetStatus = stub_glGetGraphicsResetStatus;
	glGetnCompressedTexImage = stub_glGetnCompressedTexImage;
	glGetnTexImage = stub_glGetnTexImage;
	glGetnUniformdv = stub_glGetnUniformdv;
	glGetnUniformfv = stub_glGetnUniformfv;
	glGetnUniformiv = stub_glGetnUniformiv;
	glGetnUniformuiv = stub_glGetnUniformuiv;
	glReadnPixels = stub_glReadnPixels;
	glGetnMapdv = stub_glGetnMapdv;
	glGetnMapfv = stub_glGetnMapfv;
	glGetnMapiv = stub_glGetnMapiv;
	glGetnPixelMapfv = stub_glGetnPixelMapfv;
	glGetnPixelMapuiv = stub_glGetnPixelMapuiv;
	glGetnPixelMapusv = stub_glGetnPixelMapusv;
	glGetnPolygonStipple = stub_glGetnPolygonStipple;
	glGetnColorTable = stub_glGetnColorTable;
	glGetnConvolutionFilter = stub_glGetnConvolutionFilter;
	glGetnSeparableFilter = stub_glGetnSeparableFilter;
	glGetnHistogram = stub_glGetnHistogram;
	glGetnMinmax = stub_glGetnMinmax;
	glTextureBarrier = stub_glTextureBarrier;
	glPrimitiveBoundingBoxARB = stub_glPrimitiveBoundingBoxARB;
	glGetTextureHandleARB = stub_glGetTextureHandleARB;
	glGetTextureSamplerHandleARB = stub_glGetTextureSamplerHandleARB;
	glMakeTextureHandleResidentARB = stub_glMakeTextureHandleResidentARB;
	glMakeTextureHandleNonResidentARB = stub_glMakeTextureHandleNonResidentARB;
	glGetImageHandleARB = stub_glGetImageHandleARB;
	glMakeImageHandleResidentARB = stub_glMakeImageHandleResidentARB;
	glMakeImageHandleNonResidentARB = stub_glMakeImageHandleNonResidentARB;
	glUniformHandleui64ARB = stub_glUniformHandleui64ARB;
	glUniformHandleui64vARB = stub_glUniformHandleui64vARB;
	glProgramUniformHandleui64ARB = stub_glProgramUniformHandleui64ARB;
	glProgramUniformHandleui64vARB = stub_glProgramUniformHandleui64vARB;
	glIsTextureHandleResidentARB = stub_glIsTextureHandleResidentARB;
	glIsImageHandleResidentARB = stub_glIsImageHandleResidentARB;
	glVertexAttribL1ui64ARB = stub_glVertexAttribL1ui64ARB;
	glVertexAttribL1ui64vARB = stub_glVertexAttribL1ui64vARB;
	glGetVertexAttribLui64vARB = stub_glGetVertexAttribLui64vARB;
	glCreateSyncFromCLeventARB = stub_glCreateSyncFromCLeventARB;
	glClampColorARB = stub_glClampColorARB;
	glDispatchComputeGroupSizeARB = stub_glDispatchComputeGroupSizeARB;
	glDebugMessageControlARB = stub_glDebugMessageControlARB;
	glDebugMessageInsertARB = stub_glDebugMessageInsertARB;
	glDebugMessageCallbackARB = stub_glDebugMessageCallbackARB;
	glGetDebugMessageLogARB = stub_glGetDebugMessageLogARB;
	glDrawBuffersARB = stub_glDrawBuffersARB;
	glBlendEquationiARB = stub_glBlendEquationiARB;
	glBlendEquationSeparateiARB = stub_glBlendEquationSeparateiARB;
	glBlendFunciARB = stub_glBlendFunciARB;
	glBlendFuncSeparateiARB = stub_glBlendFuncSeparateiARB;
	glDrawArraysInstancedARB = stub_glDrawArraysInstancedARB;
	glDrawElementsInstancedARB = stub_glDrawElementsInstancedARB;
	glProgramStringARB = stub_glProgramStringARB;
	glBindProgramARB = stub_glBindProgramARB;
	glDeleteProgramsARB = stub_glDeleteProgramsARB;
	glGenProgramsARB = stub_glGenProgramsARB;
	glProgramEnvParameter4dARB = stub_glProgramEnvParameter4dARB;
	glProgramEnvParameter4dvARB = stub_glProgramEnvParameter4dvARB;
	glProgramEnvParameter4fARB = stub_glProgramEnvParameter4fARB;
	glProgramEnvParameter4fvARB = stub_glProgramEnvParameter4fvARB;
	glProgramLocalParameter4dARB = stub_glProgramLocalParameter4dARB;
	glProgramLocalParameter4dvARB = stub_glProgramLocalParameter4dvARB;
	glProgramLocalParameter4fARB = stub_glProgramLocalParameter4fARB;
	glProgramLocalParameter4fvARB = stub_glProgramLocalParameter4fvARB;
	glGetProgramEnvParameterdvARB = stub_glGetProgramEnvParameterdvARB;
	glGetProgramEnvParameterfvARB = stub_glGetProgramEnvParameterfvARB;
	glGetProgramLocalParameterdvARB = stub_glGetProgramLocalParameterdvARB;
	glGetProgramLocalParameterfvARB = stub_glGetProgramLocalParameterfvARB;
	glGetProgramivARB = stub_glGetProgramivARB;
	glGetProgramStringARB = stub_glGetProgramStringARB;
	glIsProgramARB = stub_glIsProgramARB;
	glProgramParameteriARB = stub_glProgramParameteriARB;
	glFramebufferTextureARB = stub_glFramebufferTextureARB;
	glFramebufferTextureLayerARB = stub_glFramebufferTextureLayerARB;
	glFramebufferTextureFaceARB = stub_glFramebufferTextureFaceARB;
	glUniform1i64ARB = stub_glUniform1i64ARB;
	glUniform2i64ARB = stub_glUniform2i64ARB;
	glUniform3i64ARB = stub_glUniform3i64ARB;
	glUniform4i64ARB = stub_glUniform4i64ARB;
	glUniform1i64vARB = stub_glUniform1i64vARB;
	glUniform2i64vARB = stub_glUniform2i64vARB;
	glUniform3i64vARB = stub_glUniform3i64vARB;
	glUniform4i64vARB = stub_glUniform4i64vARB;
	glUniform1ui64ARB = stub_glUniform1ui64ARB;
	glUniform2ui64ARB = stub_glUniform2ui64ARB;
	glUniform3ui64ARB = stub_glUniform3ui64ARB;
	glUniform4ui64ARB = stub_glUniform4ui64ARB;
	glUniform1ui64vARB = stub_glUniform1ui64vARB;
	glUniform2ui64vARB = stub_glUniform2ui64vARB;
	glUniform3ui64vARB = stub_glUniform3ui64vARB;
	glUniform4ui64vARB = stub_glUniform4ui64vARB;
	glGetUniformi64vARB = stub_glGetUniformi64vARB;
	glGetUniformui64vARB = stub_glGetUniformui64vARB;
	glGetnUniformi64vARB = stub_glGetnUniformi64vARB;
	glGetnUniformui64vARB = stub_glGetnUniformui64vARB;
	glProgramUniform1i64ARB = stub_glProgramUniform1i64ARB;
	glProgramUniform2i64ARB = stub_glProgramUniform2i64ARB;
	glProgramUniform3i64ARB = stub_glProgramUniform3i64ARB;
	glProgramUniform4i64ARB = stub_glProgramUniform4i64ARB;
	glProgramUniform1i64vARB = stub_glProgramUniform1i64vARB;
	glProgramUniform2i64vARB = stub_glProgramUniform2i64vARB;
	glProgramUniform3i64vARB = stub_glProgramUniform3i64vARB;
	glProgramUniform4i64vARB = stub_glProgramUniform4i64vARB;
	glProgramUniform1ui64ARB = stub_glProgramUniform1ui64ARB;
	glProgramUniform2ui64ARB = stub_glProgramUniform2ui64ARB;
	glProgramUniform3ui64ARB = stub_glProgramUniform3ui64ARB;
	glProgramUniform4ui64ARB = stub_glProgramUniform4ui64ARB;
	glProgramUniform1ui64vARB = stub_glProgramUniform1ui64vARB;
	glProgramUniform2ui64vARB = stub_glProgramUniform2ui64vARB;
	glProgramUniform3ui64vARB = stub_glProgramUniform3ui64vARB;
	glProgramUniform4ui64vARB = stub_glProgramUniform4ui64vARB;
	glColorTable = stub_glColorTable;
	glColorTableParameterfv = stub_glColorTableParameterfv;
	glColorTableParameteriv = stub_glColorTableParameteriv;
	glCopyColorTable = stub_glCopyColorTable;
	glGetColorTable = stub_glGetColorTable;
	glGetColorTableParameterfv = stub_glGetColorTableParameterfv;
	glGetColorTableParameteriv = stub_glGetColorTableParameteriv;
	glColorSubTable = stub_glColorSubTable;
	glCopyColorSubTable = stub_glCopyColorSubTable;
	glConvolutionFilter1D = stub_glConvolutionFilter1D;
	glConvolutionFilter2D = stub_glConvolutionFilter2D;
	glConvolutionParameterf = stub_glConvolutionParameterf;
	glConvolutionParameterfv = stub_glConvolutionParameterfv;
	glConvolutionParameteri = stub_glConvolutionParameteri;
	glConvolutionParameteriv = stub_glConvolutionParameteriv;
	glCopyConvolutionFilter1D = stub_glCopyConvolutionFilter1D;
	glCopyConvolutionFilter2D = stub_glCopyConvolutionFilter2D;
	glGetConvolutionFilter = stub_glGetConvolutionFilter;
	glGetConvolutionParameterfv = stub_glGetConvolutionParameterfv;
	glGetConvolutionParameteriv = stub_glGetConvolutionParameteriv;
	glGetSeparableFilter = stub_glGetSeparableFilter;
	glSeparableFilter2D = stub_glSeparableFilter2D;
	glGetHistogram = stub_glGetHistogram;
	glGetHistogramParameterfv = stub_glGetHistogramParameterfv;
	glGetHistogramParameteriv = stub_glGetHistogramParameteriv;
	glGetMinmax = stub_glGetMinmax;
	glGetMinmaxParameterfv = stub_glGetMinmaxParameterfv;
	glGetMinmaxParameteriv = stub_glGetMinmaxParameteriv;
	glHistogram = stub_glHistogram;
	glMinmax = stub_glMinmax;
	glResetHistogram = stub_glResetHistogram;
	glResetMinmax = stub_glResetMinmax;
	glMultiDrawArraysIndirectCountARB = stub_glMultiDrawArraysIndirectCountARB;
	glMultiDrawElementsIndirectCountARB = stub_glMultiDrawElementsIndirectCountARB;
	glVertexAttribDivisorARB = stub_glVertexAttribDivisorARB;
	glCurrentPaletteMatrixARB = stub_glCurrentPaletteMatrixARB;
	glMatrixIndexubvARB = stub_glMatrixIndexubvARB;
	glMatrixIndexusvARB = stub_glMatrixIndexusvARB;
	glMatrixIndexuivARB = stub_glMatrixIndexuivARB;
	glMatrixIndexPointerARB = stub_glMatrixIndexPointerARB;
	glSampleCoverageARB = stub_glSampleCoverageARB;
	glActiveTextureARB = stub_glActiveTextureARB;
	glClientActiveTextureARB = stub_glClientActiveTextureARB;
	glMultiTexCoord1dARB = stub_glMultiTexCoord1dARB;
	glMultiTexCoord1dvARB = stub_glMultiTexCoord1dvARB;
	glMultiTexCoord1fARB = stub_glMultiTexCoord1fARB;
	glMultiTexCoord1fvARB = stub_glMultiTexCoord1fvARB;
	glMultiTexCoord1iARB = stub_glMultiTexCoord1iARB;
	glMultiTexCoord1ivARB = stub_glMultiTexCoord1ivARB;
	glMultiTexCoord1sARB = stub_glMultiTexCoord1sARB;
	glMultiTexCoord1svARB = stub_glMultiTexCoord1svARB;
	glMultiTexCoord2dARB = stub_glMultiTexCoord2dARB;
	glMultiTexCoord2dvARB = stub_glMultiTexCoord2dvARB;
	glMultiTexCoord2fARB = stub_glMultiTexCoord2fARB;
	glMultiTexCoord2fvARB = stub_glMultiTexCoord2fvARB;
	glMultiTexCoord2iARB = stub_glMultiTexCoord2iARB;
	glMultiTexCoord2ivARB = stub_glMultiTexCoord2ivARB;
	glMultiTexCoord2sARB = stub_glMultiTexCoord2sARB;
	glMultiTexCoord2svARB = stub_glMultiTexCoord2svARB;
	glMultiTexCoord3dARB = stub_glMultiTexCoord3dARB;
	glMultiTexCoord3dvARB = stub_glMultiTexCoord3dvARB;
	glMultiTexCoord3fARB = stub_glMultiTexCoord3fARB;
	glMultiTexCoord3fvARB = stub_glMultiTexCoord3fvARB;
	glMultiTexCoord3iARB = stub_glMultiTexCoord3iARB;
	glMultiTexCoord3ivARB = stub_glMultiTexCoord3ivARB;
	glMultiTexCoord3sARB = stub_glMultiTexCoord3sARB;
	glMultiTexCoord3svARB = stub_glMultiTexCoord3svARB;
	glMultiTexCoord4dARB = stub_glMultiTexCoord4dARB;
	glMultiTexCoord4dvARB = stub_glMultiTexCoord4dvARB;
	glMultiTexCoord4fARB = stub_glMultiTexCoord4fARB;
	glMultiTexCoord4fvARB = stub_glMultiTexCoord4fvARB;
	glMultiTexCoord4iARB = stub_glMultiTexCoord4iARB;
	glMultiTexCoord4ivARB = stub_glMultiTexCoord4ivARB;
	glMultiTexCoord4sARB = stub_glMultiTexCoord4sARB;
	glMultiTexCoord4svARB = stub_glMultiTexCoord4svARB;
	glGenQueriesARB = stub_glGenQueriesARB;
	glDeleteQueriesARB = stub_glDeleteQueriesARB;
	glIsQueryARB = stub_glIsQueryARB;
	glBeginQueryARB = stub_glBeginQueryARB;
	glEndQueryARB = stub_glEndQueryARB;
	glGetQueryivARB = stub_glGetQueryivARB;
	glGetQueryObjectivARB = stub_glGetQueryObjectivARB;
	glGetQueryObjectuivARB = stub_glGetQueryObjectuivARB;
	glMaxShaderCompilerThreadsARB = stub_glMaxShaderCompilerThreadsARB;
	glPointParameterfARB = stub_glPointParameterfARB;
	glPointParameterfvARB = stub_glPointParameterfvARB;
	glGetGraphicsResetStatusARB = stub_glGetGraphicsResetStatusARB;
	glGetnTexImageARB = stub_glGetnTexImageARB;
	glReadnPixelsARB = stub_glReadnPixelsARB;
	glGetnCompressedTexImageARB = stub_glGetnCompressedTexImageARB;
	glGetnUniformfvARB = stub_glGetnUniformfvARB;
	glGetnUniformivARB = stub_glGetnUniformivARB;
	glGetnUniformuivARB = stub_glGetnUniformuivARB;
	glGetnUniformdvARB = stub_glGetnUniformdvARB;
	glGetnMapdvARB = stub_glGetnMapdvARB;
	glGetnMapfvARB = stub_glGetnMapfvARB;
	glGetnMapivARB = stub_glGetnMapivARB;
	glGetnPixelMapfvARB = stub_glGetnPixelMapfvARB;
	glGetnPixelMapuivARB = stub_glGetnPixelMapuivARB;
	glGetnPixelMapusvARB = stub_glGetnPixelMapusvARB;
	glGetnPolygonStippleARB = stub_glGetnPolygonStippleARB;
	glGetnColorTableARB = stub_glGetnColorTableARB;
	glGetnConvolutionFilterARB = stub_glGetnConvolutionFilterARB;
	glGetnSeparableFilterARB = stub_glGetnSeparableFilterARB;
	glGetnHistogramARB = stub_glGetnHistogramARB;
	glGetnMinmaxARB = stub_glGetnMinmaxARB;
	glFramebufferSampleLocationsfvARB = stub_glFramebufferSampleLocationsfvARB;
	glNamedFramebufferSampleLocationsfvARB = stub_glNamedFramebufferSampleLocationsfvARB;
	glEvaluateDepthValuesARB = stub_glEvaluateDepthValuesARB;
	glMinSampleShadingARB = stub_glMinSampleShadingARB;
	glDeleteObjectARB = stub_glDeleteObjectARB;
	glGetHandleARB = stub_glGetHandleARB;
	glDetachObjectARB = stub_glDetachObjectARB;
	glCreateShaderObjectARB = stub_glCreateShaderObjectARB;
	glShaderSourceARB = stub_glShaderSourceARB;
	glCompileShaderARB = stub_glCompileShaderARB;
	glCreateProgramObjectARB = stub_glCreateProgramObjectARB;
	glAttachObjectARB = stub_glAttachObjectARB;
	glLinkProgramARB = stub_glLinkProgramARB;
	glUseProgramObjectARB = stub_glUseProgramObjectARB;
	glValidateProgramARB = stub_glValidateProgramARB;
	glUniform1fARB = stub_glUniform1fARB;
	glUniform2fARB = stub_glUniform2fARB;
	glUniform3fARB = stub_glUniform3fARB;
	glUniform4fARB = stub_glUniform4fARB;
	glUniform1iARB = stub_glUniform1iARB;
	glUniform2iARB = stub_glUniform2iARB;
	glUniform3iARB = stub_glUniform3iARB;
	glUniform4iARB = stub_glUniform4iARB;
	glUniform1fvARB = stub_glUniform1fvARB;
	glUniform2fvARB = stub_glUniform2fvARB;
	glUniform3fvARB = stub_glUniform3fvARB;
	glUniform4fvARB = stub_glUniform4fvARB;
	glUniform1ivARB = stub_glUniform1ivARB;
	glUniform2ivARB = stub_glUniform2ivARB;
	glUniform3ivARB = stub_glUniform3ivARB;
	glUniform4ivARB = stub_glUniform4ivARB;
	glUniformMatrix2fvARB = stub_glUniformMatrix2fvARB;
	glUniformMatrix3fvARB = stub_glUniformMatrix3fvARB;
	glUniformMatrix4fvARB = stub_glUniformMatrix4fvARB;
	glGetObjectParameterfvARB = stub_glGetObjectParameterfvARB;
	glGetObjectParameterivARB = stub_glGetObjectParameterivARB;
	glGetInfoLogARB = stub_glGetInfoLogARB;
	glGetAttachedObjectsARB = stub_glGetAttachedObjectsARB;
	glGetUniformLocationARB = stub_glGetUniformLocationARB;
	glGetActiveUniformARB = stub_glGetActiveUniformARB;
	glGetUniformfvARB = stub_glGetUniformfvARB;
	glGetUniformivARB = stub_glGetUniformivARB;
	glGetShaderSourceARB = stub_glGetShaderSourceARB;
	glNamedStringARB = stub_glNamedStringARB;
	glDeleteNamedStringARB = stub_glDeleteNamedStringARB;
	glCompileShaderIncludeARB = stub_glCompileShaderIncludeARB;
	glIsNamedStringARB = stub_glIsNamedStringARB;
	glGetNamedStringARB = stub_glGetNamedStringARB;
	glGetNamedStringivARB = stub_glGetNamedStringivARB;
	glBufferPageCommitmentARB = stub_glBufferPageCommitmentARB;
	glNamedBufferPageCommitmentEXT = stub_glNamedBufferPageCommitmentEXT;
	glNamedBufferPageCommitmentARB = stub_glNamedBufferPageCommitmentARB;
	glTexPageCommitmentARB = stub_glTexPageCommitmentARB;
	glTexBufferARB = stub_glTexBufferARB;
	glCompressedTexImage3DARB = stub_glCompressedTexImage3DARB;
	glCompressedTexImage2DARB = stub_glCompressedTexImage2DARB;
	glCompressedTexImage1DARB = stub_glCompressedTexImage1DARB;
	glCompressedTexSubImage3DARB = stub_glCompressedTexSubImage3DARB;
	glCompressedTexSubImage2DARB = stub_glCompressedTexSubImage2DARB;
	glCompressedTexSubImage1DARB = stub_glCompressedTexSubImage1DARB;
	glGetCompressedTexImageARB = stub_glGetCompressedTexImageARB;
	glLoadTransposeMatrixfARB = stub_glLoadTransposeMatrixfARB;
	glLoadTransposeMatrixdARB = stub_glLoadTransposeMatrixdARB;
	glMultTransposeMatrixfARB = stub_glMultTransposeMatrixfARB;
	glMultTransposeMatrixdARB = stub_glMultTransposeMatrixdARB;
	glWeightbvARB = stub_glWeightbvARB;
	glWeightsvARB = stub_glWeightsvARB;
	glWeightivARB = stub_glWeightivARB;
	glWeightfvARB = stub_glWeightfvARB;
	glWeightdvARB = stub_glWeightdvARB;
	glWeightubvARB = stub_glWeightubvARB;
	glWeightusvARB = stub_glWeightusvARB;
	glWeightuivARB = stub_glWeightuivARB;
	glWeightPointerARB = stub_glWeightPointerARB;
	glVertexBlendARB = stub_glVertexBlendARB;
	glBindBufferARB = stub_glBindBufferARB;
	glDeleteBuffersARB = stub_glDeleteBuffersARB;
	glGenBuffersARB = stub_glGenBuffersARB;
	glIsBufferARB = stub_glIsBufferARB;
	glBufferDataARB = stub_glBufferDataARB;
	glBufferSubDataARB = stub_glBufferSubDataARB;
	glGetBufferSubDataARB = stub_glGetBufferSubDataARB;
	glMapBufferARB = stub_glMapBufferARB;
	glUnmapBufferARB = stub_glUnmapBufferARB;
	glGetBufferParameterivARB = stub_glGetBufferParameterivARB;
	glGetBufferPointervARB = stub_glGetBufferPointervARB;
	glVertexAttrib1dARB = stub_glVertexAttrib1dARB;
	glVertexAttrib1dvARB = stub_glVertexAttrib1dvARB;
	glVertexAttrib1fARB = stub_glVertexAttrib1fARB;
	glVertexAttrib1fvARB = stub_glVertexAttrib1fvARB;
	glVertexAttrib1sARB = stub_glVertexAttrib1sARB;
	glVertexAttrib1svARB = stub_glVertexAttrib1svARB;
	glVertexAttrib2dARB = stub_glVertexAttrib2dARB;
	glVertexAttrib2dvARB = stub_glVertexAttrib2dvARB;
	glVertexAttrib2fARB = stub_glVertexAttrib2fARB;
	glVertexAttrib2fvARB = stub_glVertexAttrib2fvARB;
	glVertexAttrib2sARB = stub_glVertexAttrib2sARB;
	glVertexAttrib2svARB = stub_glVertexAttrib2svARB;
	glVertexAttrib3dARB = stub_glVertexAttrib3dARB;
	glVertexAttrib3dvARB = stub_glVertexAttrib3dvARB;
	glVertexAttrib3fARB = stub_glVertexAttrib3fARB;
	glVertexAttrib3fvARB = stub_glVertexAttrib3fvARB;
	glVertexAttrib3sARB = stub_glVertexAttrib3sARB;
	glVertexAttrib3svARB = stub_glVertexAttrib3svARB;
	glVertexAttrib4NbvARB = stub_glVertexAttrib4NbvARB;
	glVertexAttrib4NivARB = stub_glVertexAttrib4NivARB;
	glVertexAttrib4NsvARB = stub_glVertexAttrib4NsvARB;
	glVertexAttrib4NubARB = stub_glVertexAttrib4NubARB;
	glVertexAttrib4NubvARB = stub_glVertexAttrib4NubvARB;
	glVertexAttrib4NuivARB = stub_glVertexAttrib4NuivARB;
	glVertexAttrib4NusvARB = stub_glVertexAttrib4NusvARB;
	glVertexAttrib4bvARB = stub_glVertexAttrib4bvARB;
	glVertexAttrib4dARB = stub_glVertexAttrib4dARB;
	glVertexAttrib4dvARB = stub_glVertexAttrib4dvARB;
	glVertexAttrib4fARB = stub_glVertexAttrib4fARB;
	glVertexAttrib4fvARB = stub_glVertexAttrib4fvARB;
	glVertexAttrib4ivARB = stub_glVertexAttrib4ivARB;
	glVertexAttrib4sARB = stub_glVertexAttrib4sARB;
	glVertexAttrib4svARB = stub_glVertexAttrib4svARB;
	glVertexAttrib4ubvARB = stub_glVertexAttrib4ubvARB;
	glVertexAttrib4uivARB = stub_glVertexAttrib4uivARB;
	glVertexAttrib4usvARB = stub_glVertexAttrib4usvARB;
	glVertexAttribPointerARB = stub_glVertexAttribPointerARB;
	glEnableVertexAttribArrayARB = stub_glEnableVertexAttribArrayARB;
	glDisableVertexAttribArrayARB = stub_glDisableVertexAttribArrayARB;
	glGetVertexAttribdvARB = stub_glGetVertexAttribdvARB;
	glGetVertexAttribfvARB = stub_glGetVertexAttribfvARB;
	glGetVertexAttribivARB = stub_glGetVertexAttribivARB;
	glGetVertexAttribPointervARB = stub_glGetVertexAttribPointervARB;
	glBindAttribLocationARB = stub_glBindAttribLocationARB;
	glGetActiveAttribARB = stub_glGetActiveAttribARB;
	glGetAttribLocationARB = stub_glGetAttribLocationARB;
	glWindowPos2dARB = stub_glWindowPos2dARB;
	glWindowPos2dvARB = stub_glWindowPos2dvARB;
	glWindowPos2fARB = stub_glWindowPos2fARB;
	glWindowPos2fvARB = stub_glWindowPos2fvARB;
	glWindowPos2iARB = stub_glWindowPos2iARB;
	glWindowPos2ivARB = stub_glWindowPos2ivARB;
	glWindowPos2sARB = stub_glWindowPos2sARB;
	glWindowPos2svARB = stub_glWindowPos2svARB;
	glWindowPos3dARB = stub_glWindowPos3dARB;
	glWindowPos3dvARB = stub_glWindowPos3dvARB;
	glWindowPos3fARB = stub_glWindowPos3fARB;
	glWindowPos3fvARB = stub_glWindowPos3fvARB;
	glWindowPos3iARB = stub_glWindowPos3iARB;
	glWindowPos3ivARB = stub_glWindowPos3ivARB;
	glWindowPos3sARB = stub_glWindowPos3sARB;
	glWindowPos3svARB = stub_glWindowPos3svARB;
	glBlendBarrierKHR = stub_glBlendBarrierKHR;
	glMultiTexCoord1bOES = stub_glMultiTexCoord1bOES;
	glMultiTexCoord1bvOES = stub_glMultiTexCoord1bvOES;
	glMultiTexCoord2bOES = stub_glMultiTexCoord2bOES;
	glMultiTexCoord2bvOES = stub_glMultiTexCoord2bvOES;
	glMultiTexCoord3bOES = stub_glMultiTexCoord3bOES;
	glMultiTexCoord3bvOES = stub_glMultiTexCoord3bvOES;
	glMultiTexCoord4bOES = stub_glMultiTexCoord4bOES;
	glMultiTexCoord4bvOES = stub_glMultiTexCoord4bvOES;
	glTexCoord1bOES = stub_glTexCoord1bOES;
	glTexCoord1bvOES = stub_glTexCoord1bvOES;
	glTexCoord2bOES = stub_glTexCoord2bOES;
	glTexCoord2bvOES = stub_glTexCoord2bvOES;
	glTexCoord3bOES = stub_glTexCoord3bOES;
	glTexCoord3bvOES = stub_glTexCoord3bvOES;
	glTexCoord4bOES = stub_glTexCoord4bOES;
	glTexCoord4bvOES = stub_glTexCoord4bvOES;
	glVertex2bOES = stub_glVertex2bOES;
	glVertex2bvOES = stub_glVertex2bvOES;
	glVertex3bOES = stub_glVertex3bOES;
	glVertex3bvOES = stub_glVertex3bvOES;
	glVertex4bOES = stub_glVertex4bOES;
	glVertex4bvOES = stub_glVertex4bvOES;
	glAlphaFuncxOES = stub_glAlphaFuncxOES;
	glClearColorxOES = stub_glClearColorxOES;
	glClearDepthxOES = stub_glClearDepthxOES;
	glClipPlanexOES = stub_glClipPlanexOES;
	glColor4xOES = stub_glColor4xOES;
	glDepthRangexOES = stub_glDepthRangexOES;
	glFogxOES = stub_glFogxOES;
	glFogxvOES = stub_glFogxvOES;
	glFrustumxOES = stub_glFrustumxOES;
	glGetClipPlanexOES = stub_glGetClipPlanexOES;
	glGetFixedvOES = stub_glGetFixedvOES;
	glGetTexEnvxvOES = stub_glGetTexEnvxvOES;
	glGetTexParameterxvOES = stub_glGetTexParameterxvOES;
	glLightModelxOES = stub_glLightModelxOES;
	glLightModelxvOES = stub_glLightModelxvOES;
	glLightxOES = stub_glLightxOES;
	glLightxvOES = stub_glLightxvOES;
	glLineWidthxOES = stub_glLineWidthxOES;
	glLoadMatrixxOES = stub_glLoadMatrixxOES;
	glMaterialxOES = stub_glMaterialxOES;
	glMaterialxvOES = stub_glMaterialxvOES;
	glMultMatrixxOES = stub_glMultMatrixxOES;
	glMultiTexCoord4xOES = stub_glMultiTexCoord4xOES;
	glNormal3xOES = stub_glNormal3xOES;
	glOrthoxOES = stub_glOrthoxOES;
	glPointParameterxvOES = stub_glPointParameterxvOES;
	glPointSizexOES = stub_glPointSizexOES;
	glPolygonOffsetxOES = stub_glPolygonOffsetxOES;
	glRotatexOES = stub_glRotatexOES;
	glScalexOES = stub_glScalexOES;
	glTexEnvxOES = stub_glTexEnvxOES;
	glTexEnvxvOES = stub_glTexEnvxvOES;
	glTexParameterxOES = stub_glTexParameterxOES;
	glTexParameterxvOES = stub_glTexParameterxvOES;
	glTranslatexOES = stub_glTranslatexOES;
	glAccumxOES = stub_glAccumxOES;
	glBitmapxOES = stub_glBitmapxOES;
	glBlendColorxOES = stub_glBlendColorxOES;
	glClearAccumxOES = stub_glClearAccumxOES;
	glColor3xOES = stub_glColor3xOES;
	glColor3xvOES = stub_glColor3xvOES;
	glColor4xvOES = stub_glColor4xvOES;
	glConvolutionParameterxOES = stub_glConvolutionParameterxOES;
	glConvolutionParameterxvOES = stub_glConvolutionParameterxvOES;
	glEvalCoord1xOES = stub_glEvalCoord1xOES;
	glEvalCoord1xvOES = stub_glEvalCoord1xvOES;
	glEvalCoord2xOES = stub_glEvalCoord2xOES;
	glEvalCoord2xvOES = stub_glEvalCoord2xvOES;
	glFeedbackBufferxOES = stub_glFeedbackBufferxOES;
	glGetConvolutionParameterxvOES = stub_glGetConvolutionParameterxvOES;
	glGetHistogramParameterxvOES = stub_glGetHistogramParameterxvOES;
	glGetLightxOES = stub_glGetLightxOES;
	glGetMapxvOES = stub_glGetMapxvOES;
	glGetMaterialxOES = stub_glGetMaterialxOES;
	glGetPixelMapxv = stub_glGetPixelMapxv;
	glGetTexGenxvOES = stub_glGetTexGenxvOES;
	glGetTexLevelParameterxvOES = stub_glGetTexLevelParameterxvOES;
	glIndexxOES = stub_glIndexxOES;
	glIndexxvOES = stub_glIndexxvOES;
	glLoadTransposeMatrixxOES = stub_glLoadTransposeMatrixxOES;
	glMap1xOES = stub_glMap1xOES;
	glMap2xOES = stub_glMap2xOES;
	glMapGrid1xOES = stub_glMapGrid1xOES;
	glMapGrid2xOES = stub_glMapGrid2xOES;
	glMultTransposeMatrixxOES = stub_glMultTransposeMatrixxOES;
	glMultiTexCoord1xOES = stub_glMultiTexCoord1xOES;
	glMultiTexCoord1xvOES = stub_glMultiTexCoord1xvOES;
	glMultiTexCoord2xOES = stub_glMultiTexCoord2xOES;
	glMultiTexCoord2xvOES = stub_glMultiTexCoord2xvOES;
	glMultiTexCoord3xOES = stub_glMultiTexCoord3xOES;
	glMultiTexCoord3xvOES = stub_glMultiTexCoord3xvOES;
	glMultiTexCoord4xvOES = stub_glMultiTexCoord4xvOES;
	glNormal3xvOES = stub_glNormal3xvOES;
	glPassThroughxOES = stub_glPassThroughxOES;
	glPixelMapx = stub_glPixelMapx;
	glPixelStorex = stub_glPixelStorex;
	glPixelTransferxOES = stub_glPixelTransferxOES;
	glPixelZoomxOES = stub_glPixelZoomxOES;
	glPrioritizeTexturesxOES = stub_glPrioritizeTexturesxOES;
	glRasterPos2xOES = stub_glRasterPos2xOES;
	glRasterPos2xvOES = stub_glRasterPos2xvOES;
	glRasterPos3xOES = stub_glRasterPos3xOES;
	glRasterPos3xvOES = stub_glRasterPos3xvOES;
	glRasterPos4xOES = stub_glRasterPos4xOES;
	glRasterPos4xvOES = stub_glRasterPos4xvOES;
	glRectxOES = stub_glRectxOES;
	glRectxvOES = stub_glRectxvOES;
	glTexCoord1xOES = stub_glTexCoord1xOES;
	glTexCoord1xvOES = stub_glTexCoord1xvOES;
	glTexCoord2xOES = stub_glTexCoord2xOES;
	glTexCoord2xvOES = stub_glTexCoord2xvOES;
	glTexCoord3xOES = stub_glTexCoord3xOES;
	glTexCoord3xvOES = stub_glTexCoord3xvOES;
	glTexCoord4xOES = stub_glTexCoord4xOES;
	glTexCoord4xvOES = stub_glTexCoord4xvOES;
	glTexGenxOES = stub_glTexGenxOES;
	glTexGenxvOES = stub_glTexGenxvOES;
	glVertex2xOES = stub_glVertex2xOES;
	glVertex2xvOES = stub_glVertex2xvOES;
	glVertex3xOES = stub_glVertex3xOES;
	glVertex3xvOES = stub_glVertex3xvOES;
	glVertex4xOES = stub_glVertex4xOES;
	glVertex4xvOES = stub_glVertex4xvOES;
	glQueryMatrixxOES = stub_glQueryMatrixxOES;
	glClearDepthfOES = stub_glClearDepthfOES;
	glClipPlanefOES = stub_glClipPlanefOES;
	glDepthRangefOES = stub_glDepthRangefOES;
	glFrustumfOES = stub_glFrustumfOES;
	glGetClipPlanefOES = stub_glGetClipPlanefOES;
	glOrthofOES = stub_glOrthofOES;
	glTbufferMask3DFX = stub_glTbufferMask3DFX;
	glDebugMessageEnableAMD = stub_glDebugMessageEnableAMD;
	glDebugMessageInsertAMD = stub_glDebugMessageInsertAMD;
	glDebugMessageCallbackAMD = stub_glDebugMessageCallbackAMD;
	glGetDebugMessageLogAMD = stub_glGetDebugMessageLogAMD;
	glBlendFuncIndexedAMD = stub_glBlendFuncIndexedAMD;
	glBlendFuncSeparateIndexedAMD = stub_glBlendFuncSeparateIndexedAMD;
	glBlendEquationIndexedAMD = stub_glBlendEquationIndexedAMD;
	glBlendEquationSeparateIndexedAMD = stub_glBlendEquationSeparateIndexedAMD;
	glUniform1i64NV = stub_glUniform1i64NV;
	glUniform2i64NV = stub_glUniform2i64NV;
	glUniform3i64NV = stub_glUniform3i64NV;
	glUniform4i64NV = stub_glUniform4i64NV;
	glUniform1i64vNV = stub_glUniform1i64vNV;
	glUniform2i64vNV = stub_glUniform2i64vNV;
	glUniform3i64vNV = stub_glUniform3i64vNV;
	glUniform4i64vNV = stub_glUniform4i64vNV;
	glUniform1ui64NV = stub_glUniform1ui64NV;
	glUniform2ui64NV = stub_glUniform2ui64NV;
	glUniform3ui64NV = stub_glUniform3ui64NV;
	glUniform4ui64NV = stub_glUniform4ui64NV;
	glUniform1ui64vNV = stub_glUniform1ui64vNV;
	glUniform2ui64vNV = stub_glUniform2ui64vNV;
	glUniform3ui64vNV = stub_glUniform3ui64vNV;
	glUniform4ui64vNV = stub_glUniform4ui64vNV;
	glGetUniformi64vNV = stub_glGetUniformi64vNV;
	glGetUniformui64vNV = stub_glGetUniformui64vNV;
	glProgramUniform1i64NV = stub_glProgramUniform1i64NV;
	glProgramUniform2i64NV = stub_glProgramUniform2i64NV;
	glProgramUniform3i64NV = stub_glProgramUniform3i64NV;
	glProgramUniform4i64NV = stub_glProgramUniform4i64NV;
	glProgramUniform1i64vNV = stub_glProgramUniform1i64vNV;
	glProgramUniform2i64vNV = stub_glProgramUniform2i64vNV;
	glProgramUniform3i64vNV = stub_glProgramUniform3i64vNV;
	glProgramUniform4i64vNV = stub_glProgramUniform4i64vNV;
	glProgramUniform1ui64NV = stub_glProgramUniform1ui64NV;
	glProgramUniform2ui64NV = stub_glProgramUniform2ui64NV;
	glProgramUniform3ui64NV = stub_glProgramUniform3ui64NV;
	glProgramUniform4ui64NV = stub_glProgramUniform4ui64NV;
	glProgramUniform1ui64vNV = stub_glProgramUniform1ui64vNV;
	glProgramUniform2ui64vNV = stub_glProgramUniform2ui64vNV;
	glProgramUniform3ui64vNV = stub_glProgramUniform3ui64vNV;
	glProgramUniform4ui64vNV = stub_glProgramUniform4ui64vNV;
	glVertexAttribParameteriAMD = stub_glVertexAttribParameteriAMD;
	glMultiDrawArraysIndirectAMD = stub_glMultiDrawArraysIndirectAMD;
	glMultiDrawElementsIndirectAMD = stub_glMultiDrawElementsIndirectAMD;
	glGenNamesAMD = stub_glGenNamesAMD;
	glDeleteNamesAMD = stub_glDeleteNamesAMD;
	glIsNameAMD = stub_glIsNameAMD;
	glQueryObjectParameteruiAMD = stub_glQueryObjectParameteruiAMD;
	glGetPerfMonitorGroupsAMD = stub_glGetPerfMonitorGroupsAMD;
	glGetPerfMonitorCountersAMD = stub_glGetPerfMonitorCountersAMD;
	glGetPerfMonitorGroupStringAMD = stub_glGetPerfMonitorGroupStringAMD;
	glGetPerfMonitorCounterStringAMD = stub_glGetPerfMonitorCounterStringAMD;
	glGetPerfMonitorCounterInfoAMD = stub_glGetPerfMonitorCounterInfoAMD;
	glGenPerfMonitorsAMD = stub_glGenPerfMonitorsAMD;
	glDeletePerfMonitorsAMD = stub_glDeletePerfMonitorsAMD;
	glSelectPerfMonitorCountersAMD = stub_glSelectPerfMonitorCountersAMD;
	glBeginPerfMonitorAMD = stub_glBeginPerfMonitorAMD;
	glEndPerfMonitorAMD = stub_glEndPerfMonitorAMD;
	glGetPerfMonitorCounterDataAMD = stub_glGetPerfMonitorCounterDataAMD;
	glSetMultisamplefvAMD = stub_glSetMultisamplefvAMD;
	glTexStorageSparseAMD = stub_glTexStorageSparseAMD;
	glTextureStorageSparseAMD = stub_glTextureStorageSparseAMD;
	glStencilOpValueAMD = stub_glStencilOpValueAMD;
	glTessellationFactorAMD = stub_glTessellationFactorAMD;
	glTessellationModeAMD = stub_glTessellationModeAMD;
	glElementPointerAPPLE = stub_glElementPointerAPPLE;
	glDrawElementArrayAPPLE = stub_glDrawElementArrayAPPLE;
	glDrawRangeElementArrayAPPLE = stub_glDrawRangeElementArrayAPPLE;
	glMultiDrawElementArrayAPPLE = stub_glMultiDrawElementArrayAPPLE;
	glMultiDrawRangeElementArrayAPPLE = stub_glMultiDrawRangeElementArrayAPPLE;
	glGenFencesAPPLE = stub_glGenFencesAPPLE;
	glDeleteFencesAPPLE = stub_glDeleteFencesAPPLE;
	glSetFenceAPPLE = stub_glSetFenceAPPLE;
	glIsFenceAPPLE = stub_glIsFenceAPPLE;
	glTestFenceAPPLE = stub_glTestFenceAPPLE;
	glFinishFenceAPPLE = stub_glFinishFenceAPPLE;
	glTestObjectAPPLE = stub_glTestObjectAPPLE;
	glFinishObjectAPPLE = stub_glFinishObjectAPPLE;
	glBufferParameteriAPPLE = stub_glBufferParameteriAPPLE;
	glFlushMappedBufferRangeAPPLE = stub_glFlushMappedBufferRangeAPPLE;
	glObjectPurgeableAPPLE = stub_glObjectPurgeableAPPLE;
	glObjectUnpurgeableAPPLE = stub_glObjectUnpurgeableAPPLE;
	glGetObjectParameterivAPPLE = stub_glGetObjectParameterivAPPLE;
	glTextureRangeAPPLE = stub_glTextureRangeAPPLE;
	glGetTexParameterPointervAPPLE = stub_glGetTexParameterPointervAPPLE;
	glBindVertexArrayAPPLE = stub_glBindVertexArrayAPPLE;
	glDeleteVertexArraysAPPLE = stub_glDeleteVertexArraysAPPLE;
	glGenVertexArraysAPPLE = stub_glGenVertexArraysAPPLE;
	glIsVertexArrayAPPLE = stub_glIsVertexArrayAPPLE;
	glVertexArrayRangeAPPLE = stub_glVertexArrayRangeAPPLE;
	glFlushVertexArrayRangeAPPLE = stub_glFlushVertexArrayRangeAPPLE;
	glVertexArrayParameteriAPPLE = stub_glVertexArrayParameteriAPPLE;
	glEnableVertexAttribAPPLE = stub_glEnableVertexAttribAPPLE;
	glDisableVertexAttribAPPLE = stub_glDisableVertexAttribAPPLE;
	glIsVertexAttribEnabledAPPLE = stub_glIsVertexAttribEnabledAPPLE;
	glMapVertexAttrib1dAPPLE = stub_glMapVertexAttrib1dAPPLE;
	glMapVertexAttrib1fAPPLE = stub_glMapVertexAttrib1fAPPLE;
	glMapVertexAttrib2dAPPLE = stub_glMapVertexAttrib2dAPPLE;
	glMapVertexAttrib2fAPPLE = stub_glMapVertexAttrib2fAPPLE;
	glDrawBuffersATI = stub_glDrawBuffersATI;
	glElementPointerATI = stub_glElementPointerATI;
	glDrawElementArrayATI = stub_glDrawElementArrayATI;
	glDrawRangeElementArrayATI = stub_glDrawRangeElementArrayATI;
	glTexBumpParameterivATI = stub_glTexBumpParameterivATI;
	glTexBumpParameterfvATI = stub_glTexBumpParameterfvATI;
	glGetTexBumpParameterivATI = stub_glGetTexBumpParameterivATI;
	glGetTexBumpParameterfvATI = stub_glGetTexBumpParameterfvATI;
	glGenFragmentShadersATI = stub_glGenFragmentShadersATI;
	glBindFragmentShaderATI = stub_glBindFragmentShaderATI;
	glDeleteFragmentShaderATI = stub_glDeleteFragmentShaderATI;
	glBeginFragmentShaderATI = stub_glBeginFragmentShaderATI;
	glEndFragmentShaderATI = stub_glEndFragmentShaderATI;
	glPassTexCoordATI = stub_glPassTexCoordATI;
	glSampleMapATI = stub_glSampleMapATI;
	glColorFragmentOp1ATI = stub_glColorFragmentOp1ATI;
	glColorFragmentOp2ATI = stub_glColorFragmentOp2ATI;
	glColorFragmentOp3ATI = stub_glColorFragmentOp3ATI;
	glAlphaFragmentOp1ATI = stub_glAlphaFragmentOp1ATI;
	glAlphaFragmentOp2ATI = stub_glAlphaFragmentOp2ATI;
	glAlphaFragmentOp3ATI = stub_glAlphaFragmentOp3ATI;
	glSetFragmentShaderConstantATI = stub_glSetFragmentShaderConstantATI;
	glMapObjectBufferATI = stub_glMapObjectBufferATI;
	glUnmapObjectBufferATI = stub_glUnmapObjectBufferATI;
	glPNTrianglesiATI = stub_glPNTrianglesiATI;
	glPNTrianglesfATI = stub_glPNTrianglesfATI;
	glStencilOpSeparateATI = stub_glStencilOpSeparateATI;
	glStencilFuncSeparateATI = stub_glStencilFuncSeparateATI;
	glNewObjectBufferATI = stub_glNewObjectBufferATI;
	glIsObjectBufferATI = stub_glIsObjectBufferATI;
	glUpdateObjectBufferATI = stub_glUpdateObjectBufferATI;
	glGetObjectBufferfvATI = stub_glGetObjectBufferfvATI;
	glGetObjectBufferivATI = stub_glGetObjectBufferivATI;
	glFreeObjectBufferATI = stub_glFreeObjectBufferATI;
	glArrayObjectATI = stub_glArrayObjectATI;
	glGetArrayObjectfvATI = stub_glGetArrayObjectfvATI;
	glGetArrayObjectivATI = stub_glGetArrayObjectivATI;
	glVariantArrayObjectATI = stub_glVariantArrayObjectATI;
	glGetVariantArrayObjectfvATI = stub_glGetVariantArrayObjectfvATI;
	glGetVariantArrayObjectivATI = stub_glGetVariantArrayObjectivATI;
	glVertexAttribArrayObjectATI = stub_glVertexAttribArrayObjectATI;
	glGetVertexAttribArrayObjectfvATI = stub_glGetVertexAttribArrayObjectfvATI;
	glGetVertexAttribArrayObjectivATI = stub_glGetVertexAttribArrayObjectivATI;
	glVertexStream1sATI = stub_glVertexStream1sATI;
	glVertexStream1svATI = stub_glVertexStream1svATI;
	glVertexStream1iATI = stub_glVertexStream1iATI;
	glVertexStream1ivATI = stub_glVertexStream1ivATI;
	glVertexStream1fATI = stub_glVertexStream1fATI;
	glVertexStream1fvATI = stub_glVertexStream1fvATI;
	glVertexStream1dATI = stub_glVertexStream1dATI;
	glVertexStream1dvATI = stub_glVertexStream1dvATI;
	glVertexStream2sATI = stub_glVertexStream2sATI;
	glVertexStream2svATI = stub_glVertexStream2svATI;
	glVertexStream2iATI = stub_glVertexStream2iATI;
	glVertexStream2ivATI = stub_glVertexStream2ivATI;
	glVertexStream2fATI = stub_glVertexStream2fATI;
	glVertexStream2fvATI = stub_glVertexStream2fvATI;
	glVertexStream2dATI = stub_glVertexStream2dATI;
	glVertexStream2dvATI = stub_glVertexStream2dvATI;
	glVertexStream3sATI = stub_glVertexStream3sATI;
	glVertexStream3svATI = stub_glVertexStream3svATI;
	glVertexStream3iATI = stub_glVertexStream3iATI;
	glVertexStream3ivATI = stub_glVertexStream3ivATI;
	glVertexStream3fATI = stub_glVertexStream3fATI;
	glVertexStream3fvATI = stub_glVertexStream3fvATI;
	glVertexStream3dATI = stub_glVertexStream3dATI;
	glVertexStream3dvATI = stub_glVertexStream3dvATI;
	glVertexStream4sATI = stub_glVertexStream4sATI;
	glVertexStream4svATI = stub_glVertexStream4svATI;
	glVertexStream4iATI = stub_glVertexStream4iATI;
	glVertexStream4ivATI = stub_glVertexStream4ivATI;
	glVertexStream4fATI = stub_glVertexStream4fATI;
	glVertexStream4fvATI = stub_glVertexStream4fvATI;
	glVertexStream4dATI = stub_glVertexStream4dATI;
	glVertexStream4dvATI = stub_glVertexStream4dvATI;
	glNormalStream3bATI = stub_glNormalStream3bATI;
	glNormalStream3bvATI = stub_glNormalStream3bvATI;
	glNormalStream3sATI = stub_glNormalStream3sATI;
	glNormalStream3svATI = stub_glNormalStream3svATI;
	glNormalStream3iATI = stub_glNormalStream3iATI;
	glNormalStream3ivATI = stub_glNormalStream3ivATI;
	glNormalStream3fATI = stub_glNormalStream3fATI;
	glNormalStream3fvATI = stub_glNormalStream3fvATI;
	glNormalStream3dATI = stub_glNormalStream3dATI;
	glNormalStream3dvATI = stub_glNormalStream3dvATI;
	glClientActiveVertexStreamATI = stub_glClientActiveVertexStreamATI;
	glVertexBlendEnviATI = stub_glVertexBlendEnviATI;
	glVertexBlendEnvfATI = stub_glVertexBlendEnvfATI;
	glUniformBufferEXT = stub_glUniformBufferEXT;
	glGetUniformBufferSizeEXT = stub_glGetUniformBufferSizeEXT;
	glGetUniformOffsetEXT = stub_glGetUniformOffsetEXT;
	glBlendColorEXT = stub_glBlendColorEXT;
	glBlendEquationSeparateEXT = stub_glBlendEquationSeparateEXT;
	glBlendFuncSeparateEXT = stub_glBlendFuncSeparateEXT;
	glBlendEquationEXT = stub_glBlendEquationEXT;
	glColorSubTableEXT = stub_glColorSubTableEXT;
	glCopyColorSubTableEXT = stub_glCopyColorSubTableEXT;
	glLockArraysEXT = stub_glLockArraysEXT;
	glUnlockArraysEXT = stub_glUnlockArraysEXT;
	glConvolutionFilter1DEXT = stub_glConvolutionFilter1DEXT;
	glConvolutionFilter2DEXT = stub_glConvolutionFilter2DEXT;
	glConvolutionParameterfEXT = stub_glConvolutionParameterfEXT;
	glConvolutionParameterfvEXT = stub_glConvolutionParameterfvEXT;
	glConvolutionParameteriEXT = stub_glConvolutionParameteriEXT;
	glConvolutionParameterivEXT = stub_glConvolutionParameterivEXT;
	glCopyConvolutionFilter1DEXT = stub_glCopyConvolutionFilter1DEXT;
	glCopyConvolutionFilter2DEXT = stub_glCopyConvolutionFilter2DEXT;
	glGetConvolutionFilterEXT = stub_glGetConvolutionFilterEXT;
	glGetConvolutionParameterfvEXT = stub_glGetConvolutionParameterfvEXT;
	glGetConvolutionParameterivEXT = stub_glGetConvolutionParameterivEXT;
	glGetSeparableFilterEXT = stub_glGetSeparableFilterEXT;
	glSeparableFilter2DEXT = stub_glSeparableFilter2DEXT;
	glTangent3bEXT = stub_glTangent3bEXT;
	glTangent3bvEXT = stub_glTangent3bvEXT;
	glTangent3dEXT = stub_glTangent3dEXT;
	glTangent3dvEXT = stub_glTangent3dvEXT;
	glTangent3fEXT = stub_glTangent3fEXT;
	glTangent3fvEXT = stub_glTangent3fvEXT;
	glTangent3iEXT = stub_glTangent3iEXT;
	glTangent3ivEXT = stub_glTangent3ivEXT;
	glTangent3sEXT = stub_glTangent3sEXT;
	glTangent3svEXT = stub_glTangent3svEXT;
	glBinormal3bEXT = stub_glBinormal3bEXT;
	glBinormal3bvEXT = stub_glBinormal3bvEXT;
	glBinormal3dEXT = stub_glBinormal3dEXT;
	glBinormal3dvEXT = stub_glBinormal3dvEXT;
	glBinormal3fEXT = stub_glBinormal3fEXT;
	glBinormal3fvEXT = stub_glBinormal3fvEXT;
	glBinormal3iEXT = stub_glBinormal3iEXT;
	glBinormal3ivEXT = stub_glBinormal3ivEXT;
	glBinormal3sEXT = stub_glBinormal3sEXT;
	glBinormal3svEXT = stub_glBinormal3svEXT;
	glTangentPointerEXT = stub_glTangentPointerEXT;
	glBinormalPointerEXT = stub_glBinormalPointerEXT;
	glCopyTexImage1DEXT = stub_glCopyTexImage1DEXT;
	glCopyTexImage2DEXT = stub_glCopyTexImage2DEXT;
	glCopyTexSubImage1DEXT = stub_glCopyTexSubImage1DEXT;
	glCopyTexSubImage2DEXT = stub_glCopyTexSubImage2DEXT;
	glCopyTexSubImage3DEXT = stub_glCopyTexSubImage3DEXT;
	glCullParameterdvEXT = stub_glCullParameterdvEXT;
	glCullParameterfvEXT = stub_glCullParameterfvEXT;
	glLabelObjectEXT = stub_glLabelObjectEXT;
	glGetObjectLabelEXT = stub_glGetObjectLabelEXT;
	glInsertEventMarkerEXT = stub_glInsertEventMarkerEXT;
	glPushGroupMarkerEXT = stub_glPushGroupMarkerEXT;
	glPopGroupMarkerEXT = stub_glPopGroupMarkerEXT;
	glDepthBoundsEXT = stub_glDepthBoundsEXT;
	glMatrixLoadfEXT = stub_glMatrixLoadfEXT;
	glMatrixLoaddEXT = stub_glMatrixLoaddEXT;
	glMatrixMultfEXT = stub_glMatrixMultfEXT;
	glMatrixMultdEXT = stub_glMatrixMultdEXT;
	glMatrixLoadIdentityEXT = stub_glMatrixLoadIdentityEXT;
	glMatrixRotatefEXT = stub_glMatrixRotatefEXT;
	glMatrixRotatedEXT = stub_glMatrixRotatedEXT;
	glMatrixScalefEXT = stub_glMatrixScalefEXT;
	glMatrixScaledEXT = stub_glMatrixScaledEXT;
	glMatrixTranslatefEXT = stub_glMatrixTranslatefEXT;
	glMatrixTranslatedEXT = stub_glMatrixTranslatedEXT;
	glMatrixFrustumEXT = stub_glMatrixFrustumEXT;
	glMatrixOrthoEXT = stub_glMatrixOrthoEXT;
	glMatrixPopEXT = stub_glMatrixPopEXT;
	glMatrixPushEXT = stub_glMatrixPushEXT;
	glClientAttribDefaultEXT = stub_glClientAttribDefaultEXT;
	glPushClientAttribDefaultEXT = stub_glPushClientAttribDefaultEXT;
	glTextureParameterfEXT = stub_glTextureParameterfEXT;
	glTextureParameterfvEXT = stub_glTextureParameterfvEXT;
	glTextureParameteriEXT = stub_glTextureParameteriEXT;
	glTextureParameterivEXT = stub_glTextureParameterivEXT;
	glTextureImage1DEXT = stub_glTextureImage1DEXT;
	glTextureImage2DEXT = stub_glTextureImage2DEXT;
	glTextureSubImage1DEXT = stub_glTextureSubImage1DEXT;
	glTextureSubImage2DEXT = stub_glTextureSubImage2DEXT;
	glCopyTextureImage1DEXT = stub_glCopyTextureImage1DEXT;
	glCopyTextureImage2DEXT = stub_glCopyTextureImage2DEXT;
	glCopyTextureSubImage1DEXT = stub_glCopyTextureSubImage1DEXT;
	glCopyTextureSubImage2DEXT = stub_glCopyTextureSubImage2DEXT;
	glGetTextureImageEXT = stub_glGetTextureImageEXT;
	glGetTextureParameterfvEXT = stub_glGetTextureParameterfvEXT;
	glGetTextureParameterivEXT = stub_glGetTextureParameterivEXT;
	glGetTextureLevelParameterfvEXT = stub_glGetTextureLevelParameterfvEXT;
	glGetTextureLevelParameterivEXT = stub_glGetTextureLevelParameterivEXT;
	glTextureImage3DEXT = stub_glTextureImage3DEXT;
	glTextureSubImage3DEXT = stub_glTextureSubImage3DEXT;
	glCopyTextureSubImage3DEXT = stub_glCopyTextureSubImage3DEXT;
	glBindMultiTextureEXT = stub_glBindMultiTextureEXT;
	glMultiTexCoordPointerEXT = stub_glMultiTexCoordPointerEXT;
	glMultiTexEnvfEXT = stub_glMultiTexEnvfEXT;
	glMultiTexEnvfvEXT = stub_glMultiTexEnvfvEXT;
	glMultiTexEnviEXT = stub_glMultiTexEnviEXT;
	glMultiTexEnvivEXT = stub_glMultiTexEnvivEXT;
	glMultiTexGendEXT = stub_glMultiTexGendEXT;
	glMultiTexGendvEXT = stub_glMultiTexGendvEXT;
	glMultiTexGenfEXT = stub_glMultiTexGenfEXT;
	glMultiTexGenfvEXT = stub_glMultiTexGenfvEXT;
	glMultiTexGeniEXT = stub_glMultiTexGeniEXT;
	glMultiTexGenivEXT = stub_glMultiTexGenivEXT;
	glGetMultiTexEnvfvEXT = stub_glGetMultiTexEnvfvEXT;
	glGetMultiTexEnvivEXT = stub_glGetMultiTexEnvivEXT;
	glGetMultiTexGendvEXT = stub_glGetMultiTexGendvEXT;
	glGetMultiTexGenfvEXT = stub_glGetMultiTexGenfvEXT;
	glGetMultiTexGenivEXT = stub_glGetMultiTexGenivEXT;
	glMultiTexParameteriEXT = stub_glMultiTexParameteriEXT;
	glMultiTexParameterivEXT = stub_glMultiTexParameterivEXT;
	glMultiTexParameterfEXT = stub_glMultiTexParameterfEXT;
	glMultiTexParameterfvEXT = stub_glMultiTexParameterfvEXT;
	glMultiTexImage1DEXT = stub_glMultiTexImage1DEXT;
	glMultiTexImage2DEXT = stub_glMultiTexImage2DEXT;
	glMultiTexSubImage1DEXT = stub_glMultiTexSubImage1DEXT;
	glMultiTexSubImage2DEXT = stub_glMultiTexSubImage2DEXT;
	glCopyMultiTexImage1DEXT = stub_glCopyMultiTexImage1DEXT;
	glCopyMultiTexImage2DEXT = stub_glCopyMultiTexImage2DEXT;
	glCopyMultiTexSubImage1DEXT = stub_glCopyMultiTexSubImage1DEXT;
	glCopyMultiTexSubImage2DEXT = stub_glCopyMultiTexSubImage2DEXT;
	glGetMultiTexImageEXT = stub_glGetMultiTexImageEXT;
	glGetMultiTexParameterfvEXT = stub_glGetMultiTexParameterfvEXT;
	glGetMultiTexParameterivEXT = stub_glGetMultiTexParameterivEXT;
	glGetMultiTexLevelParameterfvEXT = stub_glGetMultiTexLevelParameterfvEXT;
	glGetMultiTexLevelParameterivEXT = stub_glGetMultiTexLevelParameterivEXT;
	glMultiTexImage3DEXT = stub_glMultiTexImage3DEXT;
	glMultiTexSubImage3DEXT = stub_glMultiTexSubImage3DEXT;
	glCopyMultiTexSubImage3DEXT = stub_glCopyMultiTexSubImage3DEXT;
	glEnableClientStateIndexedEXT = stub_glEnableClientStateIndexedEXT;
	glDisableClientStateIndexedEXT = stub_glDisableClientStateIndexedEXT;
	glGetFloatIndexedvEXT = stub_glGetFloatIndexedvEXT;
	glGetDoubleIndexedvEXT = stub_glGetDoubleIndexedvEXT;
	glGetPointerIndexedvEXT = stub_glGetPointerIndexedvEXT;
	glEnableIndexedEXT = stub_glEnableIndexedEXT;
	glDisableIndexedEXT = stub_glDisableIndexedEXT;
	glIsEnabledIndexedEXT = stub_glIsEnabledIndexedEXT;
	glGetIntegerIndexedvEXT = stub_glGetIntegerIndexedvEXT;
	glGetBooleanIndexedvEXT = stub_glGetBooleanIndexedvEXT;
	glCompressedTextureImage3DEXT = stub_glCompressedTextureImage3DEXT;
	glCompressedTextureImage2DEXT = stub_glCompressedTextureImage2DEXT;
	glCompressedTextureImage1DEXT = stub_glCompressedTextureImage1DEXT;
	glCompressedTextureSubImage3DEXT = stub_glCompressedTextureSubImage3DEXT;
	glCompressedTextureSubImage2DEXT = stub_glCompressedTextureSubImage2DEXT;
	glCompressedTextureSubImage1DEXT = stub_glCompressedTextureSubImage1DEXT;
	glGetCompressedTextureImageEXT = stub_glGetCompressedTextureImageEXT;
	glCompressedMultiTexImage3DEXT = stub_glCompressedMultiTexImage3DEXT;
	glCompressedMultiTexImage2DEXT = stub_glCompressedMultiTexImage2DEXT;
	glCompressedMultiTexImage1DEXT = stub_glCompressedMultiTexImage1DEXT;
	glCompressedMultiTexSubImage3DEXT = stub_glCompressedMultiTexSubImage3DEXT;
	glCompressedMultiTexSubImage2DEXT = stub_glCompressedMultiTexSubImage2DEXT;
	glCompressedMultiTexSubImage1DEXT = stub_glCompressedMultiTexSubImage1DEXT;
	glGetCompressedMultiTexImageEXT = stub_glGetCompressedMultiTexImageEXT;
	glMatrixLoadTransposefEXT = stub_glMatrixLoadTransposefEXT;
	glMatrixLoadTransposedEXT = stub_glMatrixLoadTransposedEXT;
	glMatrixMultTransposefEXT = stub_glMatrixMultTransposefEXT;
	glMatrixMultTransposedEXT = stub_glMatrixMultTransposedEXT;
	glNamedBufferDataEXT = stub_glNamedBufferDataEXT;
	glNamedBufferSubDataEXT = stub_glNamedBufferSubDataEXT;
	glMapNamedBufferEXT = stub_glMapNamedBufferEXT;
	glUnmapNamedBufferEXT = stub_glUnmapNamedBufferEXT;
	glGetNamedBufferParameterivEXT = stub_glGetNamedBufferParameterivEXT;
	glGetNamedBufferPointervEXT = stub_glGetNamedBufferPointervEXT;
	glGetNamedBufferSubDataEXT = stub_glGetNamedBufferSubDataEXT;
	glProgramUniform1fEXT = stub_glProgramUniform1fEXT;
	glProgramUniform2fEXT = stub_glProgramUniform2fEXT;
	glProgramUniform3fEXT = stub_glProgramUniform3fEXT;
	glProgramUniform4fEXT = stub_glProgramUniform4fEXT;
	glProgramUniform1iEXT = stub_glProgramUniform1iEXT;
	glProgramUniform2iEXT = stub_glProgramUniform2iEXT;
	glProgramUniform3iEXT = stub_glProgramUniform3iEXT;
	glProgramUniform4iEXT = stub_glProgramUniform4iEXT;
	glProgramUniform1fvEXT = stub_glProgramUniform1fvEXT;
	glProgramUniform2fvEXT = stub_glProgramUniform2fvEXT;
	glProgramUniform3fvEXT = stub_glProgramUniform3fvEXT;
	glProgramUniform4fvEXT = stub_glProgramUniform4fvEXT;
	glProgramUniform1ivEXT = stub_glProgramUniform1ivEXT;
	glProgramUniform2ivEXT = stub_glProgramUniform2ivEXT;
	glProgramUniform3ivEXT = stub_glProgramUniform3ivEXT;
	glProgramUniform4ivEXT = stub_glProgramUniform4ivEXT;
	glProgramUniformMatrix2fvEXT = stub_glProgramUniformMatrix2fvEXT;
	glProgramUniformMatrix3fvEXT = stub_glProgramUniformMatrix3fvEXT;
	glProgramUniformMatrix4fvEXT = stub_glProgramUniformMatrix4fvEXT;
	glProgramUniformMatrix2x3fvEXT = stub_glProgramUniformMatrix2x3fvEXT;
	glProgramUniformMatrix3x2fvEXT = stub_glProgramUniformMatrix3x2fvEXT;
	glProgramUniformMatrix2x4fvEXT = stub_glProgramUniformMatrix2x4fvEXT;
	glProgramUniformMatrix4x2fvEXT = stub_glProgramUniformMatrix4x2fvEXT;
	glProgramUniformMatrix3x4fvEXT = stub_glProgramUniformMatrix3x4fvEXT;
	glProgramUniformMatrix4x3fvEXT = stub_glProgramUniformMatrix4x3fvEXT;
	glTextureBufferEXT = stub_glTextureBufferEXT;
	glMultiTexBufferEXT = stub_glMultiTexBufferEXT;
	glTextureParameterIivEXT = stub_glTextureParameterIivEXT;
	glTextureParameterIuivEXT = stub_glTextureParameterIuivEXT;
	glGetTextureParameterIivEXT = stub_glGetTextureParameterIivEXT;
	glGetTextureParameterIuivEXT = stub_glGetTextureParameterIuivEXT;
	glMultiTexParameterIivEXT = stub_glMultiTexParameterIivEXT;
	glMultiTexParameterIuivEXT = stub_glMultiTexParameterIuivEXT;
	glGetMultiTexParameterIivEXT = stub_glGetMultiTexParameterIivEXT;
	glGetMultiTexParameterIuivEXT = stub_glGetMultiTexParameterIuivEXT;
	glProgramUniform1uiEXT = stub_glProgramUniform1uiEXT;
	glProgramUniform2uiEXT = stub_glProgramUniform2uiEXT;
	glProgramUniform3uiEXT = stub_glProgramUniform3uiEXT;
	glProgramUniform4uiEXT = stub_glProgramUniform4uiEXT;
	glProgramUniform1uivEXT = stub_glProgramUniform1uivEXT;
	glProgramUniform2uivEXT = stub_glProgramUniform2uivEXT;
	glProgramUniform3uivEXT = stub_glProgramUniform3uivEXT;
	glProgramUniform4uivEXT = stub_glProgramUniform4uivEXT;
	glNamedProgramLocalParameters4fvEXT = stub_glNamedProgramLocalParameters4fvEXT;
	glNamedProgramLocalParameterI4iEXT = stub_glNamedProgramLocalParameterI4iEXT;
	glNamedProgramLocalParameterI4ivEXT = stub_glNamedProgramLocalParameterI4ivEXT;
	glNamedProgramLocalParametersI4ivEXT = stub_glNamedProgramLocalParametersI4ivEXT;
	glNamedProgramLocalParameterI4uiEXT = stub_glNamedProgramLocalParameterI4uiEXT;
	glNamedProgramLocalParameterI4uivEXT = stub_glNamedProgramLocalParameterI4uivEXT;
	glNamedProgramLocalParametersI4uivEXT = stub_glNamedProgramLocalParametersI4uivEXT;
	glGetNamedProgramLocalParameterIivEXT = stub_glGetNamedProgramLocalParameterIivEXT;
	glGetNamedProgramLocalParameterIuivEXT = stub_glGetNamedProgramLocalParameterIuivEXT;
	glEnableClientStateiEXT = stub_glEnableClientStateiEXT;
	glDisableClientStateiEXT = stub_glDisableClientStateiEXT;
	glGetFloati_vEXT = stub_glGetFloati_vEXT;
	glGetDoublei_vEXT = stub_glGetDoublei_vEXT;
	glGetPointeri_vEXT = stub_glGetPointeri_vEXT;
	glNamedProgramStringEXT = stub_glNamedProgramStringEXT;
	glNamedProgramLocalParameter4dEXT = stub_glNamedProgramLocalParameter4dEXT;
	glNamedProgramLocalParameter4dvEXT = stub_glNamedProgramLocalParameter4dvEXT;
	glNamedProgramLocalParameter4fEXT = stub_glNamedProgramLocalParameter4fEXT;
	glNamedProgramLocalParameter4fvEXT = stub_glNamedProgramLocalParameter4fvEXT;
	glGetNamedProgramLocalParameterdvEXT = stub_glGetNamedProgramLocalParameterdvEXT;
	glGetNamedProgramLocalParameterfvEXT = stub_glGetNamedProgramLocalParameterfvEXT;
	glGetNamedProgramivEXT = stub_glGetNamedProgramivEXT;
	glGetNamedProgramStringEXT = stub_glGetNamedProgramStringEXT;
	glNamedRenderbufferStorageEXT = stub_glNamedRenderbufferStorageEXT;
	glGetNamedRenderbufferParameterivEXT = stub_glGetNamedRenderbufferParameterivEXT;
	glNamedRenderbufferStorageMultisampleEXT = stub_glNamedRenderbufferStorageMultisampleEXT;
	glNamedRenderbufferStorageMultisampleCoverageEXT = stub_glNamedRenderbufferStorageMultisampleCoverageEXT;
	glCheckNamedFramebufferStatusEXT = stub_glCheckNamedFramebufferStatusEXT;
	glNamedFramebufferTexture1DEXT = stub_glNamedFramebufferTexture1DEXT;
	glNamedFramebufferTexture2DEXT = stub_glNamedFramebufferTexture2DEXT;
	glNamedFramebufferTexture3DEXT = stub_glNamedFramebufferTexture3DEXT;
	glNamedFramebufferRenderbufferEXT = stub_glNamedFramebufferRenderbufferEXT;
	glGetNamedFramebufferAttachmentParameterivEXT = stub_glGetNamedFramebufferAttachmentParameterivEXT;
	glGenerateTextureMipmapEXT = stub_glGenerateTextureMipmapEXT;
	glGenerateMultiTexMipmapEXT = stub_glGenerateMultiTexMipmapEXT;
	glFramebufferDrawBufferEXT = stub_glFramebufferDrawBufferEXT;
	glFramebufferDrawBuffersEXT = stub_glFramebufferDrawBuffersEXT;
	glFramebufferReadBufferEXT = stub_glFramebufferReadBufferEXT;
	glGetFramebufferParameterivEXT = stub_glGetFramebufferParameterivEXT;
	glNamedCopyBufferSubDataEXT = stub_glNamedCopyBufferSubDataEXT;
	glNamedFramebufferTextureEXT = stub_glNamedFramebufferTextureEXT;
	glNamedFramebufferTextureLayerEXT = stub_glNamedFramebufferTextureLayerEXT;
	glNamedFramebufferTextureFaceEXT = stub_glNamedFramebufferTextureFaceEXT;
	glTextureRenderbufferEXT = stub_glTextureRenderbufferEXT;
	glMultiTexRenderbufferEXT = stub_glMultiTexRenderbufferEXT;
	glVertexArrayVertexOffsetEXT = stub_glVertexArrayVertexOffsetEXT;
	glVertexArrayColorOffsetEXT = stub_glVertexArrayColorOffsetEXT;
	glVertexArrayEdgeFlagOffsetEXT = stub_glVertexArrayEdgeFlagOffsetEXT;
	glVertexArrayIndexOffsetEXT = stub_glVertexArrayIndexOffsetEXT;
	glVertexArrayNormalOffsetEXT = stub_glVertexArrayNormalOffsetEXT;
	glVertexArrayTexCoordOffsetEXT = stub_glVertexArrayTexCoordOffsetEXT;
	glVertexArrayMultiTexCoordOffsetEXT = stub_glVertexArrayMultiTexCoordOffsetEXT;
	glVertexArrayFogCoordOffsetEXT = stub_glVertexArrayFogCoordOffsetEXT;
	glVertexArraySecondaryColorOffsetEXT = stub_glVertexArraySecondaryColorOffsetEXT;
	glVertexArrayVertexAttribOffsetEXT = stub_glVertexArrayVertexAttribOffsetEXT;
	glVertexArrayVertexAttribIOffsetEXT = stub_glVertexArrayVertexAttribIOffsetEXT;
	glEnableVertexArrayEXT = stub_glEnableVertexArrayEXT;
	glDisableVertexArrayEXT = stub_glDisableVertexArrayEXT;
	glEnableVertexArrayAttribEXT = stub_glEnableVertexArrayAttribEXT;
	glDisableVertexArrayAttribEXT = stub_glDisableVertexArrayAttribEXT;
	glGetVertexArrayIntegervEXT = stub_glGetVertexArrayIntegervEXT;
	glGetVertexArrayPointervEXT = stub_glGetVertexArrayPointervEXT;
	glGetVertexArrayIntegeri_vEXT = stub_glGetVertexArrayIntegeri_vEXT;
	glGetVertexArrayPointeri_vEXT = stub_glGetVertexArrayPointeri_vEXT;
	glMapNamedBufferRangeEXT = stub_glMapNamedBufferRangeEXT;
	glFlushMappedNamedBufferRangeEXT = stub_glFlushMappedNamedBufferRangeEXT;
	glNamedBufferStorageEXT = stub_glNamedBufferStorageEXT;
	glClearNamedBufferDataEXT = stub_glClearNamedBufferDataEXT;
	glClearNamedBufferSubDataEXT = stub_glClearNamedBufferSubDataEXT;
	glNamedFramebufferParameteriEXT = stub_glNamedFramebufferParameteriEXT;
	glGetNamedFramebufferParameterivEXT = stub_glGetNamedFramebufferParameterivEXT;
	glProgramUniform1dEXT = stub_glProgramUniform1dEXT;
	glProgramUniform2dEXT = stub_glProgramUniform2dEXT;
	glProgramUniform3dEXT = stub_glProgramUniform3dEXT;
	glProgramUniform4dEXT = stub_glProgramUniform4dEXT;
	glProgramUniform1dvEXT = stub_glProgramUniform1dvEXT;
	glProgramUniform2dvEXT = stub_glProgramUniform2dvEXT;
	glProgramUniform3dvEXT = stub_glProgramUniform3dvEXT;
	glProgramUniform4dvEXT = stub_glProgramUniform4dvEXT;
	glProgramUniformMatrix2dvEXT = stub_glProgramUniformMatrix2dvEXT;
	glProgramUniformMatrix3dvEXT = stub_glProgramUniformMatrix3dvEXT;
	glProgramUniformMatrix4dvEXT = stub_glProgramUniformMatrix4dvEXT;
	glProgramUniformMatrix2x3dvEXT = stub_glProgramUniformMatrix2x3dvEXT;
	glProgramUniformMatrix2x4dvEXT = stub_glProgramUniformMatrix2x4dvEXT;
	glProgramUniformMatrix3x2dvEXT = stub_glProgramUniformMatrix3x2dvEXT;
	glProgramUniformMatrix3x4dvEXT = stub_glProgramUniformMatrix3x4dvEXT;
	glProgramUniformMatrix4x2dvEXT = stub_glProgramUniformMatrix4x2dvEXT;
	glProgramUniformMatrix4x3dvEXT = stub_glProgramUniformMatrix4x3dvEXT;
	glTextureBufferRangeEXT = stub_glTextureBufferRangeEXT;
	glTextureStorage1DEXT = stub_glTextureStorage1DEXT;
	glTextureStorage2DEXT = stub_glTextureStorage2DEXT;
	glTextureStorage3DEXT = stub_glTextureStorage3DEXT;
	glTextureStorage2DMultisampleEXT = stub_glTextureStorage2DMultisampleEXT;
	glTextureStorage3DMultisampleEXT = stub_glTextureStorage3DMultisampleEXT;
	glVertexArrayBindVertexBufferEXT = stub_glVertexArrayBindVertexBufferEXT;
	glVertexArrayVertexAttribFormatEXT = stub_glVertexArrayVertexAttribFormatEXT;
	glVertexArrayVertexAttribIFormatEXT = stub_glVertexArrayVertexAttribIFormatEXT;
	glVertexArrayVertexAttribLFormatEXT = stub_glVertexArrayVertexAttribLFormatEXT;
	glVertexArrayVertexAttribBindingEXT = stub_glVertexArrayVertexAttribBindingEXT;
	glVertexArrayVertexBindingDivisorEXT = stub_glVertexArrayVertexBindingDivisorEXT;
	glVertexArrayVertexAttribLOffsetEXT = stub_glVertexArrayVertexAttribLOffsetEXT;
	glTexturePageCommitmentEXT = stub_glTexturePageCommitmentEXT;
	glVertexArrayVertexAttribDivisorEXT = stub_glVertexArrayVertexAttribDivisorEXT;
	glColorMaskIndexedEXT = stub_glColorMaskIndexedEXT;
	glDrawArraysInstancedEXT = stub_glDrawArraysInstancedEXT;
	glDrawElementsInstancedEXT = stub_glDrawElementsInstancedEXT;
	glDrawRangeElementsEXT = stub_glDrawRangeElementsEXT;
	glFogCoordfEXT = stub_glFogCoordfEXT;
	glFogCoordfvEXT = stub_glFogCoordfvEXT;
	glFogCoorddEXT = stub_glFogCoorddEXT;
	glFogCoorddvEXT = stub_glFogCoorddvEXT;
	glFogCoordPointerEXT = stub_glFogCoordPointerEXT;
	glBlitFramebufferEXT = stub_glBlitFramebufferEXT;
	glRenderbufferStorageMultisampleEXT = stub_glRenderbufferStorageMultisampleEXT;
	glIsRenderbufferEXT = stub_glIsRenderbufferEXT;
	glBindRenderbufferEXT = stub_glBindRenderbufferEXT;
	glDeleteRenderbuffersEXT = stub_glDeleteRenderbuffersEXT;
	glGenRenderbuffersEXT = stub_glGenRenderbuffersEXT;
	glRenderbufferStorageEXT = stub_glRenderbufferStorageEXT;
	glGetRenderbufferParameterivEXT = stub_glGetRenderbufferParameterivEXT;
	glIsFramebufferEXT = stub_glIsFramebufferEXT;
	glBindFramebufferEXT = stub_glBindFramebufferEXT;
	glDeleteFramebuffersEXT = stub_glDeleteFramebuffersEXT;
	glGenFramebuffersEXT = stub_glGenFramebuffersEXT;
	glCheckFramebufferStatusEXT = stub_glCheckFramebufferStatusEXT;
	glFramebufferTexture1DEXT = stub_glFramebufferTexture1DEXT;
	glFramebufferTexture2DEXT = stub_glFramebufferTexture2DEXT;
	glFramebufferTexture3DEXT = stub_glFramebufferTexture3DEXT;
	glFramebufferRenderbufferEXT = stub_glFramebufferRenderbufferEXT;
	glGetFramebufferAttachmentParameterivEXT = stub_glGetFramebufferAttachmentParameterivEXT;
	glGenerateMipmapEXT = stub_glGenerateMipmapEXT;
	glProgramParameteriEXT = stub_glProgramParameteriEXT;
	glProgramEnvParameters4fvEXT = stub_glProgramEnvParameters4fvEXT;
	glProgramLocalParameters4fvEXT = stub_glProgramLocalParameters4fvEXT;
	glGetUniformuivEXT = stub_glGetUniformuivEXT;
	glBindFragDataLocationEXT = stub_glBindFragDataLocationEXT;
	glGetFragDataLocationEXT = stub_glGetFragDataLocationEXT;
	glUniform1uiEXT = stub_glUniform1uiEXT;
	glUniform2uiEXT = stub_glUniform2uiEXT;
	glUniform3uiEXT = stub_glUniform3uiEXT;
	glUniform4uiEXT = stub_glUniform4uiEXT;
	glUniform1uivEXT = stub_glUniform1uivEXT;
	glUniform2uivEXT = stub_glUniform2uivEXT;
	glUniform3uivEXT = stub_glUniform3uivEXT;
	glUniform4uivEXT = stub_glUniform4uivEXT;
	glGetHistogramEXT = stub_glGetHistogramEXT;
	glGetHistogramParameterfvEXT = stub_glGetHistogramParameterfvEXT;
	glGetHistogramParameterivEXT = stub_glGetHistogramParameterivEXT;
	glGetMinmaxEXT = stub_glGetMinmaxEXT;
	glGetMinmaxParameterfvEXT = stub_glGetMinmaxParameterfvEXT;
	glGetMinmaxParameterivEXT = stub_glGetMinmaxParameterivEXT;
	glHistogramEXT = stub_glHistogramEXT;
	glMinmaxEXT = stub_glMinmaxEXT;
	glResetHistogramEXT = stub_glResetHistogramEXT;
	glResetMinmaxEXT = stub_glResetMinmaxEXT;
	glIndexFuncEXT = stub_glIndexFuncEXT;
	glIndexMaterialEXT = stub_glIndexMaterialEXT;
	glApplyTextureEXT = stub_glApplyTextureEXT;
	glTextureLightEXT = stub_glTextureLightEXT;
	glTextureMaterialEXT = stub_glTextureMaterialEXT;
	glMultiDrawArraysEXT = stub_glMultiDrawArraysEXT;
	glMultiDrawElementsEXT = stub_glMultiDrawElementsEXT;
	glSampleMaskEXT = stub_glSampleMaskEXT;
	glSamplePatternEXT = stub_glSamplePatternEXT;
	glColorTableEXT = stub_glColorTableEXT;
	glGetColorTableEXT = stub_glGetColorTableEXT;
	glGetColorTableParameterivEXT = stub_glGetColorTableParameterivEXT;
	glGetColorTableParameterfvEXT = stub_glGetColorTableParameterfvEXT;
	glPixelTransformParameteriEXT = stub_glPixelTransformParameteriEXT;
	glPixelTransformParameterfEXT = stub_glPixelTransformParameterfEXT;
	glPixelTransformParameterivEXT = stub_glPixelTransformParameterivEXT;
	glPixelTransformParameterfvEXT = stub_glPixelTransformParameterfvEXT;
	glGetPixelTransformParameterivEXT = stub_glGetPixelTransformParameterivEXT;
	glGetPixelTransformParameterfvEXT = stub_glGetPixelTransformParameterfvEXT;
	glPointParameterfEXT = stub_glPointParameterfEXT;
	glPointParameterfvEXT = stub_glPointParameterfvEXT;
	glPolygonOffsetEXT = stub_glPolygonOffsetEXT;
	glPolygonOffsetClampEXT = stub_glPolygonOffsetClampEXT;
	glProvokingVertexEXT = stub_glProvokingVertexEXT;
	glRasterSamplesEXT = stub_glRasterSamplesEXT;
	glSecondaryColor3bEXT = stub_glSecondaryColor3bEXT;
	glSecondaryColor3bvEXT = stub_glSecondaryColor3bvEXT;
	glSecondaryColor3dEXT = stub_glSecondaryColor3dEXT;
	glSecondaryColor3dvEXT = stub_glSecondaryColor3dvEXT;
	glSecondaryColor3fEXT = stub_glSecondaryColor3fEXT;
	glSecondaryColor3fvEXT = stub_glSecondaryColor3fvEXT;
	glSecondaryColor3iEXT = stub_glSecondaryColor3iEXT;
	glSecondaryColor3ivEXT = stub_glSecondaryColor3ivEXT;
	glSecondaryColor3sEXT = stub_glSecondaryColor3sEXT;
	glSecondaryColor3svEXT = stub_glSecondaryColor3svEXT;
	glSecondaryColor3ubEXT = stub_glSecondaryColor3ubEXT;
	glSecondaryColor3ubvEXT = stub_glSecondaryColor3ubvEXT;
	glSecondaryColor3uiEXT = stub_glSecondaryColor3uiEXT;
	glSecondaryColor3uivEXT = stub_glSecondaryColor3uivEXT;
	glSecondaryColor3usEXT = stub_glSecondaryColor3usEXT;
	glSecondaryColor3usvEXT = stub_glSecondaryColor3usvEXT;
	glSecondaryColorPointerEXT = stub_glSecondaryColorPointerEXT;
	glUseShaderProgramEXT = stub_glUseShaderProgramEXT;
	glActiveProgramEXT = stub_glActiveProgramEXT;
	glCreateShaderProgramEXT = stub_glCreateShaderProgramEXT;
	glBindImageTextureEXT = stub_glBindImageTextureEXT;
	glMemoryBarrierEXT = stub_glMemoryBarrierEXT;
	glStencilClearTagEXT = stub_glStencilClearTagEXT;
	glActiveStencilFaceEXT = stub_glActiveStencilFaceEXT;
	glTexSubImage1DEXT = stub_glTexSubImage1DEXT;
	glTexSubImage2DEXT = stub_glTexSubImage2DEXT;
	glTexImage3DEXT = stub_glTexImage3DEXT;
	glTexSubImage3DEXT = stub_glTexSubImage3DEXT;
	glFramebufferTextureLayerEXT = stub_glFramebufferTextureLayerEXT;
	glTexBufferEXT = stub_glTexBufferEXT;
	glTexParameterIivEXT = stub_glTexParameterIivEXT;
	glTexParameterIuivEXT = stub_glTexParameterIuivEXT;
	glGetTexParameterIivEXT = stub_glGetTexParameterIivEXT;
	glGetTexParameterIuivEXT = stub_glGetTexParameterIuivEXT;
	glClearColorIiEXT = stub_glClearColorIiEXT;
	glClearColorIuiEXT = stub_glClearColorIuiEXT;
	glAreTexturesResidentEXT = stub_glAreTexturesResidentEXT;
	glBindTextureEXT = stub_glBindTextureEXT;
	glDeleteTexturesEXT = stub_glDeleteTexturesEXT;
	glGenTexturesEXT = stub_glGenTexturesEXT;
	glIsTextureEXT = stub_glIsTextureEXT;
	glPrioritizeTexturesEXT = stub_glPrioritizeTexturesEXT;
	glTextureNormalEXT = stub_glTextureNormalEXT;
	glGetQueryObjecti64vEXT = stub_glGetQueryObjecti64vEXT;
	glGetQueryObjectui64vEXT = stub_glGetQueryObjectui64vEXT;
	glBeginTransformFeedbackEXT = stub_glBeginTransformFeedbackEXT;
	glEndTransformFeedbackEXT = stub_glEndTransformFeedbackEXT;
	glBindBufferRangeEXT = stub_glBindBufferRangeEXT;
	glBindBufferOffsetEXT = stub_glBindBufferOffsetEXT;
	glBindBufferBaseEXT = stub_glBindBufferBaseEXT;
	glTransformFeedbackVaryingsEXT = stub_glTransformFeedbackVaryingsEXT;
	glGetTransformFeedbackVaryingEXT = stub_glGetTransformFeedbackVaryingEXT;
	glArrayElementEXT = stub_glArrayElementEXT;
	glColorPointerEXT = stub_glColorPointerEXT;
	glDrawArraysEXT = stub_glDrawArraysEXT;
	glEdgeFlagPointerEXT = stub_glEdgeFlagPointerEXT;
	glGetPointervEXT = stub_glGetPointervEXT;
	glIndexPointerEXT = stub_glIndexPointerEXT;
	glNormalPointerEXT = stub_glNormalPointerEXT;
	glTexCoordPointerEXT = stub_glTexCoordPointerEXT;
	glVertexPointerEXT = stub_glVertexPointerEXT;
	glVertexAttribL1dEXT = stub_glVertexAttribL1dEXT;
	glVertexAttribL2dEXT = stub_glVertexAttribL2dEXT;
	glVertexAttribL3dEXT = stub_glVertexAttribL3dEXT;
	glVertexAttribL4dEXT = stub_glVertexAttribL4dEXT;
	glVertexAttribL1dvEXT = stub_glVertexAttribL1dvEXT;
	glVertexAttribL2dvEXT = stub_glVertexAttribL2dvEXT;
	glVertexAttribL3dvEXT = stub_glVertexAttribL3dvEXT;
	glVertexAttribL4dvEXT = stub_glVertexAttribL4dvEXT;
	glVertexAttribLPointerEXT = stub_glVertexAttribLPointerEXT;
	glGetVertexAttribLdvEXT = stub_glGetVertexAttribLdvEXT;
	glBeginVertexShaderEXT = stub_glBeginVertexShaderEXT;
	glEndVertexShaderEXT = stub_glEndVertexShaderEXT;
	glBindVertexShaderEXT = stub_glBindVertexShaderEXT;
	glGenVertexShadersEXT = stub_glGenVertexShadersEXT;
	glDeleteVertexShaderEXT = stub_glDeleteVertexShaderEXT;
	glShaderOp1EXT = stub_glShaderOp1EXT;
	glShaderOp2EXT = stub_glShaderOp2EXT;
	glShaderOp3EXT = stub_glShaderOp3EXT;
	glSwizzleEXT = stub_glSwizzleEXT;
	glWriteMaskEXT = stub_glWriteMaskEXT;
	glInsertComponentEXT = stub_glInsertComponentEXT;
	glExtractComponentEXT = stub_glExtractComponentEXT;
	glGenSymbolsEXT = stub_glGenSymbolsEXT;
	glSetInvariantEXT = stub_glSetInvariantEXT;
	glSetLocalConstantEXT = stub_glSetLocalConstantEXT;
	glVariantbvEXT = stub_glVariantbvEXT;
	glVariantsvEXT = stub_glVariantsvEXT;
	glVariantivEXT = stub_glVariantivEXT;
	glVariantfvEXT = stub_glVariantfvEXT;
	glVariantdvEXT = stub_glVariantdvEXT;
	glVariantubvEXT = stub_glVariantubvEXT;
	glVariantusvEXT = stub_glVariantusvEXT;
	glVariantuivEXT = stub_glVariantuivEXT;
	glVariantPointerEXT = stub_glVariantPointerEXT;
	glEnableVariantClientStateEXT = stub_glEnableVariantClientStateEXT;
	glDisableVariantClientStateEXT = stub_glDisableVariantClientStateEXT;
	glBindLightParameterEXT = stub_glBindLightParameterEXT;
	glBindMaterialParameterEXT = stub_glBindMaterialParameterEXT;
	glBindTexGenParameterEXT = stub_glBindTexGenParameterEXT;
	glBindTextureUnitParameterEXT = stub_glBindTextureUnitParameterEXT;
	glBindParameterEXT = stub_glBindParameterEXT;
	glIsVariantEnabledEXT = stub_glIsVariantEnabledEXT;
	glGetVariantBooleanvEXT = stub_glGetVariantBooleanvEXT;
	glGetVariantIntegervEXT = stub_glGetVariantIntegervEXT;
	glGetVariantFloatvEXT = stub_glGetVariantFloatvEXT;
	glGetVariantPointervEXT = stub_glGetVariantPointervEXT;
	glGetInvariantBooleanvEXT = stub_glGetInvariantBooleanvEXT;
	glGetInvariantIntegervEXT = stub_glGetInvariantIntegervEXT;
	glGetInvariantFloatvEXT = stub_glGetInvariantFloatvEXT;
	glGetLocalConstantBooleanvEXT = stub_glGetLocalConstantBooleanvEXT;
	glGetLocalConstantIntegervEXT = stub_glGetLocalConstantIntegervEXT;
	glGetLocalConstantFloatvEXT = stub_glGetLocalConstantFloatvEXT;
	glVertexWeightfEXT = stub_glVertexWeightfEXT;
	glVertexWeightfvEXT = stub_glVertexWeightfvEXT;
	glVertexWeightPointerEXT = stub_glVertexWeightPointerEXT;
	glWindowRectanglesEXT = stub_glWindowRectanglesEXT;
	glImportSyncEXT = stub_glImportSyncEXT;
	glFrameTerminatorGREMEDY = stub_glFrameTerminatorGREMEDY;
	glStringMarkerGREMEDY = stub_glStringMarkerGREMEDY;
	glImageTransformParameteriHP = stub_glImageTransformParameteriHP;
	glImageTransformParameterfHP = stub_glImageTransformParameterfHP;
	glImageTransformParameterivHP = stub_glImageTransformParameterivHP;
	glImageTransformParameterfvHP = stub_glImageTransformParameterfvHP;
	glGetImageTransformParameterivHP = stub_glGetImageTransformParameterivHP;
	glGetImageTransformParameterfvHP = stub_glGetImageTransformParameterfvHP;
	glMultiModeDrawArraysIBM = stub_glMultiModeDrawArraysIBM;
	glMultiModeDrawElementsIBM = stub_glMultiModeDrawElementsIBM;
	glFlushStaticDataIBM = stub_glFlushStaticDataIBM;
	glColorPointerListIBM = stub_glColorPointerListIBM;
	glSecondaryColorPointerListIBM = stub_glSecondaryColorPointerListIBM;
	glEdgeFlagPointerListIBM = stub_glEdgeFlagPointerListIBM;
	glFogCoordPointerListIBM = stub_glFogCoordPointerListIBM;
	glIndexPointerListIBM = stub_glIndexPointerListIBM;
	glNormalPointerListIBM = stub_glNormalPointerListIBM;
	glTexCoordPointerListIBM = stub_glTexCoordPointerListIBM;
	glVertexPointerListIBM = stub_glVertexPointerListIBM;
	glBlendFuncSeparateINGR = stub_glBlendFuncSeparateINGR;
	glApplyFramebufferAttachmentCMAAINTEL = stub_glApplyFramebufferAttachmentCMAAINTEL;
	glSyncTextureINTEL = stub_glSyncTextureINTEL;
	glUnmapTexture2DINTEL = stub_glUnmapTexture2DINTEL;
	glMapTexture2DINTEL = stub_glMapTexture2DINTEL;
	glVertexPointervINTEL = stub_glVertexPointervINTEL;
	glNormalPointervINTEL = stub_glNormalPointervINTEL;
	glColorPointervINTEL = stub_glColorPointervINTEL;
	glTexCoordPointervINTEL = stub_glTexCoordPointervINTEL;
	glBeginPerfQueryINTEL = stub_glBeginPerfQueryINTEL;
	glCreatePerfQueryINTEL = stub_glCreatePerfQueryINTEL;
	glDeletePerfQueryINTEL = stub_glDeletePerfQueryINTEL;
	glEndPerfQueryINTEL = stub_glEndPerfQueryINTEL;
	glGetFirstPerfQueryIdINTEL = stub_glGetFirstPerfQueryIdINTEL;
	glGetNextPerfQueryIdINTEL = stub_glGetNextPerfQueryIdINTEL;
	glGetPerfCounterInfoINTEL = stub_glGetPerfCounterInfoINTEL;
	glGetPerfQueryDataINTEL = stub_glGetPerfQueryDataINTEL;
	glGetPerfQueryIdByNameINTEL = stub_glGetPerfQueryIdByNameINTEL;
	glGetPerfQueryInfoINTEL = stub_glGetPerfQueryInfoINTEL;
	glResizeBuffersMESA = stub_glResizeBuffersMESA;
	glWindowPos2dMESA = stub_glWindowPos2dMESA;
	glWindowPos2dvMESA = stub_glWindowPos2dvMESA;
	glWindowPos2fMESA = stub_glWindowPos2fMESA;
	glWindowPos2fvMESA = stub_glWindowPos2fvMESA;
	glWindowPos2iMESA = stub_glWindowPos2iMESA;
	glWindowPos2ivMESA = stub_glWindowPos2ivMESA;
	glWindowPos2sMESA = stub_glWindowPos2sMESA;
	glWindowPos2svMESA = stub_glWindowPos2svMESA;
	glWindowPos3dMESA = stub_glWindowPos3dMESA;
	glWindowPos3dvMESA = stub_glWindowPos3dvMESA;
	glWindowPos3fMESA = stub_glWindowPos3fMESA;
	glWindowPos3fvMESA = stub_glWindowPos3fvMESA;
	glWindowPos3iMESA = stub_glWindowPos3iMESA;
	glWindowPos3ivMESA = stub_glWindowPos3ivMESA;
	glWindowPos3sMESA = stub_glWindowPos3sMESA;
	glWindowPos3svMESA = stub_glWindowPos3svMESA;
	glWindowPos4dMESA = stub_glWindowPos4dMESA;
	glWindowPos4dvMESA = stub_glWindowPos4dvMESA;
	glWindowPos4fMESA = stub_glWindowPos4fMESA;
	glWindowPos4fvMESA = stub_glWindowPos4fvMESA;
	glWindowPos4iMESA = stub_glWindowPos4iMESA;
	glWindowPos4ivMESA = stub_glWindowPos4ivMESA;
	glWindowPos4sMESA = stub_glWindowPos4sMESA;
	glWindowPos4svMESA = stub_glWindowPos4svMESA;
	glBeginConditionalRenderNVX = stub_glBeginConditionalRenderNVX;
	glEndConditionalRenderNVX = stub_glEndConditionalRenderNVX;
	glMultiDrawArraysIndirectBindlessNV = stub_glMultiDrawArraysIndirectBindlessNV;
	glMultiDrawElementsIndirectBindlessNV = stub_glMultiDrawElementsIndirectBindlessNV;
	glMultiDrawArraysIndirectBindlessCountNV = stub_glMultiDrawArraysIndirectBindlessCountNV;
	glMultiDrawElementsIndirectBindlessCountNV = stub_glMultiDrawElementsIndirectBindlessCountNV;
	glGetTextureHandleNV = stub_glGetTextureHandleNV;
	glGetTextureSamplerHandleNV = stub_glGetTextureSamplerHandleNV;
	glMakeTextureHandleResidentNV = stub_glMakeTextureHandleResidentNV;
	glMakeTextureHandleNonResidentNV = stub_glMakeTextureHandleNonResidentNV;
	glGetImageHandleNV = stub_glGetImageHandleNV;
	glMakeImageHandleResidentNV = stub_glMakeImageHandleResidentNV;
	glMakeImageHandleNonResidentNV = stub_glMakeImageHandleNonResidentNV;
	glUniformHandleui64NV = stub_glUniformHandleui64NV;
	glUniformHandleui64vNV = stub_glUniformHandleui64vNV;
	glProgramUniformHandleui64NV = stub_glProgramUniformHandleui64NV;
	glProgramUniformHandleui64vNV = stub_glProgramUniformHandleui64vNV;
	glIsTextureHandleResidentNV = stub_glIsTextureHandleResidentNV;
	glIsImageHandleResidentNV = stub_glIsImageHandleResidentNV;
	glBlendParameteriNV = stub_glBlendParameteriNV;
	glBlendBarrierNV = stub_glBlendBarrierNV;
	glViewportPositionWScaleNV = stub_glViewportPositionWScaleNV;
	glCreateStatesNV = stub_glCreateStatesNV;
	glDeleteStatesNV = stub_glDeleteStatesNV;
	glIsStateNV = stub_glIsStateNV;
	glStateCaptureNV = stub_glStateCaptureNV;
	glGetCommandHeaderNV = stub_glGetCommandHeaderNV;
	glGetStageIndexNV = stub_glGetStageIndexNV;
	glDrawCommandsNV = stub_glDrawCommandsNV;
	glDrawCommandsAddressNV = stub_glDrawCommandsAddressNV;
	glDrawCommandsStatesNV = stub_glDrawCommandsStatesNV;
	glDrawCommandsStatesAddressNV = stub_glDrawCommandsStatesAddressNV;
	glCreateCommandListsNV = stub_glCreateCommandListsNV;
	glDeleteCommandListsNV = stub_glDeleteCommandListsNV;
	glIsCommandListNV = stub_glIsCommandListNV;
	glListDrawCommandsStatesClientNV = stub_glListDrawCommandsStatesClientNV;
	glCommandListSegmentsNV = stub_glCommandListSegmentsNV;
	glCompileCommandListNV = stub_glCompileCommandListNV;
	glCallCommandListNV = stub_glCallCommandListNV;
	glBeginConditionalRenderNV = stub_glBeginConditionalRenderNV;
	glEndConditionalRenderNV = stub_glEndConditionalRenderNV;
	glSubpixelPrecisionBiasNV = stub_glSubpixelPrecisionBiasNV;
	glConservativeRasterParameterfNV = stub_glConservativeRasterParameterfNV;
	glConservativeRasterParameteriNV = stub_glConservativeRasterParameteriNV;
	glCopyImageSubDataNV = stub_glCopyImageSubDataNV;
	glDepthRangedNV = stub_glDepthRangedNV;
	glClearDepthdNV = stub_glClearDepthdNV;
	glDepthBoundsdNV = stub_glDepthBoundsdNV;
	glDrawTextureNV = stub_glDrawTextureNV;
	glMapControlPointsNV = stub_glMapControlPointsNV;
	glMapParameterivNV = stub_glMapParameterivNV;
	glMapParameterfvNV = stub_glMapParameterfvNV;
	glGetMapControlPointsNV = stub_glGetMapControlPointsNV;
	glGetMapParameterivNV = stub_glGetMapParameterivNV;
	glGetMapParameterfvNV = stub_glGetMapParameterfvNV;
	glGetMapAttribParameterivNV = stub_glGetMapAttribParameterivNV;
	glGetMapAttribParameterfvNV = stub_glGetMapAttribParameterfvNV;
	glEvalMapsNV = stub_glEvalMapsNV;
	glGetMultisamplefvNV = stub_glGetMultisamplefvNV;
	glSampleMaskIndexedNV = stub_glSampleMaskIndexedNV;
	glTexRenderbufferNV = stub_glTexRenderbufferNV;
	glDeleteFencesNV = stub_glDeleteFencesNV;
	glGenFencesNV = stub_glGenFencesNV;
	glIsFenceNV = stub_glIsFenceNV;
	glTestFenceNV = stub_glTestFenceNV;
	glGetFenceivNV = stub_glGetFenceivNV;
	glFinishFenceNV = stub_glFinishFenceNV;
	glSetFenceNV = stub_glSetFenceNV;
	glFragmentCoverageColorNV = stub_glFragmentCoverageColorNV;
	glProgramNamedParameter4fNV = stub_glProgramNamedParameter4fNV;
	glProgramNamedParameter4fvNV = stub_glProgramNamedParameter4fvNV;
	glProgramNamedParameter4dNV = stub_glProgramNamedParameter4dNV;
	glProgramNamedParameter4dvNV = stub_glProgramNamedParameter4dvNV;
	glGetProgramNamedParameterfvNV = stub_glGetProgramNamedParameterfvNV;
	glGetProgramNamedParameterdvNV = stub_glGetProgramNamedParameterdvNV;
	glCoverageModulationTableNV = stub_glCoverageModulationTableNV;
	glGetCoverageModulationTableNV = stub_glGetCoverageModulationTableNV;
	glCoverageModulationNV = stub_glCoverageModulationNV;
	glRenderbufferStorageMultisampleCoverageNV = stub_glRenderbufferStorageMultisampleCoverageNV;
	glProgramVertexLimitNV = stub_glProgramVertexLimitNV;
	glFramebufferTextureEXT = stub_glFramebufferTextureEXT;
	glFramebufferTextureFaceEXT = stub_glFramebufferTextureFaceEXT;
	glProgramLocalParameterI4iNV = stub_glProgramLocalParameterI4iNV;
	glProgramLocalParameterI4ivNV = stub_glProgramLocalParameterI4ivNV;
	glProgramLocalParametersI4ivNV = stub_glProgramLocalParametersI4ivNV;
	glProgramLocalParameterI4uiNV = stub_glProgramLocalParameterI4uiNV;
	glProgramLocalParameterI4uivNV = stub_glProgramLocalParameterI4uivNV;
	glProgramLocalParametersI4uivNV = stub_glProgramLocalParametersI4uivNV;
	glProgramEnvParameterI4iNV = stub_glProgramEnvParameterI4iNV;
	glProgramEnvParameterI4ivNV = stub_glProgramEnvParameterI4ivNV;
	glProgramEnvParametersI4ivNV = stub_glProgramEnvParametersI4ivNV;
	glProgramEnvParameterI4uiNV = stub_glProgramEnvParameterI4uiNV;
	glProgramEnvParameterI4uivNV = stub_glProgramEnvParameterI4uivNV;
	glProgramEnvParametersI4uivNV = stub_glProgramEnvParametersI4uivNV;
	glGetProgramLocalParameterIivNV = stub_glGetProgramLocalParameterIivNV;
	glGetProgramLocalParameterIuivNV = stub_glGetProgramLocalParameterIuivNV;
	glGetProgramEnvParameterIivNV = stub_glGetProgramEnvParameterIivNV;
	glGetProgramEnvParameterIuivNV = stub_glGetProgramEnvParameterIuivNV;
	glProgramSubroutineParametersuivNV = stub_glProgramSubroutineParametersuivNV;
	glGetProgramSubroutineParameteruivNV = stub_glGetProgramSubroutineParameteruivNV;
	glVertex2hNV = stub_glVertex2hNV;
	glVertex2hvNV = stub_glVertex2hvNV;
	glVertex3hNV = stub_glVertex3hNV;
	glVertex3hvNV = stub_glVertex3hvNV;
	glVertex4hNV = stub_glVertex4hNV;
	glVertex4hvNV = stub_glVertex4hvNV;
	glNormal3hNV = stub_glNormal3hNV;
	glNormal3hvNV = stub_glNormal3hvNV;
	glColor3hNV = stub_glColor3hNV;
	glColor3hvNV = stub_glColor3hvNV;
	glColor4hNV = stub_glColor4hNV;
	glColor4hvNV = stub_glColor4hvNV;
	glTexCoord1hNV = stub_glTexCoord1hNV;
	glTexCoord1hvNV = stub_glTexCoord1hvNV;
	glTexCoord2hNV = stub_glTexCoord2hNV;
	glTexCoord2hvNV = stub_glTexCoord2hvNV;
	glTexCoord3hNV = stub_glTexCoord3hNV;
	glTexCoord3hvNV = stub_glTexCoord3hvNV;
	glTexCoord4hNV = stub_glTexCoord4hNV;
	glTexCoord4hvNV = stub_glTexCoord4hvNV;
	glMultiTexCoord1hNV = stub_glMultiTexCoord1hNV;
	glMultiTexCoord1hvNV = stub_glMultiTexCoord1hvNV;
	glMultiTexCoord2hNV = stub_glMultiTexCoord2hNV;
	glMultiTexCoord2hvNV = stub_glMultiTexCoord2hvNV;
	glMultiTexCoord3hNV = stub_glMultiTexCoord3hNV;
	glMultiTexCoord3hvNV = stub_glMultiTexCoord3hvNV;
	glMultiTexCoord4hNV = stub_glMultiTexCoord4hNV;
	glMultiTexCoord4hvNV = stub_glMultiTexCoord4hvNV;
	glFogCoordhNV = stub_glFogCoordhNV;
	glFogCoordhvNV = stub_glFogCoordhvNV;
	glSecondaryColor3hNV = stub_glSecondaryColor3hNV;
	glSecondaryColor3hvNV = stub_glSecondaryColor3hvNV;
	glVertexWeighthNV = stub_glVertexWeighthNV;
	glVertexWeighthvNV = stub_glVertexWeighthvNV;
	glVertexAttrib1hNV = stub_glVertexAttrib1hNV;
	glVertexAttrib1hvNV = stub_glVertexAttrib1hvNV;
	glVertexAttrib2hNV = stub_glVertexAttrib2hNV;
	glVertexAttrib2hvNV = stub_glVertexAttrib2hvNV;
	glVertexAttrib3hNV = stub_glVertexAttrib3hNV;
	glVertexAttrib3hvNV = stub_glVertexAttrib3hvNV;
	glVertexAttrib4hNV = stub_glVertexAttrib4hNV;
	glVertexAttrib4hvNV = stub_glVertexAttrib4hvNV;
	glVertexAttribs1hvNV = stub_glVertexAttribs1hvNV;
	glVertexAttribs2hvNV = stub_glVertexAttribs2hvNV;
	glVertexAttribs3hvNV = stub_glVertexAttribs3hvNV;
	glVertexAttribs4hvNV = stub_glVertexAttribs4hvNV;
	glGetInternalformatSampleivNV = stub_glGetInternalformatSampleivNV;
	glGenOcclusionQueriesNV = stub_glGenOcclusionQueriesNV;
	glDeleteOcclusionQueriesNV = stub_glDeleteOcclusionQueriesNV;
	glIsOcclusionQueryNV = stub_glIsOcclusionQueryNV;
	glBeginOcclusionQueryNV = stub_glBeginOcclusionQueryNV;
	glEndOcclusionQueryNV = stub_glEndOcclusionQueryNV;
	glGetOcclusionQueryivNV = stub_glGetOcclusionQueryivNV;
	glGetOcclusionQueryuivNV = stub_glGetOcclusionQueryuivNV;
	glProgramBufferParametersfvNV = stub_glProgramBufferParametersfvNV;
	glProgramBufferParametersIivNV = stub_glProgramBufferParametersIivNV;
	glProgramBufferParametersIuivNV = stub_glProgramBufferParametersIuivNV;
	glGenPathsNV = stub_glGenPathsNV;
	glDeletePathsNV = stub_glDeletePathsNV;
	glIsPathNV = stub_glIsPathNV;
	glPathCommandsNV = stub_glPathCommandsNV;
	glPathCoordsNV = stub_glPathCoordsNV;
	glPathSubCommandsNV = stub_glPathSubCommandsNV;
	glPathSubCoordsNV = stub_glPathSubCoordsNV;
	glPathStringNV = stub_glPathStringNV;
	glPathGlyphsNV = stub_glPathGlyphsNV;
	glPathGlyphRangeNV = stub_glPathGlyphRangeNV;
	glWeightPathsNV = stub_glWeightPathsNV;
	glCopyPathNV = stub_glCopyPathNV;
	glInterpolatePathsNV = stub_glInterpolatePathsNV;
	glTransformPathNV = stub_glTransformPathNV;
	glPathParameterivNV = stub_glPathParameterivNV;
	glPathParameteriNV = stub_glPathParameteriNV;
	glPathParameterfvNV = stub_glPathParameterfvNV;
	glPathParameterfNV = stub_glPathParameterfNV;
	glPathDashArrayNV = stub_glPathDashArrayNV;
	glPathStencilFuncNV = stub_glPathStencilFuncNV;
	glPathStencilDepthOffsetNV = stub_glPathStencilDepthOffsetNV;
	glStencilFillPathNV = stub_glStencilFillPathNV;
	glStencilStrokePathNV = stub_glStencilStrokePathNV;
	glStencilFillPathInstancedNV = stub_glStencilFillPathInstancedNV;
	glStencilStrokePathInstancedNV = stub_glStencilStrokePathInstancedNV;
	glPathCoverDepthFuncNV = stub_glPathCoverDepthFuncNV;
	glCoverFillPathNV = stub_glCoverFillPathNV;
	glCoverStrokePathNV = stub_glCoverStrokePathNV;
	glCoverFillPathInstancedNV = stub_glCoverFillPathInstancedNV;
	glCoverStrokePathInstancedNV = stub_glCoverStrokePathInstancedNV;
	glGetPathParameterivNV = stub_glGetPathParameterivNV;
	glGetPathParameterfvNV = stub_glGetPathParameterfvNV;
	glGetPathCommandsNV = stub_glGetPathCommandsNV;
	glGetPathCoordsNV = stub_glGetPathCoordsNV;
	glGetPathDashArrayNV = stub_glGetPathDashArrayNV;
	glGetPathMetricsNV = stub_glGetPathMetricsNV;
	glGetPathMetricRangeNV = stub_glGetPathMetricRangeNV;
	glGetPathSpacingNV = stub_glGetPathSpacingNV;
	glIsPointInFillPathNV = stub_glIsPointInFillPathNV;
	glIsPointInStrokePathNV = stub_glIsPointInStrokePathNV;
	glGetPathLengthNV = stub_glGetPathLengthNV;
	glPointAlongPathNV = stub_glPointAlongPathNV;
	glMatrixLoad3x2fNV = stub_glMatrixLoad3x2fNV;
	glMatrixLoad3x3fNV = stub_glMatrixLoad3x3fNV;
	glMatrixLoadTranspose3x3fNV = stub_glMatrixLoadTranspose3x3fNV;
	glMatrixMult3x2fNV = stub_glMatrixMult3x2fNV;
	glMatrixMult3x3fNV = stub_glMatrixMult3x3fNV;
	glMatrixMultTranspose3x3fNV = stub_glMatrixMultTranspose3x3fNV;
	glStencilThenCoverFillPathNV = stub_glStencilThenCoverFillPathNV;
	glStencilThenCoverStrokePathNV = stub_glStencilThenCoverStrokePathNV;
	glStencilThenCoverFillPathInstancedNV = stub_glStencilThenCoverFillPathInstancedNV;
	glStencilThenCoverStrokePathInstancedNV = stub_glStencilThenCoverStrokePathInstancedNV;
	glPathGlyphIndexRangeNV = stub_glPathGlyphIndexRangeNV;
	glPathGlyphIndexArrayNV = stub_glPathGlyphIndexArrayNV;
	glPathMemoryGlyphIndexArrayNV = stub_glPathMemoryGlyphIndexArrayNV;
	glProgramPathFragmentInputGenNV = stub_glProgramPathFragmentInputGenNV;
	glGetProgramResourcefvNV = stub_glGetProgramResourcefvNV;
	glPathColorGenNV = stub_glPathColorGenNV;
	glPathTexGenNV = stub_glPathTexGenNV;
	glPathFogGenNV = stub_glPathFogGenNV;
	glGetPathColorGenivNV = stub_glGetPathColorGenivNV;
	glGetPathColorGenfvNV = stub_glGetPathColorGenfvNV;
	glGetPathTexGenivNV = stub_glGetPathTexGenivNV;
	glGetPathTexGenfvNV = stub_glGetPathTexGenfvNV;
	glPixelDataRangeNV = stub_glPixelDataRangeNV;
	glFlushPixelDataRangeNV = stub_glFlushPixelDataRangeNV;
	glPointParameteriNV = stub_glPointParameteriNV;
	glPointParameterivNV = stub_glPointParameterivNV;
	glPresentFrameKeyedNV = stub_glPresentFrameKeyedNV;
	glPresentFrameDualFillNV = stub_glPresentFrameDualFillNV;
	glGetVideoivNV = stub_glGetVideoivNV;
	glGetVideouivNV = stub_glGetVideouivNV;
	glGetVideoi64vNV = stub_glGetVideoi64vNV;
	glGetVideoui64vNV = stub_glGetVideoui64vNV;
	glPrimitiveRestartNV = stub_glPrimitiveRestartNV;
	glPrimitiveRestartIndexNV = stub_glPrimitiveRestartIndexNV;
	glCombinerParameterfvNV = stub_glCombinerParameterfvNV;
	glCombinerParameterfNV = stub_glCombinerParameterfNV;
	glCombinerParameterivNV = stub_glCombinerParameterivNV;
	glCombinerParameteriNV = stub_glCombinerParameteriNV;
	glCombinerInputNV = stub_glCombinerInputNV;
	glCombinerOutputNV = stub_glCombinerOutputNV;
	glFinalCombinerInputNV = stub_glFinalCombinerInputNV;
	glGetCombinerInputParameterfvNV = stub_glGetCombinerInputParameterfvNV;
	glGetCombinerInputParameterivNV = stub_glGetCombinerInputParameterivNV;
	glGetCombinerOutputParameterfvNV = stub_glGetCombinerOutputParameterfvNV;
	glGetCombinerOutputParameterivNV = stub_glGetCombinerOutputParameterivNV;
	glGetFinalCombinerInputParameterfvNV = stub_glGetFinalCombinerInputParameterfvNV;
	glGetFinalCombinerInputParameterivNV = stub_glGetFinalCombinerInputParameterivNV;
	glCombinerStageParameterfvNV = stub_glCombinerStageParameterfvNV;
	glGetCombinerStageParameterfvNV = stub_glGetCombinerStageParameterfvNV;
	glFramebufferSampleLocationsfvNV = stub_glFramebufferSampleLocationsfvNV;
	glNamedFramebufferSampleLocationsfvNV = stub_glNamedFramebufferSampleLocationsfvNV;
	glResolveDepthValuesNV = stub_glResolveDepthValuesNV;
	glMakeBufferResidentNV = stub_glMakeBufferResidentNV;
	glMakeBufferNonResidentNV = stub_glMakeBufferNonResidentNV;
	glIsBufferResidentNV = stub_glIsBufferResidentNV;
	glMakeNamedBufferResidentNV = stub_glMakeNamedBufferResidentNV;
	glMakeNamedBufferNonResidentNV = stub_glMakeNamedBufferNonResidentNV;
	glIsNamedBufferResidentNV = stub_glIsNamedBufferResidentNV;
	glGetBufferParameterui64vNV = stub_glGetBufferParameterui64vNV;
	glGetNamedBufferParameterui64vNV = stub_glGetNamedBufferParameterui64vNV;
	glGetIntegerui64vNV = stub_glGetIntegerui64vNV;
	glUniformui64NV = stub_glUniformui64NV;
	glUniformui64vNV = stub_glUniformui64vNV;
	glProgramUniformui64NV = stub_glProgramUniformui64NV;
	glProgramUniformui64vNV = stub_glProgramUniformui64vNV;
	glTextureBarrierNV = stub_glTextureBarrierNV;
	glTexImage2DMultisampleCoverageNV = stub_glTexImage2DMultisampleCoverageNV;
	glTexImage3DMultisampleCoverageNV = stub_glTexImage3DMultisampleCoverageNV;
	glTextureImage2DMultisampleNV = stub_glTextureImage2DMultisampleNV;
	glTextureImage3DMultisampleNV = stub_glTextureImage3DMultisampleNV;
	glTextureImage2DMultisampleCoverageNV = stub_glTextureImage2DMultisampleCoverageNV;
	glTextureImage3DMultisampleCoverageNV = stub_glTextureImage3DMultisampleCoverageNV;
	glBeginTransformFeedbackNV = stub_glBeginTransformFeedbackNV;
	glEndTransformFeedbackNV = stub_glEndTransformFeedbackNV;
	glTransformFeedbackAttribsNV = stub_glTransformFeedbackAttribsNV;
	glBindBufferRangeNV = stub_glBindBufferRangeNV;
	glBindBufferOffsetNV = stub_glBindBufferOffsetNV;
	glBindBufferBaseNV = stub_glBindBufferBaseNV;
	glTransformFeedbackVaryingsNV = stub_glTransformFeedbackVaryingsNV;
	glActiveVaryingNV = stub_glActiveVaryingNV;
	glGetVaryingLocationNV = stub_glGetVaryingLocationNV;
	glGetActiveVaryingNV = stub_glGetActiveVaryingNV;
	glGetTransformFeedbackVaryingNV = stub_glGetTransformFeedbackVaryingNV;
	glTransformFeedbackStreamAttribsNV = stub_glTransformFeedbackStreamAttribsNV;
	glBindTransformFeedbackNV = stub_glBindTransformFeedbackNV;
	glDeleteTransformFeedbacksNV = stub_glDeleteTransformFeedbacksNV;
	glGenTransformFeedbacksNV = stub_glGenTransformFeedbacksNV;
	glIsTransformFeedbackNV = stub_glIsTransformFeedbackNV;
	glPauseTransformFeedbackNV = stub_glPauseTransformFeedbackNV;
	glResumeTransformFeedbackNV = stub_glResumeTransformFeedbackNV;
	glDrawTransformFeedbackNV = stub_glDrawTransformFeedbackNV;
	glVDPAUInitNV = stub_glVDPAUInitNV;
	glVDPAUFiniNV = stub_glVDPAUFiniNV;
	glVDPAURegisterVideoSurfaceNV = stub_glVDPAURegisterVideoSurfaceNV;
	glVDPAURegisterOutputSurfaceNV = stub_glVDPAURegisterOutputSurfaceNV;
	glVDPAUIsSurfaceNV = stub_glVDPAUIsSurfaceNV;
	glVDPAUUnregisterSurfaceNV = stub_glVDPAUUnregisterSurfaceNV;
	glVDPAUGetSurfaceivNV = stub_glVDPAUGetSurfaceivNV;
	glVDPAUSurfaceAccessNV = stub_glVDPAUSurfaceAccessNV;
	glVDPAUMapSurfacesNV = stub_glVDPAUMapSurfacesNV;
	glVDPAUUnmapSurfacesNV = stub_glVDPAUUnmapSurfacesNV;
	glFlushVertexArrayRangeNV = stub_glFlushVertexArrayRangeNV;
	glVertexArrayRangeNV = stub_glVertexArrayRangeNV;
	glVertexAttribL1i64NV = stub_glVertexAttribL1i64NV;
	glVertexAttribL2i64NV = stub_glVertexAttribL2i64NV;
	glVertexAttribL3i64NV = stub_glVertexAttribL3i64NV;
	glVertexAttribL4i64NV = stub_glVertexAttribL4i64NV;
	glVertexAttribL1i64vNV = stub_glVertexAttribL1i64vNV;
	glVertexAttribL2i64vNV = stub_glVertexAttribL2i64vNV;
	glVertexAttribL3i64vNV = stub_glVertexAttribL3i64vNV;
	glVertexAttribL4i64vNV = stub_glVertexAttribL4i64vNV;
	glVertexAttribL1ui64NV = stub_glVertexAttribL1ui64NV;
	glVertexAttribL2ui64NV = stub_glVertexAttribL2ui64NV;
	glVertexAttribL3ui64NV = stub_glVertexAttribL3ui64NV;
	glVertexAttribL4ui64NV = stub_glVertexAttribL4ui64NV;
	glVertexAttribL1ui64vNV = stub_glVertexAttribL1ui64vNV;
	glVertexAttribL2ui64vNV = stub_glVertexAttribL2ui64vNV;
	glVertexAttribL3ui64vNV = stub_glVertexAttribL3ui64vNV;
	glVertexAttribL4ui64vNV = stub_glVertexAttribL4ui64vNV;
	glGetVertexAttribLi64vNV = stub_glGetVertexAttribLi64vNV;
	glGetVertexAttribLui64vNV = stub_glGetVertexAttribLui64vNV;
	glVertexAttribLFormatNV = stub_glVertexAttribLFormatNV;
	glBufferAddressRangeNV = stub_glBufferAddressRangeNV;
	glVertexFormatNV = stub_glVertexFormatNV;
	glNormalFormatNV = stub_glNormalFormatNV;
	glColorFormatNV = stub_glColorFormatNV;
	glIndexFormatNV = stub_glIndexFormatNV;
	glTexCoordFormatNV = stub_glTexCoordFormatNV;
	glEdgeFlagFormatNV = stub_glEdgeFlagFormatNV;
	glSecondaryColorFormatNV = stub_glSecondaryColorFormatNV;
	glFogCoordFormatNV = stub_glFogCoordFormatNV;
	glVertexAttribFormatNV = stub_glVertexAttribFormatNV;
	glVertexAttribIFormatNV = stub_glVertexAttribIFormatNV;
	glGetIntegerui64i_vNV = stub_glGetIntegerui64i_vNV;
	glAreProgramsResidentNV = stub_glAreProgramsResidentNV;
	glBindProgramNV = stub_glBindProgramNV;
	glDeleteProgramsNV = stub_glDeleteProgramsNV;
	glExecuteProgramNV = stub_glExecuteProgramNV;
	glGenProgramsNV = stub_glGenProgramsNV;
	glGetProgramParameterdvNV = stub_glGetProgramParameterdvNV;
	glGetProgramParameterfvNV = stub_glGetProgramParameterfvNV;
	glGetProgramivNV = stub_glGetProgramivNV;
	glGetProgramStringNV = stub_glGetProgramStringNV;
	glGetTrackMatrixivNV = stub_glGetTrackMatrixivNV;
	glGetVertexAttribdvNV = stub_glGetVertexAttribdvNV;
	glGetVertexAttribfvNV = stub_glGetVertexAttribfvNV;
	glGetVertexAttribivNV = stub_glGetVertexAttribivNV;
	glGetVertexAttribPointervNV = stub_glGetVertexAttribPointervNV;
	glIsProgramNV = stub_glIsProgramNV;
	glLoadProgramNV = stub_glLoadProgramNV;
	glProgramParameter4dNV = stub_glProgramParameter4dNV;
	glProgramParameter4dvNV = stub_glProgramParameter4dvNV;
	glProgramParameter4fNV = stub_glProgramParameter4fNV;
	glProgramParameter4fvNV = stub_glProgramParameter4fvNV;
	glProgramParameters4dvNV = stub_glProgramParameters4dvNV;
	glProgramParameters4fvNV = stub_glProgramParameters4fvNV;
	glRequestResidentProgramsNV = stub_glRequestResidentProgramsNV;
	glTrackMatrixNV = stub_glTrackMatrixNV;
	glVertexAttribPointerNV = stub_glVertexAttribPointerNV;
	glVertexAttrib1dNV = stub_glVertexAttrib1dNV;
	glVertexAttrib1dvNV = stub_glVertexAttrib1dvNV;
	glVertexAttrib1fNV = stub_glVertexAttrib1fNV;
	glVertexAttrib1fvNV = stub_glVertexAttrib1fvNV;
	glVertexAttrib1sNV = stub_glVertexAttrib1sNV;
	glVertexAttrib1svNV = stub_glVertexAttrib1svNV;
	glVertexAttrib2dNV = stub_glVertexAttrib2dNV;
	glVertexAttrib2dvNV = stub_glVertexAttrib2dvNV;
	glVertexAttrib2fNV = stub_glVertexAttrib2fNV;
	glVertexAttrib2fvNV = stub_glVertexAttrib2fvNV;
	glVertexAttrib2sNV = stub_glVertexAttrib2sNV;
	glVertexAttrib2svNV = stub_glVertexAttrib2svNV;
	glVertexAttrib3dNV = stub_glVertexAttrib3dNV;
	glVertexAttrib3dvNV = stub_glVertexAttrib3dvNV;
	glVertexAttrib3fNV = stub_glVertexAttrib3fNV;
	glVertexAttrib3fvNV = stub_glVertexAttrib3fvNV;
	glVertexAttrib3sNV = stub_glVertexAttrib3sNV;
	glVertexAttrib3svNV = stub_glVertexAttrib3svNV;
	glVertexAttrib4dNV = stub_glVertexAttrib4dNV;
	glVertexAttrib4dvNV = stub_glVertexAttrib4dvNV;
	glVertexAttrib4fNV = stub_glVertexAttrib4fNV;
	glVertexAttrib4fvNV = stub_glVertexAttrib4fvNV;
	glVertexAttrib4sNV = stub_glVertexAttrib4sNV;
	glVertexAttrib4svNV = stub_glVertexAttrib4svNV;
	glVertexAttrib4ubNV = stub_glVertexAttrib4ubNV;
	glVertexAttrib4ubvNV = stub_glVertexAttrib4ubvNV;
	glVertexAttribs1dvNV = stub_glVertexAttribs1dvNV;
	glVertexAttribs1fvNV = stub_glVertexAttribs1fvNV;
	glVertexAttribs1svNV = stub_glVertexAttribs1svNV;
	glVertexAttribs2dvNV = stub_glVertexAttribs2dvNV;
	glVertexAttribs2fvNV = stub_glVertexAttribs2fvNV;
	glVertexAttribs2svNV = stub_glVertexAttribs2svNV;
	glVertexAttribs3dvNV = stub_glVertexAttribs3dvNV;
	glVertexAttribs3fvNV = stub_glVertexAttribs3fvNV;
	glVertexAttribs3svNV = stub_glVertexAttribs3svNV;
	glVertexAttribs4dvNV = stub_glVertexAttribs4dvNV;
	glVertexAttribs4fvNV = stub_glVertexAttribs4fvNV;
	glVertexAttribs4svNV = stub_glVertexAttribs4svNV;
	glVertexAttribs4ubvNV = stub_glVertexAttribs4ubvNV;
	glVertexAttribI1iEXT = stub_glVertexAttribI1iEXT;
	glVertexAttribI2iEXT = stub_glVertexAttribI2iEXT;
	glVertexAttribI3iEXT = stub_glVertexAttribI3iEXT;
	glVertexAttribI4iEXT = stub_glVertexAttribI4iEXT;
	glVertexAttribI1uiEXT = stub_glVertexAttribI1uiEXT;
	glVertexAttribI2uiEXT = stub_glVertexAttribI2uiEXT;
	glVertexAttribI3uiEXT = stub_glVertexAttribI3uiEXT;
	glVertexAttribI4uiEXT = stub_glVertexAttribI4uiEXT;
	glVertexAttribI1ivEXT = stub_glVertexAttribI1ivEXT;
	glVertexAttribI2ivEXT = stub_glVertexAttribI2ivEXT;
	glVertexAttribI3ivEXT = stub_glVertexAttribI3ivEXT;
	glVertexAttribI4ivEXT = stub_glVertexAttribI4ivEXT;
	glVertexAttribI1uivEXT = stub_glVertexAttribI1uivEXT;
	glVertexAttribI2uivEXT = stub_glVertexAttribI2uivEXT;
	glVertexAttribI3uivEXT = stub_glVertexAttribI3uivEXT;
	glVertexAttribI4uivEXT = stub_glVertexAttribI4uivEXT;
	glVertexAttribI4bvEXT = stub_glVertexAttribI4bvEXT;
	glVertexAttribI4svEXT = stub_glVertexAttribI4svEXT;
	glVertexAttribI4ubvEXT = stub_glVertexAttribI4ubvEXT;
	glVertexAttribI4usvEXT = stub_glVertexAttribI4usvEXT;
	glVertexAttribIPointerEXT = stub_glVertexAttribIPointerEXT;
	glGetVertexAttribIivEXT = stub_glGetVertexAttribIivEXT;
	glGetVertexAttribIuivEXT = stub_glGetVertexAttribIuivEXT;
	glBeginVideoCaptureNV = stub_glBeginVideoCaptureNV;
	glBindVideoCaptureStreamBufferNV = stub_glBindVideoCaptureStreamBufferNV;
	glBindVideoCaptureStreamTextureNV = stub_glBindVideoCaptureStreamTextureNV;
	glEndVideoCaptureNV = stub_glEndVideoCaptureNV;
	glGetVideoCaptureivNV = stub_glGetVideoCaptureivNV;
	glGetVideoCaptureStreamivNV = stub_glGetVideoCaptureStreamivNV;
	glGetVideoCaptureStreamfvNV = stub_glGetVideoCaptureStreamfvNV;
	glGetVideoCaptureStreamdvNV = stub_glGetVideoCaptureStreamdvNV;
	glVideoCaptureNV = stub_glVideoCaptureNV;
	glVideoCaptureStreamParameterivNV = stub_glVideoCaptureStreamParameterivNV;
	glVideoCaptureStreamParameterfvNV = stub_glVideoCaptureStreamParameterfvNV;
	glVideoCaptureStreamParameterdvNV = stub_glVideoCaptureStreamParameterdvNV;
	glViewportSwizzleNV = stub_glViewportSwizzleNV;
	glFramebufferTextureMultiviewOVR = stub_glFramebufferTextureMultiviewOVR;
	glHintPGI = stub_glHintPGI;
	glDetailTexFuncSGIS = stub_glDetailTexFuncSGIS;
	glGetDetailTexFuncSGIS = stub_glGetDetailTexFuncSGIS;
	glFogFuncSGIS = stub_glFogFuncSGIS;
	glGetFogFuncSGIS = stub_glGetFogFuncSGIS;
	glSampleMaskSGIS = stub_glSampleMaskSGIS;
	glSamplePatternSGIS = stub_glSamplePatternSGIS;
	glPixelTexGenParameteriSGIS = stub_glPixelTexGenParameteriSGIS;
	glPixelTexGenParameterivSGIS = stub_glPixelTexGenParameterivSGIS;
	glPixelTexGenParameterfSGIS = stub_glPixelTexGenParameterfSGIS;
	glPixelTexGenParameterfvSGIS = stub_glPixelTexGenParameterfvSGIS;
	glGetPixelTexGenParameterivSGIS = stub_glGetPixelTexGenParameterivSGIS;
	glGetPixelTexGenParameterfvSGIS = stub_glGetPixelTexGenParameterfvSGIS;
	glPointParameterfSGIS = stub_glPointParameterfSGIS;
	glPointParameterfvSGIS = stub_glPointParameterfvSGIS;
	glSharpenTexFuncSGIS = stub_glSharpenTexFuncSGIS;
	glGetSharpenTexFuncSGIS = stub_glGetSharpenTexFuncSGIS;
	glTexImage4DSGIS = stub_glTexImage4DSGIS;
	glTexSubImage4DSGIS = stub_glTexSubImage4DSGIS;
	glTextureColorMaskSGIS = stub_glTextureColorMaskSGIS;
	glGetTexFilterFuncSGIS = stub_glGetTexFilterFuncSGIS;
	glTexFilterFuncSGIS = stub_glTexFilterFuncSGIS;
	glAsyncMarkerSGIX = stub_glAsyncMarkerSGIX;
	glFinishAsyncSGIX = stub_glFinishAsyncSGIX;
	glPollAsyncSGIX = stub_glPollAsyncSGIX;
	glGenAsyncMarkersSGIX = stub_glGenAsyncMarkersSGIX;
	glDeleteAsyncMarkersSGIX = stub_glDeleteAsyncMarkersSGIX;
	glIsAsyncMarkerSGIX = stub_glIsAsyncMarkerSGIX;
	glFlushRasterSGIX = stub_glFlushRasterSGIX;
	glFragmentColorMaterialSGIX = stub_glFragmentColorMaterialSGIX;
	glFragmentLightfSGIX = stub_glFragmentLightfSGIX;
	glFragmentLightfvSGIX = stub_glFragmentLightfvSGIX;
	glFragmentLightiSGIX = stub_glFragmentLightiSGIX;
	glFragmentLightivSGIX = stub_glFragmentLightivSGIX;
	glFragmentLightModelfSGIX = stub_glFragmentLightModelfSGIX;
	glFragmentLightModelfvSGIX = stub_glFragmentLightModelfvSGIX;
	glFragmentLightModeliSGIX = stub_glFragmentLightModeliSGIX;
	glFragmentLightModelivSGIX = stub_glFragmentLightModelivSGIX;
	glFragmentMaterialfSGIX = stub_glFragmentMaterialfSGIX;
	glFragmentMaterialfvSGIX = stub_glFragmentMaterialfvSGIX;
	glFragmentMaterialiSGIX = stub_glFragmentMaterialiSGIX;
	glFragmentMaterialivSGIX = stub_glFragmentMaterialivSGIX;
	glGetFragmentLightfvSGIX = stub_glGetFragmentLightfvSGIX;
	glGetFragmentLightivSGIX = stub_glGetFragmentLightivSGIX;
	glGetFragmentMaterialfvSGIX = stub_glGetFragmentMaterialfvSGIX;
	glGetFragmentMaterialivSGIX = stub_glGetFragmentMaterialivSGIX;
	glLightEnviSGIX = stub_glLightEnviSGIX;
	glFrameZoomSGIX = stub_glFrameZoomSGIX;
	glIglooInterfaceSGIX = stub_glIglooInterfaceSGIX;
	glGetInstrumentsSGIX = stub_glGetInstrumentsSGIX;
	glInstrumentsBufferSGIX = stub_glInstrumentsBufferSGIX;
	glPollInstrumentsSGIX = stub_glPollInstrumentsSGIX;
	glReadInstrumentsSGIX = stub_glReadInstrumentsSGIX;
	glStartInstrumentsSGIX = stub_glStartInstrumentsSGIX;
	glStopInstrumentsSGIX = stub_glStopInstrumentsSGIX;
	glGetListParameterfvSGIX = stub_glGetListParameterfvSGIX;
	glGetListParameterivSGIX = stub_glGetListParameterivSGIX;
	glListParameterfSGIX = stub_glListParameterfSGIX;
	glListParameterfvSGIX = stub_glListParameterfvSGIX;
	glListParameteriSGIX = stub_glListParameteriSGIX;
	glListParameterivSGIX = stub_glListParameterivSGIX;
	glPixelTexGenSGIX = stub_glPixelTexGenSGIX;
	glDeformationMap3dSGIX = stub_glDeformationMap3dSGIX;
	glDeformationMap3fSGIX = stub_glDeformationMap3fSGIX;
	glDeformSGIX = stub_glDeformSGIX;
	glLoadIdentityDeformationMapSGIX = stub_glLoadIdentityDeformationMapSGIX;
	glReferencePlaneSGIX = stub_glReferencePlaneSGIX;
	glSpriteParameterfSGIX = stub_glSpriteParameterfSGIX;
	glSpriteParameterfvSGIX = stub_glSpriteParameterfvSGIX;
	glSpriteParameteriSGIX = stub_glSpriteParameteriSGIX;
	glSpriteParameterivSGIX = stub_glSpriteParameterivSGIX;
	glTagSampleBufferSGIX = stub_glTagSampleBufferSGIX;
	glColorTableSGI = stub_glColorTableSGI;
	glColorTableParameterfvSGI = stub_glColorTableParameterfvSGI;
	glColorTableParameterivSGI = stub_glColorTableParameterivSGI;
	glCopyColorTableSGI = stub_glCopyColorTableSGI;
	glGetColorTableSGI = stub_glGetColorTableSGI;
	glGetColorTableParameterfvSGI = stub_glGetColorTableParameterfvSGI;
	glGetColorTableParameterivSGI = stub_glGetColorTableParameterivSGI;
	glFinishTextureSUNX = stub_glFinishTextureSUNX;
	glGlobalAlphaFactorbSUN = stub_glGlobalAlphaFactorbSUN;
	glGlobalAlphaFactorsSUN = stub_glGlobalAlphaFactorsSUN;
	glGlobalAlphaFactoriSUN = stub_glGlobalAlphaFactoriSUN;
	glGlobalAlphaFactorfSUN = stub_glGlobalAlphaFactorfSUN;
	glGlobalAlphaFactordSUN = stub_glGlobalAlphaFactordSUN;
	glGlobalAlphaFactorubSUN = stub_glGlobalAlphaFactorubSUN;
	glGlobalAlphaFactorusSUN = stub_glGlobalAlphaFactorusSUN;
	glGlobalAlphaFactoruiSUN = stub_glGlobalAlphaFactoruiSUN;
	glDrawMeshArraysSUN = stub_glDrawMeshArraysSUN;
	glReplacementCodeuiSUN = stub_glReplacementCodeuiSUN;
	glReplacementCodeusSUN = stub_glReplacementCodeusSUN;
	glReplacementCodeubSUN = stub_glReplacementCodeubSUN;
	glReplacementCodeuivSUN = stub_glReplacementCodeuivSUN;
	glReplacementCodeusvSUN = stub_glReplacementCodeusvSUN;
	glReplacementCodeubvSUN = stub_glReplacementCodeubvSUN;
	glReplacementCodePointerSUN = stub_glReplacementCodePointerSUN;
	glColor4ubVertex2fSUN = stub_glColor4ubVertex2fSUN;
	glColor4ubVertex2fvSUN = stub_glColor4ubVertex2fvSUN;
	glColor4ubVertex3fSUN = stub_glColor4ubVertex3fSUN;
	glColor4ubVertex3fvSUN = stub_glColor4ubVertex3fvSUN;
	glColor3fVertex3fSUN = stub_glColor3fVertex3fSUN;
	glColor3fVertex3fvSUN = stub_glColor3fVertex3fvSUN;
	glNormal3fVertex3fSUN = stub_glNormal3fVertex3fSUN;
	glNormal3fVertex3fvSUN = stub_glNormal3fVertex3fvSUN;
	glColor4fNormal3fVertex3fSUN = stub_glColor4fNormal3fVertex3fSUN;
	glColor4fNormal3fVertex3fvSUN = stub_glColor4fNormal3fVertex3fvSUN;
	glTexCoord2fVertex3fSUN = stub_glTexCoord2fVertex3fSUN;
	glTexCoord2fVertex3fvSUN = stub_glTexCoord2fVertex3fvSUN;
	glTexCoord4fVertex4fSUN = stub_glTexCoord4fVertex4fSUN;
	glTexCoord4fVertex4fvSUN = stub_glTexCoord4fVertex4fvSUN;
	glTexCoord2fColor4ubVertex3fSUN = stub_glTexCoord2fColor4ubVertex3fSUN;
	glTexCoord2fColor4ubVertex3fvSUN = stub_glTexCoord2fColor4ubVertex3fvSUN;
	glTexCoord2fColor3fVertex3fSUN = stub_glTexCoord2fColor3fVertex3fSUN;
	glTexCoord2fColor3fVertex3fvSUN = stub_glTexCoord2fColor3fVertex3fvSUN;
	glTexCoord2fNormal3fVertex3fSUN = stub_glTexCoord2fNormal3fVertex3fSUN;
	glTexCoord2fNormal3fVertex3fvSUN = stub_glTexCoord2fNormal3fVertex3fvSUN;
	glTexCoord2fColor4fNormal3fVertex3fSUN = stub_glTexCoord2fColor4fNormal3fVertex3fSUN;
	glTexCoord2fColor4fNormal3fVertex3fvSUN = stub_glTexCoord2fColor4fNormal3fVertex3fvSUN;
	glTexCoord4fColor4fNormal3fVertex4fSUN = stub_glTexCoord4fColor4fNormal3fVertex4fSUN;
	glTexCoord4fColor4fNormal3fVertex4fvSUN = stub_glTexCoord4fColor4fNormal3fVertex4fvSUN;
	glReplacementCodeuiVertex3fSUN = stub_glReplacementCodeuiVertex3fSUN;
	glReplacementCodeuiVertex3fvSUN = stub_glReplacementCodeuiVertex3fvSUN;
	glReplacementCodeuiColor4ubVertex3fSUN = stub_glReplacementCodeuiColor4ubVertex3fSUN;
	glReplacementCodeuiColor4ubVertex3fvSUN = stub_glReplacementCodeuiColor4ubVertex3fvSUN;
	glReplacementCodeuiColor3fVertex3fSUN = stub_glReplacementCodeuiColor3fVertex3fSUN;
	glReplacementCodeuiColor3fVertex3fvSUN = stub_glReplacementCodeuiColor3fVertex3fvSUN;
	glReplacementCodeuiNormal3fVertex3fSUN = stub_glReplacementCodeuiNormal3fVertex3fSUN;
	glReplacementCodeuiNormal3fVertex3fvSUN = stub_glReplacementCodeuiNormal3fVertex3fvSUN;
	glReplacementCodeuiColor4fNormal3fVertex3fSUN = stub_glReplacementCodeuiColor4fNormal3fVertex3fSUN;
	glReplacementCodeuiColor4fNormal3fVertex3fvSUN = stub_glReplacementCodeuiColor4fNormal3fVertex3fvSUN;
	glReplacementCodeuiTexCoord2fVertex3fSUN = stub_glReplacementCodeuiTexCoord2fVertex3fSUN;
	glReplacementCodeuiTexCoord2fVertex3fvSUN = stub_glReplacementCodeuiTexCoord2fVertex3fvSUN;
	glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN = stub_glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN;
	glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN = stub_glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN;
	glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN = stub_glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN;
	glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN = stub_glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN;
}//Reset

//----------------------------------------------------------------------------

bool glexfp::Load() {
	Reset();
	if (!wglGetCurrentContext()) return false;
	PROC p=0;
	p = wglGetProcAddress("glDrawRangeElements");
	if (p) {
		glDrawRangeElements = (PFNGLDRAWRANGEELEMENTSPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexImage3D");
	if (p) {
		glTexImage3D = (PFNGLTEXIMAGE3DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexSubImage3D");
	if (p) {
		glTexSubImage3D = (PFNGLTEXSUBIMAGE3DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCopyTexSubImage3D");
	if (p) {
		glCopyTexSubImage3D = (PFNGLCOPYTEXSUBIMAGE3DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glActiveTexture");
	if (p) {
		glActiveTexture = (PFNGLACTIVETEXTUREPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSampleCoverage");
	if (p) {
		glSampleCoverage = (PFNGLSAMPLECOVERAGEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCompressedTexImage3D");
	if (p) {
		glCompressedTexImage3D = (PFNGLCOMPRESSEDTEXIMAGE3DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCompressedTexImage2D");
	if (p) {
		glCompressedTexImage2D = (PFNGLCOMPRESSEDTEXIMAGE2DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCompressedTexImage1D");
	if (p) {
		glCompressedTexImage1D = (PFNGLCOMPRESSEDTEXIMAGE1DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCompressedTexSubImage3D");
	if (p) {
		glCompressedTexSubImage3D = (PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCompressedTexSubImage2D");
	if (p) {
		glCompressedTexSubImage2D = (PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCompressedTexSubImage1D");
	if (p) {
		glCompressedTexSubImage1D = (PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetCompressedTexImage");
	if (p) {
		glGetCompressedTexImage = (PFNGLGETCOMPRESSEDTEXIMAGEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glClientActiveTexture");
	if (p) {
		glClientActiveTexture = (PFNGLCLIENTACTIVETEXTUREPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord1d");
	if (p) {
		glMultiTexCoord1d = (PFNGLMULTITEXCOORD1DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord1dv");
	if (p) {
		glMultiTexCoord1dv = (PFNGLMULTITEXCOORD1DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord1f");
	if (p) {
		glMultiTexCoord1f = (PFNGLMULTITEXCOORD1FPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord1fv");
	if (p) {
		glMultiTexCoord1fv = (PFNGLMULTITEXCOORD1FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord1i");
	if (p) {
		glMultiTexCoord1i = (PFNGLMULTITEXCOORD1IPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord1iv");
	if (p) {
		glMultiTexCoord1iv = (PFNGLMULTITEXCOORD1IVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord1s");
	if (p) {
		glMultiTexCoord1s = (PFNGLMULTITEXCOORD1SPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord1sv");
	if (p) {
		glMultiTexCoord1sv = (PFNGLMULTITEXCOORD1SVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord2d");
	if (p) {
		glMultiTexCoord2d = (PFNGLMULTITEXCOORD2DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord2dv");
	if (p) {
		glMultiTexCoord2dv = (PFNGLMULTITEXCOORD2DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord2f");
	if (p) {
		glMultiTexCoord2f = (PFNGLMULTITEXCOORD2FPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord2fv");
	if (p) {
		glMultiTexCoord2fv = (PFNGLMULTITEXCOORD2FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord2i");
	if (p) {
		glMultiTexCoord2i = (PFNGLMULTITEXCOORD2IPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord2iv");
	if (p) {
		glMultiTexCoord2iv = (PFNGLMULTITEXCOORD2IVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord2s");
	if (p) {
		glMultiTexCoord2s = (PFNGLMULTITEXCOORD2SPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord2sv");
	if (p) {
		glMultiTexCoord2sv = (PFNGLMULTITEXCOORD2SVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord3d");
	if (p) {
		glMultiTexCoord3d = (PFNGLMULTITEXCOORD3DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord3dv");
	if (p) {
		glMultiTexCoord3dv = (PFNGLMULTITEXCOORD3DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord3f");
	if (p) {
		glMultiTexCoord3f = (PFNGLMULTITEXCOORD3FPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord3fv");
	if (p) {
		glMultiTexCoord3fv = (PFNGLMULTITEXCOORD3FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord3i");
	if (p) {
		glMultiTexCoord3i = (PFNGLMULTITEXCOORD3IPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord3iv");
	if (p) {
		glMultiTexCoord3iv = (PFNGLMULTITEXCOORD3IVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord3s");
	if (p) {
		glMultiTexCoord3s = (PFNGLMULTITEXCOORD3SPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord3sv");
	if (p) {
		glMultiTexCoord3sv = (PFNGLMULTITEXCOORD3SVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord4d");
	if (p) {
		glMultiTexCoord4d = (PFNGLMULTITEXCOORD4DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord4dv");
	if (p) {
		glMultiTexCoord4dv = (PFNGLMULTITEXCOORD4DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord4f");
	if (p) {
		glMultiTexCoord4f = (PFNGLMULTITEXCOORD4FPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord4fv");
	if (p) {
		glMultiTexCoord4fv = (PFNGLMULTITEXCOORD4FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord4i");
	if (p) {
		glMultiTexCoord4i = (PFNGLMULTITEXCOORD4IPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord4iv");
	if (p) {
		glMultiTexCoord4iv = (PFNGLMULTITEXCOORD4IVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord4s");
	if (p) {
		glMultiTexCoord4s = (PFNGLMULTITEXCOORD4SPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord4sv");
	if (p) {
		glMultiTexCoord4sv = (PFNGLMULTITEXCOORD4SVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glLoadTransposeMatrixf");
	if (p) {
		glLoadTransposeMatrixf = (PFNGLLOADTRANSPOSEMATRIXFPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glLoadTransposeMatrixd");
	if (p) {
		glLoadTransposeMatrixd = (PFNGLLOADTRANSPOSEMATRIXDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultTransposeMatrixf");
	if (p) {
		glMultTransposeMatrixf = (PFNGLMULTTRANSPOSEMATRIXFPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultTransposeMatrixd");
	if (p) {
		glMultTransposeMatrixd = (PFNGLMULTTRANSPOSEMATRIXDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBlendFuncSeparate");
	if (p) {
		glBlendFuncSeparate = (PFNGLBLENDFUNCSEPARATEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiDrawArrays");
	if (p) {
		glMultiDrawArrays = (PFNGLMULTIDRAWARRAYSPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiDrawElements");
	if (p) {
		glMultiDrawElements = (PFNGLMULTIDRAWELEMENTSPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPointParameterf");
	if (p) {
		glPointParameterf = (PFNGLPOINTPARAMETERFPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPointParameterfv");
	if (p) {
		glPointParameterfv = (PFNGLPOINTPARAMETERFVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPointParameteri");
	if (p) {
		glPointParameteri = (PFNGLPOINTPARAMETERIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPointParameteriv");
	if (p) {
		glPointParameteriv = (PFNGLPOINTPARAMETERIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFogCoordf");
	if (p) {
		glFogCoordf = (PFNGLFOGCOORDFPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFogCoordfv");
	if (p) {
		glFogCoordfv = (PFNGLFOGCOORDFVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFogCoordd");
	if (p) {
		glFogCoordd = (PFNGLFOGCOORDDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFogCoorddv");
	if (p) {
		glFogCoorddv = (PFNGLFOGCOORDDVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFogCoordPointer");
	if (p) {
		glFogCoordPointer = (PFNGLFOGCOORDPOINTERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColor3b");
	if (p) {
		glSecondaryColor3b = (PFNGLSECONDARYCOLOR3BPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColor3bv");
	if (p) {
		glSecondaryColor3bv = (PFNGLSECONDARYCOLOR3BVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColor3d");
	if (p) {
		glSecondaryColor3d = (PFNGLSECONDARYCOLOR3DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColor3dv");
	if (p) {
		glSecondaryColor3dv = (PFNGLSECONDARYCOLOR3DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColor3f");
	if (p) {
		glSecondaryColor3f = (PFNGLSECONDARYCOLOR3FPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColor3fv");
	if (p) {
		glSecondaryColor3fv = (PFNGLSECONDARYCOLOR3FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColor3i");
	if (p) {
		glSecondaryColor3i = (PFNGLSECONDARYCOLOR3IPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColor3iv");
	if (p) {
		glSecondaryColor3iv = (PFNGLSECONDARYCOLOR3IVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColor3s");
	if (p) {
		glSecondaryColor3s = (PFNGLSECONDARYCOLOR3SPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColor3sv");
	if (p) {
		glSecondaryColor3sv = (PFNGLSECONDARYCOLOR3SVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColor3ub");
	if (p) {
		glSecondaryColor3ub = (PFNGLSECONDARYCOLOR3UBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColor3ubv");
	if (p) {
		glSecondaryColor3ubv = (PFNGLSECONDARYCOLOR3UBVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColor3ui");
	if (p) {
		glSecondaryColor3ui = (PFNGLSECONDARYCOLOR3UIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColor3uiv");
	if (p) {
		glSecondaryColor3uiv = (PFNGLSECONDARYCOLOR3UIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColor3us");
	if (p) {
		glSecondaryColor3us = (PFNGLSECONDARYCOLOR3USPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColor3usv");
	if (p) {
		glSecondaryColor3usv = (PFNGLSECONDARYCOLOR3USVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColorPointer");
	if (p) {
		glSecondaryColorPointer = (PFNGLSECONDARYCOLORPOINTERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos2d");
	if (p) {
		glWindowPos2d = (PFNGLWINDOWPOS2DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos2dv");
	if (p) {
		glWindowPos2dv = (PFNGLWINDOWPOS2DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos2f");
	if (p) {
		glWindowPos2f = (PFNGLWINDOWPOS2FPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos2fv");
	if (p) {
		glWindowPos2fv = (PFNGLWINDOWPOS2FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos2i");
	if (p) {
		glWindowPos2i = (PFNGLWINDOWPOS2IPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos2iv");
	if (p) {
		glWindowPos2iv = (PFNGLWINDOWPOS2IVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos2s");
	if (p) {
		glWindowPos2s = (PFNGLWINDOWPOS2SPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos2sv");
	if (p) {
		glWindowPos2sv = (PFNGLWINDOWPOS2SVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos3d");
	if (p) {
		glWindowPos3d = (PFNGLWINDOWPOS3DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos3dv");
	if (p) {
		glWindowPos3dv = (PFNGLWINDOWPOS3DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos3f");
	if (p) {
		glWindowPos3f = (PFNGLWINDOWPOS3FPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos3fv");
	if (p) {
		glWindowPos3fv = (PFNGLWINDOWPOS3FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos3i");
	if (p) {
		glWindowPos3i = (PFNGLWINDOWPOS3IPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos3iv");
	if (p) {
		glWindowPos3iv = (PFNGLWINDOWPOS3IVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos3s");
	if (p) {
		glWindowPos3s = (PFNGLWINDOWPOS3SPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos3sv");
	if (p) {
		glWindowPos3sv = (PFNGLWINDOWPOS3SVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBlendColor");
	if (p) {
		glBlendColor = (PFNGLBLENDCOLORPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBlendEquation");
	if (p) {
		glBlendEquation = (PFNGLBLENDEQUATIONPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGenQueries");
	if (p) {
		glGenQueries = (PFNGLGENQUERIESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeleteQueries");
	if (p) {
		glDeleteQueries = (PFNGLDELETEQUERIESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsQuery");
	if (p) {
		glIsQuery = (PFNGLISQUERYPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBeginQuery");
	if (p) {
		glBeginQuery = (PFNGLBEGINQUERYPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEndQuery");
	if (p) {
		glEndQuery = (PFNGLENDQUERYPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetQueryiv");
	if (p) {
		glGetQueryiv = (PFNGLGETQUERYIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetQueryObjectiv");
	if (p) {
		glGetQueryObjectiv = (PFNGLGETQUERYOBJECTIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetQueryObjectuiv");
	if (p) {
		glGetQueryObjectuiv = (PFNGLGETQUERYOBJECTUIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindBuffer");
	if (p) {
		glBindBuffer = (PFNGLBINDBUFFERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeleteBuffers");
	if (p) {
		glDeleteBuffers = (PFNGLDELETEBUFFERSPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGenBuffers");
	if (p) {
		glGenBuffers = (PFNGLGENBUFFERSPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsBuffer");
	if (p) {
		glIsBuffer = (PFNGLISBUFFERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBufferData");
	if (p) {
		glBufferData = (PFNGLBUFFERDATAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBufferSubData");
	if (p) {
		glBufferSubData = (PFNGLBUFFERSUBDATAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetBufferSubData");
	if (p) {
		glGetBufferSubData = (PFNGLGETBUFFERSUBDATAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMapBuffer");
	if (p) {
		glMapBuffer = (PFNGLMAPBUFFERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUnmapBuffer");
	if (p) {
		glUnmapBuffer = (PFNGLUNMAPBUFFERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetBufferParameteriv");
	if (p) {
		glGetBufferParameteriv = (PFNGLGETBUFFERPARAMETERIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetBufferPointerv");
	if (p) {
		glGetBufferPointerv = (PFNGLGETBUFFERPOINTERVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBlendEquationSeparate");
	if (p) {
		glBlendEquationSeparate = (PFNGLBLENDEQUATIONSEPARATEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDrawBuffers");
	if (p) {
		glDrawBuffers = (PFNGLDRAWBUFFERSPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glStencilOpSeparate");
	if (p) {
		glStencilOpSeparate = (PFNGLSTENCILOPSEPARATEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glStencilFuncSeparate");
	if (p) {
		glStencilFuncSeparate = (PFNGLSTENCILFUNCSEPARATEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glStencilMaskSeparate");
	if (p) {
		glStencilMaskSeparate = (PFNGLSTENCILMASKSEPARATEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glAttachShader");
	if (p) {
		glAttachShader = (PFNGLATTACHSHADERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindAttribLocation");
	if (p) {
		glBindAttribLocation = (PFNGLBINDATTRIBLOCATIONPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCompileShader");
	if (p) {
		glCompileShader = (PFNGLCOMPILESHADERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCreateProgram");
	if (p) {
		glCreateProgram = (PFNGLCREATEPROGRAMPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCreateShader");
	if (p) {
		glCreateShader = (PFNGLCREATESHADERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeleteProgram");
	if (p) {
		glDeleteProgram = (PFNGLDELETEPROGRAMPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeleteShader");
	if (p) {
		glDeleteShader = (PFNGLDELETESHADERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDetachShader");
	if (p) {
		glDetachShader = (PFNGLDETACHSHADERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDisableVertexAttribArray");
	if (p) {
		glDisableVertexAttribArray = (PFNGLDISABLEVERTEXATTRIBARRAYPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEnableVertexAttribArray");
	if (p) {
		glEnableVertexAttribArray = (PFNGLENABLEVERTEXATTRIBARRAYPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetActiveAttrib");
	if (p) {
		glGetActiveAttrib = (PFNGLGETACTIVEATTRIBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetActiveUniform");
	if (p) {
		glGetActiveUniform = (PFNGLGETACTIVEUNIFORMPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetAttachedShaders");
	if (p) {
		glGetAttachedShaders = (PFNGLGETATTACHEDSHADERSPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetAttribLocation");
	if (p) {
		glGetAttribLocation = (PFNGLGETATTRIBLOCATIONPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetProgramiv");
	if (p) {
		glGetProgramiv = (PFNGLGETPROGRAMIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetProgramInfoLog");
	if (p) {
		glGetProgramInfoLog = (PFNGLGETPROGRAMINFOLOGPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetShaderiv");
	if (p) {
		glGetShaderiv = (PFNGLGETSHADERIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetShaderInfoLog");
	if (p) {
		glGetShaderInfoLog = (PFNGLGETSHADERINFOLOGPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetShaderSource");
	if (p) {
		glGetShaderSource = (PFNGLGETSHADERSOURCEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetUniformLocation");
	if (p) {
		glGetUniformLocation = (PFNGLGETUNIFORMLOCATIONPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetUniformfv");
	if (p) {
		glGetUniformfv = (PFNGLGETUNIFORMFVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetUniformiv");
	if (p) {
		glGetUniformiv = (PFNGLGETUNIFORMIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVertexAttribdv");
	if (p) {
		glGetVertexAttribdv = (PFNGLGETVERTEXATTRIBDVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVertexAttribfv");
	if (p) {
		glGetVertexAttribfv = (PFNGLGETVERTEXATTRIBFVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVertexAttribiv");
	if (p) {
		glGetVertexAttribiv = (PFNGLGETVERTEXATTRIBIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVertexAttribPointerv");
	if (p) {
		glGetVertexAttribPointerv = (PFNGLGETVERTEXATTRIBPOINTERVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsProgram");
	if (p) {
		glIsProgram = (PFNGLISPROGRAMPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsShader");
	if (p) {
		glIsShader = (PFNGLISSHADERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glLinkProgram");
	if (p) {
		glLinkProgram = (PFNGLLINKPROGRAMPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glShaderSource");
	if (p) {
		glShaderSource = (PFNGLSHADERSOURCEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUseProgram");
	if (p) {
		glUseProgram = (PFNGLUSEPROGRAMPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform1f");
	if (p) {
		glUniform1f = (PFNGLUNIFORM1FPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform2f");
	if (p) {
		glUniform2f = (PFNGLUNIFORM2FPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform3f");
	if (p) {
		glUniform3f = (PFNGLUNIFORM3FPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform4f");
	if (p) {
		glUniform4f = (PFNGLUNIFORM4FPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform1i");
	if (p) {
		glUniform1i = (PFNGLUNIFORM1IPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform2i");
	if (p) {
		glUniform2i = (PFNGLUNIFORM2IPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform3i");
	if (p) {
		glUniform3i = (PFNGLUNIFORM3IPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform4i");
	if (p) {
		glUniform4i = (PFNGLUNIFORM4IPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform1fv");
	if (p) {
		glUniform1fv = (PFNGLUNIFORM1FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform2fv");
	if (p) {
		glUniform2fv = (PFNGLUNIFORM2FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform3fv");
	if (p) {
		glUniform3fv = (PFNGLUNIFORM3FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform4fv");
	if (p) {
		glUniform4fv = (PFNGLUNIFORM4FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform1iv");
	if (p) {
		glUniform1iv = (PFNGLUNIFORM1IVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform2iv");
	if (p) {
		glUniform2iv = (PFNGLUNIFORM2IVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform3iv");
	if (p) {
		glUniform3iv = (PFNGLUNIFORM3IVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform4iv");
	if (p) {
		glUniform4iv = (PFNGLUNIFORM4IVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniformMatrix2fv");
	if (p) {
		glUniformMatrix2fv = (PFNGLUNIFORMMATRIX2FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniformMatrix3fv");
	if (p) {
		glUniformMatrix3fv = (PFNGLUNIFORMMATRIX3FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniformMatrix4fv");
	if (p) {
		glUniformMatrix4fv = (PFNGLUNIFORMMATRIX4FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glValidateProgram");
	if (p) {
		glValidateProgram = (PFNGLVALIDATEPROGRAMPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib1d");
	if (p) {
		glVertexAttrib1d = (PFNGLVERTEXATTRIB1DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib1dv");
	if (p) {
		glVertexAttrib1dv = (PFNGLVERTEXATTRIB1DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib1f");
	if (p) {
		glVertexAttrib1f = (PFNGLVERTEXATTRIB1FPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib1fv");
	if (p) {
		glVertexAttrib1fv = (PFNGLVERTEXATTRIB1FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib1s");
	if (p) {
		glVertexAttrib1s = (PFNGLVERTEXATTRIB1SPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib1sv");
	if (p) {
		glVertexAttrib1sv = (PFNGLVERTEXATTRIB1SVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib2d");
	if (p) {
		glVertexAttrib2d = (PFNGLVERTEXATTRIB2DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib2dv");
	if (p) {
		glVertexAttrib2dv = (PFNGLVERTEXATTRIB2DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib2f");
	if (p) {
		glVertexAttrib2f = (PFNGLVERTEXATTRIB2FPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib2fv");
	if (p) {
		glVertexAttrib2fv = (PFNGLVERTEXATTRIB2FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib2s");
	if (p) {
		glVertexAttrib2s = (PFNGLVERTEXATTRIB2SPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib2sv");
	if (p) {
		glVertexAttrib2sv = (PFNGLVERTEXATTRIB2SVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib3d");
	if (p) {
		glVertexAttrib3d = (PFNGLVERTEXATTRIB3DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib3dv");
	if (p) {
		glVertexAttrib3dv = (PFNGLVERTEXATTRIB3DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib3f");
	if (p) {
		glVertexAttrib3f = (PFNGLVERTEXATTRIB3FPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib3fv");
	if (p) {
		glVertexAttrib3fv = (PFNGLVERTEXATTRIB3FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib3s");
	if (p) {
		glVertexAttrib3s = (PFNGLVERTEXATTRIB3SPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib3sv");
	if (p) {
		glVertexAttrib3sv = (PFNGLVERTEXATTRIB3SVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4Nbv");
	if (p) {
		glVertexAttrib4Nbv = (PFNGLVERTEXATTRIB4NBVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4Niv");
	if (p) {
		glVertexAttrib4Niv = (PFNGLVERTEXATTRIB4NIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4Nsv");
	if (p) {
		glVertexAttrib4Nsv = (PFNGLVERTEXATTRIB4NSVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4Nub");
	if (p) {
		glVertexAttrib4Nub = (PFNGLVERTEXATTRIB4NUBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4Nubv");
	if (p) {
		glVertexAttrib4Nubv = (PFNGLVERTEXATTRIB4NUBVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4Nuiv");
	if (p) {
		glVertexAttrib4Nuiv = (PFNGLVERTEXATTRIB4NUIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4Nusv");
	if (p) {
		glVertexAttrib4Nusv = (PFNGLVERTEXATTRIB4NUSVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4bv");
	if (p) {
		glVertexAttrib4bv = (PFNGLVERTEXATTRIB4BVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4d");
	if (p) {
		glVertexAttrib4d = (PFNGLVERTEXATTRIB4DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4dv");
	if (p) {
		glVertexAttrib4dv = (PFNGLVERTEXATTRIB4DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4f");
	if (p) {
		glVertexAttrib4f = (PFNGLVERTEXATTRIB4FPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4fv");
	if (p) {
		glVertexAttrib4fv = (PFNGLVERTEXATTRIB4FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4iv");
	if (p) {
		glVertexAttrib4iv = (PFNGLVERTEXATTRIB4IVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4s");
	if (p) {
		glVertexAttrib4s = (PFNGLVERTEXATTRIB4SPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4sv");
	if (p) {
		glVertexAttrib4sv = (PFNGLVERTEXATTRIB4SVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4ubv");
	if (p) {
		glVertexAttrib4ubv = (PFNGLVERTEXATTRIB4UBVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4uiv");
	if (p) {
		glVertexAttrib4uiv = (PFNGLVERTEXATTRIB4UIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4usv");
	if (p) {
		glVertexAttrib4usv = (PFNGLVERTEXATTRIB4USVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribPointer");
	if (p) {
		glVertexAttribPointer = (PFNGLVERTEXATTRIBPOINTERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniformMatrix2x3fv");
	if (p) {
		glUniformMatrix2x3fv = (PFNGLUNIFORMMATRIX2X3FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniformMatrix3x2fv");
	if (p) {
		glUniformMatrix3x2fv = (PFNGLUNIFORMMATRIX3X2FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniformMatrix2x4fv");
	if (p) {
		glUniformMatrix2x4fv = (PFNGLUNIFORMMATRIX2X4FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniformMatrix4x2fv");
	if (p) {
		glUniformMatrix4x2fv = (PFNGLUNIFORMMATRIX4X2FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniformMatrix3x4fv");
	if (p) {
		glUniformMatrix3x4fv = (PFNGLUNIFORMMATRIX3X4FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniformMatrix4x3fv");
	if (p) {
		glUniformMatrix4x3fv = (PFNGLUNIFORMMATRIX4X3FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColorMaski");
	if (p) {
		glColorMaski = (PFNGLCOLORMASKIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetBooleani_v");
	if (p) {
		glGetBooleani_v = (PFNGLGETBOOLEANI_VPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetIntegeri_v");
	if (p) {
		glGetIntegeri_v = (PFNGLGETINTEGERI_VPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEnablei");
	if (p) {
		glEnablei = (PFNGLENABLEIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDisablei");
	if (p) {
		glDisablei = (PFNGLDISABLEIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsEnabledi");
	if (p) {
		glIsEnabledi = (PFNGLISENABLEDIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBeginTransformFeedback");
	if (p) {
		glBeginTransformFeedback = (PFNGLBEGINTRANSFORMFEEDBACKPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEndTransformFeedback");
	if (p) {
		glEndTransformFeedback = (PFNGLENDTRANSFORMFEEDBACKPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindBufferRange");
	if (p) {
		glBindBufferRange = (PFNGLBINDBUFFERRANGEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindBufferBase");
	if (p) {
		glBindBufferBase = (PFNGLBINDBUFFERBASEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTransformFeedbackVaryings");
	if (p) {
		glTransformFeedbackVaryings = (PFNGLTRANSFORMFEEDBACKVARYINGSPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTransformFeedbackVarying");
	if (p) {
		glGetTransformFeedbackVarying = (PFNGLGETTRANSFORMFEEDBACKVARYINGPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glClampColor");
	if (p) {
		glClampColor = (PFNGLCLAMPCOLORPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBeginConditionalRender");
	if (p) {
		glBeginConditionalRender = (PFNGLBEGINCONDITIONALRENDERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEndConditionalRender");
	if (p) {
		glEndConditionalRender = (PFNGLENDCONDITIONALRENDERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribIPointer");
	if (p) {
		glVertexAttribIPointer = (PFNGLVERTEXATTRIBIPOINTERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVertexAttribIiv");
	if (p) {
		glGetVertexAttribIiv = (PFNGLGETVERTEXATTRIBIIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVertexAttribIuiv");
	if (p) {
		glGetVertexAttribIuiv = (PFNGLGETVERTEXATTRIBIUIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI1i");
	if (p) {
		glVertexAttribI1i = (PFNGLVERTEXATTRIBI1IPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI2i");
	if (p) {
		glVertexAttribI2i = (PFNGLVERTEXATTRIBI2IPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI3i");
	if (p) {
		glVertexAttribI3i = (PFNGLVERTEXATTRIBI3IPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI4i");
	if (p) {
		glVertexAttribI4i = (PFNGLVERTEXATTRIBI4IPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI1ui");
	if (p) {
		glVertexAttribI1ui = (PFNGLVERTEXATTRIBI1UIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI2ui");
	if (p) {
		glVertexAttribI2ui = (PFNGLVERTEXATTRIBI2UIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI3ui");
	if (p) {
		glVertexAttribI3ui = (PFNGLVERTEXATTRIBI3UIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI4ui");
	if (p) {
		glVertexAttribI4ui = (PFNGLVERTEXATTRIBI4UIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI1iv");
	if (p) {
		glVertexAttribI1iv = (PFNGLVERTEXATTRIBI1IVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI2iv");
	if (p) {
		glVertexAttribI2iv = (PFNGLVERTEXATTRIBI2IVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI3iv");
	if (p) {
		glVertexAttribI3iv = (PFNGLVERTEXATTRIBI3IVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI4iv");
	if (p) {
		glVertexAttribI4iv = (PFNGLVERTEXATTRIBI4IVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI1uiv");
	if (p) {
		glVertexAttribI1uiv = (PFNGLVERTEXATTRIBI1UIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI2uiv");
	if (p) {
		glVertexAttribI2uiv = (PFNGLVERTEXATTRIBI2UIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI3uiv");
	if (p) {
		glVertexAttribI3uiv = (PFNGLVERTEXATTRIBI3UIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI4uiv");
	if (p) {
		glVertexAttribI4uiv = (PFNGLVERTEXATTRIBI4UIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI4bv");
	if (p) {
		glVertexAttribI4bv = (PFNGLVERTEXATTRIBI4BVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI4sv");
	if (p) {
		glVertexAttribI4sv = (PFNGLVERTEXATTRIBI4SVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI4ubv");
	if (p) {
		glVertexAttribI4ubv = (PFNGLVERTEXATTRIBI4UBVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI4usv");
	if (p) {
		glVertexAttribI4usv = (PFNGLVERTEXATTRIBI4USVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetUniformuiv");
	if (p) {
		glGetUniformuiv = (PFNGLGETUNIFORMUIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindFragDataLocation");
	if (p) {
		glBindFragDataLocation = (PFNGLBINDFRAGDATALOCATIONPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetFragDataLocation");
	if (p) {
		glGetFragDataLocation = (PFNGLGETFRAGDATALOCATIONPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform1ui");
	if (p) {
		glUniform1ui = (PFNGLUNIFORM1UIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform2ui");
	if (p) {
		glUniform2ui = (PFNGLUNIFORM2UIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform3ui");
	if (p) {
		glUniform3ui = (PFNGLUNIFORM3UIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform4ui");
	if (p) {
		glUniform4ui = (PFNGLUNIFORM4UIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform1uiv");
	if (p) {
		glUniform1uiv = (PFNGLUNIFORM1UIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform2uiv");
	if (p) {
		glUniform2uiv = (PFNGLUNIFORM2UIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform3uiv");
	if (p) {
		glUniform3uiv = (PFNGLUNIFORM3UIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform4uiv");
	if (p) {
		glUniform4uiv = (PFNGLUNIFORM4UIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexParameterIiv");
	if (p) {
		glTexParameterIiv = (PFNGLTEXPARAMETERIIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexParameterIuiv");
	if (p) {
		glTexParameterIuiv = (PFNGLTEXPARAMETERIUIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTexParameterIiv");
	if (p) {
		glGetTexParameterIiv = (PFNGLGETTEXPARAMETERIIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTexParameterIuiv");
	if (p) {
		glGetTexParameterIuiv = (PFNGLGETTEXPARAMETERIUIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glClearBufferiv");
	if (p) {
		glClearBufferiv = (PFNGLCLEARBUFFERIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glClearBufferuiv");
	if (p) {
		glClearBufferuiv = (PFNGLCLEARBUFFERUIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glClearBufferfv");
	if (p) {
		glClearBufferfv = (PFNGLCLEARBUFFERFVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glClearBufferfi");
	if (p) {
		glClearBufferfi = (PFNGLCLEARBUFFERFIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetStringi");
	if (p) {
		glGetStringi = (PFNGLGETSTRINGIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsRenderbuffer");
	if (p) {
		glIsRenderbuffer = (PFNGLISRENDERBUFFERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindRenderbuffer");
	if (p) {
		glBindRenderbuffer = (PFNGLBINDRENDERBUFFERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeleteRenderbuffers");
	if (p) {
		glDeleteRenderbuffers = (PFNGLDELETERENDERBUFFERSPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGenRenderbuffers");
	if (p) {
		glGenRenderbuffers = (PFNGLGENRENDERBUFFERSPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glRenderbufferStorage");
	if (p) {
		glRenderbufferStorage = (PFNGLRENDERBUFFERSTORAGEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetRenderbufferParameteriv");
	if (p) {
		glGetRenderbufferParameteriv = (PFNGLGETRENDERBUFFERPARAMETERIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsFramebuffer");
	if (p) {
		glIsFramebuffer = (PFNGLISFRAMEBUFFERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindFramebuffer");
	if (p) {
		glBindFramebuffer = (PFNGLBINDFRAMEBUFFERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeleteFramebuffers");
	if (p) {
		glDeleteFramebuffers = (PFNGLDELETEFRAMEBUFFERSPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGenFramebuffers");
	if (p) {
		glGenFramebuffers = (PFNGLGENFRAMEBUFFERSPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCheckFramebufferStatus");
	if (p) {
		glCheckFramebufferStatus = (PFNGLCHECKFRAMEBUFFERSTATUSPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFramebufferTexture1D");
	if (p) {
		glFramebufferTexture1D = (PFNGLFRAMEBUFFERTEXTURE1DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFramebufferTexture2D");
	if (p) {
		glFramebufferTexture2D = (PFNGLFRAMEBUFFERTEXTURE2DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFramebufferTexture3D");
	if (p) {
		glFramebufferTexture3D = (PFNGLFRAMEBUFFERTEXTURE3DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFramebufferRenderbuffer");
	if (p) {
		glFramebufferRenderbuffer = (PFNGLFRAMEBUFFERRENDERBUFFERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetFramebufferAttachmentParameteriv");
	if (p) {
		glGetFramebufferAttachmentParameteriv = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGenerateMipmap");
	if (p) {
		glGenerateMipmap = (PFNGLGENERATEMIPMAPPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBlitFramebuffer");
	if (p) {
		glBlitFramebuffer = (PFNGLBLITFRAMEBUFFERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glRenderbufferStorageMultisample");
	if (p) {
		glRenderbufferStorageMultisample = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFramebufferTextureLayer");
	if (p) {
		glFramebufferTextureLayer = (PFNGLFRAMEBUFFERTEXTURELAYERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMapBufferRange");
	if (p) {
		glMapBufferRange = (PFNGLMAPBUFFERRANGEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFlushMappedBufferRange");
	if (p) {
		glFlushMappedBufferRange = (PFNGLFLUSHMAPPEDBUFFERRANGEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindVertexArray");
	if (p) {
		glBindVertexArray = (PFNGLBINDVERTEXARRAYPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeleteVertexArrays");
	if (p) {
		glDeleteVertexArrays = (PFNGLDELETEVERTEXARRAYSPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGenVertexArrays");
	if (p) {
		glGenVertexArrays = (PFNGLGENVERTEXARRAYSPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsVertexArray");
	if (p) {
		glIsVertexArray = (PFNGLISVERTEXARRAYPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDrawArraysInstanced");
	if (p) {
		glDrawArraysInstanced = (PFNGLDRAWARRAYSINSTANCEDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDrawElementsInstanced");
	if (p) {
		glDrawElementsInstanced = (PFNGLDRAWELEMENTSINSTANCEDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexBuffer");
	if (p) {
		glTexBuffer = (PFNGLTEXBUFFERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPrimitiveRestartIndex");
	if (p) {
		glPrimitiveRestartIndex = (PFNGLPRIMITIVERESTARTINDEXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCopyBufferSubData");
	if (p) {
		glCopyBufferSubData = (PFNGLCOPYBUFFERSUBDATAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetUniformIndices");
	if (p) {
		glGetUniformIndices = (PFNGLGETUNIFORMINDICESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetActiveUniformsiv");
	if (p) {
		glGetActiveUniformsiv = (PFNGLGETACTIVEUNIFORMSIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetActiveUniformName");
	if (p) {
		glGetActiveUniformName = (PFNGLGETACTIVEUNIFORMNAMEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetUniformBlockIndex");
	if (p) {
		glGetUniformBlockIndex = (PFNGLGETUNIFORMBLOCKINDEXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetActiveUniformBlockiv");
	if (p) {
		glGetActiveUniformBlockiv = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetActiveUniformBlockName");
	if (p) {
		glGetActiveUniformBlockName = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniformBlockBinding");
	if (p) {
		glUniformBlockBinding = (PFNGLUNIFORMBLOCKBINDINGPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDrawElementsBaseVertex");
	if (p) {
		glDrawElementsBaseVertex = (PFNGLDRAWELEMENTSBASEVERTEXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDrawRangeElementsBaseVertex");
	if (p) {
		glDrawRangeElementsBaseVertex = (PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDrawElementsInstancedBaseVertex");
	if (p) {
		glDrawElementsInstancedBaseVertex = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiDrawElementsBaseVertex");
	if (p) {
		glMultiDrawElementsBaseVertex = (PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProvokingVertex");
	if (p) {
		glProvokingVertex = (PFNGLPROVOKINGVERTEXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFenceSync");
	if (p) {
		glFenceSync = (PFNGLFENCESYNCPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsSync");
	if (p) {
		glIsSync = (PFNGLISSYNCPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeleteSync");
	if (p) {
		glDeleteSync = (PFNGLDELETESYNCPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glClientWaitSync");
	if (p) {
		glClientWaitSync = (PFNGLCLIENTWAITSYNCPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWaitSync");
	if (p) {
		glWaitSync = (PFNGLWAITSYNCPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetInteger64v");
	if (p) {
		glGetInteger64v = (PFNGLGETINTEGER64VPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetSynciv");
	if (p) {
		glGetSynciv = (PFNGLGETSYNCIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetInteger64i_v");
	if (p) {
		glGetInteger64i_v = (PFNGLGETINTEGER64I_VPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetBufferParameteri64v");
	if (p) {
		glGetBufferParameteri64v = (PFNGLGETBUFFERPARAMETERI64VPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFramebufferTexture");
	if (p) {
		glFramebufferTexture = (PFNGLFRAMEBUFFERTEXTUREPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexImage2DMultisample");
	if (p) {
		glTexImage2DMultisample = (PFNGLTEXIMAGE2DMULTISAMPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexImage3DMultisample");
	if (p) {
		glTexImage3DMultisample = (PFNGLTEXIMAGE3DMULTISAMPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetMultisamplefv");
	if (p) {
		glGetMultisamplefv = (PFNGLGETMULTISAMPLEFVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSampleMaski");
	if (p) {
		glSampleMaski = (PFNGLSAMPLEMASKIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindFragDataLocationIndexed");
	if (p) {
		glBindFragDataLocationIndexed = (PFNGLBINDFRAGDATALOCATIONINDEXEDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetFragDataIndex");
	if (p) {
		glGetFragDataIndex = (PFNGLGETFRAGDATAINDEXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGenSamplers");
	if (p) {
		glGenSamplers = (PFNGLGENSAMPLERSPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeleteSamplers");
	if (p) {
		glDeleteSamplers = (PFNGLDELETESAMPLERSPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsSampler");
	if (p) {
		glIsSampler = (PFNGLISSAMPLERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindSampler");
	if (p) {
		glBindSampler = (PFNGLBINDSAMPLERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSamplerParameteri");
	if (p) {
		glSamplerParameteri = (PFNGLSAMPLERPARAMETERIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSamplerParameteriv");
	if (p) {
		glSamplerParameteriv = (PFNGLSAMPLERPARAMETERIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSamplerParameterf");
	if (p) {
		glSamplerParameterf = (PFNGLSAMPLERPARAMETERFPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSamplerParameterfv");
	if (p) {
		glSamplerParameterfv = (PFNGLSAMPLERPARAMETERFVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSamplerParameterIiv");
	if (p) {
		glSamplerParameterIiv = (PFNGLSAMPLERPARAMETERIIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSamplerParameterIuiv");
	if (p) {
		glSamplerParameterIuiv = (PFNGLSAMPLERPARAMETERIUIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetSamplerParameteriv");
	if (p) {
		glGetSamplerParameteriv = (PFNGLGETSAMPLERPARAMETERIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetSamplerParameterIiv");
	if (p) {
		glGetSamplerParameterIiv = (PFNGLGETSAMPLERPARAMETERIIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetSamplerParameterfv");
	if (p) {
		glGetSamplerParameterfv = (PFNGLGETSAMPLERPARAMETERFVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetSamplerParameterIuiv");
	if (p) {
		glGetSamplerParameterIuiv = (PFNGLGETSAMPLERPARAMETERIUIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glQueryCounter");
	if (p) {
		glQueryCounter = (PFNGLQUERYCOUNTERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetQueryObjecti64v");
	if (p) {
		glGetQueryObjecti64v = (PFNGLGETQUERYOBJECTI64VPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetQueryObjectui64v");
	if (p) {
		glGetQueryObjectui64v = (PFNGLGETQUERYOBJECTUI64VPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribDivisor");
	if (p) {
		glVertexAttribDivisor = (PFNGLVERTEXATTRIBDIVISORPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribP1ui");
	if (p) {
		glVertexAttribP1ui = (PFNGLVERTEXATTRIBP1UIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribP1uiv");
	if (p) {
		glVertexAttribP1uiv = (PFNGLVERTEXATTRIBP1UIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribP2ui");
	if (p) {
		glVertexAttribP2ui = (PFNGLVERTEXATTRIBP2UIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribP2uiv");
	if (p) {
		glVertexAttribP2uiv = (PFNGLVERTEXATTRIBP2UIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribP3ui");
	if (p) {
		glVertexAttribP3ui = (PFNGLVERTEXATTRIBP3UIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribP3uiv");
	if (p) {
		glVertexAttribP3uiv = (PFNGLVERTEXATTRIBP3UIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribP4ui");
	if (p) {
		glVertexAttribP4ui = (PFNGLVERTEXATTRIBP4UIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribP4uiv");
	if (p) {
		glVertexAttribP4uiv = (PFNGLVERTEXATTRIBP4UIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexP2ui");
	if (p) {
		glVertexP2ui = (PFNGLVERTEXP2UIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexP2uiv");
	if (p) {
		glVertexP2uiv = (PFNGLVERTEXP2UIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexP3ui");
	if (p) {
		glVertexP3ui = (PFNGLVERTEXP3UIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexP3uiv");
	if (p) {
		glVertexP3uiv = (PFNGLVERTEXP3UIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexP4ui");
	if (p) {
		glVertexP4ui = (PFNGLVERTEXP4UIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexP4uiv");
	if (p) {
		glVertexP4uiv = (PFNGLVERTEXP4UIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoordP1ui");
	if (p) {
		glTexCoordP1ui = (PFNGLTEXCOORDP1UIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoordP1uiv");
	if (p) {
		glTexCoordP1uiv = (PFNGLTEXCOORDP1UIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoordP2ui");
	if (p) {
		glTexCoordP2ui = (PFNGLTEXCOORDP2UIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoordP2uiv");
	if (p) {
		glTexCoordP2uiv = (PFNGLTEXCOORDP2UIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoordP3ui");
	if (p) {
		glTexCoordP3ui = (PFNGLTEXCOORDP3UIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoordP3uiv");
	if (p) {
		glTexCoordP3uiv = (PFNGLTEXCOORDP3UIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoordP4ui");
	if (p) {
		glTexCoordP4ui = (PFNGLTEXCOORDP4UIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoordP4uiv");
	if (p) {
		glTexCoordP4uiv = (PFNGLTEXCOORDP4UIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoordP1ui");
	if (p) {
		glMultiTexCoordP1ui = (PFNGLMULTITEXCOORDP1UIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoordP1uiv");
	if (p) {
		glMultiTexCoordP1uiv = (PFNGLMULTITEXCOORDP1UIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoordP2ui");
	if (p) {
		glMultiTexCoordP2ui = (PFNGLMULTITEXCOORDP2UIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoordP2uiv");
	if (p) {
		glMultiTexCoordP2uiv = (PFNGLMULTITEXCOORDP2UIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoordP3ui");
	if (p) {
		glMultiTexCoordP3ui = (PFNGLMULTITEXCOORDP3UIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoordP3uiv");
	if (p) {
		glMultiTexCoordP3uiv = (PFNGLMULTITEXCOORDP3UIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoordP4ui");
	if (p) {
		glMultiTexCoordP4ui = (PFNGLMULTITEXCOORDP4UIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoordP4uiv");
	if (p) {
		glMultiTexCoordP4uiv = (PFNGLMULTITEXCOORDP4UIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNormalP3ui");
	if (p) {
		glNormalP3ui = (PFNGLNORMALP3UIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNormalP3uiv");
	if (p) {
		glNormalP3uiv = (PFNGLNORMALP3UIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColorP3ui");
	if (p) {
		glColorP3ui = (PFNGLCOLORP3UIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColorP3uiv");
	if (p) {
		glColorP3uiv = (PFNGLCOLORP3UIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColorP4ui");
	if (p) {
		glColorP4ui = (PFNGLCOLORP4UIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColorP4uiv");
	if (p) {
		glColorP4uiv = (PFNGLCOLORP4UIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColorP3ui");
	if (p) {
		glSecondaryColorP3ui = (PFNGLSECONDARYCOLORP3UIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColorP3uiv");
	if (p) {
		glSecondaryColorP3uiv = (PFNGLSECONDARYCOLORP3UIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMinSampleShading");
	if (p) {
		glMinSampleShading = (PFNGLMINSAMPLESHADINGPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBlendEquationi");
	if (p) {
		glBlendEquationi = (PFNGLBLENDEQUATIONIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBlendEquationSeparatei");
	if (p) {
		glBlendEquationSeparatei = (PFNGLBLENDEQUATIONSEPARATEIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBlendFunci");
	if (p) {
		glBlendFunci = (PFNGLBLENDFUNCIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBlendFuncSeparatei");
	if (p) {
		glBlendFuncSeparatei = (PFNGLBLENDFUNCSEPARATEIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDrawArraysIndirect");
	if (p) {
		glDrawArraysIndirect = (PFNGLDRAWARRAYSINDIRECTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDrawElementsIndirect");
	if (p) {
		glDrawElementsIndirect = (PFNGLDRAWELEMENTSINDIRECTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform1d");
	if (p) {
		glUniform1d = (PFNGLUNIFORM1DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform2d");
	if (p) {
		glUniform2d = (PFNGLUNIFORM2DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform3d");
	if (p) {
		glUniform3d = (PFNGLUNIFORM3DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform4d");
	if (p) {
		glUniform4d = (PFNGLUNIFORM4DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform1dv");
	if (p) {
		glUniform1dv = (PFNGLUNIFORM1DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform2dv");
	if (p) {
		glUniform2dv = (PFNGLUNIFORM2DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform3dv");
	if (p) {
		glUniform3dv = (PFNGLUNIFORM3DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform4dv");
	if (p) {
		glUniform4dv = (PFNGLUNIFORM4DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniformMatrix2dv");
	if (p) {
		glUniformMatrix2dv = (PFNGLUNIFORMMATRIX2DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniformMatrix3dv");
	if (p) {
		glUniformMatrix3dv = (PFNGLUNIFORMMATRIX3DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniformMatrix4dv");
	if (p) {
		glUniformMatrix4dv = (PFNGLUNIFORMMATRIX4DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniformMatrix2x3dv");
	if (p) {
		glUniformMatrix2x3dv = (PFNGLUNIFORMMATRIX2X3DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniformMatrix2x4dv");
	if (p) {
		glUniformMatrix2x4dv = (PFNGLUNIFORMMATRIX2X4DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniformMatrix3x2dv");
	if (p) {
		glUniformMatrix3x2dv = (PFNGLUNIFORMMATRIX3X2DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniformMatrix3x4dv");
	if (p) {
		glUniformMatrix3x4dv = (PFNGLUNIFORMMATRIX3X4DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniformMatrix4x2dv");
	if (p) {
		glUniformMatrix4x2dv = (PFNGLUNIFORMMATRIX4X2DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniformMatrix4x3dv");
	if (p) {
		glUniformMatrix4x3dv = (PFNGLUNIFORMMATRIX4X3DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetUniformdv");
	if (p) {
		glGetUniformdv = (PFNGLGETUNIFORMDVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetSubroutineUniformLocation");
	if (p) {
		glGetSubroutineUniformLocation = (PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetSubroutineIndex");
	if (p) {
		glGetSubroutineIndex = (PFNGLGETSUBROUTINEINDEXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetActiveSubroutineUniformiv");
	if (p) {
		glGetActiveSubroutineUniformiv = (PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetActiveSubroutineUniformName");
	if (p) {
		glGetActiveSubroutineUniformName = (PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetActiveSubroutineName");
	if (p) {
		glGetActiveSubroutineName = (PFNGLGETACTIVESUBROUTINENAMEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniformSubroutinesuiv");
	if (p) {
		glUniformSubroutinesuiv = (PFNGLUNIFORMSUBROUTINESUIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetUniformSubroutineuiv");
	if (p) {
		glGetUniformSubroutineuiv = (PFNGLGETUNIFORMSUBROUTINEUIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetProgramStageiv");
	if (p) {
		glGetProgramStageiv = (PFNGLGETPROGRAMSTAGEIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPatchParameteri");
	if (p) {
		glPatchParameteri = (PFNGLPATCHPARAMETERIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPatchParameterfv");
	if (p) {
		glPatchParameterfv = (PFNGLPATCHPARAMETERFVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindTransformFeedback");
	if (p) {
		glBindTransformFeedback = (PFNGLBINDTRANSFORMFEEDBACKPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeleteTransformFeedbacks");
	if (p) {
		glDeleteTransformFeedbacks = (PFNGLDELETETRANSFORMFEEDBACKSPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGenTransformFeedbacks");
	if (p) {
		glGenTransformFeedbacks = (PFNGLGENTRANSFORMFEEDBACKSPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsTransformFeedback");
	if (p) {
		glIsTransformFeedback = (PFNGLISTRANSFORMFEEDBACKPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPauseTransformFeedback");
	if (p) {
		glPauseTransformFeedback = (PFNGLPAUSETRANSFORMFEEDBACKPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glResumeTransformFeedback");
	if (p) {
		glResumeTransformFeedback = (PFNGLRESUMETRANSFORMFEEDBACKPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDrawTransformFeedback");
	if (p) {
		glDrawTransformFeedback = (PFNGLDRAWTRANSFORMFEEDBACKPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDrawTransformFeedbackStream");
	if (p) {
		glDrawTransformFeedbackStream = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBeginQueryIndexed");
	if (p) {
		glBeginQueryIndexed = (PFNGLBEGINQUERYINDEXEDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEndQueryIndexed");
	if (p) {
		glEndQueryIndexed = (PFNGLENDQUERYINDEXEDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetQueryIndexediv");
	if (p) {
		glGetQueryIndexediv = (PFNGLGETQUERYINDEXEDIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glReleaseShaderCompiler");
	if (p) {
		glReleaseShaderCompiler = (PFNGLRELEASESHADERCOMPILERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glShaderBinary");
	if (p) {
		glShaderBinary = (PFNGLSHADERBINARYPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetShaderPrecisionFormat");
	if (p) {
		glGetShaderPrecisionFormat = (PFNGLGETSHADERPRECISIONFORMATPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDepthRangef");
	if (p) {
		glDepthRangef = (PFNGLDEPTHRANGEFPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glClearDepthf");
	if (p) {
		glClearDepthf = (PFNGLCLEARDEPTHFPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetProgramBinary");
	if (p) {
		glGetProgramBinary = (PFNGLGETPROGRAMBINARYPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramBinary");
	if (p) {
		glProgramBinary = (PFNGLPROGRAMBINARYPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramParameteri");
	if (p) {
		glProgramParameteri = (PFNGLPROGRAMPARAMETERIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUseProgramStages");
	if (p) {
		glUseProgramStages = (PFNGLUSEPROGRAMSTAGESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glActiveShaderProgram");
	if (p) {
		glActiveShaderProgram = (PFNGLACTIVESHADERPROGRAMPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCreateShaderProgramv");
	if (p) {
		glCreateShaderProgramv = (PFNGLCREATESHADERPROGRAMVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindProgramPipeline");
	if (p) {
		glBindProgramPipeline = (PFNGLBINDPROGRAMPIPELINEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeleteProgramPipelines");
	if (p) {
		glDeleteProgramPipelines = (PFNGLDELETEPROGRAMPIPELINESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGenProgramPipelines");
	if (p) {
		glGenProgramPipelines = (PFNGLGENPROGRAMPIPELINESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsProgramPipeline");
	if (p) {
		glIsProgramPipeline = (PFNGLISPROGRAMPIPELINEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetProgramPipelineiv");
	if (p) {
		glGetProgramPipelineiv = (PFNGLGETPROGRAMPIPELINEIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform1i");
	if (p) {
		glProgramUniform1i = (PFNGLPROGRAMUNIFORM1IPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform1iv");
	if (p) {
		glProgramUniform1iv = (PFNGLPROGRAMUNIFORM1IVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform1f");
	if (p) {
		glProgramUniform1f = (PFNGLPROGRAMUNIFORM1FPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform1fv");
	if (p) {
		glProgramUniform1fv = (PFNGLPROGRAMUNIFORM1FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform1d");
	if (p) {
		glProgramUniform1d = (PFNGLPROGRAMUNIFORM1DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform1dv");
	if (p) {
		glProgramUniform1dv = (PFNGLPROGRAMUNIFORM1DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform1ui");
	if (p) {
		glProgramUniform1ui = (PFNGLPROGRAMUNIFORM1UIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform1uiv");
	if (p) {
		glProgramUniform1uiv = (PFNGLPROGRAMUNIFORM1UIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform2i");
	if (p) {
		glProgramUniform2i = (PFNGLPROGRAMUNIFORM2IPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform2iv");
	if (p) {
		glProgramUniform2iv = (PFNGLPROGRAMUNIFORM2IVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform2f");
	if (p) {
		glProgramUniform2f = (PFNGLPROGRAMUNIFORM2FPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform2fv");
	if (p) {
		glProgramUniform2fv = (PFNGLPROGRAMUNIFORM2FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform2d");
	if (p) {
		glProgramUniform2d = (PFNGLPROGRAMUNIFORM2DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform2dv");
	if (p) {
		glProgramUniform2dv = (PFNGLPROGRAMUNIFORM2DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform2ui");
	if (p) {
		glProgramUniform2ui = (PFNGLPROGRAMUNIFORM2UIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform2uiv");
	if (p) {
		glProgramUniform2uiv = (PFNGLPROGRAMUNIFORM2UIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform3i");
	if (p) {
		glProgramUniform3i = (PFNGLPROGRAMUNIFORM3IPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform3iv");
	if (p) {
		glProgramUniform3iv = (PFNGLPROGRAMUNIFORM3IVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform3f");
	if (p) {
		glProgramUniform3f = (PFNGLPROGRAMUNIFORM3FPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform3fv");
	if (p) {
		glProgramUniform3fv = (PFNGLPROGRAMUNIFORM3FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform3d");
	if (p) {
		glProgramUniform3d = (PFNGLPROGRAMUNIFORM3DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform3dv");
	if (p) {
		glProgramUniform3dv = (PFNGLPROGRAMUNIFORM3DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform3ui");
	if (p) {
		glProgramUniform3ui = (PFNGLPROGRAMUNIFORM3UIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform3uiv");
	if (p) {
		glProgramUniform3uiv = (PFNGLPROGRAMUNIFORM3UIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform4i");
	if (p) {
		glProgramUniform4i = (PFNGLPROGRAMUNIFORM4IPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform4iv");
	if (p) {
		glProgramUniform4iv = (PFNGLPROGRAMUNIFORM4IVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform4f");
	if (p) {
		glProgramUniform4f = (PFNGLPROGRAMUNIFORM4FPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform4fv");
	if (p) {
		glProgramUniform4fv = (PFNGLPROGRAMUNIFORM4FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform4d");
	if (p) {
		glProgramUniform4d = (PFNGLPROGRAMUNIFORM4DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform4dv");
	if (p) {
		glProgramUniform4dv = (PFNGLPROGRAMUNIFORM4DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform4ui");
	if (p) {
		glProgramUniform4ui = (PFNGLPROGRAMUNIFORM4UIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform4uiv");
	if (p) {
		glProgramUniform4uiv = (PFNGLPROGRAMUNIFORM4UIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix2fv");
	if (p) {
		glProgramUniformMatrix2fv = (PFNGLPROGRAMUNIFORMMATRIX2FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix3fv");
	if (p) {
		glProgramUniformMatrix3fv = (PFNGLPROGRAMUNIFORMMATRIX3FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix4fv");
	if (p) {
		glProgramUniformMatrix4fv = (PFNGLPROGRAMUNIFORMMATRIX4FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix2dv");
	if (p) {
		glProgramUniformMatrix2dv = (PFNGLPROGRAMUNIFORMMATRIX2DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix3dv");
	if (p) {
		glProgramUniformMatrix3dv = (PFNGLPROGRAMUNIFORMMATRIX3DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix4dv");
	if (p) {
		glProgramUniformMatrix4dv = (PFNGLPROGRAMUNIFORMMATRIX4DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix2x3fv");
	if (p) {
		glProgramUniformMatrix2x3fv = (PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix3x2fv");
	if (p) {
		glProgramUniformMatrix3x2fv = (PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix2x4fv");
	if (p) {
		glProgramUniformMatrix2x4fv = (PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix4x2fv");
	if (p) {
		glProgramUniformMatrix4x2fv = (PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix3x4fv");
	if (p) {
		glProgramUniformMatrix3x4fv = (PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix4x3fv");
	if (p) {
		glProgramUniformMatrix4x3fv = (PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix2x3dv");
	if (p) {
		glProgramUniformMatrix2x3dv = (PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix3x2dv");
	if (p) {
		glProgramUniformMatrix3x2dv = (PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix2x4dv");
	if (p) {
		glProgramUniformMatrix2x4dv = (PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix4x2dv");
	if (p) {
		glProgramUniformMatrix4x2dv = (PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix3x4dv");
	if (p) {
		glProgramUniformMatrix3x4dv = (PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix4x3dv");
	if (p) {
		glProgramUniformMatrix4x3dv = (PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glValidateProgramPipeline");
	if (p) {
		glValidateProgramPipeline = (PFNGLVALIDATEPROGRAMPIPELINEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetProgramPipelineInfoLog");
	if (p) {
		glGetProgramPipelineInfoLog = (PFNGLGETPROGRAMPIPELINEINFOLOGPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribL1d");
	if (p) {
		glVertexAttribL1d = (PFNGLVERTEXATTRIBL1DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribL2d");
	if (p) {
		glVertexAttribL2d = (PFNGLVERTEXATTRIBL2DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribL3d");
	if (p) {
		glVertexAttribL3d = (PFNGLVERTEXATTRIBL3DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribL4d");
	if (p) {
		glVertexAttribL4d = (PFNGLVERTEXATTRIBL4DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribL1dv");
	if (p) {
		glVertexAttribL1dv = (PFNGLVERTEXATTRIBL1DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribL2dv");
	if (p) {
		glVertexAttribL2dv = (PFNGLVERTEXATTRIBL2DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribL3dv");
	if (p) {
		glVertexAttribL3dv = (PFNGLVERTEXATTRIBL3DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribL4dv");
	if (p) {
		glVertexAttribL4dv = (PFNGLVERTEXATTRIBL4DVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribLPointer");
	if (p) {
		glVertexAttribLPointer = (PFNGLVERTEXATTRIBLPOINTERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVertexAttribLdv");
	if (p) {
		glGetVertexAttribLdv = (PFNGLGETVERTEXATTRIBLDVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glViewportArrayv");
	if (p) {
		glViewportArrayv = (PFNGLVIEWPORTARRAYVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glViewportIndexedf");
	if (p) {
		glViewportIndexedf = (PFNGLVIEWPORTINDEXEDFPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glViewportIndexedfv");
	if (p) {
		glViewportIndexedfv = (PFNGLVIEWPORTINDEXEDFVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glScissorArrayv");
	if (p) {
		glScissorArrayv = (PFNGLSCISSORARRAYVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glScissorIndexed");
	if (p) {
		glScissorIndexed = (PFNGLSCISSORINDEXEDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glScissorIndexedv");
	if (p) {
		glScissorIndexedv = (PFNGLSCISSORINDEXEDVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDepthRangeArrayv");
	if (p) {
		glDepthRangeArrayv = (PFNGLDEPTHRANGEARRAYVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDepthRangeIndexed");
	if (p) {
		glDepthRangeIndexed = (PFNGLDEPTHRANGEINDEXEDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetFloati_v");
	if (p) {
		glGetFloati_v = (PFNGLGETFLOATI_VPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetDoublei_v");
	if (p) {
		glGetDoublei_v = (PFNGLGETDOUBLEI_VPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDrawArraysInstancedBaseInstance");
	if (p) {
		glDrawArraysInstancedBaseInstance = (PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDrawElementsInstancedBaseInstance");
	if (p) {
		glDrawElementsInstancedBaseInstance = (PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDrawElementsInstancedBaseVertexBaseInstance");
	if (p) {
		glDrawElementsInstancedBaseVertexBaseInstance = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetInternalformativ");
	if (p) {
		glGetInternalformativ = (PFNGLGETINTERNALFORMATIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetActiveAtomicCounterBufferiv");
	if (p) {
		glGetActiveAtomicCounterBufferiv = (PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindImageTexture");
	if (p) {
		glBindImageTexture = (PFNGLBINDIMAGETEXTUREPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMemoryBarrier");
	if (p) {
		glMemoryBarrier = (PFNGLMEMORYBARRIERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexStorage1D");
	if (p) {
		glTexStorage1D = (PFNGLTEXSTORAGE1DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexStorage2D");
	if (p) {
		glTexStorage2D = (PFNGLTEXSTORAGE2DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexStorage3D");
	if (p) {
		glTexStorage3D = (PFNGLTEXSTORAGE3DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDrawTransformFeedbackInstanced");
	if (p) {
		glDrawTransformFeedbackInstanced = (PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDrawTransformFeedbackStreamInstanced");
	if (p) {
		glDrawTransformFeedbackStreamInstanced = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glClearBufferData");
	if (p) {
		glClearBufferData = (PFNGLCLEARBUFFERDATAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glClearBufferSubData");
	if (p) {
		glClearBufferSubData = (PFNGLCLEARBUFFERSUBDATAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDispatchCompute");
	if (p) {
		glDispatchCompute = (PFNGLDISPATCHCOMPUTEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDispatchComputeIndirect");
	if (p) {
		glDispatchComputeIndirect = (PFNGLDISPATCHCOMPUTEINDIRECTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCopyImageSubData");
	if (p) {
		glCopyImageSubData = (PFNGLCOPYIMAGESUBDATAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFramebufferParameteri");
	if (p) {
		glFramebufferParameteri = (PFNGLFRAMEBUFFERPARAMETERIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetFramebufferParameteriv");
	if (p) {
		glGetFramebufferParameteriv = (PFNGLGETFRAMEBUFFERPARAMETERIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetInternalformati64v");
	if (p) {
		glGetInternalformati64v = (PFNGLGETINTERNALFORMATI64VPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glInvalidateTexSubImage");
	if (p) {
		glInvalidateTexSubImage = (PFNGLINVALIDATETEXSUBIMAGEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glInvalidateTexImage");
	if (p) {
		glInvalidateTexImage = (PFNGLINVALIDATETEXIMAGEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glInvalidateBufferSubData");
	if (p) {
		glInvalidateBufferSubData = (PFNGLINVALIDATEBUFFERSUBDATAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glInvalidateBufferData");
	if (p) {
		glInvalidateBufferData = (PFNGLINVALIDATEBUFFERDATAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glInvalidateFramebuffer");
	if (p) {
		glInvalidateFramebuffer = (PFNGLINVALIDATEFRAMEBUFFERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glInvalidateSubFramebuffer");
	if (p) {
		glInvalidateSubFramebuffer = (PFNGLINVALIDATESUBFRAMEBUFFERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiDrawArraysIndirect");
	if (p) {
		glMultiDrawArraysIndirect = (PFNGLMULTIDRAWARRAYSINDIRECTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiDrawElementsIndirect");
	if (p) {
		glMultiDrawElementsIndirect = (PFNGLMULTIDRAWELEMENTSINDIRECTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetProgramInterfaceiv");
	if (p) {
		glGetProgramInterfaceiv = (PFNGLGETPROGRAMINTERFACEIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetProgramResourceIndex");
	if (p) {
		glGetProgramResourceIndex = (PFNGLGETPROGRAMRESOURCEINDEXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetProgramResourceName");
	if (p) {
		glGetProgramResourceName = (PFNGLGETPROGRAMRESOURCENAMEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetProgramResourceiv");
	if (p) {
		glGetProgramResourceiv = (PFNGLGETPROGRAMRESOURCEIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetProgramResourceLocation");
	if (p) {
		glGetProgramResourceLocation = (PFNGLGETPROGRAMRESOURCELOCATIONPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetProgramResourceLocationIndex");
	if (p) {
		glGetProgramResourceLocationIndex = (PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glShaderStorageBlockBinding");
	if (p) {
		glShaderStorageBlockBinding = (PFNGLSHADERSTORAGEBLOCKBINDINGPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexBufferRange");
	if (p) {
		glTexBufferRange = (PFNGLTEXBUFFERRANGEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexStorage2DMultisample");
	if (p) {
		glTexStorage2DMultisample = (PFNGLTEXSTORAGE2DMULTISAMPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexStorage3DMultisample");
	if (p) {
		glTexStorage3DMultisample = (PFNGLTEXSTORAGE3DMULTISAMPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureView");
	if (p) {
		glTextureView = (PFNGLTEXTUREVIEWPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindVertexBuffer");
	if (p) {
		glBindVertexBuffer = (PFNGLBINDVERTEXBUFFERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribFormat");
	if (p) {
		glVertexAttribFormat = (PFNGLVERTEXATTRIBFORMATPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribIFormat");
	if (p) {
		glVertexAttribIFormat = (PFNGLVERTEXATTRIBIFORMATPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribLFormat");
	if (p) {
		glVertexAttribLFormat = (PFNGLVERTEXATTRIBLFORMATPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribBinding");
	if (p) {
		glVertexAttribBinding = (PFNGLVERTEXATTRIBBINDINGPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexBindingDivisor");
	if (p) {
		glVertexBindingDivisor = (PFNGLVERTEXBINDINGDIVISORPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDebugMessageControl");
	if (p) {
		glDebugMessageControl = (PFNGLDEBUGMESSAGECONTROLPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDebugMessageInsert");
	if (p) {
		glDebugMessageInsert = (PFNGLDEBUGMESSAGEINSERTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDebugMessageCallback");
	if (p) {
		glDebugMessageCallback = (PFNGLDEBUGMESSAGECALLBACKPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetDebugMessageLog");
	if (p) {
		glGetDebugMessageLog = (PFNGLGETDEBUGMESSAGELOGPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPushDebugGroup");
	if (p) {
		glPushDebugGroup = (PFNGLPUSHDEBUGGROUPPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPopDebugGroup");
	if (p) {
		glPopDebugGroup = (PFNGLPOPDEBUGGROUPPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glObjectLabel");
	if (p) {
		glObjectLabel = (PFNGLOBJECTLABELPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetObjectLabel");
	if (p) {
		glGetObjectLabel = (PFNGLGETOBJECTLABELPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glObjectPtrLabel");
	if (p) {
		glObjectPtrLabel = (PFNGLOBJECTPTRLABELPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetObjectPtrLabel");
	if (p) {
		glGetObjectPtrLabel = (PFNGLGETOBJECTPTRLABELPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBufferStorage");
	if (p) {
		glBufferStorage = (PFNGLBUFFERSTORAGEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glClearTexImage");
	if (p) {
		glClearTexImage = (PFNGLCLEARTEXIMAGEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glClearTexSubImage");
	if (p) {
		glClearTexSubImage = (PFNGLCLEARTEXSUBIMAGEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindBuffersBase");
	if (p) {
		glBindBuffersBase = (PFNGLBINDBUFFERSBASEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindBuffersRange");
	if (p) {
		glBindBuffersRange = (PFNGLBINDBUFFERSRANGEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindTextures");
	if (p) {
		glBindTextures = (PFNGLBINDTEXTURESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindSamplers");
	if (p) {
		glBindSamplers = (PFNGLBINDSAMPLERSPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindImageTextures");
	if (p) {
		glBindImageTextures = (PFNGLBINDIMAGETEXTURESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindVertexBuffers");
	if (p) {
		glBindVertexBuffers = (PFNGLBINDVERTEXBUFFERSPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glClipControl");
	if (p) {
		glClipControl = (PFNGLCLIPCONTROLPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCreateTransformFeedbacks");
	if (p) {
		glCreateTransformFeedbacks = (PFNGLCREATETRANSFORMFEEDBACKSPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTransformFeedbackBufferBase");
	if (p) {
		glTransformFeedbackBufferBase = (PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTransformFeedbackBufferRange");
	if (p) {
		glTransformFeedbackBufferRange = (PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTransformFeedbackiv");
	if (p) {
		glGetTransformFeedbackiv = (PFNGLGETTRANSFORMFEEDBACKIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTransformFeedbacki_v");
	if (p) {
		glGetTransformFeedbacki_v = (PFNGLGETTRANSFORMFEEDBACKI_VPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTransformFeedbacki64_v");
	if (p) {
		glGetTransformFeedbacki64_v = (PFNGLGETTRANSFORMFEEDBACKI64_VPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCreateBuffers");
	if (p) {
		glCreateBuffers = (PFNGLCREATEBUFFERSPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedBufferStorage");
	if (p) {
		glNamedBufferStorage = (PFNGLNAMEDBUFFERSTORAGEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedBufferData");
	if (p) {
		glNamedBufferData = (PFNGLNAMEDBUFFERDATAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedBufferSubData");
	if (p) {
		glNamedBufferSubData = (PFNGLNAMEDBUFFERSUBDATAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCopyNamedBufferSubData");
	if (p) {
		glCopyNamedBufferSubData = (PFNGLCOPYNAMEDBUFFERSUBDATAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glClearNamedBufferData");
	if (p) {
		glClearNamedBufferData = (PFNGLCLEARNAMEDBUFFERDATAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glClearNamedBufferSubData");
	if (p) {
		glClearNamedBufferSubData = (PFNGLCLEARNAMEDBUFFERSUBDATAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMapNamedBuffer");
	if (p) {
		glMapNamedBuffer = (PFNGLMAPNAMEDBUFFERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMapNamedBufferRange");
	if (p) {
		glMapNamedBufferRange = (PFNGLMAPNAMEDBUFFERRANGEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUnmapNamedBuffer");
	if (p) {
		glUnmapNamedBuffer = (PFNGLUNMAPNAMEDBUFFERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFlushMappedNamedBufferRange");
	if (p) {
		glFlushMappedNamedBufferRange = (PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetNamedBufferParameteriv");
	if (p) {
		glGetNamedBufferParameteriv = (PFNGLGETNAMEDBUFFERPARAMETERIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetNamedBufferParameteri64v");
	if (p) {
		glGetNamedBufferParameteri64v = (PFNGLGETNAMEDBUFFERPARAMETERI64VPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetNamedBufferPointerv");
	if (p) {
		glGetNamedBufferPointerv = (PFNGLGETNAMEDBUFFERPOINTERVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetNamedBufferSubData");
	if (p) {
		glGetNamedBufferSubData = (PFNGLGETNAMEDBUFFERSUBDATAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCreateFramebuffers");
	if (p) {
		glCreateFramebuffers = (PFNGLCREATEFRAMEBUFFERSPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedFramebufferRenderbuffer");
	if (p) {
		glNamedFramebufferRenderbuffer = (PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedFramebufferParameteri");
	if (p) {
		glNamedFramebufferParameteri = (PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedFramebufferTexture");
	if (p) {
		glNamedFramebufferTexture = (PFNGLNAMEDFRAMEBUFFERTEXTUREPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedFramebufferTextureLayer");
	if (p) {
		glNamedFramebufferTextureLayer = (PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedFramebufferDrawBuffer");
	if (p) {
		glNamedFramebufferDrawBuffer = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedFramebufferDrawBuffers");
	if (p) {
		glNamedFramebufferDrawBuffers = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedFramebufferReadBuffer");
	if (p) {
		glNamedFramebufferReadBuffer = (PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glInvalidateNamedFramebufferData");
	if (p) {
		glInvalidateNamedFramebufferData = (PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glInvalidateNamedFramebufferSubData");
	if (p) {
		glInvalidateNamedFramebufferSubData = (PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glClearNamedFramebufferiv");
	if (p) {
		glClearNamedFramebufferiv = (PFNGLCLEARNAMEDFRAMEBUFFERIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glClearNamedFramebufferuiv");
	if (p) {
		glClearNamedFramebufferuiv = (PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glClearNamedFramebufferfv");
	if (p) {
		glClearNamedFramebufferfv = (PFNGLCLEARNAMEDFRAMEBUFFERFVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glClearNamedFramebufferfi");
	if (p) {
		glClearNamedFramebufferfi = (PFNGLCLEARNAMEDFRAMEBUFFERFIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBlitNamedFramebuffer");
	if (p) {
		glBlitNamedFramebuffer = (PFNGLBLITNAMEDFRAMEBUFFERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCheckNamedFramebufferStatus");
	if (p) {
		glCheckNamedFramebufferStatus = (PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetNamedFramebufferParameteriv");
	if (p) {
		glGetNamedFramebufferParameteriv = (PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetNamedFramebufferAttachmentParameteriv");
	if (p) {
		glGetNamedFramebufferAttachmentParameteriv = (PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCreateRenderbuffers");
	if (p) {
		glCreateRenderbuffers = (PFNGLCREATERENDERBUFFERSPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedRenderbufferStorage");
	if (p) {
		glNamedRenderbufferStorage = (PFNGLNAMEDRENDERBUFFERSTORAGEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedRenderbufferStorageMultisample");
	if (p) {
		glNamedRenderbufferStorageMultisample = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetNamedRenderbufferParameteriv");
	if (p) {
		glGetNamedRenderbufferParameteriv = (PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCreateTextures");
	if (p) {
		glCreateTextures = (PFNGLCREATETEXTURESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureBuffer");
	if (p) {
		glTextureBuffer = (PFNGLTEXTUREBUFFERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureBufferRange");
	if (p) {
		glTextureBufferRange = (PFNGLTEXTUREBUFFERRANGEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureStorage1D");
	if (p) {
		glTextureStorage1D = (PFNGLTEXTURESTORAGE1DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureStorage2D");
	if (p) {
		glTextureStorage2D = (PFNGLTEXTURESTORAGE2DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureStorage3D");
	if (p) {
		glTextureStorage3D = (PFNGLTEXTURESTORAGE3DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureStorage2DMultisample");
	if (p) {
		glTextureStorage2DMultisample = (PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureStorage3DMultisample");
	if (p) {
		glTextureStorage3DMultisample = (PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureSubImage1D");
	if (p) {
		glTextureSubImage1D = (PFNGLTEXTURESUBIMAGE1DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureSubImage2D");
	if (p) {
		glTextureSubImage2D = (PFNGLTEXTURESUBIMAGE2DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureSubImage3D");
	if (p) {
		glTextureSubImage3D = (PFNGLTEXTURESUBIMAGE3DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCompressedTextureSubImage1D");
	if (p) {
		glCompressedTextureSubImage1D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCompressedTextureSubImage2D");
	if (p) {
		glCompressedTextureSubImage2D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCompressedTextureSubImage3D");
	if (p) {
		glCompressedTextureSubImage3D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCopyTextureSubImage1D");
	if (p) {
		glCopyTextureSubImage1D = (PFNGLCOPYTEXTURESUBIMAGE1DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCopyTextureSubImage2D");
	if (p) {
		glCopyTextureSubImage2D = (PFNGLCOPYTEXTURESUBIMAGE2DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCopyTextureSubImage3D");
	if (p) {
		glCopyTextureSubImage3D = (PFNGLCOPYTEXTURESUBIMAGE3DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureParameterf");
	if (p) {
		glTextureParameterf = (PFNGLTEXTUREPARAMETERFPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureParameterfv");
	if (p) {
		glTextureParameterfv = (PFNGLTEXTUREPARAMETERFVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureParameteri");
	if (p) {
		glTextureParameteri = (PFNGLTEXTUREPARAMETERIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureParameterIiv");
	if (p) {
		glTextureParameterIiv = (PFNGLTEXTUREPARAMETERIIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureParameterIuiv");
	if (p) {
		glTextureParameterIuiv = (PFNGLTEXTUREPARAMETERIUIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureParameteriv");
	if (p) {
		glTextureParameteriv = (PFNGLTEXTUREPARAMETERIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGenerateTextureMipmap");
	if (p) {
		glGenerateTextureMipmap = (PFNGLGENERATETEXTUREMIPMAPPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindTextureUnit");
	if (p) {
		glBindTextureUnit = (PFNGLBINDTEXTUREUNITPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTextureImage");
	if (p) {
		glGetTextureImage = (PFNGLGETTEXTUREIMAGEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetCompressedTextureImage");
	if (p) {
		glGetCompressedTextureImage = (PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTextureLevelParameterfv");
	if (p) {
		glGetTextureLevelParameterfv = (PFNGLGETTEXTURELEVELPARAMETERFVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTextureLevelParameteriv");
	if (p) {
		glGetTextureLevelParameteriv = (PFNGLGETTEXTURELEVELPARAMETERIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTextureParameterfv");
	if (p) {
		glGetTextureParameterfv = (PFNGLGETTEXTUREPARAMETERFVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTextureParameterIiv");
	if (p) {
		glGetTextureParameterIiv = (PFNGLGETTEXTUREPARAMETERIIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTextureParameterIuiv");
	if (p) {
		glGetTextureParameterIuiv = (PFNGLGETTEXTUREPARAMETERIUIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTextureParameteriv");
	if (p) {
		glGetTextureParameteriv = (PFNGLGETTEXTUREPARAMETERIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCreateVertexArrays");
	if (p) {
		glCreateVertexArrays = (PFNGLCREATEVERTEXARRAYSPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDisableVertexArrayAttrib");
	if (p) {
		glDisableVertexArrayAttrib = (PFNGLDISABLEVERTEXARRAYATTRIBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEnableVertexArrayAttrib");
	if (p) {
		glEnableVertexArrayAttrib = (PFNGLENABLEVERTEXARRAYATTRIBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexArrayElementBuffer");
	if (p) {
		glVertexArrayElementBuffer = (PFNGLVERTEXARRAYELEMENTBUFFERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexArrayVertexBuffer");
	if (p) {
		glVertexArrayVertexBuffer = (PFNGLVERTEXARRAYVERTEXBUFFERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexArrayVertexBuffers");
	if (p) {
		glVertexArrayVertexBuffers = (PFNGLVERTEXARRAYVERTEXBUFFERSPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexArrayAttribBinding");
	if (p) {
		glVertexArrayAttribBinding = (PFNGLVERTEXARRAYATTRIBBINDINGPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexArrayAttribFormat");
	if (p) {
		glVertexArrayAttribFormat = (PFNGLVERTEXARRAYATTRIBFORMATPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexArrayAttribIFormat");
	if (p) {
		glVertexArrayAttribIFormat = (PFNGLVERTEXARRAYATTRIBIFORMATPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexArrayAttribLFormat");
	if (p) {
		glVertexArrayAttribLFormat = (PFNGLVERTEXARRAYATTRIBLFORMATPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexArrayBindingDivisor");
	if (p) {
		glVertexArrayBindingDivisor = (PFNGLVERTEXARRAYBINDINGDIVISORPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVertexArrayiv");
	if (p) {
		glGetVertexArrayiv = (PFNGLGETVERTEXARRAYIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVertexArrayIndexediv");
	if (p) {
		glGetVertexArrayIndexediv = (PFNGLGETVERTEXARRAYINDEXEDIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVertexArrayIndexed64iv");
	if (p) {
		glGetVertexArrayIndexed64iv = (PFNGLGETVERTEXARRAYINDEXED64IVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCreateSamplers");
	if (p) {
		glCreateSamplers = (PFNGLCREATESAMPLERSPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCreateProgramPipelines");
	if (p) {
		glCreateProgramPipelines = (PFNGLCREATEPROGRAMPIPELINESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCreateQueries");
	if (p) {
		glCreateQueries = (PFNGLCREATEQUERIESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetQueryBufferObjecti64v");
	if (p) {
		glGetQueryBufferObjecti64v = (PFNGLGETQUERYBUFFEROBJECTI64VPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetQueryBufferObjectiv");
	if (p) {
		glGetQueryBufferObjectiv = (PFNGLGETQUERYBUFFEROBJECTIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetQueryBufferObjectui64v");
	if (p) {
		glGetQueryBufferObjectui64v = (PFNGLGETQUERYBUFFEROBJECTUI64VPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetQueryBufferObjectuiv");
	if (p) {
		glGetQueryBufferObjectuiv = (PFNGLGETQUERYBUFFEROBJECTUIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMemoryBarrierByRegion");
	if (p) {
		glMemoryBarrierByRegion = (PFNGLMEMORYBARRIERBYREGIONPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTextureSubImage");
	if (p) {
		glGetTextureSubImage = (PFNGLGETTEXTURESUBIMAGEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetCompressedTextureSubImage");
	if (p) {
		glGetCompressedTextureSubImage = (PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetGraphicsResetStatus");
	if (p) {
		glGetGraphicsResetStatus = (PFNGLGETGRAPHICSRESETSTATUSPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnCompressedTexImage");
	if (p) {
		glGetnCompressedTexImage = (PFNGLGETNCOMPRESSEDTEXIMAGEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnTexImage");
	if (p) {
		glGetnTexImage = (PFNGLGETNTEXIMAGEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnUniformdv");
	if (p) {
		glGetnUniformdv = (PFNGLGETNUNIFORMDVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnUniformfv");
	if (p) {
		glGetnUniformfv = (PFNGLGETNUNIFORMFVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnUniformiv");
	if (p) {
		glGetnUniformiv = (PFNGLGETNUNIFORMIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnUniformuiv");
	if (p) {
		glGetnUniformuiv = (PFNGLGETNUNIFORMUIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glReadnPixels");
	if (p) {
		glReadnPixels = (PFNGLREADNPIXELSPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnMapdv");
	if (p) {
		glGetnMapdv = (PFNGLGETNMAPDVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnMapfv");
	if (p) {
		glGetnMapfv = (PFNGLGETNMAPFVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnMapiv");
	if (p) {
		glGetnMapiv = (PFNGLGETNMAPIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnPixelMapfv");
	if (p) {
		glGetnPixelMapfv = (PFNGLGETNPIXELMAPFVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnPixelMapuiv");
	if (p) {
		glGetnPixelMapuiv = (PFNGLGETNPIXELMAPUIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnPixelMapusv");
	if (p) {
		glGetnPixelMapusv = (PFNGLGETNPIXELMAPUSVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnPolygonStipple");
	if (p) {
		glGetnPolygonStipple = (PFNGLGETNPOLYGONSTIPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnColorTable");
	if (p) {
		glGetnColorTable = (PFNGLGETNCOLORTABLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnConvolutionFilter");
	if (p) {
		glGetnConvolutionFilter = (PFNGLGETNCONVOLUTIONFILTERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnSeparableFilter");
	if (p) {
		glGetnSeparableFilter = (PFNGLGETNSEPARABLEFILTERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnHistogram");
	if (p) {
		glGetnHistogram = (PFNGLGETNHISTOGRAMPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnMinmax");
	if (p) {
		glGetnMinmax = (PFNGLGETNMINMAXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureBarrier");
	if (p) {
		glTextureBarrier = (PFNGLTEXTUREBARRIERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPrimitiveBoundingBoxARB");
	if (p) {
		glPrimitiveBoundingBoxARB = (PFNGLPRIMITIVEBOUNDINGBOXARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTextureHandleARB");
	if (p) {
		glGetTextureHandleARB = (PFNGLGETTEXTUREHANDLEARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTextureSamplerHandleARB");
	if (p) {
		glGetTextureSamplerHandleARB = (PFNGLGETTEXTURESAMPLERHANDLEARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMakeTextureHandleResidentARB");
	if (p) {
		glMakeTextureHandleResidentARB = (PFNGLMAKETEXTUREHANDLERESIDENTARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMakeTextureHandleNonResidentARB");
	if (p) {
		glMakeTextureHandleNonResidentARB = (PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetImageHandleARB");
	if (p) {
		glGetImageHandleARB = (PFNGLGETIMAGEHANDLEARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMakeImageHandleResidentARB");
	if (p) {
		glMakeImageHandleResidentARB = (PFNGLMAKEIMAGEHANDLERESIDENTARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMakeImageHandleNonResidentARB");
	if (p) {
		glMakeImageHandleNonResidentARB = (PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniformHandleui64ARB");
	if (p) {
		glUniformHandleui64ARB = (PFNGLUNIFORMHANDLEUI64ARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniformHandleui64vARB");
	if (p) {
		glUniformHandleui64vARB = (PFNGLUNIFORMHANDLEUI64VARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformHandleui64ARB");
	if (p) {
		glProgramUniformHandleui64ARB = (PFNGLPROGRAMUNIFORMHANDLEUI64ARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformHandleui64vARB");
	if (p) {
		glProgramUniformHandleui64vARB = (PFNGLPROGRAMUNIFORMHANDLEUI64VARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsTextureHandleResidentARB");
	if (p) {
		glIsTextureHandleResidentARB = (PFNGLISTEXTUREHANDLERESIDENTARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsImageHandleResidentARB");
	if (p) {
		glIsImageHandleResidentARB = (PFNGLISIMAGEHANDLERESIDENTARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribL1ui64ARB");
	if (p) {
		glVertexAttribL1ui64ARB = (PFNGLVERTEXATTRIBL1UI64ARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribL1ui64vARB");
	if (p) {
		glVertexAttribL1ui64vARB = (PFNGLVERTEXATTRIBL1UI64VARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVertexAttribLui64vARB");
	if (p) {
		glGetVertexAttribLui64vARB = (PFNGLGETVERTEXATTRIBLUI64VARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCreateSyncFromCLeventARB");
	if (p) {
		glCreateSyncFromCLeventARB = (PFNGLCREATESYNCFROMCLEVENTARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glClampColorARB");
	if (p) {
		glClampColorARB = (PFNGLCLAMPCOLORARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDispatchComputeGroupSizeARB");
	if (p) {
		glDispatchComputeGroupSizeARB = (PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDebugMessageControlARB");
	if (p) {
		glDebugMessageControlARB = (PFNGLDEBUGMESSAGECONTROLARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDebugMessageInsertARB");
	if (p) {
		glDebugMessageInsertARB = (PFNGLDEBUGMESSAGEINSERTARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDebugMessageCallbackARB");
	if (p) {
		glDebugMessageCallbackARB = (PFNGLDEBUGMESSAGECALLBACKARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetDebugMessageLogARB");
	if (p) {
		glGetDebugMessageLogARB = (PFNGLGETDEBUGMESSAGELOGARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDrawBuffersARB");
	if (p) {
		glDrawBuffersARB = (PFNGLDRAWBUFFERSARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBlendEquationiARB");
	if (p) {
		glBlendEquationiARB = (PFNGLBLENDEQUATIONIARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBlendEquationSeparateiARB");
	if (p) {
		glBlendEquationSeparateiARB = (PFNGLBLENDEQUATIONSEPARATEIARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBlendFunciARB");
	if (p) {
		glBlendFunciARB = (PFNGLBLENDFUNCIARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBlendFuncSeparateiARB");
	if (p) {
		glBlendFuncSeparateiARB = (PFNGLBLENDFUNCSEPARATEIARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDrawArraysInstancedARB");
	if (p) {
		glDrawArraysInstancedARB = (PFNGLDRAWARRAYSINSTANCEDARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDrawElementsInstancedARB");
	if (p) {
		glDrawElementsInstancedARB = (PFNGLDRAWELEMENTSINSTANCEDARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramStringARB");
	if (p) {
		glProgramStringARB = (PFNGLPROGRAMSTRINGARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindProgramARB");
	if (p) {
		glBindProgramARB = (PFNGLBINDPROGRAMARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeleteProgramsARB");
	if (p) {
		glDeleteProgramsARB = (PFNGLDELETEPROGRAMSARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGenProgramsARB");
	if (p) {
		glGenProgramsARB = (PFNGLGENPROGRAMSARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramEnvParameter4dARB");
	if (p) {
		glProgramEnvParameter4dARB = (PFNGLPROGRAMENVPARAMETER4DARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramEnvParameter4dvARB");
	if (p) {
		glProgramEnvParameter4dvARB = (PFNGLPROGRAMENVPARAMETER4DVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramEnvParameter4fARB");
	if (p) {
		glProgramEnvParameter4fARB = (PFNGLPROGRAMENVPARAMETER4FARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramEnvParameter4fvARB");
	if (p) {
		glProgramEnvParameter4fvARB = (PFNGLPROGRAMENVPARAMETER4FVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramLocalParameter4dARB");
	if (p) {
		glProgramLocalParameter4dARB = (PFNGLPROGRAMLOCALPARAMETER4DARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramLocalParameter4dvARB");
	if (p) {
		glProgramLocalParameter4dvARB = (PFNGLPROGRAMLOCALPARAMETER4DVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramLocalParameter4fARB");
	if (p) {
		glProgramLocalParameter4fARB = (PFNGLPROGRAMLOCALPARAMETER4FARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramLocalParameter4fvARB");
	if (p) {
		glProgramLocalParameter4fvARB = (PFNGLPROGRAMLOCALPARAMETER4FVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetProgramEnvParameterdvARB");
	if (p) {
		glGetProgramEnvParameterdvARB = (PFNGLGETPROGRAMENVPARAMETERDVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetProgramEnvParameterfvARB");
	if (p) {
		glGetProgramEnvParameterfvARB = (PFNGLGETPROGRAMENVPARAMETERFVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetProgramLocalParameterdvARB");
	if (p) {
		glGetProgramLocalParameterdvARB = (PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetProgramLocalParameterfvARB");
	if (p) {
		glGetProgramLocalParameterfvARB = (PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetProgramivARB");
	if (p) {
		glGetProgramivARB = (PFNGLGETPROGRAMIVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetProgramStringARB");
	if (p) {
		glGetProgramStringARB = (PFNGLGETPROGRAMSTRINGARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsProgramARB");
	if (p) {
		glIsProgramARB = (PFNGLISPROGRAMARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramParameteriARB");
	if (p) {
		glProgramParameteriARB = (PFNGLPROGRAMPARAMETERIARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFramebufferTextureARB");
	if (p) {
		glFramebufferTextureARB = (PFNGLFRAMEBUFFERTEXTUREARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFramebufferTextureLayerARB");
	if (p) {
		glFramebufferTextureLayerARB = (PFNGLFRAMEBUFFERTEXTURELAYERARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFramebufferTextureFaceARB");
	if (p) {
		glFramebufferTextureFaceARB = (PFNGLFRAMEBUFFERTEXTUREFACEARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform1i64ARB");
	if (p) {
		glUniform1i64ARB = (PFNGLUNIFORM1I64ARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform2i64ARB");
	if (p) {
		glUniform2i64ARB = (PFNGLUNIFORM2I64ARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform3i64ARB");
	if (p) {
		glUniform3i64ARB = (PFNGLUNIFORM3I64ARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform4i64ARB");
	if (p) {
		glUniform4i64ARB = (PFNGLUNIFORM4I64ARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform1i64vARB");
	if (p) {
		glUniform1i64vARB = (PFNGLUNIFORM1I64VARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform2i64vARB");
	if (p) {
		glUniform2i64vARB = (PFNGLUNIFORM2I64VARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform3i64vARB");
	if (p) {
		glUniform3i64vARB = (PFNGLUNIFORM3I64VARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform4i64vARB");
	if (p) {
		glUniform4i64vARB = (PFNGLUNIFORM4I64VARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform1ui64ARB");
	if (p) {
		glUniform1ui64ARB = (PFNGLUNIFORM1UI64ARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform2ui64ARB");
	if (p) {
		glUniform2ui64ARB = (PFNGLUNIFORM2UI64ARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform3ui64ARB");
	if (p) {
		glUniform3ui64ARB = (PFNGLUNIFORM3UI64ARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform4ui64ARB");
	if (p) {
		glUniform4ui64ARB = (PFNGLUNIFORM4UI64ARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform1ui64vARB");
	if (p) {
		glUniform1ui64vARB = (PFNGLUNIFORM1UI64VARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform2ui64vARB");
	if (p) {
		glUniform2ui64vARB = (PFNGLUNIFORM2UI64VARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform3ui64vARB");
	if (p) {
		glUniform3ui64vARB = (PFNGLUNIFORM3UI64VARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform4ui64vARB");
	if (p) {
		glUniform4ui64vARB = (PFNGLUNIFORM4UI64VARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetUniformi64vARB");
	if (p) {
		glGetUniformi64vARB = (PFNGLGETUNIFORMI64VARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetUniformui64vARB");
	if (p) {
		glGetUniformui64vARB = (PFNGLGETUNIFORMUI64VARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnUniformi64vARB");
	if (p) {
		glGetnUniformi64vARB = (PFNGLGETNUNIFORMI64VARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnUniformui64vARB");
	if (p) {
		glGetnUniformui64vARB = (PFNGLGETNUNIFORMUI64VARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform1i64ARB");
	if (p) {
		glProgramUniform1i64ARB = (PFNGLPROGRAMUNIFORM1I64ARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform2i64ARB");
	if (p) {
		glProgramUniform2i64ARB = (PFNGLPROGRAMUNIFORM2I64ARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform3i64ARB");
	if (p) {
		glProgramUniform3i64ARB = (PFNGLPROGRAMUNIFORM3I64ARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform4i64ARB");
	if (p) {
		glProgramUniform4i64ARB = (PFNGLPROGRAMUNIFORM4I64ARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform1i64vARB");
	if (p) {
		glProgramUniform1i64vARB = (PFNGLPROGRAMUNIFORM1I64VARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform2i64vARB");
	if (p) {
		glProgramUniform2i64vARB = (PFNGLPROGRAMUNIFORM2I64VARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform3i64vARB");
	if (p) {
		glProgramUniform3i64vARB = (PFNGLPROGRAMUNIFORM3I64VARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform4i64vARB");
	if (p) {
		glProgramUniform4i64vARB = (PFNGLPROGRAMUNIFORM4I64VARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform1ui64ARB");
	if (p) {
		glProgramUniform1ui64ARB = (PFNGLPROGRAMUNIFORM1UI64ARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform2ui64ARB");
	if (p) {
		glProgramUniform2ui64ARB = (PFNGLPROGRAMUNIFORM2UI64ARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform3ui64ARB");
	if (p) {
		glProgramUniform3ui64ARB = (PFNGLPROGRAMUNIFORM3UI64ARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform4ui64ARB");
	if (p) {
		glProgramUniform4ui64ARB = (PFNGLPROGRAMUNIFORM4UI64ARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform1ui64vARB");
	if (p) {
		glProgramUniform1ui64vARB = (PFNGLPROGRAMUNIFORM1UI64VARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform2ui64vARB");
	if (p) {
		glProgramUniform2ui64vARB = (PFNGLPROGRAMUNIFORM2UI64VARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform3ui64vARB");
	if (p) {
		glProgramUniform3ui64vARB = (PFNGLPROGRAMUNIFORM3UI64VARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform4ui64vARB");
	if (p) {
		glProgramUniform4ui64vARB = (PFNGLPROGRAMUNIFORM4UI64VARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColorTable");
	if (p) {
		glColorTable = (PFNGLCOLORTABLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColorTableParameterfv");
	if (p) {
		glColorTableParameterfv = (PFNGLCOLORTABLEPARAMETERFVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColorTableParameteriv");
	if (p) {
		glColorTableParameteriv = (PFNGLCOLORTABLEPARAMETERIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCopyColorTable");
	if (p) {
		glCopyColorTable = (PFNGLCOPYCOLORTABLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetColorTable");
	if (p) {
		glGetColorTable = (PFNGLGETCOLORTABLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetColorTableParameterfv");
	if (p) {
		glGetColorTableParameterfv = (PFNGLGETCOLORTABLEPARAMETERFVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetColorTableParameteriv");
	if (p) {
		glGetColorTableParameteriv = (PFNGLGETCOLORTABLEPARAMETERIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColorSubTable");
	if (p) {
		glColorSubTable = (PFNGLCOLORSUBTABLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCopyColorSubTable");
	if (p) {
		glCopyColorSubTable = (PFNGLCOPYCOLORSUBTABLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glConvolutionFilter1D");
	if (p) {
		glConvolutionFilter1D = (PFNGLCONVOLUTIONFILTER1DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glConvolutionFilter2D");
	if (p) {
		glConvolutionFilter2D = (PFNGLCONVOLUTIONFILTER2DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glConvolutionParameterf");
	if (p) {
		glConvolutionParameterf = (PFNGLCONVOLUTIONPARAMETERFPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glConvolutionParameterfv");
	if (p) {
		glConvolutionParameterfv = (PFNGLCONVOLUTIONPARAMETERFVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glConvolutionParameteri");
	if (p) {
		glConvolutionParameteri = (PFNGLCONVOLUTIONPARAMETERIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glConvolutionParameteriv");
	if (p) {
		glConvolutionParameteriv = (PFNGLCONVOLUTIONPARAMETERIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCopyConvolutionFilter1D");
	if (p) {
		glCopyConvolutionFilter1D = (PFNGLCOPYCONVOLUTIONFILTER1DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCopyConvolutionFilter2D");
	if (p) {
		glCopyConvolutionFilter2D = (PFNGLCOPYCONVOLUTIONFILTER2DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetConvolutionFilter");
	if (p) {
		glGetConvolutionFilter = (PFNGLGETCONVOLUTIONFILTERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetConvolutionParameterfv");
	if (p) {
		glGetConvolutionParameterfv = (PFNGLGETCONVOLUTIONPARAMETERFVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetConvolutionParameteriv");
	if (p) {
		glGetConvolutionParameteriv = (PFNGLGETCONVOLUTIONPARAMETERIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetSeparableFilter");
	if (p) {
		glGetSeparableFilter = (PFNGLGETSEPARABLEFILTERPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSeparableFilter2D");
	if (p) {
		glSeparableFilter2D = (PFNGLSEPARABLEFILTER2DPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetHistogram");
	if (p) {
		glGetHistogram = (PFNGLGETHISTOGRAMPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetHistogramParameterfv");
	if (p) {
		glGetHistogramParameterfv = (PFNGLGETHISTOGRAMPARAMETERFVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetHistogramParameteriv");
	if (p) {
		glGetHistogramParameteriv = (PFNGLGETHISTOGRAMPARAMETERIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetMinmax");
	if (p) {
		glGetMinmax = (PFNGLGETMINMAXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetMinmaxParameterfv");
	if (p) {
		glGetMinmaxParameterfv = (PFNGLGETMINMAXPARAMETERFVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetMinmaxParameteriv");
	if (p) {
		glGetMinmaxParameteriv = (PFNGLGETMINMAXPARAMETERIVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glHistogram");
	if (p) {
		glHistogram = (PFNGLHISTOGRAMPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMinmax");
	if (p) {
		glMinmax = (PFNGLMINMAXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glResetHistogram");
	if (p) {
		glResetHistogram = (PFNGLRESETHISTOGRAMPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glResetMinmax");
	if (p) {
		glResetMinmax = (PFNGLRESETMINMAXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiDrawArraysIndirectCountARB");
	if (p) {
		glMultiDrawArraysIndirectCountARB = (PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiDrawElementsIndirectCountARB");
	if (p) {
		glMultiDrawElementsIndirectCountARB = (PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribDivisorARB");
	if (p) {
		glVertexAttribDivisorARB = (PFNGLVERTEXATTRIBDIVISORARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCurrentPaletteMatrixARB");
	if (p) {
		glCurrentPaletteMatrixARB = (PFNGLCURRENTPALETTEMATRIXARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMatrixIndexubvARB");
	if (p) {
		glMatrixIndexubvARB = (PFNGLMATRIXINDEXUBVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMatrixIndexusvARB");
	if (p) {
		glMatrixIndexusvARB = (PFNGLMATRIXINDEXUSVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMatrixIndexuivARB");
	if (p) {
		glMatrixIndexuivARB = (PFNGLMATRIXINDEXUIVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMatrixIndexPointerARB");
	if (p) {
		glMatrixIndexPointerARB = (PFNGLMATRIXINDEXPOINTERARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSampleCoverageARB");
	if (p) {
		glSampleCoverageARB = (PFNGLSAMPLECOVERAGEARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glActiveTextureARB");
	if (p) {
		glActiveTextureARB = (PFNGLACTIVETEXTUREARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glClientActiveTextureARB");
	if (p) {
		glClientActiveTextureARB = (PFNGLCLIENTACTIVETEXTUREARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord1dARB");
	if (p) {
		glMultiTexCoord1dARB = (PFNGLMULTITEXCOORD1DARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord1dvARB");
	if (p) {
		glMultiTexCoord1dvARB = (PFNGLMULTITEXCOORD1DVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord1fARB");
	if (p) {
		glMultiTexCoord1fARB = (PFNGLMULTITEXCOORD1FARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord1fvARB");
	if (p) {
		glMultiTexCoord1fvARB = (PFNGLMULTITEXCOORD1FVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord1iARB");
	if (p) {
		glMultiTexCoord1iARB = (PFNGLMULTITEXCOORD1IARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord1ivARB");
	if (p) {
		glMultiTexCoord1ivARB = (PFNGLMULTITEXCOORD1IVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord1sARB");
	if (p) {
		glMultiTexCoord1sARB = (PFNGLMULTITEXCOORD1SARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord1svARB");
	if (p) {
		glMultiTexCoord1svARB = (PFNGLMULTITEXCOORD1SVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord2dARB");
	if (p) {
		glMultiTexCoord2dARB = (PFNGLMULTITEXCOORD2DARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord2dvARB");
	if (p) {
		glMultiTexCoord2dvARB = (PFNGLMULTITEXCOORD2DVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord2fARB");
	if (p) {
		glMultiTexCoord2fARB = (PFNGLMULTITEXCOORD2FARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord2fvARB");
	if (p) {
		glMultiTexCoord2fvARB = (PFNGLMULTITEXCOORD2FVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord2iARB");
	if (p) {
		glMultiTexCoord2iARB = (PFNGLMULTITEXCOORD2IARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord2ivARB");
	if (p) {
		glMultiTexCoord2ivARB = (PFNGLMULTITEXCOORD2IVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord2sARB");
	if (p) {
		glMultiTexCoord2sARB = (PFNGLMULTITEXCOORD2SARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord2svARB");
	if (p) {
		glMultiTexCoord2svARB = (PFNGLMULTITEXCOORD2SVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord3dARB");
	if (p) {
		glMultiTexCoord3dARB = (PFNGLMULTITEXCOORD3DARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord3dvARB");
	if (p) {
		glMultiTexCoord3dvARB = (PFNGLMULTITEXCOORD3DVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord3fARB");
	if (p) {
		glMultiTexCoord3fARB = (PFNGLMULTITEXCOORD3FARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord3fvARB");
	if (p) {
		glMultiTexCoord3fvARB = (PFNGLMULTITEXCOORD3FVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord3iARB");
	if (p) {
		glMultiTexCoord3iARB = (PFNGLMULTITEXCOORD3IARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord3ivARB");
	if (p) {
		glMultiTexCoord3ivARB = (PFNGLMULTITEXCOORD3IVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord3sARB");
	if (p) {
		glMultiTexCoord3sARB = (PFNGLMULTITEXCOORD3SARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord3svARB");
	if (p) {
		glMultiTexCoord3svARB = (PFNGLMULTITEXCOORD3SVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord4dARB");
	if (p) {
		glMultiTexCoord4dARB = (PFNGLMULTITEXCOORD4DARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord4dvARB");
	if (p) {
		glMultiTexCoord4dvARB = (PFNGLMULTITEXCOORD4DVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord4fARB");
	if (p) {
		glMultiTexCoord4fARB = (PFNGLMULTITEXCOORD4FARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord4fvARB");
	if (p) {
		glMultiTexCoord4fvARB = (PFNGLMULTITEXCOORD4FVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord4iARB");
	if (p) {
		glMultiTexCoord4iARB = (PFNGLMULTITEXCOORD4IARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord4ivARB");
	if (p) {
		glMultiTexCoord4ivARB = (PFNGLMULTITEXCOORD4IVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord4sARB");
	if (p) {
		glMultiTexCoord4sARB = (PFNGLMULTITEXCOORD4SARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord4svARB");
	if (p) {
		glMultiTexCoord4svARB = (PFNGLMULTITEXCOORD4SVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGenQueriesARB");
	if (p) {
		glGenQueriesARB = (PFNGLGENQUERIESARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeleteQueriesARB");
	if (p) {
		glDeleteQueriesARB = (PFNGLDELETEQUERIESARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsQueryARB");
	if (p) {
		glIsQueryARB = (PFNGLISQUERYARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBeginQueryARB");
	if (p) {
		glBeginQueryARB = (PFNGLBEGINQUERYARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEndQueryARB");
	if (p) {
		glEndQueryARB = (PFNGLENDQUERYARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetQueryivARB");
	if (p) {
		glGetQueryivARB = (PFNGLGETQUERYIVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetQueryObjectivARB");
	if (p) {
		glGetQueryObjectivARB = (PFNGLGETQUERYOBJECTIVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetQueryObjectuivARB");
	if (p) {
		glGetQueryObjectuivARB = (PFNGLGETQUERYOBJECTUIVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMaxShaderCompilerThreadsARB");
	if (p) {
		glMaxShaderCompilerThreadsARB = (PFNGLMAXSHADERCOMPILERTHREADSARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPointParameterfARB");
	if (p) {
		glPointParameterfARB = (PFNGLPOINTPARAMETERFARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPointParameterfvARB");
	if (p) {
		glPointParameterfvARB = (PFNGLPOINTPARAMETERFVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetGraphicsResetStatusARB");
	if (p) {
		glGetGraphicsResetStatusARB = (PFNGLGETGRAPHICSRESETSTATUSARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnTexImageARB");
	if (p) {
		glGetnTexImageARB = (PFNGLGETNTEXIMAGEARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glReadnPixelsARB");
	if (p) {
		glReadnPixelsARB = (PFNGLREADNPIXELSARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnCompressedTexImageARB");
	if (p) {
		glGetnCompressedTexImageARB = (PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnUniformfvARB");
	if (p) {
		glGetnUniformfvARB = (PFNGLGETNUNIFORMFVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnUniformivARB");
	if (p) {
		glGetnUniformivARB = (PFNGLGETNUNIFORMIVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnUniformuivARB");
	if (p) {
		glGetnUniformuivARB = (PFNGLGETNUNIFORMUIVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnUniformdvARB");
	if (p) {
		glGetnUniformdvARB = (PFNGLGETNUNIFORMDVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnMapdvARB");
	if (p) {
		glGetnMapdvARB = (PFNGLGETNMAPDVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnMapfvARB");
	if (p) {
		glGetnMapfvARB = (PFNGLGETNMAPFVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnMapivARB");
	if (p) {
		glGetnMapivARB = (PFNGLGETNMAPIVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnPixelMapfvARB");
	if (p) {
		glGetnPixelMapfvARB = (PFNGLGETNPIXELMAPFVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnPixelMapuivARB");
	if (p) {
		glGetnPixelMapuivARB = (PFNGLGETNPIXELMAPUIVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnPixelMapusvARB");
	if (p) {
		glGetnPixelMapusvARB = (PFNGLGETNPIXELMAPUSVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnPolygonStippleARB");
	if (p) {
		glGetnPolygonStippleARB = (PFNGLGETNPOLYGONSTIPPLEARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnColorTableARB");
	if (p) {
		glGetnColorTableARB = (PFNGLGETNCOLORTABLEARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnConvolutionFilterARB");
	if (p) {
		glGetnConvolutionFilterARB = (PFNGLGETNCONVOLUTIONFILTERARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnSeparableFilterARB");
	if (p) {
		glGetnSeparableFilterARB = (PFNGLGETNSEPARABLEFILTERARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnHistogramARB");
	if (p) {
		glGetnHistogramARB = (PFNGLGETNHISTOGRAMARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetnMinmaxARB");
	if (p) {
		glGetnMinmaxARB = (PFNGLGETNMINMAXARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFramebufferSampleLocationsfvARB");
	if (p) {
		glFramebufferSampleLocationsfvARB = (PFNGLFRAMEBUFFERSAMPLELOCATIONSFVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedFramebufferSampleLocationsfvARB");
	if (p) {
		glNamedFramebufferSampleLocationsfvARB = (PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEvaluateDepthValuesARB");
	if (p) {
		glEvaluateDepthValuesARB = (PFNGLEVALUATEDEPTHVALUESARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMinSampleShadingARB");
	if (p) {
		glMinSampleShadingARB = (PFNGLMINSAMPLESHADINGARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeleteObjectARB");
	if (p) {
		glDeleteObjectARB = (PFNGLDELETEOBJECTARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetHandleARB");
	if (p) {
		glGetHandleARB = (PFNGLGETHANDLEARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDetachObjectARB");
	if (p) {
		glDetachObjectARB = (PFNGLDETACHOBJECTARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCreateShaderObjectARB");
	if (p) {
		glCreateShaderObjectARB = (PFNGLCREATESHADEROBJECTARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glShaderSourceARB");
	if (p) {
		glShaderSourceARB = (PFNGLSHADERSOURCEARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCompileShaderARB");
	if (p) {
		glCompileShaderARB = (PFNGLCOMPILESHADERARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCreateProgramObjectARB");
	if (p) {
		glCreateProgramObjectARB = (PFNGLCREATEPROGRAMOBJECTARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glAttachObjectARB");
	if (p) {
		glAttachObjectARB = (PFNGLATTACHOBJECTARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glLinkProgramARB");
	if (p) {
		glLinkProgramARB = (PFNGLLINKPROGRAMARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUseProgramObjectARB");
	if (p) {
		glUseProgramObjectARB = (PFNGLUSEPROGRAMOBJECTARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glValidateProgramARB");
	if (p) {
		glValidateProgramARB = (PFNGLVALIDATEPROGRAMARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform1fARB");
	if (p) {
		glUniform1fARB = (PFNGLUNIFORM1FARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform2fARB");
	if (p) {
		glUniform2fARB = (PFNGLUNIFORM2FARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform3fARB");
	if (p) {
		glUniform3fARB = (PFNGLUNIFORM3FARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform4fARB");
	if (p) {
		glUniform4fARB = (PFNGLUNIFORM4FARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform1iARB");
	if (p) {
		glUniform1iARB = (PFNGLUNIFORM1IARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform2iARB");
	if (p) {
		glUniform2iARB = (PFNGLUNIFORM2IARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform3iARB");
	if (p) {
		glUniform3iARB = (PFNGLUNIFORM3IARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform4iARB");
	if (p) {
		glUniform4iARB = (PFNGLUNIFORM4IARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform1fvARB");
	if (p) {
		glUniform1fvARB = (PFNGLUNIFORM1FVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform2fvARB");
	if (p) {
		glUniform2fvARB = (PFNGLUNIFORM2FVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform3fvARB");
	if (p) {
		glUniform3fvARB = (PFNGLUNIFORM3FVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform4fvARB");
	if (p) {
		glUniform4fvARB = (PFNGLUNIFORM4FVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform1ivARB");
	if (p) {
		glUniform1ivARB = (PFNGLUNIFORM1IVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform2ivARB");
	if (p) {
		glUniform2ivARB = (PFNGLUNIFORM2IVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform3ivARB");
	if (p) {
		glUniform3ivARB = (PFNGLUNIFORM3IVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform4ivARB");
	if (p) {
		glUniform4ivARB = (PFNGLUNIFORM4IVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniformMatrix2fvARB");
	if (p) {
		glUniformMatrix2fvARB = (PFNGLUNIFORMMATRIX2FVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniformMatrix3fvARB");
	if (p) {
		glUniformMatrix3fvARB = (PFNGLUNIFORMMATRIX3FVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniformMatrix4fvARB");
	if (p) {
		glUniformMatrix4fvARB = (PFNGLUNIFORMMATRIX4FVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetObjectParameterfvARB");
	if (p) {
		glGetObjectParameterfvARB = (PFNGLGETOBJECTPARAMETERFVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetObjectParameterivARB");
	if (p) {
		glGetObjectParameterivARB = (PFNGLGETOBJECTPARAMETERIVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetInfoLogARB");
	if (p) {
		glGetInfoLogARB = (PFNGLGETINFOLOGARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetAttachedObjectsARB");
	if (p) {
		glGetAttachedObjectsARB = (PFNGLGETATTACHEDOBJECTSARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetUniformLocationARB");
	if (p) {
		glGetUniformLocationARB = (PFNGLGETUNIFORMLOCATIONARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetActiveUniformARB");
	if (p) {
		glGetActiveUniformARB = (PFNGLGETACTIVEUNIFORMARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetUniformfvARB");
	if (p) {
		glGetUniformfvARB = (PFNGLGETUNIFORMFVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetUniformivARB");
	if (p) {
		glGetUniformivARB = (PFNGLGETUNIFORMIVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetShaderSourceARB");
	if (p) {
		glGetShaderSourceARB = (PFNGLGETSHADERSOURCEARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedStringARB");
	if (p) {
		glNamedStringARB = (PFNGLNAMEDSTRINGARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeleteNamedStringARB");
	if (p) {
		glDeleteNamedStringARB = (PFNGLDELETENAMEDSTRINGARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCompileShaderIncludeARB");
	if (p) {
		glCompileShaderIncludeARB = (PFNGLCOMPILESHADERINCLUDEARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsNamedStringARB");
	if (p) {
		glIsNamedStringARB = (PFNGLISNAMEDSTRINGARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetNamedStringARB");
	if (p) {
		glGetNamedStringARB = (PFNGLGETNAMEDSTRINGARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetNamedStringivARB");
	if (p) {
		glGetNamedStringivARB = (PFNGLGETNAMEDSTRINGIVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBufferPageCommitmentARB");
	if (p) {
		glBufferPageCommitmentARB = (PFNGLBUFFERPAGECOMMITMENTARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedBufferPageCommitmentEXT");
	if (p) {
		glNamedBufferPageCommitmentEXT = (PFNGLNAMEDBUFFERPAGECOMMITMENTEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedBufferPageCommitmentARB");
	if (p) {
		glNamedBufferPageCommitmentARB = (PFNGLNAMEDBUFFERPAGECOMMITMENTARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexPageCommitmentARB");
	if (p) {
		glTexPageCommitmentARB = (PFNGLTEXPAGECOMMITMENTARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexBufferARB");
	if (p) {
		glTexBufferARB = (PFNGLTEXBUFFERARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCompressedTexImage3DARB");
	if (p) {
		glCompressedTexImage3DARB = (PFNGLCOMPRESSEDTEXIMAGE3DARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCompressedTexImage2DARB");
	if (p) {
		glCompressedTexImage2DARB = (PFNGLCOMPRESSEDTEXIMAGE2DARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCompressedTexImage1DARB");
	if (p) {
		glCompressedTexImage1DARB = (PFNGLCOMPRESSEDTEXIMAGE1DARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCompressedTexSubImage3DARB");
	if (p) {
		glCompressedTexSubImage3DARB = (PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCompressedTexSubImage2DARB");
	if (p) {
		glCompressedTexSubImage2DARB = (PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCompressedTexSubImage1DARB");
	if (p) {
		glCompressedTexSubImage1DARB = (PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetCompressedTexImageARB");
	if (p) {
		glGetCompressedTexImageARB = (PFNGLGETCOMPRESSEDTEXIMAGEARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glLoadTransposeMatrixfARB");
	if (p) {
		glLoadTransposeMatrixfARB = (PFNGLLOADTRANSPOSEMATRIXFARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glLoadTransposeMatrixdARB");
	if (p) {
		glLoadTransposeMatrixdARB = (PFNGLLOADTRANSPOSEMATRIXDARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultTransposeMatrixfARB");
	if (p) {
		glMultTransposeMatrixfARB = (PFNGLMULTTRANSPOSEMATRIXFARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultTransposeMatrixdARB");
	if (p) {
		glMultTransposeMatrixdARB = (PFNGLMULTTRANSPOSEMATRIXDARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWeightbvARB");
	if (p) {
		glWeightbvARB = (PFNGLWEIGHTBVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWeightsvARB");
	if (p) {
		glWeightsvARB = (PFNGLWEIGHTSVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWeightivARB");
	if (p) {
		glWeightivARB = (PFNGLWEIGHTIVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWeightfvARB");
	if (p) {
		glWeightfvARB = (PFNGLWEIGHTFVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWeightdvARB");
	if (p) {
		glWeightdvARB = (PFNGLWEIGHTDVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWeightubvARB");
	if (p) {
		glWeightubvARB = (PFNGLWEIGHTUBVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWeightusvARB");
	if (p) {
		glWeightusvARB = (PFNGLWEIGHTUSVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWeightuivARB");
	if (p) {
		glWeightuivARB = (PFNGLWEIGHTUIVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWeightPointerARB");
	if (p) {
		glWeightPointerARB = (PFNGLWEIGHTPOINTERARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexBlendARB");
	if (p) {
		glVertexBlendARB = (PFNGLVERTEXBLENDARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindBufferARB");
	if (p) {
		glBindBufferARB = (PFNGLBINDBUFFERARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeleteBuffersARB");
	if (p) {
		glDeleteBuffersARB = (PFNGLDELETEBUFFERSARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGenBuffersARB");
	if (p) {
		glGenBuffersARB = (PFNGLGENBUFFERSARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsBufferARB");
	if (p) {
		glIsBufferARB = (PFNGLISBUFFERARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBufferDataARB");
	if (p) {
		glBufferDataARB = (PFNGLBUFFERDATAARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBufferSubDataARB");
	if (p) {
		glBufferSubDataARB = (PFNGLBUFFERSUBDATAARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetBufferSubDataARB");
	if (p) {
		glGetBufferSubDataARB = (PFNGLGETBUFFERSUBDATAARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMapBufferARB");
	if (p) {
		glMapBufferARB = (PFNGLMAPBUFFERARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUnmapBufferARB");
	if (p) {
		glUnmapBufferARB = (PFNGLUNMAPBUFFERARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetBufferParameterivARB");
	if (p) {
		glGetBufferParameterivARB = (PFNGLGETBUFFERPARAMETERIVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetBufferPointervARB");
	if (p) {
		glGetBufferPointervARB = (PFNGLGETBUFFERPOINTERVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib1dARB");
	if (p) {
		glVertexAttrib1dARB = (PFNGLVERTEXATTRIB1DARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib1dvARB");
	if (p) {
		glVertexAttrib1dvARB = (PFNGLVERTEXATTRIB1DVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib1fARB");
	if (p) {
		glVertexAttrib1fARB = (PFNGLVERTEXATTRIB1FARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib1fvARB");
	if (p) {
		glVertexAttrib1fvARB = (PFNGLVERTEXATTRIB1FVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib1sARB");
	if (p) {
		glVertexAttrib1sARB = (PFNGLVERTEXATTRIB1SARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib1svARB");
	if (p) {
		glVertexAttrib1svARB = (PFNGLVERTEXATTRIB1SVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib2dARB");
	if (p) {
		glVertexAttrib2dARB = (PFNGLVERTEXATTRIB2DARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib2dvARB");
	if (p) {
		glVertexAttrib2dvARB = (PFNGLVERTEXATTRIB2DVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib2fARB");
	if (p) {
		glVertexAttrib2fARB = (PFNGLVERTEXATTRIB2FARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib2fvARB");
	if (p) {
		glVertexAttrib2fvARB = (PFNGLVERTEXATTRIB2FVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib2sARB");
	if (p) {
		glVertexAttrib2sARB = (PFNGLVERTEXATTRIB2SARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib2svARB");
	if (p) {
		glVertexAttrib2svARB = (PFNGLVERTEXATTRIB2SVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib3dARB");
	if (p) {
		glVertexAttrib3dARB = (PFNGLVERTEXATTRIB3DARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib3dvARB");
	if (p) {
		glVertexAttrib3dvARB = (PFNGLVERTEXATTRIB3DVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib3fARB");
	if (p) {
		glVertexAttrib3fARB = (PFNGLVERTEXATTRIB3FARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib3fvARB");
	if (p) {
		glVertexAttrib3fvARB = (PFNGLVERTEXATTRIB3FVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib3sARB");
	if (p) {
		glVertexAttrib3sARB = (PFNGLVERTEXATTRIB3SARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib3svARB");
	if (p) {
		glVertexAttrib3svARB = (PFNGLVERTEXATTRIB3SVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4NbvARB");
	if (p) {
		glVertexAttrib4NbvARB = (PFNGLVERTEXATTRIB4NBVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4NivARB");
	if (p) {
		glVertexAttrib4NivARB = (PFNGLVERTEXATTRIB4NIVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4NsvARB");
	if (p) {
		glVertexAttrib4NsvARB = (PFNGLVERTEXATTRIB4NSVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4NubARB");
	if (p) {
		glVertexAttrib4NubARB = (PFNGLVERTEXATTRIB4NUBARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4NubvARB");
	if (p) {
		glVertexAttrib4NubvARB = (PFNGLVERTEXATTRIB4NUBVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4NuivARB");
	if (p) {
		glVertexAttrib4NuivARB = (PFNGLVERTEXATTRIB4NUIVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4NusvARB");
	if (p) {
		glVertexAttrib4NusvARB = (PFNGLVERTEXATTRIB4NUSVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4bvARB");
	if (p) {
		glVertexAttrib4bvARB = (PFNGLVERTEXATTRIB4BVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4dARB");
	if (p) {
		glVertexAttrib4dARB = (PFNGLVERTEXATTRIB4DARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4dvARB");
	if (p) {
		glVertexAttrib4dvARB = (PFNGLVERTEXATTRIB4DVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4fARB");
	if (p) {
		glVertexAttrib4fARB = (PFNGLVERTEXATTRIB4FARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4fvARB");
	if (p) {
		glVertexAttrib4fvARB = (PFNGLVERTEXATTRIB4FVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4ivARB");
	if (p) {
		glVertexAttrib4ivARB = (PFNGLVERTEXATTRIB4IVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4sARB");
	if (p) {
		glVertexAttrib4sARB = (PFNGLVERTEXATTRIB4SARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4svARB");
	if (p) {
		glVertexAttrib4svARB = (PFNGLVERTEXATTRIB4SVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4ubvARB");
	if (p) {
		glVertexAttrib4ubvARB = (PFNGLVERTEXATTRIB4UBVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4uivARB");
	if (p) {
		glVertexAttrib4uivARB = (PFNGLVERTEXATTRIB4UIVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4usvARB");
	if (p) {
		glVertexAttrib4usvARB = (PFNGLVERTEXATTRIB4USVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribPointerARB");
	if (p) {
		glVertexAttribPointerARB = (PFNGLVERTEXATTRIBPOINTERARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEnableVertexAttribArrayARB");
	if (p) {
		glEnableVertexAttribArrayARB = (PFNGLENABLEVERTEXATTRIBARRAYARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDisableVertexAttribArrayARB");
	if (p) {
		glDisableVertexAttribArrayARB = (PFNGLDISABLEVERTEXATTRIBARRAYARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVertexAttribdvARB");
	if (p) {
		glGetVertexAttribdvARB = (PFNGLGETVERTEXATTRIBDVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVertexAttribfvARB");
	if (p) {
		glGetVertexAttribfvARB = (PFNGLGETVERTEXATTRIBFVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVertexAttribivARB");
	if (p) {
		glGetVertexAttribivARB = (PFNGLGETVERTEXATTRIBIVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVertexAttribPointervARB");
	if (p) {
		glGetVertexAttribPointervARB = (PFNGLGETVERTEXATTRIBPOINTERVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindAttribLocationARB");
	if (p) {
		glBindAttribLocationARB = (PFNGLBINDATTRIBLOCATIONARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetActiveAttribARB");
	if (p) {
		glGetActiveAttribARB = (PFNGLGETACTIVEATTRIBARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetAttribLocationARB");
	if (p) {
		glGetAttribLocationARB = (PFNGLGETATTRIBLOCATIONARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos2dARB");
	if (p) {
		glWindowPos2dARB = (PFNGLWINDOWPOS2DARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos2dvARB");
	if (p) {
		glWindowPos2dvARB = (PFNGLWINDOWPOS2DVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos2fARB");
	if (p) {
		glWindowPos2fARB = (PFNGLWINDOWPOS2FARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos2fvARB");
	if (p) {
		glWindowPos2fvARB = (PFNGLWINDOWPOS2FVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos2iARB");
	if (p) {
		glWindowPos2iARB = (PFNGLWINDOWPOS2IARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos2ivARB");
	if (p) {
		glWindowPos2ivARB = (PFNGLWINDOWPOS2IVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos2sARB");
	if (p) {
		glWindowPos2sARB = (PFNGLWINDOWPOS2SARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos2svARB");
	if (p) {
		glWindowPos2svARB = (PFNGLWINDOWPOS2SVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos3dARB");
	if (p) {
		glWindowPos3dARB = (PFNGLWINDOWPOS3DARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos3dvARB");
	if (p) {
		glWindowPos3dvARB = (PFNGLWINDOWPOS3DVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos3fARB");
	if (p) {
		glWindowPos3fARB = (PFNGLWINDOWPOS3FARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos3fvARB");
	if (p) {
		glWindowPos3fvARB = (PFNGLWINDOWPOS3FVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos3iARB");
	if (p) {
		glWindowPos3iARB = (PFNGLWINDOWPOS3IARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos3ivARB");
	if (p) {
		glWindowPos3ivARB = (PFNGLWINDOWPOS3IVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos3sARB");
	if (p) {
		glWindowPos3sARB = (PFNGLWINDOWPOS3SARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos3svARB");
	if (p) {
		glWindowPos3svARB = (PFNGLWINDOWPOS3SVARBPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBlendBarrierKHR");
	if (p) {
		glBlendBarrierKHR = (PFNGLBLENDBARRIERKHRPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord1bOES");
	if (p) {
		glMultiTexCoord1bOES = (PFNGLMULTITEXCOORD1BOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord1bvOES");
	if (p) {
		glMultiTexCoord1bvOES = (PFNGLMULTITEXCOORD1BVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord2bOES");
	if (p) {
		glMultiTexCoord2bOES = (PFNGLMULTITEXCOORD2BOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord2bvOES");
	if (p) {
		glMultiTexCoord2bvOES = (PFNGLMULTITEXCOORD2BVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord3bOES");
	if (p) {
		glMultiTexCoord3bOES = (PFNGLMULTITEXCOORD3BOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord3bvOES");
	if (p) {
		glMultiTexCoord3bvOES = (PFNGLMULTITEXCOORD3BVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord4bOES");
	if (p) {
		glMultiTexCoord4bOES = (PFNGLMULTITEXCOORD4BOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord4bvOES");
	if (p) {
		glMultiTexCoord4bvOES = (PFNGLMULTITEXCOORD4BVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord1bOES");
	if (p) {
		glTexCoord1bOES = (PFNGLTEXCOORD1BOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord1bvOES");
	if (p) {
		glTexCoord1bvOES = (PFNGLTEXCOORD1BVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord2bOES");
	if (p) {
		glTexCoord2bOES = (PFNGLTEXCOORD2BOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord2bvOES");
	if (p) {
		glTexCoord2bvOES = (PFNGLTEXCOORD2BVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord3bOES");
	if (p) {
		glTexCoord3bOES = (PFNGLTEXCOORD3BOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord3bvOES");
	if (p) {
		glTexCoord3bvOES = (PFNGLTEXCOORD3BVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord4bOES");
	if (p) {
		glTexCoord4bOES = (PFNGLTEXCOORD4BOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord4bvOES");
	if (p) {
		glTexCoord4bvOES = (PFNGLTEXCOORD4BVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertex2bOES");
	if (p) {
		glVertex2bOES = (PFNGLVERTEX2BOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertex2bvOES");
	if (p) {
		glVertex2bvOES = (PFNGLVERTEX2BVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertex3bOES");
	if (p) {
		glVertex3bOES = (PFNGLVERTEX3BOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertex3bvOES");
	if (p) {
		glVertex3bvOES = (PFNGLVERTEX3BVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertex4bOES");
	if (p) {
		glVertex4bOES = (PFNGLVERTEX4BOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertex4bvOES");
	if (p) {
		glVertex4bvOES = (PFNGLVERTEX4BVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glAlphaFuncxOES");
	if (p) {
		glAlphaFuncxOES = (PFNGLALPHAFUNCXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glClearColorxOES");
	if (p) {
		glClearColorxOES = (PFNGLCLEARCOLORXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glClearDepthxOES");
	if (p) {
		glClearDepthxOES = (PFNGLCLEARDEPTHXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glClipPlanexOES");
	if (p) {
		glClipPlanexOES = (PFNGLCLIPPLANEXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColor4xOES");
	if (p) {
		glColor4xOES = (PFNGLCOLOR4XOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDepthRangexOES");
	if (p) {
		glDepthRangexOES = (PFNGLDEPTHRANGEXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFogxOES");
	if (p) {
		glFogxOES = (PFNGLFOGXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFogxvOES");
	if (p) {
		glFogxvOES = (PFNGLFOGXVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFrustumxOES");
	if (p) {
		glFrustumxOES = (PFNGLFRUSTUMXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetClipPlanexOES");
	if (p) {
		glGetClipPlanexOES = (PFNGLGETCLIPPLANEXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetFixedvOES");
	if (p) {
		glGetFixedvOES = (PFNGLGETFIXEDVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTexEnvxvOES");
	if (p) {
		glGetTexEnvxvOES = (PFNGLGETTEXENVXVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTexParameterxvOES");
	if (p) {
		glGetTexParameterxvOES = (PFNGLGETTEXPARAMETERXVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glLightModelxOES");
	if (p) {
		glLightModelxOES = (PFNGLLIGHTMODELXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glLightModelxvOES");
	if (p) {
		glLightModelxvOES = (PFNGLLIGHTMODELXVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glLightxOES");
	if (p) {
		glLightxOES = (PFNGLLIGHTXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glLightxvOES");
	if (p) {
		glLightxvOES = (PFNGLLIGHTXVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glLineWidthxOES");
	if (p) {
		glLineWidthxOES = (PFNGLLINEWIDTHXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glLoadMatrixxOES");
	if (p) {
		glLoadMatrixxOES = (PFNGLLOADMATRIXXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMaterialxOES");
	if (p) {
		glMaterialxOES = (PFNGLMATERIALXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMaterialxvOES");
	if (p) {
		glMaterialxvOES = (PFNGLMATERIALXVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultMatrixxOES");
	if (p) {
		glMultMatrixxOES = (PFNGLMULTMATRIXXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord4xOES");
	if (p) {
		glMultiTexCoord4xOES = (PFNGLMULTITEXCOORD4XOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNormal3xOES");
	if (p) {
		glNormal3xOES = (PFNGLNORMAL3XOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glOrthoxOES");
	if (p) {
		glOrthoxOES = (PFNGLORTHOXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPointParameterxvOES");
	if (p) {
		glPointParameterxvOES = (PFNGLPOINTPARAMETERXVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPointSizexOES");
	if (p) {
		glPointSizexOES = (PFNGLPOINTSIZEXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPolygonOffsetxOES");
	if (p) {
		glPolygonOffsetxOES = (PFNGLPOLYGONOFFSETXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glRotatexOES");
	if (p) {
		glRotatexOES = (PFNGLROTATEXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glScalexOES");
	if (p) {
		glScalexOES = (PFNGLSCALEXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexEnvxOES");
	if (p) {
		glTexEnvxOES = (PFNGLTEXENVXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexEnvxvOES");
	if (p) {
		glTexEnvxvOES = (PFNGLTEXENVXVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexParameterxOES");
	if (p) {
		glTexParameterxOES = (PFNGLTEXPARAMETERXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexParameterxvOES");
	if (p) {
		glTexParameterxvOES = (PFNGLTEXPARAMETERXVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTranslatexOES");
	if (p) {
		glTranslatexOES = (PFNGLTRANSLATEXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glAccumxOES");
	if (p) {
		glAccumxOES = (PFNGLACCUMXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBitmapxOES");
	if (p) {
		glBitmapxOES = (PFNGLBITMAPXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBlendColorxOES");
	if (p) {
		glBlendColorxOES = (PFNGLBLENDCOLORXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glClearAccumxOES");
	if (p) {
		glClearAccumxOES = (PFNGLCLEARACCUMXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColor3xOES");
	if (p) {
		glColor3xOES = (PFNGLCOLOR3XOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColor3xvOES");
	if (p) {
		glColor3xvOES = (PFNGLCOLOR3XVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColor4xvOES");
	if (p) {
		glColor4xvOES = (PFNGLCOLOR4XVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glConvolutionParameterxOES");
	if (p) {
		glConvolutionParameterxOES = (PFNGLCONVOLUTIONPARAMETERXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glConvolutionParameterxvOES");
	if (p) {
		glConvolutionParameterxvOES = (PFNGLCONVOLUTIONPARAMETERXVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEvalCoord1xOES");
	if (p) {
		glEvalCoord1xOES = (PFNGLEVALCOORD1XOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEvalCoord1xvOES");
	if (p) {
		glEvalCoord1xvOES = (PFNGLEVALCOORD1XVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEvalCoord2xOES");
	if (p) {
		glEvalCoord2xOES = (PFNGLEVALCOORD2XOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEvalCoord2xvOES");
	if (p) {
		glEvalCoord2xvOES = (PFNGLEVALCOORD2XVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFeedbackBufferxOES");
	if (p) {
		glFeedbackBufferxOES = (PFNGLFEEDBACKBUFFERXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetConvolutionParameterxvOES");
	if (p) {
		glGetConvolutionParameterxvOES = (PFNGLGETCONVOLUTIONPARAMETERXVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetHistogramParameterxvOES");
	if (p) {
		glGetHistogramParameterxvOES = (PFNGLGETHISTOGRAMPARAMETERXVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetLightxOES");
	if (p) {
		glGetLightxOES = (PFNGLGETLIGHTXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetMapxvOES");
	if (p) {
		glGetMapxvOES = (PFNGLGETMAPXVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetMaterialxOES");
	if (p) {
		glGetMaterialxOES = (PFNGLGETMATERIALXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetPixelMapxv");
	if (p) {
		glGetPixelMapxv = (PFNGLGETPIXELMAPXVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTexGenxvOES");
	if (p) {
		glGetTexGenxvOES = (PFNGLGETTEXGENXVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTexLevelParameterxvOES");
	if (p) {
		glGetTexLevelParameterxvOES = (PFNGLGETTEXLEVELPARAMETERXVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIndexxOES");
	if (p) {
		glIndexxOES = (PFNGLINDEXXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIndexxvOES");
	if (p) {
		glIndexxvOES = (PFNGLINDEXXVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glLoadTransposeMatrixxOES");
	if (p) {
		glLoadTransposeMatrixxOES = (PFNGLLOADTRANSPOSEMATRIXXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMap1xOES");
	if (p) {
		glMap1xOES = (PFNGLMAP1XOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMap2xOES");
	if (p) {
		glMap2xOES = (PFNGLMAP2XOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMapGrid1xOES");
	if (p) {
		glMapGrid1xOES = (PFNGLMAPGRID1XOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMapGrid2xOES");
	if (p) {
		glMapGrid2xOES = (PFNGLMAPGRID2XOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultTransposeMatrixxOES");
	if (p) {
		glMultTransposeMatrixxOES = (PFNGLMULTTRANSPOSEMATRIXXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord1xOES");
	if (p) {
		glMultiTexCoord1xOES = (PFNGLMULTITEXCOORD1XOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord1xvOES");
	if (p) {
		glMultiTexCoord1xvOES = (PFNGLMULTITEXCOORD1XVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord2xOES");
	if (p) {
		glMultiTexCoord2xOES = (PFNGLMULTITEXCOORD2XOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord2xvOES");
	if (p) {
		glMultiTexCoord2xvOES = (PFNGLMULTITEXCOORD2XVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord3xOES");
	if (p) {
		glMultiTexCoord3xOES = (PFNGLMULTITEXCOORD3XOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord3xvOES");
	if (p) {
		glMultiTexCoord3xvOES = (PFNGLMULTITEXCOORD3XVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord4xvOES");
	if (p) {
		glMultiTexCoord4xvOES = (PFNGLMULTITEXCOORD4XVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNormal3xvOES");
	if (p) {
		glNormal3xvOES = (PFNGLNORMAL3XVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPassThroughxOES");
	if (p) {
		glPassThroughxOES = (PFNGLPASSTHROUGHXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPixelMapx");
	if (p) {
		glPixelMapx = (PFNGLPIXELMAPXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPixelStorex");
	if (p) {
		glPixelStorex = (PFNGLPIXELSTOREXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPixelTransferxOES");
	if (p) {
		glPixelTransferxOES = (PFNGLPIXELTRANSFERXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPixelZoomxOES");
	if (p) {
		glPixelZoomxOES = (PFNGLPIXELZOOMXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPrioritizeTexturesxOES");
	if (p) {
		glPrioritizeTexturesxOES = (PFNGLPRIORITIZETEXTURESXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glRasterPos2xOES");
	if (p) {
		glRasterPos2xOES = (PFNGLRASTERPOS2XOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glRasterPos2xvOES");
	if (p) {
		glRasterPos2xvOES = (PFNGLRASTERPOS2XVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glRasterPos3xOES");
	if (p) {
		glRasterPos3xOES = (PFNGLRASTERPOS3XOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glRasterPos3xvOES");
	if (p) {
		glRasterPos3xvOES = (PFNGLRASTERPOS3XVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glRasterPos4xOES");
	if (p) {
		glRasterPos4xOES = (PFNGLRASTERPOS4XOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glRasterPos4xvOES");
	if (p) {
		glRasterPos4xvOES = (PFNGLRASTERPOS4XVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glRectxOES");
	if (p) {
		glRectxOES = (PFNGLRECTXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glRectxvOES");
	if (p) {
		glRectxvOES = (PFNGLRECTXVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord1xOES");
	if (p) {
		glTexCoord1xOES = (PFNGLTEXCOORD1XOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord1xvOES");
	if (p) {
		glTexCoord1xvOES = (PFNGLTEXCOORD1XVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord2xOES");
	if (p) {
		glTexCoord2xOES = (PFNGLTEXCOORD2XOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord2xvOES");
	if (p) {
		glTexCoord2xvOES = (PFNGLTEXCOORD2XVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord3xOES");
	if (p) {
		glTexCoord3xOES = (PFNGLTEXCOORD3XOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord3xvOES");
	if (p) {
		glTexCoord3xvOES = (PFNGLTEXCOORD3XVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord4xOES");
	if (p) {
		glTexCoord4xOES = (PFNGLTEXCOORD4XOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord4xvOES");
	if (p) {
		glTexCoord4xvOES = (PFNGLTEXCOORD4XVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexGenxOES");
	if (p) {
		glTexGenxOES = (PFNGLTEXGENXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexGenxvOES");
	if (p) {
		glTexGenxvOES = (PFNGLTEXGENXVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertex2xOES");
	if (p) {
		glVertex2xOES = (PFNGLVERTEX2XOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertex2xvOES");
	if (p) {
		glVertex2xvOES = (PFNGLVERTEX2XVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertex3xOES");
	if (p) {
		glVertex3xOES = (PFNGLVERTEX3XOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertex3xvOES");
	if (p) {
		glVertex3xvOES = (PFNGLVERTEX3XVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertex4xOES");
	if (p) {
		glVertex4xOES = (PFNGLVERTEX4XOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertex4xvOES");
	if (p) {
		glVertex4xvOES = (PFNGLVERTEX4XVOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glQueryMatrixxOES");
	if (p) {
		glQueryMatrixxOES = (PFNGLQUERYMATRIXXOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glClearDepthfOES");
	if (p) {
		glClearDepthfOES = (PFNGLCLEARDEPTHFOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glClipPlanefOES");
	if (p) {
		glClipPlanefOES = (PFNGLCLIPPLANEFOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDepthRangefOES");
	if (p) {
		glDepthRangefOES = (PFNGLDEPTHRANGEFOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFrustumfOES");
	if (p) {
		glFrustumfOES = (PFNGLFRUSTUMFOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetClipPlanefOES");
	if (p) {
		glGetClipPlanefOES = (PFNGLGETCLIPPLANEFOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glOrthofOES");
	if (p) {
		glOrthofOES = (PFNGLORTHOFOESPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTbufferMask3DFX");
	if (p) {
		glTbufferMask3DFX = (PFNGLTBUFFERMASK3DFXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDebugMessageEnableAMD");
	if (p) {
		glDebugMessageEnableAMD = (PFNGLDEBUGMESSAGEENABLEAMDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDebugMessageInsertAMD");
	if (p) {
		glDebugMessageInsertAMD = (PFNGLDEBUGMESSAGEINSERTAMDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDebugMessageCallbackAMD");
	if (p) {
		glDebugMessageCallbackAMD = (PFNGLDEBUGMESSAGECALLBACKAMDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetDebugMessageLogAMD");
	if (p) {
		glGetDebugMessageLogAMD = (PFNGLGETDEBUGMESSAGELOGAMDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBlendFuncIndexedAMD");
	if (p) {
		glBlendFuncIndexedAMD = (PFNGLBLENDFUNCINDEXEDAMDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBlendFuncSeparateIndexedAMD");
	if (p) {
		glBlendFuncSeparateIndexedAMD = (PFNGLBLENDFUNCSEPARATEINDEXEDAMDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBlendEquationIndexedAMD");
	if (p) {
		glBlendEquationIndexedAMD = (PFNGLBLENDEQUATIONINDEXEDAMDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBlendEquationSeparateIndexedAMD");
	if (p) {
		glBlendEquationSeparateIndexedAMD = (PFNGLBLENDEQUATIONSEPARATEINDEXEDAMDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform1i64NV");
	if (p) {
		glUniform1i64NV = (PFNGLUNIFORM1I64NVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform2i64NV");
	if (p) {
		glUniform2i64NV = (PFNGLUNIFORM2I64NVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform3i64NV");
	if (p) {
		glUniform3i64NV = (PFNGLUNIFORM3I64NVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform4i64NV");
	if (p) {
		glUniform4i64NV = (PFNGLUNIFORM4I64NVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform1i64vNV");
	if (p) {
		glUniform1i64vNV = (PFNGLUNIFORM1I64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform2i64vNV");
	if (p) {
		glUniform2i64vNV = (PFNGLUNIFORM2I64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform3i64vNV");
	if (p) {
		glUniform3i64vNV = (PFNGLUNIFORM3I64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform4i64vNV");
	if (p) {
		glUniform4i64vNV = (PFNGLUNIFORM4I64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform1ui64NV");
	if (p) {
		glUniform1ui64NV = (PFNGLUNIFORM1UI64NVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform2ui64NV");
	if (p) {
		glUniform2ui64NV = (PFNGLUNIFORM2UI64NVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform3ui64NV");
	if (p) {
		glUniform3ui64NV = (PFNGLUNIFORM3UI64NVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform4ui64NV");
	if (p) {
		glUniform4ui64NV = (PFNGLUNIFORM4UI64NVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform1ui64vNV");
	if (p) {
		glUniform1ui64vNV = (PFNGLUNIFORM1UI64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform2ui64vNV");
	if (p) {
		glUniform2ui64vNV = (PFNGLUNIFORM2UI64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform3ui64vNV");
	if (p) {
		glUniform3ui64vNV = (PFNGLUNIFORM3UI64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform4ui64vNV");
	if (p) {
		glUniform4ui64vNV = (PFNGLUNIFORM4UI64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetUniformi64vNV");
	if (p) {
		glGetUniformi64vNV = (PFNGLGETUNIFORMI64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetUniformui64vNV");
	if (p) {
		glGetUniformui64vNV = (PFNGLGETUNIFORMUI64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform1i64NV");
	if (p) {
		glProgramUniform1i64NV = (PFNGLPROGRAMUNIFORM1I64NVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform2i64NV");
	if (p) {
		glProgramUniform2i64NV = (PFNGLPROGRAMUNIFORM2I64NVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform3i64NV");
	if (p) {
		glProgramUniform3i64NV = (PFNGLPROGRAMUNIFORM3I64NVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform4i64NV");
	if (p) {
		glProgramUniform4i64NV = (PFNGLPROGRAMUNIFORM4I64NVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform1i64vNV");
	if (p) {
		glProgramUniform1i64vNV = (PFNGLPROGRAMUNIFORM1I64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform2i64vNV");
	if (p) {
		glProgramUniform2i64vNV = (PFNGLPROGRAMUNIFORM2I64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform3i64vNV");
	if (p) {
		glProgramUniform3i64vNV = (PFNGLPROGRAMUNIFORM3I64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform4i64vNV");
	if (p) {
		glProgramUniform4i64vNV = (PFNGLPROGRAMUNIFORM4I64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform1ui64NV");
	if (p) {
		glProgramUniform1ui64NV = (PFNGLPROGRAMUNIFORM1UI64NVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform2ui64NV");
	if (p) {
		glProgramUniform2ui64NV = (PFNGLPROGRAMUNIFORM2UI64NVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform3ui64NV");
	if (p) {
		glProgramUniform3ui64NV = (PFNGLPROGRAMUNIFORM3UI64NVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform4ui64NV");
	if (p) {
		glProgramUniform4ui64NV = (PFNGLPROGRAMUNIFORM4UI64NVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform1ui64vNV");
	if (p) {
		glProgramUniform1ui64vNV = (PFNGLPROGRAMUNIFORM1UI64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform2ui64vNV");
	if (p) {
		glProgramUniform2ui64vNV = (PFNGLPROGRAMUNIFORM2UI64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform3ui64vNV");
	if (p) {
		glProgramUniform3ui64vNV = (PFNGLPROGRAMUNIFORM3UI64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform4ui64vNV");
	if (p) {
		glProgramUniform4ui64vNV = (PFNGLPROGRAMUNIFORM4UI64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribParameteriAMD");
	if (p) {
		glVertexAttribParameteriAMD = (PFNGLVERTEXATTRIBPARAMETERIAMDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiDrawArraysIndirectAMD");
	if (p) {
		glMultiDrawArraysIndirectAMD = (PFNGLMULTIDRAWARRAYSINDIRECTAMDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiDrawElementsIndirectAMD");
	if (p) {
		glMultiDrawElementsIndirectAMD = (PFNGLMULTIDRAWELEMENTSINDIRECTAMDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGenNamesAMD");
	if (p) {
		glGenNamesAMD = (PFNGLGENNAMESAMDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeleteNamesAMD");
	if (p) {
		glDeleteNamesAMD = (PFNGLDELETENAMESAMDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsNameAMD");
	if (p) {
		glIsNameAMD = (PFNGLISNAMEAMDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glQueryObjectParameteruiAMD");
	if (p) {
		glQueryObjectParameteruiAMD = (PFNGLQUERYOBJECTPARAMETERUIAMDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetPerfMonitorGroupsAMD");
	if (p) {
		glGetPerfMonitorGroupsAMD = (PFNGLGETPERFMONITORGROUPSAMDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetPerfMonitorCountersAMD");
	if (p) {
		glGetPerfMonitorCountersAMD = (PFNGLGETPERFMONITORCOUNTERSAMDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetPerfMonitorGroupStringAMD");
	if (p) {
		glGetPerfMonitorGroupStringAMD = (PFNGLGETPERFMONITORGROUPSTRINGAMDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetPerfMonitorCounterStringAMD");
	if (p) {
		glGetPerfMonitorCounterStringAMD = (PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetPerfMonitorCounterInfoAMD");
	if (p) {
		glGetPerfMonitorCounterInfoAMD = (PFNGLGETPERFMONITORCOUNTERINFOAMDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGenPerfMonitorsAMD");
	if (p) {
		glGenPerfMonitorsAMD = (PFNGLGENPERFMONITORSAMDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeletePerfMonitorsAMD");
	if (p) {
		glDeletePerfMonitorsAMD = (PFNGLDELETEPERFMONITORSAMDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSelectPerfMonitorCountersAMD");
	if (p) {
		glSelectPerfMonitorCountersAMD = (PFNGLSELECTPERFMONITORCOUNTERSAMDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBeginPerfMonitorAMD");
	if (p) {
		glBeginPerfMonitorAMD = (PFNGLBEGINPERFMONITORAMDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEndPerfMonitorAMD");
	if (p) {
		glEndPerfMonitorAMD = (PFNGLENDPERFMONITORAMDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetPerfMonitorCounterDataAMD");
	if (p) {
		glGetPerfMonitorCounterDataAMD = (PFNGLGETPERFMONITORCOUNTERDATAAMDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSetMultisamplefvAMD");
	if (p) {
		glSetMultisamplefvAMD = (PFNGLSETMULTISAMPLEFVAMDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexStorageSparseAMD");
	if (p) {
		glTexStorageSparseAMD = (PFNGLTEXSTORAGESPARSEAMDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureStorageSparseAMD");
	if (p) {
		glTextureStorageSparseAMD = (PFNGLTEXTURESTORAGESPARSEAMDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glStencilOpValueAMD");
	if (p) {
		glStencilOpValueAMD = (PFNGLSTENCILOPVALUEAMDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTessellationFactorAMD");
	if (p) {
		glTessellationFactorAMD = (PFNGLTESSELLATIONFACTORAMDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTessellationModeAMD");
	if (p) {
		glTessellationModeAMD = (PFNGLTESSELLATIONMODEAMDPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glElementPointerAPPLE");
	if (p) {
		glElementPointerAPPLE = (PFNGLELEMENTPOINTERAPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDrawElementArrayAPPLE");
	if (p) {
		glDrawElementArrayAPPLE = (PFNGLDRAWELEMENTARRAYAPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDrawRangeElementArrayAPPLE");
	if (p) {
		glDrawRangeElementArrayAPPLE = (PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiDrawElementArrayAPPLE");
	if (p) {
		glMultiDrawElementArrayAPPLE = (PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiDrawRangeElementArrayAPPLE");
	if (p) {
		glMultiDrawRangeElementArrayAPPLE = (PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGenFencesAPPLE");
	if (p) {
		glGenFencesAPPLE = (PFNGLGENFENCESAPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeleteFencesAPPLE");
	if (p) {
		glDeleteFencesAPPLE = (PFNGLDELETEFENCESAPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSetFenceAPPLE");
	if (p) {
		glSetFenceAPPLE = (PFNGLSETFENCEAPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsFenceAPPLE");
	if (p) {
		glIsFenceAPPLE = (PFNGLISFENCEAPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTestFenceAPPLE");
	if (p) {
		glTestFenceAPPLE = (PFNGLTESTFENCEAPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFinishFenceAPPLE");
	if (p) {
		glFinishFenceAPPLE = (PFNGLFINISHFENCEAPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTestObjectAPPLE");
	if (p) {
		glTestObjectAPPLE = (PFNGLTESTOBJECTAPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFinishObjectAPPLE");
	if (p) {
		glFinishObjectAPPLE = (PFNGLFINISHOBJECTAPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBufferParameteriAPPLE");
	if (p) {
		glBufferParameteriAPPLE = (PFNGLBUFFERPARAMETERIAPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFlushMappedBufferRangeAPPLE");
	if (p) {
		glFlushMappedBufferRangeAPPLE = (PFNGLFLUSHMAPPEDBUFFERRANGEAPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glObjectPurgeableAPPLE");
	if (p) {
		glObjectPurgeableAPPLE = (PFNGLOBJECTPURGEABLEAPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glObjectUnpurgeableAPPLE");
	if (p) {
		glObjectUnpurgeableAPPLE = (PFNGLOBJECTUNPURGEABLEAPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetObjectParameterivAPPLE");
	if (p) {
		glGetObjectParameterivAPPLE = (PFNGLGETOBJECTPARAMETERIVAPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureRangeAPPLE");
	if (p) {
		glTextureRangeAPPLE = (PFNGLTEXTURERANGEAPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTexParameterPointervAPPLE");
	if (p) {
		glGetTexParameterPointervAPPLE = (PFNGLGETTEXPARAMETERPOINTERVAPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindVertexArrayAPPLE");
	if (p) {
		glBindVertexArrayAPPLE = (PFNGLBINDVERTEXARRAYAPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeleteVertexArraysAPPLE");
	if (p) {
		glDeleteVertexArraysAPPLE = (PFNGLDELETEVERTEXARRAYSAPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGenVertexArraysAPPLE");
	if (p) {
		glGenVertexArraysAPPLE = (PFNGLGENVERTEXARRAYSAPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsVertexArrayAPPLE");
	if (p) {
		glIsVertexArrayAPPLE = (PFNGLISVERTEXARRAYAPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexArrayRangeAPPLE");
	if (p) {
		glVertexArrayRangeAPPLE = (PFNGLVERTEXARRAYRANGEAPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFlushVertexArrayRangeAPPLE");
	if (p) {
		glFlushVertexArrayRangeAPPLE = (PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexArrayParameteriAPPLE");
	if (p) {
		glVertexArrayParameteriAPPLE = (PFNGLVERTEXARRAYPARAMETERIAPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEnableVertexAttribAPPLE");
	if (p) {
		glEnableVertexAttribAPPLE = (PFNGLENABLEVERTEXATTRIBAPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDisableVertexAttribAPPLE");
	if (p) {
		glDisableVertexAttribAPPLE = (PFNGLDISABLEVERTEXATTRIBAPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsVertexAttribEnabledAPPLE");
	if (p) {
		glIsVertexAttribEnabledAPPLE = (PFNGLISVERTEXATTRIBENABLEDAPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMapVertexAttrib1dAPPLE");
	if (p) {
		glMapVertexAttrib1dAPPLE = (PFNGLMAPVERTEXATTRIB1DAPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMapVertexAttrib1fAPPLE");
	if (p) {
		glMapVertexAttrib1fAPPLE = (PFNGLMAPVERTEXATTRIB1FAPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMapVertexAttrib2dAPPLE");
	if (p) {
		glMapVertexAttrib2dAPPLE = (PFNGLMAPVERTEXATTRIB2DAPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMapVertexAttrib2fAPPLE");
	if (p) {
		glMapVertexAttrib2fAPPLE = (PFNGLMAPVERTEXATTRIB2FAPPLEPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDrawBuffersATI");
	if (p) {
		glDrawBuffersATI = (PFNGLDRAWBUFFERSATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glElementPointerATI");
	if (p) {
		glElementPointerATI = (PFNGLELEMENTPOINTERATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDrawElementArrayATI");
	if (p) {
		glDrawElementArrayATI = (PFNGLDRAWELEMENTARRAYATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDrawRangeElementArrayATI");
	if (p) {
		glDrawRangeElementArrayATI = (PFNGLDRAWRANGEELEMENTARRAYATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexBumpParameterivATI");
	if (p) {
		glTexBumpParameterivATI = (PFNGLTEXBUMPPARAMETERIVATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexBumpParameterfvATI");
	if (p) {
		glTexBumpParameterfvATI = (PFNGLTEXBUMPPARAMETERFVATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTexBumpParameterivATI");
	if (p) {
		glGetTexBumpParameterivATI = (PFNGLGETTEXBUMPPARAMETERIVATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTexBumpParameterfvATI");
	if (p) {
		glGetTexBumpParameterfvATI = (PFNGLGETTEXBUMPPARAMETERFVATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGenFragmentShadersATI");
	if (p) {
		glGenFragmentShadersATI = (PFNGLGENFRAGMENTSHADERSATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindFragmentShaderATI");
	if (p) {
		glBindFragmentShaderATI = (PFNGLBINDFRAGMENTSHADERATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeleteFragmentShaderATI");
	if (p) {
		glDeleteFragmentShaderATI = (PFNGLDELETEFRAGMENTSHADERATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBeginFragmentShaderATI");
	if (p) {
		glBeginFragmentShaderATI = (PFNGLBEGINFRAGMENTSHADERATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEndFragmentShaderATI");
	if (p) {
		glEndFragmentShaderATI = (PFNGLENDFRAGMENTSHADERATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPassTexCoordATI");
	if (p) {
		glPassTexCoordATI = (PFNGLPASSTEXCOORDATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSampleMapATI");
	if (p) {
		glSampleMapATI = (PFNGLSAMPLEMAPATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColorFragmentOp1ATI");
	if (p) {
		glColorFragmentOp1ATI = (PFNGLCOLORFRAGMENTOP1ATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColorFragmentOp2ATI");
	if (p) {
		glColorFragmentOp2ATI = (PFNGLCOLORFRAGMENTOP2ATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColorFragmentOp3ATI");
	if (p) {
		glColorFragmentOp3ATI = (PFNGLCOLORFRAGMENTOP3ATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glAlphaFragmentOp1ATI");
	if (p) {
		glAlphaFragmentOp1ATI = (PFNGLALPHAFRAGMENTOP1ATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glAlphaFragmentOp2ATI");
	if (p) {
		glAlphaFragmentOp2ATI = (PFNGLALPHAFRAGMENTOP2ATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glAlphaFragmentOp3ATI");
	if (p) {
		glAlphaFragmentOp3ATI = (PFNGLALPHAFRAGMENTOP3ATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSetFragmentShaderConstantATI");
	if (p) {
		glSetFragmentShaderConstantATI = (PFNGLSETFRAGMENTSHADERCONSTANTATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMapObjectBufferATI");
	if (p) {
		glMapObjectBufferATI = (PFNGLMAPOBJECTBUFFERATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUnmapObjectBufferATI");
	if (p) {
		glUnmapObjectBufferATI = (PFNGLUNMAPOBJECTBUFFERATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPNTrianglesiATI");
	if (p) {
		glPNTrianglesiATI = (PFNGLPNTRIANGLESIATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPNTrianglesfATI");
	if (p) {
		glPNTrianglesfATI = (PFNGLPNTRIANGLESFATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glStencilOpSeparateATI");
	if (p) {
		glStencilOpSeparateATI = (PFNGLSTENCILOPSEPARATEATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glStencilFuncSeparateATI");
	if (p) {
		glStencilFuncSeparateATI = (PFNGLSTENCILFUNCSEPARATEATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNewObjectBufferATI");
	if (p) {
		glNewObjectBufferATI = (PFNGLNEWOBJECTBUFFERATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsObjectBufferATI");
	if (p) {
		glIsObjectBufferATI = (PFNGLISOBJECTBUFFERATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUpdateObjectBufferATI");
	if (p) {
		glUpdateObjectBufferATI = (PFNGLUPDATEOBJECTBUFFERATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetObjectBufferfvATI");
	if (p) {
		glGetObjectBufferfvATI = (PFNGLGETOBJECTBUFFERFVATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetObjectBufferivATI");
	if (p) {
		glGetObjectBufferivATI = (PFNGLGETOBJECTBUFFERIVATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFreeObjectBufferATI");
	if (p) {
		glFreeObjectBufferATI = (PFNGLFREEOBJECTBUFFERATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glArrayObjectATI");
	if (p) {
		glArrayObjectATI = (PFNGLARRAYOBJECTATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetArrayObjectfvATI");
	if (p) {
		glGetArrayObjectfvATI = (PFNGLGETARRAYOBJECTFVATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetArrayObjectivATI");
	if (p) {
		glGetArrayObjectivATI = (PFNGLGETARRAYOBJECTIVATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVariantArrayObjectATI");
	if (p) {
		glVariantArrayObjectATI = (PFNGLVARIANTARRAYOBJECTATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVariantArrayObjectfvATI");
	if (p) {
		glGetVariantArrayObjectfvATI = (PFNGLGETVARIANTARRAYOBJECTFVATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVariantArrayObjectivATI");
	if (p) {
		glGetVariantArrayObjectivATI = (PFNGLGETVARIANTARRAYOBJECTIVATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribArrayObjectATI");
	if (p) {
		glVertexAttribArrayObjectATI = (PFNGLVERTEXATTRIBARRAYOBJECTATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVertexAttribArrayObjectfvATI");
	if (p) {
		glGetVertexAttribArrayObjectfvATI = (PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVertexAttribArrayObjectivATI");
	if (p) {
		glGetVertexAttribArrayObjectivATI = (PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexStream1sATI");
	if (p) {
		glVertexStream1sATI = (PFNGLVERTEXSTREAM1SATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexStream1svATI");
	if (p) {
		glVertexStream1svATI = (PFNGLVERTEXSTREAM1SVATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexStream1iATI");
	if (p) {
		glVertexStream1iATI = (PFNGLVERTEXSTREAM1IATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexStream1ivATI");
	if (p) {
		glVertexStream1ivATI = (PFNGLVERTEXSTREAM1IVATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexStream1fATI");
	if (p) {
		glVertexStream1fATI = (PFNGLVERTEXSTREAM1FATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexStream1fvATI");
	if (p) {
		glVertexStream1fvATI = (PFNGLVERTEXSTREAM1FVATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexStream1dATI");
	if (p) {
		glVertexStream1dATI = (PFNGLVERTEXSTREAM1DATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexStream1dvATI");
	if (p) {
		glVertexStream1dvATI = (PFNGLVERTEXSTREAM1DVATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexStream2sATI");
	if (p) {
		glVertexStream2sATI = (PFNGLVERTEXSTREAM2SATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexStream2svATI");
	if (p) {
		glVertexStream2svATI = (PFNGLVERTEXSTREAM2SVATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexStream2iATI");
	if (p) {
		glVertexStream2iATI = (PFNGLVERTEXSTREAM2IATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexStream2ivATI");
	if (p) {
		glVertexStream2ivATI = (PFNGLVERTEXSTREAM2IVATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexStream2fATI");
	if (p) {
		glVertexStream2fATI = (PFNGLVERTEXSTREAM2FATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexStream2fvATI");
	if (p) {
		glVertexStream2fvATI = (PFNGLVERTEXSTREAM2FVATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexStream2dATI");
	if (p) {
		glVertexStream2dATI = (PFNGLVERTEXSTREAM2DATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexStream2dvATI");
	if (p) {
		glVertexStream2dvATI = (PFNGLVERTEXSTREAM2DVATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexStream3sATI");
	if (p) {
		glVertexStream3sATI = (PFNGLVERTEXSTREAM3SATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexStream3svATI");
	if (p) {
		glVertexStream3svATI = (PFNGLVERTEXSTREAM3SVATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexStream3iATI");
	if (p) {
		glVertexStream3iATI = (PFNGLVERTEXSTREAM3IATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexStream3ivATI");
	if (p) {
		glVertexStream3ivATI = (PFNGLVERTEXSTREAM3IVATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexStream3fATI");
	if (p) {
		glVertexStream3fATI = (PFNGLVERTEXSTREAM3FATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexStream3fvATI");
	if (p) {
		glVertexStream3fvATI = (PFNGLVERTEXSTREAM3FVATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexStream3dATI");
	if (p) {
		glVertexStream3dATI = (PFNGLVERTEXSTREAM3DATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexStream3dvATI");
	if (p) {
		glVertexStream3dvATI = (PFNGLVERTEXSTREAM3DVATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexStream4sATI");
	if (p) {
		glVertexStream4sATI = (PFNGLVERTEXSTREAM4SATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexStream4svATI");
	if (p) {
		glVertexStream4svATI = (PFNGLVERTEXSTREAM4SVATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexStream4iATI");
	if (p) {
		glVertexStream4iATI = (PFNGLVERTEXSTREAM4IATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexStream4ivATI");
	if (p) {
		glVertexStream4ivATI = (PFNGLVERTEXSTREAM4IVATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexStream4fATI");
	if (p) {
		glVertexStream4fATI = (PFNGLVERTEXSTREAM4FATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexStream4fvATI");
	if (p) {
		glVertexStream4fvATI = (PFNGLVERTEXSTREAM4FVATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexStream4dATI");
	if (p) {
		glVertexStream4dATI = (PFNGLVERTEXSTREAM4DATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexStream4dvATI");
	if (p) {
		glVertexStream4dvATI = (PFNGLVERTEXSTREAM4DVATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNormalStream3bATI");
	if (p) {
		glNormalStream3bATI = (PFNGLNORMALSTREAM3BATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNormalStream3bvATI");
	if (p) {
		glNormalStream3bvATI = (PFNGLNORMALSTREAM3BVATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNormalStream3sATI");
	if (p) {
		glNormalStream3sATI = (PFNGLNORMALSTREAM3SATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNormalStream3svATI");
	if (p) {
		glNormalStream3svATI = (PFNGLNORMALSTREAM3SVATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNormalStream3iATI");
	if (p) {
		glNormalStream3iATI = (PFNGLNORMALSTREAM3IATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNormalStream3ivATI");
	if (p) {
		glNormalStream3ivATI = (PFNGLNORMALSTREAM3IVATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNormalStream3fATI");
	if (p) {
		glNormalStream3fATI = (PFNGLNORMALSTREAM3FATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNormalStream3fvATI");
	if (p) {
		glNormalStream3fvATI = (PFNGLNORMALSTREAM3FVATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNormalStream3dATI");
	if (p) {
		glNormalStream3dATI = (PFNGLNORMALSTREAM3DATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNormalStream3dvATI");
	if (p) {
		glNormalStream3dvATI = (PFNGLNORMALSTREAM3DVATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glClientActiveVertexStreamATI");
	if (p) {
		glClientActiveVertexStreamATI = (PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexBlendEnviATI");
	if (p) {
		glVertexBlendEnviATI = (PFNGLVERTEXBLENDENVIATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexBlendEnvfATI");
	if (p) {
		glVertexBlendEnvfATI = (PFNGLVERTEXBLENDENVFATIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniformBufferEXT");
	if (p) {
		glUniformBufferEXT = (PFNGLUNIFORMBUFFEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetUniformBufferSizeEXT");
	if (p) {
		glGetUniformBufferSizeEXT = (PFNGLGETUNIFORMBUFFERSIZEEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetUniformOffsetEXT");
	if (p) {
		glGetUniformOffsetEXT = (PFNGLGETUNIFORMOFFSETEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBlendColorEXT");
	if (p) {
		glBlendColorEXT = (PFNGLBLENDCOLOREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBlendEquationSeparateEXT");
	if (p) {
		glBlendEquationSeparateEXT = (PFNGLBLENDEQUATIONSEPARATEEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBlendFuncSeparateEXT");
	if (p) {
		glBlendFuncSeparateEXT = (PFNGLBLENDFUNCSEPARATEEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBlendEquationEXT");
	if (p) {
		glBlendEquationEXT = (PFNGLBLENDEQUATIONEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColorSubTableEXT");
	if (p) {
		glColorSubTableEXT = (PFNGLCOLORSUBTABLEEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCopyColorSubTableEXT");
	if (p) {
		glCopyColorSubTableEXT = (PFNGLCOPYCOLORSUBTABLEEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glLockArraysEXT");
	if (p) {
		glLockArraysEXT = (PFNGLLOCKARRAYSEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUnlockArraysEXT");
	if (p) {
		glUnlockArraysEXT = (PFNGLUNLOCKARRAYSEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glConvolutionFilter1DEXT");
	if (p) {
		glConvolutionFilter1DEXT = (PFNGLCONVOLUTIONFILTER1DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glConvolutionFilter2DEXT");
	if (p) {
		glConvolutionFilter2DEXT = (PFNGLCONVOLUTIONFILTER2DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glConvolutionParameterfEXT");
	if (p) {
		glConvolutionParameterfEXT = (PFNGLCONVOLUTIONPARAMETERFEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glConvolutionParameterfvEXT");
	if (p) {
		glConvolutionParameterfvEXT = (PFNGLCONVOLUTIONPARAMETERFVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glConvolutionParameteriEXT");
	if (p) {
		glConvolutionParameteriEXT = (PFNGLCONVOLUTIONPARAMETERIEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glConvolutionParameterivEXT");
	if (p) {
		glConvolutionParameterivEXT = (PFNGLCONVOLUTIONPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCopyConvolutionFilter1DEXT");
	if (p) {
		glCopyConvolutionFilter1DEXT = (PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCopyConvolutionFilter2DEXT");
	if (p) {
		glCopyConvolutionFilter2DEXT = (PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetConvolutionFilterEXT");
	if (p) {
		glGetConvolutionFilterEXT = (PFNGLGETCONVOLUTIONFILTEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetConvolutionParameterfvEXT");
	if (p) {
		glGetConvolutionParameterfvEXT = (PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetConvolutionParameterivEXT");
	if (p) {
		glGetConvolutionParameterivEXT = (PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetSeparableFilterEXT");
	if (p) {
		glGetSeparableFilterEXT = (PFNGLGETSEPARABLEFILTEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSeparableFilter2DEXT");
	if (p) {
		glSeparableFilter2DEXT = (PFNGLSEPARABLEFILTER2DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTangent3bEXT");
	if (p) {
		glTangent3bEXT = (PFNGLTANGENT3BEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTangent3bvEXT");
	if (p) {
		glTangent3bvEXT = (PFNGLTANGENT3BVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTangent3dEXT");
	if (p) {
		glTangent3dEXT = (PFNGLTANGENT3DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTangent3dvEXT");
	if (p) {
		glTangent3dvEXT = (PFNGLTANGENT3DVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTangent3fEXT");
	if (p) {
		glTangent3fEXT = (PFNGLTANGENT3FEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTangent3fvEXT");
	if (p) {
		glTangent3fvEXT = (PFNGLTANGENT3FVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTangent3iEXT");
	if (p) {
		glTangent3iEXT = (PFNGLTANGENT3IEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTangent3ivEXT");
	if (p) {
		glTangent3ivEXT = (PFNGLTANGENT3IVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTangent3sEXT");
	if (p) {
		glTangent3sEXT = (PFNGLTANGENT3SEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTangent3svEXT");
	if (p) {
		glTangent3svEXT = (PFNGLTANGENT3SVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBinormal3bEXT");
	if (p) {
		glBinormal3bEXT = (PFNGLBINORMAL3BEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBinormal3bvEXT");
	if (p) {
		glBinormal3bvEXT = (PFNGLBINORMAL3BVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBinormal3dEXT");
	if (p) {
		glBinormal3dEXT = (PFNGLBINORMAL3DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBinormal3dvEXT");
	if (p) {
		glBinormal3dvEXT = (PFNGLBINORMAL3DVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBinormal3fEXT");
	if (p) {
		glBinormal3fEXT = (PFNGLBINORMAL3FEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBinormal3fvEXT");
	if (p) {
		glBinormal3fvEXT = (PFNGLBINORMAL3FVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBinormal3iEXT");
	if (p) {
		glBinormal3iEXT = (PFNGLBINORMAL3IEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBinormal3ivEXT");
	if (p) {
		glBinormal3ivEXT = (PFNGLBINORMAL3IVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBinormal3sEXT");
	if (p) {
		glBinormal3sEXT = (PFNGLBINORMAL3SEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBinormal3svEXT");
	if (p) {
		glBinormal3svEXT = (PFNGLBINORMAL3SVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTangentPointerEXT");
	if (p) {
		glTangentPointerEXT = (PFNGLTANGENTPOINTEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBinormalPointerEXT");
	if (p) {
		glBinormalPointerEXT = (PFNGLBINORMALPOINTEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCopyTexImage1DEXT");
	if (p) {
		glCopyTexImage1DEXT = (PFNGLCOPYTEXIMAGE1DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCopyTexImage2DEXT");
	if (p) {
		glCopyTexImage2DEXT = (PFNGLCOPYTEXIMAGE2DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCopyTexSubImage1DEXT");
	if (p) {
		glCopyTexSubImage1DEXT = (PFNGLCOPYTEXSUBIMAGE1DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCopyTexSubImage2DEXT");
	if (p) {
		glCopyTexSubImage2DEXT = (PFNGLCOPYTEXSUBIMAGE2DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCopyTexSubImage3DEXT");
	if (p) {
		glCopyTexSubImage3DEXT = (PFNGLCOPYTEXSUBIMAGE3DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCullParameterdvEXT");
	if (p) {
		glCullParameterdvEXT = (PFNGLCULLPARAMETERDVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCullParameterfvEXT");
	if (p) {
		glCullParameterfvEXT = (PFNGLCULLPARAMETERFVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glLabelObjectEXT");
	if (p) {
		glLabelObjectEXT = (PFNGLLABELOBJECTEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetObjectLabelEXT");
	if (p) {
		glGetObjectLabelEXT = (PFNGLGETOBJECTLABELEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glInsertEventMarkerEXT");
	if (p) {
		glInsertEventMarkerEXT = (PFNGLINSERTEVENTMARKEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPushGroupMarkerEXT");
	if (p) {
		glPushGroupMarkerEXT = (PFNGLPUSHGROUPMARKEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPopGroupMarkerEXT");
	if (p) {
		glPopGroupMarkerEXT = (PFNGLPOPGROUPMARKEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDepthBoundsEXT");
	if (p) {
		glDepthBoundsEXT = (PFNGLDEPTHBOUNDSEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMatrixLoadfEXT");
	if (p) {
		glMatrixLoadfEXT = (PFNGLMATRIXLOADFEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMatrixLoaddEXT");
	if (p) {
		glMatrixLoaddEXT = (PFNGLMATRIXLOADDEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMatrixMultfEXT");
	if (p) {
		glMatrixMultfEXT = (PFNGLMATRIXMULTFEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMatrixMultdEXT");
	if (p) {
		glMatrixMultdEXT = (PFNGLMATRIXMULTDEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMatrixLoadIdentityEXT");
	if (p) {
		glMatrixLoadIdentityEXT = (PFNGLMATRIXLOADIDENTITYEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMatrixRotatefEXT");
	if (p) {
		glMatrixRotatefEXT = (PFNGLMATRIXROTATEFEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMatrixRotatedEXT");
	if (p) {
		glMatrixRotatedEXT = (PFNGLMATRIXROTATEDEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMatrixScalefEXT");
	if (p) {
		glMatrixScalefEXT = (PFNGLMATRIXSCALEFEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMatrixScaledEXT");
	if (p) {
		glMatrixScaledEXT = (PFNGLMATRIXSCALEDEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMatrixTranslatefEXT");
	if (p) {
		glMatrixTranslatefEXT = (PFNGLMATRIXTRANSLATEFEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMatrixTranslatedEXT");
	if (p) {
		glMatrixTranslatedEXT = (PFNGLMATRIXTRANSLATEDEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMatrixFrustumEXT");
	if (p) {
		glMatrixFrustumEXT = (PFNGLMATRIXFRUSTUMEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMatrixOrthoEXT");
	if (p) {
		glMatrixOrthoEXT = (PFNGLMATRIXORTHOEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMatrixPopEXT");
	if (p) {
		glMatrixPopEXT = (PFNGLMATRIXPOPEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMatrixPushEXT");
	if (p) {
		glMatrixPushEXT = (PFNGLMATRIXPUSHEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glClientAttribDefaultEXT");
	if (p) {
		glClientAttribDefaultEXT = (PFNGLCLIENTATTRIBDEFAULTEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPushClientAttribDefaultEXT");
	if (p) {
		glPushClientAttribDefaultEXT = (PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureParameterfEXT");
	if (p) {
		glTextureParameterfEXT = (PFNGLTEXTUREPARAMETERFEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureParameterfvEXT");
	if (p) {
		glTextureParameterfvEXT = (PFNGLTEXTUREPARAMETERFVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureParameteriEXT");
	if (p) {
		glTextureParameteriEXT = (PFNGLTEXTUREPARAMETERIEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureParameterivEXT");
	if (p) {
		glTextureParameterivEXT = (PFNGLTEXTUREPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureImage1DEXT");
	if (p) {
		glTextureImage1DEXT = (PFNGLTEXTUREIMAGE1DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureImage2DEXT");
	if (p) {
		glTextureImage2DEXT = (PFNGLTEXTUREIMAGE2DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureSubImage1DEXT");
	if (p) {
		glTextureSubImage1DEXT = (PFNGLTEXTURESUBIMAGE1DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureSubImage2DEXT");
	if (p) {
		glTextureSubImage2DEXT = (PFNGLTEXTURESUBIMAGE2DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCopyTextureImage1DEXT");
	if (p) {
		glCopyTextureImage1DEXT = (PFNGLCOPYTEXTUREIMAGE1DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCopyTextureImage2DEXT");
	if (p) {
		glCopyTextureImage2DEXT = (PFNGLCOPYTEXTUREIMAGE2DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCopyTextureSubImage1DEXT");
	if (p) {
		glCopyTextureSubImage1DEXT = (PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCopyTextureSubImage2DEXT");
	if (p) {
		glCopyTextureSubImage2DEXT = (PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTextureImageEXT");
	if (p) {
		glGetTextureImageEXT = (PFNGLGETTEXTUREIMAGEEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTextureParameterfvEXT");
	if (p) {
		glGetTextureParameterfvEXT = (PFNGLGETTEXTUREPARAMETERFVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTextureParameterivEXT");
	if (p) {
		glGetTextureParameterivEXT = (PFNGLGETTEXTUREPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTextureLevelParameterfvEXT");
	if (p) {
		glGetTextureLevelParameterfvEXT = (PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTextureLevelParameterivEXT");
	if (p) {
		glGetTextureLevelParameterivEXT = (PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureImage3DEXT");
	if (p) {
		glTextureImage3DEXT = (PFNGLTEXTUREIMAGE3DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureSubImage3DEXT");
	if (p) {
		glTextureSubImage3DEXT = (PFNGLTEXTURESUBIMAGE3DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCopyTextureSubImage3DEXT");
	if (p) {
		glCopyTextureSubImage3DEXT = (PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindMultiTextureEXT");
	if (p) {
		glBindMultiTextureEXT = (PFNGLBINDMULTITEXTUREEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoordPointerEXT");
	if (p) {
		glMultiTexCoordPointerEXT = (PFNGLMULTITEXCOORDPOINTEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexEnvfEXT");
	if (p) {
		glMultiTexEnvfEXT = (PFNGLMULTITEXENVFEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexEnvfvEXT");
	if (p) {
		glMultiTexEnvfvEXT = (PFNGLMULTITEXENVFVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexEnviEXT");
	if (p) {
		glMultiTexEnviEXT = (PFNGLMULTITEXENVIEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexEnvivEXT");
	if (p) {
		glMultiTexEnvivEXT = (PFNGLMULTITEXENVIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexGendEXT");
	if (p) {
		glMultiTexGendEXT = (PFNGLMULTITEXGENDEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexGendvEXT");
	if (p) {
		glMultiTexGendvEXT = (PFNGLMULTITEXGENDVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexGenfEXT");
	if (p) {
		glMultiTexGenfEXT = (PFNGLMULTITEXGENFEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexGenfvEXT");
	if (p) {
		glMultiTexGenfvEXT = (PFNGLMULTITEXGENFVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexGeniEXT");
	if (p) {
		glMultiTexGeniEXT = (PFNGLMULTITEXGENIEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexGenivEXT");
	if (p) {
		glMultiTexGenivEXT = (PFNGLMULTITEXGENIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetMultiTexEnvfvEXT");
	if (p) {
		glGetMultiTexEnvfvEXT = (PFNGLGETMULTITEXENVFVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetMultiTexEnvivEXT");
	if (p) {
		glGetMultiTexEnvivEXT = (PFNGLGETMULTITEXENVIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetMultiTexGendvEXT");
	if (p) {
		glGetMultiTexGendvEXT = (PFNGLGETMULTITEXGENDVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetMultiTexGenfvEXT");
	if (p) {
		glGetMultiTexGenfvEXT = (PFNGLGETMULTITEXGENFVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetMultiTexGenivEXT");
	if (p) {
		glGetMultiTexGenivEXT = (PFNGLGETMULTITEXGENIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexParameteriEXT");
	if (p) {
		glMultiTexParameteriEXT = (PFNGLMULTITEXPARAMETERIEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexParameterivEXT");
	if (p) {
		glMultiTexParameterivEXT = (PFNGLMULTITEXPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexParameterfEXT");
	if (p) {
		glMultiTexParameterfEXT = (PFNGLMULTITEXPARAMETERFEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexParameterfvEXT");
	if (p) {
		glMultiTexParameterfvEXT = (PFNGLMULTITEXPARAMETERFVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexImage1DEXT");
	if (p) {
		glMultiTexImage1DEXT = (PFNGLMULTITEXIMAGE1DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexImage2DEXT");
	if (p) {
		glMultiTexImage2DEXT = (PFNGLMULTITEXIMAGE2DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexSubImage1DEXT");
	if (p) {
		glMultiTexSubImage1DEXT = (PFNGLMULTITEXSUBIMAGE1DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexSubImage2DEXT");
	if (p) {
		glMultiTexSubImage2DEXT = (PFNGLMULTITEXSUBIMAGE2DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCopyMultiTexImage1DEXT");
	if (p) {
		glCopyMultiTexImage1DEXT = (PFNGLCOPYMULTITEXIMAGE1DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCopyMultiTexImage2DEXT");
	if (p) {
		glCopyMultiTexImage2DEXT = (PFNGLCOPYMULTITEXIMAGE2DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCopyMultiTexSubImage1DEXT");
	if (p) {
		glCopyMultiTexSubImage1DEXT = (PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCopyMultiTexSubImage2DEXT");
	if (p) {
		glCopyMultiTexSubImage2DEXT = (PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetMultiTexImageEXT");
	if (p) {
		glGetMultiTexImageEXT = (PFNGLGETMULTITEXIMAGEEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetMultiTexParameterfvEXT");
	if (p) {
		glGetMultiTexParameterfvEXT = (PFNGLGETMULTITEXPARAMETERFVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetMultiTexParameterivEXT");
	if (p) {
		glGetMultiTexParameterivEXT = (PFNGLGETMULTITEXPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetMultiTexLevelParameterfvEXT");
	if (p) {
		glGetMultiTexLevelParameterfvEXT = (PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetMultiTexLevelParameterivEXT");
	if (p) {
		glGetMultiTexLevelParameterivEXT = (PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexImage3DEXT");
	if (p) {
		glMultiTexImage3DEXT = (PFNGLMULTITEXIMAGE3DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexSubImage3DEXT");
	if (p) {
		glMultiTexSubImage3DEXT = (PFNGLMULTITEXSUBIMAGE3DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCopyMultiTexSubImage3DEXT");
	if (p) {
		glCopyMultiTexSubImage3DEXT = (PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEnableClientStateIndexedEXT");
	if (p) {
		glEnableClientStateIndexedEXT = (PFNGLENABLECLIENTSTATEINDEXEDEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDisableClientStateIndexedEXT");
	if (p) {
		glDisableClientStateIndexedEXT = (PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetFloatIndexedvEXT");
	if (p) {
		glGetFloatIndexedvEXT = (PFNGLGETFLOATINDEXEDVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetDoubleIndexedvEXT");
	if (p) {
		glGetDoubleIndexedvEXT = (PFNGLGETDOUBLEINDEXEDVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetPointerIndexedvEXT");
	if (p) {
		glGetPointerIndexedvEXT = (PFNGLGETPOINTERINDEXEDVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEnableIndexedEXT");
	if (p) {
		glEnableIndexedEXT = (PFNGLENABLEINDEXEDEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDisableIndexedEXT");
	if (p) {
		glDisableIndexedEXT = (PFNGLDISABLEINDEXEDEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsEnabledIndexedEXT");
	if (p) {
		glIsEnabledIndexedEXT = (PFNGLISENABLEDINDEXEDEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetIntegerIndexedvEXT");
	if (p) {
		glGetIntegerIndexedvEXT = (PFNGLGETINTEGERINDEXEDVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetBooleanIndexedvEXT");
	if (p) {
		glGetBooleanIndexedvEXT = (PFNGLGETBOOLEANINDEXEDVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCompressedTextureImage3DEXT");
	if (p) {
		glCompressedTextureImage3DEXT = (PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCompressedTextureImage2DEXT");
	if (p) {
		glCompressedTextureImage2DEXT = (PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCompressedTextureImage1DEXT");
	if (p) {
		glCompressedTextureImage1DEXT = (PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCompressedTextureSubImage3DEXT");
	if (p) {
		glCompressedTextureSubImage3DEXT = (PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCompressedTextureSubImage2DEXT");
	if (p) {
		glCompressedTextureSubImage2DEXT = (PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCompressedTextureSubImage1DEXT");
	if (p) {
		glCompressedTextureSubImage1DEXT = (PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetCompressedTextureImageEXT");
	if (p) {
		glGetCompressedTextureImageEXT = (PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCompressedMultiTexImage3DEXT");
	if (p) {
		glCompressedMultiTexImage3DEXT = (PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCompressedMultiTexImage2DEXT");
	if (p) {
		glCompressedMultiTexImage2DEXT = (PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCompressedMultiTexImage1DEXT");
	if (p) {
		glCompressedMultiTexImage1DEXT = (PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCompressedMultiTexSubImage3DEXT");
	if (p) {
		glCompressedMultiTexSubImage3DEXT = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCompressedMultiTexSubImage2DEXT");
	if (p) {
		glCompressedMultiTexSubImage2DEXT = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCompressedMultiTexSubImage1DEXT");
	if (p) {
		glCompressedMultiTexSubImage1DEXT = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetCompressedMultiTexImageEXT");
	if (p) {
		glGetCompressedMultiTexImageEXT = (PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMatrixLoadTransposefEXT");
	if (p) {
		glMatrixLoadTransposefEXT = (PFNGLMATRIXLOADTRANSPOSEFEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMatrixLoadTransposedEXT");
	if (p) {
		glMatrixLoadTransposedEXT = (PFNGLMATRIXLOADTRANSPOSEDEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMatrixMultTransposefEXT");
	if (p) {
		glMatrixMultTransposefEXT = (PFNGLMATRIXMULTTRANSPOSEFEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMatrixMultTransposedEXT");
	if (p) {
		glMatrixMultTransposedEXT = (PFNGLMATRIXMULTTRANSPOSEDEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedBufferDataEXT");
	if (p) {
		glNamedBufferDataEXT = (PFNGLNAMEDBUFFERDATAEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedBufferSubDataEXT");
	if (p) {
		glNamedBufferSubDataEXT = (PFNGLNAMEDBUFFERSUBDATAEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMapNamedBufferEXT");
	if (p) {
		glMapNamedBufferEXT = (PFNGLMAPNAMEDBUFFEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUnmapNamedBufferEXT");
	if (p) {
		glUnmapNamedBufferEXT = (PFNGLUNMAPNAMEDBUFFEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetNamedBufferParameterivEXT");
	if (p) {
		glGetNamedBufferParameterivEXT = (PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetNamedBufferPointervEXT");
	if (p) {
		glGetNamedBufferPointervEXT = (PFNGLGETNAMEDBUFFERPOINTERVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetNamedBufferSubDataEXT");
	if (p) {
		glGetNamedBufferSubDataEXT = (PFNGLGETNAMEDBUFFERSUBDATAEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform1fEXT");
	if (p) {
		glProgramUniform1fEXT = (PFNGLPROGRAMUNIFORM1FEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform2fEXT");
	if (p) {
		glProgramUniform2fEXT = (PFNGLPROGRAMUNIFORM2FEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform3fEXT");
	if (p) {
		glProgramUniform3fEXT = (PFNGLPROGRAMUNIFORM3FEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform4fEXT");
	if (p) {
		glProgramUniform4fEXT = (PFNGLPROGRAMUNIFORM4FEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform1iEXT");
	if (p) {
		glProgramUniform1iEXT = (PFNGLPROGRAMUNIFORM1IEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform2iEXT");
	if (p) {
		glProgramUniform2iEXT = (PFNGLPROGRAMUNIFORM2IEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform3iEXT");
	if (p) {
		glProgramUniform3iEXT = (PFNGLPROGRAMUNIFORM3IEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform4iEXT");
	if (p) {
		glProgramUniform4iEXT = (PFNGLPROGRAMUNIFORM4IEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform1fvEXT");
	if (p) {
		glProgramUniform1fvEXT = (PFNGLPROGRAMUNIFORM1FVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform2fvEXT");
	if (p) {
		glProgramUniform2fvEXT = (PFNGLPROGRAMUNIFORM2FVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform3fvEXT");
	if (p) {
		glProgramUniform3fvEXT = (PFNGLPROGRAMUNIFORM3FVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform4fvEXT");
	if (p) {
		glProgramUniform4fvEXT = (PFNGLPROGRAMUNIFORM4FVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform1ivEXT");
	if (p) {
		glProgramUniform1ivEXT = (PFNGLPROGRAMUNIFORM1IVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform2ivEXT");
	if (p) {
		glProgramUniform2ivEXT = (PFNGLPROGRAMUNIFORM2IVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform3ivEXT");
	if (p) {
		glProgramUniform3ivEXT = (PFNGLPROGRAMUNIFORM3IVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform4ivEXT");
	if (p) {
		glProgramUniform4ivEXT = (PFNGLPROGRAMUNIFORM4IVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix2fvEXT");
	if (p) {
		glProgramUniformMatrix2fvEXT = (PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix3fvEXT");
	if (p) {
		glProgramUniformMatrix3fvEXT = (PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix4fvEXT");
	if (p) {
		glProgramUniformMatrix4fvEXT = (PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix2x3fvEXT");
	if (p) {
		glProgramUniformMatrix2x3fvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix3x2fvEXT");
	if (p) {
		glProgramUniformMatrix3x2fvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix2x4fvEXT");
	if (p) {
		glProgramUniformMatrix2x4fvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix4x2fvEXT");
	if (p) {
		glProgramUniformMatrix4x2fvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix3x4fvEXT");
	if (p) {
		glProgramUniformMatrix3x4fvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix4x3fvEXT");
	if (p) {
		glProgramUniformMatrix4x3fvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureBufferEXT");
	if (p) {
		glTextureBufferEXT = (PFNGLTEXTUREBUFFEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexBufferEXT");
	if (p) {
		glMultiTexBufferEXT = (PFNGLMULTITEXBUFFEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureParameterIivEXT");
	if (p) {
		glTextureParameterIivEXT = (PFNGLTEXTUREPARAMETERIIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureParameterIuivEXT");
	if (p) {
		glTextureParameterIuivEXT = (PFNGLTEXTUREPARAMETERIUIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTextureParameterIivEXT");
	if (p) {
		glGetTextureParameterIivEXT = (PFNGLGETTEXTUREPARAMETERIIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTextureParameterIuivEXT");
	if (p) {
		glGetTextureParameterIuivEXT = (PFNGLGETTEXTUREPARAMETERIUIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexParameterIivEXT");
	if (p) {
		glMultiTexParameterIivEXT = (PFNGLMULTITEXPARAMETERIIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexParameterIuivEXT");
	if (p) {
		glMultiTexParameterIuivEXT = (PFNGLMULTITEXPARAMETERIUIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetMultiTexParameterIivEXT");
	if (p) {
		glGetMultiTexParameterIivEXT = (PFNGLGETMULTITEXPARAMETERIIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetMultiTexParameterIuivEXT");
	if (p) {
		glGetMultiTexParameterIuivEXT = (PFNGLGETMULTITEXPARAMETERIUIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform1uiEXT");
	if (p) {
		glProgramUniform1uiEXT = (PFNGLPROGRAMUNIFORM1UIEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform2uiEXT");
	if (p) {
		glProgramUniform2uiEXT = (PFNGLPROGRAMUNIFORM2UIEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform3uiEXT");
	if (p) {
		glProgramUniform3uiEXT = (PFNGLPROGRAMUNIFORM3UIEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform4uiEXT");
	if (p) {
		glProgramUniform4uiEXT = (PFNGLPROGRAMUNIFORM4UIEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform1uivEXT");
	if (p) {
		glProgramUniform1uivEXT = (PFNGLPROGRAMUNIFORM1UIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform2uivEXT");
	if (p) {
		glProgramUniform2uivEXT = (PFNGLPROGRAMUNIFORM2UIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform3uivEXT");
	if (p) {
		glProgramUniform3uivEXT = (PFNGLPROGRAMUNIFORM3UIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform4uivEXT");
	if (p) {
		glProgramUniform4uivEXT = (PFNGLPROGRAMUNIFORM4UIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedProgramLocalParameters4fvEXT");
	if (p) {
		glNamedProgramLocalParameters4fvEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedProgramLocalParameterI4iEXT");
	if (p) {
		glNamedProgramLocalParameterI4iEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedProgramLocalParameterI4ivEXT");
	if (p) {
		glNamedProgramLocalParameterI4ivEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedProgramLocalParametersI4ivEXT");
	if (p) {
		glNamedProgramLocalParametersI4ivEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedProgramLocalParameterI4uiEXT");
	if (p) {
		glNamedProgramLocalParameterI4uiEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedProgramLocalParameterI4uivEXT");
	if (p) {
		glNamedProgramLocalParameterI4uivEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedProgramLocalParametersI4uivEXT");
	if (p) {
		glNamedProgramLocalParametersI4uivEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetNamedProgramLocalParameterIivEXT");
	if (p) {
		glGetNamedProgramLocalParameterIivEXT = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetNamedProgramLocalParameterIuivEXT");
	if (p) {
		glGetNamedProgramLocalParameterIuivEXT = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEnableClientStateiEXT");
	if (p) {
		glEnableClientStateiEXT = (PFNGLENABLECLIENTSTATEIEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDisableClientStateiEXT");
	if (p) {
		glDisableClientStateiEXT = (PFNGLDISABLECLIENTSTATEIEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetFloati_vEXT");
	if (p) {
		glGetFloati_vEXT = (PFNGLGETFLOATI_VEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetDoublei_vEXT");
	if (p) {
		glGetDoublei_vEXT = (PFNGLGETDOUBLEI_VEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetPointeri_vEXT");
	if (p) {
		glGetPointeri_vEXT = (PFNGLGETPOINTERI_VEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedProgramStringEXT");
	if (p) {
		glNamedProgramStringEXT = (PFNGLNAMEDPROGRAMSTRINGEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedProgramLocalParameter4dEXT");
	if (p) {
		glNamedProgramLocalParameter4dEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedProgramLocalParameter4dvEXT");
	if (p) {
		glNamedProgramLocalParameter4dvEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedProgramLocalParameter4fEXT");
	if (p) {
		glNamedProgramLocalParameter4fEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedProgramLocalParameter4fvEXT");
	if (p) {
		glNamedProgramLocalParameter4fvEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetNamedProgramLocalParameterdvEXT");
	if (p) {
		glGetNamedProgramLocalParameterdvEXT = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetNamedProgramLocalParameterfvEXT");
	if (p) {
		glGetNamedProgramLocalParameterfvEXT = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetNamedProgramivEXT");
	if (p) {
		glGetNamedProgramivEXT = (PFNGLGETNAMEDPROGRAMIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetNamedProgramStringEXT");
	if (p) {
		glGetNamedProgramStringEXT = (PFNGLGETNAMEDPROGRAMSTRINGEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedRenderbufferStorageEXT");
	if (p) {
		glNamedRenderbufferStorageEXT = (PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetNamedRenderbufferParameterivEXT");
	if (p) {
		glGetNamedRenderbufferParameterivEXT = (PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedRenderbufferStorageMultisampleEXT");
	if (p) {
		glNamedRenderbufferStorageMultisampleEXT = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedRenderbufferStorageMultisampleCoverageEXT");
	if (p) {
		glNamedRenderbufferStorageMultisampleCoverageEXT = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCheckNamedFramebufferStatusEXT");
	if (p) {
		glCheckNamedFramebufferStatusEXT = (PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedFramebufferTexture1DEXT");
	if (p) {
		glNamedFramebufferTexture1DEXT = (PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedFramebufferTexture2DEXT");
	if (p) {
		glNamedFramebufferTexture2DEXT = (PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedFramebufferTexture3DEXT");
	if (p) {
		glNamedFramebufferTexture3DEXT = (PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedFramebufferRenderbufferEXT");
	if (p) {
		glNamedFramebufferRenderbufferEXT = (PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetNamedFramebufferAttachmentParameterivEXT");
	if (p) {
		glGetNamedFramebufferAttachmentParameterivEXT = (PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGenerateTextureMipmapEXT");
	if (p) {
		glGenerateTextureMipmapEXT = (PFNGLGENERATETEXTUREMIPMAPEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGenerateMultiTexMipmapEXT");
	if (p) {
		glGenerateMultiTexMipmapEXT = (PFNGLGENERATEMULTITEXMIPMAPEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFramebufferDrawBufferEXT");
	if (p) {
		glFramebufferDrawBufferEXT = (PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFramebufferDrawBuffersEXT");
	if (p) {
		glFramebufferDrawBuffersEXT = (PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFramebufferReadBufferEXT");
	if (p) {
		glFramebufferReadBufferEXT = (PFNGLFRAMEBUFFERREADBUFFEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetFramebufferParameterivEXT");
	if (p) {
		glGetFramebufferParameterivEXT = (PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedCopyBufferSubDataEXT");
	if (p) {
		glNamedCopyBufferSubDataEXT = (PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedFramebufferTextureEXT");
	if (p) {
		glNamedFramebufferTextureEXT = (PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedFramebufferTextureLayerEXT");
	if (p) {
		glNamedFramebufferTextureLayerEXT = (PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedFramebufferTextureFaceEXT");
	if (p) {
		glNamedFramebufferTextureFaceEXT = (PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureRenderbufferEXT");
	if (p) {
		glTextureRenderbufferEXT = (PFNGLTEXTURERENDERBUFFEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexRenderbufferEXT");
	if (p) {
		glMultiTexRenderbufferEXT = (PFNGLMULTITEXRENDERBUFFEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexArrayVertexOffsetEXT");
	if (p) {
		glVertexArrayVertexOffsetEXT = (PFNGLVERTEXARRAYVERTEXOFFSETEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexArrayColorOffsetEXT");
	if (p) {
		glVertexArrayColorOffsetEXT = (PFNGLVERTEXARRAYCOLOROFFSETEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexArrayEdgeFlagOffsetEXT");
	if (p) {
		glVertexArrayEdgeFlagOffsetEXT = (PFNGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexArrayIndexOffsetEXT");
	if (p) {
		glVertexArrayIndexOffsetEXT = (PFNGLVERTEXARRAYINDEXOFFSETEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexArrayNormalOffsetEXT");
	if (p) {
		glVertexArrayNormalOffsetEXT = (PFNGLVERTEXARRAYNORMALOFFSETEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexArrayTexCoordOffsetEXT");
	if (p) {
		glVertexArrayTexCoordOffsetEXT = (PFNGLVERTEXARRAYTEXCOORDOFFSETEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexArrayMultiTexCoordOffsetEXT");
	if (p) {
		glVertexArrayMultiTexCoordOffsetEXT = (PFNGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexArrayFogCoordOffsetEXT");
	if (p) {
		glVertexArrayFogCoordOffsetEXT = (PFNGLVERTEXARRAYFOGCOORDOFFSETEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexArraySecondaryColorOffsetEXT");
	if (p) {
		glVertexArraySecondaryColorOffsetEXT = (PFNGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexArrayVertexAttribOffsetEXT");
	if (p) {
		glVertexArrayVertexAttribOffsetEXT = (PFNGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexArrayVertexAttribIOffsetEXT");
	if (p) {
		glVertexArrayVertexAttribIOffsetEXT = (PFNGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEnableVertexArrayEXT");
	if (p) {
		glEnableVertexArrayEXT = (PFNGLENABLEVERTEXARRAYEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDisableVertexArrayEXT");
	if (p) {
		glDisableVertexArrayEXT = (PFNGLDISABLEVERTEXARRAYEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEnableVertexArrayAttribEXT");
	if (p) {
		glEnableVertexArrayAttribEXT = (PFNGLENABLEVERTEXARRAYATTRIBEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDisableVertexArrayAttribEXT");
	if (p) {
		glDisableVertexArrayAttribEXT = (PFNGLDISABLEVERTEXARRAYATTRIBEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVertexArrayIntegervEXT");
	if (p) {
		glGetVertexArrayIntegervEXT = (PFNGLGETVERTEXARRAYINTEGERVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVertexArrayPointervEXT");
	if (p) {
		glGetVertexArrayPointervEXT = (PFNGLGETVERTEXARRAYPOINTERVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVertexArrayIntegeri_vEXT");
	if (p) {
		glGetVertexArrayIntegeri_vEXT = (PFNGLGETVERTEXARRAYINTEGERI_VEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVertexArrayPointeri_vEXT");
	if (p) {
		glGetVertexArrayPointeri_vEXT = (PFNGLGETVERTEXARRAYPOINTERI_VEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMapNamedBufferRangeEXT");
	if (p) {
		glMapNamedBufferRangeEXT = (PFNGLMAPNAMEDBUFFERRANGEEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFlushMappedNamedBufferRangeEXT");
	if (p) {
		glFlushMappedNamedBufferRangeEXT = (PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedBufferStorageEXT");
	if (p) {
		glNamedBufferStorageEXT = (PFNGLNAMEDBUFFERSTORAGEEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glClearNamedBufferDataEXT");
	if (p) {
		glClearNamedBufferDataEXT = (PFNGLCLEARNAMEDBUFFERDATAEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glClearNamedBufferSubDataEXT");
	if (p) {
		glClearNamedBufferSubDataEXT = (PFNGLCLEARNAMEDBUFFERSUBDATAEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedFramebufferParameteriEXT");
	if (p) {
		glNamedFramebufferParameteriEXT = (PFNGLNAMEDFRAMEBUFFERPARAMETERIEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetNamedFramebufferParameterivEXT");
	if (p) {
		glGetNamedFramebufferParameterivEXT = (PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform1dEXT");
	if (p) {
		glProgramUniform1dEXT = (PFNGLPROGRAMUNIFORM1DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform2dEXT");
	if (p) {
		glProgramUniform2dEXT = (PFNGLPROGRAMUNIFORM2DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform3dEXT");
	if (p) {
		glProgramUniform3dEXT = (PFNGLPROGRAMUNIFORM3DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform4dEXT");
	if (p) {
		glProgramUniform4dEXT = (PFNGLPROGRAMUNIFORM4DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform1dvEXT");
	if (p) {
		glProgramUniform1dvEXT = (PFNGLPROGRAMUNIFORM1DVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform2dvEXT");
	if (p) {
		glProgramUniform2dvEXT = (PFNGLPROGRAMUNIFORM2DVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform3dvEXT");
	if (p) {
		glProgramUniform3dvEXT = (PFNGLPROGRAMUNIFORM3DVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniform4dvEXT");
	if (p) {
		glProgramUniform4dvEXT = (PFNGLPROGRAMUNIFORM4DVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix2dvEXT");
	if (p) {
		glProgramUniformMatrix2dvEXT = (PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix3dvEXT");
	if (p) {
		glProgramUniformMatrix3dvEXT = (PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix4dvEXT");
	if (p) {
		glProgramUniformMatrix4dvEXT = (PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix2x3dvEXT");
	if (p) {
		glProgramUniformMatrix2x3dvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix2x4dvEXT");
	if (p) {
		glProgramUniformMatrix2x4dvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix3x2dvEXT");
	if (p) {
		glProgramUniformMatrix3x2dvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix3x4dvEXT");
	if (p) {
		glProgramUniformMatrix3x4dvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix4x2dvEXT");
	if (p) {
		glProgramUniformMatrix4x2dvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformMatrix4x3dvEXT");
	if (p) {
		glProgramUniformMatrix4x3dvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureBufferRangeEXT");
	if (p) {
		glTextureBufferRangeEXT = (PFNGLTEXTUREBUFFERRANGEEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureStorage1DEXT");
	if (p) {
		glTextureStorage1DEXT = (PFNGLTEXTURESTORAGE1DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureStorage2DEXT");
	if (p) {
		glTextureStorage2DEXT = (PFNGLTEXTURESTORAGE2DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureStorage3DEXT");
	if (p) {
		glTextureStorage3DEXT = (PFNGLTEXTURESTORAGE3DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureStorage2DMultisampleEXT");
	if (p) {
		glTextureStorage2DMultisampleEXT = (PFNGLTEXTURESTORAGE2DMULTISAMPLEEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureStorage3DMultisampleEXT");
	if (p) {
		glTextureStorage3DMultisampleEXT = (PFNGLTEXTURESTORAGE3DMULTISAMPLEEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexArrayBindVertexBufferEXT");
	if (p) {
		glVertexArrayBindVertexBufferEXT = (PFNGLVERTEXARRAYBINDVERTEXBUFFEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexArrayVertexAttribFormatEXT");
	if (p) {
		glVertexArrayVertexAttribFormatEXT = (PFNGLVERTEXARRAYVERTEXATTRIBFORMATEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexArrayVertexAttribIFormatEXT");
	if (p) {
		glVertexArrayVertexAttribIFormatEXT = (PFNGLVERTEXARRAYVERTEXATTRIBIFORMATEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexArrayVertexAttribLFormatEXT");
	if (p) {
		glVertexArrayVertexAttribLFormatEXT = (PFNGLVERTEXARRAYVERTEXATTRIBLFORMATEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexArrayVertexAttribBindingEXT");
	if (p) {
		glVertexArrayVertexAttribBindingEXT = (PFNGLVERTEXARRAYVERTEXATTRIBBINDINGEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexArrayVertexBindingDivisorEXT");
	if (p) {
		glVertexArrayVertexBindingDivisorEXT = (PFNGLVERTEXARRAYVERTEXBINDINGDIVISOREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexArrayVertexAttribLOffsetEXT");
	if (p) {
		glVertexArrayVertexAttribLOffsetEXT = (PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexturePageCommitmentEXT");
	if (p) {
		glTexturePageCommitmentEXT = (PFNGLTEXTUREPAGECOMMITMENTEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexArrayVertexAttribDivisorEXT");
	if (p) {
		glVertexArrayVertexAttribDivisorEXT = (PFNGLVERTEXARRAYVERTEXATTRIBDIVISOREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColorMaskIndexedEXT");
	if (p) {
		glColorMaskIndexedEXT = (PFNGLCOLORMASKINDEXEDEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDrawArraysInstancedEXT");
	if (p) {
		glDrawArraysInstancedEXT = (PFNGLDRAWARRAYSINSTANCEDEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDrawElementsInstancedEXT");
	if (p) {
		glDrawElementsInstancedEXT = (PFNGLDRAWELEMENTSINSTANCEDEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDrawRangeElementsEXT");
	if (p) {
		glDrawRangeElementsEXT = (PFNGLDRAWRANGEELEMENTSEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFogCoordfEXT");
	if (p) {
		glFogCoordfEXT = (PFNGLFOGCOORDFEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFogCoordfvEXT");
	if (p) {
		glFogCoordfvEXT = (PFNGLFOGCOORDFVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFogCoorddEXT");
	if (p) {
		glFogCoorddEXT = (PFNGLFOGCOORDDEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFogCoorddvEXT");
	if (p) {
		glFogCoorddvEXT = (PFNGLFOGCOORDDVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFogCoordPointerEXT");
	if (p) {
		glFogCoordPointerEXT = (PFNGLFOGCOORDPOINTEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBlitFramebufferEXT");
	if (p) {
		glBlitFramebufferEXT = (PFNGLBLITFRAMEBUFFEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glRenderbufferStorageMultisampleEXT");
	if (p) {
		glRenderbufferStorageMultisampleEXT = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsRenderbufferEXT");
	if (p) {
		glIsRenderbufferEXT = (PFNGLISRENDERBUFFEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindRenderbufferEXT");
	if (p) {
		glBindRenderbufferEXT = (PFNGLBINDRENDERBUFFEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeleteRenderbuffersEXT");
	if (p) {
		glDeleteRenderbuffersEXT = (PFNGLDELETERENDERBUFFERSEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGenRenderbuffersEXT");
	if (p) {
		glGenRenderbuffersEXT = (PFNGLGENRENDERBUFFERSEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glRenderbufferStorageEXT");
	if (p) {
		glRenderbufferStorageEXT = (PFNGLRENDERBUFFERSTORAGEEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetRenderbufferParameterivEXT");
	if (p) {
		glGetRenderbufferParameterivEXT = (PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsFramebufferEXT");
	if (p) {
		glIsFramebufferEXT = (PFNGLISFRAMEBUFFEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindFramebufferEXT");
	if (p) {
		glBindFramebufferEXT = (PFNGLBINDFRAMEBUFFEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeleteFramebuffersEXT");
	if (p) {
		glDeleteFramebuffersEXT = (PFNGLDELETEFRAMEBUFFERSEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGenFramebuffersEXT");
	if (p) {
		glGenFramebuffersEXT = (PFNGLGENFRAMEBUFFERSEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCheckFramebufferStatusEXT");
	if (p) {
		glCheckFramebufferStatusEXT = (PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFramebufferTexture1DEXT");
	if (p) {
		glFramebufferTexture1DEXT = (PFNGLFRAMEBUFFERTEXTURE1DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFramebufferTexture2DEXT");
	if (p) {
		glFramebufferTexture2DEXT = (PFNGLFRAMEBUFFERTEXTURE2DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFramebufferTexture3DEXT");
	if (p) {
		glFramebufferTexture3DEXT = (PFNGLFRAMEBUFFERTEXTURE3DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFramebufferRenderbufferEXT");
	if (p) {
		glFramebufferRenderbufferEXT = (PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetFramebufferAttachmentParameterivEXT");
	if (p) {
		glGetFramebufferAttachmentParameterivEXT = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGenerateMipmapEXT");
	if (p) {
		glGenerateMipmapEXT = (PFNGLGENERATEMIPMAPEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramParameteriEXT");
	if (p) {
		glProgramParameteriEXT = (PFNGLPROGRAMPARAMETERIEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramEnvParameters4fvEXT");
	if (p) {
		glProgramEnvParameters4fvEXT = (PFNGLPROGRAMENVPARAMETERS4FVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramLocalParameters4fvEXT");
	if (p) {
		glProgramLocalParameters4fvEXT = (PFNGLPROGRAMLOCALPARAMETERS4FVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetUniformuivEXT");
	if (p) {
		glGetUniformuivEXT = (PFNGLGETUNIFORMUIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindFragDataLocationEXT");
	if (p) {
		glBindFragDataLocationEXT = (PFNGLBINDFRAGDATALOCATIONEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetFragDataLocationEXT");
	if (p) {
		glGetFragDataLocationEXT = (PFNGLGETFRAGDATALOCATIONEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform1uiEXT");
	if (p) {
		glUniform1uiEXT = (PFNGLUNIFORM1UIEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform2uiEXT");
	if (p) {
		glUniform2uiEXT = (PFNGLUNIFORM2UIEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform3uiEXT");
	if (p) {
		glUniform3uiEXT = (PFNGLUNIFORM3UIEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform4uiEXT");
	if (p) {
		glUniform4uiEXT = (PFNGLUNIFORM4UIEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform1uivEXT");
	if (p) {
		glUniform1uivEXT = (PFNGLUNIFORM1UIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform2uivEXT");
	if (p) {
		glUniform2uivEXT = (PFNGLUNIFORM2UIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform3uivEXT");
	if (p) {
		glUniform3uivEXT = (PFNGLUNIFORM3UIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniform4uivEXT");
	if (p) {
		glUniform4uivEXT = (PFNGLUNIFORM4UIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetHistogramEXT");
	if (p) {
		glGetHistogramEXT = (PFNGLGETHISTOGRAMEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetHistogramParameterfvEXT");
	if (p) {
		glGetHistogramParameterfvEXT = (PFNGLGETHISTOGRAMPARAMETERFVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetHistogramParameterivEXT");
	if (p) {
		glGetHistogramParameterivEXT = (PFNGLGETHISTOGRAMPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetMinmaxEXT");
	if (p) {
		glGetMinmaxEXT = (PFNGLGETMINMAXEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetMinmaxParameterfvEXT");
	if (p) {
		glGetMinmaxParameterfvEXT = (PFNGLGETMINMAXPARAMETERFVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetMinmaxParameterivEXT");
	if (p) {
		glGetMinmaxParameterivEXT = (PFNGLGETMINMAXPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glHistogramEXT");
	if (p) {
		glHistogramEXT = (PFNGLHISTOGRAMEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMinmaxEXT");
	if (p) {
		glMinmaxEXT = (PFNGLMINMAXEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glResetHistogramEXT");
	if (p) {
		glResetHistogramEXT = (PFNGLRESETHISTOGRAMEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glResetMinmaxEXT");
	if (p) {
		glResetMinmaxEXT = (PFNGLRESETMINMAXEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIndexFuncEXT");
	if (p) {
		glIndexFuncEXT = (PFNGLINDEXFUNCEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIndexMaterialEXT");
	if (p) {
		glIndexMaterialEXT = (PFNGLINDEXMATERIALEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glApplyTextureEXT");
	if (p) {
		glApplyTextureEXT = (PFNGLAPPLYTEXTUREEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureLightEXT");
	if (p) {
		glTextureLightEXT = (PFNGLTEXTURELIGHTEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureMaterialEXT");
	if (p) {
		glTextureMaterialEXT = (PFNGLTEXTUREMATERIALEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiDrawArraysEXT");
	if (p) {
		glMultiDrawArraysEXT = (PFNGLMULTIDRAWARRAYSEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiDrawElementsEXT");
	if (p) {
		glMultiDrawElementsEXT = (PFNGLMULTIDRAWELEMENTSEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSampleMaskEXT");
	if (p) {
		glSampleMaskEXT = (PFNGLSAMPLEMASKEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSamplePatternEXT");
	if (p) {
		glSamplePatternEXT = (PFNGLSAMPLEPATTERNEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColorTableEXT");
	if (p) {
		glColorTableEXT = (PFNGLCOLORTABLEEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetColorTableEXT");
	if (p) {
		glGetColorTableEXT = (PFNGLGETCOLORTABLEEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetColorTableParameterivEXT");
	if (p) {
		glGetColorTableParameterivEXT = (PFNGLGETCOLORTABLEPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetColorTableParameterfvEXT");
	if (p) {
		glGetColorTableParameterfvEXT = (PFNGLGETCOLORTABLEPARAMETERFVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPixelTransformParameteriEXT");
	if (p) {
		glPixelTransformParameteriEXT = (PFNGLPIXELTRANSFORMPARAMETERIEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPixelTransformParameterfEXT");
	if (p) {
		glPixelTransformParameterfEXT = (PFNGLPIXELTRANSFORMPARAMETERFEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPixelTransformParameterivEXT");
	if (p) {
		glPixelTransformParameterivEXT = (PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPixelTransformParameterfvEXT");
	if (p) {
		glPixelTransformParameterfvEXT = (PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetPixelTransformParameterivEXT");
	if (p) {
		glGetPixelTransformParameterivEXT = (PFNGLGETPIXELTRANSFORMPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetPixelTransformParameterfvEXT");
	if (p) {
		glGetPixelTransformParameterfvEXT = (PFNGLGETPIXELTRANSFORMPARAMETERFVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPointParameterfEXT");
	if (p) {
		glPointParameterfEXT = (PFNGLPOINTPARAMETERFEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPointParameterfvEXT");
	if (p) {
		glPointParameterfvEXT = (PFNGLPOINTPARAMETERFVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPolygonOffsetEXT");
	if (p) {
		glPolygonOffsetEXT = (PFNGLPOLYGONOFFSETEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPolygonOffsetClampEXT");
	if (p) {
		glPolygonOffsetClampEXT = (PFNGLPOLYGONOFFSETCLAMPEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProvokingVertexEXT");
	if (p) {
		glProvokingVertexEXT = (PFNGLPROVOKINGVERTEXEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glRasterSamplesEXT");
	if (p) {
		glRasterSamplesEXT = (PFNGLRASTERSAMPLESEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColor3bEXT");
	if (p) {
		glSecondaryColor3bEXT = (PFNGLSECONDARYCOLOR3BEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColor3bvEXT");
	if (p) {
		glSecondaryColor3bvEXT = (PFNGLSECONDARYCOLOR3BVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColor3dEXT");
	if (p) {
		glSecondaryColor3dEXT = (PFNGLSECONDARYCOLOR3DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColor3dvEXT");
	if (p) {
		glSecondaryColor3dvEXT = (PFNGLSECONDARYCOLOR3DVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColor3fEXT");
	if (p) {
		glSecondaryColor3fEXT = (PFNGLSECONDARYCOLOR3FEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColor3fvEXT");
	if (p) {
		glSecondaryColor3fvEXT = (PFNGLSECONDARYCOLOR3FVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColor3iEXT");
	if (p) {
		glSecondaryColor3iEXT = (PFNGLSECONDARYCOLOR3IEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColor3ivEXT");
	if (p) {
		glSecondaryColor3ivEXT = (PFNGLSECONDARYCOLOR3IVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColor3sEXT");
	if (p) {
		glSecondaryColor3sEXT = (PFNGLSECONDARYCOLOR3SEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColor3svEXT");
	if (p) {
		glSecondaryColor3svEXT = (PFNGLSECONDARYCOLOR3SVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColor3ubEXT");
	if (p) {
		glSecondaryColor3ubEXT = (PFNGLSECONDARYCOLOR3UBEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColor3ubvEXT");
	if (p) {
		glSecondaryColor3ubvEXT = (PFNGLSECONDARYCOLOR3UBVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColor3uiEXT");
	if (p) {
		glSecondaryColor3uiEXT = (PFNGLSECONDARYCOLOR3UIEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColor3uivEXT");
	if (p) {
		glSecondaryColor3uivEXT = (PFNGLSECONDARYCOLOR3UIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColor3usEXT");
	if (p) {
		glSecondaryColor3usEXT = (PFNGLSECONDARYCOLOR3USEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColor3usvEXT");
	if (p) {
		glSecondaryColor3usvEXT = (PFNGLSECONDARYCOLOR3USVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColorPointerEXT");
	if (p) {
		glSecondaryColorPointerEXT = (PFNGLSECONDARYCOLORPOINTEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUseShaderProgramEXT");
	if (p) {
		glUseShaderProgramEXT = (PFNGLUSESHADERPROGRAMEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glActiveProgramEXT");
	if (p) {
		glActiveProgramEXT = (PFNGLACTIVEPROGRAMEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCreateShaderProgramEXT");
	if (p) {
		glCreateShaderProgramEXT = (PFNGLCREATESHADERPROGRAMEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindImageTextureEXT");
	if (p) {
		glBindImageTextureEXT = (PFNGLBINDIMAGETEXTUREEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMemoryBarrierEXT");
	if (p) {
		glMemoryBarrierEXT = (PFNGLMEMORYBARRIEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glStencilClearTagEXT");
	if (p) {
		glStencilClearTagEXT = (PFNGLSTENCILCLEARTAGEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glActiveStencilFaceEXT");
	if (p) {
		glActiveStencilFaceEXT = (PFNGLACTIVESTENCILFACEEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexSubImage1DEXT");
	if (p) {
		glTexSubImage1DEXT = (PFNGLTEXSUBIMAGE1DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexSubImage2DEXT");
	if (p) {
		glTexSubImage2DEXT = (PFNGLTEXSUBIMAGE2DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexImage3DEXT");
	if (p) {
		glTexImage3DEXT = (PFNGLTEXIMAGE3DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexSubImage3DEXT");
	if (p) {
		glTexSubImage3DEXT = (PFNGLTEXSUBIMAGE3DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFramebufferTextureLayerEXT");
	if (p) {
		glFramebufferTextureLayerEXT = (PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexBufferEXT");
	if (p) {
		glTexBufferEXT = (PFNGLTEXBUFFEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexParameterIivEXT");
	if (p) {
		glTexParameterIivEXT = (PFNGLTEXPARAMETERIIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexParameterIuivEXT");
	if (p) {
		glTexParameterIuivEXT = (PFNGLTEXPARAMETERIUIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTexParameterIivEXT");
	if (p) {
		glGetTexParameterIivEXT = (PFNGLGETTEXPARAMETERIIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTexParameterIuivEXT");
	if (p) {
		glGetTexParameterIuivEXT = (PFNGLGETTEXPARAMETERIUIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glClearColorIiEXT");
	if (p) {
		glClearColorIiEXT = (PFNGLCLEARCOLORIIEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glClearColorIuiEXT");
	if (p) {
		glClearColorIuiEXT = (PFNGLCLEARCOLORIUIEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glAreTexturesResidentEXT");
	if (p) {
		glAreTexturesResidentEXT = (PFNGLARETEXTURESRESIDENTEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindTextureEXT");
	if (p) {
		glBindTextureEXT = (PFNGLBINDTEXTUREEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeleteTexturesEXT");
	if (p) {
		glDeleteTexturesEXT = (PFNGLDELETETEXTURESEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGenTexturesEXT");
	if (p) {
		glGenTexturesEXT = (PFNGLGENTEXTURESEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsTextureEXT");
	if (p) {
		glIsTextureEXT = (PFNGLISTEXTUREEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPrioritizeTexturesEXT");
	if (p) {
		glPrioritizeTexturesEXT = (PFNGLPRIORITIZETEXTURESEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureNormalEXT");
	if (p) {
		glTextureNormalEXT = (PFNGLTEXTURENORMALEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetQueryObjecti64vEXT");
	if (p) {
		glGetQueryObjecti64vEXT = (PFNGLGETQUERYOBJECTI64VEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetQueryObjectui64vEXT");
	if (p) {
		glGetQueryObjectui64vEXT = (PFNGLGETQUERYOBJECTUI64VEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBeginTransformFeedbackEXT");
	if (p) {
		glBeginTransformFeedbackEXT = (PFNGLBEGINTRANSFORMFEEDBACKEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEndTransformFeedbackEXT");
	if (p) {
		glEndTransformFeedbackEXT = (PFNGLENDTRANSFORMFEEDBACKEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindBufferRangeEXT");
	if (p) {
		glBindBufferRangeEXT = (PFNGLBINDBUFFERRANGEEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindBufferOffsetEXT");
	if (p) {
		glBindBufferOffsetEXT = (PFNGLBINDBUFFEROFFSETEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindBufferBaseEXT");
	if (p) {
		glBindBufferBaseEXT = (PFNGLBINDBUFFERBASEEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTransformFeedbackVaryingsEXT");
	if (p) {
		glTransformFeedbackVaryingsEXT = (PFNGLTRANSFORMFEEDBACKVARYINGSEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTransformFeedbackVaryingEXT");
	if (p) {
		glGetTransformFeedbackVaryingEXT = (PFNGLGETTRANSFORMFEEDBACKVARYINGEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glArrayElementEXT");
	if (p) {
		glArrayElementEXT = (PFNGLARRAYELEMENTEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColorPointerEXT");
	if (p) {
		glColorPointerEXT = (PFNGLCOLORPOINTEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDrawArraysEXT");
	if (p) {
		glDrawArraysEXT = (PFNGLDRAWARRAYSEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEdgeFlagPointerEXT");
	if (p) {
		glEdgeFlagPointerEXT = (PFNGLEDGEFLAGPOINTEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetPointervEXT");
	if (p) {
		glGetPointervEXT = (PFNGLGETPOINTERVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIndexPointerEXT");
	if (p) {
		glIndexPointerEXT = (PFNGLINDEXPOINTEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNormalPointerEXT");
	if (p) {
		glNormalPointerEXT = (PFNGLNORMALPOINTEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoordPointerEXT");
	if (p) {
		glTexCoordPointerEXT = (PFNGLTEXCOORDPOINTEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexPointerEXT");
	if (p) {
		glVertexPointerEXT = (PFNGLVERTEXPOINTEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribL1dEXT");
	if (p) {
		glVertexAttribL1dEXT = (PFNGLVERTEXATTRIBL1DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribL2dEXT");
	if (p) {
		glVertexAttribL2dEXT = (PFNGLVERTEXATTRIBL2DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribL3dEXT");
	if (p) {
		glVertexAttribL3dEXT = (PFNGLVERTEXATTRIBL3DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribL4dEXT");
	if (p) {
		glVertexAttribL4dEXT = (PFNGLVERTEXATTRIBL4DEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribL1dvEXT");
	if (p) {
		glVertexAttribL1dvEXT = (PFNGLVERTEXATTRIBL1DVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribL2dvEXT");
	if (p) {
		glVertexAttribL2dvEXT = (PFNGLVERTEXATTRIBL2DVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribL3dvEXT");
	if (p) {
		glVertexAttribL3dvEXT = (PFNGLVERTEXATTRIBL3DVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribL4dvEXT");
	if (p) {
		glVertexAttribL4dvEXT = (PFNGLVERTEXATTRIBL4DVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribLPointerEXT");
	if (p) {
		glVertexAttribLPointerEXT = (PFNGLVERTEXATTRIBLPOINTEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVertexAttribLdvEXT");
	if (p) {
		glGetVertexAttribLdvEXT = (PFNGLGETVERTEXATTRIBLDVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBeginVertexShaderEXT");
	if (p) {
		glBeginVertexShaderEXT = (PFNGLBEGINVERTEXSHADEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEndVertexShaderEXT");
	if (p) {
		glEndVertexShaderEXT = (PFNGLENDVERTEXSHADEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindVertexShaderEXT");
	if (p) {
		glBindVertexShaderEXT = (PFNGLBINDVERTEXSHADEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGenVertexShadersEXT");
	if (p) {
		glGenVertexShadersEXT = (PFNGLGENVERTEXSHADERSEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeleteVertexShaderEXT");
	if (p) {
		glDeleteVertexShaderEXT = (PFNGLDELETEVERTEXSHADEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glShaderOp1EXT");
	if (p) {
		glShaderOp1EXT = (PFNGLSHADEROP1EXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glShaderOp2EXT");
	if (p) {
		glShaderOp2EXT = (PFNGLSHADEROP2EXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glShaderOp3EXT");
	if (p) {
		glShaderOp3EXT = (PFNGLSHADEROP3EXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSwizzleEXT");
	if (p) {
		glSwizzleEXT = (PFNGLSWIZZLEEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWriteMaskEXT");
	if (p) {
		glWriteMaskEXT = (PFNGLWRITEMASKEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glInsertComponentEXT");
	if (p) {
		glInsertComponentEXT = (PFNGLINSERTCOMPONENTEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glExtractComponentEXT");
	if (p) {
		glExtractComponentEXT = (PFNGLEXTRACTCOMPONENTEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGenSymbolsEXT");
	if (p) {
		glGenSymbolsEXT = (PFNGLGENSYMBOLSEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSetInvariantEXT");
	if (p) {
		glSetInvariantEXT = (PFNGLSETINVARIANTEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSetLocalConstantEXT");
	if (p) {
		glSetLocalConstantEXT = (PFNGLSETLOCALCONSTANTEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVariantbvEXT");
	if (p) {
		glVariantbvEXT = (PFNGLVARIANTBVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVariantsvEXT");
	if (p) {
		glVariantsvEXT = (PFNGLVARIANTSVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVariantivEXT");
	if (p) {
		glVariantivEXT = (PFNGLVARIANTIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVariantfvEXT");
	if (p) {
		glVariantfvEXT = (PFNGLVARIANTFVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVariantdvEXT");
	if (p) {
		glVariantdvEXT = (PFNGLVARIANTDVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVariantubvEXT");
	if (p) {
		glVariantubvEXT = (PFNGLVARIANTUBVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVariantusvEXT");
	if (p) {
		glVariantusvEXT = (PFNGLVARIANTUSVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVariantuivEXT");
	if (p) {
		glVariantuivEXT = (PFNGLVARIANTUIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVariantPointerEXT");
	if (p) {
		glVariantPointerEXT = (PFNGLVARIANTPOINTEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEnableVariantClientStateEXT");
	if (p) {
		glEnableVariantClientStateEXT = (PFNGLENABLEVARIANTCLIENTSTATEEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDisableVariantClientStateEXT");
	if (p) {
		glDisableVariantClientStateEXT = (PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindLightParameterEXT");
	if (p) {
		glBindLightParameterEXT = (PFNGLBINDLIGHTPARAMETEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindMaterialParameterEXT");
	if (p) {
		glBindMaterialParameterEXT = (PFNGLBINDMATERIALPARAMETEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindTexGenParameterEXT");
	if (p) {
		glBindTexGenParameterEXT = (PFNGLBINDTEXGENPARAMETEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindTextureUnitParameterEXT");
	if (p) {
		glBindTextureUnitParameterEXT = (PFNGLBINDTEXTUREUNITPARAMETEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindParameterEXT");
	if (p) {
		glBindParameterEXT = (PFNGLBINDPARAMETEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsVariantEnabledEXT");
	if (p) {
		glIsVariantEnabledEXT = (PFNGLISVARIANTENABLEDEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVariantBooleanvEXT");
	if (p) {
		glGetVariantBooleanvEXT = (PFNGLGETVARIANTBOOLEANVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVariantIntegervEXT");
	if (p) {
		glGetVariantIntegervEXT = (PFNGLGETVARIANTINTEGERVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVariantFloatvEXT");
	if (p) {
		glGetVariantFloatvEXT = (PFNGLGETVARIANTFLOATVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVariantPointervEXT");
	if (p) {
		glGetVariantPointervEXT = (PFNGLGETVARIANTPOINTERVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetInvariantBooleanvEXT");
	if (p) {
		glGetInvariantBooleanvEXT = (PFNGLGETINVARIANTBOOLEANVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetInvariantIntegervEXT");
	if (p) {
		glGetInvariantIntegervEXT = (PFNGLGETINVARIANTINTEGERVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetInvariantFloatvEXT");
	if (p) {
		glGetInvariantFloatvEXT = (PFNGLGETINVARIANTFLOATVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetLocalConstantBooleanvEXT");
	if (p) {
		glGetLocalConstantBooleanvEXT = (PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetLocalConstantIntegervEXT");
	if (p) {
		glGetLocalConstantIntegervEXT = (PFNGLGETLOCALCONSTANTINTEGERVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetLocalConstantFloatvEXT");
	if (p) {
		glGetLocalConstantFloatvEXT = (PFNGLGETLOCALCONSTANTFLOATVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexWeightfEXT");
	if (p) {
		glVertexWeightfEXT = (PFNGLVERTEXWEIGHTFEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexWeightfvEXT");
	if (p) {
		glVertexWeightfvEXT = (PFNGLVERTEXWEIGHTFVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexWeightPointerEXT");
	if (p) {
		glVertexWeightPointerEXT = (PFNGLVERTEXWEIGHTPOINTEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowRectanglesEXT");
	if (p) {
		glWindowRectanglesEXT = (PFNGLWINDOWRECTANGLESEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glImportSyncEXT");
	if (p) {
		glImportSyncEXT = (PFNGLIMPORTSYNCEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFrameTerminatorGREMEDY");
	if (p) {
		glFrameTerminatorGREMEDY = (PFNGLFRAMETERMINATORGREMEDYPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glStringMarkerGREMEDY");
	if (p) {
		glStringMarkerGREMEDY = (PFNGLSTRINGMARKERGREMEDYPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glImageTransformParameteriHP");
	if (p) {
		glImageTransformParameteriHP = (PFNGLIMAGETRANSFORMPARAMETERIHPPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glImageTransformParameterfHP");
	if (p) {
		glImageTransformParameterfHP = (PFNGLIMAGETRANSFORMPARAMETERFHPPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glImageTransformParameterivHP");
	if (p) {
		glImageTransformParameterivHP = (PFNGLIMAGETRANSFORMPARAMETERIVHPPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glImageTransformParameterfvHP");
	if (p) {
		glImageTransformParameterfvHP = (PFNGLIMAGETRANSFORMPARAMETERFVHPPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetImageTransformParameterivHP");
	if (p) {
		glGetImageTransformParameterivHP = (PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetImageTransformParameterfvHP");
	if (p) {
		glGetImageTransformParameterfvHP = (PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiModeDrawArraysIBM");
	if (p) {
		glMultiModeDrawArraysIBM = (PFNGLMULTIMODEDRAWARRAYSIBMPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiModeDrawElementsIBM");
	if (p) {
		glMultiModeDrawElementsIBM = (PFNGLMULTIMODEDRAWELEMENTSIBMPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFlushStaticDataIBM");
	if (p) {
		glFlushStaticDataIBM = (PFNGLFLUSHSTATICDATAIBMPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColorPointerListIBM");
	if (p) {
		glColorPointerListIBM = (PFNGLCOLORPOINTERLISTIBMPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColorPointerListIBM");
	if (p) {
		glSecondaryColorPointerListIBM = (PFNGLSECONDARYCOLORPOINTERLISTIBMPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEdgeFlagPointerListIBM");
	if (p) {
		glEdgeFlagPointerListIBM = (PFNGLEDGEFLAGPOINTERLISTIBMPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFogCoordPointerListIBM");
	if (p) {
		glFogCoordPointerListIBM = (PFNGLFOGCOORDPOINTERLISTIBMPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIndexPointerListIBM");
	if (p) {
		glIndexPointerListIBM = (PFNGLINDEXPOINTERLISTIBMPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNormalPointerListIBM");
	if (p) {
		glNormalPointerListIBM = (PFNGLNORMALPOINTERLISTIBMPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoordPointerListIBM");
	if (p) {
		glTexCoordPointerListIBM = (PFNGLTEXCOORDPOINTERLISTIBMPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexPointerListIBM");
	if (p) {
		glVertexPointerListIBM = (PFNGLVERTEXPOINTERLISTIBMPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBlendFuncSeparateINGR");
	if (p) {
		glBlendFuncSeparateINGR = (PFNGLBLENDFUNCSEPARATEINGRPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glApplyFramebufferAttachmentCMAAINTEL");
	if (p) {
		glApplyFramebufferAttachmentCMAAINTEL = (PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSyncTextureINTEL");
	if (p) {
		glSyncTextureINTEL = (PFNGLSYNCTEXTUREINTELPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUnmapTexture2DINTEL");
	if (p) {
		glUnmapTexture2DINTEL = (PFNGLUNMAPTEXTURE2DINTELPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMapTexture2DINTEL");
	if (p) {
		glMapTexture2DINTEL = (PFNGLMAPTEXTURE2DINTELPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexPointervINTEL");
	if (p) {
		glVertexPointervINTEL = (PFNGLVERTEXPOINTERVINTELPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNormalPointervINTEL");
	if (p) {
		glNormalPointervINTEL = (PFNGLNORMALPOINTERVINTELPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColorPointervINTEL");
	if (p) {
		glColorPointervINTEL = (PFNGLCOLORPOINTERVINTELPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoordPointervINTEL");
	if (p) {
		glTexCoordPointervINTEL = (PFNGLTEXCOORDPOINTERVINTELPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBeginPerfQueryINTEL");
	if (p) {
		glBeginPerfQueryINTEL = (PFNGLBEGINPERFQUERYINTELPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCreatePerfQueryINTEL");
	if (p) {
		glCreatePerfQueryINTEL = (PFNGLCREATEPERFQUERYINTELPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeletePerfQueryINTEL");
	if (p) {
		glDeletePerfQueryINTEL = (PFNGLDELETEPERFQUERYINTELPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEndPerfQueryINTEL");
	if (p) {
		glEndPerfQueryINTEL = (PFNGLENDPERFQUERYINTELPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetFirstPerfQueryIdINTEL");
	if (p) {
		glGetFirstPerfQueryIdINTEL = (PFNGLGETFIRSTPERFQUERYIDINTELPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetNextPerfQueryIdINTEL");
	if (p) {
		glGetNextPerfQueryIdINTEL = (PFNGLGETNEXTPERFQUERYIDINTELPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetPerfCounterInfoINTEL");
	if (p) {
		glGetPerfCounterInfoINTEL = (PFNGLGETPERFCOUNTERINFOINTELPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetPerfQueryDataINTEL");
	if (p) {
		glGetPerfQueryDataINTEL = (PFNGLGETPERFQUERYDATAINTELPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetPerfQueryIdByNameINTEL");
	if (p) {
		glGetPerfQueryIdByNameINTEL = (PFNGLGETPERFQUERYIDBYNAMEINTELPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetPerfQueryInfoINTEL");
	if (p) {
		glGetPerfQueryInfoINTEL = (PFNGLGETPERFQUERYINFOINTELPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glResizeBuffersMESA");
	if (p) {
		glResizeBuffersMESA = (PFNGLRESIZEBUFFERSMESAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos2dMESA");
	if (p) {
		glWindowPos2dMESA = (PFNGLWINDOWPOS2DMESAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos2dvMESA");
	if (p) {
		glWindowPos2dvMESA = (PFNGLWINDOWPOS2DVMESAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos2fMESA");
	if (p) {
		glWindowPos2fMESA = (PFNGLWINDOWPOS2FMESAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos2fvMESA");
	if (p) {
		glWindowPos2fvMESA = (PFNGLWINDOWPOS2FVMESAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos2iMESA");
	if (p) {
		glWindowPos2iMESA = (PFNGLWINDOWPOS2IMESAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos2ivMESA");
	if (p) {
		glWindowPos2ivMESA = (PFNGLWINDOWPOS2IVMESAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos2sMESA");
	if (p) {
		glWindowPos2sMESA = (PFNGLWINDOWPOS2SMESAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos2svMESA");
	if (p) {
		glWindowPos2svMESA = (PFNGLWINDOWPOS2SVMESAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos3dMESA");
	if (p) {
		glWindowPos3dMESA = (PFNGLWINDOWPOS3DMESAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos3dvMESA");
	if (p) {
		glWindowPos3dvMESA = (PFNGLWINDOWPOS3DVMESAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos3fMESA");
	if (p) {
		glWindowPos3fMESA = (PFNGLWINDOWPOS3FMESAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos3fvMESA");
	if (p) {
		glWindowPos3fvMESA = (PFNGLWINDOWPOS3FVMESAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos3iMESA");
	if (p) {
		glWindowPos3iMESA = (PFNGLWINDOWPOS3IMESAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos3ivMESA");
	if (p) {
		glWindowPos3ivMESA = (PFNGLWINDOWPOS3IVMESAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos3sMESA");
	if (p) {
		glWindowPos3sMESA = (PFNGLWINDOWPOS3SMESAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos3svMESA");
	if (p) {
		glWindowPos3svMESA = (PFNGLWINDOWPOS3SVMESAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos4dMESA");
	if (p) {
		glWindowPos4dMESA = (PFNGLWINDOWPOS4DMESAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos4dvMESA");
	if (p) {
		glWindowPos4dvMESA = (PFNGLWINDOWPOS4DVMESAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos4fMESA");
	if (p) {
		glWindowPos4fMESA = (PFNGLWINDOWPOS4FMESAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos4fvMESA");
	if (p) {
		glWindowPos4fvMESA = (PFNGLWINDOWPOS4FVMESAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos4iMESA");
	if (p) {
		glWindowPos4iMESA = (PFNGLWINDOWPOS4IMESAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos4ivMESA");
	if (p) {
		glWindowPos4ivMESA = (PFNGLWINDOWPOS4IVMESAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos4sMESA");
	if (p) {
		glWindowPos4sMESA = (PFNGLWINDOWPOS4SMESAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWindowPos4svMESA");
	if (p) {
		glWindowPos4svMESA = (PFNGLWINDOWPOS4SVMESAPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBeginConditionalRenderNVX");
	if (p) {
		glBeginConditionalRenderNVX = (PFNGLBEGINCONDITIONALRENDERNVXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEndConditionalRenderNVX");
	if (p) {
		glEndConditionalRenderNVX = (PFNGLENDCONDITIONALRENDERNVXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiDrawArraysIndirectBindlessNV");
	if (p) {
		glMultiDrawArraysIndirectBindlessNV = (PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiDrawElementsIndirectBindlessNV");
	if (p) {
		glMultiDrawElementsIndirectBindlessNV = (PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiDrawArraysIndirectBindlessCountNV");
	if (p) {
		glMultiDrawArraysIndirectBindlessCountNV = (PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSCOUNTNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiDrawElementsIndirectBindlessCountNV");
	if (p) {
		glMultiDrawElementsIndirectBindlessCountNV = (PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSCOUNTNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTextureHandleNV");
	if (p) {
		glGetTextureHandleNV = (PFNGLGETTEXTUREHANDLENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTextureSamplerHandleNV");
	if (p) {
		glGetTextureSamplerHandleNV = (PFNGLGETTEXTURESAMPLERHANDLENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMakeTextureHandleResidentNV");
	if (p) {
		glMakeTextureHandleResidentNV = (PFNGLMAKETEXTUREHANDLERESIDENTNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMakeTextureHandleNonResidentNV");
	if (p) {
		glMakeTextureHandleNonResidentNV = (PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetImageHandleNV");
	if (p) {
		glGetImageHandleNV = (PFNGLGETIMAGEHANDLENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMakeImageHandleResidentNV");
	if (p) {
		glMakeImageHandleResidentNV = (PFNGLMAKEIMAGEHANDLERESIDENTNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMakeImageHandleNonResidentNV");
	if (p) {
		glMakeImageHandleNonResidentNV = (PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniformHandleui64NV");
	if (p) {
		glUniformHandleui64NV = (PFNGLUNIFORMHANDLEUI64NVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniformHandleui64vNV");
	if (p) {
		glUniformHandleui64vNV = (PFNGLUNIFORMHANDLEUI64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformHandleui64NV");
	if (p) {
		glProgramUniformHandleui64NV = (PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformHandleui64vNV");
	if (p) {
		glProgramUniformHandleui64vNV = (PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsTextureHandleResidentNV");
	if (p) {
		glIsTextureHandleResidentNV = (PFNGLISTEXTUREHANDLERESIDENTNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsImageHandleResidentNV");
	if (p) {
		glIsImageHandleResidentNV = (PFNGLISIMAGEHANDLERESIDENTNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBlendParameteriNV");
	if (p) {
		glBlendParameteriNV = (PFNGLBLENDPARAMETERINVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBlendBarrierNV");
	if (p) {
		glBlendBarrierNV = (PFNGLBLENDBARRIERNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glViewportPositionWScaleNV");
	if (p) {
		glViewportPositionWScaleNV = (PFNGLVIEWPORTPOSITIONWSCALENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCreateStatesNV");
	if (p) {
		glCreateStatesNV = (PFNGLCREATESTATESNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeleteStatesNV");
	if (p) {
		glDeleteStatesNV = (PFNGLDELETESTATESNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsStateNV");
	if (p) {
		glIsStateNV = (PFNGLISSTATENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glStateCaptureNV");
	if (p) {
		glStateCaptureNV = (PFNGLSTATECAPTURENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetCommandHeaderNV");
	if (p) {
		glGetCommandHeaderNV = (PFNGLGETCOMMANDHEADERNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetStageIndexNV");
	if (p) {
		glGetStageIndexNV = (PFNGLGETSTAGEINDEXNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDrawCommandsNV");
	if (p) {
		glDrawCommandsNV = (PFNGLDRAWCOMMANDSNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDrawCommandsAddressNV");
	if (p) {
		glDrawCommandsAddressNV = (PFNGLDRAWCOMMANDSADDRESSNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDrawCommandsStatesNV");
	if (p) {
		glDrawCommandsStatesNV = (PFNGLDRAWCOMMANDSSTATESNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDrawCommandsStatesAddressNV");
	if (p) {
		glDrawCommandsStatesAddressNV = (PFNGLDRAWCOMMANDSSTATESADDRESSNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCreateCommandListsNV");
	if (p) {
		glCreateCommandListsNV = (PFNGLCREATECOMMANDLISTSNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeleteCommandListsNV");
	if (p) {
		glDeleteCommandListsNV = (PFNGLDELETECOMMANDLISTSNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsCommandListNV");
	if (p) {
		glIsCommandListNV = (PFNGLISCOMMANDLISTNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glListDrawCommandsStatesClientNV");
	if (p) {
		glListDrawCommandsStatesClientNV = (PFNGLLISTDRAWCOMMANDSSTATESCLIENTNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCommandListSegmentsNV");
	if (p) {
		glCommandListSegmentsNV = (PFNGLCOMMANDLISTSEGMENTSNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCompileCommandListNV");
	if (p) {
		glCompileCommandListNV = (PFNGLCOMPILECOMMANDLISTNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCallCommandListNV");
	if (p) {
		glCallCommandListNV = (PFNGLCALLCOMMANDLISTNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBeginConditionalRenderNV");
	if (p) {
		glBeginConditionalRenderNV = (PFNGLBEGINCONDITIONALRENDERNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEndConditionalRenderNV");
	if (p) {
		glEndConditionalRenderNV = (PFNGLENDCONDITIONALRENDERNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSubpixelPrecisionBiasNV");
	if (p) {
		glSubpixelPrecisionBiasNV = (PFNGLSUBPIXELPRECISIONBIASNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glConservativeRasterParameterfNV");
	if (p) {
		glConservativeRasterParameterfNV = (PFNGLCONSERVATIVERASTERPARAMETERFNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glConservativeRasterParameteriNV");
	if (p) {
		glConservativeRasterParameteriNV = (PFNGLCONSERVATIVERASTERPARAMETERINVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCopyImageSubDataNV");
	if (p) {
		glCopyImageSubDataNV = (PFNGLCOPYIMAGESUBDATANVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDepthRangedNV");
	if (p) {
		glDepthRangedNV = (PFNGLDEPTHRANGEDNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glClearDepthdNV");
	if (p) {
		glClearDepthdNV = (PFNGLCLEARDEPTHDNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDepthBoundsdNV");
	if (p) {
		glDepthBoundsdNV = (PFNGLDEPTHBOUNDSDNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDrawTextureNV");
	if (p) {
		glDrawTextureNV = (PFNGLDRAWTEXTURENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMapControlPointsNV");
	if (p) {
		glMapControlPointsNV = (PFNGLMAPCONTROLPOINTSNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMapParameterivNV");
	if (p) {
		glMapParameterivNV = (PFNGLMAPPARAMETERIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMapParameterfvNV");
	if (p) {
		glMapParameterfvNV = (PFNGLMAPPARAMETERFVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetMapControlPointsNV");
	if (p) {
		glGetMapControlPointsNV = (PFNGLGETMAPCONTROLPOINTSNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetMapParameterivNV");
	if (p) {
		glGetMapParameterivNV = (PFNGLGETMAPPARAMETERIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetMapParameterfvNV");
	if (p) {
		glGetMapParameterfvNV = (PFNGLGETMAPPARAMETERFVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetMapAttribParameterivNV");
	if (p) {
		glGetMapAttribParameterivNV = (PFNGLGETMAPATTRIBPARAMETERIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetMapAttribParameterfvNV");
	if (p) {
		glGetMapAttribParameterfvNV = (PFNGLGETMAPATTRIBPARAMETERFVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEvalMapsNV");
	if (p) {
		glEvalMapsNV = (PFNGLEVALMAPSNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetMultisamplefvNV");
	if (p) {
		glGetMultisamplefvNV = (PFNGLGETMULTISAMPLEFVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSampleMaskIndexedNV");
	if (p) {
		glSampleMaskIndexedNV = (PFNGLSAMPLEMASKINDEXEDNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexRenderbufferNV");
	if (p) {
		glTexRenderbufferNV = (PFNGLTEXRENDERBUFFERNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeleteFencesNV");
	if (p) {
		glDeleteFencesNV = (PFNGLDELETEFENCESNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGenFencesNV");
	if (p) {
		glGenFencesNV = (PFNGLGENFENCESNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsFenceNV");
	if (p) {
		glIsFenceNV = (PFNGLISFENCENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTestFenceNV");
	if (p) {
		glTestFenceNV = (PFNGLTESTFENCENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetFenceivNV");
	if (p) {
		glGetFenceivNV = (PFNGLGETFENCEIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFinishFenceNV");
	if (p) {
		glFinishFenceNV = (PFNGLFINISHFENCENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSetFenceNV");
	if (p) {
		glSetFenceNV = (PFNGLSETFENCENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFragmentCoverageColorNV");
	if (p) {
		glFragmentCoverageColorNV = (PFNGLFRAGMENTCOVERAGECOLORNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramNamedParameter4fNV");
	if (p) {
		glProgramNamedParameter4fNV = (PFNGLPROGRAMNAMEDPARAMETER4FNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramNamedParameter4fvNV");
	if (p) {
		glProgramNamedParameter4fvNV = (PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramNamedParameter4dNV");
	if (p) {
		glProgramNamedParameter4dNV = (PFNGLPROGRAMNAMEDPARAMETER4DNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramNamedParameter4dvNV");
	if (p) {
		glProgramNamedParameter4dvNV = (PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetProgramNamedParameterfvNV");
	if (p) {
		glGetProgramNamedParameterfvNV = (PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetProgramNamedParameterdvNV");
	if (p) {
		glGetProgramNamedParameterdvNV = (PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCoverageModulationTableNV");
	if (p) {
		glCoverageModulationTableNV = (PFNGLCOVERAGEMODULATIONTABLENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetCoverageModulationTableNV");
	if (p) {
		glGetCoverageModulationTableNV = (PFNGLGETCOVERAGEMODULATIONTABLENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCoverageModulationNV");
	if (p) {
		glCoverageModulationNV = (PFNGLCOVERAGEMODULATIONNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glRenderbufferStorageMultisampleCoverageNV");
	if (p) {
		glRenderbufferStorageMultisampleCoverageNV = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramVertexLimitNV");
	if (p) {
		glProgramVertexLimitNV = (PFNGLPROGRAMVERTEXLIMITNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFramebufferTextureEXT");
	if (p) {
		glFramebufferTextureEXT = (PFNGLFRAMEBUFFERTEXTUREEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFramebufferTextureFaceEXT");
	if (p) {
		glFramebufferTextureFaceEXT = (PFNGLFRAMEBUFFERTEXTUREFACEEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramLocalParameterI4iNV");
	if (p) {
		glProgramLocalParameterI4iNV = (PFNGLPROGRAMLOCALPARAMETERI4INVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramLocalParameterI4ivNV");
	if (p) {
		glProgramLocalParameterI4ivNV = (PFNGLPROGRAMLOCALPARAMETERI4IVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramLocalParametersI4ivNV");
	if (p) {
		glProgramLocalParametersI4ivNV = (PFNGLPROGRAMLOCALPARAMETERSI4IVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramLocalParameterI4uiNV");
	if (p) {
		glProgramLocalParameterI4uiNV = (PFNGLPROGRAMLOCALPARAMETERI4UINVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramLocalParameterI4uivNV");
	if (p) {
		glProgramLocalParameterI4uivNV = (PFNGLPROGRAMLOCALPARAMETERI4UIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramLocalParametersI4uivNV");
	if (p) {
		glProgramLocalParametersI4uivNV = (PFNGLPROGRAMLOCALPARAMETERSI4UIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramEnvParameterI4iNV");
	if (p) {
		glProgramEnvParameterI4iNV = (PFNGLPROGRAMENVPARAMETERI4INVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramEnvParameterI4ivNV");
	if (p) {
		glProgramEnvParameterI4ivNV = (PFNGLPROGRAMENVPARAMETERI4IVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramEnvParametersI4ivNV");
	if (p) {
		glProgramEnvParametersI4ivNV = (PFNGLPROGRAMENVPARAMETERSI4IVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramEnvParameterI4uiNV");
	if (p) {
		glProgramEnvParameterI4uiNV = (PFNGLPROGRAMENVPARAMETERI4UINVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramEnvParameterI4uivNV");
	if (p) {
		glProgramEnvParameterI4uivNV = (PFNGLPROGRAMENVPARAMETERI4UIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramEnvParametersI4uivNV");
	if (p) {
		glProgramEnvParametersI4uivNV = (PFNGLPROGRAMENVPARAMETERSI4UIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetProgramLocalParameterIivNV");
	if (p) {
		glGetProgramLocalParameterIivNV = (PFNGLGETPROGRAMLOCALPARAMETERIIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetProgramLocalParameterIuivNV");
	if (p) {
		glGetProgramLocalParameterIuivNV = (PFNGLGETPROGRAMLOCALPARAMETERIUIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetProgramEnvParameterIivNV");
	if (p) {
		glGetProgramEnvParameterIivNV = (PFNGLGETPROGRAMENVPARAMETERIIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetProgramEnvParameterIuivNV");
	if (p) {
		glGetProgramEnvParameterIuivNV = (PFNGLGETPROGRAMENVPARAMETERIUIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramSubroutineParametersuivNV");
	if (p) {
		glProgramSubroutineParametersuivNV = (PFNGLPROGRAMSUBROUTINEPARAMETERSUIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetProgramSubroutineParameteruivNV");
	if (p) {
		glGetProgramSubroutineParameteruivNV = (PFNGLGETPROGRAMSUBROUTINEPARAMETERUIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertex2hNV");
	if (p) {
		glVertex2hNV = (PFNGLVERTEX2HNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertex2hvNV");
	if (p) {
		glVertex2hvNV = (PFNGLVERTEX2HVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertex3hNV");
	if (p) {
		glVertex3hNV = (PFNGLVERTEX3HNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertex3hvNV");
	if (p) {
		glVertex3hvNV = (PFNGLVERTEX3HVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertex4hNV");
	if (p) {
		glVertex4hNV = (PFNGLVERTEX4HNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertex4hvNV");
	if (p) {
		glVertex4hvNV = (PFNGLVERTEX4HVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNormal3hNV");
	if (p) {
		glNormal3hNV = (PFNGLNORMAL3HNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNormal3hvNV");
	if (p) {
		glNormal3hvNV = (PFNGLNORMAL3HVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColor3hNV");
	if (p) {
		glColor3hNV = (PFNGLCOLOR3HNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColor3hvNV");
	if (p) {
		glColor3hvNV = (PFNGLCOLOR3HVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColor4hNV");
	if (p) {
		glColor4hNV = (PFNGLCOLOR4HNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColor4hvNV");
	if (p) {
		glColor4hvNV = (PFNGLCOLOR4HVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord1hNV");
	if (p) {
		glTexCoord1hNV = (PFNGLTEXCOORD1HNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord1hvNV");
	if (p) {
		glTexCoord1hvNV = (PFNGLTEXCOORD1HVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord2hNV");
	if (p) {
		glTexCoord2hNV = (PFNGLTEXCOORD2HNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord2hvNV");
	if (p) {
		glTexCoord2hvNV = (PFNGLTEXCOORD2HVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord3hNV");
	if (p) {
		glTexCoord3hNV = (PFNGLTEXCOORD3HNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord3hvNV");
	if (p) {
		glTexCoord3hvNV = (PFNGLTEXCOORD3HVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord4hNV");
	if (p) {
		glTexCoord4hNV = (PFNGLTEXCOORD4HNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord4hvNV");
	if (p) {
		glTexCoord4hvNV = (PFNGLTEXCOORD4HVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord1hNV");
	if (p) {
		glMultiTexCoord1hNV = (PFNGLMULTITEXCOORD1HNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord1hvNV");
	if (p) {
		glMultiTexCoord1hvNV = (PFNGLMULTITEXCOORD1HVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord2hNV");
	if (p) {
		glMultiTexCoord2hNV = (PFNGLMULTITEXCOORD2HNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord2hvNV");
	if (p) {
		glMultiTexCoord2hvNV = (PFNGLMULTITEXCOORD2HVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord3hNV");
	if (p) {
		glMultiTexCoord3hNV = (PFNGLMULTITEXCOORD3HNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord3hvNV");
	if (p) {
		glMultiTexCoord3hvNV = (PFNGLMULTITEXCOORD3HVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord4hNV");
	if (p) {
		glMultiTexCoord4hNV = (PFNGLMULTITEXCOORD4HNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMultiTexCoord4hvNV");
	if (p) {
		glMultiTexCoord4hvNV = (PFNGLMULTITEXCOORD4HVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFogCoordhNV");
	if (p) {
		glFogCoordhNV = (PFNGLFOGCOORDHNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFogCoordhvNV");
	if (p) {
		glFogCoordhvNV = (PFNGLFOGCOORDHVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColor3hNV");
	if (p) {
		glSecondaryColor3hNV = (PFNGLSECONDARYCOLOR3HNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColor3hvNV");
	if (p) {
		glSecondaryColor3hvNV = (PFNGLSECONDARYCOLOR3HVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexWeighthNV");
	if (p) {
		glVertexWeighthNV = (PFNGLVERTEXWEIGHTHNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexWeighthvNV");
	if (p) {
		glVertexWeighthvNV = (PFNGLVERTEXWEIGHTHVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib1hNV");
	if (p) {
		glVertexAttrib1hNV = (PFNGLVERTEXATTRIB1HNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib1hvNV");
	if (p) {
		glVertexAttrib1hvNV = (PFNGLVERTEXATTRIB1HVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib2hNV");
	if (p) {
		glVertexAttrib2hNV = (PFNGLVERTEXATTRIB2HNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib2hvNV");
	if (p) {
		glVertexAttrib2hvNV = (PFNGLVERTEXATTRIB2HVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib3hNV");
	if (p) {
		glVertexAttrib3hNV = (PFNGLVERTEXATTRIB3HNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib3hvNV");
	if (p) {
		glVertexAttrib3hvNV = (PFNGLVERTEXATTRIB3HVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4hNV");
	if (p) {
		glVertexAttrib4hNV = (PFNGLVERTEXATTRIB4HNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4hvNV");
	if (p) {
		glVertexAttrib4hvNV = (PFNGLVERTEXATTRIB4HVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribs1hvNV");
	if (p) {
		glVertexAttribs1hvNV = (PFNGLVERTEXATTRIBS1HVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribs2hvNV");
	if (p) {
		glVertexAttribs2hvNV = (PFNGLVERTEXATTRIBS2HVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribs3hvNV");
	if (p) {
		glVertexAttribs3hvNV = (PFNGLVERTEXATTRIBS3HVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribs4hvNV");
	if (p) {
		glVertexAttribs4hvNV = (PFNGLVERTEXATTRIBS4HVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetInternalformatSampleivNV");
	if (p) {
		glGetInternalformatSampleivNV = (PFNGLGETINTERNALFORMATSAMPLEIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGenOcclusionQueriesNV");
	if (p) {
		glGenOcclusionQueriesNV = (PFNGLGENOCCLUSIONQUERIESNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeleteOcclusionQueriesNV");
	if (p) {
		glDeleteOcclusionQueriesNV = (PFNGLDELETEOCCLUSIONQUERIESNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsOcclusionQueryNV");
	if (p) {
		glIsOcclusionQueryNV = (PFNGLISOCCLUSIONQUERYNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBeginOcclusionQueryNV");
	if (p) {
		glBeginOcclusionQueryNV = (PFNGLBEGINOCCLUSIONQUERYNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEndOcclusionQueryNV");
	if (p) {
		glEndOcclusionQueryNV = (PFNGLENDOCCLUSIONQUERYNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetOcclusionQueryivNV");
	if (p) {
		glGetOcclusionQueryivNV = (PFNGLGETOCCLUSIONQUERYIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetOcclusionQueryuivNV");
	if (p) {
		glGetOcclusionQueryuivNV = (PFNGLGETOCCLUSIONQUERYUIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramBufferParametersfvNV");
	if (p) {
		glProgramBufferParametersfvNV = (PFNGLPROGRAMBUFFERPARAMETERSFVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramBufferParametersIivNV");
	if (p) {
		glProgramBufferParametersIivNV = (PFNGLPROGRAMBUFFERPARAMETERSIIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramBufferParametersIuivNV");
	if (p) {
		glProgramBufferParametersIuivNV = (PFNGLPROGRAMBUFFERPARAMETERSIUIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGenPathsNV");
	if (p) {
		glGenPathsNV = (PFNGLGENPATHSNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeletePathsNV");
	if (p) {
		glDeletePathsNV = (PFNGLDELETEPATHSNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsPathNV");
	if (p) {
		glIsPathNV = (PFNGLISPATHNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPathCommandsNV");
	if (p) {
		glPathCommandsNV = (PFNGLPATHCOMMANDSNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPathCoordsNV");
	if (p) {
		glPathCoordsNV = (PFNGLPATHCOORDSNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPathSubCommandsNV");
	if (p) {
		glPathSubCommandsNV = (PFNGLPATHSUBCOMMANDSNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPathSubCoordsNV");
	if (p) {
		glPathSubCoordsNV = (PFNGLPATHSUBCOORDSNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPathStringNV");
	if (p) {
		glPathStringNV = (PFNGLPATHSTRINGNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPathGlyphsNV");
	if (p) {
		glPathGlyphsNV = (PFNGLPATHGLYPHSNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPathGlyphRangeNV");
	if (p) {
		glPathGlyphRangeNV = (PFNGLPATHGLYPHRANGENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glWeightPathsNV");
	if (p) {
		glWeightPathsNV = (PFNGLWEIGHTPATHSNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCopyPathNV");
	if (p) {
		glCopyPathNV = (PFNGLCOPYPATHNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glInterpolatePathsNV");
	if (p) {
		glInterpolatePathsNV = (PFNGLINTERPOLATEPATHSNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTransformPathNV");
	if (p) {
		glTransformPathNV = (PFNGLTRANSFORMPATHNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPathParameterivNV");
	if (p) {
		glPathParameterivNV = (PFNGLPATHPARAMETERIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPathParameteriNV");
	if (p) {
		glPathParameteriNV = (PFNGLPATHPARAMETERINVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPathParameterfvNV");
	if (p) {
		glPathParameterfvNV = (PFNGLPATHPARAMETERFVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPathParameterfNV");
	if (p) {
		glPathParameterfNV = (PFNGLPATHPARAMETERFNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPathDashArrayNV");
	if (p) {
		glPathDashArrayNV = (PFNGLPATHDASHARRAYNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPathStencilFuncNV");
	if (p) {
		glPathStencilFuncNV = (PFNGLPATHSTENCILFUNCNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPathStencilDepthOffsetNV");
	if (p) {
		glPathStencilDepthOffsetNV = (PFNGLPATHSTENCILDEPTHOFFSETNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glStencilFillPathNV");
	if (p) {
		glStencilFillPathNV = (PFNGLSTENCILFILLPATHNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glStencilStrokePathNV");
	if (p) {
		glStencilStrokePathNV = (PFNGLSTENCILSTROKEPATHNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glStencilFillPathInstancedNV");
	if (p) {
		glStencilFillPathInstancedNV = (PFNGLSTENCILFILLPATHINSTANCEDNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glStencilStrokePathInstancedNV");
	if (p) {
		glStencilStrokePathInstancedNV = (PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPathCoverDepthFuncNV");
	if (p) {
		glPathCoverDepthFuncNV = (PFNGLPATHCOVERDEPTHFUNCNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCoverFillPathNV");
	if (p) {
		glCoverFillPathNV = (PFNGLCOVERFILLPATHNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCoverStrokePathNV");
	if (p) {
		glCoverStrokePathNV = (PFNGLCOVERSTROKEPATHNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCoverFillPathInstancedNV");
	if (p) {
		glCoverFillPathInstancedNV = (PFNGLCOVERFILLPATHINSTANCEDNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCoverStrokePathInstancedNV");
	if (p) {
		glCoverStrokePathInstancedNV = (PFNGLCOVERSTROKEPATHINSTANCEDNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetPathParameterivNV");
	if (p) {
		glGetPathParameterivNV = (PFNGLGETPATHPARAMETERIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetPathParameterfvNV");
	if (p) {
		glGetPathParameterfvNV = (PFNGLGETPATHPARAMETERFVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetPathCommandsNV");
	if (p) {
		glGetPathCommandsNV = (PFNGLGETPATHCOMMANDSNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetPathCoordsNV");
	if (p) {
		glGetPathCoordsNV = (PFNGLGETPATHCOORDSNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetPathDashArrayNV");
	if (p) {
		glGetPathDashArrayNV = (PFNGLGETPATHDASHARRAYNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetPathMetricsNV");
	if (p) {
		glGetPathMetricsNV = (PFNGLGETPATHMETRICSNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetPathMetricRangeNV");
	if (p) {
		glGetPathMetricRangeNV = (PFNGLGETPATHMETRICRANGENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetPathSpacingNV");
	if (p) {
		glGetPathSpacingNV = (PFNGLGETPATHSPACINGNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsPointInFillPathNV");
	if (p) {
		glIsPointInFillPathNV = (PFNGLISPOINTINFILLPATHNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsPointInStrokePathNV");
	if (p) {
		glIsPointInStrokePathNV = (PFNGLISPOINTINSTROKEPATHNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetPathLengthNV");
	if (p) {
		glGetPathLengthNV = (PFNGLGETPATHLENGTHNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPointAlongPathNV");
	if (p) {
		glPointAlongPathNV = (PFNGLPOINTALONGPATHNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMatrixLoad3x2fNV");
	if (p) {
		glMatrixLoad3x2fNV = (PFNGLMATRIXLOAD3X2FNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMatrixLoad3x3fNV");
	if (p) {
		glMatrixLoad3x3fNV = (PFNGLMATRIXLOAD3X3FNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMatrixLoadTranspose3x3fNV");
	if (p) {
		glMatrixLoadTranspose3x3fNV = (PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMatrixMult3x2fNV");
	if (p) {
		glMatrixMult3x2fNV = (PFNGLMATRIXMULT3X2FNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMatrixMult3x3fNV");
	if (p) {
		glMatrixMult3x3fNV = (PFNGLMATRIXMULT3X3FNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMatrixMultTranspose3x3fNV");
	if (p) {
		glMatrixMultTranspose3x3fNV = (PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glStencilThenCoverFillPathNV");
	if (p) {
		glStencilThenCoverFillPathNV = (PFNGLSTENCILTHENCOVERFILLPATHNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glStencilThenCoverStrokePathNV");
	if (p) {
		glStencilThenCoverStrokePathNV = (PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glStencilThenCoverFillPathInstancedNV");
	if (p) {
		glStencilThenCoverFillPathInstancedNV = (PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glStencilThenCoverStrokePathInstancedNV");
	if (p) {
		glStencilThenCoverStrokePathInstancedNV = (PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPathGlyphIndexRangeNV");
	if (p) {
		glPathGlyphIndexRangeNV = (PFNGLPATHGLYPHINDEXRANGENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPathGlyphIndexArrayNV");
	if (p) {
		glPathGlyphIndexArrayNV = (PFNGLPATHGLYPHINDEXARRAYNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPathMemoryGlyphIndexArrayNV");
	if (p) {
		glPathMemoryGlyphIndexArrayNV = (PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramPathFragmentInputGenNV");
	if (p) {
		glProgramPathFragmentInputGenNV = (PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetProgramResourcefvNV");
	if (p) {
		glGetProgramResourcefvNV = (PFNGLGETPROGRAMRESOURCEFVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPathColorGenNV");
	if (p) {
		glPathColorGenNV = (PFNGLPATHCOLORGENNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPathTexGenNV");
	if (p) {
		glPathTexGenNV = (PFNGLPATHTEXGENNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPathFogGenNV");
	if (p) {
		glPathFogGenNV = (PFNGLPATHFOGGENNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetPathColorGenivNV");
	if (p) {
		glGetPathColorGenivNV = (PFNGLGETPATHCOLORGENIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetPathColorGenfvNV");
	if (p) {
		glGetPathColorGenfvNV = (PFNGLGETPATHCOLORGENFVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetPathTexGenivNV");
	if (p) {
		glGetPathTexGenivNV = (PFNGLGETPATHTEXGENIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetPathTexGenfvNV");
	if (p) {
		glGetPathTexGenfvNV = (PFNGLGETPATHTEXGENFVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPixelDataRangeNV");
	if (p) {
		glPixelDataRangeNV = (PFNGLPIXELDATARANGENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFlushPixelDataRangeNV");
	if (p) {
		glFlushPixelDataRangeNV = (PFNGLFLUSHPIXELDATARANGENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPointParameteriNV");
	if (p) {
		glPointParameteriNV = (PFNGLPOINTPARAMETERINVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPointParameterivNV");
	if (p) {
		glPointParameterivNV = (PFNGLPOINTPARAMETERIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPresentFrameKeyedNV");
	if (p) {
		glPresentFrameKeyedNV = (PFNGLPRESENTFRAMEKEYEDNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPresentFrameDualFillNV");
	if (p) {
		glPresentFrameDualFillNV = (PFNGLPRESENTFRAMEDUALFILLNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVideoivNV");
	if (p) {
		glGetVideoivNV = (PFNGLGETVIDEOIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVideouivNV");
	if (p) {
		glGetVideouivNV = (PFNGLGETVIDEOUIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVideoi64vNV");
	if (p) {
		glGetVideoi64vNV = (PFNGLGETVIDEOI64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVideoui64vNV");
	if (p) {
		glGetVideoui64vNV = (PFNGLGETVIDEOUI64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPrimitiveRestartNV");
	if (p) {
		glPrimitiveRestartNV = (PFNGLPRIMITIVERESTARTNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPrimitiveRestartIndexNV");
	if (p) {
		glPrimitiveRestartIndexNV = (PFNGLPRIMITIVERESTARTINDEXNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCombinerParameterfvNV");
	if (p) {
		glCombinerParameterfvNV = (PFNGLCOMBINERPARAMETERFVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCombinerParameterfNV");
	if (p) {
		glCombinerParameterfNV = (PFNGLCOMBINERPARAMETERFNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCombinerParameterivNV");
	if (p) {
		glCombinerParameterivNV = (PFNGLCOMBINERPARAMETERIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCombinerParameteriNV");
	if (p) {
		glCombinerParameteriNV = (PFNGLCOMBINERPARAMETERINVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCombinerInputNV");
	if (p) {
		glCombinerInputNV = (PFNGLCOMBINERINPUTNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCombinerOutputNV");
	if (p) {
		glCombinerOutputNV = (PFNGLCOMBINEROUTPUTNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFinalCombinerInputNV");
	if (p) {
		glFinalCombinerInputNV = (PFNGLFINALCOMBINERINPUTNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetCombinerInputParameterfvNV");
	if (p) {
		glGetCombinerInputParameterfvNV = (PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetCombinerInputParameterivNV");
	if (p) {
		glGetCombinerInputParameterivNV = (PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetCombinerOutputParameterfvNV");
	if (p) {
		glGetCombinerOutputParameterfvNV = (PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetCombinerOutputParameterivNV");
	if (p) {
		glGetCombinerOutputParameterivNV = (PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetFinalCombinerInputParameterfvNV");
	if (p) {
		glGetFinalCombinerInputParameterfvNV = (PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetFinalCombinerInputParameterivNV");
	if (p) {
		glGetFinalCombinerInputParameterivNV = (PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCombinerStageParameterfvNV");
	if (p) {
		glCombinerStageParameterfvNV = (PFNGLCOMBINERSTAGEPARAMETERFVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetCombinerStageParameterfvNV");
	if (p) {
		glGetCombinerStageParameterfvNV = (PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFramebufferSampleLocationsfvNV");
	if (p) {
		glFramebufferSampleLocationsfvNV = (PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNamedFramebufferSampleLocationsfvNV");
	if (p) {
		glNamedFramebufferSampleLocationsfvNV = (PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glResolveDepthValuesNV");
	if (p) {
		glResolveDepthValuesNV = (PFNGLRESOLVEDEPTHVALUESNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMakeBufferResidentNV");
	if (p) {
		glMakeBufferResidentNV = (PFNGLMAKEBUFFERRESIDENTNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMakeBufferNonResidentNV");
	if (p) {
		glMakeBufferNonResidentNV = (PFNGLMAKEBUFFERNONRESIDENTNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsBufferResidentNV");
	if (p) {
		glIsBufferResidentNV = (PFNGLISBUFFERRESIDENTNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMakeNamedBufferResidentNV");
	if (p) {
		glMakeNamedBufferResidentNV = (PFNGLMAKENAMEDBUFFERRESIDENTNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glMakeNamedBufferNonResidentNV");
	if (p) {
		glMakeNamedBufferNonResidentNV = (PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsNamedBufferResidentNV");
	if (p) {
		glIsNamedBufferResidentNV = (PFNGLISNAMEDBUFFERRESIDENTNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetBufferParameterui64vNV");
	if (p) {
		glGetBufferParameterui64vNV = (PFNGLGETBUFFERPARAMETERUI64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetNamedBufferParameterui64vNV");
	if (p) {
		glGetNamedBufferParameterui64vNV = (PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetIntegerui64vNV");
	if (p) {
		glGetIntegerui64vNV = (PFNGLGETINTEGERUI64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniformui64NV");
	if (p) {
		glUniformui64NV = (PFNGLUNIFORMUI64NVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glUniformui64vNV");
	if (p) {
		glUniformui64vNV = (PFNGLUNIFORMUI64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformui64NV");
	if (p) {
		glProgramUniformui64NV = (PFNGLPROGRAMUNIFORMUI64NVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramUniformui64vNV");
	if (p) {
		glProgramUniformui64vNV = (PFNGLPROGRAMUNIFORMUI64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureBarrierNV");
	if (p) {
		glTextureBarrierNV = (PFNGLTEXTUREBARRIERNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexImage2DMultisampleCoverageNV");
	if (p) {
		glTexImage2DMultisampleCoverageNV = (PFNGLTEXIMAGE2DMULTISAMPLECOVERAGENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexImage3DMultisampleCoverageNV");
	if (p) {
		glTexImage3DMultisampleCoverageNV = (PFNGLTEXIMAGE3DMULTISAMPLECOVERAGENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureImage2DMultisampleNV");
	if (p) {
		glTextureImage2DMultisampleNV = (PFNGLTEXTUREIMAGE2DMULTISAMPLENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureImage3DMultisampleNV");
	if (p) {
		glTextureImage3DMultisampleNV = (PFNGLTEXTUREIMAGE3DMULTISAMPLENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureImage2DMultisampleCoverageNV");
	if (p) {
		glTextureImage2DMultisampleCoverageNV = (PFNGLTEXTUREIMAGE2DMULTISAMPLECOVERAGENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureImage3DMultisampleCoverageNV");
	if (p) {
		glTextureImage3DMultisampleCoverageNV = (PFNGLTEXTUREIMAGE3DMULTISAMPLECOVERAGENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBeginTransformFeedbackNV");
	if (p) {
		glBeginTransformFeedbackNV = (PFNGLBEGINTRANSFORMFEEDBACKNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEndTransformFeedbackNV");
	if (p) {
		glEndTransformFeedbackNV = (PFNGLENDTRANSFORMFEEDBACKNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTransformFeedbackAttribsNV");
	if (p) {
		glTransformFeedbackAttribsNV = (PFNGLTRANSFORMFEEDBACKATTRIBSNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindBufferRangeNV");
	if (p) {
		glBindBufferRangeNV = (PFNGLBINDBUFFERRANGENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindBufferOffsetNV");
	if (p) {
		glBindBufferOffsetNV = (PFNGLBINDBUFFEROFFSETNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindBufferBaseNV");
	if (p) {
		glBindBufferBaseNV = (PFNGLBINDBUFFERBASENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTransformFeedbackVaryingsNV");
	if (p) {
		glTransformFeedbackVaryingsNV = (PFNGLTRANSFORMFEEDBACKVARYINGSNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glActiveVaryingNV");
	if (p) {
		glActiveVaryingNV = (PFNGLACTIVEVARYINGNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVaryingLocationNV");
	if (p) {
		glGetVaryingLocationNV = (PFNGLGETVARYINGLOCATIONNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetActiveVaryingNV");
	if (p) {
		glGetActiveVaryingNV = (PFNGLGETACTIVEVARYINGNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTransformFeedbackVaryingNV");
	if (p) {
		glGetTransformFeedbackVaryingNV = (PFNGLGETTRANSFORMFEEDBACKVARYINGNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTransformFeedbackStreamAttribsNV");
	if (p) {
		glTransformFeedbackStreamAttribsNV = (PFNGLTRANSFORMFEEDBACKSTREAMATTRIBSNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindTransformFeedbackNV");
	if (p) {
		glBindTransformFeedbackNV = (PFNGLBINDTRANSFORMFEEDBACKNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeleteTransformFeedbacksNV");
	if (p) {
		glDeleteTransformFeedbacksNV = (PFNGLDELETETRANSFORMFEEDBACKSNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGenTransformFeedbacksNV");
	if (p) {
		glGenTransformFeedbacksNV = (PFNGLGENTRANSFORMFEEDBACKSNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsTransformFeedbackNV");
	if (p) {
		glIsTransformFeedbackNV = (PFNGLISTRANSFORMFEEDBACKNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPauseTransformFeedbackNV");
	if (p) {
		glPauseTransformFeedbackNV = (PFNGLPAUSETRANSFORMFEEDBACKNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glResumeTransformFeedbackNV");
	if (p) {
		glResumeTransformFeedbackNV = (PFNGLRESUMETRANSFORMFEEDBACKNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDrawTransformFeedbackNV");
	if (p) {
		glDrawTransformFeedbackNV = (PFNGLDRAWTRANSFORMFEEDBACKNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVDPAUInitNV");
	if (p) {
		glVDPAUInitNV = (PFNGLVDPAUINITNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVDPAUFiniNV");
	if (p) {
		glVDPAUFiniNV = (PFNGLVDPAUFININVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVDPAURegisterVideoSurfaceNV");
	if (p) {
		glVDPAURegisterVideoSurfaceNV = (PFNGLVDPAUREGISTERVIDEOSURFACENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVDPAURegisterOutputSurfaceNV");
	if (p) {
		glVDPAURegisterOutputSurfaceNV = (PFNGLVDPAUREGISTEROUTPUTSURFACENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVDPAUIsSurfaceNV");
	if (p) {
		glVDPAUIsSurfaceNV = (PFNGLVDPAUISSURFACENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVDPAUUnregisterSurfaceNV");
	if (p) {
		glVDPAUUnregisterSurfaceNV = (PFNGLVDPAUUNREGISTERSURFACENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVDPAUGetSurfaceivNV");
	if (p) {
		glVDPAUGetSurfaceivNV = (PFNGLVDPAUGETSURFACEIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVDPAUSurfaceAccessNV");
	if (p) {
		glVDPAUSurfaceAccessNV = (PFNGLVDPAUSURFACEACCESSNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVDPAUMapSurfacesNV");
	if (p) {
		glVDPAUMapSurfacesNV = (PFNGLVDPAUMAPSURFACESNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVDPAUUnmapSurfacesNV");
	if (p) {
		glVDPAUUnmapSurfacesNV = (PFNGLVDPAUUNMAPSURFACESNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFlushVertexArrayRangeNV");
	if (p) {
		glFlushVertexArrayRangeNV = (PFNGLFLUSHVERTEXARRAYRANGENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexArrayRangeNV");
	if (p) {
		glVertexArrayRangeNV = (PFNGLVERTEXARRAYRANGENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribL1i64NV");
	if (p) {
		glVertexAttribL1i64NV = (PFNGLVERTEXATTRIBL1I64NVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribL2i64NV");
	if (p) {
		glVertexAttribL2i64NV = (PFNGLVERTEXATTRIBL2I64NVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribL3i64NV");
	if (p) {
		glVertexAttribL3i64NV = (PFNGLVERTEXATTRIBL3I64NVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribL4i64NV");
	if (p) {
		glVertexAttribL4i64NV = (PFNGLVERTEXATTRIBL4I64NVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribL1i64vNV");
	if (p) {
		glVertexAttribL1i64vNV = (PFNGLVERTEXATTRIBL1I64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribL2i64vNV");
	if (p) {
		glVertexAttribL2i64vNV = (PFNGLVERTEXATTRIBL2I64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribL3i64vNV");
	if (p) {
		glVertexAttribL3i64vNV = (PFNGLVERTEXATTRIBL3I64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribL4i64vNV");
	if (p) {
		glVertexAttribL4i64vNV = (PFNGLVERTEXATTRIBL4I64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribL1ui64NV");
	if (p) {
		glVertexAttribL1ui64NV = (PFNGLVERTEXATTRIBL1UI64NVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribL2ui64NV");
	if (p) {
		glVertexAttribL2ui64NV = (PFNGLVERTEXATTRIBL2UI64NVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribL3ui64NV");
	if (p) {
		glVertexAttribL3ui64NV = (PFNGLVERTEXATTRIBL3UI64NVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribL4ui64NV");
	if (p) {
		glVertexAttribL4ui64NV = (PFNGLVERTEXATTRIBL4UI64NVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribL1ui64vNV");
	if (p) {
		glVertexAttribL1ui64vNV = (PFNGLVERTEXATTRIBL1UI64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribL2ui64vNV");
	if (p) {
		glVertexAttribL2ui64vNV = (PFNGLVERTEXATTRIBL2UI64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribL3ui64vNV");
	if (p) {
		glVertexAttribL3ui64vNV = (PFNGLVERTEXATTRIBL3UI64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribL4ui64vNV");
	if (p) {
		glVertexAttribL4ui64vNV = (PFNGLVERTEXATTRIBL4UI64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVertexAttribLi64vNV");
	if (p) {
		glGetVertexAttribLi64vNV = (PFNGLGETVERTEXATTRIBLI64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVertexAttribLui64vNV");
	if (p) {
		glGetVertexAttribLui64vNV = (PFNGLGETVERTEXATTRIBLUI64VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribLFormatNV");
	if (p) {
		glVertexAttribLFormatNV = (PFNGLVERTEXATTRIBLFORMATNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBufferAddressRangeNV");
	if (p) {
		glBufferAddressRangeNV = (PFNGLBUFFERADDRESSRANGENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexFormatNV");
	if (p) {
		glVertexFormatNV = (PFNGLVERTEXFORMATNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNormalFormatNV");
	if (p) {
		glNormalFormatNV = (PFNGLNORMALFORMATNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColorFormatNV");
	if (p) {
		glColorFormatNV = (PFNGLCOLORFORMATNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIndexFormatNV");
	if (p) {
		glIndexFormatNV = (PFNGLINDEXFORMATNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoordFormatNV");
	if (p) {
		glTexCoordFormatNV = (PFNGLTEXCOORDFORMATNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEdgeFlagFormatNV");
	if (p) {
		glEdgeFlagFormatNV = (PFNGLEDGEFLAGFORMATNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSecondaryColorFormatNV");
	if (p) {
		glSecondaryColorFormatNV = (PFNGLSECONDARYCOLORFORMATNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFogCoordFormatNV");
	if (p) {
		glFogCoordFormatNV = (PFNGLFOGCOORDFORMATNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribFormatNV");
	if (p) {
		glVertexAttribFormatNV = (PFNGLVERTEXATTRIBFORMATNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribIFormatNV");
	if (p) {
		glVertexAttribIFormatNV = (PFNGLVERTEXATTRIBIFORMATNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetIntegerui64i_vNV");
	if (p) {
		glGetIntegerui64i_vNV = (PFNGLGETINTEGERUI64I_VNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glAreProgramsResidentNV");
	if (p) {
		glAreProgramsResidentNV = (PFNGLAREPROGRAMSRESIDENTNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindProgramNV");
	if (p) {
		glBindProgramNV = (PFNGLBINDPROGRAMNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeleteProgramsNV");
	if (p) {
		glDeleteProgramsNV = (PFNGLDELETEPROGRAMSNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glExecuteProgramNV");
	if (p) {
		glExecuteProgramNV = (PFNGLEXECUTEPROGRAMNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGenProgramsNV");
	if (p) {
		glGenProgramsNV = (PFNGLGENPROGRAMSNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetProgramParameterdvNV");
	if (p) {
		glGetProgramParameterdvNV = (PFNGLGETPROGRAMPARAMETERDVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetProgramParameterfvNV");
	if (p) {
		glGetProgramParameterfvNV = (PFNGLGETPROGRAMPARAMETERFVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetProgramivNV");
	if (p) {
		glGetProgramivNV = (PFNGLGETPROGRAMIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetProgramStringNV");
	if (p) {
		glGetProgramStringNV = (PFNGLGETPROGRAMSTRINGNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTrackMatrixivNV");
	if (p) {
		glGetTrackMatrixivNV = (PFNGLGETTRACKMATRIXIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVertexAttribdvNV");
	if (p) {
		glGetVertexAttribdvNV = (PFNGLGETVERTEXATTRIBDVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVertexAttribfvNV");
	if (p) {
		glGetVertexAttribfvNV = (PFNGLGETVERTEXATTRIBFVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVertexAttribivNV");
	if (p) {
		glGetVertexAttribivNV = (PFNGLGETVERTEXATTRIBIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVertexAttribPointervNV");
	if (p) {
		glGetVertexAttribPointervNV = (PFNGLGETVERTEXATTRIBPOINTERVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsProgramNV");
	if (p) {
		glIsProgramNV = (PFNGLISPROGRAMNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glLoadProgramNV");
	if (p) {
		glLoadProgramNV = (PFNGLLOADPROGRAMNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramParameter4dNV");
	if (p) {
		glProgramParameter4dNV = (PFNGLPROGRAMPARAMETER4DNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramParameter4dvNV");
	if (p) {
		glProgramParameter4dvNV = (PFNGLPROGRAMPARAMETER4DVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramParameter4fNV");
	if (p) {
		glProgramParameter4fNV = (PFNGLPROGRAMPARAMETER4FNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramParameter4fvNV");
	if (p) {
		glProgramParameter4fvNV = (PFNGLPROGRAMPARAMETER4FVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramParameters4dvNV");
	if (p) {
		glProgramParameters4dvNV = (PFNGLPROGRAMPARAMETERS4DVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glProgramParameters4fvNV");
	if (p) {
		glProgramParameters4fvNV = (PFNGLPROGRAMPARAMETERS4FVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glRequestResidentProgramsNV");
	if (p) {
		glRequestResidentProgramsNV = (PFNGLREQUESTRESIDENTPROGRAMSNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTrackMatrixNV");
	if (p) {
		glTrackMatrixNV = (PFNGLTRACKMATRIXNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribPointerNV");
	if (p) {
		glVertexAttribPointerNV = (PFNGLVERTEXATTRIBPOINTERNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib1dNV");
	if (p) {
		glVertexAttrib1dNV = (PFNGLVERTEXATTRIB1DNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib1dvNV");
	if (p) {
		glVertexAttrib1dvNV = (PFNGLVERTEXATTRIB1DVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib1fNV");
	if (p) {
		glVertexAttrib1fNV = (PFNGLVERTEXATTRIB1FNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib1fvNV");
	if (p) {
		glVertexAttrib1fvNV = (PFNGLVERTEXATTRIB1FVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib1sNV");
	if (p) {
		glVertexAttrib1sNV = (PFNGLVERTEXATTRIB1SNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib1svNV");
	if (p) {
		glVertexAttrib1svNV = (PFNGLVERTEXATTRIB1SVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib2dNV");
	if (p) {
		glVertexAttrib2dNV = (PFNGLVERTEXATTRIB2DNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib2dvNV");
	if (p) {
		glVertexAttrib2dvNV = (PFNGLVERTEXATTRIB2DVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib2fNV");
	if (p) {
		glVertexAttrib2fNV = (PFNGLVERTEXATTRIB2FNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib2fvNV");
	if (p) {
		glVertexAttrib2fvNV = (PFNGLVERTEXATTRIB2FVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib2sNV");
	if (p) {
		glVertexAttrib2sNV = (PFNGLVERTEXATTRIB2SNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib2svNV");
	if (p) {
		glVertexAttrib2svNV = (PFNGLVERTEXATTRIB2SVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib3dNV");
	if (p) {
		glVertexAttrib3dNV = (PFNGLVERTEXATTRIB3DNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib3dvNV");
	if (p) {
		glVertexAttrib3dvNV = (PFNGLVERTEXATTRIB3DVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib3fNV");
	if (p) {
		glVertexAttrib3fNV = (PFNGLVERTEXATTRIB3FNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib3fvNV");
	if (p) {
		glVertexAttrib3fvNV = (PFNGLVERTEXATTRIB3FVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib3sNV");
	if (p) {
		glVertexAttrib3sNV = (PFNGLVERTEXATTRIB3SNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib3svNV");
	if (p) {
		glVertexAttrib3svNV = (PFNGLVERTEXATTRIB3SVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4dNV");
	if (p) {
		glVertexAttrib4dNV = (PFNGLVERTEXATTRIB4DNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4dvNV");
	if (p) {
		glVertexAttrib4dvNV = (PFNGLVERTEXATTRIB4DVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4fNV");
	if (p) {
		glVertexAttrib4fNV = (PFNGLVERTEXATTRIB4FNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4fvNV");
	if (p) {
		glVertexAttrib4fvNV = (PFNGLVERTEXATTRIB4FVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4sNV");
	if (p) {
		glVertexAttrib4sNV = (PFNGLVERTEXATTRIB4SNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4svNV");
	if (p) {
		glVertexAttrib4svNV = (PFNGLVERTEXATTRIB4SVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4ubNV");
	if (p) {
		glVertexAttrib4ubNV = (PFNGLVERTEXATTRIB4UBNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttrib4ubvNV");
	if (p) {
		glVertexAttrib4ubvNV = (PFNGLVERTEXATTRIB4UBVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribs1dvNV");
	if (p) {
		glVertexAttribs1dvNV = (PFNGLVERTEXATTRIBS1DVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribs1fvNV");
	if (p) {
		glVertexAttribs1fvNV = (PFNGLVERTEXATTRIBS1FVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribs1svNV");
	if (p) {
		glVertexAttribs1svNV = (PFNGLVERTEXATTRIBS1SVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribs2dvNV");
	if (p) {
		glVertexAttribs2dvNV = (PFNGLVERTEXATTRIBS2DVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribs2fvNV");
	if (p) {
		glVertexAttribs2fvNV = (PFNGLVERTEXATTRIBS2FVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribs2svNV");
	if (p) {
		glVertexAttribs2svNV = (PFNGLVERTEXATTRIBS2SVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribs3dvNV");
	if (p) {
		glVertexAttribs3dvNV = (PFNGLVERTEXATTRIBS3DVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribs3fvNV");
	if (p) {
		glVertexAttribs3fvNV = (PFNGLVERTEXATTRIBS3FVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribs3svNV");
	if (p) {
		glVertexAttribs3svNV = (PFNGLVERTEXATTRIBS3SVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribs4dvNV");
	if (p) {
		glVertexAttribs4dvNV = (PFNGLVERTEXATTRIBS4DVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribs4fvNV");
	if (p) {
		glVertexAttribs4fvNV = (PFNGLVERTEXATTRIBS4FVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribs4svNV");
	if (p) {
		glVertexAttribs4svNV = (PFNGLVERTEXATTRIBS4SVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribs4ubvNV");
	if (p) {
		glVertexAttribs4ubvNV = (PFNGLVERTEXATTRIBS4UBVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI1iEXT");
	if (p) {
		glVertexAttribI1iEXT = (PFNGLVERTEXATTRIBI1IEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI2iEXT");
	if (p) {
		glVertexAttribI2iEXT = (PFNGLVERTEXATTRIBI2IEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI3iEXT");
	if (p) {
		glVertexAttribI3iEXT = (PFNGLVERTEXATTRIBI3IEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI4iEXT");
	if (p) {
		glVertexAttribI4iEXT = (PFNGLVERTEXATTRIBI4IEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI1uiEXT");
	if (p) {
		glVertexAttribI1uiEXT = (PFNGLVERTEXATTRIBI1UIEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI2uiEXT");
	if (p) {
		glVertexAttribI2uiEXT = (PFNGLVERTEXATTRIBI2UIEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI3uiEXT");
	if (p) {
		glVertexAttribI3uiEXT = (PFNGLVERTEXATTRIBI3UIEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI4uiEXT");
	if (p) {
		glVertexAttribI4uiEXT = (PFNGLVERTEXATTRIBI4UIEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI1ivEXT");
	if (p) {
		glVertexAttribI1ivEXT = (PFNGLVERTEXATTRIBI1IVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI2ivEXT");
	if (p) {
		glVertexAttribI2ivEXT = (PFNGLVERTEXATTRIBI2IVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI3ivEXT");
	if (p) {
		glVertexAttribI3ivEXT = (PFNGLVERTEXATTRIBI3IVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI4ivEXT");
	if (p) {
		glVertexAttribI4ivEXT = (PFNGLVERTEXATTRIBI4IVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI1uivEXT");
	if (p) {
		glVertexAttribI1uivEXT = (PFNGLVERTEXATTRIBI1UIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI2uivEXT");
	if (p) {
		glVertexAttribI2uivEXT = (PFNGLVERTEXATTRIBI2UIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI3uivEXT");
	if (p) {
		glVertexAttribI3uivEXT = (PFNGLVERTEXATTRIBI3UIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI4uivEXT");
	if (p) {
		glVertexAttribI4uivEXT = (PFNGLVERTEXATTRIBI4UIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI4bvEXT");
	if (p) {
		glVertexAttribI4bvEXT = (PFNGLVERTEXATTRIBI4BVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI4svEXT");
	if (p) {
		glVertexAttribI4svEXT = (PFNGLVERTEXATTRIBI4SVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI4ubvEXT");
	if (p) {
		glVertexAttribI4ubvEXT = (PFNGLVERTEXATTRIBI4UBVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribI4usvEXT");
	if (p) {
		glVertexAttribI4usvEXT = (PFNGLVERTEXATTRIBI4USVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVertexAttribIPointerEXT");
	if (p) {
		glVertexAttribIPointerEXT = (PFNGLVERTEXATTRIBIPOINTEREXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVertexAttribIivEXT");
	if (p) {
		glGetVertexAttribIivEXT = (PFNGLGETVERTEXATTRIBIIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVertexAttribIuivEXT");
	if (p) {
		glGetVertexAttribIuivEXT = (PFNGLGETVERTEXATTRIBIUIVEXTPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBeginVideoCaptureNV");
	if (p) {
		glBeginVideoCaptureNV = (PFNGLBEGINVIDEOCAPTURENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindVideoCaptureStreamBufferNV");
	if (p) {
		glBindVideoCaptureStreamBufferNV = (PFNGLBINDVIDEOCAPTURESTREAMBUFFERNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glBindVideoCaptureStreamTextureNV");
	if (p) {
		glBindVideoCaptureStreamTextureNV = (PFNGLBINDVIDEOCAPTURESTREAMTEXTURENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glEndVideoCaptureNV");
	if (p) {
		glEndVideoCaptureNV = (PFNGLENDVIDEOCAPTURENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVideoCaptureivNV");
	if (p) {
		glGetVideoCaptureivNV = (PFNGLGETVIDEOCAPTUREIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVideoCaptureStreamivNV");
	if (p) {
		glGetVideoCaptureStreamivNV = (PFNGLGETVIDEOCAPTURESTREAMIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVideoCaptureStreamfvNV");
	if (p) {
		glGetVideoCaptureStreamfvNV = (PFNGLGETVIDEOCAPTURESTREAMFVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetVideoCaptureStreamdvNV");
	if (p) {
		glGetVideoCaptureStreamdvNV = (PFNGLGETVIDEOCAPTURESTREAMDVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVideoCaptureNV");
	if (p) {
		glVideoCaptureNV = (PFNGLVIDEOCAPTURENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVideoCaptureStreamParameterivNV");
	if (p) {
		glVideoCaptureStreamParameterivNV = (PFNGLVIDEOCAPTURESTREAMPARAMETERIVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVideoCaptureStreamParameterfvNV");
	if (p) {
		glVideoCaptureStreamParameterfvNV = (PFNGLVIDEOCAPTURESTREAMPARAMETERFVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glVideoCaptureStreamParameterdvNV");
	if (p) {
		glVideoCaptureStreamParameterdvNV = (PFNGLVIDEOCAPTURESTREAMPARAMETERDVNVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glViewportSwizzleNV");
	if (p) {
		glViewportSwizzleNV = (PFNGLVIEWPORTSWIZZLENVPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFramebufferTextureMultiviewOVR");
	if (p) {
		glFramebufferTextureMultiviewOVR = (PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glHintPGI");
	if (p) {
		glHintPGI = (PFNGLHINTPGIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDetailTexFuncSGIS");
	if (p) {
		glDetailTexFuncSGIS = (PFNGLDETAILTEXFUNCSGISPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetDetailTexFuncSGIS");
	if (p) {
		glGetDetailTexFuncSGIS = (PFNGLGETDETAILTEXFUNCSGISPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFogFuncSGIS");
	if (p) {
		glFogFuncSGIS = (PFNGLFOGFUNCSGISPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetFogFuncSGIS");
	if (p) {
		glGetFogFuncSGIS = (PFNGLGETFOGFUNCSGISPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSampleMaskSGIS");
	if (p) {
		glSampleMaskSGIS = (PFNGLSAMPLEMASKSGISPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSamplePatternSGIS");
	if (p) {
		glSamplePatternSGIS = (PFNGLSAMPLEPATTERNSGISPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPixelTexGenParameteriSGIS");
	if (p) {
		glPixelTexGenParameteriSGIS = (PFNGLPIXELTEXGENPARAMETERISGISPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPixelTexGenParameterivSGIS");
	if (p) {
		glPixelTexGenParameterivSGIS = (PFNGLPIXELTEXGENPARAMETERIVSGISPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPixelTexGenParameterfSGIS");
	if (p) {
		glPixelTexGenParameterfSGIS = (PFNGLPIXELTEXGENPARAMETERFSGISPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPixelTexGenParameterfvSGIS");
	if (p) {
		glPixelTexGenParameterfvSGIS = (PFNGLPIXELTEXGENPARAMETERFVSGISPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetPixelTexGenParameterivSGIS");
	if (p) {
		glGetPixelTexGenParameterivSGIS = (PFNGLGETPIXELTEXGENPARAMETERIVSGISPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetPixelTexGenParameterfvSGIS");
	if (p) {
		glGetPixelTexGenParameterfvSGIS = (PFNGLGETPIXELTEXGENPARAMETERFVSGISPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPointParameterfSGIS");
	if (p) {
		glPointParameterfSGIS = (PFNGLPOINTPARAMETERFSGISPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPointParameterfvSGIS");
	if (p) {
		glPointParameterfvSGIS = (PFNGLPOINTPARAMETERFVSGISPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSharpenTexFuncSGIS");
	if (p) {
		glSharpenTexFuncSGIS = (PFNGLSHARPENTEXFUNCSGISPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetSharpenTexFuncSGIS");
	if (p) {
		glGetSharpenTexFuncSGIS = (PFNGLGETSHARPENTEXFUNCSGISPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexImage4DSGIS");
	if (p) {
		glTexImage4DSGIS = (PFNGLTEXIMAGE4DSGISPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexSubImage4DSGIS");
	if (p) {
		glTexSubImage4DSGIS = (PFNGLTEXSUBIMAGE4DSGISPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTextureColorMaskSGIS");
	if (p) {
		glTextureColorMaskSGIS = (PFNGLTEXTURECOLORMASKSGISPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetTexFilterFuncSGIS");
	if (p) {
		glGetTexFilterFuncSGIS = (PFNGLGETTEXFILTERFUNCSGISPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexFilterFuncSGIS");
	if (p) {
		glTexFilterFuncSGIS = (PFNGLTEXFILTERFUNCSGISPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glAsyncMarkerSGIX");
	if (p) {
		glAsyncMarkerSGIX = (PFNGLASYNCMARKERSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFinishAsyncSGIX");
	if (p) {
		glFinishAsyncSGIX = (PFNGLFINISHASYNCSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPollAsyncSGIX");
	if (p) {
		glPollAsyncSGIX = (PFNGLPOLLASYNCSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGenAsyncMarkersSGIX");
	if (p) {
		glGenAsyncMarkersSGIX = (PFNGLGENASYNCMARKERSSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeleteAsyncMarkersSGIX");
	if (p) {
		glDeleteAsyncMarkersSGIX = (PFNGLDELETEASYNCMARKERSSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIsAsyncMarkerSGIX");
	if (p) {
		glIsAsyncMarkerSGIX = (PFNGLISASYNCMARKERSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFlushRasterSGIX");
	if (p) {
		glFlushRasterSGIX = (PFNGLFLUSHRASTERSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFragmentColorMaterialSGIX");
	if (p) {
		glFragmentColorMaterialSGIX = (PFNGLFRAGMENTCOLORMATERIALSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFragmentLightfSGIX");
	if (p) {
		glFragmentLightfSGIX = (PFNGLFRAGMENTLIGHTFSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFragmentLightfvSGIX");
	if (p) {
		glFragmentLightfvSGIX = (PFNGLFRAGMENTLIGHTFVSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFragmentLightiSGIX");
	if (p) {
		glFragmentLightiSGIX = (PFNGLFRAGMENTLIGHTISGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFragmentLightivSGIX");
	if (p) {
		glFragmentLightivSGIX = (PFNGLFRAGMENTLIGHTIVSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFragmentLightModelfSGIX");
	if (p) {
		glFragmentLightModelfSGIX = (PFNGLFRAGMENTLIGHTMODELFSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFragmentLightModelfvSGIX");
	if (p) {
		glFragmentLightModelfvSGIX = (PFNGLFRAGMENTLIGHTMODELFVSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFragmentLightModeliSGIX");
	if (p) {
		glFragmentLightModeliSGIX = (PFNGLFRAGMENTLIGHTMODELISGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFragmentLightModelivSGIX");
	if (p) {
		glFragmentLightModelivSGIX = (PFNGLFRAGMENTLIGHTMODELIVSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFragmentMaterialfSGIX");
	if (p) {
		glFragmentMaterialfSGIX = (PFNGLFRAGMENTMATERIALFSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFragmentMaterialfvSGIX");
	if (p) {
		glFragmentMaterialfvSGIX = (PFNGLFRAGMENTMATERIALFVSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFragmentMaterialiSGIX");
	if (p) {
		glFragmentMaterialiSGIX = (PFNGLFRAGMENTMATERIALISGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFragmentMaterialivSGIX");
	if (p) {
		glFragmentMaterialivSGIX = (PFNGLFRAGMENTMATERIALIVSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetFragmentLightfvSGIX");
	if (p) {
		glGetFragmentLightfvSGIX = (PFNGLGETFRAGMENTLIGHTFVSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetFragmentLightivSGIX");
	if (p) {
		glGetFragmentLightivSGIX = (PFNGLGETFRAGMENTLIGHTIVSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetFragmentMaterialfvSGIX");
	if (p) {
		glGetFragmentMaterialfvSGIX = (PFNGLGETFRAGMENTMATERIALFVSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetFragmentMaterialivSGIX");
	if (p) {
		glGetFragmentMaterialivSGIX = (PFNGLGETFRAGMENTMATERIALIVSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glLightEnviSGIX");
	if (p) {
		glLightEnviSGIX = (PFNGLLIGHTENVISGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFrameZoomSGIX");
	if (p) {
		glFrameZoomSGIX = (PFNGLFRAMEZOOMSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glIglooInterfaceSGIX");
	if (p) {
		glIglooInterfaceSGIX = (PFNGLIGLOOINTERFACESGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetInstrumentsSGIX");
	if (p) {
		glGetInstrumentsSGIX = (PFNGLGETINSTRUMENTSSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glInstrumentsBufferSGIX");
	if (p) {
		glInstrumentsBufferSGIX = (PFNGLINSTRUMENTSBUFFERSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPollInstrumentsSGIX");
	if (p) {
		glPollInstrumentsSGIX = (PFNGLPOLLINSTRUMENTSSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glReadInstrumentsSGIX");
	if (p) {
		glReadInstrumentsSGIX = (PFNGLREADINSTRUMENTSSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glStartInstrumentsSGIX");
	if (p) {
		glStartInstrumentsSGIX = (PFNGLSTARTINSTRUMENTSSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glStopInstrumentsSGIX");
	if (p) {
		glStopInstrumentsSGIX = (PFNGLSTOPINSTRUMENTSSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetListParameterfvSGIX");
	if (p) {
		glGetListParameterfvSGIX = (PFNGLGETLISTPARAMETERFVSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetListParameterivSGIX");
	if (p) {
		glGetListParameterivSGIX = (PFNGLGETLISTPARAMETERIVSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glListParameterfSGIX");
	if (p) {
		glListParameterfSGIX = (PFNGLLISTPARAMETERFSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glListParameterfvSGIX");
	if (p) {
		glListParameterfvSGIX = (PFNGLLISTPARAMETERFVSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glListParameteriSGIX");
	if (p) {
		glListParameteriSGIX = (PFNGLLISTPARAMETERISGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glListParameterivSGIX");
	if (p) {
		glListParameterivSGIX = (PFNGLLISTPARAMETERIVSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glPixelTexGenSGIX");
	if (p) {
		glPixelTexGenSGIX = (PFNGLPIXELTEXGENSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeformationMap3dSGIX");
	if (p) {
		glDeformationMap3dSGIX = (PFNGLDEFORMATIONMAP3DSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeformationMap3fSGIX");
	if (p) {
		glDeformationMap3fSGIX = (PFNGLDEFORMATIONMAP3FSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDeformSGIX");
	if (p) {
		glDeformSGIX = (PFNGLDEFORMSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glLoadIdentityDeformationMapSGIX");
	if (p) {
		glLoadIdentityDeformationMapSGIX = (PFNGLLOADIDENTITYDEFORMATIONMAPSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glReferencePlaneSGIX");
	if (p) {
		glReferencePlaneSGIX = (PFNGLREFERENCEPLANESGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSpriteParameterfSGIX");
	if (p) {
		glSpriteParameterfSGIX = (PFNGLSPRITEPARAMETERFSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSpriteParameterfvSGIX");
	if (p) {
		glSpriteParameterfvSGIX = (PFNGLSPRITEPARAMETERFVSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSpriteParameteriSGIX");
	if (p) {
		glSpriteParameteriSGIX = (PFNGLSPRITEPARAMETERISGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glSpriteParameterivSGIX");
	if (p) {
		glSpriteParameterivSGIX = (PFNGLSPRITEPARAMETERIVSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTagSampleBufferSGIX");
	if (p) {
		glTagSampleBufferSGIX = (PFNGLTAGSAMPLEBUFFERSGIXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColorTableSGI");
	if (p) {
		glColorTableSGI = (PFNGLCOLORTABLESGIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColorTableParameterfvSGI");
	if (p) {
		glColorTableParameterfvSGI = (PFNGLCOLORTABLEPARAMETERFVSGIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColorTableParameterivSGI");
	if (p) {
		glColorTableParameterivSGI = (PFNGLCOLORTABLEPARAMETERIVSGIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glCopyColorTableSGI");
	if (p) {
		glCopyColorTableSGI = (PFNGLCOPYCOLORTABLESGIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetColorTableSGI");
	if (p) {
		glGetColorTableSGI = (PFNGLGETCOLORTABLESGIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetColorTableParameterfvSGI");
	if (p) {
		glGetColorTableParameterfvSGI = (PFNGLGETCOLORTABLEPARAMETERFVSGIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGetColorTableParameterivSGI");
	if (p) {
		glGetColorTableParameterivSGI = (PFNGLGETCOLORTABLEPARAMETERIVSGIPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glFinishTextureSUNX");
	if (p) {
		glFinishTextureSUNX = (PFNGLFINISHTEXTURESUNXPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGlobalAlphaFactorbSUN");
	if (p) {
		glGlobalAlphaFactorbSUN = (PFNGLGLOBALALPHAFACTORBSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGlobalAlphaFactorsSUN");
	if (p) {
		glGlobalAlphaFactorsSUN = (PFNGLGLOBALALPHAFACTORSSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGlobalAlphaFactoriSUN");
	if (p) {
		glGlobalAlphaFactoriSUN = (PFNGLGLOBALALPHAFACTORISUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGlobalAlphaFactorfSUN");
	if (p) {
		glGlobalAlphaFactorfSUN = (PFNGLGLOBALALPHAFACTORFSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGlobalAlphaFactordSUN");
	if (p) {
		glGlobalAlphaFactordSUN = (PFNGLGLOBALALPHAFACTORDSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGlobalAlphaFactorubSUN");
	if (p) {
		glGlobalAlphaFactorubSUN = (PFNGLGLOBALALPHAFACTORUBSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGlobalAlphaFactorusSUN");
	if (p) {
		glGlobalAlphaFactorusSUN = (PFNGLGLOBALALPHAFACTORUSSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glGlobalAlphaFactoruiSUN");
	if (p) {
		glGlobalAlphaFactoruiSUN = (PFNGLGLOBALALPHAFACTORUISUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glDrawMeshArraysSUN");
	if (p) {
		glDrawMeshArraysSUN = (PFNGLDRAWMESHARRAYSSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glReplacementCodeuiSUN");
	if (p) {
		glReplacementCodeuiSUN = (PFNGLREPLACEMENTCODEUISUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glReplacementCodeusSUN");
	if (p) {
		glReplacementCodeusSUN = (PFNGLREPLACEMENTCODEUSSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glReplacementCodeubSUN");
	if (p) {
		glReplacementCodeubSUN = (PFNGLREPLACEMENTCODEUBSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glReplacementCodeuivSUN");
	if (p) {
		glReplacementCodeuivSUN = (PFNGLREPLACEMENTCODEUIVSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glReplacementCodeusvSUN");
	if (p) {
		glReplacementCodeusvSUN = (PFNGLREPLACEMENTCODEUSVSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glReplacementCodeubvSUN");
	if (p) {
		glReplacementCodeubvSUN = (PFNGLREPLACEMENTCODEUBVSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glReplacementCodePointerSUN");
	if (p) {
		glReplacementCodePointerSUN = (PFNGLREPLACEMENTCODEPOINTERSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColor4ubVertex2fSUN");
	if (p) {
		glColor4ubVertex2fSUN = (PFNGLCOLOR4UBVERTEX2FSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColor4ubVertex2fvSUN");
	if (p) {
		glColor4ubVertex2fvSUN = (PFNGLCOLOR4UBVERTEX2FVSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColor4ubVertex3fSUN");
	if (p) {
		glColor4ubVertex3fSUN = (PFNGLCOLOR4UBVERTEX3FSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColor4ubVertex3fvSUN");
	if (p) {
		glColor4ubVertex3fvSUN = (PFNGLCOLOR4UBVERTEX3FVSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColor3fVertex3fSUN");
	if (p) {
		glColor3fVertex3fSUN = (PFNGLCOLOR3FVERTEX3FSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColor3fVertex3fvSUN");
	if (p) {
		glColor3fVertex3fvSUN = (PFNGLCOLOR3FVERTEX3FVSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNormal3fVertex3fSUN");
	if (p) {
		glNormal3fVertex3fSUN = (PFNGLNORMAL3FVERTEX3FSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glNormal3fVertex3fvSUN");
	if (p) {
		glNormal3fVertex3fvSUN = (PFNGLNORMAL3FVERTEX3FVSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColor4fNormal3fVertex3fSUN");
	if (p) {
		glColor4fNormal3fVertex3fSUN = (PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glColor4fNormal3fVertex3fvSUN");
	if (p) {
		glColor4fNormal3fVertex3fvSUN = (PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord2fVertex3fSUN");
	if (p) {
		glTexCoord2fVertex3fSUN = (PFNGLTEXCOORD2FVERTEX3FSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord2fVertex3fvSUN");
	if (p) {
		glTexCoord2fVertex3fvSUN = (PFNGLTEXCOORD2FVERTEX3FVSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord4fVertex4fSUN");
	if (p) {
		glTexCoord4fVertex4fSUN = (PFNGLTEXCOORD4FVERTEX4FSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord4fVertex4fvSUN");
	if (p) {
		glTexCoord4fVertex4fvSUN = (PFNGLTEXCOORD4FVERTEX4FVSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord2fColor4ubVertex3fSUN");
	if (p) {
		glTexCoord2fColor4ubVertex3fSUN = (PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord2fColor4ubVertex3fvSUN");
	if (p) {
		glTexCoord2fColor4ubVertex3fvSUN = (PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord2fColor3fVertex3fSUN");
	if (p) {
		glTexCoord2fColor3fVertex3fSUN = (PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord2fColor3fVertex3fvSUN");
	if (p) {
		glTexCoord2fColor3fVertex3fvSUN = (PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord2fNormal3fVertex3fSUN");
	if (p) {
		glTexCoord2fNormal3fVertex3fSUN = (PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord2fNormal3fVertex3fvSUN");
	if (p) {
		glTexCoord2fNormal3fVertex3fvSUN = (PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord2fColor4fNormal3fVertex3fSUN");
	if (p) {
		glTexCoord2fColor4fNormal3fVertex3fSUN = (PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord2fColor4fNormal3fVertex3fvSUN");
	if (p) {
		glTexCoord2fColor4fNormal3fVertex3fvSUN = (PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord4fColor4fNormal3fVertex4fSUN");
	if (p) {
		glTexCoord4fColor4fNormal3fVertex4fSUN = (PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glTexCoord4fColor4fNormal3fVertex4fvSUN");
	if (p) {
		glTexCoord4fColor4fNormal3fVertex4fvSUN = (PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glReplacementCodeuiVertex3fSUN");
	if (p) {
		glReplacementCodeuiVertex3fSUN = (PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glReplacementCodeuiVertex3fvSUN");
	if (p) {
		glReplacementCodeuiVertex3fvSUN = (PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glReplacementCodeuiColor4ubVertex3fSUN");
	if (p) {
		glReplacementCodeuiColor4ubVertex3fSUN = (PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glReplacementCodeuiColor4ubVertex3fvSUN");
	if (p) {
		glReplacementCodeuiColor4ubVertex3fvSUN = (PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glReplacementCodeuiColor3fVertex3fSUN");
	if (p) {
		glReplacementCodeuiColor3fVertex3fSUN = (PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glReplacementCodeuiColor3fVertex3fvSUN");
	if (p) {
		glReplacementCodeuiColor3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glReplacementCodeuiNormal3fVertex3fSUN");
	if (p) {
		glReplacementCodeuiNormal3fVertex3fSUN = (PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glReplacementCodeuiNormal3fVertex3fvSUN");
	if (p) {
		glReplacementCodeuiNormal3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glReplacementCodeuiColor4fNormal3fVertex3fSUN");
	if (p) {
		glReplacementCodeuiColor4fNormal3fVertex3fSUN = (PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glReplacementCodeuiColor4fNormal3fVertex3fvSUN");
	if (p) {
		glReplacementCodeuiColor4fNormal3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glReplacementCodeuiTexCoord2fVertex3fSUN");
	if (p) {
		glReplacementCodeuiTexCoord2fVertex3fSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glReplacementCodeuiTexCoord2fVertex3fvSUN");
	if (p) {
		glReplacementCodeuiTexCoord2fVertex3fvSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN");
	if (p) {
		glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN");
	if (p) {
		glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN");
	if (p) {
		glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC)p;
		m_count++;
	}
	p = wglGetProcAddress("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN");
	if (p) {
		glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC)p;
		m_count++;
	}
	return (m_count > 0);
}
