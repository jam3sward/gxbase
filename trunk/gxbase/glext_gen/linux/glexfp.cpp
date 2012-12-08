#include "glexfp.h"
#include <stdlib.h>

/**
 * This is an automatically generated file: do not edit
 * Generated on Sat Dec  8 21:07:16 2012
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
	return 2081;
}//Known

//----------------------------------------------------------------------------

GLAPI void APIENTRY stub_glBlendColor (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) {
}
GLAPI void APIENTRY stub_glBlendEquation (GLenum mode) {
}
GLAPI void APIENTRY stub_glDrawRangeElements (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices) {
}
GLAPI void APIENTRY stub_glTexImage3D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels) {
}
GLAPI void APIENTRY stub_glTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels) {
}
GLAPI void APIENTRY stub_glCopyTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glColorTable (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table) {
}
GLAPI void APIENTRY stub_glColorTableParameterfv (GLenum target, GLenum pname, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glColorTableParameteriv (GLenum target, GLenum pname, const GLint *params) {
}
GLAPI void APIENTRY stub_glCopyColorTable (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width) {
}
GLAPI void APIENTRY stub_glGetColorTable (GLenum target, GLenum format, GLenum type, GLvoid *table) {
}
GLAPI void APIENTRY stub_glGetColorTableParameterfv (GLenum target, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetColorTableParameteriv (GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glColorSubTable (GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *data) {
}
GLAPI void APIENTRY stub_glCopyColorSubTable (GLenum target, GLsizei start, GLint x, GLint y, GLsizei width) {
}
GLAPI void APIENTRY stub_glConvolutionFilter1D (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *image) {
}
GLAPI void APIENTRY stub_glConvolutionFilter2D (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *image) {
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
GLAPI void APIENTRY stub_glGetConvolutionFilter (GLenum target, GLenum format, GLenum type, GLvoid *image) {
}
GLAPI void APIENTRY stub_glGetConvolutionParameterfv (GLenum target, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetConvolutionParameteriv (GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetSeparableFilter (GLenum target, GLenum format, GLenum type, GLvoid *row, GLvoid *column, GLvoid *span) {
}
GLAPI void APIENTRY stub_glSeparableFilter2D (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *row, const GLvoid *column) {
}
GLAPI void APIENTRY stub_glGetHistogram (GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values) {
}
GLAPI void APIENTRY stub_glGetHistogramParameterfv (GLenum target, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetHistogramParameteriv (GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetMinmax (GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values) {
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
GLAPI void APIENTRY stub_glActiveTexture (GLenum texture) {
}
GLAPI void APIENTRY stub_glSampleCoverage (GLfloat value, GLboolean invert) {
}
GLAPI void APIENTRY stub_glCompressedTexImage3D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data) {
}
GLAPI void APIENTRY stub_glCompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data) {
}
GLAPI void APIENTRY stub_glCompressedTexImage1D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data) {
}
GLAPI void APIENTRY stub_glCompressedTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data) {
}
GLAPI void APIENTRY stub_glCompressedTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data) {
}
GLAPI void APIENTRY stub_glCompressedTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data) {
}
GLAPI void APIENTRY stub_glGetCompressedTexImage (GLenum target, GLint level, GLvoid *img) {
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
GLAPI void APIENTRY stub_glMultiDrawElements (GLenum mode, const GLsizei *count, GLenum type, const GLvoid* const *indices, GLsizei drawcount) {
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
GLAPI void APIENTRY stub_glFogCoordPointer (GLenum type, GLsizei stride, const GLvoid *pointer) {
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
GLAPI void APIENTRY stub_glSecondaryColorPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer) {
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
GLAPI void APIENTRY stub_glBufferData (GLenum target, GLsizeiptr size, const GLvoid *data, GLenum usage) {
}
GLAPI void APIENTRY stub_glBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid *data) {
}
GLAPI void APIENTRY stub_glGetBufferSubData (GLenum target, GLintptr offset, GLsizeiptr size, GLvoid *data) {
}
GLAPI GLvoid* APIENTRY stub_glMapBuffer (GLenum target, GLenum access) {
	return (GLvoid*)0;
}
GLAPI GLboolean APIENTRY stub_glUnmapBuffer (GLenum target) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glGetBufferParameteriv (GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetBufferPointerv (GLenum target, GLenum pname, GLvoid* *params) {
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
GLAPI void APIENTRY stub_glGetAttachedShaders (GLuint program, GLsizei maxCount, GLsizei *count, GLuint *obj) {
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
GLAPI void APIENTRY stub_glGetVertexAttribPointerv (GLuint index, GLenum pname, GLvoid* *pointer) {
}
GLAPI GLboolean APIENTRY stub_glIsProgram (GLuint program) {
	return (GLboolean)0;
}
GLAPI GLboolean APIENTRY stub_glIsShader (GLuint shader) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glLinkProgram (GLuint program) {
}
GLAPI void APIENTRY stub_glShaderSource (GLuint shader, GLsizei count, const GLchar* const *string, const GLint *length) {
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
GLAPI void APIENTRY stub_glVertexAttribPointer (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer) {
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
GLAPI void APIENTRY stub_glTransformFeedbackVaryings (GLuint program, GLsizei count, const GLchar* const *varyings, GLenum bufferMode) {
}
GLAPI void APIENTRY stub_glGetTransformFeedbackVarying (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name) {
}
GLAPI void APIENTRY stub_glClampColor (GLenum target, GLenum clamp) {
}
GLAPI void APIENTRY stub_glBeginConditionalRender (GLuint id, GLenum mode) {
}
GLAPI void APIENTRY stub_glEndConditionalRender (void) {
}
GLAPI void APIENTRY stub_glVertexAttribIPointer (GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer) {
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
GLAPI const GLubyte * APIENTRY stub_glGetStringi (GLenum name, GLuint index) {
	return (const GLubyte *)0;
}
GLAPI void APIENTRY stub_glDrawArraysInstanced (GLenum mode, GLint first, GLsizei count, GLsizei instancecount) {
}
GLAPI void APIENTRY stub_glDrawElementsInstanced (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei instancecount) {
}
GLAPI void APIENTRY stub_glTexBuffer (GLenum target, GLenum internalformat, GLuint buffer) {
}
GLAPI void APIENTRY stub_glPrimitiveRestartIndex (GLuint index) {
}
GLAPI void APIENTRY stub_glGetInteger64i_v (GLenum target, GLuint index, GLint64 *data) {
}
GLAPI void APIENTRY stub_glGetBufferParameteri64v (GLenum target, GLenum pname, GLint64 *params) {
}
GLAPI void APIENTRY stub_glFramebufferTexture (GLenum target, GLenum attachment, GLuint texture, GLint level) {
}
GLAPI void APIENTRY stub_glVertexAttribDivisor (GLuint index, GLuint divisor) {
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
GLAPI void APIENTRY stub_glLoadTransposeMatrixfARB (const GLfloat *m) {
}
GLAPI void APIENTRY stub_glLoadTransposeMatrixdARB (const GLdouble *m) {
}
GLAPI void APIENTRY stub_glMultTransposeMatrixfARB (const GLfloat *m) {
}
GLAPI void APIENTRY stub_glMultTransposeMatrixdARB (const GLdouble *m) {
}
GLAPI void APIENTRY stub_glSampleCoverageARB (GLfloat value, GLboolean invert) {
}
GLAPI void APIENTRY stub_glCompressedTexImage3DARB (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data) {
}
GLAPI void APIENTRY stub_glCompressedTexImage2DARB (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data) {
}
GLAPI void APIENTRY stub_glCompressedTexImage1DARB (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data) {
}
GLAPI void APIENTRY stub_glCompressedTexSubImage3DARB (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data) {
}
GLAPI void APIENTRY stub_glCompressedTexSubImage2DARB (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data) {
}
GLAPI void APIENTRY stub_glCompressedTexSubImage1DARB (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data) {
}
GLAPI void APIENTRY stub_glGetCompressedTexImageARB (GLenum target, GLint level, GLvoid *img) {
}
GLAPI void APIENTRY stub_glPointParameterfARB (GLenum pname, GLfloat param) {
}
GLAPI void APIENTRY stub_glPointParameterfvARB (GLenum pname, const GLfloat *params) {
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
GLAPI void APIENTRY stub_glWeightPointerARB (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer) {
}
GLAPI void APIENTRY stub_glVertexBlendARB (GLint count) {
}
GLAPI void APIENTRY stub_glCurrentPaletteMatrixARB (GLint index) {
}
GLAPI void APIENTRY stub_glMatrixIndexubvARB (GLint size, const GLubyte *indices) {
}
GLAPI void APIENTRY stub_glMatrixIndexusvARB (GLint size, const GLushort *indices) {
}
GLAPI void APIENTRY stub_glMatrixIndexuivARB (GLint size, const GLuint *indices) {
}
GLAPI void APIENTRY stub_glMatrixIndexPointerARB (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer) {
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
GLAPI void APIENTRY stub_glVertexAttribPointerARB (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer) {
}
GLAPI void APIENTRY stub_glEnableVertexAttribArrayARB (GLuint index) {
}
GLAPI void APIENTRY stub_glDisableVertexAttribArrayARB (GLuint index) {
}
GLAPI void APIENTRY stub_glProgramStringARB (GLenum target, GLenum format, GLsizei len, const GLvoid *string) {
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
GLAPI void APIENTRY stub_glGetProgramStringARB (GLenum target, GLenum pname, GLvoid *string) {
}
GLAPI void APIENTRY stub_glGetVertexAttribdvARB (GLuint index, GLenum pname, GLdouble *params) {
}
GLAPI void APIENTRY stub_glGetVertexAttribfvARB (GLuint index, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetVertexAttribivARB (GLuint index, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetVertexAttribPointervARB (GLuint index, GLenum pname, GLvoid* *pointer) {
}
GLAPI GLboolean APIENTRY stub_glIsProgramARB (GLuint program) {
	return (GLboolean)0;
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
GLAPI void APIENTRY stub_glBufferDataARB (GLenum target, GLsizeiptrARB size, const GLvoid *data, GLenum usage) {
}
GLAPI void APIENTRY stub_glBufferSubDataARB (GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid *data) {
}
GLAPI void APIENTRY stub_glGetBufferSubDataARB (GLenum target, GLintptrARB offset, GLsizeiptrARB size, GLvoid *data) {
}
GLAPI GLvoid* APIENTRY stub_glMapBufferARB (GLenum target, GLenum access) {
	return (GLvoid*)0;
}
GLAPI GLboolean APIENTRY stub_glUnmapBufferARB (GLenum target) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glGetBufferParameterivARB (GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetBufferPointervARB (GLenum target, GLenum pname, GLvoid* *params) {
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
GLAPI void APIENTRY stub_glShaderSourceARB (GLhandleARB shaderObj, GLsizei count, const GLcharARB* *string, const GLint *length) {
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
GLAPI void APIENTRY stub_glBindAttribLocationARB (GLhandleARB programObj, GLuint index, const GLcharARB *name) {
}
GLAPI void APIENTRY stub_glGetActiveAttribARB (GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei *length, GLint *size, GLenum *type, GLcharARB *name) {
}
GLAPI GLint APIENTRY stub_glGetAttribLocationARB (GLhandleARB programObj, const GLcharARB *name) {
	return (GLint)0;
}
GLAPI void APIENTRY stub_glDrawBuffersARB (GLsizei n, const GLenum *bufs) {
}
GLAPI void APIENTRY stub_glClampColorARB (GLenum target, GLenum clamp) {
}
GLAPI void APIENTRY stub_glDrawArraysInstancedARB (GLenum mode, GLint first, GLsizei count, GLsizei primcount) {
}
GLAPI void APIENTRY stub_glDrawElementsInstancedARB (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount) {
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
GLAPI void APIENTRY stub_glProgramParameteriARB (GLuint program, GLenum pname, GLint value) {
}
GLAPI void APIENTRY stub_glFramebufferTextureARB (GLenum target, GLenum attachment, GLuint texture, GLint level) {
}
GLAPI void APIENTRY stub_glFramebufferTextureLayerARB (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) {
}
GLAPI void APIENTRY stub_glFramebufferTextureFaceARB (GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face) {
}
GLAPI void APIENTRY stub_glVertexAttribDivisorARB (GLuint index, GLuint divisor) {
}
GLAPI GLvoid* APIENTRY stub_glMapBufferRange (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access) {
	return (GLvoid*)0;
}
GLAPI void APIENTRY stub_glFlushMappedBufferRange (GLenum target, GLintptr offset, GLsizeiptr length) {
}
GLAPI void APIENTRY stub_glTexBufferARB (GLenum target, GLenum internalformat, GLuint buffer) {
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
GLAPI void APIENTRY stub_glGetUniformIndices (GLuint program, GLsizei uniformCount, const GLchar* const *uniformNames, GLuint *uniformIndices) {
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
GLAPI void APIENTRY stub_glCopyBufferSubData (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) {
}
GLAPI void APIENTRY stub_glDrawElementsBaseVertex (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLint basevertex) {
}
GLAPI void APIENTRY stub_glDrawRangeElementsBaseVertex (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices, GLint basevertex) {
}
GLAPI void APIENTRY stub_glDrawElementsInstancedBaseVertex (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei instancecount, GLint basevertex) {
}
GLAPI void APIENTRY stub_glMultiDrawElementsBaseVertex (GLenum mode, const GLsizei *count, GLenum type, const GLvoid* const *indices, GLsizei drawcount, const GLint *basevertex) {
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
GLAPI void APIENTRY stub_glGetInteger64v (GLenum pname, GLint64 *params) {
}
GLAPI void APIENTRY stub_glGetSynciv (GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values) {
}
GLAPI void APIENTRY stub_glTexImage2DMultisample (GLenum target, GLsizei samples, GLint internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) {
}
GLAPI void APIENTRY stub_glTexImage3DMultisample (GLenum target, GLsizei samples, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) {
}
GLAPI void APIENTRY stub_glGetMultisamplefv (GLenum pname, GLuint index, GLfloat *val) {
}
GLAPI void APIENTRY stub_glSampleMaski (GLuint index, GLbitfield mask) {
}
GLAPI void APIENTRY stub_glBlendEquationiARB (GLuint buf, GLenum mode) {
}
GLAPI void APIENTRY stub_glBlendEquationSeparateiARB (GLuint buf, GLenum modeRGB, GLenum modeAlpha) {
}
GLAPI void APIENTRY stub_glBlendFunciARB (GLuint buf, GLenum src, GLenum dst) {
}
GLAPI void APIENTRY stub_glBlendFuncSeparateiARB (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) {
}
GLAPI void APIENTRY stub_glMinSampleShadingARB (GLfloat value) {
}
GLAPI void APIENTRY stub_glNamedStringARB (GLenum type, GLint namelen, const GLchar *name, GLint stringlen, const GLchar *string) {
}
GLAPI void APIENTRY stub_glDeleteNamedStringARB (GLint namelen, const GLchar *name) {
}
GLAPI void APIENTRY stub_glCompileShaderIncludeARB (GLuint shader, GLsizei count, const GLchar* *path, const GLint *length) {
}
GLAPI GLboolean APIENTRY stub_glIsNamedStringARB (GLint namelen, const GLchar *name) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glGetNamedStringARB (GLint namelen, const GLchar *name, GLsizei bufSize, GLint *stringlen, GLchar *string) {
}
GLAPI void APIENTRY stub_glGetNamedStringivARB (GLint namelen, const GLchar *name, GLenum pname, GLint *params) {
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
GLAPI void APIENTRY stub_glDrawArraysIndirect (GLenum mode, const GLvoid *indirect) {
}
GLAPI void APIENTRY stub_glDrawElementsIndirect (GLenum mode, GLenum type, const GLvoid *indirect) {
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
GLAPI void APIENTRY stub_glShaderBinary (GLsizei count, const GLuint *shaders, GLenum binaryformat, const GLvoid *binary, GLsizei length) {
}
GLAPI void APIENTRY stub_glGetShaderPrecisionFormat (GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision) {
}
GLAPI void APIENTRY stub_glDepthRangef (GLfloat n, GLfloat f) {
}
GLAPI void APIENTRY stub_glClearDepthf (GLfloat d) {
}
GLAPI void APIENTRY stub_glGetProgramBinary (GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, GLvoid *binary) {
}
GLAPI void APIENTRY stub_glProgramBinary (GLuint program, GLenum binaryFormat, const GLvoid *binary, GLsizei length) {
}
GLAPI void APIENTRY stub_glProgramParameteri (GLuint program, GLenum pname, GLint value) {
}
GLAPI void APIENTRY stub_glUseProgramStages (GLuint pipeline, GLbitfield stages, GLuint program) {
}
GLAPI void APIENTRY stub_glActiveShaderProgram (GLuint pipeline, GLuint program) {
}
GLAPI GLuint APIENTRY stub_glCreateShaderProgramv (GLenum type, GLsizei count, const GLchar* const *strings) {
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
GLAPI void APIENTRY stub_glVertexAttribLPointer (GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer) {
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
GLAPI GLsync APIENTRY stub_glCreateSyncFromCLeventARB (struct _cl_context * context, struct _cl_event * event, GLbitfield flags) {
	return (GLsync)0;
}
GLAPI void APIENTRY stub_glDebugMessageControlARB (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled) {
}
GLAPI void APIENTRY stub_glDebugMessageInsertARB (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf) {
}
GLAPI void APIENTRY stub_glDebugMessageCallbackARB (GLDEBUGPROCARB callback, const GLvoid *userParam) {
}
GLAPI GLuint APIENTRY stub_glGetDebugMessageLogARB (GLuint count, GLsizei bufsize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog) {
	return (GLuint)0;
}
GLAPI GLenum APIENTRY stub_glGetGraphicsResetStatusARB (void) {
	return (GLenum)0;
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
GLAPI void APIENTRY stub_glGetnColorTableARB (GLenum target, GLenum format, GLenum type, GLsizei bufSize, GLvoid *table) {
}
GLAPI void APIENTRY stub_glGetnConvolutionFilterARB (GLenum target, GLenum format, GLenum type, GLsizei bufSize, GLvoid *image) {
}
GLAPI void APIENTRY stub_glGetnSeparableFilterARB (GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, GLvoid *row, GLsizei columnBufSize, GLvoid *column, GLvoid *span) {
}
GLAPI void APIENTRY stub_glGetnHistogramARB (GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, GLvoid *values) {
}
GLAPI void APIENTRY stub_glGetnMinmaxARB (GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, GLvoid *values) {
}
GLAPI void APIENTRY stub_glGetnTexImageARB (GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, GLvoid *img) {
}
GLAPI void APIENTRY stub_glReadnPixelsARB (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, GLvoid *data) {
}
GLAPI void APIENTRY stub_glGetnCompressedTexImageARB (GLenum target, GLint lod, GLsizei bufSize, GLvoid *img) {
}
GLAPI void APIENTRY stub_glGetnUniformfvARB (GLuint program, GLint location, GLsizei bufSize, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetnUniformivARB (GLuint program, GLint location, GLsizei bufSize, GLint *params) {
}
GLAPI void APIENTRY stub_glGetnUniformuivARB (GLuint program, GLint location, GLsizei bufSize, GLuint *params) {
}
GLAPI void APIENTRY stub_glGetnUniformdvARB (GLuint program, GLint location, GLsizei bufSize, GLdouble *params) {
}
GLAPI void APIENTRY stub_glDrawArraysInstancedBaseInstance (GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance) {
}
GLAPI void APIENTRY stub_glDrawElementsInstancedBaseInstance (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLuint baseinstance) {
}
GLAPI void APIENTRY stub_glDrawElementsInstancedBaseVertexBaseInstance (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance) {
}
GLAPI void APIENTRY stub_glDrawTransformFeedbackInstanced (GLenum mode, GLuint id, GLsizei instancecount) {
}
GLAPI void APIENTRY stub_glDrawTransformFeedbackStreamInstanced (GLenum mode, GLuint id, GLuint stream, GLsizei instancecount) {
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
GLAPI void APIENTRY stub_glTextureStorage1DEXT (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width) {
}
GLAPI void APIENTRY stub_glTextureStorage2DEXT (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glTextureStorage3DEXT (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) {
}
GLAPI void APIENTRY stub_glDebugMessageControl (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled) {
}
GLAPI void APIENTRY stub_glDebugMessageInsert (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf) {
}
GLAPI void APIENTRY stub_glDebugMessageCallback (GLDEBUGPROC callback, const void *userParam) {
}
GLAPI GLuint APIENTRY stub_glGetDebugMessageLog (GLuint count, GLsizei bufsize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog) {
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
GLAPI void APIENTRY stub_glClearBufferData (GLenum target, GLenum internalformat, GLenum format, GLenum type, const void *data) {
}
GLAPI void APIENTRY stub_glClearBufferSubData (GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data) {
}
GLAPI void APIENTRY stub_glClearNamedBufferDataEXT (GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data) {
}
GLAPI void APIENTRY stub_glClearNamedBufferSubDataEXT (GLuint buffer, GLenum internalformat, GLenum format, GLenum type, GLsizeiptr offset, GLsizeiptr size, const void *data) {
}
GLAPI void APIENTRY stub_glDispatchCompute (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z) {
}
GLAPI void APIENTRY stub_glDispatchComputeIndirect (GLintptr indirect) {
}
GLAPI void APIENTRY stub_glCopyImageSubData (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth) {
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
GLAPI void APIENTRY stub_glFramebufferParameteri (GLenum target, GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glGetFramebufferParameteriv (GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glNamedFramebufferParameteriEXT (GLuint framebuffer, GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glGetNamedFramebufferParameterivEXT (GLuint framebuffer, GLenum pname, GLint *params) {
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
GLAPI void APIENTRY stub_glTextureBufferRangeEXT (GLuint texture, GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size) {
}
GLAPI void APIENTRY stub_glTexStorage2DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) {
}
GLAPI void APIENTRY stub_glTexStorage3DMultisample (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) {
}
GLAPI void APIENTRY stub_glTextureStorage2DMultisampleEXT (GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) {
}
GLAPI void APIENTRY stub_glTextureStorage3DMultisampleEXT (GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) {
}
GLAPI void APIENTRY stub_glBlendColorEXT (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) {
}
GLAPI void APIENTRY stub_glPolygonOffsetEXT (GLfloat factor, GLfloat bias) {
}
GLAPI void APIENTRY stub_glTexImage3DEXT (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels) {
}
GLAPI void APIENTRY stub_glTexSubImage3DEXT (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels) {
}
GLAPI void APIENTRY stub_glGetTexFilterFuncSGIS (GLenum target, GLenum filter, GLfloat *weights) {
}
GLAPI void APIENTRY stub_glTexFilterFuncSGIS (GLenum target, GLenum filter, GLsizei n, const GLfloat *weights) {
}
GLAPI void APIENTRY stub_glTexSubImage1DEXT (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels) {
}
GLAPI void APIENTRY stub_glTexSubImage2DEXT (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels) {
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
GLAPI void APIENTRY stub_glGetHistogramEXT (GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values) {
}
GLAPI void APIENTRY stub_glGetHistogramParameterfvEXT (GLenum target, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetHistogramParameterivEXT (GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetMinmaxEXT (GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values) {
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
GLAPI void APIENTRY stub_glConvolutionFilter1DEXT (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *image) {
}
GLAPI void APIENTRY stub_glConvolutionFilter2DEXT (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *image) {
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
GLAPI void APIENTRY stub_glGetConvolutionFilterEXT (GLenum target, GLenum format, GLenum type, GLvoid *image) {
}
GLAPI void APIENTRY stub_glGetConvolutionParameterfvEXT (GLenum target, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetConvolutionParameterivEXT (GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetSeparableFilterEXT (GLenum target, GLenum format, GLenum type, GLvoid *row, GLvoid *column, GLvoid *span) {
}
GLAPI void APIENTRY stub_glSeparableFilter2DEXT (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *row, const GLvoid *column) {
}
GLAPI void APIENTRY stub_glColorTableSGI (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table) {
}
GLAPI void APIENTRY stub_glColorTableParameterfvSGI (GLenum target, GLenum pname, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glColorTableParameterivSGI (GLenum target, GLenum pname, const GLint *params) {
}
GLAPI void APIENTRY stub_glCopyColorTableSGI (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width) {
}
GLAPI void APIENTRY stub_glGetColorTableSGI (GLenum target, GLenum format, GLenum type, GLvoid *table) {
}
GLAPI void APIENTRY stub_glGetColorTableParameterfvSGI (GLenum target, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetColorTableParameterivSGI (GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glPixelTexGenSGIX (GLenum mode) {
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
GLAPI void APIENTRY stub_glTexImage4DSGIS (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLint border, GLenum format, GLenum type, const GLvoid *pixels) {
}
GLAPI void APIENTRY stub_glTexSubImage4DSGIS (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint woffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLenum format, GLenum type, const GLvoid *pixels) {
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
GLAPI void APIENTRY stub_glDetailTexFuncSGIS (GLenum target, GLsizei n, const GLfloat *points) {
}
GLAPI void APIENTRY stub_glGetDetailTexFuncSGIS (GLenum target, GLfloat *points) {
}
GLAPI void APIENTRY stub_glSharpenTexFuncSGIS (GLenum target, GLsizei n, const GLfloat *points) {
}
GLAPI void APIENTRY stub_glGetSharpenTexFuncSGIS (GLenum target, GLfloat *points) {
}
GLAPI void APIENTRY stub_glSampleMaskSGIS (GLclampf value, GLboolean invert) {
}
GLAPI void APIENTRY stub_glSamplePatternSGIS (GLenum pattern) {
}
GLAPI void APIENTRY stub_glArrayElementEXT (GLint i) {
}
GLAPI void APIENTRY stub_glColorPointerEXT (GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer) {
}
GLAPI void APIENTRY stub_glDrawArraysEXT (GLenum mode, GLint first, GLsizei count) {
}
GLAPI void APIENTRY stub_glEdgeFlagPointerEXT (GLsizei stride, GLsizei count, const GLboolean *pointer) {
}
GLAPI void APIENTRY stub_glGetPointervEXT (GLenum pname, GLvoid* *params) {
}
GLAPI void APIENTRY stub_glIndexPointerEXT (GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer) {
}
GLAPI void APIENTRY stub_glNormalPointerEXT (GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer) {
}
GLAPI void APIENTRY stub_glTexCoordPointerEXT (GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer) {
}
GLAPI void APIENTRY stub_glVertexPointerEXT (GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer) {
}
GLAPI void APIENTRY stub_glBlendEquationEXT (GLenum mode) {
}
GLAPI void APIENTRY stub_glSpriteParameterfSGIX (GLenum pname, GLfloat param) {
}
GLAPI void APIENTRY stub_glSpriteParameterfvSGIX (GLenum pname, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glSpriteParameteriSGIX (GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glSpriteParameterivSGIX (GLenum pname, const GLint *params) {
}
GLAPI void APIENTRY stub_glPointParameterfEXT (GLenum pname, GLfloat param) {
}
GLAPI void APIENTRY stub_glPointParameterfvEXT (GLenum pname, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glPointParameterfSGIS (GLenum pname, GLfloat param) {
}
GLAPI void APIENTRY stub_glPointParameterfvSGIS (GLenum pname, const GLfloat *params) {
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
GLAPI void APIENTRY stub_glFrameZoomSGIX (GLint factor) {
}
GLAPI void APIENTRY stub_glTagSampleBufferSGIX (void) {
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
GLAPI void APIENTRY stub_glFlushRasterSGIX (void) {
}
GLAPI void APIENTRY stub_glFogFuncSGIS (GLsizei n, const GLfloat *points) {
}
GLAPI void APIENTRY stub_glGetFogFuncSGIS (GLfloat *points) {
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
GLAPI void APIENTRY stub_glColorSubTableEXT (GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *data) {
}
GLAPI void APIENTRY stub_glCopyColorSubTableEXT (GLenum target, GLsizei start, GLint x, GLint y, GLsizei width) {
}
GLAPI void APIENTRY stub_glHintPGI (GLenum target, GLint mode) {
}
GLAPI void APIENTRY stub_glColorTableEXT (GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const GLvoid *table) {
}
GLAPI void APIENTRY stub_glGetColorTableEXT (GLenum target, GLenum format, GLenum type, GLvoid *data) {
}
GLAPI void APIENTRY stub_glGetColorTableParameterivEXT (GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetColorTableParameterfvEXT (GLenum target, GLenum pname, GLfloat *params) {
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
GLAPI void APIENTRY stub_glIndexMaterialEXT (GLenum face, GLenum mode) {
}
GLAPI void APIENTRY stub_glIndexFuncEXT (GLenum func, GLclampf ref) {
}
GLAPI void APIENTRY stub_glLockArraysEXT (GLint first, GLsizei count) {
}
GLAPI void APIENTRY stub_glUnlockArraysEXT (void) {
}
GLAPI void APIENTRY stub_glCullParameterdvEXT (GLenum pname, GLdouble *params) {
}
GLAPI void APIENTRY stub_glCullParameterfvEXT (GLenum pname, GLfloat *params) {
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
GLAPI void APIENTRY stub_glDrawRangeElementsEXT (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices) {
}
GLAPI void APIENTRY stub_glApplyTextureEXT (GLenum mode) {
}
GLAPI void APIENTRY stub_glTextureLightEXT (GLenum pname) {
}
GLAPI void APIENTRY stub_glTextureMaterialEXT (GLenum face, GLenum mode) {
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
GLAPI void APIENTRY stub_glVertexPointervINTEL (GLint size, GLenum type, const GLvoid* *pointer) {
}
GLAPI void APIENTRY stub_glNormalPointervINTEL (GLenum type, const GLvoid* *pointer) {
}
GLAPI void APIENTRY stub_glColorPointervINTEL (GLint size, GLenum type, const GLvoid* *pointer) {
}
GLAPI void APIENTRY stub_glTexCoordPointervINTEL (GLint size, GLenum type, const GLvoid* *pointer) {
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
GLAPI void APIENTRY stub_glSecondaryColorPointerEXT (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer) {
}
GLAPI void APIENTRY stub_glTextureNormalEXT (GLenum mode) {
}
GLAPI void APIENTRY stub_glMultiDrawArraysEXT (GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount) {
}
GLAPI void APIENTRY stub_glMultiDrawElementsEXT (GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount) {
}
GLAPI void APIENTRY stub_glFogCoordfEXT (GLfloat coord) {
}
GLAPI void APIENTRY stub_glFogCoordfvEXT (const GLfloat *coord) {
}
GLAPI void APIENTRY stub_glFogCoorddEXT (GLdouble coord) {
}
GLAPI void APIENTRY stub_glFogCoorddvEXT (const GLdouble *coord) {
}
GLAPI void APIENTRY stub_glFogCoordPointerEXT (GLenum type, GLsizei stride, const GLvoid *pointer) {
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
GLAPI void APIENTRY stub_glTangentPointerEXT (GLenum type, GLsizei stride, const GLvoid *pointer) {
}
GLAPI void APIENTRY stub_glBinormalPointerEXT (GLenum type, GLsizei stride, const GLvoid *pointer) {
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
GLAPI void APIENTRY stub_glReplacementCodePointerSUN (GLenum type, GLsizei stride, const GLvoid* *pointer) {
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
GLAPI void APIENTRY stub_glBlendFuncSeparateEXT (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) {
}
GLAPI void APIENTRY stub_glBlendFuncSeparateINGR (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) {
}
GLAPI void APIENTRY stub_glVertexWeightfEXT (GLfloat weight) {
}
GLAPI void APIENTRY stub_glVertexWeightfvEXT (const GLfloat *weight) {
}
GLAPI void APIENTRY stub_glVertexWeightPointerEXT (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer) {
}
GLAPI void APIENTRY stub_glFlushVertexArrayRangeNV (void) {
}
GLAPI void APIENTRY stub_glVertexArrayRangeNV (GLsizei length, const GLvoid *pointer) {
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
GLAPI void APIENTRY stub_glMultiModeDrawArraysIBM (const GLenum *mode, const GLint *first, const GLsizei *count, GLsizei primcount, GLint modestride) {
}
GLAPI void APIENTRY stub_glMultiModeDrawElementsIBM (const GLenum *mode, const GLsizei *count, GLenum type, const GLvoid* const *indices, GLsizei primcount, GLint modestride) {
}
GLAPI void APIENTRY stub_glColorPointerListIBM (GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride) {
}
GLAPI void APIENTRY stub_glSecondaryColorPointerListIBM (GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride) {
}
GLAPI void APIENTRY stub_glEdgeFlagPointerListIBM (GLint stride, const GLboolean* *pointer, GLint ptrstride) {
}
GLAPI void APIENTRY stub_glFogCoordPointerListIBM (GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride) {
}
GLAPI void APIENTRY stub_glIndexPointerListIBM (GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride) {
}
GLAPI void APIENTRY stub_glNormalPointerListIBM (GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride) {
}
GLAPI void APIENTRY stub_glTexCoordPointerListIBM (GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride) {
}
GLAPI void APIENTRY stub_glVertexPointerListIBM (GLint size, GLenum type, GLint stride, const GLvoid* *pointer, GLint ptrstride) {
}
GLAPI void APIENTRY stub_glTbufferMask3DFX (GLuint mask) {
}
GLAPI void APIENTRY stub_glSampleMaskEXT (GLclampf value, GLboolean invert) {
}
GLAPI void APIENTRY stub_glSamplePatternEXT (GLenum pattern) {
}
GLAPI void APIENTRY stub_glTextureColorMaskSGIS (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) {
}
GLAPI void APIENTRY stub_glIglooInterfaceSGIX (GLenum pname, const GLvoid *params) {
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
GLAPI void APIENTRY stub_glMapControlPointsNV (GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, const GLvoid *points) {
}
GLAPI void APIENTRY stub_glMapParameterivNV (GLenum target, GLenum pname, const GLint *params) {
}
GLAPI void APIENTRY stub_glMapParameterfvNV (GLenum target, GLenum pname, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetMapControlPointsNV (GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, GLvoid *points) {
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
GLAPI void APIENTRY stub_glCombinerStageParameterfvNV (GLenum stage, GLenum pname, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetCombinerStageParameterfvNV (GLenum stage, GLenum pname, GLfloat *params) {
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
GLAPI void APIENTRY stub_glGetVertexAttribPointervNV (GLuint index, GLenum pname, GLvoid* *pointer) {
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
GLAPI void APIENTRY stub_glVertexAttribPointerNV (GLuint index, GLint fsize, GLenum type, GLsizei stride, const GLvoid *pointer) {
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
GLAPI void APIENTRY stub_glPNTrianglesiATI (GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glPNTrianglesfATI (GLenum pname, GLfloat param) {
}
GLAPI GLuint APIENTRY stub_glNewObjectBufferATI (GLsizei size, const GLvoid *pointer, GLenum usage) {
	return (GLuint)0;
}
GLAPI GLboolean APIENTRY stub_glIsObjectBufferATI (GLuint buffer) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glUpdateObjectBufferATI (GLuint buffer, GLuint offset, GLsizei size, const GLvoid *pointer, GLenum preserve) {
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
GLAPI void APIENTRY stub_glSetInvariantEXT (GLuint id, GLenum type, const GLvoid *addr) {
}
GLAPI void APIENTRY stub_glSetLocalConstantEXT (GLuint id, GLenum type, const GLvoid *addr) {
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
GLAPI void APIENTRY stub_glVariantPointerEXT (GLuint id, GLenum type, GLuint stride, const GLvoid *addr) {
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
GLAPI void APIENTRY stub_glGetVariantPointervEXT (GLuint id, GLenum value, GLvoid* *data) {
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
GLAPI void APIENTRY stub_glElementPointerATI (GLenum type, const GLvoid *pointer) {
}
GLAPI void APIENTRY stub_glDrawElementArrayATI (GLenum mode, GLsizei count) {
}
GLAPI void APIENTRY stub_glDrawRangeElementArrayATI (GLenum mode, GLuint start, GLuint end, GLsizei count) {
}
GLAPI void APIENTRY stub_glDrawMeshArraysSUN (GLenum mode, GLint first, GLsizei count, GLsizei width) {
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
GLAPI void APIENTRY stub_glPointParameteriNV (GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glPointParameterivNV (GLenum pname, const GLint *params) {
}
GLAPI void APIENTRY stub_glActiveStencilFaceEXT (GLenum face) {
}
GLAPI void APIENTRY stub_glElementPointerAPPLE (GLenum type, const GLvoid *pointer) {
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
GLAPI void APIENTRY stub_glBindVertexArrayAPPLE (GLuint array) {
}
GLAPI void APIENTRY stub_glDeleteVertexArraysAPPLE (GLsizei n, const GLuint *arrays) {
}
GLAPI void APIENTRY stub_glGenVertexArraysAPPLE (GLsizei n, GLuint *arrays) {
}
GLAPI GLboolean APIENTRY stub_glIsVertexArrayAPPLE (GLuint array) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glVertexArrayRangeAPPLE (GLsizei length, GLvoid *pointer) {
}
GLAPI void APIENTRY stub_glFlushVertexArrayRangeAPPLE (GLsizei length, GLvoid *pointer) {
}
GLAPI void APIENTRY stub_glVertexArrayParameteriAPPLE (GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glDrawBuffersATI (GLsizei n, const GLenum *bufs) {
}
GLAPI void APIENTRY stub_glProgramNamedParameter4fNV (GLuint id, GLsizei len, const GLubyte *name, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
}
GLAPI void APIENTRY stub_glProgramNamedParameter4dNV (GLuint id, GLsizei len, const GLubyte *name, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
}
GLAPI void APIENTRY stub_glProgramNamedParameter4fvNV (GLuint id, GLsizei len, const GLubyte *name, const GLfloat *v) {
}
GLAPI void APIENTRY stub_glProgramNamedParameter4dvNV (GLuint id, GLsizei len, const GLubyte *name, const GLdouble *v) {
}
GLAPI void APIENTRY stub_glGetProgramNamedParameterfvNV (GLuint id, GLsizei len, const GLubyte *name, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetProgramNamedParameterdvNV (GLuint id, GLsizei len, const GLubyte *name, GLdouble *params) {
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
GLAPI void APIENTRY stub_glPixelDataRangeNV (GLenum target, GLsizei length, const GLvoid *pointer) {
}
GLAPI void APIENTRY stub_glFlushPixelDataRangeNV (GLenum target) {
}
GLAPI void APIENTRY stub_glPrimitiveRestartNV (void) {
}
GLAPI void APIENTRY stub_glPrimitiveRestartIndexNV (GLuint index) {
}
GLAPI GLvoid* APIENTRY stub_glMapObjectBufferATI (GLuint buffer) {
	return (GLvoid*)0;
}
GLAPI void APIENTRY stub_glUnmapObjectBufferATI (GLuint buffer) {
}
GLAPI void APIENTRY stub_glStencilOpSeparateATI (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass) {
}
GLAPI void APIENTRY stub_glStencilFuncSeparateATI (GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask) {
}
GLAPI void APIENTRY stub_glVertexAttribArrayObjectATI (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLuint buffer, GLuint offset) {
}
GLAPI void APIENTRY stub_glGetVertexAttribArrayObjectfvATI (GLuint index, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetVertexAttribArrayObjectivATI (GLuint index, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glDepthBoundsEXT (GLclampd zmin, GLclampd zmax) {
}
GLAPI void APIENTRY stub_glBlendEquationSeparateEXT (GLenum modeRGB, GLenum modeAlpha) {
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
GLAPI void APIENTRY stub_glStringMarkerGREMEDY (GLsizei len, const GLvoid *string) {
}
GLAPI void APIENTRY stub_glStencilClearTagEXT (GLsizei stencilTagBits, GLuint stencilClearTag) {
}
GLAPI void APIENTRY stub_glBlitFramebufferEXT (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) {
}
GLAPI void APIENTRY stub_glRenderbufferStorageMultisampleEXT (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glGetQueryObjecti64vEXT (GLuint id, GLenum pname, GLint64EXT *params) {
}
GLAPI void APIENTRY stub_glGetQueryObjectui64vEXT (GLuint id, GLenum pname, GLuint64EXT *params) {
}
GLAPI void APIENTRY stub_glProgramEnvParameters4fvEXT (GLenum target, GLuint index, GLsizei count, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glProgramLocalParameters4fvEXT (GLenum target, GLuint index, GLsizei count, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glBufferParameteriAPPLE (GLenum target, GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glFlushMappedBufferRangeAPPLE (GLenum target, GLintptr offset, GLsizeiptr size) {
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
GLAPI void APIENTRY stub_glProgramVertexLimitNV (GLenum target, GLint limit) {
}
GLAPI void APIENTRY stub_glFramebufferTextureEXT (GLenum target, GLenum attachment, GLuint texture, GLint level) {
}
GLAPI void APIENTRY stub_glFramebufferTextureLayerEXT (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) {
}
GLAPI void APIENTRY stub_glFramebufferTextureFaceEXT (GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face) {
}
GLAPI void APIENTRY stub_glProgramParameteriEXT (GLuint program, GLenum pname, GLint value) {
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
GLAPI void APIENTRY stub_glVertexAttribIPointerEXT (GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer) {
}
GLAPI void APIENTRY stub_glGetVertexAttribIivEXT (GLuint index, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetVertexAttribIuivEXT (GLuint index, GLenum pname, GLuint *params) {
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
GLAPI void APIENTRY stub_glDrawArraysInstancedEXT (GLenum mode, GLint start, GLsizei count, GLsizei primcount) {
}
GLAPI void APIENTRY stub_glDrawElementsInstancedEXT (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount) {
}
GLAPI void APIENTRY stub_glTexBufferEXT (GLenum target, GLenum internalformat, GLuint buffer) {
}
GLAPI void APIENTRY stub_glDepthRangedNV (GLdouble zNear, GLdouble zFar) {
}
GLAPI void APIENTRY stub_glClearDepthdNV (GLdouble depth) {
}
GLAPI void APIENTRY stub_glDepthBoundsdNV (GLdouble zmin, GLdouble zmax) {
}
GLAPI void APIENTRY stub_glRenderbufferStorageMultisampleCoverageNV (GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glProgramBufferParametersfvNV (GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glProgramBufferParametersIivNV (GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLint *params) {
}
GLAPI void APIENTRY stub_glProgramBufferParametersIuivNV (GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLuint *params) {
}
GLAPI void APIENTRY stub_glColorMaskIndexedEXT (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a) {
}
GLAPI void APIENTRY stub_glGetBooleanIndexedvEXT (GLenum target, GLuint index, GLboolean *data) {
}
GLAPI void APIENTRY stub_glGetIntegerIndexedvEXT (GLenum target, GLuint index, GLint *data) {
}
GLAPI void APIENTRY stub_glEnableIndexedEXT (GLenum target, GLuint index) {
}
GLAPI void APIENTRY stub_glDisableIndexedEXT (GLenum target, GLuint index) {
}
GLAPI GLboolean APIENTRY stub_glIsEnabledIndexedEXT (GLenum target, GLuint index) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glBeginTransformFeedbackNV (GLenum primitiveMode) {
}
GLAPI void APIENTRY stub_glEndTransformFeedbackNV (void) {
}
GLAPI void APIENTRY stub_glTransformFeedbackAttribsNV (GLuint count, const GLint *attribs, GLenum bufferMode) {
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
GLAPI void APIENTRY stub_glUniformBufferEXT (GLuint program, GLint location, GLuint buffer) {
}
GLAPI GLint APIENTRY stub_glGetUniformBufferSizeEXT (GLuint program, GLint location) {
	return (GLint)0;
}
GLAPI GLintptr APIENTRY stub_glGetUniformOffsetEXT (GLuint program, GLint location) {
	return (GLintptr)0;
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
GLAPI void APIENTRY stub_glFrameTerminatorGREMEDY (void) {
}
GLAPI void APIENTRY stub_glBeginConditionalRenderNV (GLuint id, GLenum mode) {
}
GLAPI void APIENTRY stub_glEndConditionalRenderNV (void) {
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
GLAPI void APIENTRY stub_glTransformFeedbackVaryingsEXT (GLuint program, GLsizei count, const GLchar* *varyings, GLenum bufferMode) {
}
GLAPI void APIENTRY stub_glGetTransformFeedbackVaryingEXT (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name) {
}
GLAPI void APIENTRY stub_glClientAttribDefaultEXT (GLbitfield mask) {
}
GLAPI void APIENTRY stub_glPushClientAttribDefaultEXT (GLbitfield mask) {
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
GLAPI void APIENTRY stub_glMatrixLoadTransposefEXT (GLenum mode, const GLfloat *m) {
}
GLAPI void APIENTRY stub_glMatrixLoadTransposedEXT (GLenum mode, const GLdouble *m) {
}
GLAPI void APIENTRY stub_glMatrixMultTransposefEXT (GLenum mode, const GLfloat *m) {
}
GLAPI void APIENTRY stub_glMatrixMultTransposedEXT (GLenum mode, const GLdouble *m) {
}
GLAPI void APIENTRY stub_glTextureParameterfEXT (GLuint texture, GLenum target, GLenum pname, GLfloat param) {
}
GLAPI void APIENTRY stub_glTextureParameterfvEXT (GLuint texture, GLenum target, GLenum pname, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glTextureParameteriEXT (GLuint texture, GLenum target, GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glTextureParameterivEXT (GLuint texture, GLenum target, GLenum pname, const GLint *params) {
}
GLAPI void APIENTRY stub_glTextureImage1DEXT (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels) {
}
GLAPI void APIENTRY stub_glTextureImage2DEXT (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels) {
}
GLAPI void APIENTRY stub_glTextureSubImage1DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels) {
}
GLAPI void APIENTRY stub_glTextureSubImage2DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels) {
}
GLAPI void APIENTRY stub_glCopyTextureImage1DEXT (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border) {
}
GLAPI void APIENTRY stub_glCopyTextureImage2DEXT (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) {
}
GLAPI void APIENTRY stub_glCopyTextureSubImage1DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) {
}
GLAPI void APIENTRY stub_glCopyTextureSubImage2DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glGetTextureImageEXT (GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels) {
}
GLAPI void APIENTRY stub_glGetTextureParameterfvEXT (GLuint texture, GLenum target, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetTextureParameterivEXT (GLuint texture, GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetTextureLevelParameterfvEXT (GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetTextureLevelParameterivEXT (GLuint texture, GLenum target, GLint level, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glTextureImage3DEXT (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels) {
}
GLAPI void APIENTRY stub_glTextureSubImage3DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels) {
}
GLAPI void APIENTRY stub_glCopyTextureSubImage3DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glMultiTexParameterfEXT (GLenum texunit, GLenum target, GLenum pname, GLfloat param) {
}
GLAPI void APIENTRY stub_glMultiTexParameterfvEXT (GLenum texunit, GLenum target, GLenum pname, const GLfloat *params) {
}
GLAPI void APIENTRY stub_glMultiTexParameteriEXT (GLenum texunit, GLenum target, GLenum pname, GLint param) {
}
GLAPI void APIENTRY stub_glMultiTexParameterivEXT (GLenum texunit, GLenum target, GLenum pname, const GLint *params) {
}
GLAPI void APIENTRY stub_glMultiTexImage1DEXT (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels) {
}
GLAPI void APIENTRY stub_glMultiTexImage2DEXT (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels) {
}
GLAPI void APIENTRY stub_glMultiTexSubImage1DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels) {
}
GLAPI void APIENTRY stub_glMultiTexSubImage2DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels) {
}
GLAPI void APIENTRY stub_glCopyMultiTexImage1DEXT (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border) {
}
GLAPI void APIENTRY stub_glCopyMultiTexImage2DEXT (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) {
}
GLAPI void APIENTRY stub_glCopyMultiTexSubImage1DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) {
}
GLAPI void APIENTRY stub_glCopyMultiTexSubImage2DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glGetMultiTexImageEXT (GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels) {
}
GLAPI void APIENTRY stub_glGetMultiTexParameterfvEXT (GLenum texunit, GLenum target, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetMultiTexParameterivEXT (GLenum texunit, GLenum target, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetMultiTexLevelParameterfvEXT (GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat *params) {
}
GLAPI void APIENTRY stub_glGetMultiTexLevelParameterivEXT (GLenum texunit, GLenum target, GLint level, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glMultiTexImage3DEXT (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels) {
}
GLAPI void APIENTRY stub_glMultiTexSubImage3DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels) {
}
GLAPI void APIENTRY stub_glCopyMultiTexSubImage3DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glBindMultiTextureEXT (GLenum texunit, GLenum target, GLuint texture) {
}
GLAPI void APIENTRY stub_glEnableClientStateIndexedEXT (GLenum array, GLuint index) {
}
GLAPI void APIENTRY stub_glDisableClientStateIndexedEXT (GLenum array, GLuint index) {
}
GLAPI void APIENTRY stub_glMultiTexCoordPointerEXT (GLenum texunit, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer) {
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
GLAPI void APIENTRY stub_glGetFloatIndexedvEXT (GLenum target, GLuint index, GLfloat *data) {
}
GLAPI void APIENTRY stub_glGetDoubleIndexedvEXT (GLenum target, GLuint index, GLdouble *data) {
}
GLAPI void APIENTRY stub_glGetPointerIndexedvEXT (GLenum target, GLuint index, GLvoid* *data) {
}
GLAPI void APIENTRY stub_glCompressedTextureImage3DEXT (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *bits) {
}
GLAPI void APIENTRY stub_glCompressedTextureImage2DEXT (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *bits) {
}
GLAPI void APIENTRY stub_glCompressedTextureImage1DEXT (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *bits) {
}
GLAPI void APIENTRY stub_glCompressedTextureSubImage3DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *bits) {
}
GLAPI void APIENTRY stub_glCompressedTextureSubImage2DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *bits) {
}
GLAPI void APIENTRY stub_glCompressedTextureSubImage1DEXT (GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *bits) {
}
GLAPI void APIENTRY stub_glGetCompressedTextureImageEXT (GLuint texture, GLenum target, GLint lod, GLvoid *img) {
}
GLAPI void APIENTRY stub_glCompressedMultiTexImage3DEXT (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *bits) {
}
GLAPI void APIENTRY stub_glCompressedMultiTexImage2DEXT (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *bits) {
}
GLAPI void APIENTRY stub_glCompressedMultiTexImage1DEXT (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *bits) {
}
GLAPI void APIENTRY stub_glCompressedMultiTexSubImage3DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *bits) {
}
GLAPI void APIENTRY stub_glCompressedMultiTexSubImage2DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *bits) {
}
GLAPI void APIENTRY stub_glCompressedMultiTexSubImage1DEXT (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *bits) {
}
GLAPI void APIENTRY stub_glGetCompressedMultiTexImageEXT (GLenum texunit, GLenum target, GLint lod, GLvoid *img) {
}
GLAPI void APIENTRY stub_glNamedProgramStringEXT (GLuint program, GLenum target, GLenum format, GLsizei len, const GLvoid *string) {
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
GLAPI void APIENTRY stub_glGetNamedProgramStringEXT (GLuint program, GLenum target, GLenum pname, GLvoid *string) {
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
GLAPI void APIENTRY stub_glNamedBufferDataEXT (GLuint buffer, GLsizeiptr size, const GLvoid *data, GLenum usage) {
}
GLAPI void APIENTRY stub_glNamedBufferSubDataEXT (GLuint buffer, GLintptr offset, GLsizeiptr size, const GLvoid *data) {
}
GLAPI GLvoid* APIENTRY stub_glMapNamedBufferEXT (GLuint buffer, GLenum access) {
	return (GLvoid*)0;
}
GLAPI GLboolean APIENTRY stub_glUnmapNamedBufferEXT (GLuint buffer) {
	return (GLboolean)0;
}
GLAPI GLvoid* APIENTRY stub_glMapNamedBufferRangeEXT (GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access) {
	return (GLvoid*)0;
}
GLAPI void APIENTRY stub_glFlushMappedNamedBufferRangeEXT (GLuint buffer, GLintptr offset, GLsizeiptr length) {
}
GLAPI void APIENTRY stub_glNamedCopyBufferSubDataEXT (GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) {
}
GLAPI void APIENTRY stub_glGetNamedBufferParameterivEXT (GLuint buffer, GLenum pname, GLint *params) {
}
GLAPI void APIENTRY stub_glGetNamedBufferPointervEXT (GLuint buffer, GLenum pname, GLvoid* *params) {
}
GLAPI void APIENTRY stub_glGetNamedBufferSubDataEXT (GLuint buffer, GLintptr offset, GLsizeiptr size, GLvoid *data) {
}
GLAPI void APIENTRY stub_glTextureBufferEXT (GLuint texture, GLenum target, GLenum internalformat, GLuint buffer) {
}
GLAPI void APIENTRY stub_glMultiTexBufferEXT (GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer) {
}
GLAPI void APIENTRY stub_glNamedRenderbufferStorageEXT (GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glGetNamedRenderbufferParameterivEXT (GLuint renderbuffer, GLenum pname, GLint *params) {
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
GLAPI void APIENTRY stub_glNamedRenderbufferStorageMultisampleEXT (GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) {
}
GLAPI void APIENTRY stub_glNamedRenderbufferStorageMultisampleCoverageEXT (GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height) {
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
GLAPI void APIENTRY stub_glGetMultisamplefvNV (GLenum pname, GLuint index, GLfloat *val) {
}
GLAPI void APIENTRY stub_glSampleMaskIndexedNV (GLuint index, GLbitfield mask) {
}
GLAPI void APIENTRY stub_glTexRenderbufferNV (GLenum target, GLuint renderbuffer) {
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
GLAPI void APIENTRY stub_glGetPerfMonitorGroupsAMD (GLint *numGroups, GLsizei groupsSize, GLuint *groups) {
}
GLAPI void APIENTRY stub_glGetPerfMonitorCountersAMD (GLuint group, GLint *numCounters, GLint *maxActiveCounters, GLsizei counterSize, GLuint *counters) {
}
GLAPI void APIENTRY stub_glGetPerfMonitorGroupStringAMD (GLuint group, GLsizei bufSize, GLsizei *length, GLchar *groupString) {
}
GLAPI void APIENTRY stub_glGetPerfMonitorCounterStringAMD (GLuint group, GLuint counter, GLsizei bufSize, GLsizei *length, GLchar *counterString) {
}
GLAPI void APIENTRY stub_glGetPerfMonitorCounterInfoAMD (GLuint group, GLuint counter, GLenum pname, GLvoid *data) {
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
GLAPI void APIENTRY stub_glTessellationFactorAMD (GLfloat factor) {
}
GLAPI void APIENTRY stub_glTessellationModeAMD (GLenum mode) {
}
GLAPI void APIENTRY stub_glProvokingVertexEXT (GLenum mode) {
}
GLAPI void APIENTRY stub_glBlendFuncIndexedAMD (GLuint buf, GLenum src, GLenum dst) {
}
GLAPI void APIENTRY stub_glBlendFuncSeparateIndexedAMD (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) {
}
GLAPI void APIENTRY stub_glBlendEquationIndexedAMD (GLuint buf, GLenum mode) {
}
GLAPI void APIENTRY stub_glBlendEquationSeparateIndexedAMD (GLuint buf, GLenum modeRGB, GLenum modeAlpha) {
}
GLAPI void APIENTRY stub_glTextureRangeAPPLE (GLenum target, GLsizei length, const GLvoid *pointer) {
}
GLAPI void APIENTRY stub_glGetTexParameterPointervAPPLE (GLenum target, GLenum pname, GLvoid* *params) {
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
GLAPI GLenum APIENTRY stub_glObjectPurgeableAPPLE (GLenum objectType, GLuint name, GLenum option) {
	return (GLenum)0;
}
GLAPI GLenum APIENTRY stub_glObjectUnpurgeableAPPLE (GLenum objectType, GLuint name, GLenum option) {
	return (GLenum)0;
}
GLAPI void APIENTRY stub_glGetObjectParameterivAPPLE (GLenum objectType, GLuint name, GLenum pname, GLint *params) {
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
GLAPI void APIENTRY stub_glCopyImageSubDataNV (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth) {
}
GLAPI void APIENTRY stub_glUseShaderProgramEXT (GLenum type, GLuint program) {
}
GLAPI void APIENTRY stub_glActiveProgramEXT (GLuint program) {
}
GLAPI GLuint APIENTRY stub_glCreateShaderProgramEXT (GLenum type, const GLchar *string) {
	return (GLuint)0;
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
GLAPI void APIENTRY stub_glGetUniformui64vNV (GLuint program, GLint location, GLuint64EXT *params) {
}
GLAPI void APIENTRY stub_glProgramUniformui64NV (GLuint program, GLint location, GLuint64EXT value) {
}
GLAPI void APIENTRY stub_glProgramUniformui64vNV (GLuint program, GLint location, GLsizei count, const GLuint64EXT *value) {
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
GLAPI void APIENTRY stub_glTextureBarrierNV (void) {
}
GLAPI void APIENTRY stub_glBindImageTextureEXT (GLuint index, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLint format) {
}
GLAPI void APIENTRY stub_glMemoryBarrierEXT (GLbitfield barriers) {
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
GLAPI void APIENTRY stub_glVertexAttribLPointerEXT (GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer) {
}
GLAPI void APIENTRY stub_glGetVertexAttribLdvEXT (GLuint index, GLenum pname, GLdouble *params) {
}
GLAPI void APIENTRY stub_glVertexArrayVertexAttribLOffsetEXT (GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset) {
}
GLAPI void APIENTRY stub_glProgramSubroutineParametersuivNV (GLenum target, GLsizei count, const GLuint *params) {
}
GLAPI void APIENTRY stub_glGetProgramSubroutineParameteruivNV (GLenum target, GLuint index, GLuint *param) {
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
GLAPI void APIENTRY stub_glGenNamesAMD (GLenum identifier, GLuint num, GLuint *names) {
}
GLAPI void APIENTRY stub_glDeleteNamesAMD (GLenum identifier, GLuint num, const GLuint *names) {
}
GLAPI GLboolean APIENTRY stub_glIsNameAMD (GLenum identifier, GLuint name) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glDebugMessageEnableAMD (GLenum category, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled) {
}
GLAPI void APIENTRY stub_glDebugMessageInsertAMD (GLenum category, GLenum severity, GLuint id, GLsizei length, const GLchar *buf) {
}
GLAPI void APIENTRY stub_glDebugMessageCallbackAMD (GLDEBUGPROCAMD callback, GLvoid *userParam) {
}
GLAPI GLuint APIENTRY stub_glGetDebugMessageLogAMD (GLuint count, GLsizei bufsize, GLenum *categories, GLuint *severities, GLuint *ids, GLsizei *lengths, GLchar *message) {
	return (GLuint)0;
}
GLAPI void APIENTRY stub_glVDPAUInitNV (const GLvoid *vdpDevice, const GLvoid *getProcAddress) {
}
GLAPI void APIENTRY stub_glVDPAUFiniNV (void) {
}
GLAPI GLvdpauSurfaceNV APIENTRY stub_glVDPAURegisterVideoSurfaceNV (const GLvoid *vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint *textureNames) {
	return (GLvdpauSurfaceNV)0;
}
GLAPI GLvdpauSurfaceNV APIENTRY stub_glVDPAURegisterOutputSurfaceNV (GLvoid *vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint *textureNames) {
	return (GLvdpauSurfaceNV)0;
}
GLAPI void APIENTRY stub_glVDPAUIsSurfaceNV (GLvdpauSurfaceNV surface) {
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
GLAPI void APIENTRY stub_glSetMultisamplefvAMD (GLenum pname, GLuint index, const GLfloat *val) {
}
GLAPI GLsync APIENTRY stub_glImportSyncEXT (GLenum external_sync_type, GLintptr external_sync, GLbitfield flags) {
	return (GLsync)0;
}
GLAPI void APIENTRY stub_glMultiDrawArraysIndirectAMD (GLenum mode, const GLvoid *indirect, GLsizei primcount, GLsizei stride) {
}
GLAPI void APIENTRY stub_glMultiDrawElementsIndirectAMD (GLenum mode, GLenum type, const GLvoid *indirect, GLsizei primcount, GLsizei stride) {
}
GLAPI GLuint APIENTRY stub_glGenPathsNV (GLsizei range) {
	return (GLuint)0;
}
GLAPI void APIENTRY stub_glDeletePathsNV (GLuint path, GLsizei range) {
}
GLAPI GLboolean APIENTRY stub_glIsPathNV (GLuint path) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glPathCommandsNV (GLuint path, GLsizei numCommands, const GLubyte *commands, GLsizei numCoords, GLenum coordType, const GLvoid *coords) {
}
GLAPI void APIENTRY stub_glPathCoordsNV (GLuint path, GLsizei numCoords, GLenum coordType, const GLvoid *coords) {
}
GLAPI void APIENTRY stub_glPathSubCommandsNV (GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte *commands, GLsizei numCoords, GLenum coordType, const GLvoid *coords) {
}
GLAPI void APIENTRY stub_glPathSubCoordsNV (GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const GLvoid *coords) {
}
GLAPI void APIENTRY stub_glPathStringNV (GLuint path, GLenum format, GLsizei length, const GLvoid *pathString) {
}
GLAPI void APIENTRY stub_glPathGlyphsNV (GLuint firstPathName, GLenum fontTarget, const GLvoid *fontName, GLbitfield fontStyle, GLsizei numGlyphs, GLenum type, const GLvoid *charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale) {
}
GLAPI void APIENTRY stub_glPathGlyphRangeNV (GLuint firstPathName, GLenum fontTarget, const GLvoid *fontName, GLbitfield fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale) {
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
GLAPI void APIENTRY stub_glStencilFillPathInstancedNV (GLsizei numPaths, GLenum pathNameType, const GLvoid *paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat *transformValues) {
}
GLAPI void APIENTRY stub_glStencilStrokePathInstancedNV (GLsizei numPaths, GLenum pathNameType, const GLvoid *paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat *transformValues) {
}
GLAPI void APIENTRY stub_glPathCoverDepthFuncNV (GLenum func) {
}
GLAPI void APIENTRY stub_glPathColorGenNV (GLenum color, GLenum genMode, GLenum colorFormat, const GLfloat *coeffs) {
}
GLAPI void APIENTRY stub_glPathTexGenNV (GLenum texCoordSet, GLenum genMode, GLint components, const GLfloat *coeffs) {
}
GLAPI void APIENTRY stub_glPathFogGenNV (GLenum genMode) {
}
GLAPI void APIENTRY stub_glCoverFillPathNV (GLuint path, GLenum coverMode) {
}
GLAPI void APIENTRY stub_glCoverStrokePathNV (GLuint path, GLenum coverMode) {
}
GLAPI void APIENTRY stub_glCoverFillPathInstancedNV (GLsizei numPaths, GLenum pathNameType, const GLvoid *paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat *transformValues) {
}
GLAPI void APIENTRY stub_glCoverStrokePathInstancedNV (GLsizei numPaths, GLenum pathNameType, const GLvoid *paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat *transformValues) {
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
GLAPI void APIENTRY stub_glGetPathMetricsNV (GLbitfield metricQueryMask, GLsizei numPaths, GLenum pathNameType, const GLvoid *paths, GLuint pathBase, GLsizei stride, GLfloat *metrics) {
}
GLAPI void APIENTRY stub_glGetPathMetricRangeNV (GLbitfield metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat *metrics) {
}
GLAPI void APIENTRY stub_glGetPathSpacingNV (GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const GLvoid *paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat *returnedSpacing) {
}
GLAPI void APIENTRY stub_glGetPathColorGenivNV (GLenum color, GLenum pname, GLint *value) {
}
GLAPI void APIENTRY stub_glGetPathColorGenfvNV (GLenum color, GLenum pname, GLfloat *value) {
}
GLAPI void APIENTRY stub_glGetPathTexGenivNV (GLenum texCoordSet, GLenum pname, GLint *value) {
}
GLAPI void APIENTRY stub_glGetPathTexGenfvNV (GLenum texCoordSet, GLenum pname, GLfloat *value) {
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
GLAPI void APIENTRY stub_glStencilOpValueAMD (GLenum face, GLuint value) {
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
GLAPI void APIENTRY stub_glTexStorageSparseAMD (GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, GLbitfield flags) {
}
GLAPI void APIENTRY stub_glTextureStorageSparseAMD (GLuint texture, GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, GLbitfield flags) {
}

//----------------------------------------------------------------------------

void glexfp::Reset() {
	m_count = 0;
	glBlendColor = stub_glBlendColor;
	glBlendEquation = stub_glBlendEquation;
	glDrawRangeElements = stub_glDrawRangeElements;
	glTexImage3D = stub_glTexImage3D;
	glTexSubImage3D = stub_glTexSubImage3D;
	glCopyTexSubImage3D = stub_glCopyTexSubImage3D;
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
	glDrawArraysInstanced = stub_glDrawArraysInstanced;
	glDrawElementsInstanced = stub_glDrawElementsInstanced;
	glTexBuffer = stub_glTexBuffer;
	glPrimitiveRestartIndex = stub_glPrimitiveRestartIndex;
	glGetInteger64i_v = stub_glGetInteger64i_v;
	glGetBufferParameteri64v = stub_glGetBufferParameteri64v;
	glFramebufferTexture = stub_glFramebufferTexture;
	glVertexAttribDivisor = stub_glVertexAttribDivisor;
	glMinSampleShading = stub_glMinSampleShading;
	glBlendEquationi = stub_glBlendEquationi;
	glBlendEquationSeparatei = stub_glBlendEquationSeparatei;
	glBlendFunci = stub_glBlendFunci;
	glBlendFuncSeparatei = stub_glBlendFuncSeparatei;
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
	glLoadTransposeMatrixfARB = stub_glLoadTransposeMatrixfARB;
	glLoadTransposeMatrixdARB = stub_glLoadTransposeMatrixdARB;
	glMultTransposeMatrixfARB = stub_glMultTransposeMatrixfARB;
	glMultTransposeMatrixdARB = stub_glMultTransposeMatrixdARB;
	glSampleCoverageARB = stub_glSampleCoverageARB;
	glCompressedTexImage3DARB = stub_glCompressedTexImage3DARB;
	glCompressedTexImage2DARB = stub_glCompressedTexImage2DARB;
	glCompressedTexImage1DARB = stub_glCompressedTexImage1DARB;
	glCompressedTexSubImage3DARB = stub_glCompressedTexSubImage3DARB;
	glCompressedTexSubImage2DARB = stub_glCompressedTexSubImage2DARB;
	glCompressedTexSubImage1DARB = stub_glCompressedTexSubImage1DARB;
	glGetCompressedTexImageARB = stub_glGetCompressedTexImageARB;
	glPointParameterfARB = stub_glPointParameterfARB;
	glPointParameterfvARB = stub_glPointParameterfvARB;
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
	glCurrentPaletteMatrixARB = stub_glCurrentPaletteMatrixARB;
	glMatrixIndexubvARB = stub_glMatrixIndexubvARB;
	glMatrixIndexusvARB = stub_glMatrixIndexusvARB;
	glMatrixIndexuivARB = stub_glMatrixIndexuivARB;
	glMatrixIndexPointerARB = stub_glMatrixIndexPointerARB;
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
	glGetVertexAttribdvARB = stub_glGetVertexAttribdvARB;
	glGetVertexAttribfvARB = stub_glGetVertexAttribfvARB;
	glGetVertexAttribivARB = stub_glGetVertexAttribivARB;
	glGetVertexAttribPointervARB = stub_glGetVertexAttribPointervARB;
	glIsProgramARB = stub_glIsProgramARB;
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
	glGenQueriesARB = stub_glGenQueriesARB;
	glDeleteQueriesARB = stub_glDeleteQueriesARB;
	glIsQueryARB = stub_glIsQueryARB;
	glBeginQueryARB = stub_glBeginQueryARB;
	glEndQueryARB = stub_glEndQueryARB;
	glGetQueryivARB = stub_glGetQueryivARB;
	glGetQueryObjectivARB = stub_glGetQueryObjectivARB;
	glGetQueryObjectuivARB = stub_glGetQueryObjectuivARB;
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
	glBindAttribLocationARB = stub_glBindAttribLocationARB;
	glGetActiveAttribARB = stub_glGetActiveAttribARB;
	glGetAttribLocationARB = stub_glGetAttribLocationARB;
	glDrawBuffersARB = stub_glDrawBuffersARB;
	glClampColorARB = stub_glClampColorARB;
	glDrawArraysInstancedARB = stub_glDrawArraysInstancedARB;
	glDrawElementsInstancedARB = stub_glDrawElementsInstancedARB;
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
	glProgramParameteriARB = stub_glProgramParameteriARB;
	glFramebufferTextureARB = stub_glFramebufferTextureARB;
	glFramebufferTextureLayerARB = stub_glFramebufferTextureLayerARB;
	glFramebufferTextureFaceARB = stub_glFramebufferTextureFaceARB;
	glVertexAttribDivisorARB = stub_glVertexAttribDivisorARB;
	glMapBufferRange = stub_glMapBufferRange;
	glFlushMappedBufferRange = stub_glFlushMappedBufferRange;
	glTexBufferARB = stub_glTexBufferARB;
	glBindVertexArray = stub_glBindVertexArray;
	glDeleteVertexArrays = stub_glDeleteVertexArrays;
	glGenVertexArrays = stub_glGenVertexArrays;
	glIsVertexArray = stub_glIsVertexArray;
	glGetUniformIndices = stub_glGetUniformIndices;
	glGetActiveUniformsiv = stub_glGetActiveUniformsiv;
	glGetActiveUniformName = stub_glGetActiveUniformName;
	glGetUniformBlockIndex = stub_glGetUniformBlockIndex;
	glGetActiveUniformBlockiv = stub_glGetActiveUniformBlockiv;
	glGetActiveUniformBlockName = stub_glGetActiveUniformBlockName;
	glUniformBlockBinding = stub_glUniformBlockBinding;
	glCopyBufferSubData = stub_glCopyBufferSubData;
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
	glTexImage2DMultisample = stub_glTexImage2DMultisample;
	glTexImage3DMultisample = stub_glTexImage3DMultisample;
	glGetMultisamplefv = stub_glGetMultisamplefv;
	glSampleMaski = stub_glSampleMaski;
	glBlendEquationiARB = stub_glBlendEquationiARB;
	glBlendEquationSeparateiARB = stub_glBlendEquationSeparateiARB;
	glBlendFunciARB = stub_glBlendFunciARB;
	glBlendFuncSeparateiARB = stub_glBlendFuncSeparateiARB;
	glMinSampleShadingARB = stub_glMinSampleShadingARB;
	glNamedStringARB = stub_glNamedStringARB;
	glDeleteNamedStringARB = stub_glDeleteNamedStringARB;
	glCompileShaderIncludeARB = stub_glCompileShaderIncludeARB;
	glIsNamedStringARB = stub_glIsNamedStringARB;
	glGetNamedStringARB = stub_glGetNamedStringARB;
	glGetNamedStringivARB = stub_glGetNamedStringivARB;
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
	glVertexAttribP1ui = stub_glVertexAttribP1ui;
	glVertexAttribP1uiv = stub_glVertexAttribP1uiv;
	glVertexAttribP2ui = stub_glVertexAttribP2ui;
	glVertexAttribP2uiv = stub_glVertexAttribP2uiv;
	glVertexAttribP3ui = stub_glVertexAttribP3ui;
	glVertexAttribP3uiv = stub_glVertexAttribP3uiv;
	glVertexAttribP4ui = stub_glVertexAttribP4ui;
	glVertexAttribP4uiv = stub_glVertexAttribP4uiv;
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
	glCreateSyncFromCLeventARB = stub_glCreateSyncFromCLeventARB;
	glDebugMessageControlARB = stub_glDebugMessageControlARB;
	glDebugMessageInsertARB = stub_glDebugMessageInsertARB;
	glDebugMessageCallbackARB = stub_glDebugMessageCallbackARB;
	glGetDebugMessageLogARB = stub_glGetDebugMessageLogARB;
	glGetGraphicsResetStatusARB = stub_glGetGraphicsResetStatusARB;
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
	glGetnTexImageARB = stub_glGetnTexImageARB;
	glReadnPixelsARB = stub_glReadnPixelsARB;
	glGetnCompressedTexImageARB = stub_glGetnCompressedTexImageARB;
	glGetnUniformfvARB = stub_glGetnUniformfvARB;
	glGetnUniformivARB = stub_glGetnUniformivARB;
	glGetnUniformuivARB = stub_glGetnUniformuivARB;
	glGetnUniformdvARB = stub_glGetnUniformdvARB;
	glDrawArraysInstancedBaseInstance = stub_glDrawArraysInstancedBaseInstance;
	glDrawElementsInstancedBaseInstance = stub_glDrawElementsInstancedBaseInstance;
	glDrawElementsInstancedBaseVertexBaseInstance = stub_glDrawElementsInstancedBaseVertexBaseInstance;
	glDrawTransformFeedbackInstanced = stub_glDrawTransformFeedbackInstanced;
	glDrawTransformFeedbackStreamInstanced = stub_glDrawTransformFeedbackStreamInstanced;
	glGetInternalformativ = stub_glGetInternalformativ;
	glGetActiveAtomicCounterBufferiv = stub_glGetActiveAtomicCounterBufferiv;
	glBindImageTexture = stub_glBindImageTexture;
	glMemoryBarrier = stub_glMemoryBarrier;
	glTexStorage1D = stub_glTexStorage1D;
	glTexStorage2D = stub_glTexStorage2D;
	glTexStorage3D = stub_glTexStorage3D;
	glTextureStorage1DEXT = stub_glTextureStorage1DEXT;
	glTextureStorage2DEXT = stub_glTextureStorage2DEXT;
	glTextureStorage3DEXT = stub_glTextureStorage3DEXT;
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
	glClearBufferData = stub_glClearBufferData;
	glClearBufferSubData = stub_glClearBufferSubData;
	glClearNamedBufferDataEXT = stub_glClearNamedBufferDataEXT;
	glClearNamedBufferSubDataEXT = stub_glClearNamedBufferSubDataEXT;
	glDispatchCompute = stub_glDispatchCompute;
	glDispatchComputeIndirect = stub_glDispatchComputeIndirect;
	glCopyImageSubData = stub_glCopyImageSubData;
	glTextureView = stub_glTextureView;
	glBindVertexBuffer = stub_glBindVertexBuffer;
	glVertexAttribFormat = stub_glVertexAttribFormat;
	glVertexAttribIFormat = stub_glVertexAttribIFormat;
	glVertexAttribLFormat = stub_glVertexAttribLFormat;
	glVertexAttribBinding = stub_glVertexAttribBinding;
	glVertexBindingDivisor = stub_glVertexBindingDivisor;
	glVertexArrayBindVertexBufferEXT = stub_glVertexArrayBindVertexBufferEXT;
	glVertexArrayVertexAttribFormatEXT = stub_glVertexArrayVertexAttribFormatEXT;
	glVertexArrayVertexAttribIFormatEXT = stub_glVertexArrayVertexAttribIFormatEXT;
	glVertexArrayVertexAttribLFormatEXT = stub_glVertexArrayVertexAttribLFormatEXT;
	glVertexArrayVertexAttribBindingEXT = stub_glVertexArrayVertexAttribBindingEXT;
	glVertexArrayVertexBindingDivisorEXT = stub_glVertexArrayVertexBindingDivisorEXT;
	glFramebufferParameteri = stub_glFramebufferParameteri;
	glGetFramebufferParameteriv = stub_glGetFramebufferParameteriv;
	glNamedFramebufferParameteriEXT = stub_glNamedFramebufferParameteriEXT;
	glGetNamedFramebufferParameterivEXT = stub_glGetNamedFramebufferParameterivEXT;
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
	glTextureBufferRangeEXT = stub_glTextureBufferRangeEXT;
	glTexStorage2DMultisample = stub_glTexStorage2DMultisample;
	glTexStorage3DMultisample = stub_glTexStorage3DMultisample;
	glTextureStorage2DMultisampleEXT = stub_glTextureStorage2DMultisampleEXT;
	glTextureStorage3DMultisampleEXT = stub_glTextureStorage3DMultisampleEXT;
	glBlendColorEXT = stub_glBlendColorEXT;
	glPolygonOffsetEXT = stub_glPolygonOffsetEXT;
	glTexImage3DEXT = stub_glTexImage3DEXT;
	glTexSubImage3DEXT = stub_glTexSubImage3DEXT;
	glGetTexFilterFuncSGIS = stub_glGetTexFilterFuncSGIS;
	glTexFilterFuncSGIS = stub_glTexFilterFuncSGIS;
	glTexSubImage1DEXT = stub_glTexSubImage1DEXT;
	glTexSubImage2DEXT = stub_glTexSubImage2DEXT;
	glCopyTexImage1DEXT = stub_glCopyTexImage1DEXT;
	glCopyTexImage2DEXT = stub_glCopyTexImage2DEXT;
	glCopyTexSubImage1DEXT = stub_glCopyTexSubImage1DEXT;
	glCopyTexSubImage2DEXT = stub_glCopyTexSubImage2DEXT;
	glCopyTexSubImage3DEXT = stub_glCopyTexSubImage3DEXT;
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
	glColorTableSGI = stub_glColorTableSGI;
	glColorTableParameterfvSGI = stub_glColorTableParameterfvSGI;
	glColorTableParameterivSGI = stub_glColorTableParameterivSGI;
	glCopyColorTableSGI = stub_glCopyColorTableSGI;
	glGetColorTableSGI = stub_glGetColorTableSGI;
	glGetColorTableParameterfvSGI = stub_glGetColorTableParameterfvSGI;
	glGetColorTableParameterivSGI = stub_glGetColorTableParameterivSGI;
	glPixelTexGenSGIX = stub_glPixelTexGenSGIX;
	glPixelTexGenParameteriSGIS = stub_glPixelTexGenParameteriSGIS;
	glPixelTexGenParameterivSGIS = stub_glPixelTexGenParameterivSGIS;
	glPixelTexGenParameterfSGIS = stub_glPixelTexGenParameterfSGIS;
	glPixelTexGenParameterfvSGIS = stub_glPixelTexGenParameterfvSGIS;
	glGetPixelTexGenParameterivSGIS = stub_glGetPixelTexGenParameterivSGIS;
	glGetPixelTexGenParameterfvSGIS = stub_glGetPixelTexGenParameterfvSGIS;
	glTexImage4DSGIS = stub_glTexImage4DSGIS;
	glTexSubImage4DSGIS = stub_glTexSubImage4DSGIS;
	glAreTexturesResidentEXT = stub_glAreTexturesResidentEXT;
	glBindTextureEXT = stub_glBindTextureEXT;
	glDeleteTexturesEXT = stub_glDeleteTexturesEXT;
	glGenTexturesEXT = stub_glGenTexturesEXT;
	glIsTextureEXT = stub_glIsTextureEXT;
	glPrioritizeTexturesEXT = stub_glPrioritizeTexturesEXT;
	glDetailTexFuncSGIS = stub_glDetailTexFuncSGIS;
	glGetDetailTexFuncSGIS = stub_glGetDetailTexFuncSGIS;
	glSharpenTexFuncSGIS = stub_glSharpenTexFuncSGIS;
	glGetSharpenTexFuncSGIS = stub_glGetSharpenTexFuncSGIS;
	glSampleMaskSGIS = stub_glSampleMaskSGIS;
	glSamplePatternSGIS = stub_glSamplePatternSGIS;
	glArrayElementEXT = stub_glArrayElementEXT;
	glColorPointerEXT = stub_glColorPointerEXT;
	glDrawArraysEXT = stub_glDrawArraysEXT;
	glEdgeFlagPointerEXT = stub_glEdgeFlagPointerEXT;
	glGetPointervEXT = stub_glGetPointervEXT;
	glIndexPointerEXT = stub_glIndexPointerEXT;
	glNormalPointerEXT = stub_glNormalPointerEXT;
	glTexCoordPointerEXT = stub_glTexCoordPointerEXT;
	glVertexPointerEXT = stub_glVertexPointerEXT;
	glBlendEquationEXT = stub_glBlendEquationEXT;
	glSpriteParameterfSGIX = stub_glSpriteParameterfSGIX;
	glSpriteParameterfvSGIX = stub_glSpriteParameterfvSGIX;
	glSpriteParameteriSGIX = stub_glSpriteParameteriSGIX;
	glSpriteParameterivSGIX = stub_glSpriteParameterivSGIX;
	glPointParameterfEXT = stub_glPointParameterfEXT;
	glPointParameterfvEXT = stub_glPointParameterfvEXT;
	glPointParameterfSGIS = stub_glPointParameterfSGIS;
	glPointParameterfvSGIS = stub_glPointParameterfvSGIS;
	glGetInstrumentsSGIX = stub_glGetInstrumentsSGIX;
	glInstrumentsBufferSGIX = stub_glInstrumentsBufferSGIX;
	glPollInstrumentsSGIX = stub_glPollInstrumentsSGIX;
	glReadInstrumentsSGIX = stub_glReadInstrumentsSGIX;
	glStartInstrumentsSGIX = stub_glStartInstrumentsSGIX;
	glStopInstrumentsSGIX = stub_glStopInstrumentsSGIX;
	glFrameZoomSGIX = stub_glFrameZoomSGIX;
	glTagSampleBufferSGIX = stub_glTagSampleBufferSGIX;
	glDeformationMap3dSGIX = stub_glDeformationMap3dSGIX;
	glDeformationMap3fSGIX = stub_glDeformationMap3fSGIX;
	glDeformSGIX = stub_glDeformSGIX;
	glLoadIdentityDeformationMapSGIX = stub_glLoadIdentityDeformationMapSGIX;
	glReferencePlaneSGIX = stub_glReferencePlaneSGIX;
	glFlushRasterSGIX = stub_glFlushRasterSGIX;
	glFogFuncSGIS = stub_glFogFuncSGIS;
	glGetFogFuncSGIS = stub_glGetFogFuncSGIS;
	glImageTransformParameteriHP = stub_glImageTransformParameteriHP;
	glImageTransformParameterfHP = stub_glImageTransformParameterfHP;
	glImageTransformParameterivHP = stub_glImageTransformParameterivHP;
	glImageTransformParameterfvHP = stub_glImageTransformParameterfvHP;
	glGetImageTransformParameterivHP = stub_glGetImageTransformParameterivHP;
	glGetImageTransformParameterfvHP = stub_glGetImageTransformParameterfvHP;
	glColorSubTableEXT = stub_glColorSubTableEXT;
	glCopyColorSubTableEXT = stub_glCopyColorSubTableEXT;
	glHintPGI = stub_glHintPGI;
	glColorTableEXT = stub_glColorTableEXT;
	glGetColorTableEXT = stub_glGetColorTableEXT;
	glGetColorTableParameterivEXT = stub_glGetColorTableParameterivEXT;
	glGetColorTableParameterfvEXT = stub_glGetColorTableParameterfvEXT;
	glGetListParameterfvSGIX = stub_glGetListParameterfvSGIX;
	glGetListParameterivSGIX = stub_glGetListParameterivSGIX;
	glListParameterfSGIX = stub_glListParameterfSGIX;
	glListParameterfvSGIX = stub_glListParameterfvSGIX;
	glListParameteriSGIX = stub_glListParameteriSGIX;
	glListParameterivSGIX = stub_glListParameterivSGIX;
	glIndexMaterialEXT = stub_glIndexMaterialEXT;
	glIndexFuncEXT = stub_glIndexFuncEXT;
	glLockArraysEXT = stub_glLockArraysEXT;
	glUnlockArraysEXT = stub_glUnlockArraysEXT;
	glCullParameterdvEXT = stub_glCullParameterdvEXT;
	glCullParameterfvEXT = stub_glCullParameterfvEXT;
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
	glDrawRangeElementsEXT = stub_glDrawRangeElementsEXT;
	glApplyTextureEXT = stub_glApplyTextureEXT;
	glTextureLightEXT = stub_glTextureLightEXT;
	glTextureMaterialEXT = stub_glTextureMaterialEXT;
	glAsyncMarkerSGIX = stub_glAsyncMarkerSGIX;
	glFinishAsyncSGIX = stub_glFinishAsyncSGIX;
	glPollAsyncSGIX = stub_glPollAsyncSGIX;
	glGenAsyncMarkersSGIX = stub_glGenAsyncMarkersSGIX;
	glDeleteAsyncMarkersSGIX = stub_glDeleteAsyncMarkersSGIX;
	glIsAsyncMarkerSGIX = stub_glIsAsyncMarkerSGIX;
	glVertexPointervINTEL = stub_glVertexPointervINTEL;
	glNormalPointervINTEL = stub_glNormalPointervINTEL;
	glColorPointervINTEL = stub_glColorPointervINTEL;
	glTexCoordPointervINTEL = stub_glTexCoordPointervINTEL;
	glPixelTransformParameteriEXT = stub_glPixelTransformParameteriEXT;
	glPixelTransformParameterfEXT = stub_glPixelTransformParameterfEXT;
	glPixelTransformParameterivEXT = stub_glPixelTransformParameterivEXT;
	glPixelTransformParameterfvEXT = stub_glPixelTransformParameterfvEXT;
	glGetPixelTransformParameterivEXT = stub_glGetPixelTransformParameterivEXT;
	glGetPixelTransformParameterfvEXT = stub_glGetPixelTransformParameterfvEXT;
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
	glTextureNormalEXT = stub_glTextureNormalEXT;
	glMultiDrawArraysEXT = stub_glMultiDrawArraysEXT;
	glMultiDrawElementsEXT = stub_glMultiDrawElementsEXT;
	glFogCoordfEXT = stub_glFogCoordfEXT;
	glFogCoordfvEXT = stub_glFogCoordfvEXT;
	glFogCoorddEXT = stub_glFogCoorddEXT;
	glFogCoorddvEXT = stub_glFogCoorddvEXT;
	glFogCoordPointerEXT = stub_glFogCoordPointerEXT;
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
	glFinishTextureSUNX = stub_glFinishTextureSUNX;
	glGlobalAlphaFactorbSUN = stub_glGlobalAlphaFactorbSUN;
	glGlobalAlphaFactorsSUN = stub_glGlobalAlphaFactorsSUN;
	glGlobalAlphaFactoriSUN = stub_glGlobalAlphaFactoriSUN;
	glGlobalAlphaFactorfSUN = stub_glGlobalAlphaFactorfSUN;
	glGlobalAlphaFactordSUN = stub_glGlobalAlphaFactordSUN;
	glGlobalAlphaFactorubSUN = stub_glGlobalAlphaFactorubSUN;
	glGlobalAlphaFactorusSUN = stub_glGlobalAlphaFactorusSUN;
	glGlobalAlphaFactoruiSUN = stub_glGlobalAlphaFactoruiSUN;
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
	glBlendFuncSeparateEXT = stub_glBlendFuncSeparateEXT;
	glBlendFuncSeparateINGR = stub_glBlendFuncSeparateINGR;
	glVertexWeightfEXT = stub_glVertexWeightfEXT;
	glVertexWeightfvEXT = stub_glVertexWeightfvEXT;
	glVertexWeightPointerEXT = stub_glVertexWeightPointerEXT;
	glFlushVertexArrayRangeNV = stub_glFlushVertexArrayRangeNV;
	glVertexArrayRangeNV = stub_glVertexArrayRangeNV;
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
	glMultiModeDrawArraysIBM = stub_glMultiModeDrawArraysIBM;
	glMultiModeDrawElementsIBM = stub_glMultiModeDrawElementsIBM;
	glColorPointerListIBM = stub_glColorPointerListIBM;
	glSecondaryColorPointerListIBM = stub_glSecondaryColorPointerListIBM;
	glEdgeFlagPointerListIBM = stub_glEdgeFlagPointerListIBM;
	glFogCoordPointerListIBM = stub_glFogCoordPointerListIBM;
	glIndexPointerListIBM = stub_glIndexPointerListIBM;
	glNormalPointerListIBM = stub_glNormalPointerListIBM;
	glTexCoordPointerListIBM = stub_glTexCoordPointerListIBM;
	glVertexPointerListIBM = stub_glVertexPointerListIBM;
	glTbufferMask3DFX = stub_glTbufferMask3DFX;
	glSampleMaskEXT = stub_glSampleMaskEXT;
	glSamplePatternEXT = stub_glSamplePatternEXT;
	glTextureColorMaskSGIS = stub_glTextureColorMaskSGIS;
	glIglooInterfaceSGIX = stub_glIglooInterfaceSGIX;
	glDeleteFencesNV = stub_glDeleteFencesNV;
	glGenFencesNV = stub_glGenFencesNV;
	glIsFenceNV = stub_glIsFenceNV;
	glTestFenceNV = stub_glTestFenceNV;
	glGetFenceivNV = stub_glGetFenceivNV;
	glFinishFenceNV = stub_glFinishFenceNV;
	glSetFenceNV = stub_glSetFenceNV;
	glMapControlPointsNV = stub_glMapControlPointsNV;
	glMapParameterivNV = stub_glMapParameterivNV;
	glMapParameterfvNV = stub_glMapParameterfvNV;
	glGetMapControlPointsNV = stub_glGetMapControlPointsNV;
	glGetMapParameterivNV = stub_glGetMapParameterivNV;
	glGetMapParameterfvNV = stub_glGetMapParameterfvNV;
	glGetMapAttribParameterivNV = stub_glGetMapAttribParameterivNV;
	glGetMapAttribParameterfvNV = stub_glGetMapAttribParameterfvNV;
	glEvalMapsNV = stub_glEvalMapsNV;
	glCombinerStageParameterfvNV = stub_glCombinerStageParameterfvNV;
	glGetCombinerStageParameterfvNV = stub_glGetCombinerStageParameterfvNV;
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
	glPNTrianglesiATI = stub_glPNTrianglesiATI;
	glPNTrianglesfATI = stub_glPNTrianglesfATI;
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
	glElementPointerATI = stub_glElementPointerATI;
	glDrawElementArrayATI = stub_glDrawElementArrayATI;
	glDrawRangeElementArrayATI = stub_glDrawRangeElementArrayATI;
	glDrawMeshArraysSUN = stub_glDrawMeshArraysSUN;
	glGenOcclusionQueriesNV = stub_glGenOcclusionQueriesNV;
	glDeleteOcclusionQueriesNV = stub_glDeleteOcclusionQueriesNV;
	glIsOcclusionQueryNV = stub_glIsOcclusionQueryNV;
	glBeginOcclusionQueryNV = stub_glBeginOcclusionQueryNV;
	glEndOcclusionQueryNV = stub_glEndOcclusionQueryNV;
	glGetOcclusionQueryivNV = stub_glGetOcclusionQueryivNV;
	glGetOcclusionQueryuivNV = stub_glGetOcclusionQueryuivNV;
	glPointParameteriNV = stub_glPointParameteriNV;
	glPointParameterivNV = stub_glPointParameterivNV;
	glActiveStencilFaceEXT = stub_glActiveStencilFaceEXT;
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
	glBindVertexArrayAPPLE = stub_glBindVertexArrayAPPLE;
	glDeleteVertexArraysAPPLE = stub_glDeleteVertexArraysAPPLE;
	glGenVertexArraysAPPLE = stub_glGenVertexArraysAPPLE;
	glIsVertexArrayAPPLE = stub_glIsVertexArrayAPPLE;
	glVertexArrayRangeAPPLE = stub_glVertexArrayRangeAPPLE;
	glFlushVertexArrayRangeAPPLE = stub_glFlushVertexArrayRangeAPPLE;
	glVertexArrayParameteriAPPLE = stub_glVertexArrayParameteriAPPLE;
	glDrawBuffersATI = stub_glDrawBuffersATI;
	glProgramNamedParameter4fNV = stub_glProgramNamedParameter4fNV;
	glProgramNamedParameter4dNV = stub_glProgramNamedParameter4dNV;
	glProgramNamedParameter4fvNV = stub_glProgramNamedParameter4fvNV;
	glProgramNamedParameter4dvNV = stub_glProgramNamedParameter4dvNV;
	glGetProgramNamedParameterfvNV = stub_glGetProgramNamedParameterfvNV;
	glGetProgramNamedParameterdvNV = stub_glGetProgramNamedParameterdvNV;
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
	glPixelDataRangeNV = stub_glPixelDataRangeNV;
	glFlushPixelDataRangeNV = stub_glFlushPixelDataRangeNV;
	glPrimitiveRestartNV = stub_glPrimitiveRestartNV;
	glPrimitiveRestartIndexNV = stub_glPrimitiveRestartIndexNV;
	glMapObjectBufferATI = stub_glMapObjectBufferATI;
	glUnmapObjectBufferATI = stub_glUnmapObjectBufferATI;
	glStencilOpSeparateATI = stub_glStencilOpSeparateATI;
	glStencilFuncSeparateATI = stub_glStencilFuncSeparateATI;
	glVertexAttribArrayObjectATI = stub_glVertexAttribArrayObjectATI;
	glGetVertexAttribArrayObjectfvATI = stub_glGetVertexAttribArrayObjectfvATI;
	glGetVertexAttribArrayObjectivATI = stub_glGetVertexAttribArrayObjectivATI;
	glDepthBoundsEXT = stub_glDepthBoundsEXT;
	glBlendEquationSeparateEXT = stub_glBlendEquationSeparateEXT;
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
	glStringMarkerGREMEDY = stub_glStringMarkerGREMEDY;
	glStencilClearTagEXT = stub_glStencilClearTagEXT;
	glBlitFramebufferEXT = stub_glBlitFramebufferEXT;
	glRenderbufferStorageMultisampleEXT = stub_glRenderbufferStorageMultisampleEXT;
	glGetQueryObjecti64vEXT = stub_glGetQueryObjecti64vEXT;
	glGetQueryObjectui64vEXT = stub_glGetQueryObjectui64vEXT;
	glProgramEnvParameters4fvEXT = stub_glProgramEnvParameters4fvEXT;
	glProgramLocalParameters4fvEXT = stub_glProgramLocalParameters4fvEXT;
	glBufferParameteriAPPLE = stub_glBufferParameteriAPPLE;
	glFlushMappedBufferRangeAPPLE = stub_glFlushMappedBufferRangeAPPLE;
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
	glProgramVertexLimitNV = stub_glProgramVertexLimitNV;
	glFramebufferTextureEXT = stub_glFramebufferTextureEXT;
	glFramebufferTextureLayerEXT = stub_glFramebufferTextureLayerEXT;
	glFramebufferTextureFaceEXT = stub_glFramebufferTextureFaceEXT;
	glProgramParameteriEXT = stub_glProgramParameteriEXT;
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
	glDrawArraysInstancedEXT = stub_glDrawArraysInstancedEXT;
	glDrawElementsInstancedEXT = stub_glDrawElementsInstancedEXT;
	glTexBufferEXT = stub_glTexBufferEXT;
	glDepthRangedNV = stub_glDepthRangedNV;
	glClearDepthdNV = stub_glClearDepthdNV;
	glDepthBoundsdNV = stub_glDepthBoundsdNV;
	glRenderbufferStorageMultisampleCoverageNV = stub_glRenderbufferStorageMultisampleCoverageNV;
	glProgramBufferParametersfvNV = stub_glProgramBufferParametersfvNV;
	glProgramBufferParametersIivNV = stub_glProgramBufferParametersIivNV;
	glProgramBufferParametersIuivNV = stub_glProgramBufferParametersIuivNV;
	glColorMaskIndexedEXT = stub_glColorMaskIndexedEXT;
	glGetBooleanIndexedvEXT = stub_glGetBooleanIndexedvEXT;
	glGetIntegerIndexedvEXT = stub_glGetIntegerIndexedvEXT;
	glEnableIndexedEXT = stub_glEnableIndexedEXT;
	glDisableIndexedEXT = stub_glDisableIndexedEXT;
	glIsEnabledIndexedEXT = stub_glIsEnabledIndexedEXT;
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
	glUniformBufferEXT = stub_glUniformBufferEXT;
	glGetUniformBufferSizeEXT = stub_glGetUniformBufferSizeEXT;
	glGetUniformOffsetEXT = stub_glGetUniformOffsetEXT;
	glTexParameterIivEXT = stub_glTexParameterIivEXT;
	glTexParameterIuivEXT = stub_glTexParameterIuivEXT;
	glGetTexParameterIivEXT = stub_glGetTexParameterIivEXT;
	glGetTexParameterIuivEXT = stub_glGetTexParameterIuivEXT;
	glClearColorIiEXT = stub_glClearColorIiEXT;
	glClearColorIuiEXT = stub_glClearColorIuiEXT;
	glFrameTerminatorGREMEDY = stub_glFrameTerminatorGREMEDY;
	glBeginConditionalRenderNV = stub_glBeginConditionalRenderNV;
	glEndConditionalRenderNV = stub_glEndConditionalRenderNV;
	glPresentFrameKeyedNV = stub_glPresentFrameKeyedNV;
	glPresentFrameDualFillNV = stub_glPresentFrameDualFillNV;
	glGetVideoivNV = stub_glGetVideoivNV;
	glGetVideouivNV = stub_glGetVideouivNV;
	glGetVideoi64vNV = stub_glGetVideoi64vNV;
	glGetVideoui64vNV = stub_glGetVideoui64vNV;
	glBeginTransformFeedbackEXT = stub_glBeginTransformFeedbackEXT;
	glEndTransformFeedbackEXT = stub_glEndTransformFeedbackEXT;
	glBindBufferRangeEXT = stub_glBindBufferRangeEXT;
	glBindBufferOffsetEXT = stub_glBindBufferOffsetEXT;
	glBindBufferBaseEXT = stub_glBindBufferBaseEXT;
	glTransformFeedbackVaryingsEXT = stub_glTransformFeedbackVaryingsEXT;
	glGetTransformFeedbackVaryingEXT = stub_glGetTransformFeedbackVaryingEXT;
	glClientAttribDefaultEXT = stub_glClientAttribDefaultEXT;
	glPushClientAttribDefaultEXT = stub_glPushClientAttribDefaultEXT;
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
	glMatrixLoadTransposefEXT = stub_glMatrixLoadTransposefEXT;
	glMatrixLoadTransposedEXT = stub_glMatrixLoadTransposedEXT;
	glMatrixMultTransposefEXT = stub_glMatrixMultTransposefEXT;
	glMatrixMultTransposedEXT = stub_glMatrixMultTransposedEXT;
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
	glMultiTexParameterfEXT = stub_glMultiTexParameterfEXT;
	glMultiTexParameterfvEXT = stub_glMultiTexParameterfvEXT;
	glMultiTexParameteriEXT = stub_glMultiTexParameteriEXT;
	glMultiTexParameterivEXT = stub_glMultiTexParameterivEXT;
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
	glBindMultiTextureEXT = stub_glBindMultiTextureEXT;
	glEnableClientStateIndexedEXT = stub_glEnableClientStateIndexedEXT;
	glDisableClientStateIndexedEXT = stub_glDisableClientStateIndexedEXT;
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
	glGetFloatIndexedvEXT = stub_glGetFloatIndexedvEXT;
	glGetDoubleIndexedvEXT = stub_glGetDoubleIndexedvEXT;
	glGetPointerIndexedvEXT = stub_glGetPointerIndexedvEXT;
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
	glNamedProgramStringEXT = stub_glNamedProgramStringEXT;
	glNamedProgramLocalParameter4dEXT = stub_glNamedProgramLocalParameter4dEXT;
	glNamedProgramLocalParameter4dvEXT = stub_glNamedProgramLocalParameter4dvEXT;
	glNamedProgramLocalParameter4fEXT = stub_glNamedProgramLocalParameter4fEXT;
	glNamedProgramLocalParameter4fvEXT = stub_glNamedProgramLocalParameter4fvEXT;
	glGetNamedProgramLocalParameterdvEXT = stub_glGetNamedProgramLocalParameterdvEXT;
	glGetNamedProgramLocalParameterfvEXT = stub_glGetNamedProgramLocalParameterfvEXT;
	glGetNamedProgramivEXT = stub_glGetNamedProgramivEXT;
	glGetNamedProgramStringEXT = stub_glGetNamedProgramStringEXT;
	glNamedProgramLocalParameters4fvEXT = stub_glNamedProgramLocalParameters4fvEXT;
	glNamedProgramLocalParameterI4iEXT = stub_glNamedProgramLocalParameterI4iEXT;
	glNamedProgramLocalParameterI4ivEXT = stub_glNamedProgramLocalParameterI4ivEXT;
	glNamedProgramLocalParametersI4ivEXT = stub_glNamedProgramLocalParametersI4ivEXT;
	glNamedProgramLocalParameterI4uiEXT = stub_glNamedProgramLocalParameterI4uiEXT;
	glNamedProgramLocalParameterI4uivEXT = stub_glNamedProgramLocalParameterI4uivEXT;
	glNamedProgramLocalParametersI4uivEXT = stub_glNamedProgramLocalParametersI4uivEXT;
	glGetNamedProgramLocalParameterIivEXT = stub_glGetNamedProgramLocalParameterIivEXT;
	glGetNamedProgramLocalParameterIuivEXT = stub_glGetNamedProgramLocalParameterIuivEXT;
	glTextureParameterIivEXT = stub_glTextureParameterIivEXT;
	glTextureParameterIuivEXT = stub_glTextureParameterIuivEXT;
	glGetTextureParameterIivEXT = stub_glGetTextureParameterIivEXT;
	glGetTextureParameterIuivEXT = stub_glGetTextureParameterIuivEXT;
	glMultiTexParameterIivEXT = stub_glMultiTexParameterIivEXT;
	glMultiTexParameterIuivEXT = stub_glMultiTexParameterIuivEXT;
	glGetMultiTexParameterIivEXT = stub_glGetMultiTexParameterIivEXT;
	glGetMultiTexParameterIuivEXT = stub_glGetMultiTexParameterIuivEXT;
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
	glProgramUniform1uiEXT = stub_glProgramUniform1uiEXT;
	glProgramUniform2uiEXT = stub_glProgramUniform2uiEXT;
	glProgramUniform3uiEXT = stub_glProgramUniform3uiEXT;
	glProgramUniform4uiEXT = stub_glProgramUniform4uiEXT;
	glProgramUniform1uivEXT = stub_glProgramUniform1uivEXT;
	glProgramUniform2uivEXT = stub_glProgramUniform2uivEXT;
	glProgramUniform3uivEXT = stub_glProgramUniform3uivEXT;
	glProgramUniform4uivEXT = stub_glProgramUniform4uivEXT;
	glNamedBufferDataEXT = stub_glNamedBufferDataEXT;
	glNamedBufferSubDataEXT = stub_glNamedBufferSubDataEXT;
	glMapNamedBufferEXT = stub_glMapNamedBufferEXT;
	glUnmapNamedBufferEXT = stub_glUnmapNamedBufferEXT;
	glMapNamedBufferRangeEXT = stub_glMapNamedBufferRangeEXT;
	glFlushMappedNamedBufferRangeEXT = stub_glFlushMappedNamedBufferRangeEXT;
	glNamedCopyBufferSubDataEXT = stub_glNamedCopyBufferSubDataEXT;
	glGetNamedBufferParameterivEXT = stub_glGetNamedBufferParameterivEXT;
	glGetNamedBufferPointervEXT = stub_glGetNamedBufferPointervEXT;
	glGetNamedBufferSubDataEXT = stub_glGetNamedBufferSubDataEXT;
	glTextureBufferEXT = stub_glTextureBufferEXT;
	glMultiTexBufferEXT = stub_glMultiTexBufferEXT;
	glNamedRenderbufferStorageEXT = stub_glNamedRenderbufferStorageEXT;
	glGetNamedRenderbufferParameterivEXT = stub_glGetNamedRenderbufferParameterivEXT;
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
	glNamedRenderbufferStorageMultisampleEXT = stub_glNamedRenderbufferStorageMultisampleEXT;
	glNamedRenderbufferStorageMultisampleCoverageEXT = stub_glNamedRenderbufferStorageMultisampleCoverageEXT;
	glNamedFramebufferTextureEXT = stub_glNamedFramebufferTextureEXT;
	glNamedFramebufferTextureLayerEXT = stub_glNamedFramebufferTextureLayerEXT;
	glNamedFramebufferTextureFaceEXT = stub_glNamedFramebufferTextureFaceEXT;
	glTextureRenderbufferEXT = stub_glTextureRenderbufferEXT;
	glMultiTexRenderbufferEXT = stub_glMultiTexRenderbufferEXT;
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
	glGetMultisamplefvNV = stub_glGetMultisamplefvNV;
	glSampleMaskIndexedNV = stub_glSampleMaskIndexedNV;
	glTexRenderbufferNV = stub_glTexRenderbufferNV;
	glBindTransformFeedbackNV = stub_glBindTransformFeedbackNV;
	glDeleteTransformFeedbacksNV = stub_glDeleteTransformFeedbacksNV;
	glGenTransformFeedbacksNV = stub_glGenTransformFeedbacksNV;
	glIsTransformFeedbackNV = stub_glIsTransformFeedbackNV;
	glPauseTransformFeedbackNV = stub_glPauseTransformFeedbackNV;
	glResumeTransformFeedbackNV = stub_glResumeTransformFeedbackNV;
	glDrawTransformFeedbackNV = stub_glDrawTransformFeedbackNV;
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
	glTessellationFactorAMD = stub_glTessellationFactorAMD;
	glTessellationModeAMD = stub_glTessellationModeAMD;
	glProvokingVertexEXT = stub_glProvokingVertexEXT;
	glBlendFuncIndexedAMD = stub_glBlendFuncIndexedAMD;
	glBlendFuncSeparateIndexedAMD = stub_glBlendFuncSeparateIndexedAMD;
	glBlendEquationIndexedAMD = stub_glBlendEquationIndexedAMD;
	glBlendEquationSeparateIndexedAMD = stub_glBlendEquationSeparateIndexedAMD;
	glTextureRangeAPPLE = stub_glTextureRangeAPPLE;
	glGetTexParameterPointervAPPLE = stub_glGetTexParameterPointervAPPLE;
	glEnableVertexAttribAPPLE = stub_glEnableVertexAttribAPPLE;
	glDisableVertexAttribAPPLE = stub_glDisableVertexAttribAPPLE;
	glIsVertexAttribEnabledAPPLE = stub_glIsVertexAttribEnabledAPPLE;
	glMapVertexAttrib1dAPPLE = stub_glMapVertexAttrib1dAPPLE;
	glMapVertexAttrib1fAPPLE = stub_glMapVertexAttrib1fAPPLE;
	glMapVertexAttrib2dAPPLE = stub_glMapVertexAttrib2dAPPLE;
	glMapVertexAttrib2fAPPLE = stub_glMapVertexAttrib2fAPPLE;
	glObjectPurgeableAPPLE = stub_glObjectPurgeableAPPLE;
	glObjectUnpurgeableAPPLE = stub_glObjectUnpurgeableAPPLE;
	glGetObjectParameterivAPPLE = stub_glGetObjectParameterivAPPLE;
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
	glCopyImageSubDataNV = stub_glCopyImageSubDataNV;
	glUseShaderProgramEXT = stub_glUseShaderProgramEXT;
	glActiveProgramEXT = stub_glActiveProgramEXT;
	glCreateShaderProgramEXT = stub_glCreateShaderProgramEXT;
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
	glGetUniformui64vNV = stub_glGetUniformui64vNV;
	glProgramUniformui64NV = stub_glProgramUniformui64NV;
	glProgramUniformui64vNV = stub_glProgramUniformui64vNV;
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
	glTextureBarrierNV = stub_glTextureBarrierNV;
	glBindImageTextureEXT = stub_glBindImageTextureEXT;
	glMemoryBarrierEXT = stub_glMemoryBarrierEXT;
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
	glVertexArrayVertexAttribLOffsetEXT = stub_glVertexArrayVertexAttribLOffsetEXT;
	glProgramSubroutineParametersuivNV = stub_glProgramSubroutineParametersuivNV;
	glGetProgramSubroutineParameteruivNV = stub_glGetProgramSubroutineParameteruivNV;
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
	glGenNamesAMD = stub_glGenNamesAMD;
	glDeleteNamesAMD = stub_glDeleteNamesAMD;
	glIsNameAMD = stub_glIsNameAMD;
	glDebugMessageEnableAMD = stub_glDebugMessageEnableAMD;
	glDebugMessageInsertAMD = stub_glDebugMessageInsertAMD;
	glDebugMessageCallbackAMD = stub_glDebugMessageCallbackAMD;
	glGetDebugMessageLogAMD = stub_glGetDebugMessageLogAMD;
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
	glTexImage2DMultisampleCoverageNV = stub_glTexImage2DMultisampleCoverageNV;
	glTexImage3DMultisampleCoverageNV = stub_glTexImage3DMultisampleCoverageNV;
	glTextureImage2DMultisampleNV = stub_glTextureImage2DMultisampleNV;
	glTextureImage3DMultisampleNV = stub_glTextureImage3DMultisampleNV;
	glTextureImage2DMultisampleCoverageNV = stub_glTextureImage2DMultisampleCoverageNV;
	glTextureImage3DMultisampleCoverageNV = stub_glTextureImage3DMultisampleCoverageNV;
	glSetMultisamplefvAMD = stub_glSetMultisamplefvAMD;
	glImportSyncEXT = stub_glImportSyncEXT;
	glMultiDrawArraysIndirectAMD = stub_glMultiDrawArraysIndirectAMD;
	glMultiDrawElementsIndirectAMD = stub_glMultiDrawElementsIndirectAMD;
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
	glPathColorGenNV = stub_glPathColorGenNV;
	glPathTexGenNV = stub_glPathTexGenNV;
	glPathFogGenNV = stub_glPathFogGenNV;
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
	glGetPathColorGenivNV = stub_glGetPathColorGenivNV;
	glGetPathColorGenfvNV = stub_glGetPathColorGenfvNV;
	glGetPathTexGenivNV = stub_glGetPathTexGenivNV;
	glGetPathTexGenfvNV = stub_glGetPathTexGenfvNV;
	glIsPointInFillPathNV = stub_glIsPointInFillPathNV;
	glIsPointInStrokePathNV = stub_glIsPointInStrokePathNV;
	glGetPathLengthNV = stub_glGetPathLengthNV;
	glPointAlongPathNV = stub_glPointAlongPathNV;
	glStencilOpValueAMD = stub_glStencilOpValueAMD;
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
	glTexStorageSparseAMD = stub_glTexStorageSparseAMD;
	glTextureStorageSparseAMD = stub_glTextureStorageSparseAMD;
}//Reset

//----------------------------------------------------------------------------

bool glexfp::Load() {
	Reset();
	void (*p)() = 0;
	p = glXGetProcAddress((const unsigned char*)"glBlendColor");
	if (p) {
		glBlendColor = (PFNGLBLENDCOLORPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBlendEquation");
	if (p) {
		glBlendEquation = (PFNGLBLENDEQUATIONPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDrawRangeElements");
	if (p) {
		glDrawRangeElements = (PFNGLDRAWRANGEELEMENTSPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexImage3D");
	if (p) {
		glTexImage3D = (PFNGLTEXIMAGE3DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexSubImage3D");
	if (p) {
		glTexSubImage3D = (PFNGLTEXSUBIMAGE3DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCopyTexSubImage3D");
	if (p) {
		glCopyTexSubImage3D = (PFNGLCOPYTEXSUBIMAGE3DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glColorTable");
	if (p) {
		glColorTable = (PFNGLCOLORTABLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glColorTableParameterfv");
	if (p) {
		glColorTableParameterfv = (PFNGLCOLORTABLEPARAMETERFVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glColorTableParameteriv");
	if (p) {
		glColorTableParameteriv = (PFNGLCOLORTABLEPARAMETERIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCopyColorTable");
	if (p) {
		glCopyColorTable = (PFNGLCOPYCOLORTABLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetColorTable");
	if (p) {
		glGetColorTable = (PFNGLGETCOLORTABLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetColorTableParameterfv");
	if (p) {
		glGetColorTableParameterfv = (PFNGLGETCOLORTABLEPARAMETERFVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetColorTableParameteriv");
	if (p) {
		glGetColorTableParameteriv = (PFNGLGETCOLORTABLEPARAMETERIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glColorSubTable");
	if (p) {
		glColorSubTable = (PFNGLCOLORSUBTABLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCopyColorSubTable");
	if (p) {
		glCopyColorSubTable = (PFNGLCOPYCOLORSUBTABLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glConvolutionFilter1D");
	if (p) {
		glConvolutionFilter1D = (PFNGLCONVOLUTIONFILTER1DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glConvolutionFilter2D");
	if (p) {
		glConvolutionFilter2D = (PFNGLCONVOLUTIONFILTER2DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glConvolutionParameterf");
	if (p) {
		glConvolutionParameterf = (PFNGLCONVOLUTIONPARAMETERFPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glConvolutionParameterfv");
	if (p) {
		glConvolutionParameterfv = (PFNGLCONVOLUTIONPARAMETERFVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glConvolutionParameteri");
	if (p) {
		glConvolutionParameteri = (PFNGLCONVOLUTIONPARAMETERIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glConvolutionParameteriv");
	if (p) {
		glConvolutionParameteriv = (PFNGLCONVOLUTIONPARAMETERIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCopyConvolutionFilter1D");
	if (p) {
		glCopyConvolutionFilter1D = (PFNGLCOPYCONVOLUTIONFILTER1DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCopyConvolutionFilter2D");
	if (p) {
		glCopyConvolutionFilter2D = (PFNGLCOPYCONVOLUTIONFILTER2DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetConvolutionFilter");
	if (p) {
		glGetConvolutionFilter = (PFNGLGETCONVOLUTIONFILTERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetConvolutionParameterfv");
	if (p) {
		glGetConvolutionParameterfv = (PFNGLGETCONVOLUTIONPARAMETERFVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetConvolutionParameteriv");
	if (p) {
		glGetConvolutionParameteriv = (PFNGLGETCONVOLUTIONPARAMETERIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetSeparableFilter");
	if (p) {
		glGetSeparableFilter = (PFNGLGETSEPARABLEFILTERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSeparableFilter2D");
	if (p) {
		glSeparableFilter2D = (PFNGLSEPARABLEFILTER2DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetHistogram");
	if (p) {
		glGetHistogram = (PFNGLGETHISTOGRAMPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetHistogramParameterfv");
	if (p) {
		glGetHistogramParameterfv = (PFNGLGETHISTOGRAMPARAMETERFVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetHistogramParameteriv");
	if (p) {
		glGetHistogramParameteriv = (PFNGLGETHISTOGRAMPARAMETERIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetMinmax");
	if (p) {
		glGetMinmax = (PFNGLGETMINMAXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetMinmaxParameterfv");
	if (p) {
		glGetMinmaxParameterfv = (PFNGLGETMINMAXPARAMETERFVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetMinmaxParameteriv");
	if (p) {
		glGetMinmaxParameteriv = (PFNGLGETMINMAXPARAMETERIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glHistogram");
	if (p) {
		glHistogram = (PFNGLHISTOGRAMPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMinmax");
	if (p) {
		glMinmax = (PFNGLMINMAXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glResetHistogram");
	if (p) {
		glResetHistogram = (PFNGLRESETHISTOGRAMPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glResetMinmax");
	if (p) {
		glResetMinmax = (PFNGLRESETMINMAXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glActiveTexture");
	if (p) {
		glActiveTexture = (PFNGLACTIVETEXTUREPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSampleCoverage");
	if (p) {
		glSampleCoverage = (PFNGLSAMPLECOVERAGEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCompressedTexImage3D");
	if (p) {
		glCompressedTexImage3D = (PFNGLCOMPRESSEDTEXIMAGE3DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCompressedTexImage2D");
	if (p) {
		glCompressedTexImage2D = (PFNGLCOMPRESSEDTEXIMAGE2DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCompressedTexImage1D");
	if (p) {
		glCompressedTexImage1D = (PFNGLCOMPRESSEDTEXIMAGE1DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCompressedTexSubImage3D");
	if (p) {
		glCompressedTexSubImage3D = (PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCompressedTexSubImage2D");
	if (p) {
		glCompressedTexSubImage2D = (PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCompressedTexSubImage1D");
	if (p) {
		glCompressedTexSubImage1D = (PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetCompressedTexImage");
	if (p) {
		glGetCompressedTexImage = (PFNGLGETCOMPRESSEDTEXIMAGEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glClientActiveTexture");
	if (p) {
		glClientActiveTexture = (PFNGLCLIENTACTIVETEXTUREPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord1d");
	if (p) {
		glMultiTexCoord1d = (PFNGLMULTITEXCOORD1DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord1dv");
	if (p) {
		glMultiTexCoord1dv = (PFNGLMULTITEXCOORD1DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord1f");
	if (p) {
		glMultiTexCoord1f = (PFNGLMULTITEXCOORD1FPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord1fv");
	if (p) {
		glMultiTexCoord1fv = (PFNGLMULTITEXCOORD1FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord1i");
	if (p) {
		glMultiTexCoord1i = (PFNGLMULTITEXCOORD1IPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord1iv");
	if (p) {
		glMultiTexCoord1iv = (PFNGLMULTITEXCOORD1IVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord1s");
	if (p) {
		glMultiTexCoord1s = (PFNGLMULTITEXCOORD1SPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord1sv");
	if (p) {
		glMultiTexCoord1sv = (PFNGLMULTITEXCOORD1SVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord2d");
	if (p) {
		glMultiTexCoord2d = (PFNGLMULTITEXCOORD2DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord2dv");
	if (p) {
		glMultiTexCoord2dv = (PFNGLMULTITEXCOORD2DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord2f");
	if (p) {
		glMultiTexCoord2f = (PFNGLMULTITEXCOORD2FPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord2fv");
	if (p) {
		glMultiTexCoord2fv = (PFNGLMULTITEXCOORD2FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord2i");
	if (p) {
		glMultiTexCoord2i = (PFNGLMULTITEXCOORD2IPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord2iv");
	if (p) {
		glMultiTexCoord2iv = (PFNGLMULTITEXCOORD2IVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord2s");
	if (p) {
		glMultiTexCoord2s = (PFNGLMULTITEXCOORD2SPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord2sv");
	if (p) {
		glMultiTexCoord2sv = (PFNGLMULTITEXCOORD2SVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord3d");
	if (p) {
		glMultiTexCoord3d = (PFNGLMULTITEXCOORD3DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord3dv");
	if (p) {
		glMultiTexCoord3dv = (PFNGLMULTITEXCOORD3DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord3f");
	if (p) {
		glMultiTexCoord3f = (PFNGLMULTITEXCOORD3FPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord3fv");
	if (p) {
		glMultiTexCoord3fv = (PFNGLMULTITEXCOORD3FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord3i");
	if (p) {
		glMultiTexCoord3i = (PFNGLMULTITEXCOORD3IPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord3iv");
	if (p) {
		glMultiTexCoord3iv = (PFNGLMULTITEXCOORD3IVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord3s");
	if (p) {
		glMultiTexCoord3s = (PFNGLMULTITEXCOORD3SPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord3sv");
	if (p) {
		glMultiTexCoord3sv = (PFNGLMULTITEXCOORD3SVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord4d");
	if (p) {
		glMultiTexCoord4d = (PFNGLMULTITEXCOORD4DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord4dv");
	if (p) {
		glMultiTexCoord4dv = (PFNGLMULTITEXCOORD4DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord4f");
	if (p) {
		glMultiTexCoord4f = (PFNGLMULTITEXCOORD4FPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord4fv");
	if (p) {
		glMultiTexCoord4fv = (PFNGLMULTITEXCOORD4FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord4i");
	if (p) {
		glMultiTexCoord4i = (PFNGLMULTITEXCOORD4IPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord4iv");
	if (p) {
		glMultiTexCoord4iv = (PFNGLMULTITEXCOORD4IVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord4s");
	if (p) {
		glMultiTexCoord4s = (PFNGLMULTITEXCOORD4SPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord4sv");
	if (p) {
		glMultiTexCoord4sv = (PFNGLMULTITEXCOORD4SVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glLoadTransposeMatrixf");
	if (p) {
		glLoadTransposeMatrixf = (PFNGLLOADTRANSPOSEMATRIXFPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glLoadTransposeMatrixd");
	if (p) {
		glLoadTransposeMatrixd = (PFNGLLOADTRANSPOSEMATRIXDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultTransposeMatrixf");
	if (p) {
		glMultTransposeMatrixf = (PFNGLMULTTRANSPOSEMATRIXFPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultTransposeMatrixd");
	if (p) {
		glMultTransposeMatrixd = (PFNGLMULTTRANSPOSEMATRIXDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBlendFuncSeparate");
	if (p) {
		glBlendFuncSeparate = (PFNGLBLENDFUNCSEPARATEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiDrawArrays");
	if (p) {
		glMultiDrawArrays = (PFNGLMULTIDRAWARRAYSPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiDrawElements");
	if (p) {
		glMultiDrawElements = (PFNGLMULTIDRAWELEMENTSPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPointParameterf");
	if (p) {
		glPointParameterf = (PFNGLPOINTPARAMETERFPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPointParameterfv");
	if (p) {
		glPointParameterfv = (PFNGLPOINTPARAMETERFVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPointParameteri");
	if (p) {
		glPointParameteri = (PFNGLPOINTPARAMETERIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPointParameteriv");
	if (p) {
		glPointParameteriv = (PFNGLPOINTPARAMETERIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFogCoordf");
	if (p) {
		glFogCoordf = (PFNGLFOGCOORDFPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFogCoordfv");
	if (p) {
		glFogCoordfv = (PFNGLFOGCOORDFVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFogCoordd");
	if (p) {
		glFogCoordd = (PFNGLFOGCOORDDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFogCoorddv");
	if (p) {
		glFogCoorddv = (PFNGLFOGCOORDDVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFogCoordPointer");
	if (p) {
		glFogCoordPointer = (PFNGLFOGCOORDPOINTERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColor3b");
	if (p) {
		glSecondaryColor3b = (PFNGLSECONDARYCOLOR3BPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColor3bv");
	if (p) {
		glSecondaryColor3bv = (PFNGLSECONDARYCOLOR3BVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColor3d");
	if (p) {
		glSecondaryColor3d = (PFNGLSECONDARYCOLOR3DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColor3dv");
	if (p) {
		glSecondaryColor3dv = (PFNGLSECONDARYCOLOR3DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColor3f");
	if (p) {
		glSecondaryColor3f = (PFNGLSECONDARYCOLOR3FPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColor3fv");
	if (p) {
		glSecondaryColor3fv = (PFNGLSECONDARYCOLOR3FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColor3i");
	if (p) {
		glSecondaryColor3i = (PFNGLSECONDARYCOLOR3IPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColor3iv");
	if (p) {
		glSecondaryColor3iv = (PFNGLSECONDARYCOLOR3IVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColor3s");
	if (p) {
		glSecondaryColor3s = (PFNGLSECONDARYCOLOR3SPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColor3sv");
	if (p) {
		glSecondaryColor3sv = (PFNGLSECONDARYCOLOR3SVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColor3ub");
	if (p) {
		glSecondaryColor3ub = (PFNGLSECONDARYCOLOR3UBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColor3ubv");
	if (p) {
		glSecondaryColor3ubv = (PFNGLSECONDARYCOLOR3UBVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColor3ui");
	if (p) {
		glSecondaryColor3ui = (PFNGLSECONDARYCOLOR3UIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColor3uiv");
	if (p) {
		glSecondaryColor3uiv = (PFNGLSECONDARYCOLOR3UIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColor3us");
	if (p) {
		glSecondaryColor3us = (PFNGLSECONDARYCOLOR3USPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColor3usv");
	if (p) {
		glSecondaryColor3usv = (PFNGLSECONDARYCOLOR3USVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColorPointer");
	if (p) {
		glSecondaryColorPointer = (PFNGLSECONDARYCOLORPOINTERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos2d");
	if (p) {
		glWindowPos2d = (PFNGLWINDOWPOS2DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos2dv");
	if (p) {
		glWindowPos2dv = (PFNGLWINDOWPOS2DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos2f");
	if (p) {
		glWindowPos2f = (PFNGLWINDOWPOS2FPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos2fv");
	if (p) {
		glWindowPos2fv = (PFNGLWINDOWPOS2FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos2i");
	if (p) {
		glWindowPos2i = (PFNGLWINDOWPOS2IPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos2iv");
	if (p) {
		glWindowPos2iv = (PFNGLWINDOWPOS2IVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos2s");
	if (p) {
		glWindowPos2s = (PFNGLWINDOWPOS2SPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos2sv");
	if (p) {
		glWindowPos2sv = (PFNGLWINDOWPOS2SVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos3d");
	if (p) {
		glWindowPos3d = (PFNGLWINDOWPOS3DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos3dv");
	if (p) {
		glWindowPos3dv = (PFNGLWINDOWPOS3DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos3f");
	if (p) {
		glWindowPos3f = (PFNGLWINDOWPOS3FPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos3fv");
	if (p) {
		glWindowPos3fv = (PFNGLWINDOWPOS3FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos3i");
	if (p) {
		glWindowPos3i = (PFNGLWINDOWPOS3IPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos3iv");
	if (p) {
		glWindowPos3iv = (PFNGLWINDOWPOS3IVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos3s");
	if (p) {
		glWindowPos3s = (PFNGLWINDOWPOS3SPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos3sv");
	if (p) {
		glWindowPos3sv = (PFNGLWINDOWPOS3SVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGenQueries");
	if (p) {
		glGenQueries = (PFNGLGENQUERIESPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDeleteQueries");
	if (p) {
		glDeleteQueries = (PFNGLDELETEQUERIESPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsQuery");
	if (p) {
		glIsQuery = (PFNGLISQUERYPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBeginQuery");
	if (p) {
		glBeginQuery = (PFNGLBEGINQUERYPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glEndQuery");
	if (p) {
		glEndQuery = (PFNGLENDQUERYPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetQueryiv");
	if (p) {
		glGetQueryiv = (PFNGLGETQUERYIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetQueryObjectiv");
	if (p) {
		glGetQueryObjectiv = (PFNGLGETQUERYOBJECTIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetQueryObjectuiv");
	if (p) {
		glGetQueryObjectuiv = (PFNGLGETQUERYOBJECTUIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindBuffer");
	if (p) {
		glBindBuffer = (PFNGLBINDBUFFERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDeleteBuffers");
	if (p) {
		glDeleteBuffers = (PFNGLDELETEBUFFERSPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGenBuffers");
	if (p) {
		glGenBuffers = (PFNGLGENBUFFERSPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsBuffer");
	if (p) {
		glIsBuffer = (PFNGLISBUFFERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBufferData");
	if (p) {
		glBufferData = (PFNGLBUFFERDATAPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBufferSubData");
	if (p) {
		glBufferSubData = (PFNGLBUFFERSUBDATAPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetBufferSubData");
	if (p) {
		glGetBufferSubData = (PFNGLGETBUFFERSUBDATAPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMapBuffer");
	if (p) {
		glMapBuffer = (PFNGLMAPBUFFERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUnmapBuffer");
	if (p) {
		glUnmapBuffer = (PFNGLUNMAPBUFFERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetBufferParameteriv");
	if (p) {
		glGetBufferParameteriv = (PFNGLGETBUFFERPARAMETERIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetBufferPointerv");
	if (p) {
		glGetBufferPointerv = (PFNGLGETBUFFERPOINTERVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBlendEquationSeparate");
	if (p) {
		glBlendEquationSeparate = (PFNGLBLENDEQUATIONSEPARATEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDrawBuffers");
	if (p) {
		glDrawBuffers = (PFNGLDRAWBUFFERSPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glStencilOpSeparate");
	if (p) {
		glStencilOpSeparate = (PFNGLSTENCILOPSEPARATEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glStencilFuncSeparate");
	if (p) {
		glStencilFuncSeparate = (PFNGLSTENCILFUNCSEPARATEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glStencilMaskSeparate");
	if (p) {
		glStencilMaskSeparate = (PFNGLSTENCILMASKSEPARATEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glAttachShader");
	if (p) {
		glAttachShader = (PFNGLATTACHSHADERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindAttribLocation");
	if (p) {
		glBindAttribLocation = (PFNGLBINDATTRIBLOCATIONPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCompileShader");
	if (p) {
		glCompileShader = (PFNGLCOMPILESHADERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCreateProgram");
	if (p) {
		glCreateProgram = (PFNGLCREATEPROGRAMPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCreateShader");
	if (p) {
		glCreateShader = (PFNGLCREATESHADERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDeleteProgram");
	if (p) {
		glDeleteProgram = (PFNGLDELETEPROGRAMPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDeleteShader");
	if (p) {
		glDeleteShader = (PFNGLDELETESHADERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDetachShader");
	if (p) {
		glDetachShader = (PFNGLDETACHSHADERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDisableVertexAttribArray");
	if (p) {
		glDisableVertexAttribArray = (PFNGLDISABLEVERTEXATTRIBARRAYPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glEnableVertexAttribArray");
	if (p) {
		glEnableVertexAttribArray = (PFNGLENABLEVERTEXATTRIBARRAYPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetActiveAttrib");
	if (p) {
		glGetActiveAttrib = (PFNGLGETACTIVEATTRIBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetActiveUniform");
	if (p) {
		glGetActiveUniform = (PFNGLGETACTIVEUNIFORMPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetAttachedShaders");
	if (p) {
		glGetAttachedShaders = (PFNGLGETATTACHEDSHADERSPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetAttribLocation");
	if (p) {
		glGetAttribLocation = (PFNGLGETATTRIBLOCATIONPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetProgramiv");
	if (p) {
		glGetProgramiv = (PFNGLGETPROGRAMIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetProgramInfoLog");
	if (p) {
		glGetProgramInfoLog = (PFNGLGETPROGRAMINFOLOGPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetShaderiv");
	if (p) {
		glGetShaderiv = (PFNGLGETSHADERIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetShaderInfoLog");
	if (p) {
		glGetShaderInfoLog = (PFNGLGETSHADERINFOLOGPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetShaderSource");
	if (p) {
		glGetShaderSource = (PFNGLGETSHADERSOURCEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetUniformLocation");
	if (p) {
		glGetUniformLocation = (PFNGLGETUNIFORMLOCATIONPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetUniformfv");
	if (p) {
		glGetUniformfv = (PFNGLGETUNIFORMFVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetUniformiv");
	if (p) {
		glGetUniformiv = (PFNGLGETUNIFORMIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVertexAttribdv");
	if (p) {
		glGetVertexAttribdv = (PFNGLGETVERTEXATTRIBDVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVertexAttribfv");
	if (p) {
		glGetVertexAttribfv = (PFNGLGETVERTEXATTRIBFVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVertexAttribiv");
	if (p) {
		glGetVertexAttribiv = (PFNGLGETVERTEXATTRIBIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVertexAttribPointerv");
	if (p) {
		glGetVertexAttribPointerv = (PFNGLGETVERTEXATTRIBPOINTERVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsProgram");
	if (p) {
		glIsProgram = (PFNGLISPROGRAMPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsShader");
	if (p) {
		glIsShader = (PFNGLISSHADERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glLinkProgram");
	if (p) {
		glLinkProgram = (PFNGLLINKPROGRAMPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glShaderSource");
	if (p) {
		glShaderSource = (PFNGLSHADERSOURCEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUseProgram");
	if (p) {
		glUseProgram = (PFNGLUSEPROGRAMPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform1f");
	if (p) {
		glUniform1f = (PFNGLUNIFORM1FPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform2f");
	if (p) {
		glUniform2f = (PFNGLUNIFORM2FPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform3f");
	if (p) {
		glUniform3f = (PFNGLUNIFORM3FPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform4f");
	if (p) {
		glUniform4f = (PFNGLUNIFORM4FPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform1i");
	if (p) {
		glUniform1i = (PFNGLUNIFORM1IPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform2i");
	if (p) {
		glUniform2i = (PFNGLUNIFORM2IPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform3i");
	if (p) {
		glUniform3i = (PFNGLUNIFORM3IPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform4i");
	if (p) {
		glUniform4i = (PFNGLUNIFORM4IPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform1fv");
	if (p) {
		glUniform1fv = (PFNGLUNIFORM1FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform2fv");
	if (p) {
		glUniform2fv = (PFNGLUNIFORM2FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform3fv");
	if (p) {
		glUniform3fv = (PFNGLUNIFORM3FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform4fv");
	if (p) {
		glUniform4fv = (PFNGLUNIFORM4FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform1iv");
	if (p) {
		glUniform1iv = (PFNGLUNIFORM1IVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform2iv");
	if (p) {
		glUniform2iv = (PFNGLUNIFORM2IVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform3iv");
	if (p) {
		glUniform3iv = (PFNGLUNIFORM3IVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform4iv");
	if (p) {
		glUniform4iv = (PFNGLUNIFORM4IVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniformMatrix2fv");
	if (p) {
		glUniformMatrix2fv = (PFNGLUNIFORMMATRIX2FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniformMatrix3fv");
	if (p) {
		glUniformMatrix3fv = (PFNGLUNIFORMMATRIX3FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniformMatrix4fv");
	if (p) {
		glUniformMatrix4fv = (PFNGLUNIFORMMATRIX4FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glValidateProgram");
	if (p) {
		glValidateProgram = (PFNGLVALIDATEPROGRAMPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib1d");
	if (p) {
		glVertexAttrib1d = (PFNGLVERTEXATTRIB1DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib1dv");
	if (p) {
		glVertexAttrib1dv = (PFNGLVERTEXATTRIB1DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib1f");
	if (p) {
		glVertexAttrib1f = (PFNGLVERTEXATTRIB1FPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib1fv");
	if (p) {
		glVertexAttrib1fv = (PFNGLVERTEXATTRIB1FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib1s");
	if (p) {
		glVertexAttrib1s = (PFNGLVERTEXATTRIB1SPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib1sv");
	if (p) {
		glVertexAttrib1sv = (PFNGLVERTEXATTRIB1SVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib2d");
	if (p) {
		glVertexAttrib2d = (PFNGLVERTEXATTRIB2DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib2dv");
	if (p) {
		glVertexAttrib2dv = (PFNGLVERTEXATTRIB2DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib2f");
	if (p) {
		glVertexAttrib2f = (PFNGLVERTEXATTRIB2FPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib2fv");
	if (p) {
		glVertexAttrib2fv = (PFNGLVERTEXATTRIB2FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib2s");
	if (p) {
		glVertexAttrib2s = (PFNGLVERTEXATTRIB2SPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib2sv");
	if (p) {
		glVertexAttrib2sv = (PFNGLVERTEXATTRIB2SVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib3d");
	if (p) {
		glVertexAttrib3d = (PFNGLVERTEXATTRIB3DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib3dv");
	if (p) {
		glVertexAttrib3dv = (PFNGLVERTEXATTRIB3DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib3f");
	if (p) {
		glVertexAttrib3f = (PFNGLVERTEXATTRIB3FPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib3fv");
	if (p) {
		glVertexAttrib3fv = (PFNGLVERTEXATTRIB3FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib3s");
	if (p) {
		glVertexAttrib3s = (PFNGLVERTEXATTRIB3SPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib3sv");
	if (p) {
		glVertexAttrib3sv = (PFNGLVERTEXATTRIB3SVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4Nbv");
	if (p) {
		glVertexAttrib4Nbv = (PFNGLVERTEXATTRIB4NBVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4Niv");
	if (p) {
		glVertexAttrib4Niv = (PFNGLVERTEXATTRIB4NIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4Nsv");
	if (p) {
		glVertexAttrib4Nsv = (PFNGLVERTEXATTRIB4NSVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4Nub");
	if (p) {
		glVertexAttrib4Nub = (PFNGLVERTEXATTRIB4NUBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4Nubv");
	if (p) {
		glVertexAttrib4Nubv = (PFNGLVERTEXATTRIB4NUBVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4Nuiv");
	if (p) {
		glVertexAttrib4Nuiv = (PFNGLVERTEXATTRIB4NUIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4Nusv");
	if (p) {
		glVertexAttrib4Nusv = (PFNGLVERTEXATTRIB4NUSVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4bv");
	if (p) {
		glVertexAttrib4bv = (PFNGLVERTEXATTRIB4BVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4d");
	if (p) {
		glVertexAttrib4d = (PFNGLVERTEXATTRIB4DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4dv");
	if (p) {
		glVertexAttrib4dv = (PFNGLVERTEXATTRIB4DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4f");
	if (p) {
		glVertexAttrib4f = (PFNGLVERTEXATTRIB4FPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4fv");
	if (p) {
		glVertexAttrib4fv = (PFNGLVERTEXATTRIB4FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4iv");
	if (p) {
		glVertexAttrib4iv = (PFNGLVERTEXATTRIB4IVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4s");
	if (p) {
		glVertexAttrib4s = (PFNGLVERTEXATTRIB4SPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4sv");
	if (p) {
		glVertexAttrib4sv = (PFNGLVERTEXATTRIB4SVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4ubv");
	if (p) {
		glVertexAttrib4ubv = (PFNGLVERTEXATTRIB4UBVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4uiv");
	if (p) {
		glVertexAttrib4uiv = (PFNGLVERTEXATTRIB4UIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4usv");
	if (p) {
		glVertexAttrib4usv = (PFNGLVERTEXATTRIB4USVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribPointer");
	if (p) {
		glVertexAttribPointer = (PFNGLVERTEXATTRIBPOINTERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniformMatrix2x3fv");
	if (p) {
		glUniformMatrix2x3fv = (PFNGLUNIFORMMATRIX2X3FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniformMatrix3x2fv");
	if (p) {
		glUniformMatrix3x2fv = (PFNGLUNIFORMMATRIX3X2FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniformMatrix2x4fv");
	if (p) {
		glUniformMatrix2x4fv = (PFNGLUNIFORMMATRIX2X4FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniformMatrix4x2fv");
	if (p) {
		glUniformMatrix4x2fv = (PFNGLUNIFORMMATRIX4X2FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniformMatrix3x4fv");
	if (p) {
		glUniformMatrix3x4fv = (PFNGLUNIFORMMATRIX3X4FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniformMatrix4x3fv");
	if (p) {
		glUniformMatrix4x3fv = (PFNGLUNIFORMMATRIX4X3FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glColorMaski");
	if (p) {
		glColorMaski = (PFNGLCOLORMASKIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetBooleani_v");
	if (p) {
		glGetBooleani_v = (PFNGLGETBOOLEANI_VPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetIntegeri_v");
	if (p) {
		glGetIntegeri_v = (PFNGLGETINTEGERI_VPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glEnablei");
	if (p) {
		glEnablei = (PFNGLENABLEIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDisablei");
	if (p) {
		glDisablei = (PFNGLDISABLEIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsEnabledi");
	if (p) {
		glIsEnabledi = (PFNGLISENABLEDIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBeginTransformFeedback");
	if (p) {
		glBeginTransformFeedback = (PFNGLBEGINTRANSFORMFEEDBACKPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glEndTransformFeedback");
	if (p) {
		glEndTransformFeedback = (PFNGLENDTRANSFORMFEEDBACKPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindBufferRange");
	if (p) {
		glBindBufferRange = (PFNGLBINDBUFFERRANGEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindBufferBase");
	if (p) {
		glBindBufferBase = (PFNGLBINDBUFFERBASEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTransformFeedbackVaryings");
	if (p) {
		glTransformFeedbackVaryings = (PFNGLTRANSFORMFEEDBACKVARYINGSPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetTransformFeedbackVarying");
	if (p) {
		glGetTransformFeedbackVarying = (PFNGLGETTRANSFORMFEEDBACKVARYINGPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glClampColor");
	if (p) {
		glClampColor = (PFNGLCLAMPCOLORPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBeginConditionalRender");
	if (p) {
		glBeginConditionalRender = (PFNGLBEGINCONDITIONALRENDERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glEndConditionalRender");
	if (p) {
		glEndConditionalRender = (PFNGLENDCONDITIONALRENDERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribIPointer");
	if (p) {
		glVertexAttribIPointer = (PFNGLVERTEXATTRIBIPOINTERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVertexAttribIiv");
	if (p) {
		glGetVertexAttribIiv = (PFNGLGETVERTEXATTRIBIIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVertexAttribIuiv");
	if (p) {
		glGetVertexAttribIuiv = (PFNGLGETVERTEXATTRIBIUIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI1i");
	if (p) {
		glVertexAttribI1i = (PFNGLVERTEXATTRIBI1IPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI2i");
	if (p) {
		glVertexAttribI2i = (PFNGLVERTEXATTRIBI2IPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI3i");
	if (p) {
		glVertexAttribI3i = (PFNGLVERTEXATTRIBI3IPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI4i");
	if (p) {
		glVertexAttribI4i = (PFNGLVERTEXATTRIBI4IPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI1ui");
	if (p) {
		glVertexAttribI1ui = (PFNGLVERTEXATTRIBI1UIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI2ui");
	if (p) {
		glVertexAttribI2ui = (PFNGLVERTEXATTRIBI2UIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI3ui");
	if (p) {
		glVertexAttribI3ui = (PFNGLVERTEXATTRIBI3UIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI4ui");
	if (p) {
		glVertexAttribI4ui = (PFNGLVERTEXATTRIBI4UIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI1iv");
	if (p) {
		glVertexAttribI1iv = (PFNGLVERTEXATTRIBI1IVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI2iv");
	if (p) {
		glVertexAttribI2iv = (PFNGLVERTEXATTRIBI2IVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI3iv");
	if (p) {
		glVertexAttribI3iv = (PFNGLVERTEXATTRIBI3IVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI4iv");
	if (p) {
		glVertexAttribI4iv = (PFNGLVERTEXATTRIBI4IVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI1uiv");
	if (p) {
		glVertexAttribI1uiv = (PFNGLVERTEXATTRIBI1UIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI2uiv");
	if (p) {
		glVertexAttribI2uiv = (PFNGLVERTEXATTRIBI2UIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI3uiv");
	if (p) {
		glVertexAttribI3uiv = (PFNGLVERTEXATTRIBI3UIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI4uiv");
	if (p) {
		glVertexAttribI4uiv = (PFNGLVERTEXATTRIBI4UIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI4bv");
	if (p) {
		glVertexAttribI4bv = (PFNGLVERTEXATTRIBI4BVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI4sv");
	if (p) {
		glVertexAttribI4sv = (PFNGLVERTEXATTRIBI4SVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI4ubv");
	if (p) {
		glVertexAttribI4ubv = (PFNGLVERTEXATTRIBI4UBVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI4usv");
	if (p) {
		glVertexAttribI4usv = (PFNGLVERTEXATTRIBI4USVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetUniformuiv");
	if (p) {
		glGetUniformuiv = (PFNGLGETUNIFORMUIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindFragDataLocation");
	if (p) {
		glBindFragDataLocation = (PFNGLBINDFRAGDATALOCATIONPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetFragDataLocation");
	if (p) {
		glGetFragDataLocation = (PFNGLGETFRAGDATALOCATIONPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform1ui");
	if (p) {
		glUniform1ui = (PFNGLUNIFORM1UIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform2ui");
	if (p) {
		glUniform2ui = (PFNGLUNIFORM2UIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform3ui");
	if (p) {
		glUniform3ui = (PFNGLUNIFORM3UIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform4ui");
	if (p) {
		glUniform4ui = (PFNGLUNIFORM4UIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform1uiv");
	if (p) {
		glUniform1uiv = (PFNGLUNIFORM1UIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform2uiv");
	if (p) {
		glUniform2uiv = (PFNGLUNIFORM2UIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform3uiv");
	if (p) {
		glUniform3uiv = (PFNGLUNIFORM3UIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform4uiv");
	if (p) {
		glUniform4uiv = (PFNGLUNIFORM4UIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexParameterIiv");
	if (p) {
		glTexParameterIiv = (PFNGLTEXPARAMETERIIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexParameterIuiv");
	if (p) {
		glTexParameterIuiv = (PFNGLTEXPARAMETERIUIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetTexParameterIiv");
	if (p) {
		glGetTexParameterIiv = (PFNGLGETTEXPARAMETERIIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetTexParameterIuiv");
	if (p) {
		glGetTexParameterIuiv = (PFNGLGETTEXPARAMETERIUIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glClearBufferiv");
	if (p) {
		glClearBufferiv = (PFNGLCLEARBUFFERIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glClearBufferuiv");
	if (p) {
		glClearBufferuiv = (PFNGLCLEARBUFFERUIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glClearBufferfv");
	if (p) {
		glClearBufferfv = (PFNGLCLEARBUFFERFVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glClearBufferfi");
	if (p) {
		glClearBufferfi = (PFNGLCLEARBUFFERFIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetStringi");
	if (p) {
		glGetStringi = (PFNGLGETSTRINGIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDrawArraysInstanced");
	if (p) {
		glDrawArraysInstanced = (PFNGLDRAWARRAYSINSTANCEDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDrawElementsInstanced");
	if (p) {
		glDrawElementsInstanced = (PFNGLDRAWELEMENTSINSTANCEDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexBuffer");
	if (p) {
		glTexBuffer = (PFNGLTEXBUFFERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPrimitiveRestartIndex");
	if (p) {
		glPrimitiveRestartIndex = (PFNGLPRIMITIVERESTARTINDEXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetInteger64i_v");
	if (p) {
		glGetInteger64i_v = (PFNGLGETINTEGER64I_VPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetBufferParameteri64v");
	if (p) {
		glGetBufferParameteri64v = (PFNGLGETBUFFERPARAMETERI64VPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFramebufferTexture");
	if (p) {
		glFramebufferTexture = (PFNGLFRAMEBUFFERTEXTUREPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribDivisor");
	if (p) {
		glVertexAttribDivisor = (PFNGLVERTEXATTRIBDIVISORPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMinSampleShading");
	if (p) {
		glMinSampleShading = (PFNGLMINSAMPLESHADINGPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBlendEquationi");
	if (p) {
		glBlendEquationi = (PFNGLBLENDEQUATIONIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBlendEquationSeparatei");
	if (p) {
		glBlendEquationSeparatei = (PFNGLBLENDEQUATIONSEPARATEIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBlendFunci");
	if (p) {
		glBlendFunci = (PFNGLBLENDFUNCIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBlendFuncSeparatei");
	if (p) {
		glBlendFuncSeparatei = (PFNGLBLENDFUNCSEPARATEIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glActiveTextureARB");
	if (p) {
		glActiveTextureARB = (PFNGLACTIVETEXTUREARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glClientActiveTextureARB");
	if (p) {
		glClientActiveTextureARB = (PFNGLCLIENTACTIVETEXTUREARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord1dARB");
	if (p) {
		glMultiTexCoord1dARB = (PFNGLMULTITEXCOORD1DARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord1dvARB");
	if (p) {
		glMultiTexCoord1dvARB = (PFNGLMULTITEXCOORD1DVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord1fARB");
	if (p) {
		glMultiTexCoord1fARB = (PFNGLMULTITEXCOORD1FARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord1fvARB");
	if (p) {
		glMultiTexCoord1fvARB = (PFNGLMULTITEXCOORD1FVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord1iARB");
	if (p) {
		glMultiTexCoord1iARB = (PFNGLMULTITEXCOORD1IARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord1ivARB");
	if (p) {
		glMultiTexCoord1ivARB = (PFNGLMULTITEXCOORD1IVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord1sARB");
	if (p) {
		glMultiTexCoord1sARB = (PFNGLMULTITEXCOORD1SARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord1svARB");
	if (p) {
		glMultiTexCoord1svARB = (PFNGLMULTITEXCOORD1SVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord2dARB");
	if (p) {
		glMultiTexCoord2dARB = (PFNGLMULTITEXCOORD2DARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord2dvARB");
	if (p) {
		glMultiTexCoord2dvARB = (PFNGLMULTITEXCOORD2DVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord2fARB");
	if (p) {
		glMultiTexCoord2fARB = (PFNGLMULTITEXCOORD2FARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord2fvARB");
	if (p) {
		glMultiTexCoord2fvARB = (PFNGLMULTITEXCOORD2FVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord2iARB");
	if (p) {
		glMultiTexCoord2iARB = (PFNGLMULTITEXCOORD2IARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord2ivARB");
	if (p) {
		glMultiTexCoord2ivARB = (PFNGLMULTITEXCOORD2IVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord2sARB");
	if (p) {
		glMultiTexCoord2sARB = (PFNGLMULTITEXCOORD2SARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord2svARB");
	if (p) {
		glMultiTexCoord2svARB = (PFNGLMULTITEXCOORD2SVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord3dARB");
	if (p) {
		glMultiTexCoord3dARB = (PFNGLMULTITEXCOORD3DARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord3dvARB");
	if (p) {
		glMultiTexCoord3dvARB = (PFNGLMULTITEXCOORD3DVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord3fARB");
	if (p) {
		glMultiTexCoord3fARB = (PFNGLMULTITEXCOORD3FARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord3fvARB");
	if (p) {
		glMultiTexCoord3fvARB = (PFNGLMULTITEXCOORD3FVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord3iARB");
	if (p) {
		glMultiTexCoord3iARB = (PFNGLMULTITEXCOORD3IARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord3ivARB");
	if (p) {
		glMultiTexCoord3ivARB = (PFNGLMULTITEXCOORD3IVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord3sARB");
	if (p) {
		glMultiTexCoord3sARB = (PFNGLMULTITEXCOORD3SARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord3svARB");
	if (p) {
		glMultiTexCoord3svARB = (PFNGLMULTITEXCOORD3SVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord4dARB");
	if (p) {
		glMultiTexCoord4dARB = (PFNGLMULTITEXCOORD4DARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord4dvARB");
	if (p) {
		glMultiTexCoord4dvARB = (PFNGLMULTITEXCOORD4DVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord4fARB");
	if (p) {
		glMultiTexCoord4fARB = (PFNGLMULTITEXCOORD4FARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord4fvARB");
	if (p) {
		glMultiTexCoord4fvARB = (PFNGLMULTITEXCOORD4FVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord4iARB");
	if (p) {
		glMultiTexCoord4iARB = (PFNGLMULTITEXCOORD4IARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord4ivARB");
	if (p) {
		glMultiTexCoord4ivARB = (PFNGLMULTITEXCOORD4IVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord4sARB");
	if (p) {
		glMultiTexCoord4sARB = (PFNGLMULTITEXCOORD4SARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord4svARB");
	if (p) {
		glMultiTexCoord4svARB = (PFNGLMULTITEXCOORD4SVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glLoadTransposeMatrixfARB");
	if (p) {
		glLoadTransposeMatrixfARB = (PFNGLLOADTRANSPOSEMATRIXFARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glLoadTransposeMatrixdARB");
	if (p) {
		glLoadTransposeMatrixdARB = (PFNGLLOADTRANSPOSEMATRIXDARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultTransposeMatrixfARB");
	if (p) {
		glMultTransposeMatrixfARB = (PFNGLMULTTRANSPOSEMATRIXFARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultTransposeMatrixdARB");
	if (p) {
		glMultTransposeMatrixdARB = (PFNGLMULTTRANSPOSEMATRIXDARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSampleCoverageARB");
	if (p) {
		glSampleCoverageARB = (PFNGLSAMPLECOVERAGEARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCompressedTexImage3DARB");
	if (p) {
		glCompressedTexImage3DARB = (PFNGLCOMPRESSEDTEXIMAGE3DARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCompressedTexImage2DARB");
	if (p) {
		glCompressedTexImage2DARB = (PFNGLCOMPRESSEDTEXIMAGE2DARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCompressedTexImage1DARB");
	if (p) {
		glCompressedTexImage1DARB = (PFNGLCOMPRESSEDTEXIMAGE1DARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCompressedTexSubImage3DARB");
	if (p) {
		glCompressedTexSubImage3DARB = (PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCompressedTexSubImage2DARB");
	if (p) {
		glCompressedTexSubImage2DARB = (PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCompressedTexSubImage1DARB");
	if (p) {
		glCompressedTexSubImage1DARB = (PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetCompressedTexImageARB");
	if (p) {
		glGetCompressedTexImageARB = (PFNGLGETCOMPRESSEDTEXIMAGEARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPointParameterfARB");
	if (p) {
		glPointParameterfARB = (PFNGLPOINTPARAMETERFARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPointParameterfvARB");
	if (p) {
		glPointParameterfvARB = (PFNGLPOINTPARAMETERFVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWeightbvARB");
	if (p) {
		glWeightbvARB = (PFNGLWEIGHTBVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWeightsvARB");
	if (p) {
		glWeightsvARB = (PFNGLWEIGHTSVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWeightivARB");
	if (p) {
		glWeightivARB = (PFNGLWEIGHTIVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWeightfvARB");
	if (p) {
		glWeightfvARB = (PFNGLWEIGHTFVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWeightdvARB");
	if (p) {
		glWeightdvARB = (PFNGLWEIGHTDVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWeightubvARB");
	if (p) {
		glWeightubvARB = (PFNGLWEIGHTUBVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWeightusvARB");
	if (p) {
		glWeightusvARB = (PFNGLWEIGHTUSVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWeightuivARB");
	if (p) {
		glWeightuivARB = (PFNGLWEIGHTUIVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWeightPointerARB");
	if (p) {
		glWeightPointerARB = (PFNGLWEIGHTPOINTERARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexBlendARB");
	if (p) {
		glVertexBlendARB = (PFNGLVERTEXBLENDARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCurrentPaletteMatrixARB");
	if (p) {
		glCurrentPaletteMatrixARB = (PFNGLCURRENTPALETTEMATRIXARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMatrixIndexubvARB");
	if (p) {
		glMatrixIndexubvARB = (PFNGLMATRIXINDEXUBVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMatrixIndexusvARB");
	if (p) {
		glMatrixIndexusvARB = (PFNGLMATRIXINDEXUSVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMatrixIndexuivARB");
	if (p) {
		glMatrixIndexuivARB = (PFNGLMATRIXINDEXUIVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMatrixIndexPointerARB");
	if (p) {
		glMatrixIndexPointerARB = (PFNGLMATRIXINDEXPOINTERARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos2dARB");
	if (p) {
		glWindowPos2dARB = (PFNGLWINDOWPOS2DARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos2dvARB");
	if (p) {
		glWindowPos2dvARB = (PFNGLWINDOWPOS2DVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos2fARB");
	if (p) {
		glWindowPos2fARB = (PFNGLWINDOWPOS2FARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos2fvARB");
	if (p) {
		glWindowPos2fvARB = (PFNGLWINDOWPOS2FVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos2iARB");
	if (p) {
		glWindowPos2iARB = (PFNGLWINDOWPOS2IARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos2ivARB");
	if (p) {
		glWindowPos2ivARB = (PFNGLWINDOWPOS2IVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos2sARB");
	if (p) {
		glWindowPos2sARB = (PFNGLWINDOWPOS2SARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos2svARB");
	if (p) {
		glWindowPos2svARB = (PFNGLWINDOWPOS2SVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos3dARB");
	if (p) {
		glWindowPos3dARB = (PFNGLWINDOWPOS3DARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos3dvARB");
	if (p) {
		glWindowPos3dvARB = (PFNGLWINDOWPOS3DVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos3fARB");
	if (p) {
		glWindowPos3fARB = (PFNGLWINDOWPOS3FARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos3fvARB");
	if (p) {
		glWindowPos3fvARB = (PFNGLWINDOWPOS3FVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos3iARB");
	if (p) {
		glWindowPos3iARB = (PFNGLWINDOWPOS3IARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos3ivARB");
	if (p) {
		glWindowPos3ivARB = (PFNGLWINDOWPOS3IVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos3sARB");
	if (p) {
		glWindowPos3sARB = (PFNGLWINDOWPOS3SARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos3svARB");
	if (p) {
		glWindowPos3svARB = (PFNGLWINDOWPOS3SVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib1dARB");
	if (p) {
		glVertexAttrib1dARB = (PFNGLVERTEXATTRIB1DARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib1dvARB");
	if (p) {
		glVertexAttrib1dvARB = (PFNGLVERTEXATTRIB1DVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib1fARB");
	if (p) {
		glVertexAttrib1fARB = (PFNGLVERTEXATTRIB1FARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib1fvARB");
	if (p) {
		glVertexAttrib1fvARB = (PFNGLVERTEXATTRIB1FVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib1sARB");
	if (p) {
		glVertexAttrib1sARB = (PFNGLVERTEXATTRIB1SARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib1svARB");
	if (p) {
		glVertexAttrib1svARB = (PFNGLVERTEXATTRIB1SVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib2dARB");
	if (p) {
		glVertexAttrib2dARB = (PFNGLVERTEXATTRIB2DARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib2dvARB");
	if (p) {
		glVertexAttrib2dvARB = (PFNGLVERTEXATTRIB2DVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib2fARB");
	if (p) {
		glVertexAttrib2fARB = (PFNGLVERTEXATTRIB2FARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib2fvARB");
	if (p) {
		glVertexAttrib2fvARB = (PFNGLVERTEXATTRIB2FVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib2sARB");
	if (p) {
		glVertexAttrib2sARB = (PFNGLVERTEXATTRIB2SARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib2svARB");
	if (p) {
		glVertexAttrib2svARB = (PFNGLVERTEXATTRIB2SVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib3dARB");
	if (p) {
		glVertexAttrib3dARB = (PFNGLVERTEXATTRIB3DARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib3dvARB");
	if (p) {
		glVertexAttrib3dvARB = (PFNGLVERTEXATTRIB3DVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib3fARB");
	if (p) {
		glVertexAttrib3fARB = (PFNGLVERTEXATTRIB3FARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib3fvARB");
	if (p) {
		glVertexAttrib3fvARB = (PFNGLVERTEXATTRIB3FVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib3sARB");
	if (p) {
		glVertexAttrib3sARB = (PFNGLVERTEXATTRIB3SARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib3svARB");
	if (p) {
		glVertexAttrib3svARB = (PFNGLVERTEXATTRIB3SVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4NbvARB");
	if (p) {
		glVertexAttrib4NbvARB = (PFNGLVERTEXATTRIB4NBVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4NivARB");
	if (p) {
		glVertexAttrib4NivARB = (PFNGLVERTEXATTRIB4NIVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4NsvARB");
	if (p) {
		glVertexAttrib4NsvARB = (PFNGLVERTEXATTRIB4NSVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4NubARB");
	if (p) {
		glVertexAttrib4NubARB = (PFNGLVERTEXATTRIB4NUBARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4NubvARB");
	if (p) {
		glVertexAttrib4NubvARB = (PFNGLVERTEXATTRIB4NUBVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4NuivARB");
	if (p) {
		glVertexAttrib4NuivARB = (PFNGLVERTEXATTRIB4NUIVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4NusvARB");
	if (p) {
		glVertexAttrib4NusvARB = (PFNGLVERTEXATTRIB4NUSVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4bvARB");
	if (p) {
		glVertexAttrib4bvARB = (PFNGLVERTEXATTRIB4BVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4dARB");
	if (p) {
		glVertexAttrib4dARB = (PFNGLVERTEXATTRIB4DARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4dvARB");
	if (p) {
		glVertexAttrib4dvARB = (PFNGLVERTEXATTRIB4DVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4fARB");
	if (p) {
		glVertexAttrib4fARB = (PFNGLVERTEXATTRIB4FARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4fvARB");
	if (p) {
		glVertexAttrib4fvARB = (PFNGLVERTEXATTRIB4FVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4ivARB");
	if (p) {
		glVertexAttrib4ivARB = (PFNGLVERTEXATTRIB4IVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4sARB");
	if (p) {
		glVertexAttrib4sARB = (PFNGLVERTEXATTRIB4SARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4svARB");
	if (p) {
		glVertexAttrib4svARB = (PFNGLVERTEXATTRIB4SVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4ubvARB");
	if (p) {
		glVertexAttrib4ubvARB = (PFNGLVERTEXATTRIB4UBVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4uivARB");
	if (p) {
		glVertexAttrib4uivARB = (PFNGLVERTEXATTRIB4UIVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4usvARB");
	if (p) {
		glVertexAttrib4usvARB = (PFNGLVERTEXATTRIB4USVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribPointerARB");
	if (p) {
		glVertexAttribPointerARB = (PFNGLVERTEXATTRIBPOINTERARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glEnableVertexAttribArrayARB");
	if (p) {
		glEnableVertexAttribArrayARB = (PFNGLENABLEVERTEXATTRIBARRAYARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDisableVertexAttribArrayARB");
	if (p) {
		glDisableVertexAttribArrayARB = (PFNGLDISABLEVERTEXATTRIBARRAYARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramStringARB");
	if (p) {
		glProgramStringARB = (PFNGLPROGRAMSTRINGARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindProgramARB");
	if (p) {
		glBindProgramARB = (PFNGLBINDPROGRAMARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDeleteProgramsARB");
	if (p) {
		glDeleteProgramsARB = (PFNGLDELETEPROGRAMSARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGenProgramsARB");
	if (p) {
		glGenProgramsARB = (PFNGLGENPROGRAMSARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramEnvParameter4dARB");
	if (p) {
		glProgramEnvParameter4dARB = (PFNGLPROGRAMENVPARAMETER4DARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramEnvParameter4dvARB");
	if (p) {
		glProgramEnvParameter4dvARB = (PFNGLPROGRAMENVPARAMETER4DVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramEnvParameter4fARB");
	if (p) {
		glProgramEnvParameter4fARB = (PFNGLPROGRAMENVPARAMETER4FARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramEnvParameter4fvARB");
	if (p) {
		glProgramEnvParameter4fvARB = (PFNGLPROGRAMENVPARAMETER4FVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramLocalParameter4dARB");
	if (p) {
		glProgramLocalParameter4dARB = (PFNGLPROGRAMLOCALPARAMETER4DARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramLocalParameter4dvARB");
	if (p) {
		glProgramLocalParameter4dvARB = (PFNGLPROGRAMLOCALPARAMETER4DVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramLocalParameter4fARB");
	if (p) {
		glProgramLocalParameter4fARB = (PFNGLPROGRAMLOCALPARAMETER4FARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramLocalParameter4fvARB");
	if (p) {
		glProgramLocalParameter4fvARB = (PFNGLPROGRAMLOCALPARAMETER4FVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetProgramEnvParameterdvARB");
	if (p) {
		glGetProgramEnvParameterdvARB = (PFNGLGETPROGRAMENVPARAMETERDVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetProgramEnvParameterfvARB");
	if (p) {
		glGetProgramEnvParameterfvARB = (PFNGLGETPROGRAMENVPARAMETERFVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetProgramLocalParameterdvARB");
	if (p) {
		glGetProgramLocalParameterdvARB = (PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetProgramLocalParameterfvARB");
	if (p) {
		glGetProgramLocalParameterfvARB = (PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetProgramivARB");
	if (p) {
		glGetProgramivARB = (PFNGLGETPROGRAMIVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetProgramStringARB");
	if (p) {
		glGetProgramStringARB = (PFNGLGETPROGRAMSTRINGARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVertexAttribdvARB");
	if (p) {
		glGetVertexAttribdvARB = (PFNGLGETVERTEXATTRIBDVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVertexAttribfvARB");
	if (p) {
		glGetVertexAttribfvARB = (PFNGLGETVERTEXATTRIBFVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVertexAttribivARB");
	if (p) {
		glGetVertexAttribivARB = (PFNGLGETVERTEXATTRIBIVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVertexAttribPointervARB");
	if (p) {
		glGetVertexAttribPointervARB = (PFNGLGETVERTEXATTRIBPOINTERVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsProgramARB");
	if (p) {
		glIsProgramARB = (PFNGLISPROGRAMARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindBufferARB");
	if (p) {
		glBindBufferARB = (PFNGLBINDBUFFERARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDeleteBuffersARB");
	if (p) {
		glDeleteBuffersARB = (PFNGLDELETEBUFFERSARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGenBuffersARB");
	if (p) {
		glGenBuffersARB = (PFNGLGENBUFFERSARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsBufferARB");
	if (p) {
		glIsBufferARB = (PFNGLISBUFFERARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBufferDataARB");
	if (p) {
		glBufferDataARB = (PFNGLBUFFERDATAARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBufferSubDataARB");
	if (p) {
		glBufferSubDataARB = (PFNGLBUFFERSUBDATAARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetBufferSubDataARB");
	if (p) {
		glGetBufferSubDataARB = (PFNGLGETBUFFERSUBDATAARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMapBufferARB");
	if (p) {
		glMapBufferARB = (PFNGLMAPBUFFERARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUnmapBufferARB");
	if (p) {
		glUnmapBufferARB = (PFNGLUNMAPBUFFERARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetBufferParameterivARB");
	if (p) {
		glGetBufferParameterivARB = (PFNGLGETBUFFERPARAMETERIVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetBufferPointervARB");
	if (p) {
		glGetBufferPointervARB = (PFNGLGETBUFFERPOINTERVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGenQueriesARB");
	if (p) {
		glGenQueriesARB = (PFNGLGENQUERIESARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDeleteQueriesARB");
	if (p) {
		glDeleteQueriesARB = (PFNGLDELETEQUERIESARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsQueryARB");
	if (p) {
		glIsQueryARB = (PFNGLISQUERYARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBeginQueryARB");
	if (p) {
		glBeginQueryARB = (PFNGLBEGINQUERYARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glEndQueryARB");
	if (p) {
		glEndQueryARB = (PFNGLENDQUERYARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetQueryivARB");
	if (p) {
		glGetQueryivARB = (PFNGLGETQUERYIVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetQueryObjectivARB");
	if (p) {
		glGetQueryObjectivARB = (PFNGLGETQUERYOBJECTIVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetQueryObjectuivARB");
	if (p) {
		glGetQueryObjectuivARB = (PFNGLGETQUERYOBJECTUIVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDeleteObjectARB");
	if (p) {
		glDeleteObjectARB = (PFNGLDELETEOBJECTARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetHandleARB");
	if (p) {
		glGetHandleARB = (PFNGLGETHANDLEARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDetachObjectARB");
	if (p) {
		glDetachObjectARB = (PFNGLDETACHOBJECTARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCreateShaderObjectARB");
	if (p) {
		glCreateShaderObjectARB = (PFNGLCREATESHADEROBJECTARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glShaderSourceARB");
	if (p) {
		glShaderSourceARB = (PFNGLSHADERSOURCEARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCompileShaderARB");
	if (p) {
		glCompileShaderARB = (PFNGLCOMPILESHADERARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCreateProgramObjectARB");
	if (p) {
		glCreateProgramObjectARB = (PFNGLCREATEPROGRAMOBJECTARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glAttachObjectARB");
	if (p) {
		glAttachObjectARB = (PFNGLATTACHOBJECTARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glLinkProgramARB");
	if (p) {
		glLinkProgramARB = (PFNGLLINKPROGRAMARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUseProgramObjectARB");
	if (p) {
		glUseProgramObjectARB = (PFNGLUSEPROGRAMOBJECTARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glValidateProgramARB");
	if (p) {
		glValidateProgramARB = (PFNGLVALIDATEPROGRAMARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform1fARB");
	if (p) {
		glUniform1fARB = (PFNGLUNIFORM1FARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform2fARB");
	if (p) {
		glUniform2fARB = (PFNGLUNIFORM2FARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform3fARB");
	if (p) {
		glUniform3fARB = (PFNGLUNIFORM3FARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform4fARB");
	if (p) {
		glUniform4fARB = (PFNGLUNIFORM4FARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform1iARB");
	if (p) {
		glUniform1iARB = (PFNGLUNIFORM1IARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform2iARB");
	if (p) {
		glUniform2iARB = (PFNGLUNIFORM2IARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform3iARB");
	if (p) {
		glUniform3iARB = (PFNGLUNIFORM3IARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform4iARB");
	if (p) {
		glUniform4iARB = (PFNGLUNIFORM4IARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform1fvARB");
	if (p) {
		glUniform1fvARB = (PFNGLUNIFORM1FVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform2fvARB");
	if (p) {
		glUniform2fvARB = (PFNGLUNIFORM2FVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform3fvARB");
	if (p) {
		glUniform3fvARB = (PFNGLUNIFORM3FVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform4fvARB");
	if (p) {
		glUniform4fvARB = (PFNGLUNIFORM4FVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform1ivARB");
	if (p) {
		glUniform1ivARB = (PFNGLUNIFORM1IVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform2ivARB");
	if (p) {
		glUniform2ivARB = (PFNGLUNIFORM2IVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform3ivARB");
	if (p) {
		glUniform3ivARB = (PFNGLUNIFORM3IVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform4ivARB");
	if (p) {
		glUniform4ivARB = (PFNGLUNIFORM4IVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniformMatrix2fvARB");
	if (p) {
		glUniformMatrix2fvARB = (PFNGLUNIFORMMATRIX2FVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniformMatrix3fvARB");
	if (p) {
		glUniformMatrix3fvARB = (PFNGLUNIFORMMATRIX3FVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniformMatrix4fvARB");
	if (p) {
		glUniformMatrix4fvARB = (PFNGLUNIFORMMATRIX4FVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetObjectParameterfvARB");
	if (p) {
		glGetObjectParameterfvARB = (PFNGLGETOBJECTPARAMETERFVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetObjectParameterivARB");
	if (p) {
		glGetObjectParameterivARB = (PFNGLGETOBJECTPARAMETERIVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetInfoLogARB");
	if (p) {
		glGetInfoLogARB = (PFNGLGETINFOLOGARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetAttachedObjectsARB");
	if (p) {
		glGetAttachedObjectsARB = (PFNGLGETATTACHEDOBJECTSARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetUniformLocationARB");
	if (p) {
		glGetUniformLocationARB = (PFNGLGETUNIFORMLOCATIONARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetActiveUniformARB");
	if (p) {
		glGetActiveUniformARB = (PFNGLGETACTIVEUNIFORMARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetUniformfvARB");
	if (p) {
		glGetUniformfvARB = (PFNGLGETUNIFORMFVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetUniformivARB");
	if (p) {
		glGetUniformivARB = (PFNGLGETUNIFORMIVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetShaderSourceARB");
	if (p) {
		glGetShaderSourceARB = (PFNGLGETSHADERSOURCEARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindAttribLocationARB");
	if (p) {
		glBindAttribLocationARB = (PFNGLBINDATTRIBLOCATIONARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetActiveAttribARB");
	if (p) {
		glGetActiveAttribARB = (PFNGLGETACTIVEATTRIBARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetAttribLocationARB");
	if (p) {
		glGetAttribLocationARB = (PFNGLGETATTRIBLOCATIONARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDrawBuffersARB");
	if (p) {
		glDrawBuffersARB = (PFNGLDRAWBUFFERSARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glClampColorARB");
	if (p) {
		glClampColorARB = (PFNGLCLAMPCOLORARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDrawArraysInstancedARB");
	if (p) {
		glDrawArraysInstancedARB = (PFNGLDRAWARRAYSINSTANCEDARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDrawElementsInstancedARB");
	if (p) {
		glDrawElementsInstancedARB = (PFNGLDRAWELEMENTSINSTANCEDARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsRenderbuffer");
	if (p) {
		glIsRenderbuffer = (PFNGLISRENDERBUFFERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindRenderbuffer");
	if (p) {
		glBindRenderbuffer = (PFNGLBINDRENDERBUFFERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDeleteRenderbuffers");
	if (p) {
		glDeleteRenderbuffers = (PFNGLDELETERENDERBUFFERSPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGenRenderbuffers");
	if (p) {
		glGenRenderbuffers = (PFNGLGENRENDERBUFFERSPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glRenderbufferStorage");
	if (p) {
		glRenderbufferStorage = (PFNGLRENDERBUFFERSTORAGEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetRenderbufferParameteriv");
	if (p) {
		glGetRenderbufferParameteriv = (PFNGLGETRENDERBUFFERPARAMETERIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsFramebuffer");
	if (p) {
		glIsFramebuffer = (PFNGLISFRAMEBUFFERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindFramebuffer");
	if (p) {
		glBindFramebuffer = (PFNGLBINDFRAMEBUFFERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDeleteFramebuffers");
	if (p) {
		glDeleteFramebuffers = (PFNGLDELETEFRAMEBUFFERSPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGenFramebuffers");
	if (p) {
		glGenFramebuffers = (PFNGLGENFRAMEBUFFERSPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCheckFramebufferStatus");
	if (p) {
		glCheckFramebufferStatus = (PFNGLCHECKFRAMEBUFFERSTATUSPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFramebufferTexture1D");
	if (p) {
		glFramebufferTexture1D = (PFNGLFRAMEBUFFERTEXTURE1DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFramebufferTexture2D");
	if (p) {
		glFramebufferTexture2D = (PFNGLFRAMEBUFFERTEXTURE2DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFramebufferTexture3D");
	if (p) {
		glFramebufferTexture3D = (PFNGLFRAMEBUFFERTEXTURE3DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFramebufferRenderbuffer");
	if (p) {
		glFramebufferRenderbuffer = (PFNGLFRAMEBUFFERRENDERBUFFERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetFramebufferAttachmentParameteriv");
	if (p) {
		glGetFramebufferAttachmentParameteriv = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGenerateMipmap");
	if (p) {
		glGenerateMipmap = (PFNGLGENERATEMIPMAPPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBlitFramebuffer");
	if (p) {
		glBlitFramebuffer = (PFNGLBLITFRAMEBUFFERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glRenderbufferStorageMultisample");
	if (p) {
		glRenderbufferStorageMultisample = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFramebufferTextureLayer");
	if (p) {
		glFramebufferTextureLayer = (PFNGLFRAMEBUFFERTEXTURELAYERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramParameteriARB");
	if (p) {
		glProgramParameteriARB = (PFNGLPROGRAMPARAMETERIARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFramebufferTextureARB");
	if (p) {
		glFramebufferTextureARB = (PFNGLFRAMEBUFFERTEXTUREARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFramebufferTextureLayerARB");
	if (p) {
		glFramebufferTextureLayerARB = (PFNGLFRAMEBUFFERTEXTURELAYERARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFramebufferTextureFaceARB");
	if (p) {
		glFramebufferTextureFaceARB = (PFNGLFRAMEBUFFERTEXTUREFACEARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribDivisorARB");
	if (p) {
		glVertexAttribDivisorARB = (PFNGLVERTEXATTRIBDIVISORARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMapBufferRange");
	if (p) {
		glMapBufferRange = (PFNGLMAPBUFFERRANGEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFlushMappedBufferRange");
	if (p) {
		glFlushMappedBufferRange = (PFNGLFLUSHMAPPEDBUFFERRANGEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexBufferARB");
	if (p) {
		glTexBufferARB = (PFNGLTEXBUFFERARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindVertexArray");
	if (p) {
		glBindVertexArray = (PFNGLBINDVERTEXARRAYPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDeleteVertexArrays");
	if (p) {
		glDeleteVertexArrays = (PFNGLDELETEVERTEXARRAYSPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGenVertexArrays");
	if (p) {
		glGenVertexArrays = (PFNGLGENVERTEXARRAYSPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsVertexArray");
	if (p) {
		glIsVertexArray = (PFNGLISVERTEXARRAYPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetUniformIndices");
	if (p) {
		glGetUniformIndices = (PFNGLGETUNIFORMINDICESPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetActiveUniformsiv");
	if (p) {
		glGetActiveUniformsiv = (PFNGLGETACTIVEUNIFORMSIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetActiveUniformName");
	if (p) {
		glGetActiveUniformName = (PFNGLGETACTIVEUNIFORMNAMEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetUniformBlockIndex");
	if (p) {
		glGetUniformBlockIndex = (PFNGLGETUNIFORMBLOCKINDEXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetActiveUniformBlockiv");
	if (p) {
		glGetActiveUniformBlockiv = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetActiveUniformBlockName");
	if (p) {
		glGetActiveUniformBlockName = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniformBlockBinding");
	if (p) {
		glUniformBlockBinding = (PFNGLUNIFORMBLOCKBINDINGPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCopyBufferSubData");
	if (p) {
		glCopyBufferSubData = (PFNGLCOPYBUFFERSUBDATAPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDrawElementsBaseVertex");
	if (p) {
		glDrawElementsBaseVertex = (PFNGLDRAWELEMENTSBASEVERTEXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDrawRangeElementsBaseVertex");
	if (p) {
		glDrawRangeElementsBaseVertex = (PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDrawElementsInstancedBaseVertex");
	if (p) {
		glDrawElementsInstancedBaseVertex = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiDrawElementsBaseVertex");
	if (p) {
		glMultiDrawElementsBaseVertex = (PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProvokingVertex");
	if (p) {
		glProvokingVertex = (PFNGLPROVOKINGVERTEXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFenceSync");
	if (p) {
		glFenceSync = (PFNGLFENCESYNCPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsSync");
	if (p) {
		glIsSync = (PFNGLISSYNCPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDeleteSync");
	if (p) {
		glDeleteSync = (PFNGLDELETESYNCPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glClientWaitSync");
	if (p) {
		glClientWaitSync = (PFNGLCLIENTWAITSYNCPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWaitSync");
	if (p) {
		glWaitSync = (PFNGLWAITSYNCPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetInteger64v");
	if (p) {
		glGetInteger64v = (PFNGLGETINTEGER64VPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetSynciv");
	if (p) {
		glGetSynciv = (PFNGLGETSYNCIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexImage2DMultisample");
	if (p) {
		glTexImage2DMultisample = (PFNGLTEXIMAGE2DMULTISAMPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexImage3DMultisample");
	if (p) {
		glTexImage3DMultisample = (PFNGLTEXIMAGE3DMULTISAMPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetMultisamplefv");
	if (p) {
		glGetMultisamplefv = (PFNGLGETMULTISAMPLEFVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSampleMaski");
	if (p) {
		glSampleMaski = (PFNGLSAMPLEMASKIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBlendEquationiARB");
	if (p) {
		glBlendEquationiARB = (PFNGLBLENDEQUATIONIARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBlendEquationSeparateiARB");
	if (p) {
		glBlendEquationSeparateiARB = (PFNGLBLENDEQUATIONSEPARATEIARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBlendFunciARB");
	if (p) {
		glBlendFunciARB = (PFNGLBLENDFUNCIARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBlendFuncSeparateiARB");
	if (p) {
		glBlendFuncSeparateiARB = (PFNGLBLENDFUNCSEPARATEIARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMinSampleShadingARB");
	if (p) {
		glMinSampleShadingARB = (PFNGLMINSAMPLESHADINGARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNamedStringARB");
	if (p) {
		glNamedStringARB = (PFNGLNAMEDSTRINGARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDeleteNamedStringARB");
	if (p) {
		glDeleteNamedStringARB = (PFNGLDELETENAMEDSTRINGARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCompileShaderIncludeARB");
	if (p) {
		glCompileShaderIncludeARB = (PFNGLCOMPILESHADERINCLUDEARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsNamedStringARB");
	if (p) {
		glIsNamedStringARB = (PFNGLISNAMEDSTRINGARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetNamedStringARB");
	if (p) {
		glGetNamedStringARB = (PFNGLGETNAMEDSTRINGARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetNamedStringivARB");
	if (p) {
		glGetNamedStringivARB = (PFNGLGETNAMEDSTRINGIVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindFragDataLocationIndexed");
	if (p) {
		glBindFragDataLocationIndexed = (PFNGLBINDFRAGDATALOCATIONINDEXEDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetFragDataIndex");
	if (p) {
		glGetFragDataIndex = (PFNGLGETFRAGDATAINDEXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGenSamplers");
	if (p) {
		glGenSamplers = (PFNGLGENSAMPLERSPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDeleteSamplers");
	if (p) {
		glDeleteSamplers = (PFNGLDELETESAMPLERSPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsSampler");
	if (p) {
		glIsSampler = (PFNGLISSAMPLERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindSampler");
	if (p) {
		glBindSampler = (PFNGLBINDSAMPLERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSamplerParameteri");
	if (p) {
		glSamplerParameteri = (PFNGLSAMPLERPARAMETERIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSamplerParameteriv");
	if (p) {
		glSamplerParameteriv = (PFNGLSAMPLERPARAMETERIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSamplerParameterf");
	if (p) {
		glSamplerParameterf = (PFNGLSAMPLERPARAMETERFPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSamplerParameterfv");
	if (p) {
		glSamplerParameterfv = (PFNGLSAMPLERPARAMETERFVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSamplerParameterIiv");
	if (p) {
		glSamplerParameterIiv = (PFNGLSAMPLERPARAMETERIIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSamplerParameterIuiv");
	if (p) {
		glSamplerParameterIuiv = (PFNGLSAMPLERPARAMETERIUIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetSamplerParameteriv");
	if (p) {
		glGetSamplerParameteriv = (PFNGLGETSAMPLERPARAMETERIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetSamplerParameterIiv");
	if (p) {
		glGetSamplerParameterIiv = (PFNGLGETSAMPLERPARAMETERIIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetSamplerParameterfv");
	if (p) {
		glGetSamplerParameterfv = (PFNGLGETSAMPLERPARAMETERFVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetSamplerParameterIuiv");
	if (p) {
		glGetSamplerParameterIuiv = (PFNGLGETSAMPLERPARAMETERIUIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glQueryCounter");
	if (p) {
		glQueryCounter = (PFNGLQUERYCOUNTERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetQueryObjecti64v");
	if (p) {
		glGetQueryObjecti64v = (PFNGLGETQUERYOBJECTI64VPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetQueryObjectui64v");
	if (p) {
		glGetQueryObjectui64v = (PFNGLGETQUERYOBJECTUI64VPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexP2ui");
	if (p) {
		glVertexP2ui = (PFNGLVERTEXP2UIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexP2uiv");
	if (p) {
		glVertexP2uiv = (PFNGLVERTEXP2UIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexP3ui");
	if (p) {
		glVertexP3ui = (PFNGLVERTEXP3UIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexP3uiv");
	if (p) {
		glVertexP3uiv = (PFNGLVERTEXP3UIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexP4ui");
	if (p) {
		glVertexP4ui = (PFNGLVERTEXP4UIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexP4uiv");
	if (p) {
		glVertexP4uiv = (PFNGLVERTEXP4UIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexCoordP1ui");
	if (p) {
		glTexCoordP1ui = (PFNGLTEXCOORDP1UIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexCoordP1uiv");
	if (p) {
		glTexCoordP1uiv = (PFNGLTEXCOORDP1UIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexCoordP2ui");
	if (p) {
		glTexCoordP2ui = (PFNGLTEXCOORDP2UIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexCoordP2uiv");
	if (p) {
		glTexCoordP2uiv = (PFNGLTEXCOORDP2UIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexCoordP3ui");
	if (p) {
		glTexCoordP3ui = (PFNGLTEXCOORDP3UIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexCoordP3uiv");
	if (p) {
		glTexCoordP3uiv = (PFNGLTEXCOORDP3UIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexCoordP4ui");
	if (p) {
		glTexCoordP4ui = (PFNGLTEXCOORDP4UIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexCoordP4uiv");
	if (p) {
		glTexCoordP4uiv = (PFNGLTEXCOORDP4UIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoordP1ui");
	if (p) {
		glMultiTexCoordP1ui = (PFNGLMULTITEXCOORDP1UIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoordP1uiv");
	if (p) {
		glMultiTexCoordP1uiv = (PFNGLMULTITEXCOORDP1UIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoordP2ui");
	if (p) {
		glMultiTexCoordP2ui = (PFNGLMULTITEXCOORDP2UIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoordP2uiv");
	if (p) {
		glMultiTexCoordP2uiv = (PFNGLMULTITEXCOORDP2UIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoordP3ui");
	if (p) {
		glMultiTexCoordP3ui = (PFNGLMULTITEXCOORDP3UIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoordP3uiv");
	if (p) {
		glMultiTexCoordP3uiv = (PFNGLMULTITEXCOORDP3UIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoordP4ui");
	if (p) {
		glMultiTexCoordP4ui = (PFNGLMULTITEXCOORDP4UIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoordP4uiv");
	if (p) {
		glMultiTexCoordP4uiv = (PFNGLMULTITEXCOORDP4UIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNormalP3ui");
	if (p) {
		glNormalP3ui = (PFNGLNORMALP3UIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNormalP3uiv");
	if (p) {
		glNormalP3uiv = (PFNGLNORMALP3UIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glColorP3ui");
	if (p) {
		glColorP3ui = (PFNGLCOLORP3UIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glColorP3uiv");
	if (p) {
		glColorP3uiv = (PFNGLCOLORP3UIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glColorP4ui");
	if (p) {
		glColorP4ui = (PFNGLCOLORP4UIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glColorP4uiv");
	if (p) {
		glColorP4uiv = (PFNGLCOLORP4UIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColorP3ui");
	if (p) {
		glSecondaryColorP3ui = (PFNGLSECONDARYCOLORP3UIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColorP3uiv");
	if (p) {
		glSecondaryColorP3uiv = (PFNGLSECONDARYCOLORP3UIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribP1ui");
	if (p) {
		glVertexAttribP1ui = (PFNGLVERTEXATTRIBP1UIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribP1uiv");
	if (p) {
		glVertexAttribP1uiv = (PFNGLVERTEXATTRIBP1UIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribP2ui");
	if (p) {
		glVertexAttribP2ui = (PFNGLVERTEXATTRIBP2UIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribP2uiv");
	if (p) {
		glVertexAttribP2uiv = (PFNGLVERTEXATTRIBP2UIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribP3ui");
	if (p) {
		glVertexAttribP3ui = (PFNGLVERTEXATTRIBP3UIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribP3uiv");
	if (p) {
		glVertexAttribP3uiv = (PFNGLVERTEXATTRIBP3UIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribP4ui");
	if (p) {
		glVertexAttribP4ui = (PFNGLVERTEXATTRIBP4UIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribP4uiv");
	if (p) {
		glVertexAttribP4uiv = (PFNGLVERTEXATTRIBP4UIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDrawArraysIndirect");
	if (p) {
		glDrawArraysIndirect = (PFNGLDRAWARRAYSINDIRECTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDrawElementsIndirect");
	if (p) {
		glDrawElementsIndirect = (PFNGLDRAWELEMENTSINDIRECTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform1d");
	if (p) {
		glUniform1d = (PFNGLUNIFORM1DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform2d");
	if (p) {
		glUniform2d = (PFNGLUNIFORM2DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform3d");
	if (p) {
		glUniform3d = (PFNGLUNIFORM3DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform4d");
	if (p) {
		glUniform4d = (PFNGLUNIFORM4DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform1dv");
	if (p) {
		glUniform1dv = (PFNGLUNIFORM1DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform2dv");
	if (p) {
		glUniform2dv = (PFNGLUNIFORM2DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform3dv");
	if (p) {
		glUniform3dv = (PFNGLUNIFORM3DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform4dv");
	if (p) {
		glUniform4dv = (PFNGLUNIFORM4DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniformMatrix2dv");
	if (p) {
		glUniformMatrix2dv = (PFNGLUNIFORMMATRIX2DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniformMatrix3dv");
	if (p) {
		glUniformMatrix3dv = (PFNGLUNIFORMMATRIX3DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniformMatrix4dv");
	if (p) {
		glUniformMatrix4dv = (PFNGLUNIFORMMATRIX4DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniformMatrix2x3dv");
	if (p) {
		glUniformMatrix2x3dv = (PFNGLUNIFORMMATRIX2X3DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniformMatrix2x4dv");
	if (p) {
		glUniformMatrix2x4dv = (PFNGLUNIFORMMATRIX2X4DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniformMatrix3x2dv");
	if (p) {
		glUniformMatrix3x2dv = (PFNGLUNIFORMMATRIX3X2DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniformMatrix3x4dv");
	if (p) {
		glUniformMatrix3x4dv = (PFNGLUNIFORMMATRIX3X4DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniformMatrix4x2dv");
	if (p) {
		glUniformMatrix4x2dv = (PFNGLUNIFORMMATRIX4X2DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniformMatrix4x3dv");
	if (p) {
		glUniformMatrix4x3dv = (PFNGLUNIFORMMATRIX4X3DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetUniformdv");
	if (p) {
		glGetUniformdv = (PFNGLGETUNIFORMDVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetSubroutineUniformLocation");
	if (p) {
		glGetSubroutineUniformLocation = (PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetSubroutineIndex");
	if (p) {
		glGetSubroutineIndex = (PFNGLGETSUBROUTINEINDEXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetActiveSubroutineUniformiv");
	if (p) {
		glGetActiveSubroutineUniformiv = (PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetActiveSubroutineUniformName");
	if (p) {
		glGetActiveSubroutineUniformName = (PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetActiveSubroutineName");
	if (p) {
		glGetActiveSubroutineName = (PFNGLGETACTIVESUBROUTINENAMEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniformSubroutinesuiv");
	if (p) {
		glUniformSubroutinesuiv = (PFNGLUNIFORMSUBROUTINESUIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetUniformSubroutineuiv");
	if (p) {
		glGetUniformSubroutineuiv = (PFNGLGETUNIFORMSUBROUTINEUIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetProgramStageiv");
	if (p) {
		glGetProgramStageiv = (PFNGLGETPROGRAMSTAGEIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPatchParameteri");
	if (p) {
		glPatchParameteri = (PFNGLPATCHPARAMETERIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPatchParameterfv");
	if (p) {
		glPatchParameterfv = (PFNGLPATCHPARAMETERFVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindTransformFeedback");
	if (p) {
		glBindTransformFeedback = (PFNGLBINDTRANSFORMFEEDBACKPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDeleteTransformFeedbacks");
	if (p) {
		glDeleteTransformFeedbacks = (PFNGLDELETETRANSFORMFEEDBACKSPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGenTransformFeedbacks");
	if (p) {
		glGenTransformFeedbacks = (PFNGLGENTRANSFORMFEEDBACKSPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsTransformFeedback");
	if (p) {
		glIsTransformFeedback = (PFNGLISTRANSFORMFEEDBACKPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPauseTransformFeedback");
	if (p) {
		glPauseTransformFeedback = (PFNGLPAUSETRANSFORMFEEDBACKPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glResumeTransformFeedback");
	if (p) {
		glResumeTransformFeedback = (PFNGLRESUMETRANSFORMFEEDBACKPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDrawTransformFeedback");
	if (p) {
		glDrawTransformFeedback = (PFNGLDRAWTRANSFORMFEEDBACKPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDrawTransformFeedbackStream");
	if (p) {
		glDrawTransformFeedbackStream = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBeginQueryIndexed");
	if (p) {
		glBeginQueryIndexed = (PFNGLBEGINQUERYINDEXEDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glEndQueryIndexed");
	if (p) {
		glEndQueryIndexed = (PFNGLENDQUERYINDEXEDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetQueryIndexediv");
	if (p) {
		glGetQueryIndexediv = (PFNGLGETQUERYINDEXEDIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glReleaseShaderCompiler");
	if (p) {
		glReleaseShaderCompiler = (PFNGLRELEASESHADERCOMPILERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glShaderBinary");
	if (p) {
		glShaderBinary = (PFNGLSHADERBINARYPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetShaderPrecisionFormat");
	if (p) {
		glGetShaderPrecisionFormat = (PFNGLGETSHADERPRECISIONFORMATPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDepthRangef");
	if (p) {
		glDepthRangef = (PFNGLDEPTHRANGEFPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glClearDepthf");
	if (p) {
		glClearDepthf = (PFNGLCLEARDEPTHFPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetProgramBinary");
	if (p) {
		glGetProgramBinary = (PFNGLGETPROGRAMBINARYPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramBinary");
	if (p) {
		glProgramBinary = (PFNGLPROGRAMBINARYPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramParameteri");
	if (p) {
		glProgramParameteri = (PFNGLPROGRAMPARAMETERIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUseProgramStages");
	if (p) {
		glUseProgramStages = (PFNGLUSEPROGRAMSTAGESPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glActiveShaderProgram");
	if (p) {
		glActiveShaderProgram = (PFNGLACTIVESHADERPROGRAMPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCreateShaderProgramv");
	if (p) {
		glCreateShaderProgramv = (PFNGLCREATESHADERPROGRAMVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindProgramPipeline");
	if (p) {
		glBindProgramPipeline = (PFNGLBINDPROGRAMPIPELINEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDeleteProgramPipelines");
	if (p) {
		glDeleteProgramPipelines = (PFNGLDELETEPROGRAMPIPELINESPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGenProgramPipelines");
	if (p) {
		glGenProgramPipelines = (PFNGLGENPROGRAMPIPELINESPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsProgramPipeline");
	if (p) {
		glIsProgramPipeline = (PFNGLISPROGRAMPIPELINEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetProgramPipelineiv");
	if (p) {
		glGetProgramPipelineiv = (PFNGLGETPROGRAMPIPELINEIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform1i");
	if (p) {
		glProgramUniform1i = (PFNGLPROGRAMUNIFORM1IPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform1iv");
	if (p) {
		glProgramUniform1iv = (PFNGLPROGRAMUNIFORM1IVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform1f");
	if (p) {
		glProgramUniform1f = (PFNGLPROGRAMUNIFORM1FPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform1fv");
	if (p) {
		glProgramUniform1fv = (PFNGLPROGRAMUNIFORM1FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform1d");
	if (p) {
		glProgramUniform1d = (PFNGLPROGRAMUNIFORM1DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform1dv");
	if (p) {
		glProgramUniform1dv = (PFNGLPROGRAMUNIFORM1DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform1ui");
	if (p) {
		glProgramUniform1ui = (PFNGLPROGRAMUNIFORM1UIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform1uiv");
	if (p) {
		glProgramUniform1uiv = (PFNGLPROGRAMUNIFORM1UIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform2i");
	if (p) {
		glProgramUniform2i = (PFNGLPROGRAMUNIFORM2IPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform2iv");
	if (p) {
		glProgramUniform2iv = (PFNGLPROGRAMUNIFORM2IVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform2f");
	if (p) {
		glProgramUniform2f = (PFNGLPROGRAMUNIFORM2FPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform2fv");
	if (p) {
		glProgramUniform2fv = (PFNGLPROGRAMUNIFORM2FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform2d");
	if (p) {
		glProgramUniform2d = (PFNGLPROGRAMUNIFORM2DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform2dv");
	if (p) {
		glProgramUniform2dv = (PFNGLPROGRAMUNIFORM2DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform2ui");
	if (p) {
		glProgramUniform2ui = (PFNGLPROGRAMUNIFORM2UIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform2uiv");
	if (p) {
		glProgramUniform2uiv = (PFNGLPROGRAMUNIFORM2UIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform3i");
	if (p) {
		glProgramUniform3i = (PFNGLPROGRAMUNIFORM3IPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform3iv");
	if (p) {
		glProgramUniform3iv = (PFNGLPROGRAMUNIFORM3IVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform3f");
	if (p) {
		glProgramUniform3f = (PFNGLPROGRAMUNIFORM3FPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform3fv");
	if (p) {
		glProgramUniform3fv = (PFNGLPROGRAMUNIFORM3FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform3d");
	if (p) {
		glProgramUniform3d = (PFNGLPROGRAMUNIFORM3DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform3dv");
	if (p) {
		glProgramUniform3dv = (PFNGLPROGRAMUNIFORM3DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform3ui");
	if (p) {
		glProgramUniform3ui = (PFNGLPROGRAMUNIFORM3UIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform3uiv");
	if (p) {
		glProgramUniform3uiv = (PFNGLPROGRAMUNIFORM3UIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform4i");
	if (p) {
		glProgramUniform4i = (PFNGLPROGRAMUNIFORM4IPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform4iv");
	if (p) {
		glProgramUniform4iv = (PFNGLPROGRAMUNIFORM4IVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform4f");
	if (p) {
		glProgramUniform4f = (PFNGLPROGRAMUNIFORM4FPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform4fv");
	if (p) {
		glProgramUniform4fv = (PFNGLPROGRAMUNIFORM4FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform4d");
	if (p) {
		glProgramUniform4d = (PFNGLPROGRAMUNIFORM4DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform4dv");
	if (p) {
		glProgramUniform4dv = (PFNGLPROGRAMUNIFORM4DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform4ui");
	if (p) {
		glProgramUniform4ui = (PFNGLPROGRAMUNIFORM4UIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform4uiv");
	if (p) {
		glProgramUniform4uiv = (PFNGLPROGRAMUNIFORM4UIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix2fv");
	if (p) {
		glProgramUniformMatrix2fv = (PFNGLPROGRAMUNIFORMMATRIX2FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix3fv");
	if (p) {
		glProgramUniformMatrix3fv = (PFNGLPROGRAMUNIFORMMATRIX3FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix4fv");
	if (p) {
		glProgramUniformMatrix4fv = (PFNGLPROGRAMUNIFORMMATRIX4FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix2dv");
	if (p) {
		glProgramUniformMatrix2dv = (PFNGLPROGRAMUNIFORMMATRIX2DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix3dv");
	if (p) {
		glProgramUniformMatrix3dv = (PFNGLPROGRAMUNIFORMMATRIX3DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix4dv");
	if (p) {
		glProgramUniformMatrix4dv = (PFNGLPROGRAMUNIFORMMATRIX4DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix2x3fv");
	if (p) {
		glProgramUniformMatrix2x3fv = (PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix3x2fv");
	if (p) {
		glProgramUniformMatrix3x2fv = (PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix2x4fv");
	if (p) {
		glProgramUniformMatrix2x4fv = (PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix4x2fv");
	if (p) {
		glProgramUniformMatrix4x2fv = (PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix3x4fv");
	if (p) {
		glProgramUniformMatrix3x4fv = (PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix4x3fv");
	if (p) {
		glProgramUniformMatrix4x3fv = (PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix2x3dv");
	if (p) {
		glProgramUniformMatrix2x3dv = (PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix3x2dv");
	if (p) {
		glProgramUniformMatrix3x2dv = (PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix2x4dv");
	if (p) {
		glProgramUniformMatrix2x4dv = (PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix4x2dv");
	if (p) {
		glProgramUniformMatrix4x2dv = (PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix3x4dv");
	if (p) {
		glProgramUniformMatrix3x4dv = (PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix4x3dv");
	if (p) {
		glProgramUniformMatrix4x3dv = (PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glValidateProgramPipeline");
	if (p) {
		glValidateProgramPipeline = (PFNGLVALIDATEPROGRAMPIPELINEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetProgramPipelineInfoLog");
	if (p) {
		glGetProgramPipelineInfoLog = (PFNGLGETPROGRAMPIPELINEINFOLOGPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribL1d");
	if (p) {
		glVertexAttribL1d = (PFNGLVERTEXATTRIBL1DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribL2d");
	if (p) {
		glVertexAttribL2d = (PFNGLVERTEXATTRIBL2DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribL3d");
	if (p) {
		glVertexAttribL3d = (PFNGLVERTEXATTRIBL3DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribL4d");
	if (p) {
		glVertexAttribL4d = (PFNGLVERTEXATTRIBL4DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribL1dv");
	if (p) {
		glVertexAttribL1dv = (PFNGLVERTEXATTRIBL1DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribL2dv");
	if (p) {
		glVertexAttribL2dv = (PFNGLVERTEXATTRIBL2DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribL3dv");
	if (p) {
		glVertexAttribL3dv = (PFNGLVERTEXATTRIBL3DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribL4dv");
	if (p) {
		glVertexAttribL4dv = (PFNGLVERTEXATTRIBL4DVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribLPointer");
	if (p) {
		glVertexAttribLPointer = (PFNGLVERTEXATTRIBLPOINTERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVertexAttribLdv");
	if (p) {
		glGetVertexAttribLdv = (PFNGLGETVERTEXATTRIBLDVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glViewportArrayv");
	if (p) {
		glViewportArrayv = (PFNGLVIEWPORTARRAYVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glViewportIndexedf");
	if (p) {
		glViewportIndexedf = (PFNGLVIEWPORTINDEXEDFPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glViewportIndexedfv");
	if (p) {
		glViewportIndexedfv = (PFNGLVIEWPORTINDEXEDFVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glScissorArrayv");
	if (p) {
		glScissorArrayv = (PFNGLSCISSORARRAYVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glScissorIndexed");
	if (p) {
		glScissorIndexed = (PFNGLSCISSORINDEXEDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glScissorIndexedv");
	if (p) {
		glScissorIndexedv = (PFNGLSCISSORINDEXEDVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDepthRangeArrayv");
	if (p) {
		glDepthRangeArrayv = (PFNGLDEPTHRANGEARRAYVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDepthRangeIndexed");
	if (p) {
		glDepthRangeIndexed = (PFNGLDEPTHRANGEINDEXEDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetFloati_v");
	if (p) {
		glGetFloati_v = (PFNGLGETFLOATI_VPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetDoublei_v");
	if (p) {
		glGetDoublei_v = (PFNGLGETDOUBLEI_VPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCreateSyncFromCLeventARB");
	if (p) {
		glCreateSyncFromCLeventARB = (PFNGLCREATESYNCFROMCLEVENTARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDebugMessageControlARB");
	if (p) {
		glDebugMessageControlARB = (PFNGLDEBUGMESSAGECONTROLARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDebugMessageInsertARB");
	if (p) {
		glDebugMessageInsertARB = (PFNGLDEBUGMESSAGEINSERTARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDebugMessageCallbackARB");
	if (p) {
		glDebugMessageCallbackARB = (PFNGLDEBUGMESSAGECALLBACKARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetDebugMessageLogARB");
	if (p) {
		glGetDebugMessageLogARB = (PFNGLGETDEBUGMESSAGELOGARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetGraphicsResetStatusARB");
	if (p) {
		glGetGraphicsResetStatusARB = (PFNGLGETGRAPHICSRESETSTATUSARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetnMapdvARB");
	if (p) {
		glGetnMapdvARB = (PFNGLGETNMAPDVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetnMapfvARB");
	if (p) {
		glGetnMapfvARB = (PFNGLGETNMAPFVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetnMapivARB");
	if (p) {
		glGetnMapivARB = (PFNGLGETNMAPIVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetnPixelMapfvARB");
	if (p) {
		glGetnPixelMapfvARB = (PFNGLGETNPIXELMAPFVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetnPixelMapuivARB");
	if (p) {
		glGetnPixelMapuivARB = (PFNGLGETNPIXELMAPUIVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetnPixelMapusvARB");
	if (p) {
		glGetnPixelMapusvARB = (PFNGLGETNPIXELMAPUSVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetnPolygonStippleARB");
	if (p) {
		glGetnPolygonStippleARB = (PFNGLGETNPOLYGONSTIPPLEARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetnColorTableARB");
	if (p) {
		glGetnColorTableARB = (PFNGLGETNCOLORTABLEARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetnConvolutionFilterARB");
	if (p) {
		glGetnConvolutionFilterARB = (PFNGLGETNCONVOLUTIONFILTERARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetnSeparableFilterARB");
	if (p) {
		glGetnSeparableFilterARB = (PFNGLGETNSEPARABLEFILTERARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetnHistogramARB");
	if (p) {
		glGetnHistogramARB = (PFNGLGETNHISTOGRAMARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetnMinmaxARB");
	if (p) {
		glGetnMinmaxARB = (PFNGLGETNMINMAXARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetnTexImageARB");
	if (p) {
		glGetnTexImageARB = (PFNGLGETNTEXIMAGEARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glReadnPixelsARB");
	if (p) {
		glReadnPixelsARB = (PFNGLREADNPIXELSARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetnCompressedTexImageARB");
	if (p) {
		glGetnCompressedTexImageARB = (PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetnUniformfvARB");
	if (p) {
		glGetnUniformfvARB = (PFNGLGETNUNIFORMFVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetnUniformivARB");
	if (p) {
		glGetnUniformivARB = (PFNGLGETNUNIFORMIVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetnUniformuivARB");
	if (p) {
		glGetnUniformuivARB = (PFNGLGETNUNIFORMUIVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetnUniformdvARB");
	if (p) {
		glGetnUniformdvARB = (PFNGLGETNUNIFORMDVARBPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDrawArraysInstancedBaseInstance");
	if (p) {
		glDrawArraysInstancedBaseInstance = (PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDrawElementsInstancedBaseInstance");
	if (p) {
		glDrawElementsInstancedBaseInstance = (PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDrawElementsInstancedBaseVertexBaseInstance");
	if (p) {
		glDrawElementsInstancedBaseVertexBaseInstance = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDrawTransformFeedbackInstanced");
	if (p) {
		glDrawTransformFeedbackInstanced = (PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDrawTransformFeedbackStreamInstanced");
	if (p) {
		glDrawTransformFeedbackStreamInstanced = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetInternalformativ");
	if (p) {
		glGetInternalformativ = (PFNGLGETINTERNALFORMATIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetActiveAtomicCounterBufferiv");
	if (p) {
		glGetActiveAtomicCounterBufferiv = (PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindImageTexture");
	if (p) {
		glBindImageTexture = (PFNGLBINDIMAGETEXTUREPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMemoryBarrier");
	if (p) {
		glMemoryBarrier = (PFNGLMEMORYBARRIERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexStorage1D");
	if (p) {
		glTexStorage1D = (PFNGLTEXSTORAGE1DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexStorage2D");
	if (p) {
		glTexStorage2D = (PFNGLTEXSTORAGE2DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexStorage3D");
	if (p) {
		glTexStorage3D = (PFNGLTEXSTORAGE3DPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTextureStorage1DEXT");
	if (p) {
		glTextureStorage1DEXT = (PFNGLTEXTURESTORAGE1DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTextureStorage2DEXT");
	if (p) {
		glTextureStorage2DEXT = (PFNGLTEXTURESTORAGE2DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTextureStorage3DEXT");
	if (p) {
		glTextureStorage3DEXT = (PFNGLTEXTURESTORAGE3DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDebugMessageControl");
	if (p) {
		glDebugMessageControl = (PFNGLDEBUGMESSAGECONTROLPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDebugMessageInsert");
	if (p) {
		glDebugMessageInsert = (PFNGLDEBUGMESSAGEINSERTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDebugMessageCallback");
	if (p) {
		glDebugMessageCallback = (PFNGLDEBUGMESSAGECALLBACKPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetDebugMessageLog");
	if (p) {
		glGetDebugMessageLog = (PFNGLGETDEBUGMESSAGELOGPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPushDebugGroup");
	if (p) {
		glPushDebugGroup = (PFNGLPUSHDEBUGGROUPPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPopDebugGroup");
	if (p) {
		glPopDebugGroup = (PFNGLPOPDEBUGGROUPPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glObjectLabel");
	if (p) {
		glObjectLabel = (PFNGLOBJECTLABELPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetObjectLabel");
	if (p) {
		glGetObjectLabel = (PFNGLGETOBJECTLABELPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glObjectPtrLabel");
	if (p) {
		glObjectPtrLabel = (PFNGLOBJECTPTRLABELPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetObjectPtrLabel");
	if (p) {
		glGetObjectPtrLabel = (PFNGLGETOBJECTPTRLABELPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glClearBufferData");
	if (p) {
		glClearBufferData = (PFNGLCLEARBUFFERDATAPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glClearBufferSubData");
	if (p) {
		glClearBufferSubData = (PFNGLCLEARBUFFERSUBDATAPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glClearNamedBufferDataEXT");
	if (p) {
		glClearNamedBufferDataEXT = (PFNGLCLEARNAMEDBUFFERDATAEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glClearNamedBufferSubDataEXT");
	if (p) {
		glClearNamedBufferSubDataEXT = (PFNGLCLEARNAMEDBUFFERSUBDATAEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDispatchCompute");
	if (p) {
		glDispatchCompute = (PFNGLDISPATCHCOMPUTEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDispatchComputeIndirect");
	if (p) {
		glDispatchComputeIndirect = (PFNGLDISPATCHCOMPUTEINDIRECTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCopyImageSubData");
	if (p) {
		glCopyImageSubData = (PFNGLCOPYIMAGESUBDATAPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTextureView");
	if (p) {
		glTextureView = (PFNGLTEXTUREVIEWPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindVertexBuffer");
	if (p) {
		glBindVertexBuffer = (PFNGLBINDVERTEXBUFFERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribFormat");
	if (p) {
		glVertexAttribFormat = (PFNGLVERTEXATTRIBFORMATPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribIFormat");
	if (p) {
		glVertexAttribIFormat = (PFNGLVERTEXATTRIBIFORMATPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribLFormat");
	if (p) {
		glVertexAttribLFormat = (PFNGLVERTEXATTRIBLFORMATPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribBinding");
	if (p) {
		glVertexAttribBinding = (PFNGLVERTEXATTRIBBINDINGPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexBindingDivisor");
	if (p) {
		glVertexBindingDivisor = (PFNGLVERTEXBINDINGDIVISORPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexArrayBindVertexBufferEXT");
	if (p) {
		glVertexArrayBindVertexBufferEXT = (PFNGLVERTEXARRAYBINDVERTEXBUFFEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexArrayVertexAttribFormatEXT");
	if (p) {
		glVertexArrayVertexAttribFormatEXT = (PFNGLVERTEXARRAYVERTEXATTRIBFORMATEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexArrayVertexAttribIFormatEXT");
	if (p) {
		glVertexArrayVertexAttribIFormatEXT = (PFNGLVERTEXARRAYVERTEXATTRIBIFORMATEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexArrayVertexAttribLFormatEXT");
	if (p) {
		glVertexArrayVertexAttribLFormatEXT = (PFNGLVERTEXARRAYVERTEXATTRIBLFORMATEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexArrayVertexAttribBindingEXT");
	if (p) {
		glVertexArrayVertexAttribBindingEXT = (PFNGLVERTEXARRAYVERTEXATTRIBBINDINGEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexArrayVertexBindingDivisorEXT");
	if (p) {
		glVertexArrayVertexBindingDivisorEXT = (PFNGLVERTEXARRAYVERTEXBINDINGDIVISOREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFramebufferParameteri");
	if (p) {
		glFramebufferParameteri = (PFNGLFRAMEBUFFERPARAMETERIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetFramebufferParameteriv");
	if (p) {
		glGetFramebufferParameteriv = (PFNGLGETFRAMEBUFFERPARAMETERIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNamedFramebufferParameteriEXT");
	if (p) {
		glNamedFramebufferParameteriEXT = (PFNGLNAMEDFRAMEBUFFERPARAMETERIEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetNamedFramebufferParameterivEXT");
	if (p) {
		glGetNamedFramebufferParameterivEXT = (PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetInternalformati64v");
	if (p) {
		glGetInternalformati64v = (PFNGLGETINTERNALFORMATI64VPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glInvalidateTexSubImage");
	if (p) {
		glInvalidateTexSubImage = (PFNGLINVALIDATETEXSUBIMAGEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glInvalidateTexImage");
	if (p) {
		glInvalidateTexImage = (PFNGLINVALIDATETEXIMAGEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glInvalidateBufferSubData");
	if (p) {
		glInvalidateBufferSubData = (PFNGLINVALIDATEBUFFERSUBDATAPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glInvalidateBufferData");
	if (p) {
		glInvalidateBufferData = (PFNGLINVALIDATEBUFFERDATAPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glInvalidateFramebuffer");
	if (p) {
		glInvalidateFramebuffer = (PFNGLINVALIDATEFRAMEBUFFERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glInvalidateSubFramebuffer");
	if (p) {
		glInvalidateSubFramebuffer = (PFNGLINVALIDATESUBFRAMEBUFFERPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiDrawArraysIndirect");
	if (p) {
		glMultiDrawArraysIndirect = (PFNGLMULTIDRAWARRAYSINDIRECTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiDrawElementsIndirect");
	if (p) {
		glMultiDrawElementsIndirect = (PFNGLMULTIDRAWELEMENTSINDIRECTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetProgramInterfaceiv");
	if (p) {
		glGetProgramInterfaceiv = (PFNGLGETPROGRAMINTERFACEIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetProgramResourceIndex");
	if (p) {
		glGetProgramResourceIndex = (PFNGLGETPROGRAMRESOURCEINDEXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetProgramResourceName");
	if (p) {
		glGetProgramResourceName = (PFNGLGETPROGRAMRESOURCENAMEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetProgramResourceiv");
	if (p) {
		glGetProgramResourceiv = (PFNGLGETPROGRAMRESOURCEIVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetProgramResourceLocation");
	if (p) {
		glGetProgramResourceLocation = (PFNGLGETPROGRAMRESOURCELOCATIONPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetProgramResourceLocationIndex");
	if (p) {
		glGetProgramResourceLocationIndex = (PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glShaderStorageBlockBinding");
	if (p) {
		glShaderStorageBlockBinding = (PFNGLSHADERSTORAGEBLOCKBINDINGPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexBufferRange");
	if (p) {
		glTexBufferRange = (PFNGLTEXBUFFERRANGEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTextureBufferRangeEXT");
	if (p) {
		glTextureBufferRangeEXT = (PFNGLTEXTUREBUFFERRANGEEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexStorage2DMultisample");
	if (p) {
		glTexStorage2DMultisample = (PFNGLTEXSTORAGE2DMULTISAMPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexStorage3DMultisample");
	if (p) {
		glTexStorage3DMultisample = (PFNGLTEXSTORAGE3DMULTISAMPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTextureStorage2DMultisampleEXT");
	if (p) {
		glTextureStorage2DMultisampleEXT = (PFNGLTEXTURESTORAGE2DMULTISAMPLEEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTextureStorage3DMultisampleEXT");
	if (p) {
		glTextureStorage3DMultisampleEXT = (PFNGLTEXTURESTORAGE3DMULTISAMPLEEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBlendColorEXT");
	if (p) {
		glBlendColorEXT = (PFNGLBLENDCOLOREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPolygonOffsetEXT");
	if (p) {
		glPolygonOffsetEXT = (PFNGLPOLYGONOFFSETEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexImage3DEXT");
	if (p) {
		glTexImage3DEXT = (PFNGLTEXIMAGE3DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexSubImage3DEXT");
	if (p) {
		glTexSubImage3DEXT = (PFNGLTEXSUBIMAGE3DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetTexFilterFuncSGIS");
	if (p) {
		glGetTexFilterFuncSGIS = (PFNGLGETTEXFILTERFUNCSGISPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexFilterFuncSGIS");
	if (p) {
		glTexFilterFuncSGIS = (PFNGLTEXFILTERFUNCSGISPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexSubImage1DEXT");
	if (p) {
		glTexSubImage1DEXT = (PFNGLTEXSUBIMAGE1DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexSubImage2DEXT");
	if (p) {
		glTexSubImage2DEXT = (PFNGLTEXSUBIMAGE2DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCopyTexImage1DEXT");
	if (p) {
		glCopyTexImage1DEXT = (PFNGLCOPYTEXIMAGE1DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCopyTexImage2DEXT");
	if (p) {
		glCopyTexImage2DEXT = (PFNGLCOPYTEXIMAGE2DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCopyTexSubImage1DEXT");
	if (p) {
		glCopyTexSubImage1DEXT = (PFNGLCOPYTEXSUBIMAGE1DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCopyTexSubImage2DEXT");
	if (p) {
		glCopyTexSubImage2DEXT = (PFNGLCOPYTEXSUBIMAGE2DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCopyTexSubImage3DEXT");
	if (p) {
		glCopyTexSubImage3DEXT = (PFNGLCOPYTEXSUBIMAGE3DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetHistogramEXT");
	if (p) {
		glGetHistogramEXT = (PFNGLGETHISTOGRAMEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetHistogramParameterfvEXT");
	if (p) {
		glGetHistogramParameterfvEXT = (PFNGLGETHISTOGRAMPARAMETERFVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetHistogramParameterivEXT");
	if (p) {
		glGetHistogramParameterivEXT = (PFNGLGETHISTOGRAMPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetMinmaxEXT");
	if (p) {
		glGetMinmaxEXT = (PFNGLGETMINMAXEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetMinmaxParameterfvEXT");
	if (p) {
		glGetMinmaxParameterfvEXT = (PFNGLGETMINMAXPARAMETERFVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetMinmaxParameterivEXT");
	if (p) {
		glGetMinmaxParameterivEXT = (PFNGLGETMINMAXPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glHistogramEXT");
	if (p) {
		glHistogramEXT = (PFNGLHISTOGRAMEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMinmaxEXT");
	if (p) {
		glMinmaxEXT = (PFNGLMINMAXEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glResetHistogramEXT");
	if (p) {
		glResetHistogramEXT = (PFNGLRESETHISTOGRAMEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glResetMinmaxEXT");
	if (p) {
		glResetMinmaxEXT = (PFNGLRESETMINMAXEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glConvolutionFilter1DEXT");
	if (p) {
		glConvolutionFilter1DEXT = (PFNGLCONVOLUTIONFILTER1DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glConvolutionFilter2DEXT");
	if (p) {
		glConvolutionFilter2DEXT = (PFNGLCONVOLUTIONFILTER2DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glConvolutionParameterfEXT");
	if (p) {
		glConvolutionParameterfEXT = (PFNGLCONVOLUTIONPARAMETERFEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glConvolutionParameterfvEXT");
	if (p) {
		glConvolutionParameterfvEXT = (PFNGLCONVOLUTIONPARAMETERFVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glConvolutionParameteriEXT");
	if (p) {
		glConvolutionParameteriEXT = (PFNGLCONVOLUTIONPARAMETERIEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glConvolutionParameterivEXT");
	if (p) {
		glConvolutionParameterivEXT = (PFNGLCONVOLUTIONPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCopyConvolutionFilter1DEXT");
	if (p) {
		glCopyConvolutionFilter1DEXT = (PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCopyConvolutionFilter2DEXT");
	if (p) {
		glCopyConvolutionFilter2DEXT = (PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetConvolutionFilterEXT");
	if (p) {
		glGetConvolutionFilterEXT = (PFNGLGETCONVOLUTIONFILTEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetConvolutionParameterfvEXT");
	if (p) {
		glGetConvolutionParameterfvEXT = (PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetConvolutionParameterivEXT");
	if (p) {
		glGetConvolutionParameterivEXT = (PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetSeparableFilterEXT");
	if (p) {
		glGetSeparableFilterEXT = (PFNGLGETSEPARABLEFILTEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSeparableFilter2DEXT");
	if (p) {
		glSeparableFilter2DEXT = (PFNGLSEPARABLEFILTER2DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glColorTableSGI");
	if (p) {
		glColorTableSGI = (PFNGLCOLORTABLESGIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glColorTableParameterfvSGI");
	if (p) {
		glColorTableParameterfvSGI = (PFNGLCOLORTABLEPARAMETERFVSGIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glColorTableParameterivSGI");
	if (p) {
		glColorTableParameterivSGI = (PFNGLCOLORTABLEPARAMETERIVSGIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCopyColorTableSGI");
	if (p) {
		glCopyColorTableSGI = (PFNGLCOPYCOLORTABLESGIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetColorTableSGI");
	if (p) {
		glGetColorTableSGI = (PFNGLGETCOLORTABLESGIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetColorTableParameterfvSGI");
	if (p) {
		glGetColorTableParameterfvSGI = (PFNGLGETCOLORTABLEPARAMETERFVSGIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetColorTableParameterivSGI");
	if (p) {
		glGetColorTableParameterivSGI = (PFNGLGETCOLORTABLEPARAMETERIVSGIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPixelTexGenSGIX");
	if (p) {
		glPixelTexGenSGIX = (PFNGLPIXELTEXGENSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPixelTexGenParameteriSGIS");
	if (p) {
		glPixelTexGenParameteriSGIS = (PFNGLPIXELTEXGENPARAMETERISGISPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPixelTexGenParameterivSGIS");
	if (p) {
		glPixelTexGenParameterivSGIS = (PFNGLPIXELTEXGENPARAMETERIVSGISPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPixelTexGenParameterfSGIS");
	if (p) {
		glPixelTexGenParameterfSGIS = (PFNGLPIXELTEXGENPARAMETERFSGISPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPixelTexGenParameterfvSGIS");
	if (p) {
		glPixelTexGenParameterfvSGIS = (PFNGLPIXELTEXGENPARAMETERFVSGISPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetPixelTexGenParameterivSGIS");
	if (p) {
		glGetPixelTexGenParameterivSGIS = (PFNGLGETPIXELTEXGENPARAMETERIVSGISPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetPixelTexGenParameterfvSGIS");
	if (p) {
		glGetPixelTexGenParameterfvSGIS = (PFNGLGETPIXELTEXGENPARAMETERFVSGISPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexImage4DSGIS");
	if (p) {
		glTexImage4DSGIS = (PFNGLTEXIMAGE4DSGISPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexSubImage4DSGIS");
	if (p) {
		glTexSubImage4DSGIS = (PFNGLTEXSUBIMAGE4DSGISPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glAreTexturesResidentEXT");
	if (p) {
		glAreTexturesResidentEXT = (PFNGLARETEXTURESRESIDENTEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindTextureEXT");
	if (p) {
		glBindTextureEXT = (PFNGLBINDTEXTUREEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDeleteTexturesEXT");
	if (p) {
		glDeleteTexturesEXT = (PFNGLDELETETEXTURESEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGenTexturesEXT");
	if (p) {
		glGenTexturesEXT = (PFNGLGENTEXTURESEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsTextureEXT");
	if (p) {
		glIsTextureEXT = (PFNGLISTEXTUREEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPrioritizeTexturesEXT");
	if (p) {
		glPrioritizeTexturesEXT = (PFNGLPRIORITIZETEXTURESEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDetailTexFuncSGIS");
	if (p) {
		glDetailTexFuncSGIS = (PFNGLDETAILTEXFUNCSGISPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetDetailTexFuncSGIS");
	if (p) {
		glGetDetailTexFuncSGIS = (PFNGLGETDETAILTEXFUNCSGISPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSharpenTexFuncSGIS");
	if (p) {
		glSharpenTexFuncSGIS = (PFNGLSHARPENTEXFUNCSGISPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetSharpenTexFuncSGIS");
	if (p) {
		glGetSharpenTexFuncSGIS = (PFNGLGETSHARPENTEXFUNCSGISPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSampleMaskSGIS");
	if (p) {
		glSampleMaskSGIS = (PFNGLSAMPLEMASKSGISPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSamplePatternSGIS");
	if (p) {
		glSamplePatternSGIS = (PFNGLSAMPLEPATTERNSGISPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glArrayElementEXT");
	if (p) {
		glArrayElementEXT = (PFNGLARRAYELEMENTEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glColorPointerEXT");
	if (p) {
		glColorPointerEXT = (PFNGLCOLORPOINTEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDrawArraysEXT");
	if (p) {
		glDrawArraysEXT = (PFNGLDRAWARRAYSEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glEdgeFlagPointerEXT");
	if (p) {
		glEdgeFlagPointerEXT = (PFNGLEDGEFLAGPOINTEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetPointervEXT");
	if (p) {
		glGetPointervEXT = (PFNGLGETPOINTERVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIndexPointerEXT");
	if (p) {
		glIndexPointerEXT = (PFNGLINDEXPOINTEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNormalPointerEXT");
	if (p) {
		glNormalPointerEXT = (PFNGLNORMALPOINTEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexCoordPointerEXT");
	if (p) {
		glTexCoordPointerEXT = (PFNGLTEXCOORDPOINTEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexPointerEXT");
	if (p) {
		glVertexPointerEXT = (PFNGLVERTEXPOINTEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBlendEquationEXT");
	if (p) {
		glBlendEquationEXT = (PFNGLBLENDEQUATIONEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSpriteParameterfSGIX");
	if (p) {
		glSpriteParameterfSGIX = (PFNGLSPRITEPARAMETERFSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSpriteParameterfvSGIX");
	if (p) {
		glSpriteParameterfvSGIX = (PFNGLSPRITEPARAMETERFVSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSpriteParameteriSGIX");
	if (p) {
		glSpriteParameteriSGIX = (PFNGLSPRITEPARAMETERISGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSpriteParameterivSGIX");
	if (p) {
		glSpriteParameterivSGIX = (PFNGLSPRITEPARAMETERIVSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPointParameterfEXT");
	if (p) {
		glPointParameterfEXT = (PFNGLPOINTPARAMETERFEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPointParameterfvEXT");
	if (p) {
		glPointParameterfvEXT = (PFNGLPOINTPARAMETERFVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPointParameterfSGIS");
	if (p) {
		glPointParameterfSGIS = (PFNGLPOINTPARAMETERFSGISPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPointParameterfvSGIS");
	if (p) {
		glPointParameterfvSGIS = (PFNGLPOINTPARAMETERFVSGISPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetInstrumentsSGIX");
	if (p) {
		glGetInstrumentsSGIX = (PFNGLGETINSTRUMENTSSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glInstrumentsBufferSGIX");
	if (p) {
		glInstrumentsBufferSGIX = (PFNGLINSTRUMENTSBUFFERSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPollInstrumentsSGIX");
	if (p) {
		glPollInstrumentsSGIX = (PFNGLPOLLINSTRUMENTSSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glReadInstrumentsSGIX");
	if (p) {
		glReadInstrumentsSGIX = (PFNGLREADINSTRUMENTSSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glStartInstrumentsSGIX");
	if (p) {
		glStartInstrumentsSGIX = (PFNGLSTARTINSTRUMENTSSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glStopInstrumentsSGIX");
	if (p) {
		glStopInstrumentsSGIX = (PFNGLSTOPINSTRUMENTSSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFrameZoomSGIX");
	if (p) {
		glFrameZoomSGIX = (PFNGLFRAMEZOOMSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTagSampleBufferSGIX");
	if (p) {
		glTagSampleBufferSGIX = (PFNGLTAGSAMPLEBUFFERSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDeformationMap3dSGIX");
	if (p) {
		glDeformationMap3dSGIX = (PFNGLDEFORMATIONMAP3DSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDeformationMap3fSGIX");
	if (p) {
		glDeformationMap3fSGIX = (PFNGLDEFORMATIONMAP3FSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDeformSGIX");
	if (p) {
		glDeformSGIX = (PFNGLDEFORMSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glLoadIdentityDeformationMapSGIX");
	if (p) {
		glLoadIdentityDeformationMapSGIX = (PFNGLLOADIDENTITYDEFORMATIONMAPSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glReferencePlaneSGIX");
	if (p) {
		glReferencePlaneSGIX = (PFNGLREFERENCEPLANESGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFlushRasterSGIX");
	if (p) {
		glFlushRasterSGIX = (PFNGLFLUSHRASTERSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFogFuncSGIS");
	if (p) {
		glFogFuncSGIS = (PFNGLFOGFUNCSGISPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetFogFuncSGIS");
	if (p) {
		glGetFogFuncSGIS = (PFNGLGETFOGFUNCSGISPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glImageTransformParameteriHP");
	if (p) {
		glImageTransformParameteriHP = (PFNGLIMAGETRANSFORMPARAMETERIHPPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glImageTransformParameterfHP");
	if (p) {
		glImageTransformParameterfHP = (PFNGLIMAGETRANSFORMPARAMETERFHPPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glImageTransformParameterivHP");
	if (p) {
		glImageTransformParameterivHP = (PFNGLIMAGETRANSFORMPARAMETERIVHPPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glImageTransformParameterfvHP");
	if (p) {
		glImageTransformParameterfvHP = (PFNGLIMAGETRANSFORMPARAMETERFVHPPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetImageTransformParameterivHP");
	if (p) {
		glGetImageTransformParameterivHP = (PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetImageTransformParameterfvHP");
	if (p) {
		glGetImageTransformParameterfvHP = (PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glColorSubTableEXT");
	if (p) {
		glColorSubTableEXT = (PFNGLCOLORSUBTABLEEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCopyColorSubTableEXT");
	if (p) {
		glCopyColorSubTableEXT = (PFNGLCOPYCOLORSUBTABLEEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glHintPGI");
	if (p) {
		glHintPGI = (PFNGLHINTPGIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glColorTableEXT");
	if (p) {
		glColorTableEXT = (PFNGLCOLORTABLEEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetColorTableEXT");
	if (p) {
		glGetColorTableEXT = (PFNGLGETCOLORTABLEEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetColorTableParameterivEXT");
	if (p) {
		glGetColorTableParameterivEXT = (PFNGLGETCOLORTABLEPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetColorTableParameterfvEXT");
	if (p) {
		glGetColorTableParameterfvEXT = (PFNGLGETCOLORTABLEPARAMETERFVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetListParameterfvSGIX");
	if (p) {
		glGetListParameterfvSGIX = (PFNGLGETLISTPARAMETERFVSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetListParameterivSGIX");
	if (p) {
		glGetListParameterivSGIX = (PFNGLGETLISTPARAMETERIVSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glListParameterfSGIX");
	if (p) {
		glListParameterfSGIX = (PFNGLLISTPARAMETERFSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glListParameterfvSGIX");
	if (p) {
		glListParameterfvSGIX = (PFNGLLISTPARAMETERFVSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glListParameteriSGIX");
	if (p) {
		glListParameteriSGIX = (PFNGLLISTPARAMETERISGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glListParameterivSGIX");
	if (p) {
		glListParameterivSGIX = (PFNGLLISTPARAMETERIVSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIndexMaterialEXT");
	if (p) {
		glIndexMaterialEXT = (PFNGLINDEXMATERIALEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIndexFuncEXT");
	if (p) {
		glIndexFuncEXT = (PFNGLINDEXFUNCEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glLockArraysEXT");
	if (p) {
		glLockArraysEXT = (PFNGLLOCKARRAYSEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUnlockArraysEXT");
	if (p) {
		glUnlockArraysEXT = (PFNGLUNLOCKARRAYSEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCullParameterdvEXT");
	if (p) {
		glCullParameterdvEXT = (PFNGLCULLPARAMETERDVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCullParameterfvEXT");
	if (p) {
		glCullParameterfvEXT = (PFNGLCULLPARAMETERFVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFragmentColorMaterialSGIX");
	if (p) {
		glFragmentColorMaterialSGIX = (PFNGLFRAGMENTCOLORMATERIALSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFragmentLightfSGIX");
	if (p) {
		glFragmentLightfSGIX = (PFNGLFRAGMENTLIGHTFSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFragmentLightfvSGIX");
	if (p) {
		glFragmentLightfvSGIX = (PFNGLFRAGMENTLIGHTFVSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFragmentLightiSGIX");
	if (p) {
		glFragmentLightiSGIX = (PFNGLFRAGMENTLIGHTISGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFragmentLightivSGIX");
	if (p) {
		glFragmentLightivSGIX = (PFNGLFRAGMENTLIGHTIVSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFragmentLightModelfSGIX");
	if (p) {
		glFragmentLightModelfSGIX = (PFNGLFRAGMENTLIGHTMODELFSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFragmentLightModelfvSGIX");
	if (p) {
		glFragmentLightModelfvSGIX = (PFNGLFRAGMENTLIGHTMODELFVSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFragmentLightModeliSGIX");
	if (p) {
		glFragmentLightModeliSGIX = (PFNGLFRAGMENTLIGHTMODELISGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFragmentLightModelivSGIX");
	if (p) {
		glFragmentLightModelivSGIX = (PFNGLFRAGMENTLIGHTMODELIVSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFragmentMaterialfSGIX");
	if (p) {
		glFragmentMaterialfSGIX = (PFNGLFRAGMENTMATERIALFSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFragmentMaterialfvSGIX");
	if (p) {
		glFragmentMaterialfvSGIX = (PFNGLFRAGMENTMATERIALFVSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFragmentMaterialiSGIX");
	if (p) {
		glFragmentMaterialiSGIX = (PFNGLFRAGMENTMATERIALISGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFragmentMaterialivSGIX");
	if (p) {
		glFragmentMaterialivSGIX = (PFNGLFRAGMENTMATERIALIVSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetFragmentLightfvSGIX");
	if (p) {
		glGetFragmentLightfvSGIX = (PFNGLGETFRAGMENTLIGHTFVSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetFragmentLightivSGIX");
	if (p) {
		glGetFragmentLightivSGIX = (PFNGLGETFRAGMENTLIGHTIVSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetFragmentMaterialfvSGIX");
	if (p) {
		glGetFragmentMaterialfvSGIX = (PFNGLGETFRAGMENTMATERIALFVSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetFragmentMaterialivSGIX");
	if (p) {
		glGetFragmentMaterialivSGIX = (PFNGLGETFRAGMENTMATERIALIVSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glLightEnviSGIX");
	if (p) {
		glLightEnviSGIX = (PFNGLLIGHTENVISGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDrawRangeElementsEXT");
	if (p) {
		glDrawRangeElementsEXT = (PFNGLDRAWRANGEELEMENTSEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glApplyTextureEXT");
	if (p) {
		glApplyTextureEXT = (PFNGLAPPLYTEXTUREEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTextureLightEXT");
	if (p) {
		glTextureLightEXT = (PFNGLTEXTURELIGHTEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTextureMaterialEXT");
	if (p) {
		glTextureMaterialEXT = (PFNGLTEXTUREMATERIALEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glAsyncMarkerSGIX");
	if (p) {
		glAsyncMarkerSGIX = (PFNGLASYNCMARKERSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFinishAsyncSGIX");
	if (p) {
		glFinishAsyncSGIX = (PFNGLFINISHASYNCSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPollAsyncSGIX");
	if (p) {
		glPollAsyncSGIX = (PFNGLPOLLASYNCSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGenAsyncMarkersSGIX");
	if (p) {
		glGenAsyncMarkersSGIX = (PFNGLGENASYNCMARKERSSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDeleteAsyncMarkersSGIX");
	if (p) {
		glDeleteAsyncMarkersSGIX = (PFNGLDELETEASYNCMARKERSSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsAsyncMarkerSGIX");
	if (p) {
		glIsAsyncMarkerSGIX = (PFNGLISASYNCMARKERSGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexPointervINTEL");
	if (p) {
		glVertexPointervINTEL = (PFNGLVERTEXPOINTERVINTELPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNormalPointervINTEL");
	if (p) {
		glNormalPointervINTEL = (PFNGLNORMALPOINTERVINTELPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glColorPointervINTEL");
	if (p) {
		glColorPointervINTEL = (PFNGLCOLORPOINTERVINTELPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexCoordPointervINTEL");
	if (p) {
		glTexCoordPointervINTEL = (PFNGLTEXCOORDPOINTERVINTELPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPixelTransformParameteriEXT");
	if (p) {
		glPixelTransformParameteriEXT = (PFNGLPIXELTRANSFORMPARAMETERIEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPixelTransformParameterfEXT");
	if (p) {
		glPixelTransformParameterfEXT = (PFNGLPIXELTRANSFORMPARAMETERFEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPixelTransformParameterivEXT");
	if (p) {
		glPixelTransformParameterivEXT = (PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPixelTransformParameterfvEXT");
	if (p) {
		glPixelTransformParameterfvEXT = (PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetPixelTransformParameterivEXT");
	if (p) {
		glGetPixelTransformParameterivEXT = (PFNGLGETPIXELTRANSFORMPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetPixelTransformParameterfvEXT");
	if (p) {
		glGetPixelTransformParameterfvEXT = (PFNGLGETPIXELTRANSFORMPARAMETERFVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColor3bEXT");
	if (p) {
		glSecondaryColor3bEXT = (PFNGLSECONDARYCOLOR3BEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColor3bvEXT");
	if (p) {
		glSecondaryColor3bvEXT = (PFNGLSECONDARYCOLOR3BVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColor3dEXT");
	if (p) {
		glSecondaryColor3dEXT = (PFNGLSECONDARYCOLOR3DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColor3dvEXT");
	if (p) {
		glSecondaryColor3dvEXT = (PFNGLSECONDARYCOLOR3DVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColor3fEXT");
	if (p) {
		glSecondaryColor3fEXT = (PFNGLSECONDARYCOLOR3FEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColor3fvEXT");
	if (p) {
		glSecondaryColor3fvEXT = (PFNGLSECONDARYCOLOR3FVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColor3iEXT");
	if (p) {
		glSecondaryColor3iEXT = (PFNGLSECONDARYCOLOR3IEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColor3ivEXT");
	if (p) {
		glSecondaryColor3ivEXT = (PFNGLSECONDARYCOLOR3IVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColor3sEXT");
	if (p) {
		glSecondaryColor3sEXT = (PFNGLSECONDARYCOLOR3SEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColor3svEXT");
	if (p) {
		glSecondaryColor3svEXT = (PFNGLSECONDARYCOLOR3SVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColor3ubEXT");
	if (p) {
		glSecondaryColor3ubEXT = (PFNGLSECONDARYCOLOR3UBEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColor3ubvEXT");
	if (p) {
		glSecondaryColor3ubvEXT = (PFNGLSECONDARYCOLOR3UBVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColor3uiEXT");
	if (p) {
		glSecondaryColor3uiEXT = (PFNGLSECONDARYCOLOR3UIEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColor3uivEXT");
	if (p) {
		glSecondaryColor3uivEXT = (PFNGLSECONDARYCOLOR3UIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColor3usEXT");
	if (p) {
		glSecondaryColor3usEXT = (PFNGLSECONDARYCOLOR3USEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColor3usvEXT");
	if (p) {
		glSecondaryColor3usvEXT = (PFNGLSECONDARYCOLOR3USVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColorPointerEXT");
	if (p) {
		glSecondaryColorPointerEXT = (PFNGLSECONDARYCOLORPOINTEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTextureNormalEXT");
	if (p) {
		glTextureNormalEXT = (PFNGLTEXTURENORMALEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiDrawArraysEXT");
	if (p) {
		glMultiDrawArraysEXT = (PFNGLMULTIDRAWARRAYSEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiDrawElementsEXT");
	if (p) {
		glMultiDrawElementsEXT = (PFNGLMULTIDRAWELEMENTSEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFogCoordfEXT");
	if (p) {
		glFogCoordfEXT = (PFNGLFOGCOORDFEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFogCoordfvEXT");
	if (p) {
		glFogCoordfvEXT = (PFNGLFOGCOORDFVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFogCoorddEXT");
	if (p) {
		glFogCoorddEXT = (PFNGLFOGCOORDDEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFogCoorddvEXT");
	if (p) {
		glFogCoorddvEXT = (PFNGLFOGCOORDDVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFogCoordPointerEXT");
	if (p) {
		glFogCoordPointerEXT = (PFNGLFOGCOORDPOINTEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTangent3bEXT");
	if (p) {
		glTangent3bEXT = (PFNGLTANGENT3BEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTangent3bvEXT");
	if (p) {
		glTangent3bvEXT = (PFNGLTANGENT3BVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTangent3dEXT");
	if (p) {
		glTangent3dEXT = (PFNGLTANGENT3DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTangent3dvEXT");
	if (p) {
		glTangent3dvEXT = (PFNGLTANGENT3DVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTangent3fEXT");
	if (p) {
		glTangent3fEXT = (PFNGLTANGENT3FEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTangent3fvEXT");
	if (p) {
		glTangent3fvEXT = (PFNGLTANGENT3FVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTangent3iEXT");
	if (p) {
		glTangent3iEXT = (PFNGLTANGENT3IEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTangent3ivEXT");
	if (p) {
		glTangent3ivEXT = (PFNGLTANGENT3IVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTangent3sEXT");
	if (p) {
		glTangent3sEXT = (PFNGLTANGENT3SEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTangent3svEXT");
	if (p) {
		glTangent3svEXT = (PFNGLTANGENT3SVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBinormal3bEXT");
	if (p) {
		glBinormal3bEXT = (PFNGLBINORMAL3BEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBinormal3bvEXT");
	if (p) {
		glBinormal3bvEXT = (PFNGLBINORMAL3BVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBinormal3dEXT");
	if (p) {
		glBinormal3dEXT = (PFNGLBINORMAL3DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBinormal3dvEXT");
	if (p) {
		glBinormal3dvEXT = (PFNGLBINORMAL3DVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBinormal3fEXT");
	if (p) {
		glBinormal3fEXT = (PFNGLBINORMAL3FEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBinormal3fvEXT");
	if (p) {
		glBinormal3fvEXT = (PFNGLBINORMAL3FVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBinormal3iEXT");
	if (p) {
		glBinormal3iEXT = (PFNGLBINORMAL3IEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBinormal3ivEXT");
	if (p) {
		glBinormal3ivEXT = (PFNGLBINORMAL3IVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBinormal3sEXT");
	if (p) {
		glBinormal3sEXT = (PFNGLBINORMAL3SEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBinormal3svEXT");
	if (p) {
		glBinormal3svEXT = (PFNGLBINORMAL3SVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTangentPointerEXT");
	if (p) {
		glTangentPointerEXT = (PFNGLTANGENTPOINTEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBinormalPointerEXT");
	if (p) {
		glBinormalPointerEXT = (PFNGLBINORMALPOINTEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFinishTextureSUNX");
	if (p) {
		glFinishTextureSUNX = (PFNGLFINISHTEXTURESUNXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGlobalAlphaFactorbSUN");
	if (p) {
		glGlobalAlphaFactorbSUN = (PFNGLGLOBALALPHAFACTORBSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGlobalAlphaFactorsSUN");
	if (p) {
		glGlobalAlphaFactorsSUN = (PFNGLGLOBALALPHAFACTORSSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGlobalAlphaFactoriSUN");
	if (p) {
		glGlobalAlphaFactoriSUN = (PFNGLGLOBALALPHAFACTORISUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGlobalAlphaFactorfSUN");
	if (p) {
		glGlobalAlphaFactorfSUN = (PFNGLGLOBALALPHAFACTORFSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGlobalAlphaFactordSUN");
	if (p) {
		glGlobalAlphaFactordSUN = (PFNGLGLOBALALPHAFACTORDSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGlobalAlphaFactorubSUN");
	if (p) {
		glGlobalAlphaFactorubSUN = (PFNGLGLOBALALPHAFACTORUBSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGlobalAlphaFactorusSUN");
	if (p) {
		glGlobalAlphaFactorusSUN = (PFNGLGLOBALALPHAFACTORUSSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGlobalAlphaFactoruiSUN");
	if (p) {
		glGlobalAlphaFactoruiSUN = (PFNGLGLOBALALPHAFACTORUISUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glReplacementCodeuiSUN");
	if (p) {
		glReplacementCodeuiSUN = (PFNGLREPLACEMENTCODEUISUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glReplacementCodeusSUN");
	if (p) {
		glReplacementCodeusSUN = (PFNGLREPLACEMENTCODEUSSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glReplacementCodeubSUN");
	if (p) {
		glReplacementCodeubSUN = (PFNGLREPLACEMENTCODEUBSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glReplacementCodeuivSUN");
	if (p) {
		glReplacementCodeuivSUN = (PFNGLREPLACEMENTCODEUIVSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glReplacementCodeusvSUN");
	if (p) {
		glReplacementCodeusvSUN = (PFNGLREPLACEMENTCODEUSVSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glReplacementCodeubvSUN");
	if (p) {
		glReplacementCodeubvSUN = (PFNGLREPLACEMENTCODEUBVSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glReplacementCodePointerSUN");
	if (p) {
		glReplacementCodePointerSUN = (PFNGLREPLACEMENTCODEPOINTERSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glColor4ubVertex2fSUN");
	if (p) {
		glColor4ubVertex2fSUN = (PFNGLCOLOR4UBVERTEX2FSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glColor4ubVertex2fvSUN");
	if (p) {
		glColor4ubVertex2fvSUN = (PFNGLCOLOR4UBVERTEX2FVSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glColor4ubVertex3fSUN");
	if (p) {
		glColor4ubVertex3fSUN = (PFNGLCOLOR4UBVERTEX3FSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glColor4ubVertex3fvSUN");
	if (p) {
		glColor4ubVertex3fvSUN = (PFNGLCOLOR4UBVERTEX3FVSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glColor3fVertex3fSUN");
	if (p) {
		glColor3fVertex3fSUN = (PFNGLCOLOR3FVERTEX3FSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glColor3fVertex3fvSUN");
	if (p) {
		glColor3fVertex3fvSUN = (PFNGLCOLOR3FVERTEX3FVSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNormal3fVertex3fSUN");
	if (p) {
		glNormal3fVertex3fSUN = (PFNGLNORMAL3FVERTEX3FSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNormal3fVertex3fvSUN");
	if (p) {
		glNormal3fVertex3fvSUN = (PFNGLNORMAL3FVERTEX3FVSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glColor4fNormal3fVertex3fSUN");
	if (p) {
		glColor4fNormal3fVertex3fSUN = (PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glColor4fNormal3fVertex3fvSUN");
	if (p) {
		glColor4fNormal3fVertex3fvSUN = (PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexCoord2fVertex3fSUN");
	if (p) {
		glTexCoord2fVertex3fSUN = (PFNGLTEXCOORD2FVERTEX3FSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexCoord2fVertex3fvSUN");
	if (p) {
		glTexCoord2fVertex3fvSUN = (PFNGLTEXCOORD2FVERTEX3FVSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexCoord4fVertex4fSUN");
	if (p) {
		glTexCoord4fVertex4fSUN = (PFNGLTEXCOORD4FVERTEX4FSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexCoord4fVertex4fvSUN");
	if (p) {
		glTexCoord4fVertex4fvSUN = (PFNGLTEXCOORD4FVERTEX4FVSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexCoord2fColor4ubVertex3fSUN");
	if (p) {
		glTexCoord2fColor4ubVertex3fSUN = (PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexCoord2fColor4ubVertex3fvSUN");
	if (p) {
		glTexCoord2fColor4ubVertex3fvSUN = (PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexCoord2fColor3fVertex3fSUN");
	if (p) {
		glTexCoord2fColor3fVertex3fSUN = (PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexCoord2fColor3fVertex3fvSUN");
	if (p) {
		glTexCoord2fColor3fVertex3fvSUN = (PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexCoord2fNormal3fVertex3fSUN");
	if (p) {
		glTexCoord2fNormal3fVertex3fSUN = (PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexCoord2fNormal3fVertex3fvSUN");
	if (p) {
		glTexCoord2fNormal3fVertex3fvSUN = (PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexCoord2fColor4fNormal3fVertex3fSUN");
	if (p) {
		glTexCoord2fColor4fNormal3fVertex3fSUN = (PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexCoord2fColor4fNormal3fVertex3fvSUN");
	if (p) {
		glTexCoord2fColor4fNormal3fVertex3fvSUN = (PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexCoord4fColor4fNormal3fVertex4fSUN");
	if (p) {
		glTexCoord4fColor4fNormal3fVertex4fSUN = (PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexCoord4fColor4fNormal3fVertex4fvSUN");
	if (p) {
		glTexCoord4fColor4fNormal3fVertex4fvSUN = (PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glReplacementCodeuiVertex3fSUN");
	if (p) {
		glReplacementCodeuiVertex3fSUN = (PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glReplacementCodeuiVertex3fvSUN");
	if (p) {
		glReplacementCodeuiVertex3fvSUN = (PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glReplacementCodeuiColor4ubVertex3fSUN");
	if (p) {
		glReplacementCodeuiColor4ubVertex3fSUN = (PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glReplacementCodeuiColor4ubVertex3fvSUN");
	if (p) {
		glReplacementCodeuiColor4ubVertex3fvSUN = (PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glReplacementCodeuiColor3fVertex3fSUN");
	if (p) {
		glReplacementCodeuiColor3fVertex3fSUN = (PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glReplacementCodeuiColor3fVertex3fvSUN");
	if (p) {
		glReplacementCodeuiColor3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glReplacementCodeuiNormal3fVertex3fSUN");
	if (p) {
		glReplacementCodeuiNormal3fVertex3fSUN = (PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glReplacementCodeuiNormal3fVertex3fvSUN");
	if (p) {
		glReplacementCodeuiNormal3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glReplacementCodeuiColor4fNormal3fVertex3fSUN");
	if (p) {
		glReplacementCodeuiColor4fNormal3fVertex3fSUN = (PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glReplacementCodeuiColor4fNormal3fVertex3fvSUN");
	if (p) {
		glReplacementCodeuiColor4fNormal3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glReplacementCodeuiTexCoord2fVertex3fSUN");
	if (p) {
		glReplacementCodeuiTexCoord2fVertex3fSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glReplacementCodeuiTexCoord2fVertex3fvSUN");
	if (p) {
		glReplacementCodeuiTexCoord2fVertex3fvSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN");
	if (p) {
		glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN");
	if (p) {
		glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN");
	if (p) {
		glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN");
	if (p) {
		glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBlendFuncSeparateEXT");
	if (p) {
		glBlendFuncSeparateEXT = (PFNGLBLENDFUNCSEPARATEEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBlendFuncSeparateINGR");
	if (p) {
		glBlendFuncSeparateINGR = (PFNGLBLENDFUNCSEPARATEINGRPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexWeightfEXT");
	if (p) {
		glVertexWeightfEXT = (PFNGLVERTEXWEIGHTFEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexWeightfvEXT");
	if (p) {
		glVertexWeightfvEXT = (PFNGLVERTEXWEIGHTFVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexWeightPointerEXT");
	if (p) {
		glVertexWeightPointerEXT = (PFNGLVERTEXWEIGHTPOINTEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFlushVertexArrayRangeNV");
	if (p) {
		glFlushVertexArrayRangeNV = (PFNGLFLUSHVERTEXARRAYRANGENVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexArrayRangeNV");
	if (p) {
		glVertexArrayRangeNV = (PFNGLVERTEXARRAYRANGENVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCombinerParameterfvNV");
	if (p) {
		glCombinerParameterfvNV = (PFNGLCOMBINERPARAMETERFVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCombinerParameterfNV");
	if (p) {
		glCombinerParameterfNV = (PFNGLCOMBINERPARAMETERFNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCombinerParameterivNV");
	if (p) {
		glCombinerParameterivNV = (PFNGLCOMBINERPARAMETERIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCombinerParameteriNV");
	if (p) {
		glCombinerParameteriNV = (PFNGLCOMBINERPARAMETERINVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCombinerInputNV");
	if (p) {
		glCombinerInputNV = (PFNGLCOMBINERINPUTNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCombinerOutputNV");
	if (p) {
		glCombinerOutputNV = (PFNGLCOMBINEROUTPUTNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFinalCombinerInputNV");
	if (p) {
		glFinalCombinerInputNV = (PFNGLFINALCOMBINERINPUTNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetCombinerInputParameterfvNV");
	if (p) {
		glGetCombinerInputParameterfvNV = (PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetCombinerInputParameterivNV");
	if (p) {
		glGetCombinerInputParameterivNV = (PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetCombinerOutputParameterfvNV");
	if (p) {
		glGetCombinerOutputParameterfvNV = (PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetCombinerOutputParameterivNV");
	if (p) {
		glGetCombinerOutputParameterivNV = (PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetFinalCombinerInputParameterfvNV");
	if (p) {
		glGetFinalCombinerInputParameterfvNV = (PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetFinalCombinerInputParameterivNV");
	if (p) {
		glGetFinalCombinerInputParameterivNV = (PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glResizeBuffersMESA");
	if (p) {
		glResizeBuffersMESA = (PFNGLRESIZEBUFFERSMESAPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos2dMESA");
	if (p) {
		glWindowPos2dMESA = (PFNGLWINDOWPOS2DMESAPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos2dvMESA");
	if (p) {
		glWindowPos2dvMESA = (PFNGLWINDOWPOS2DVMESAPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos2fMESA");
	if (p) {
		glWindowPos2fMESA = (PFNGLWINDOWPOS2FMESAPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos2fvMESA");
	if (p) {
		glWindowPos2fvMESA = (PFNGLWINDOWPOS2FVMESAPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos2iMESA");
	if (p) {
		glWindowPos2iMESA = (PFNGLWINDOWPOS2IMESAPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos2ivMESA");
	if (p) {
		glWindowPos2ivMESA = (PFNGLWINDOWPOS2IVMESAPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos2sMESA");
	if (p) {
		glWindowPos2sMESA = (PFNGLWINDOWPOS2SMESAPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos2svMESA");
	if (p) {
		glWindowPos2svMESA = (PFNGLWINDOWPOS2SVMESAPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos3dMESA");
	if (p) {
		glWindowPos3dMESA = (PFNGLWINDOWPOS3DMESAPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos3dvMESA");
	if (p) {
		glWindowPos3dvMESA = (PFNGLWINDOWPOS3DVMESAPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos3fMESA");
	if (p) {
		glWindowPos3fMESA = (PFNGLWINDOWPOS3FMESAPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos3fvMESA");
	if (p) {
		glWindowPos3fvMESA = (PFNGLWINDOWPOS3FVMESAPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos3iMESA");
	if (p) {
		glWindowPos3iMESA = (PFNGLWINDOWPOS3IMESAPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos3ivMESA");
	if (p) {
		glWindowPos3ivMESA = (PFNGLWINDOWPOS3IVMESAPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos3sMESA");
	if (p) {
		glWindowPos3sMESA = (PFNGLWINDOWPOS3SMESAPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos3svMESA");
	if (p) {
		glWindowPos3svMESA = (PFNGLWINDOWPOS3SVMESAPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos4dMESA");
	if (p) {
		glWindowPos4dMESA = (PFNGLWINDOWPOS4DMESAPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos4dvMESA");
	if (p) {
		glWindowPos4dvMESA = (PFNGLWINDOWPOS4DVMESAPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos4fMESA");
	if (p) {
		glWindowPos4fMESA = (PFNGLWINDOWPOS4FMESAPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos4fvMESA");
	if (p) {
		glWindowPos4fvMESA = (PFNGLWINDOWPOS4FVMESAPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos4iMESA");
	if (p) {
		glWindowPos4iMESA = (PFNGLWINDOWPOS4IMESAPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos4ivMESA");
	if (p) {
		glWindowPos4ivMESA = (PFNGLWINDOWPOS4IVMESAPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos4sMESA");
	if (p) {
		glWindowPos4sMESA = (PFNGLWINDOWPOS4SMESAPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWindowPos4svMESA");
	if (p) {
		glWindowPos4svMESA = (PFNGLWINDOWPOS4SVMESAPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiModeDrawArraysIBM");
	if (p) {
		glMultiModeDrawArraysIBM = (PFNGLMULTIMODEDRAWARRAYSIBMPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiModeDrawElementsIBM");
	if (p) {
		glMultiModeDrawElementsIBM = (PFNGLMULTIMODEDRAWELEMENTSIBMPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glColorPointerListIBM");
	if (p) {
		glColorPointerListIBM = (PFNGLCOLORPOINTERLISTIBMPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColorPointerListIBM");
	if (p) {
		glSecondaryColorPointerListIBM = (PFNGLSECONDARYCOLORPOINTERLISTIBMPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glEdgeFlagPointerListIBM");
	if (p) {
		glEdgeFlagPointerListIBM = (PFNGLEDGEFLAGPOINTERLISTIBMPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFogCoordPointerListIBM");
	if (p) {
		glFogCoordPointerListIBM = (PFNGLFOGCOORDPOINTERLISTIBMPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIndexPointerListIBM");
	if (p) {
		glIndexPointerListIBM = (PFNGLINDEXPOINTERLISTIBMPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNormalPointerListIBM");
	if (p) {
		glNormalPointerListIBM = (PFNGLNORMALPOINTERLISTIBMPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexCoordPointerListIBM");
	if (p) {
		glTexCoordPointerListIBM = (PFNGLTEXCOORDPOINTERLISTIBMPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexPointerListIBM");
	if (p) {
		glVertexPointerListIBM = (PFNGLVERTEXPOINTERLISTIBMPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTbufferMask3DFX");
	if (p) {
		glTbufferMask3DFX = (PFNGLTBUFFERMASK3DFXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSampleMaskEXT");
	if (p) {
		glSampleMaskEXT = (PFNGLSAMPLEMASKEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSamplePatternEXT");
	if (p) {
		glSamplePatternEXT = (PFNGLSAMPLEPATTERNEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTextureColorMaskSGIS");
	if (p) {
		glTextureColorMaskSGIS = (PFNGLTEXTURECOLORMASKSGISPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIglooInterfaceSGIX");
	if (p) {
		glIglooInterfaceSGIX = (PFNGLIGLOOINTERFACESGIXPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDeleteFencesNV");
	if (p) {
		glDeleteFencesNV = (PFNGLDELETEFENCESNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGenFencesNV");
	if (p) {
		glGenFencesNV = (PFNGLGENFENCESNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsFenceNV");
	if (p) {
		glIsFenceNV = (PFNGLISFENCENVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTestFenceNV");
	if (p) {
		glTestFenceNV = (PFNGLTESTFENCENVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetFenceivNV");
	if (p) {
		glGetFenceivNV = (PFNGLGETFENCEIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFinishFenceNV");
	if (p) {
		glFinishFenceNV = (PFNGLFINISHFENCENVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSetFenceNV");
	if (p) {
		glSetFenceNV = (PFNGLSETFENCENVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMapControlPointsNV");
	if (p) {
		glMapControlPointsNV = (PFNGLMAPCONTROLPOINTSNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMapParameterivNV");
	if (p) {
		glMapParameterivNV = (PFNGLMAPPARAMETERIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMapParameterfvNV");
	if (p) {
		glMapParameterfvNV = (PFNGLMAPPARAMETERFVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetMapControlPointsNV");
	if (p) {
		glGetMapControlPointsNV = (PFNGLGETMAPCONTROLPOINTSNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetMapParameterivNV");
	if (p) {
		glGetMapParameterivNV = (PFNGLGETMAPPARAMETERIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetMapParameterfvNV");
	if (p) {
		glGetMapParameterfvNV = (PFNGLGETMAPPARAMETERFVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetMapAttribParameterivNV");
	if (p) {
		glGetMapAttribParameterivNV = (PFNGLGETMAPATTRIBPARAMETERIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetMapAttribParameterfvNV");
	if (p) {
		glGetMapAttribParameterfvNV = (PFNGLGETMAPATTRIBPARAMETERFVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glEvalMapsNV");
	if (p) {
		glEvalMapsNV = (PFNGLEVALMAPSNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCombinerStageParameterfvNV");
	if (p) {
		glCombinerStageParameterfvNV = (PFNGLCOMBINERSTAGEPARAMETERFVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetCombinerStageParameterfvNV");
	if (p) {
		glGetCombinerStageParameterfvNV = (PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glAreProgramsResidentNV");
	if (p) {
		glAreProgramsResidentNV = (PFNGLAREPROGRAMSRESIDENTNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindProgramNV");
	if (p) {
		glBindProgramNV = (PFNGLBINDPROGRAMNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDeleteProgramsNV");
	if (p) {
		glDeleteProgramsNV = (PFNGLDELETEPROGRAMSNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glExecuteProgramNV");
	if (p) {
		glExecuteProgramNV = (PFNGLEXECUTEPROGRAMNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGenProgramsNV");
	if (p) {
		glGenProgramsNV = (PFNGLGENPROGRAMSNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetProgramParameterdvNV");
	if (p) {
		glGetProgramParameterdvNV = (PFNGLGETPROGRAMPARAMETERDVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetProgramParameterfvNV");
	if (p) {
		glGetProgramParameterfvNV = (PFNGLGETPROGRAMPARAMETERFVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetProgramivNV");
	if (p) {
		glGetProgramivNV = (PFNGLGETPROGRAMIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetProgramStringNV");
	if (p) {
		glGetProgramStringNV = (PFNGLGETPROGRAMSTRINGNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetTrackMatrixivNV");
	if (p) {
		glGetTrackMatrixivNV = (PFNGLGETTRACKMATRIXIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVertexAttribdvNV");
	if (p) {
		glGetVertexAttribdvNV = (PFNGLGETVERTEXATTRIBDVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVertexAttribfvNV");
	if (p) {
		glGetVertexAttribfvNV = (PFNGLGETVERTEXATTRIBFVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVertexAttribivNV");
	if (p) {
		glGetVertexAttribivNV = (PFNGLGETVERTEXATTRIBIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVertexAttribPointervNV");
	if (p) {
		glGetVertexAttribPointervNV = (PFNGLGETVERTEXATTRIBPOINTERVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsProgramNV");
	if (p) {
		glIsProgramNV = (PFNGLISPROGRAMNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glLoadProgramNV");
	if (p) {
		glLoadProgramNV = (PFNGLLOADPROGRAMNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramParameter4dNV");
	if (p) {
		glProgramParameter4dNV = (PFNGLPROGRAMPARAMETER4DNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramParameter4dvNV");
	if (p) {
		glProgramParameter4dvNV = (PFNGLPROGRAMPARAMETER4DVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramParameter4fNV");
	if (p) {
		glProgramParameter4fNV = (PFNGLPROGRAMPARAMETER4FNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramParameter4fvNV");
	if (p) {
		glProgramParameter4fvNV = (PFNGLPROGRAMPARAMETER4FVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramParameters4dvNV");
	if (p) {
		glProgramParameters4dvNV = (PFNGLPROGRAMPARAMETERS4DVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramParameters4fvNV");
	if (p) {
		glProgramParameters4fvNV = (PFNGLPROGRAMPARAMETERS4FVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glRequestResidentProgramsNV");
	if (p) {
		glRequestResidentProgramsNV = (PFNGLREQUESTRESIDENTPROGRAMSNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTrackMatrixNV");
	if (p) {
		glTrackMatrixNV = (PFNGLTRACKMATRIXNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribPointerNV");
	if (p) {
		glVertexAttribPointerNV = (PFNGLVERTEXATTRIBPOINTERNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib1dNV");
	if (p) {
		glVertexAttrib1dNV = (PFNGLVERTEXATTRIB1DNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib1dvNV");
	if (p) {
		glVertexAttrib1dvNV = (PFNGLVERTEXATTRIB1DVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib1fNV");
	if (p) {
		glVertexAttrib1fNV = (PFNGLVERTEXATTRIB1FNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib1fvNV");
	if (p) {
		glVertexAttrib1fvNV = (PFNGLVERTEXATTRIB1FVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib1sNV");
	if (p) {
		glVertexAttrib1sNV = (PFNGLVERTEXATTRIB1SNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib1svNV");
	if (p) {
		glVertexAttrib1svNV = (PFNGLVERTEXATTRIB1SVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib2dNV");
	if (p) {
		glVertexAttrib2dNV = (PFNGLVERTEXATTRIB2DNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib2dvNV");
	if (p) {
		glVertexAttrib2dvNV = (PFNGLVERTEXATTRIB2DVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib2fNV");
	if (p) {
		glVertexAttrib2fNV = (PFNGLVERTEXATTRIB2FNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib2fvNV");
	if (p) {
		glVertexAttrib2fvNV = (PFNGLVERTEXATTRIB2FVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib2sNV");
	if (p) {
		glVertexAttrib2sNV = (PFNGLVERTEXATTRIB2SNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib2svNV");
	if (p) {
		glVertexAttrib2svNV = (PFNGLVERTEXATTRIB2SVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib3dNV");
	if (p) {
		glVertexAttrib3dNV = (PFNGLVERTEXATTRIB3DNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib3dvNV");
	if (p) {
		glVertexAttrib3dvNV = (PFNGLVERTEXATTRIB3DVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib3fNV");
	if (p) {
		glVertexAttrib3fNV = (PFNGLVERTEXATTRIB3FNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib3fvNV");
	if (p) {
		glVertexAttrib3fvNV = (PFNGLVERTEXATTRIB3FVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib3sNV");
	if (p) {
		glVertexAttrib3sNV = (PFNGLVERTEXATTRIB3SNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib3svNV");
	if (p) {
		glVertexAttrib3svNV = (PFNGLVERTEXATTRIB3SVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4dNV");
	if (p) {
		glVertexAttrib4dNV = (PFNGLVERTEXATTRIB4DNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4dvNV");
	if (p) {
		glVertexAttrib4dvNV = (PFNGLVERTEXATTRIB4DVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4fNV");
	if (p) {
		glVertexAttrib4fNV = (PFNGLVERTEXATTRIB4FNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4fvNV");
	if (p) {
		glVertexAttrib4fvNV = (PFNGLVERTEXATTRIB4FVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4sNV");
	if (p) {
		glVertexAttrib4sNV = (PFNGLVERTEXATTRIB4SNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4svNV");
	if (p) {
		glVertexAttrib4svNV = (PFNGLVERTEXATTRIB4SVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4ubNV");
	if (p) {
		glVertexAttrib4ubNV = (PFNGLVERTEXATTRIB4UBNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4ubvNV");
	if (p) {
		glVertexAttrib4ubvNV = (PFNGLVERTEXATTRIB4UBVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribs1dvNV");
	if (p) {
		glVertexAttribs1dvNV = (PFNGLVERTEXATTRIBS1DVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribs1fvNV");
	if (p) {
		glVertexAttribs1fvNV = (PFNGLVERTEXATTRIBS1FVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribs1svNV");
	if (p) {
		glVertexAttribs1svNV = (PFNGLVERTEXATTRIBS1SVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribs2dvNV");
	if (p) {
		glVertexAttribs2dvNV = (PFNGLVERTEXATTRIBS2DVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribs2fvNV");
	if (p) {
		glVertexAttribs2fvNV = (PFNGLVERTEXATTRIBS2FVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribs2svNV");
	if (p) {
		glVertexAttribs2svNV = (PFNGLVERTEXATTRIBS2SVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribs3dvNV");
	if (p) {
		glVertexAttribs3dvNV = (PFNGLVERTEXATTRIBS3DVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribs3fvNV");
	if (p) {
		glVertexAttribs3fvNV = (PFNGLVERTEXATTRIBS3FVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribs3svNV");
	if (p) {
		glVertexAttribs3svNV = (PFNGLVERTEXATTRIBS3SVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribs4dvNV");
	if (p) {
		glVertexAttribs4dvNV = (PFNGLVERTEXATTRIBS4DVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribs4fvNV");
	if (p) {
		glVertexAttribs4fvNV = (PFNGLVERTEXATTRIBS4FVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribs4svNV");
	if (p) {
		glVertexAttribs4svNV = (PFNGLVERTEXATTRIBS4SVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribs4ubvNV");
	if (p) {
		glVertexAttribs4ubvNV = (PFNGLVERTEXATTRIBS4UBVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexBumpParameterivATI");
	if (p) {
		glTexBumpParameterivATI = (PFNGLTEXBUMPPARAMETERIVATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexBumpParameterfvATI");
	if (p) {
		glTexBumpParameterfvATI = (PFNGLTEXBUMPPARAMETERFVATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetTexBumpParameterivATI");
	if (p) {
		glGetTexBumpParameterivATI = (PFNGLGETTEXBUMPPARAMETERIVATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetTexBumpParameterfvATI");
	if (p) {
		glGetTexBumpParameterfvATI = (PFNGLGETTEXBUMPPARAMETERFVATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGenFragmentShadersATI");
	if (p) {
		glGenFragmentShadersATI = (PFNGLGENFRAGMENTSHADERSATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindFragmentShaderATI");
	if (p) {
		glBindFragmentShaderATI = (PFNGLBINDFRAGMENTSHADERATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDeleteFragmentShaderATI");
	if (p) {
		glDeleteFragmentShaderATI = (PFNGLDELETEFRAGMENTSHADERATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBeginFragmentShaderATI");
	if (p) {
		glBeginFragmentShaderATI = (PFNGLBEGINFRAGMENTSHADERATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glEndFragmentShaderATI");
	if (p) {
		glEndFragmentShaderATI = (PFNGLENDFRAGMENTSHADERATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPassTexCoordATI");
	if (p) {
		glPassTexCoordATI = (PFNGLPASSTEXCOORDATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSampleMapATI");
	if (p) {
		glSampleMapATI = (PFNGLSAMPLEMAPATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glColorFragmentOp1ATI");
	if (p) {
		glColorFragmentOp1ATI = (PFNGLCOLORFRAGMENTOP1ATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glColorFragmentOp2ATI");
	if (p) {
		glColorFragmentOp2ATI = (PFNGLCOLORFRAGMENTOP2ATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glColorFragmentOp3ATI");
	if (p) {
		glColorFragmentOp3ATI = (PFNGLCOLORFRAGMENTOP3ATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glAlphaFragmentOp1ATI");
	if (p) {
		glAlphaFragmentOp1ATI = (PFNGLALPHAFRAGMENTOP1ATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glAlphaFragmentOp2ATI");
	if (p) {
		glAlphaFragmentOp2ATI = (PFNGLALPHAFRAGMENTOP2ATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glAlphaFragmentOp3ATI");
	if (p) {
		glAlphaFragmentOp3ATI = (PFNGLALPHAFRAGMENTOP3ATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSetFragmentShaderConstantATI");
	if (p) {
		glSetFragmentShaderConstantATI = (PFNGLSETFRAGMENTSHADERCONSTANTATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPNTrianglesiATI");
	if (p) {
		glPNTrianglesiATI = (PFNGLPNTRIANGLESIATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPNTrianglesfATI");
	if (p) {
		glPNTrianglesfATI = (PFNGLPNTRIANGLESFATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNewObjectBufferATI");
	if (p) {
		glNewObjectBufferATI = (PFNGLNEWOBJECTBUFFERATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsObjectBufferATI");
	if (p) {
		glIsObjectBufferATI = (PFNGLISOBJECTBUFFERATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUpdateObjectBufferATI");
	if (p) {
		glUpdateObjectBufferATI = (PFNGLUPDATEOBJECTBUFFERATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetObjectBufferfvATI");
	if (p) {
		glGetObjectBufferfvATI = (PFNGLGETOBJECTBUFFERFVATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetObjectBufferivATI");
	if (p) {
		glGetObjectBufferivATI = (PFNGLGETOBJECTBUFFERIVATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFreeObjectBufferATI");
	if (p) {
		glFreeObjectBufferATI = (PFNGLFREEOBJECTBUFFERATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glArrayObjectATI");
	if (p) {
		glArrayObjectATI = (PFNGLARRAYOBJECTATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetArrayObjectfvATI");
	if (p) {
		glGetArrayObjectfvATI = (PFNGLGETARRAYOBJECTFVATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetArrayObjectivATI");
	if (p) {
		glGetArrayObjectivATI = (PFNGLGETARRAYOBJECTIVATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVariantArrayObjectATI");
	if (p) {
		glVariantArrayObjectATI = (PFNGLVARIANTARRAYOBJECTATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVariantArrayObjectfvATI");
	if (p) {
		glGetVariantArrayObjectfvATI = (PFNGLGETVARIANTARRAYOBJECTFVATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVariantArrayObjectivATI");
	if (p) {
		glGetVariantArrayObjectivATI = (PFNGLGETVARIANTARRAYOBJECTIVATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBeginVertexShaderEXT");
	if (p) {
		glBeginVertexShaderEXT = (PFNGLBEGINVERTEXSHADEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glEndVertexShaderEXT");
	if (p) {
		glEndVertexShaderEXT = (PFNGLENDVERTEXSHADEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindVertexShaderEXT");
	if (p) {
		glBindVertexShaderEXT = (PFNGLBINDVERTEXSHADEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGenVertexShadersEXT");
	if (p) {
		glGenVertexShadersEXT = (PFNGLGENVERTEXSHADERSEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDeleteVertexShaderEXT");
	if (p) {
		glDeleteVertexShaderEXT = (PFNGLDELETEVERTEXSHADEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glShaderOp1EXT");
	if (p) {
		glShaderOp1EXT = (PFNGLSHADEROP1EXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glShaderOp2EXT");
	if (p) {
		glShaderOp2EXT = (PFNGLSHADEROP2EXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glShaderOp3EXT");
	if (p) {
		glShaderOp3EXT = (PFNGLSHADEROP3EXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSwizzleEXT");
	if (p) {
		glSwizzleEXT = (PFNGLSWIZZLEEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWriteMaskEXT");
	if (p) {
		glWriteMaskEXT = (PFNGLWRITEMASKEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glInsertComponentEXT");
	if (p) {
		glInsertComponentEXT = (PFNGLINSERTCOMPONENTEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glExtractComponentEXT");
	if (p) {
		glExtractComponentEXT = (PFNGLEXTRACTCOMPONENTEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGenSymbolsEXT");
	if (p) {
		glGenSymbolsEXT = (PFNGLGENSYMBOLSEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSetInvariantEXT");
	if (p) {
		glSetInvariantEXT = (PFNGLSETINVARIANTEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSetLocalConstantEXT");
	if (p) {
		glSetLocalConstantEXT = (PFNGLSETLOCALCONSTANTEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVariantbvEXT");
	if (p) {
		glVariantbvEXT = (PFNGLVARIANTBVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVariantsvEXT");
	if (p) {
		glVariantsvEXT = (PFNGLVARIANTSVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVariantivEXT");
	if (p) {
		glVariantivEXT = (PFNGLVARIANTIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVariantfvEXT");
	if (p) {
		glVariantfvEXT = (PFNGLVARIANTFVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVariantdvEXT");
	if (p) {
		glVariantdvEXT = (PFNGLVARIANTDVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVariantubvEXT");
	if (p) {
		glVariantubvEXT = (PFNGLVARIANTUBVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVariantusvEXT");
	if (p) {
		glVariantusvEXT = (PFNGLVARIANTUSVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVariantuivEXT");
	if (p) {
		glVariantuivEXT = (PFNGLVARIANTUIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVariantPointerEXT");
	if (p) {
		glVariantPointerEXT = (PFNGLVARIANTPOINTEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glEnableVariantClientStateEXT");
	if (p) {
		glEnableVariantClientStateEXT = (PFNGLENABLEVARIANTCLIENTSTATEEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDisableVariantClientStateEXT");
	if (p) {
		glDisableVariantClientStateEXT = (PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindLightParameterEXT");
	if (p) {
		glBindLightParameterEXT = (PFNGLBINDLIGHTPARAMETEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindMaterialParameterEXT");
	if (p) {
		glBindMaterialParameterEXT = (PFNGLBINDMATERIALPARAMETEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindTexGenParameterEXT");
	if (p) {
		glBindTexGenParameterEXT = (PFNGLBINDTEXGENPARAMETEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindTextureUnitParameterEXT");
	if (p) {
		glBindTextureUnitParameterEXT = (PFNGLBINDTEXTUREUNITPARAMETEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindParameterEXT");
	if (p) {
		glBindParameterEXT = (PFNGLBINDPARAMETEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsVariantEnabledEXT");
	if (p) {
		glIsVariantEnabledEXT = (PFNGLISVARIANTENABLEDEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVariantBooleanvEXT");
	if (p) {
		glGetVariantBooleanvEXT = (PFNGLGETVARIANTBOOLEANVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVariantIntegervEXT");
	if (p) {
		glGetVariantIntegervEXT = (PFNGLGETVARIANTINTEGERVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVariantFloatvEXT");
	if (p) {
		glGetVariantFloatvEXT = (PFNGLGETVARIANTFLOATVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVariantPointervEXT");
	if (p) {
		glGetVariantPointervEXT = (PFNGLGETVARIANTPOINTERVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetInvariantBooleanvEXT");
	if (p) {
		glGetInvariantBooleanvEXT = (PFNGLGETINVARIANTBOOLEANVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetInvariantIntegervEXT");
	if (p) {
		glGetInvariantIntegervEXT = (PFNGLGETINVARIANTINTEGERVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetInvariantFloatvEXT");
	if (p) {
		glGetInvariantFloatvEXT = (PFNGLGETINVARIANTFLOATVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetLocalConstantBooleanvEXT");
	if (p) {
		glGetLocalConstantBooleanvEXT = (PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetLocalConstantIntegervEXT");
	if (p) {
		glGetLocalConstantIntegervEXT = (PFNGLGETLOCALCONSTANTINTEGERVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetLocalConstantFloatvEXT");
	if (p) {
		glGetLocalConstantFloatvEXT = (PFNGLGETLOCALCONSTANTFLOATVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexStream1sATI");
	if (p) {
		glVertexStream1sATI = (PFNGLVERTEXSTREAM1SATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexStream1svATI");
	if (p) {
		glVertexStream1svATI = (PFNGLVERTEXSTREAM1SVATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexStream1iATI");
	if (p) {
		glVertexStream1iATI = (PFNGLVERTEXSTREAM1IATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexStream1ivATI");
	if (p) {
		glVertexStream1ivATI = (PFNGLVERTEXSTREAM1IVATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexStream1fATI");
	if (p) {
		glVertexStream1fATI = (PFNGLVERTEXSTREAM1FATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexStream1fvATI");
	if (p) {
		glVertexStream1fvATI = (PFNGLVERTEXSTREAM1FVATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexStream1dATI");
	if (p) {
		glVertexStream1dATI = (PFNGLVERTEXSTREAM1DATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexStream1dvATI");
	if (p) {
		glVertexStream1dvATI = (PFNGLVERTEXSTREAM1DVATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexStream2sATI");
	if (p) {
		glVertexStream2sATI = (PFNGLVERTEXSTREAM2SATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexStream2svATI");
	if (p) {
		glVertexStream2svATI = (PFNGLVERTEXSTREAM2SVATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexStream2iATI");
	if (p) {
		glVertexStream2iATI = (PFNGLVERTEXSTREAM2IATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexStream2ivATI");
	if (p) {
		glVertexStream2ivATI = (PFNGLVERTEXSTREAM2IVATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexStream2fATI");
	if (p) {
		glVertexStream2fATI = (PFNGLVERTEXSTREAM2FATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexStream2fvATI");
	if (p) {
		glVertexStream2fvATI = (PFNGLVERTEXSTREAM2FVATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexStream2dATI");
	if (p) {
		glVertexStream2dATI = (PFNGLVERTEXSTREAM2DATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexStream2dvATI");
	if (p) {
		glVertexStream2dvATI = (PFNGLVERTEXSTREAM2DVATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexStream3sATI");
	if (p) {
		glVertexStream3sATI = (PFNGLVERTEXSTREAM3SATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexStream3svATI");
	if (p) {
		glVertexStream3svATI = (PFNGLVERTEXSTREAM3SVATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexStream3iATI");
	if (p) {
		glVertexStream3iATI = (PFNGLVERTEXSTREAM3IATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexStream3ivATI");
	if (p) {
		glVertexStream3ivATI = (PFNGLVERTEXSTREAM3IVATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexStream3fATI");
	if (p) {
		glVertexStream3fATI = (PFNGLVERTEXSTREAM3FATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexStream3fvATI");
	if (p) {
		glVertexStream3fvATI = (PFNGLVERTEXSTREAM3FVATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexStream3dATI");
	if (p) {
		glVertexStream3dATI = (PFNGLVERTEXSTREAM3DATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexStream3dvATI");
	if (p) {
		glVertexStream3dvATI = (PFNGLVERTEXSTREAM3DVATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexStream4sATI");
	if (p) {
		glVertexStream4sATI = (PFNGLVERTEXSTREAM4SATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexStream4svATI");
	if (p) {
		glVertexStream4svATI = (PFNGLVERTEXSTREAM4SVATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexStream4iATI");
	if (p) {
		glVertexStream4iATI = (PFNGLVERTEXSTREAM4IATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexStream4ivATI");
	if (p) {
		glVertexStream4ivATI = (PFNGLVERTEXSTREAM4IVATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexStream4fATI");
	if (p) {
		glVertexStream4fATI = (PFNGLVERTEXSTREAM4FATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexStream4fvATI");
	if (p) {
		glVertexStream4fvATI = (PFNGLVERTEXSTREAM4FVATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexStream4dATI");
	if (p) {
		glVertexStream4dATI = (PFNGLVERTEXSTREAM4DATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexStream4dvATI");
	if (p) {
		glVertexStream4dvATI = (PFNGLVERTEXSTREAM4DVATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNormalStream3bATI");
	if (p) {
		glNormalStream3bATI = (PFNGLNORMALSTREAM3BATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNormalStream3bvATI");
	if (p) {
		glNormalStream3bvATI = (PFNGLNORMALSTREAM3BVATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNormalStream3sATI");
	if (p) {
		glNormalStream3sATI = (PFNGLNORMALSTREAM3SATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNormalStream3svATI");
	if (p) {
		glNormalStream3svATI = (PFNGLNORMALSTREAM3SVATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNormalStream3iATI");
	if (p) {
		glNormalStream3iATI = (PFNGLNORMALSTREAM3IATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNormalStream3ivATI");
	if (p) {
		glNormalStream3ivATI = (PFNGLNORMALSTREAM3IVATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNormalStream3fATI");
	if (p) {
		glNormalStream3fATI = (PFNGLNORMALSTREAM3FATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNormalStream3fvATI");
	if (p) {
		glNormalStream3fvATI = (PFNGLNORMALSTREAM3FVATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNormalStream3dATI");
	if (p) {
		glNormalStream3dATI = (PFNGLNORMALSTREAM3DATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNormalStream3dvATI");
	if (p) {
		glNormalStream3dvATI = (PFNGLNORMALSTREAM3DVATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glClientActiveVertexStreamATI");
	if (p) {
		glClientActiveVertexStreamATI = (PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexBlendEnviATI");
	if (p) {
		glVertexBlendEnviATI = (PFNGLVERTEXBLENDENVIATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexBlendEnvfATI");
	if (p) {
		glVertexBlendEnvfATI = (PFNGLVERTEXBLENDENVFATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glElementPointerATI");
	if (p) {
		glElementPointerATI = (PFNGLELEMENTPOINTERATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDrawElementArrayATI");
	if (p) {
		glDrawElementArrayATI = (PFNGLDRAWELEMENTARRAYATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDrawRangeElementArrayATI");
	if (p) {
		glDrawRangeElementArrayATI = (PFNGLDRAWRANGEELEMENTARRAYATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDrawMeshArraysSUN");
	if (p) {
		glDrawMeshArraysSUN = (PFNGLDRAWMESHARRAYSSUNPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGenOcclusionQueriesNV");
	if (p) {
		glGenOcclusionQueriesNV = (PFNGLGENOCCLUSIONQUERIESNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDeleteOcclusionQueriesNV");
	if (p) {
		glDeleteOcclusionQueriesNV = (PFNGLDELETEOCCLUSIONQUERIESNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsOcclusionQueryNV");
	if (p) {
		glIsOcclusionQueryNV = (PFNGLISOCCLUSIONQUERYNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBeginOcclusionQueryNV");
	if (p) {
		glBeginOcclusionQueryNV = (PFNGLBEGINOCCLUSIONQUERYNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glEndOcclusionQueryNV");
	if (p) {
		glEndOcclusionQueryNV = (PFNGLENDOCCLUSIONQUERYNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetOcclusionQueryivNV");
	if (p) {
		glGetOcclusionQueryivNV = (PFNGLGETOCCLUSIONQUERYIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetOcclusionQueryuivNV");
	if (p) {
		glGetOcclusionQueryuivNV = (PFNGLGETOCCLUSIONQUERYUIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPointParameteriNV");
	if (p) {
		glPointParameteriNV = (PFNGLPOINTPARAMETERINVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPointParameterivNV");
	if (p) {
		glPointParameterivNV = (PFNGLPOINTPARAMETERIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glActiveStencilFaceEXT");
	if (p) {
		glActiveStencilFaceEXT = (PFNGLACTIVESTENCILFACEEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glElementPointerAPPLE");
	if (p) {
		glElementPointerAPPLE = (PFNGLELEMENTPOINTERAPPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDrawElementArrayAPPLE");
	if (p) {
		glDrawElementArrayAPPLE = (PFNGLDRAWELEMENTARRAYAPPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDrawRangeElementArrayAPPLE");
	if (p) {
		glDrawRangeElementArrayAPPLE = (PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiDrawElementArrayAPPLE");
	if (p) {
		glMultiDrawElementArrayAPPLE = (PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiDrawRangeElementArrayAPPLE");
	if (p) {
		glMultiDrawRangeElementArrayAPPLE = (PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGenFencesAPPLE");
	if (p) {
		glGenFencesAPPLE = (PFNGLGENFENCESAPPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDeleteFencesAPPLE");
	if (p) {
		glDeleteFencesAPPLE = (PFNGLDELETEFENCESAPPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSetFenceAPPLE");
	if (p) {
		glSetFenceAPPLE = (PFNGLSETFENCEAPPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsFenceAPPLE");
	if (p) {
		glIsFenceAPPLE = (PFNGLISFENCEAPPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTestFenceAPPLE");
	if (p) {
		glTestFenceAPPLE = (PFNGLTESTFENCEAPPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFinishFenceAPPLE");
	if (p) {
		glFinishFenceAPPLE = (PFNGLFINISHFENCEAPPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTestObjectAPPLE");
	if (p) {
		glTestObjectAPPLE = (PFNGLTESTOBJECTAPPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFinishObjectAPPLE");
	if (p) {
		glFinishObjectAPPLE = (PFNGLFINISHOBJECTAPPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindVertexArrayAPPLE");
	if (p) {
		glBindVertexArrayAPPLE = (PFNGLBINDVERTEXARRAYAPPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDeleteVertexArraysAPPLE");
	if (p) {
		glDeleteVertexArraysAPPLE = (PFNGLDELETEVERTEXARRAYSAPPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGenVertexArraysAPPLE");
	if (p) {
		glGenVertexArraysAPPLE = (PFNGLGENVERTEXARRAYSAPPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsVertexArrayAPPLE");
	if (p) {
		glIsVertexArrayAPPLE = (PFNGLISVERTEXARRAYAPPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexArrayRangeAPPLE");
	if (p) {
		glVertexArrayRangeAPPLE = (PFNGLVERTEXARRAYRANGEAPPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFlushVertexArrayRangeAPPLE");
	if (p) {
		glFlushVertexArrayRangeAPPLE = (PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexArrayParameteriAPPLE");
	if (p) {
		glVertexArrayParameteriAPPLE = (PFNGLVERTEXARRAYPARAMETERIAPPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDrawBuffersATI");
	if (p) {
		glDrawBuffersATI = (PFNGLDRAWBUFFERSATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramNamedParameter4fNV");
	if (p) {
		glProgramNamedParameter4fNV = (PFNGLPROGRAMNAMEDPARAMETER4FNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramNamedParameter4dNV");
	if (p) {
		glProgramNamedParameter4dNV = (PFNGLPROGRAMNAMEDPARAMETER4DNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramNamedParameter4fvNV");
	if (p) {
		glProgramNamedParameter4fvNV = (PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramNamedParameter4dvNV");
	if (p) {
		glProgramNamedParameter4dvNV = (PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetProgramNamedParameterfvNV");
	if (p) {
		glGetProgramNamedParameterfvNV = (PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetProgramNamedParameterdvNV");
	if (p) {
		glGetProgramNamedParameterdvNV = (PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertex2hNV");
	if (p) {
		glVertex2hNV = (PFNGLVERTEX2HNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertex2hvNV");
	if (p) {
		glVertex2hvNV = (PFNGLVERTEX2HVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertex3hNV");
	if (p) {
		glVertex3hNV = (PFNGLVERTEX3HNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertex3hvNV");
	if (p) {
		glVertex3hvNV = (PFNGLVERTEX3HVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertex4hNV");
	if (p) {
		glVertex4hNV = (PFNGLVERTEX4HNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertex4hvNV");
	if (p) {
		glVertex4hvNV = (PFNGLVERTEX4HVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNormal3hNV");
	if (p) {
		glNormal3hNV = (PFNGLNORMAL3HNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNormal3hvNV");
	if (p) {
		glNormal3hvNV = (PFNGLNORMAL3HVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glColor3hNV");
	if (p) {
		glColor3hNV = (PFNGLCOLOR3HNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glColor3hvNV");
	if (p) {
		glColor3hvNV = (PFNGLCOLOR3HVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glColor4hNV");
	if (p) {
		glColor4hNV = (PFNGLCOLOR4HNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glColor4hvNV");
	if (p) {
		glColor4hvNV = (PFNGLCOLOR4HVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexCoord1hNV");
	if (p) {
		glTexCoord1hNV = (PFNGLTEXCOORD1HNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexCoord1hvNV");
	if (p) {
		glTexCoord1hvNV = (PFNGLTEXCOORD1HVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexCoord2hNV");
	if (p) {
		glTexCoord2hNV = (PFNGLTEXCOORD2HNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexCoord2hvNV");
	if (p) {
		glTexCoord2hvNV = (PFNGLTEXCOORD2HVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexCoord3hNV");
	if (p) {
		glTexCoord3hNV = (PFNGLTEXCOORD3HNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexCoord3hvNV");
	if (p) {
		glTexCoord3hvNV = (PFNGLTEXCOORD3HVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexCoord4hNV");
	if (p) {
		glTexCoord4hNV = (PFNGLTEXCOORD4HNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexCoord4hvNV");
	if (p) {
		glTexCoord4hvNV = (PFNGLTEXCOORD4HVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord1hNV");
	if (p) {
		glMultiTexCoord1hNV = (PFNGLMULTITEXCOORD1HNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord1hvNV");
	if (p) {
		glMultiTexCoord1hvNV = (PFNGLMULTITEXCOORD1HVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord2hNV");
	if (p) {
		glMultiTexCoord2hNV = (PFNGLMULTITEXCOORD2HNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord2hvNV");
	if (p) {
		glMultiTexCoord2hvNV = (PFNGLMULTITEXCOORD2HVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord3hNV");
	if (p) {
		glMultiTexCoord3hNV = (PFNGLMULTITEXCOORD3HNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord3hvNV");
	if (p) {
		glMultiTexCoord3hvNV = (PFNGLMULTITEXCOORD3HVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord4hNV");
	if (p) {
		glMultiTexCoord4hNV = (PFNGLMULTITEXCOORD4HNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoord4hvNV");
	if (p) {
		glMultiTexCoord4hvNV = (PFNGLMULTITEXCOORD4HVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFogCoordhNV");
	if (p) {
		glFogCoordhNV = (PFNGLFOGCOORDHNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFogCoordhvNV");
	if (p) {
		glFogCoordhvNV = (PFNGLFOGCOORDHVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColor3hNV");
	if (p) {
		glSecondaryColor3hNV = (PFNGLSECONDARYCOLOR3HNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColor3hvNV");
	if (p) {
		glSecondaryColor3hvNV = (PFNGLSECONDARYCOLOR3HVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexWeighthNV");
	if (p) {
		glVertexWeighthNV = (PFNGLVERTEXWEIGHTHNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexWeighthvNV");
	if (p) {
		glVertexWeighthvNV = (PFNGLVERTEXWEIGHTHVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib1hNV");
	if (p) {
		glVertexAttrib1hNV = (PFNGLVERTEXATTRIB1HNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib1hvNV");
	if (p) {
		glVertexAttrib1hvNV = (PFNGLVERTEXATTRIB1HVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib2hNV");
	if (p) {
		glVertexAttrib2hNV = (PFNGLVERTEXATTRIB2HNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib2hvNV");
	if (p) {
		glVertexAttrib2hvNV = (PFNGLVERTEXATTRIB2HVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib3hNV");
	if (p) {
		glVertexAttrib3hNV = (PFNGLVERTEXATTRIB3HNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib3hvNV");
	if (p) {
		glVertexAttrib3hvNV = (PFNGLVERTEXATTRIB3HVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4hNV");
	if (p) {
		glVertexAttrib4hNV = (PFNGLVERTEXATTRIB4HNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttrib4hvNV");
	if (p) {
		glVertexAttrib4hvNV = (PFNGLVERTEXATTRIB4HVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribs1hvNV");
	if (p) {
		glVertexAttribs1hvNV = (PFNGLVERTEXATTRIBS1HVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribs2hvNV");
	if (p) {
		glVertexAttribs2hvNV = (PFNGLVERTEXATTRIBS2HVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribs3hvNV");
	if (p) {
		glVertexAttribs3hvNV = (PFNGLVERTEXATTRIBS3HVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribs4hvNV");
	if (p) {
		glVertexAttribs4hvNV = (PFNGLVERTEXATTRIBS4HVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPixelDataRangeNV");
	if (p) {
		glPixelDataRangeNV = (PFNGLPIXELDATARANGENVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFlushPixelDataRangeNV");
	if (p) {
		glFlushPixelDataRangeNV = (PFNGLFLUSHPIXELDATARANGENVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPrimitiveRestartNV");
	if (p) {
		glPrimitiveRestartNV = (PFNGLPRIMITIVERESTARTNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPrimitiveRestartIndexNV");
	if (p) {
		glPrimitiveRestartIndexNV = (PFNGLPRIMITIVERESTARTINDEXNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMapObjectBufferATI");
	if (p) {
		glMapObjectBufferATI = (PFNGLMAPOBJECTBUFFERATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUnmapObjectBufferATI");
	if (p) {
		glUnmapObjectBufferATI = (PFNGLUNMAPOBJECTBUFFERATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glStencilOpSeparateATI");
	if (p) {
		glStencilOpSeparateATI = (PFNGLSTENCILOPSEPARATEATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glStencilFuncSeparateATI");
	if (p) {
		glStencilFuncSeparateATI = (PFNGLSTENCILFUNCSEPARATEATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribArrayObjectATI");
	if (p) {
		glVertexAttribArrayObjectATI = (PFNGLVERTEXATTRIBARRAYOBJECTATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVertexAttribArrayObjectfvATI");
	if (p) {
		glGetVertexAttribArrayObjectfvATI = (PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVertexAttribArrayObjectivATI");
	if (p) {
		glGetVertexAttribArrayObjectivATI = (PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDepthBoundsEXT");
	if (p) {
		glDepthBoundsEXT = (PFNGLDEPTHBOUNDSEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBlendEquationSeparateEXT");
	if (p) {
		glBlendEquationSeparateEXT = (PFNGLBLENDEQUATIONSEPARATEEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsRenderbufferEXT");
	if (p) {
		glIsRenderbufferEXT = (PFNGLISRENDERBUFFEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindRenderbufferEXT");
	if (p) {
		glBindRenderbufferEXT = (PFNGLBINDRENDERBUFFEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDeleteRenderbuffersEXT");
	if (p) {
		glDeleteRenderbuffersEXT = (PFNGLDELETERENDERBUFFERSEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGenRenderbuffersEXT");
	if (p) {
		glGenRenderbuffersEXT = (PFNGLGENRENDERBUFFERSEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glRenderbufferStorageEXT");
	if (p) {
		glRenderbufferStorageEXT = (PFNGLRENDERBUFFERSTORAGEEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetRenderbufferParameterivEXT");
	if (p) {
		glGetRenderbufferParameterivEXT = (PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsFramebufferEXT");
	if (p) {
		glIsFramebufferEXT = (PFNGLISFRAMEBUFFEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindFramebufferEXT");
	if (p) {
		glBindFramebufferEXT = (PFNGLBINDFRAMEBUFFEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDeleteFramebuffersEXT");
	if (p) {
		glDeleteFramebuffersEXT = (PFNGLDELETEFRAMEBUFFERSEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGenFramebuffersEXT");
	if (p) {
		glGenFramebuffersEXT = (PFNGLGENFRAMEBUFFERSEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCheckFramebufferStatusEXT");
	if (p) {
		glCheckFramebufferStatusEXT = (PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFramebufferTexture1DEXT");
	if (p) {
		glFramebufferTexture1DEXT = (PFNGLFRAMEBUFFERTEXTURE1DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFramebufferTexture2DEXT");
	if (p) {
		glFramebufferTexture2DEXT = (PFNGLFRAMEBUFFERTEXTURE2DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFramebufferTexture3DEXT");
	if (p) {
		glFramebufferTexture3DEXT = (PFNGLFRAMEBUFFERTEXTURE3DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFramebufferRenderbufferEXT");
	if (p) {
		glFramebufferRenderbufferEXT = (PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetFramebufferAttachmentParameterivEXT");
	if (p) {
		glGetFramebufferAttachmentParameterivEXT = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGenerateMipmapEXT");
	if (p) {
		glGenerateMipmapEXT = (PFNGLGENERATEMIPMAPEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glStringMarkerGREMEDY");
	if (p) {
		glStringMarkerGREMEDY = (PFNGLSTRINGMARKERGREMEDYPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glStencilClearTagEXT");
	if (p) {
		glStencilClearTagEXT = (PFNGLSTENCILCLEARTAGEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBlitFramebufferEXT");
	if (p) {
		glBlitFramebufferEXT = (PFNGLBLITFRAMEBUFFEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glRenderbufferStorageMultisampleEXT");
	if (p) {
		glRenderbufferStorageMultisampleEXT = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetQueryObjecti64vEXT");
	if (p) {
		glGetQueryObjecti64vEXT = (PFNGLGETQUERYOBJECTI64VEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetQueryObjectui64vEXT");
	if (p) {
		glGetQueryObjectui64vEXT = (PFNGLGETQUERYOBJECTUI64VEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramEnvParameters4fvEXT");
	if (p) {
		glProgramEnvParameters4fvEXT = (PFNGLPROGRAMENVPARAMETERS4FVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramLocalParameters4fvEXT");
	if (p) {
		glProgramLocalParameters4fvEXT = (PFNGLPROGRAMLOCALPARAMETERS4FVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBufferParameteriAPPLE");
	if (p) {
		glBufferParameteriAPPLE = (PFNGLBUFFERPARAMETERIAPPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFlushMappedBufferRangeAPPLE");
	if (p) {
		glFlushMappedBufferRangeAPPLE = (PFNGLFLUSHMAPPEDBUFFERRANGEAPPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramLocalParameterI4iNV");
	if (p) {
		glProgramLocalParameterI4iNV = (PFNGLPROGRAMLOCALPARAMETERI4INVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramLocalParameterI4ivNV");
	if (p) {
		glProgramLocalParameterI4ivNV = (PFNGLPROGRAMLOCALPARAMETERI4IVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramLocalParametersI4ivNV");
	if (p) {
		glProgramLocalParametersI4ivNV = (PFNGLPROGRAMLOCALPARAMETERSI4IVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramLocalParameterI4uiNV");
	if (p) {
		glProgramLocalParameterI4uiNV = (PFNGLPROGRAMLOCALPARAMETERI4UINVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramLocalParameterI4uivNV");
	if (p) {
		glProgramLocalParameterI4uivNV = (PFNGLPROGRAMLOCALPARAMETERI4UIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramLocalParametersI4uivNV");
	if (p) {
		glProgramLocalParametersI4uivNV = (PFNGLPROGRAMLOCALPARAMETERSI4UIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramEnvParameterI4iNV");
	if (p) {
		glProgramEnvParameterI4iNV = (PFNGLPROGRAMENVPARAMETERI4INVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramEnvParameterI4ivNV");
	if (p) {
		glProgramEnvParameterI4ivNV = (PFNGLPROGRAMENVPARAMETERI4IVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramEnvParametersI4ivNV");
	if (p) {
		glProgramEnvParametersI4ivNV = (PFNGLPROGRAMENVPARAMETERSI4IVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramEnvParameterI4uiNV");
	if (p) {
		glProgramEnvParameterI4uiNV = (PFNGLPROGRAMENVPARAMETERI4UINVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramEnvParameterI4uivNV");
	if (p) {
		glProgramEnvParameterI4uivNV = (PFNGLPROGRAMENVPARAMETERI4UIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramEnvParametersI4uivNV");
	if (p) {
		glProgramEnvParametersI4uivNV = (PFNGLPROGRAMENVPARAMETERSI4UIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetProgramLocalParameterIivNV");
	if (p) {
		glGetProgramLocalParameterIivNV = (PFNGLGETPROGRAMLOCALPARAMETERIIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetProgramLocalParameterIuivNV");
	if (p) {
		glGetProgramLocalParameterIuivNV = (PFNGLGETPROGRAMLOCALPARAMETERIUIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetProgramEnvParameterIivNV");
	if (p) {
		glGetProgramEnvParameterIivNV = (PFNGLGETPROGRAMENVPARAMETERIIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetProgramEnvParameterIuivNV");
	if (p) {
		glGetProgramEnvParameterIuivNV = (PFNGLGETPROGRAMENVPARAMETERIUIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramVertexLimitNV");
	if (p) {
		glProgramVertexLimitNV = (PFNGLPROGRAMVERTEXLIMITNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFramebufferTextureEXT");
	if (p) {
		glFramebufferTextureEXT = (PFNGLFRAMEBUFFERTEXTUREEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFramebufferTextureLayerEXT");
	if (p) {
		glFramebufferTextureLayerEXT = (PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFramebufferTextureFaceEXT");
	if (p) {
		glFramebufferTextureFaceEXT = (PFNGLFRAMEBUFFERTEXTUREFACEEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramParameteriEXT");
	if (p) {
		glProgramParameteriEXT = (PFNGLPROGRAMPARAMETERIEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI1iEXT");
	if (p) {
		glVertexAttribI1iEXT = (PFNGLVERTEXATTRIBI1IEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI2iEXT");
	if (p) {
		glVertexAttribI2iEXT = (PFNGLVERTEXATTRIBI2IEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI3iEXT");
	if (p) {
		glVertexAttribI3iEXT = (PFNGLVERTEXATTRIBI3IEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI4iEXT");
	if (p) {
		glVertexAttribI4iEXT = (PFNGLVERTEXATTRIBI4IEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI1uiEXT");
	if (p) {
		glVertexAttribI1uiEXT = (PFNGLVERTEXATTRIBI1UIEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI2uiEXT");
	if (p) {
		glVertexAttribI2uiEXT = (PFNGLVERTEXATTRIBI2UIEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI3uiEXT");
	if (p) {
		glVertexAttribI3uiEXT = (PFNGLVERTEXATTRIBI3UIEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI4uiEXT");
	if (p) {
		glVertexAttribI4uiEXT = (PFNGLVERTEXATTRIBI4UIEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI1ivEXT");
	if (p) {
		glVertexAttribI1ivEXT = (PFNGLVERTEXATTRIBI1IVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI2ivEXT");
	if (p) {
		glVertexAttribI2ivEXT = (PFNGLVERTEXATTRIBI2IVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI3ivEXT");
	if (p) {
		glVertexAttribI3ivEXT = (PFNGLVERTEXATTRIBI3IVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI4ivEXT");
	if (p) {
		glVertexAttribI4ivEXT = (PFNGLVERTEXATTRIBI4IVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI1uivEXT");
	if (p) {
		glVertexAttribI1uivEXT = (PFNGLVERTEXATTRIBI1UIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI2uivEXT");
	if (p) {
		glVertexAttribI2uivEXT = (PFNGLVERTEXATTRIBI2UIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI3uivEXT");
	if (p) {
		glVertexAttribI3uivEXT = (PFNGLVERTEXATTRIBI3UIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI4uivEXT");
	if (p) {
		glVertexAttribI4uivEXT = (PFNGLVERTEXATTRIBI4UIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI4bvEXT");
	if (p) {
		glVertexAttribI4bvEXT = (PFNGLVERTEXATTRIBI4BVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI4svEXT");
	if (p) {
		glVertexAttribI4svEXT = (PFNGLVERTEXATTRIBI4SVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI4ubvEXT");
	if (p) {
		glVertexAttribI4ubvEXT = (PFNGLVERTEXATTRIBI4UBVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribI4usvEXT");
	if (p) {
		glVertexAttribI4usvEXT = (PFNGLVERTEXATTRIBI4USVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribIPointerEXT");
	if (p) {
		glVertexAttribIPointerEXT = (PFNGLVERTEXATTRIBIPOINTEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVertexAttribIivEXT");
	if (p) {
		glGetVertexAttribIivEXT = (PFNGLGETVERTEXATTRIBIIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVertexAttribIuivEXT");
	if (p) {
		glGetVertexAttribIuivEXT = (PFNGLGETVERTEXATTRIBIUIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetUniformuivEXT");
	if (p) {
		glGetUniformuivEXT = (PFNGLGETUNIFORMUIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindFragDataLocationEXT");
	if (p) {
		glBindFragDataLocationEXT = (PFNGLBINDFRAGDATALOCATIONEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetFragDataLocationEXT");
	if (p) {
		glGetFragDataLocationEXT = (PFNGLGETFRAGDATALOCATIONEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform1uiEXT");
	if (p) {
		glUniform1uiEXT = (PFNGLUNIFORM1UIEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform2uiEXT");
	if (p) {
		glUniform2uiEXT = (PFNGLUNIFORM2UIEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform3uiEXT");
	if (p) {
		glUniform3uiEXT = (PFNGLUNIFORM3UIEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform4uiEXT");
	if (p) {
		glUniform4uiEXT = (PFNGLUNIFORM4UIEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform1uivEXT");
	if (p) {
		glUniform1uivEXT = (PFNGLUNIFORM1UIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform2uivEXT");
	if (p) {
		glUniform2uivEXT = (PFNGLUNIFORM2UIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform3uivEXT");
	if (p) {
		glUniform3uivEXT = (PFNGLUNIFORM3UIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform4uivEXT");
	if (p) {
		glUniform4uivEXT = (PFNGLUNIFORM4UIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDrawArraysInstancedEXT");
	if (p) {
		glDrawArraysInstancedEXT = (PFNGLDRAWARRAYSINSTANCEDEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDrawElementsInstancedEXT");
	if (p) {
		glDrawElementsInstancedEXT = (PFNGLDRAWELEMENTSINSTANCEDEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexBufferEXT");
	if (p) {
		glTexBufferEXT = (PFNGLTEXBUFFEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDepthRangedNV");
	if (p) {
		glDepthRangedNV = (PFNGLDEPTHRANGEDNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glClearDepthdNV");
	if (p) {
		glClearDepthdNV = (PFNGLCLEARDEPTHDNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDepthBoundsdNV");
	if (p) {
		glDepthBoundsdNV = (PFNGLDEPTHBOUNDSDNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glRenderbufferStorageMultisampleCoverageNV");
	if (p) {
		glRenderbufferStorageMultisampleCoverageNV = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramBufferParametersfvNV");
	if (p) {
		glProgramBufferParametersfvNV = (PFNGLPROGRAMBUFFERPARAMETERSFVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramBufferParametersIivNV");
	if (p) {
		glProgramBufferParametersIivNV = (PFNGLPROGRAMBUFFERPARAMETERSIIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramBufferParametersIuivNV");
	if (p) {
		glProgramBufferParametersIuivNV = (PFNGLPROGRAMBUFFERPARAMETERSIUIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glColorMaskIndexedEXT");
	if (p) {
		glColorMaskIndexedEXT = (PFNGLCOLORMASKINDEXEDEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetBooleanIndexedvEXT");
	if (p) {
		glGetBooleanIndexedvEXT = (PFNGLGETBOOLEANINDEXEDVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetIntegerIndexedvEXT");
	if (p) {
		glGetIntegerIndexedvEXT = (PFNGLGETINTEGERINDEXEDVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glEnableIndexedEXT");
	if (p) {
		glEnableIndexedEXT = (PFNGLENABLEINDEXEDEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDisableIndexedEXT");
	if (p) {
		glDisableIndexedEXT = (PFNGLDISABLEINDEXEDEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsEnabledIndexedEXT");
	if (p) {
		glIsEnabledIndexedEXT = (PFNGLISENABLEDINDEXEDEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBeginTransformFeedbackNV");
	if (p) {
		glBeginTransformFeedbackNV = (PFNGLBEGINTRANSFORMFEEDBACKNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glEndTransformFeedbackNV");
	if (p) {
		glEndTransformFeedbackNV = (PFNGLENDTRANSFORMFEEDBACKNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTransformFeedbackAttribsNV");
	if (p) {
		glTransformFeedbackAttribsNV = (PFNGLTRANSFORMFEEDBACKATTRIBSNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindBufferRangeNV");
	if (p) {
		glBindBufferRangeNV = (PFNGLBINDBUFFERRANGENVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindBufferOffsetNV");
	if (p) {
		glBindBufferOffsetNV = (PFNGLBINDBUFFEROFFSETNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindBufferBaseNV");
	if (p) {
		glBindBufferBaseNV = (PFNGLBINDBUFFERBASENVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTransformFeedbackVaryingsNV");
	if (p) {
		glTransformFeedbackVaryingsNV = (PFNGLTRANSFORMFEEDBACKVARYINGSNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glActiveVaryingNV");
	if (p) {
		glActiveVaryingNV = (PFNGLACTIVEVARYINGNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVaryingLocationNV");
	if (p) {
		glGetVaryingLocationNV = (PFNGLGETVARYINGLOCATIONNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetActiveVaryingNV");
	if (p) {
		glGetActiveVaryingNV = (PFNGLGETACTIVEVARYINGNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetTransformFeedbackVaryingNV");
	if (p) {
		glGetTransformFeedbackVaryingNV = (PFNGLGETTRANSFORMFEEDBACKVARYINGNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTransformFeedbackStreamAttribsNV");
	if (p) {
		glTransformFeedbackStreamAttribsNV = (PFNGLTRANSFORMFEEDBACKSTREAMATTRIBSNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniformBufferEXT");
	if (p) {
		glUniformBufferEXT = (PFNGLUNIFORMBUFFEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetUniformBufferSizeEXT");
	if (p) {
		glGetUniformBufferSizeEXT = (PFNGLGETUNIFORMBUFFERSIZEEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetUniformOffsetEXT");
	if (p) {
		glGetUniformOffsetEXT = (PFNGLGETUNIFORMOFFSETEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexParameterIivEXT");
	if (p) {
		glTexParameterIivEXT = (PFNGLTEXPARAMETERIIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexParameterIuivEXT");
	if (p) {
		glTexParameterIuivEXT = (PFNGLTEXPARAMETERIUIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetTexParameterIivEXT");
	if (p) {
		glGetTexParameterIivEXT = (PFNGLGETTEXPARAMETERIIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetTexParameterIuivEXT");
	if (p) {
		glGetTexParameterIuivEXT = (PFNGLGETTEXPARAMETERIUIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glClearColorIiEXT");
	if (p) {
		glClearColorIiEXT = (PFNGLCLEARCOLORIIEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glClearColorIuiEXT");
	if (p) {
		glClearColorIuiEXT = (PFNGLCLEARCOLORIUIEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFrameTerminatorGREMEDY");
	if (p) {
		glFrameTerminatorGREMEDY = (PFNGLFRAMETERMINATORGREMEDYPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBeginConditionalRenderNV");
	if (p) {
		glBeginConditionalRenderNV = (PFNGLBEGINCONDITIONALRENDERNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glEndConditionalRenderNV");
	if (p) {
		glEndConditionalRenderNV = (PFNGLENDCONDITIONALRENDERNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPresentFrameKeyedNV");
	if (p) {
		glPresentFrameKeyedNV = (PFNGLPRESENTFRAMEKEYEDNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPresentFrameDualFillNV");
	if (p) {
		glPresentFrameDualFillNV = (PFNGLPRESENTFRAMEDUALFILLNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVideoivNV");
	if (p) {
		glGetVideoivNV = (PFNGLGETVIDEOIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVideouivNV");
	if (p) {
		glGetVideouivNV = (PFNGLGETVIDEOUIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVideoi64vNV");
	if (p) {
		glGetVideoi64vNV = (PFNGLGETVIDEOI64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVideoui64vNV");
	if (p) {
		glGetVideoui64vNV = (PFNGLGETVIDEOUI64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBeginTransformFeedbackEXT");
	if (p) {
		glBeginTransformFeedbackEXT = (PFNGLBEGINTRANSFORMFEEDBACKEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glEndTransformFeedbackEXT");
	if (p) {
		glEndTransformFeedbackEXT = (PFNGLENDTRANSFORMFEEDBACKEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindBufferRangeEXT");
	if (p) {
		glBindBufferRangeEXT = (PFNGLBINDBUFFERRANGEEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindBufferOffsetEXT");
	if (p) {
		glBindBufferOffsetEXT = (PFNGLBINDBUFFEROFFSETEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindBufferBaseEXT");
	if (p) {
		glBindBufferBaseEXT = (PFNGLBINDBUFFERBASEEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTransformFeedbackVaryingsEXT");
	if (p) {
		glTransformFeedbackVaryingsEXT = (PFNGLTRANSFORMFEEDBACKVARYINGSEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetTransformFeedbackVaryingEXT");
	if (p) {
		glGetTransformFeedbackVaryingEXT = (PFNGLGETTRANSFORMFEEDBACKVARYINGEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glClientAttribDefaultEXT");
	if (p) {
		glClientAttribDefaultEXT = (PFNGLCLIENTATTRIBDEFAULTEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPushClientAttribDefaultEXT");
	if (p) {
		glPushClientAttribDefaultEXT = (PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMatrixLoadfEXT");
	if (p) {
		glMatrixLoadfEXT = (PFNGLMATRIXLOADFEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMatrixLoaddEXT");
	if (p) {
		glMatrixLoaddEXT = (PFNGLMATRIXLOADDEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMatrixMultfEXT");
	if (p) {
		glMatrixMultfEXT = (PFNGLMATRIXMULTFEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMatrixMultdEXT");
	if (p) {
		glMatrixMultdEXT = (PFNGLMATRIXMULTDEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMatrixLoadIdentityEXT");
	if (p) {
		glMatrixLoadIdentityEXT = (PFNGLMATRIXLOADIDENTITYEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMatrixRotatefEXT");
	if (p) {
		glMatrixRotatefEXT = (PFNGLMATRIXROTATEFEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMatrixRotatedEXT");
	if (p) {
		glMatrixRotatedEXT = (PFNGLMATRIXROTATEDEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMatrixScalefEXT");
	if (p) {
		glMatrixScalefEXT = (PFNGLMATRIXSCALEFEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMatrixScaledEXT");
	if (p) {
		glMatrixScaledEXT = (PFNGLMATRIXSCALEDEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMatrixTranslatefEXT");
	if (p) {
		glMatrixTranslatefEXT = (PFNGLMATRIXTRANSLATEFEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMatrixTranslatedEXT");
	if (p) {
		glMatrixTranslatedEXT = (PFNGLMATRIXTRANSLATEDEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMatrixFrustumEXT");
	if (p) {
		glMatrixFrustumEXT = (PFNGLMATRIXFRUSTUMEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMatrixOrthoEXT");
	if (p) {
		glMatrixOrthoEXT = (PFNGLMATRIXORTHOEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMatrixPopEXT");
	if (p) {
		glMatrixPopEXT = (PFNGLMATRIXPOPEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMatrixPushEXT");
	if (p) {
		glMatrixPushEXT = (PFNGLMATRIXPUSHEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMatrixLoadTransposefEXT");
	if (p) {
		glMatrixLoadTransposefEXT = (PFNGLMATRIXLOADTRANSPOSEFEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMatrixLoadTransposedEXT");
	if (p) {
		glMatrixLoadTransposedEXT = (PFNGLMATRIXLOADTRANSPOSEDEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMatrixMultTransposefEXT");
	if (p) {
		glMatrixMultTransposefEXT = (PFNGLMATRIXMULTTRANSPOSEFEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMatrixMultTransposedEXT");
	if (p) {
		glMatrixMultTransposedEXT = (PFNGLMATRIXMULTTRANSPOSEDEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTextureParameterfEXT");
	if (p) {
		glTextureParameterfEXT = (PFNGLTEXTUREPARAMETERFEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTextureParameterfvEXT");
	if (p) {
		glTextureParameterfvEXT = (PFNGLTEXTUREPARAMETERFVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTextureParameteriEXT");
	if (p) {
		glTextureParameteriEXT = (PFNGLTEXTUREPARAMETERIEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTextureParameterivEXT");
	if (p) {
		glTextureParameterivEXT = (PFNGLTEXTUREPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTextureImage1DEXT");
	if (p) {
		glTextureImage1DEXT = (PFNGLTEXTUREIMAGE1DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTextureImage2DEXT");
	if (p) {
		glTextureImage2DEXT = (PFNGLTEXTUREIMAGE2DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTextureSubImage1DEXT");
	if (p) {
		glTextureSubImage1DEXT = (PFNGLTEXTURESUBIMAGE1DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTextureSubImage2DEXT");
	if (p) {
		glTextureSubImage2DEXT = (PFNGLTEXTURESUBIMAGE2DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCopyTextureImage1DEXT");
	if (p) {
		glCopyTextureImage1DEXT = (PFNGLCOPYTEXTUREIMAGE1DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCopyTextureImage2DEXT");
	if (p) {
		glCopyTextureImage2DEXT = (PFNGLCOPYTEXTUREIMAGE2DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCopyTextureSubImage1DEXT");
	if (p) {
		glCopyTextureSubImage1DEXT = (PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCopyTextureSubImage2DEXT");
	if (p) {
		glCopyTextureSubImage2DEXT = (PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetTextureImageEXT");
	if (p) {
		glGetTextureImageEXT = (PFNGLGETTEXTUREIMAGEEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetTextureParameterfvEXT");
	if (p) {
		glGetTextureParameterfvEXT = (PFNGLGETTEXTUREPARAMETERFVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetTextureParameterivEXT");
	if (p) {
		glGetTextureParameterivEXT = (PFNGLGETTEXTUREPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetTextureLevelParameterfvEXT");
	if (p) {
		glGetTextureLevelParameterfvEXT = (PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetTextureLevelParameterivEXT");
	if (p) {
		glGetTextureLevelParameterivEXT = (PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTextureImage3DEXT");
	if (p) {
		glTextureImage3DEXT = (PFNGLTEXTUREIMAGE3DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTextureSubImage3DEXT");
	if (p) {
		glTextureSubImage3DEXT = (PFNGLTEXTURESUBIMAGE3DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCopyTextureSubImage3DEXT");
	if (p) {
		glCopyTextureSubImage3DEXT = (PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexParameterfEXT");
	if (p) {
		glMultiTexParameterfEXT = (PFNGLMULTITEXPARAMETERFEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexParameterfvEXT");
	if (p) {
		glMultiTexParameterfvEXT = (PFNGLMULTITEXPARAMETERFVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexParameteriEXT");
	if (p) {
		glMultiTexParameteriEXT = (PFNGLMULTITEXPARAMETERIEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexParameterivEXT");
	if (p) {
		glMultiTexParameterivEXT = (PFNGLMULTITEXPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexImage1DEXT");
	if (p) {
		glMultiTexImage1DEXT = (PFNGLMULTITEXIMAGE1DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexImage2DEXT");
	if (p) {
		glMultiTexImage2DEXT = (PFNGLMULTITEXIMAGE2DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexSubImage1DEXT");
	if (p) {
		glMultiTexSubImage1DEXT = (PFNGLMULTITEXSUBIMAGE1DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexSubImage2DEXT");
	if (p) {
		glMultiTexSubImage2DEXT = (PFNGLMULTITEXSUBIMAGE2DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCopyMultiTexImage1DEXT");
	if (p) {
		glCopyMultiTexImage1DEXT = (PFNGLCOPYMULTITEXIMAGE1DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCopyMultiTexImage2DEXT");
	if (p) {
		glCopyMultiTexImage2DEXT = (PFNGLCOPYMULTITEXIMAGE2DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCopyMultiTexSubImage1DEXT");
	if (p) {
		glCopyMultiTexSubImage1DEXT = (PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCopyMultiTexSubImage2DEXT");
	if (p) {
		glCopyMultiTexSubImage2DEXT = (PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetMultiTexImageEXT");
	if (p) {
		glGetMultiTexImageEXT = (PFNGLGETMULTITEXIMAGEEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetMultiTexParameterfvEXT");
	if (p) {
		glGetMultiTexParameterfvEXT = (PFNGLGETMULTITEXPARAMETERFVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetMultiTexParameterivEXT");
	if (p) {
		glGetMultiTexParameterivEXT = (PFNGLGETMULTITEXPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetMultiTexLevelParameterfvEXT");
	if (p) {
		glGetMultiTexLevelParameterfvEXT = (PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetMultiTexLevelParameterivEXT");
	if (p) {
		glGetMultiTexLevelParameterivEXT = (PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexImage3DEXT");
	if (p) {
		glMultiTexImage3DEXT = (PFNGLMULTITEXIMAGE3DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexSubImage3DEXT");
	if (p) {
		glMultiTexSubImage3DEXT = (PFNGLMULTITEXSUBIMAGE3DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCopyMultiTexSubImage3DEXT");
	if (p) {
		glCopyMultiTexSubImage3DEXT = (PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindMultiTextureEXT");
	if (p) {
		glBindMultiTextureEXT = (PFNGLBINDMULTITEXTUREEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glEnableClientStateIndexedEXT");
	if (p) {
		glEnableClientStateIndexedEXT = (PFNGLENABLECLIENTSTATEINDEXEDEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDisableClientStateIndexedEXT");
	if (p) {
		glDisableClientStateIndexedEXT = (PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexCoordPointerEXT");
	if (p) {
		glMultiTexCoordPointerEXT = (PFNGLMULTITEXCOORDPOINTEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexEnvfEXT");
	if (p) {
		glMultiTexEnvfEXT = (PFNGLMULTITEXENVFEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexEnvfvEXT");
	if (p) {
		glMultiTexEnvfvEXT = (PFNGLMULTITEXENVFVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexEnviEXT");
	if (p) {
		glMultiTexEnviEXT = (PFNGLMULTITEXENVIEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexEnvivEXT");
	if (p) {
		glMultiTexEnvivEXT = (PFNGLMULTITEXENVIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexGendEXT");
	if (p) {
		glMultiTexGendEXT = (PFNGLMULTITEXGENDEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexGendvEXT");
	if (p) {
		glMultiTexGendvEXT = (PFNGLMULTITEXGENDVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexGenfEXT");
	if (p) {
		glMultiTexGenfEXT = (PFNGLMULTITEXGENFEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexGenfvEXT");
	if (p) {
		glMultiTexGenfvEXT = (PFNGLMULTITEXGENFVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexGeniEXT");
	if (p) {
		glMultiTexGeniEXT = (PFNGLMULTITEXGENIEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexGenivEXT");
	if (p) {
		glMultiTexGenivEXT = (PFNGLMULTITEXGENIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetMultiTexEnvfvEXT");
	if (p) {
		glGetMultiTexEnvfvEXT = (PFNGLGETMULTITEXENVFVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetMultiTexEnvivEXT");
	if (p) {
		glGetMultiTexEnvivEXT = (PFNGLGETMULTITEXENVIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetMultiTexGendvEXT");
	if (p) {
		glGetMultiTexGendvEXT = (PFNGLGETMULTITEXGENDVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetMultiTexGenfvEXT");
	if (p) {
		glGetMultiTexGenfvEXT = (PFNGLGETMULTITEXGENFVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetMultiTexGenivEXT");
	if (p) {
		glGetMultiTexGenivEXT = (PFNGLGETMULTITEXGENIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetFloatIndexedvEXT");
	if (p) {
		glGetFloatIndexedvEXT = (PFNGLGETFLOATINDEXEDVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetDoubleIndexedvEXT");
	if (p) {
		glGetDoubleIndexedvEXT = (PFNGLGETDOUBLEINDEXEDVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetPointerIndexedvEXT");
	if (p) {
		glGetPointerIndexedvEXT = (PFNGLGETPOINTERINDEXEDVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCompressedTextureImage3DEXT");
	if (p) {
		glCompressedTextureImage3DEXT = (PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCompressedTextureImage2DEXT");
	if (p) {
		glCompressedTextureImage2DEXT = (PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCompressedTextureImage1DEXT");
	if (p) {
		glCompressedTextureImage1DEXT = (PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCompressedTextureSubImage3DEXT");
	if (p) {
		glCompressedTextureSubImage3DEXT = (PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCompressedTextureSubImage2DEXT");
	if (p) {
		glCompressedTextureSubImage2DEXT = (PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCompressedTextureSubImage1DEXT");
	if (p) {
		glCompressedTextureSubImage1DEXT = (PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetCompressedTextureImageEXT");
	if (p) {
		glGetCompressedTextureImageEXT = (PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCompressedMultiTexImage3DEXT");
	if (p) {
		glCompressedMultiTexImage3DEXT = (PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCompressedMultiTexImage2DEXT");
	if (p) {
		glCompressedMultiTexImage2DEXT = (PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCompressedMultiTexImage1DEXT");
	if (p) {
		glCompressedMultiTexImage1DEXT = (PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCompressedMultiTexSubImage3DEXT");
	if (p) {
		glCompressedMultiTexSubImage3DEXT = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCompressedMultiTexSubImage2DEXT");
	if (p) {
		glCompressedMultiTexSubImage2DEXT = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCompressedMultiTexSubImage1DEXT");
	if (p) {
		glCompressedMultiTexSubImage1DEXT = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetCompressedMultiTexImageEXT");
	if (p) {
		glGetCompressedMultiTexImageEXT = (PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNamedProgramStringEXT");
	if (p) {
		glNamedProgramStringEXT = (PFNGLNAMEDPROGRAMSTRINGEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNamedProgramLocalParameter4dEXT");
	if (p) {
		glNamedProgramLocalParameter4dEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNamedProgramLocalParameter4dvEXT");
	if (p) {
		glNamedProgramLocalParameter4dvEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNamedProgramLocalParameter4fEXT");
	if (p) {
		glNamedProgramLocalParameter4fEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNamedProgramLocalParameter4fvEXT");
	if (p) {
		glNamedProgramLocalParameter4fvEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetNamedProgramLocalParameterdvEXT");
	if (p) {
		glGetNamedProgramLocalParameterdvEXT = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetNamedProgramLocalParameterfvEXT");
	if (p) {
		glGetNamedProgramLocalParameterfvEXT = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetNamedProgramivEXT");
	if (p) {
		glGetNamedProgramivEXT = (PFNGLGETNAMEDPROGRAMIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetNamedProgramStringEXT");
	if (p) {
		glGetNamedProgramStringEXT = (PFNGLGETNAMEDPROGRAMSTRINGEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNamedProgramLocalParameters4fvEXT");
	if (p) {
		glNamedProgramLocalParameters4fvEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNamedProgramLocalParameterI4iEXT");
	if (p) {
		glNamedProgramLocalParameterI4iEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNamedProgramLocalParameterI4ivEXT");
	if (p) {
		glNamedProgramLocalParameterI4ivEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNamedProgramLocalParametersI4ivEXT");
	if (p) {
		glNamedProgramLocalParametersI4ivEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNamedProgramLocalParameterI4uiEXT");
	if (p) {
		glNamedProgramLocalParameterI4uiEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNamedProgramLocalParameterI4uivEXT");
	if (p) {
		glNamedProgramLocalParameterI4uivEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNamedProgramLocalParametersI4uivEXT");
	if (p) {
		glNamedProgramLocalParametersI4uivEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetNamedProgramLocalParameterIivEXT");
	if (p) {
		glGetNamedProgramLocalParameterIivEXT = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetNamedProgramLocalParameterIuivEXT");
	if (p) {
		glGetNamedProgramLocalParameterIuivEXT = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTextureParameterIivEXT");
	if (p) {
		glTextureParameterIivEXT = (PFNGLTEXTUREPARAMETERIIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTextureParameterIuivEXT");
	if (p) {
		glTextureParameterIuivEXT = (PFNGLTEXTUREPARAMETERIUIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetTextureParameterIivEXT");
	if (p) {
		glGetTextureParameterIivEXT = (PFNGLGETTEXTUREPARAMETERIIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetTextureParameterIuivEXT");
	if (p) {
		glGetTextureParameterIuivEXT = (PFNGLGETTEXTUREPARAMETERIUIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexParameterIivEXT");
	if (p) {
		glMultiTexParameterIivEXT = (PFNGLMULTITEXPARAMETERIIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexParameterIuivEXT");
	if (p) {
		glMultiTexParameterIuivEXT = (PFNGLMULTITEXPARAMETERIUIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetMultiTexParameterIivEXT");
	if (p) {
		glGetMultiTexParameterIivEXT = (PFNGLGETMULTITEXPARAMETERIIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetMultiTexParameterIuivEXT");
	if (p) {
		glGetMultiTexParameterIuivEXT = (PFNGLGETMULTITEXPARAMETERIUIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform1fEXT");
	if (p) {
		glProgramUniform1fEXT = (PFNGLPROGRAMUNIFORM1FEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform2fEXT");
	if (p) {
		glProgramUniform2fEXT = (PFNGLPROGRAMUNIFORM2FEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform3fEXT");
	if (p) {
		glProgramUniform3fEXT = (PFNGLPROGRAMUNIFORM3FEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform4fEXT");
	if (p) {
		glProgramUniform4fEXT = (PFNGLPROGRAMUNIFORM4FEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform1iEXT");
	if (p) {
		glProgramUniform1iEXT = (PFNGLPROGRAMUNIFORM1IEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform2iEXT");
	if (p) {
		glProgramUniform2iEXT = (PFNGLPROGRAMUNIFORM2IEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform3iEXT");
	if (p) {
		glProgramUniform3iEXT = (PFNGLPROGRAMUNIFORM3IEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform4iEXT");
	if (p) {
		glProgramUniform4iEXT = (PFNGLPROGRAMUNIFORM4IEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform1fvEXT");
	if (p) {
		glProgramUniform1fvEXT = (PFNGLPROGRAMUNIFORM1FVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform2fvEXT");
	if (p) {
		glProgramUniform2fvEXT = (PFNGLPROGRAMUNIFORM2FVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform3fvEXT");
	if (p) {
		glProgramUniform3fvEXT = (PFNGLPROGRAMUNIFORM3FVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform4fvEXT");
	if (p) {
		glProgramUniform4fvEXT = (PFNGLPROGRAMUNIFORM4FVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform1ivEXT");
	if (p) {
		glProgramUniform1ivEXT = (PFNGLPROGRAMUNIFORM1IVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform2ivEXT");
	if (p) {
		glProgramUniform2ivEXT = (PFNGLPROGRAMUNIFORM2IVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform3ivEXT");
	if (p) {
		glProgramUniform3ivEXT = (PFNGLPROGRAMUNIFORM3IVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform4ivEXT");
	if (p) {
		glProgramUniform4ivEXT = (PFNGLPROGRAMUNIFORM4IVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix2fvEXT");
	if (p) {
		glProgramUniformMatrix2fvEXT = (PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix3fvEXT");
	if (p) {
		glProgramUniformMatrix3fvEXT = (PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix4fvEXT");
	if (p) {
		glProgramUniformMatrix4fvEXT = (PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix2x3fvEXT");
	if (p) {
		glProgramUniformMatrix2x3fvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix3x2fvEXT");
	if (p) {
		glProgramUniformMatrix3x2fvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix2x4fvEXT");
	if (p) {
		glProgramUniformMatrix2x4fvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix4x2fvEXT");
	if (p) {
		glProgramUniformMatrix4x2fvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix3x4fvEXT");
	if (p) {
		glProgramUniformMatrix3x4fvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix4x3fvEXT");
	if (p) {
		glProgramUniformMatrix4x3fvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform1uiEXT");
	if (p) {
		glProgramUniform1uiEXT = (PFNGLPROGRAMUNIFORM1UIEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform2uiEXT");
	if (p) {
		glProgramUniform2uiEXT = (PFNGLPROGRAMUNIFORM2UIEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform3uiEXT");
	if (p) {
		glProgramUniform3uiEXT = (PFNGLPROGRAMUNIFORM3UIEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform4uiEXT");
	if (p) {
		glProgramUniform4uiEXT = (PFNGLPROGRAMUNIFORM4UIEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform1uivEXT");
	if (p) {
		glProgramUniform1uivEXT = (PFNGLPROGRAMUNIFORM1UIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform2uivEXT");
	if (p) {
		glProgramUniform2uivEXT = (PFNGLPROGRAMUNIFORM2UIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform3uivEXT");
	if (p) {
		glProgramUniform3uivEXT = (PFNGLPROGRAMUNIFORM3UIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform4uivEXT");
	if (p) {
		glProgramUniform4uivEXT = (PFNGLPROGRAMUNIFORM4UIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNamedBufferDataEXT");
	if (p) {
		glNamedBufferDataEXT = (PFNGLNAMEDBUFFERDATAEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNamedBufferSubDataEXT");
	if (p) {
		glNamedBufferSubDataEXT = (PFNGLNAMEDBUFFERSUBDATAEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMapNamedBufferEXT");
	if (p) {
		glMapNamedBufferEXT = (PFNGLMAPNAMEDBUFFEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUnmapNamedBufferEXT");
	if (p) {
		glUnmapNamedBufferEXT = (PFNGLUNMAPNAMEDBUFFEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMapNamedBufferRangeEXT");
	if (p) {
		glMapNamedBufferRangeEXT = (PFNGLMAPNAMEDBUFFERRANGEEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFlushMappedNamedBufferRangeEXT");
	if (p) {
		glFlushMappedNamedBufferRangeEXT = (PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNamedCopyBufferSubDataEXT");
	if (p) {
		glNamedCopyBufferSubDataEXT = (PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetNamedBufferParameterivEXT");
	if (p) {
		glGetNamedBufferParameterivEXT = (PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetNamedBufferPointervEXT");
	if (p) {
		glGetNamedBufferPointervEXT = (PFNGLGETNAMEDBUFFERPOINTERVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetNamedBufferSubDataEXT");
	if (p) {
		glGetNamedBufferSubDataEXT = (PFNGLGETNAMEDBUFFERSUBDATAEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTextureBufferEXT");
	if (p) {
		glTextureBufferEXT = (PFNGLTEXTUREBUFFEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexBufferEXT");
	if (p) {
		glMultiTexBufferEXT = (PFNGLMULTITEXBUFFEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNamedRenderbufferStorageEXT");
	if (p) {
		glNamedRenderbufferStorageEXT = (PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetNamedRenderbufferParameterivEXT");
	if (p) {
		glGetNamedRenderbufferParameterivEXT = (PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCheckNamedFramebufferStatusEXT");
	if (p) {
		glCheckNamedFramebufferStatusEXT = (PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNamedFramebufferTexture1DEXT");
	if (p) {
		glNamedFramebufferTexture1DEXT = (PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNamedFramebufferTexture2DEXT");
	if (p) {
		glNamedFramebufferTexture2DEXT = (PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNamedFramebufferTexture3DEXT");
	if (p) {
		glNamedFramebufferTexture3DEXT = (PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNamedFramebufferRenderbufferEXT");
	if (p) {
		glNamedFramebufferRenderbufferEXT = (PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetNamedFramebufferAttachmentParameterivEXT");
	if (p) {
		glGetNamedFramebufferAttachmentParameterivEXT = (PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGenerateTextureMipmapEXT");
	if (p) {
		glGenerateTextureMipmapEXT = (PFNGLGENERATETEXTUREMIPMAPEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGenerateMultiTexMipmapEXT");
	if (p) {
		glGenerateMultiTexMipmapEXT = (PFNGLGENERATEMULTITEXMIPMAPEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFramebufferDrawBufferEXT");
	if (p) {
		glFramebufferDrawBufferEXT = (PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFramebufferDrawBuffersEXT");
	if (p) {
		glFramebufferDrawBuffersEXT = (PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFramebufferReadBufferEXT");
	if (p) {
		glFramebufferReadBufferEXT = (PFNGLFRAMEBUFFERREADBUFFEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetFramebufferParameterivEXT");
	if (p) {
		glGetFramebufferParameterivEXT = (PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNamedRenderbufferStorageMultisampleEXT");
	if (p) {
		glNamedRenderbufferStorageMultisampleEXT = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNamedRenderbufferStorageMultisampleCoverageEXT");
	if (p) {
		glNamedRenderbufferStorageMultisampleCoverageEXT = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNamedFramebufferTextureEXT");
	if (p) {
		glNamedFramebufferTextureEXT = (PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNamedFramebufferTextureLayerEXT");
	if (p) {
		glNamedFramebufferTextureLayerEXT = (PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNamedFramebufferTextureFaceEXT");
	if (p) {
		glNamedFramebufferTextureFaceEXT = (PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTextureRenderbufferEXT");
	if (p) {
		glTextureRenderbufferEXT = (PFNGLTEXTURERENDERBUFFEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiTexRenderbufferEXT");
	if (p) {
		glMultiTexRenderbufferEXT = (PFNGLMULTITEXRENDERBUFFEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform1dEXT");
	if (p) {
		glProgramUniform1dEXT = (PFNGLPROGRAMUNIFORM1DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform2dEXT");
	if (p) {
		glProgramUniform2dEXT = (PFNGLPROGRAMUNIFORM2DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform3dEXT");
	if (p) {
		glProgramUniform3dEXT = (PFNGLPROGRAMUNIFORM3DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform4dEXT");
	if (p) {
		glProgramUniform4dEXT = (PFNGLPROGRAMUNIFORM4DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform1dvEXT");
	if (p) {
		glProgramUniform1dvEXT = (PFNGLPROGRAMUNIFORM1DVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform2dvEXT");
	if (p) {
		glProgramUniform2dvEXT = (PFNGLPROGRAMUNIFORM2DVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform3dvEXT");
	if (p) {
		glProgramUniform3dvEXT = (PFNGLPROGRAMUNIFORM3DVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform4dvEXT");
	if (p) {
		glProgramUniform4dvEXT = (PFNGLPROGRAMUNIFORM4DVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix2dvEXT");
	if (p) {
		glProgramUniformMatrix2dvEXT = (PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix3dvEXT");
	if (p) {
		glProgramUniformMatrix3dvEXT = (PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix4dvEXT");
	if (p) {
		glProgramUniformMatrix4dvEXT = (PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix2x3dvEXT");
	if (p) {
		glProgramUniformMatrix2x3dvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix2x4dvEXT");
	if (p) {
		glProgramUniformMatrix2x4dvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix3x2dvEXT");
	if (p) {
		glProgramUniformMatrix3x2dvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix3x4dvEXT");
	if (p) {
		glProgramUniformMatrix3x4dvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix4x2dvEXT");
	if (p) {
		glProgramUniformMatrix4x2dvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformMatrix4x3dvEXT");
	if (p) {
		glProgramUniformMatrix4x3dvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetMultisamplefvNV");
	if (p) {
		glGetMultisamplefvNV = (PFNGLGETMULTISAMPLEFVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSampleMaskIndexedNV");
	if (p) {
		glSampleMaskIndexedNV = (PFNGLSAMPLEMASKINDEXEDNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexRenderbufferNV");
	if (p) {
		glTexRenderbufferNV = (PFNGLTEXRENDERBUFFERNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindTransformFeedbackNV");
	if (p) {
		glBindTransformFeedbackNV = (PFNGLBINDTRANSFORMFEEDBACKNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDeleteTransformFeedbacksNV");
	if (p) {
		glDeleteTransformFeedbacksNV = (PFNGLDELETETRANSFORMFEEDBACKSNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGenTransformFeedbacksNV");
	if (p) {
		glGenTransformFeedbacksNV = (PFNGLGENTRANSFORMFEEDBACKSNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsTransformFeedbackNV");
	if (p) {
		glIsTransformFeedbackNV = (PFNGLISTRANSFORMFEEDBACKNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPauseTransformFeedbackNV");
	if (p) {
		glPauseTransformFeedbackNV = (PFNGLPAUSETRANSFORMFEEDBACKNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glResumeTransformFeedbackNV");
	if (p) {
		glResumeTransformFeedbackNV = (PFNGLRESUMETRANSFORMFEEDBACKNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDrawTransformFeedbackNV");
	if (p) {
		glDrawTransformFeedbackNV = (PFNGLDRAWTRANSFORMFEEDBACKNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetPerfMonitorGroupsAMD");
	if (p) {
		glGetPerfMonitorGroupsAMD = (PFNGLGETPERFMONITORGROUPSAMDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetPerfMonitorCountersAMD");
	if (p) {
		glGetPerfMonitorCountersAMD = (PFNGLGETPERFMONITORCOUNTERSAMDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetPerfMonitorGroupStringAMD");
	if (p) {
		glGetPerfMonitorGroupStringAMD = (PFNGLGETPERFMONITORGROUPSTRINGAMDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetPerfMonitorCounterStringAMD");
	if (p) {
		glGetPerfMonitorCounterStringAMD = (PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetPerfMonitorCounterInfoAMD");
	if (p) {
		glGetPerfMonitorCounterInfoAMD = (PFNGLGETPERFMONITORCOUNTERINFOAMDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGenPerfMonitorsAMD");
	if (p) {
		glGenPerfMonitorsAMD = (PFNGLGENPERFMONITORSAMDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDeletePerfMonitorsAMD");
	if (p) {
		glDeletePerfMonitorsAMD = (PFNGLDELETEPERFMONITORSAMDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSelectPerfMonitorCountersAMD");
	if (p) {
		glSelectPerfMonitorCountersAMD = (PFNGLSELECTPERFMONITORCOUNTERSAMDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBeginPerfMonitorAMD");
	if (p) {
		glBeginPerfMonitorAMD = (PFNGLBEGINPERFMONITORAMDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glEndPerfMonitorAMD");
	if (p) {
		glEndPerfMonitorAMD = (PFNGLENDPERFMONITORAMDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetPerfMonitorCounterDataAMD");
	if (p) {
		glGetPerfMonitorCounterDataAMD = (PFNGLGETPERFMONITORCOUNTERDATAAMDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTessellationFactorAMD");
	if (p) {
		glTessellationFactorAMD = (PFNGLTESSELLATIONFACTORAMDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTessellationModeAMD");
	if (p) {
		glTessellationModeAMD = (PFNGLTESSELLATIONMODEAMDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProvokingVertexEXT");
	if (p) {
		glProvokingVertexEXT = (PFNGLPROVOKINGVERTEXEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBlendFuncIndexedAMD");
	if (p) {
		glBlendFuncIndexedAMD = (PFNGLBLENDFUNCINDEXEDAMDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBlendFuncSeparateIndexedAMD");
	if (p) {
		glBlendFuncSeparateIndexedAMD = (PFNGLBLENDFUNCSEPARATEINDEXEDAMDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBlendEquationIndexedAMD");
	if (p) {
		glBlendEquationIndexedAMD = (PFNGLBLENDEQUATIONINDEXEDAMDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBlendEquationSeparateIndexedAMD");
	if (p) {
		glBlendEquationSeparateIndexedAMD = (PFNGLBLENDEQUATIONSEPARATEINDEXEDAMDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTextureRangeAPPLE");
	if (p) {
		glTextureRangeAPPLE = (PFNGLTEXTURERANGEAPPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetTexParameterPointervAPPLE");
	if (p) {
		glGetTexParameterPointervAPPLE = (PFNGLGETTEXPARAMETERPOINTERVAPPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glEnableVertexAttribAPPLE");
	if (p) {
		glEnableVertexAttribAPPLE = (PFNGLENABLEVERTEXATTRIBAPPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDisableVertexAttribAPPLE");
	if (p) {
		glDisableVertexAttribAPPLE = (PFNGLDISABLEVERTEXATTRIBAPPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsVertexAttribEnabledAPPLE");
	if (p) {
		glIsVertexAttribEnabledAPPLE = (PFNGLISVERTEXATTRIBENABLEDAPPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMapVertexAttrib1dAPPLE");
	if (p) {
		glMapVertexAttrib1dAPPLE = (PFNGLMAPVERTEXATTRIB1DAPPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMapVertexAttrib1fAPPLE");
	if (p) {
		glMapVertexAttrib1fAPPLE = (PFNGLMAPVERTEXATTRIB1FAPPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMapVertexAttrib2dAPPLE");
	if (p) {
		glMapVertexAttrib2dAPPLE = (PFNGLMAPVERTEXATTRIB2DAPPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMapVertexAttrib2fAPPLE");
	if (p) {
		glMapVertexAttrib2fAPPLE = (PFNGLMAPVERTEXATTRIB2FAPPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glObjectPurgeableAPPLE");
	if (p) {
		glObjectPurgeableAPPLE = (PFNGLOBJECTPURGEABLEAPPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glObjectUnpurgeableAPPLE");
	if (p) {
		glObjectUnpurgeableAPPLE = (PFNGLOBJECTUNPURGEABLEAPPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetObjectParameterivAPPLE");
	if (p) {
		glGetObjectParameterivAPPLE = (PFNGLGETOBJECTPARAMETERIVAPPLEPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBeginVideoCaptureNV");
	if (p) {
		glBeginVideoCaptureNV = (PFNGLBEGINVIDEOCAPTURENVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindVideoCaptureStreamBufferNV");
	if (p) {
		glBindVideoCaptureStreamBufferNV = (PFNGLBINDVIDEOCAPTURESTREAMBUFFERNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindVideoCaptureStreamTextureNV");
	if (p) {
		glBindVideoCaptureStreamTextureNV = (PFNGLBINDVIDEOCAPTURESTREAMTEXTURENVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glEndVideoCaptureNV");
	if (p) {
		glEndVideoCaptureNV = (PFNGLENDVIDEOCAPTURENVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVideoCaptureivNV");
	if (p) {
		glGetVideoCaptureivNV = (PFNGLGETVIDEOCAPTUREIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVideoCaptureStreamivNV");
	if (p) {
		glGetVideoCaptureStreamivNV = (PFNGLGETVIDEOCAPTURESTREAMIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVideoCaptureStreamfvNV");
	if (p) {
		glGetVideoCaptureStreamfvNV = (PFNGLGETVIDEOCAPTURESTREAMFVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVideoCaptureStreamdvNV");
	if (p) {
		glGetVideoCaptureStreamdvNV = (PFNGLGETVIDEOCAPTURESTREAMDVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVideoCaptureNV");
	if (p) {
		glVideoCaptureNV = (PFNGLVIDEOCAPTURENVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVideoCaptureStreamParameterivNV");
	if (p) {
		glVideoCaptureStreamParameterivNV = (PFNGLVIDEOCAPTURESTREAMPARAMETERIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVideoCaptureStreamParameterfvNV");
	if (p) {
		glVideoCaptureStreamParameterfvNV = (PFNGLVIDEOCAPTURESTREAMPARAMETERFVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVideoCaptureStreamParameterdvNV");
	if (p) {
		glVideoCaptureStreamParameterdvNV = (PFNGLVIDEOCAPTURESTREAMPARAMETERDVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCopyImageSubDataNV");
	if (p) {
		glCopyImageSubDataNV = (PFNGLCOPYIMAGESUBDATANVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUseShaderProgramEXT");
	if (p) {
		glUseShaderProgramEXT = (PFNGLUSESHADERPROGRAMEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glActiveProgramEXT");
	if (p) {
		glActiveProgramEXT = (PFNGLACTIVEPROGRAMEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCreateShaderProgramEXT");
	if (p) {
		glCreateShaderProgramEXT = (PFNGLCREATESHADERPROGRAMEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMakeBufferResidentNV");
	if (p) {
		glMakeBufferResidentNV = (PFNGLMAKEBUFFERRESIDENTNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMakeBufferNonResidentNV");
	if (p) {
		glMakeBufferNonResidentNV = (PFNGLMAKEBUFFERNONRESIDENTNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsBufferResidentNV");
	if (p) {
		glIsBufferResidentNV = (PFNGLISBUFFERRESIDENTNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMakeNamedBufferResidentNV");
	if (p) {
		glMakeNamedBufferResidentNV = (PFNGLMAKENAMEDBUFFERRESIDENTNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMakeNamedBufferNonResidentNV");
	if (p) {
		glMakeNamedBufferNonResidentNV = (PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsNamedBufferResidentNV");
	if (p) {
		glIsNamedBufferResidentNV = (PFNGLISNAMEDBUFFERRESIDENTNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetBufferParameterui64vNV");
	if (p) {
		glGetBufferParameterui64vNV = (PFNGLGETBUFFERPARAMETERUI64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetNamedBufferParameterui64vNV");
	if (p) {
		glGetNamedBufferParameterui64vNV = (PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetIntegerui64vNV");
	if (p) {
		glGetIntegerui64vNV = (PFNGLGETINTEGERUI64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniformui64NV");
	if (p) {
		glUniformui64NV = (PFNGLUNIFORMUI64NVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniformui64vNV");
	if (p) {
		glUniformui64vNV = (PFNGLUNIFORMUI64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetUniformui64vNV");
	if (p) {
		glGetUniformui64vNV = (PFNGLGETUNIFORMUI64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformui64NV");
	if (p) {
		glProgramUniformui64NV = (PFNGLPROGRAMUNIFORMUI64NVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformui64vNV");
	if (p) {
		glProgramUniformui64vNV = (PFNGLPROGRAMUNIFORMUI64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBufferAddressRangeNV");
	if (p) {
		glBufferAddressRangeNV = (PFNGLBUFFERADDRESSRANGENVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexFormatNV");
	if (p) {
		glVertexFormatNV = (PFNGLVERTEXFORMATNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glNormalFormatNV");
	if (p) {
		glNormalFormatNV = (PFNGLNORMALFORMATNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glColorFormatNV");
	if (p) {
		glColorFormatNV = (PFNGLCOLORFORMATNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIndexFormatNV");
	if (p) {
		glIndexFormatNV = (PFNGLINDEXFORMATNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexCoordFormatNV");
	if (p) {
		glTexCoordFormatNV = (PFNGLTEXCOORDFORMATNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glEdgeFlagFormatNV");
	if (p) {
		glEdgeFlagFormatNV = (PFNGLEDGEFLAGFORMATNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSecondaryColorFormatNV");
	if (p) {
		glSecondaryColorFormatNV = (PFNGLSECONDARYCOLORFORMATNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFogCoordFormatNV");
	if (p) {
		glFogCoordFormatNV = (PFNGLFOGCOORDFORMATNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribFormatNV");
	if (p) {
		glVertexAttribFormatNV = (PFNGLVERTEXATTRIBFORMATNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribIFormatNV");
	if (p) {
		glVertexAttribIFormatNV = (PFNGLVERTEXATTRIBIFORMATNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetIntegerui64i_vNV");
	if (p) {
		glGetIntegerui64i_vNV = (PFNGLGETINTEGERUI64I_VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTextureBarrierNV");
	if (p) {
		glTextureBarrierNV = (PFNGLTEXTUREBARRIERNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glBindImageTextureEXT");
	if (p) {
		glBindImageTextureEXT = (PFNGLBINDIMAGETEXTUREEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMemoryBarrierEXT");
	if (p) {
		glMemoryBarrierEXT = (PFNGLMEMORYBARRIEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribL1dEXT");
	if (p) {
		glVertexAttribL1dEXT = (PFNGLVERTEXATTRIBL1DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribL2dEXT");
	if (p) {
		glVertexAttribL2dEXT = (PFNGLVERTEXATTRIBL2DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribL3dEXT");
	if (p) {
		glVertexAttribL3dEXT = (PFNGLVERTEXATTRIBL3DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribL4dEXT");
	if (p) {
		glVertexAttribL4dEXT = (PFNGLVERTEXATTRIBL4DEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribL1dvEXT");
	if (p) {
		glVertexAttribL1dvEXT = (PFNGLVERTEXATTRIBL1DVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribL2dvEXT");
	if (p) {
		glVertexAttribL2dvEXT = (PFNGLVERTEXATTRIBL2DVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribL3dvEXT");
	if (p) {
		glVertexAttribL3dvEXT = (PFNGLVERTEXATTRIBL3DVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribL4dvEXT");
	if (p) {
		glVertexAttribL4dvEXT = (PFNGLVERTEXATTRIBL4DVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribLPointerEXT");
	if (p) {
		glVertexAttribLPointerEXT = (PFNGLVERTEXATTRIBLPOINTEREXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVertexAttribLdvEXT");
	if (p) {
		glGetVertexAttribLdvEXT = (PFNGLGETVERTEXATTRIBLDVEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexArrayVertexAttribLOffsetEXT");
	if (p) {
		glVertexArrayVertexAttribLOffsetEXT = (PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramSubroutineParametersuivNV");
	if (p) {
		glProgramSubroutineParametersuivNV = (PFNGLPROGRAMSUBROUTINEPARAMETERSUIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetProgramSubroutineParameteruivNV");
	if (p) {
		glGetProgramSubroutineParameteruivNV = (PFNGLGETPROGRAMSUBROUTINEPARAMETERUIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform1i64NV");
	if (p) {
		glUniform1i64NV = (PFNGLUNIFORM1I64NVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform2i64NV");
	if (p) {
		glUniform2i64NV = (PFNGLUNIFORM2I64NVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform3i64NV");
	if (p) {
		glUniform3i64NV = (PFNGLUNIFORM3I64NVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform4i64NV");
	if (p) {
		glUniform4i64NV = (PFNGLUNIFORM4I64NVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform1i64vNV");
	if (p) {
		glUniform1i64vNV = (PFNGLUNIFORM1I64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform2i64vNV");
	if (p) {
		glUniform2i64vNV = (PFNGLUNIFORM2I64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform3i64vNV");
	if (p) {
		glUniform3i64vNV = (PFNGLUNIFORM3I64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform4i64vNV");
	if (p) {
		glUniform4i64vNV = (PFNGLUNIFORM4I64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform1ui64NV");
	if (p) {
		glUniform1ui64NV = (PFNGLUNIFORM1UI64NVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform2ui64NV");
	if (p) {
		glUniform2ui64NV = (PFNGLUNIFORM2UI64NVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform3ui64NV");
	if (p) {
		glUniform3ui64NV = (PFNGLUNIFORM3UI64NVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform4ui64NV");
	if (p) {
		glUniform4ui64NV = (PFNGLUNIFORM4UI64NVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform1ui64vNV");
	if (p) {
		glUniform1ui64vNV = (PFNGLUNIFORM1UI64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform2ui64vNV");
	if (p) {
		glUniform2ui64vNV = (PFNGLUNIFORM2UI64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform3ui64vNV");
	if (p) {
		glUniform3ui64vNV = (PFNGLUNIFORM3UI64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniform4ui64vNV");
	if (p) {
		glUniform4ui64vNV = (PFNGLUNIFORM4UI64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetUniformi64vNV");
	if (p) {
		glGetUniformi64vNV = (PFNGLGETUNIFORMI64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform1i64NV");
	if (p) {
		glProgramUniform1i64NV = (PFNGLPROGRAMUNIFORM1I64NVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform2i64NV");
	if (p) {
		glProgramUniform2i64NV = (PFNGLPROGRAMUNIFORM2I64NVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform3i64NV");
	if (p) {
		glProgramUniform3i64NV = (PFNGLPROGRAMUNIFORM3I64NVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform4i64NV");
	if (p) {
		glProgramUniform4i64NV = (PFNGLPROGRAMUNIFORM4I64NVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform1i64vNV");
	if (p) {
		glProgramUniform1i64vNV = (PFNGLPROGRAMUNIFORM1I64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform2i64vNV");
	if (p) {
		glProgramUniform2i64vNV = (PFNGLPROGRAMUNIFORM2I64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform3i64vNV");
	if (p) {
		glProgramUniform3i64vNV = (PFNGLPROGRAMUNIFORM3I64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform4i64vNV");
	if (p) {
		glProgramUniform4i64vNV = (PFNGLPROGRAMUNIFORM4I64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform1ui64NV");
	if (p) {
		glProgramUniform1ui64NV = (PFNGLPROGRAMUNIFORM1UI64NVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform2ui64NV");
	if (p) {
		glProgramUniform2ui64NV = (PFNGLPROGRAMUNIFORM2UI64NVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform3ui64NV");
	if (p) {
		glProgramUniform3ui64NV = (PFNGLPROGRAMUNIFORM3UI64NVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform4ui64NV");
	if (p) {
		glProgramUniform4ui64NV = (PFNGLPROGRAMUNIFORM4UI64NVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform1ui64vNV");
	if (p) {
		glProgramUniform1ui64vNV = (PFNGLPROGRAMUNIFORM1UI64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform2ui64vNV");
	if (p) {
		glProgramUniform2ui64vNV = (PFNGLPROGRAMUNIFORM2UI64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform3ui64vNV");
	if (p) {
		glProgramUniform3ui64vNV = (PFNGLPROGRAMUNIFORM3UI64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniform4ui64vNV");
	if (p) {
		glProgramUniform4ui64vNV = (PFNGLPROGRAMUNIFORM4UI64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribL1i64NV");
	if (p) {
		glVertexAttribL1i64NV = (PFNGLVERTEXATTRIBL1I64NVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribL2i64NV");
	if (p) {
		glVertexAttribL2i64NV = (PFNGLVERTEXATTRIBL2I64NVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribL3i64NV");
	if (p) {
		glVertexAttribL3i64NV = (PFNGLVERTEXATTRIBL3I64NVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribL4i64NV");
	if (p) {
		glVertexAttribL4i64NV = (PFNGLVERTEXATTRIBL4I64NVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribL1i64vNV");
	if (p) {
		glVertexAttribL1i64vNV = (PFNGLVERTEXATTRIBL1I64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribL2i64vNV");
	if (p) {
		glVertexAttribL2i64vNV = (PFNGLVERTEXATTRIBL2I64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribL3i64vNV");
	if (p) {
		glVertexAttribL3i64vNV = (PFNGLVERTEXATTRIBL3I64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribL4i64vNV");
	if (p) {
		glVertexAttribL4i64vNV = (PFNGLVERTEXATTRIBL4I64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribL1ui64NV");
	if (p) {
		glVertexAttribL1ui64NV = (PFNGLVERTEXATTRIBL1UI64NVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribL2ui64NV");
	if (p) {
		glVertexAttribL2ui64NV = (PFNGLVERTEXATTRIBL2UI64NVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribL3ui64NV");
	if (p) {
		glVertexAttribL3ui64NV = (PFNGLVERTEXATTRIBL3UI64NVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribL4ui64NV");
	if (p) {
		glVertexAttribL4ui64NV = (PFNGLVERTEXATTRIBL4UI64NVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribL1ui64vNV");
	if (p) {
		glVertexAttribL1ui64vNV = (PFNGLVERTEXATTRIBL1UI64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribL2ui64vNV");
	if (p) {
		glVertexAttribL2ui64vNV = (PFNGLVERTEXATTRIBL2UI64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribL3ui64vNV");
	if (p) {
		glVertexAttribL3ui64vNV = (PFNGLVERTEXATTRIBL3UI64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribL4ui64vNV");
	if (p) {
		glVertexAttribL4ui64vNV = (PFNGLVERTEXATTRIBL4UI64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVertexAttribLi64vNV");
	if (p) {
		glGetVertexAttribLi64vNV = (PFNGLGETVERTEXATTRIBLI64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetVertexAttribLui64vNV");
	if (p) {
		glGetVertexAttribLui64vNV = (PFNGLGETVERTEXATTRIBLUI64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVertexAttribLFormatNV");
	if (p) {
		glVertexAttribLFormatNV = (PFNGLVERTEXATTRIBLFORMATNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGenNamesAMD");
	if (p) {
		glGenNamesAMD = (PFNGLGENNAMESAMDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDeleteNamesAMD");
	if (p) {
		glDeleteNamesAMD = (PFNGLDELETENAMESAMDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsNameAMD");
	if (p) {
		glIsNameAMD = (PFNGLISNAMEAMDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDebugMessageEnableAMD");
	if (p) {
		glDebugMessageEnableAMD = (PFNGLDEBUGMESSAGEENABLEAMDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDebugMessageInsertAMD");
	if (p) {
		glDebugMessageInsertAMD = (PFNGLDEBUGMESSAGEINSERTAMDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDebugMessageCallbackAMD");
	if (p) {
		glDebugMessageCallbackAMD = (PFNGLDEBUGMESSAGECALLBACKAMDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetDebugMessageLogAMD");
	if (p) {
		glGetDebugMessageLogAMD = (PFNGLGETDEBUGMESSAGELOGAMDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVDPAUInitNV");
	if (p) {
		glVDPAUInitNV = (PFNGLVDPAUINITNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVDPAUFiniNV");
	if (p) {
		glVDPAUFiniNV = (PFNGLVDPAUFININVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVDPAURegisterVideoSurfaceNV");
	if (p) {
		glVDPAURegisterVideoSurfaceNV = (PFNGLVDPAUREGISTERVIDEOSURFACENVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVDPAURegisterOutputSurfaceNV");
	if (p) {
		glVDPAURegisterOutputSurfaceNV = (PFNGLVDPAUREGISTEROUTPUTSURFACENVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVDPAUIsSurfaceNV");
	if (p) {
		glVDPAUIsSurfaceNV = (PFNGLVDPAUISSURFACENVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVDPAUUnregisterSurfaceNV");
	if (p) {
		glVDPAUUnregisterSurfaceNV = (PFNGLVDPAUUNREGISTERSURFACENVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVDPAUGetSurfaceivNV");
	if (p) {
		glVDPAUGetSurfaceivNV = (PFNGLVDPAUGETSURFACEIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVDPAUSurfaceAccessNV");
	if (p) {
		glVDPAUSurfaceAccessNV = (PFNGLVDPAUSURFACEACCESSNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVDPAUMapSurfacesNV");
	if (p) {
		glVDPAUMapSurfacesNV = (PFNGLVDPAUMAPSURFACESNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glVDPAUUnmapSurfacesNV");
	if (p) {
		glVDPAUUnmapSurfacesNV = (PFNGLVDPAUUNMAPSURFACESNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexImage2DMultisampleCoverageNV");
	if (p) {
		glTexImage2DMultisampleCoverageNV = (PFNGLTEXIMAGE2DMULTISAMPLECOVERAGENVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexImage3DMultisampleCoverageNV");
	if (p) {
		glTexImage3DMultisampleCoverageNV = (PFNGLTEXIMAGE3DMULTISAMPLECOVERAGENVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTextureImage2DMultisampleNV");
	if (p) {
		glTextureImage2DMultisampleNV = (PFNGLTEXTUREIMAGE2DMULTISAMPLENVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTextureImage3DMultisampleNV");
	if (p) {
		glTextureImage3DMultisampleNV = (PFNGLTEXTUREIMAGE3DMULTISAMPLENVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTextureImage2DMultisampleCoverageNV");
	if (p) {
		glTextureImage2DMultisampleCoverageNV = (PFNGLTEXTUREIMAGE2DMULTISAMPLECOVERAGENVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTextureImage3DMultisampleCoverageNV");
	if (p) {
		glTextureImage3DMultisampleCoverageNV = (PFNGLTEXTUREIMAGE3DMULTISAMPLECOVERAGENVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glSetMultisamplefvAMD");
	if (p) {
		glSetMultisamplefvAMD = (PFNGLSETMULTISAMPLEFVAMDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glImportSyncEXT");
	if (p) {
		glImportSyncEXT = (PFNGLIMPORTSYNCEXTPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiDrawArraysIndirectAMD");
	if (p) {
		glMultiDrawArraysIndirectAMD = (PFNGLMULTIDRAWARRAYSINDIRECTAMDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMultiDrawElementsIndirectAMD");
	if (p) {
		glMultiDrawElementsIndirectAMD = (PFNGLMULTIDRAWELEMENTSINDIRECTAMDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGenPathsNV");
	if (p) {
		glGenPathsNV = (PFNGLGENPATHSNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glDeletePathsNV");
	if (p) {
		glDeletePathsNV = (PFNGLDELETEPATHSNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsPathNV");
	if (p) {
		glIsPathNV = (PFNGLISPATHNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPathCommandsNV");
	if (p) {
		glPathCommandsNV = (PFNGLPATHCOMMANDSNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPathCoordsNV");
	if (p) {
		glPathCoordsNV = (PFNGLPATHCOORDSNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPathSubCommandsNV");
	if (p) {
		glPathSubCommandsNV = (PFNGLPATHSUBCOMMANDSNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPathSubCoordsNV");
	if (p) {
		glPathSubCoordsNV = (PFNGLPATHSUBCOORDSNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPathStringNV");
	if (p) {
		glPathStringNV = (PFNGLPATHSTRINGNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPathGlyphsNV");
	if (p) {
		glPathGlyphsNV = (PFNGLPATHGLYPHSNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPathGlyphRangeNV");
	if (p) {
		glPathGlyphRangeNV = (PFNGLPATHGLYPHRANGENVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glWeightPathsNV");
	if (p) {
		glWeightPathsNV = (PFNGLWEIGHTPATHSNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCopyPathNV");
	if (p) {
		glCopyPathNV = (PFNGLCOPYPATHNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glInterpolatePathsNV");
	if (p) {
		glInterpolatePathsNV = (PFNGLINTERPOLATEPATHSNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTransformPathNV");
	if (p) {
		glTransformPathNV = (PFNGLTRANSFORMPATHNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPathParameterivNV");
	if (p) {
		glPathParameterivNV = (PFNGLPATHPARAMETERIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPathParameteriNV");
	if (p) {
		glPathParameteriNV = (PFNGLPATHPARAMETERINVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPathParameterfvNV");
	if (p) {
		glPathParameterfvNV = (PFNGLPATHPARAMETERFVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPathParameterfNV");
	if (p) {
		glPathParameterfNV = (PFNGLPATHPARAMETERFNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPathDashArrayNV");
	if (p) {
		glPathDashArrayNV = (PFNGLPATHDASHARRAYNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPathStencilFuncNV");
	if (p) {
		glPathStencilFuncNV = (PFNGLPATHSTENCILFUNCNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPathStencilDepthOffsetNV");
	if (p) {
		glPathStencilDepthOffsetNV = (PFNGLPATHSTENCILDEPTHOFFSETNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glStencilFillPathNV");
	if (p) {
		glStencilFillPathNV = (PFNGLSTENCILFILLPATHNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glStencilStrokePathNV");
	if (p) {
		glStencilStrokePathNV = (PFNGLSTENCILSTROKEPATHNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glStencilFillPathInstancedNV");
	if (p) {
		glStencilFillPathInstancedNV = (PFNGLSTENCILFILLPATHINSTANCEDNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glStencilStrokePathInstancedNV");
	if (p) {
		glStencilStrokePathInstancedNV = (PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPathCoverDepthFuncNV");
	if (p) {
		glPathCoverDepthFuncNV = (PFNGLPATHCOVERDEPTHFUNCNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPathColorGenNV");
	if (p) {
		glPathColorGenNV = (PFNGLPATHCOLORGENNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPathTexGenNV");
	if (p) {
		glPathTexGenNV = (PFNGLPATHTEXGENNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPathFogGenNV");
	if (p) {
		glPathFogGenNV = (PFNGLPATHFOGGENNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCoverFillPathNV");
	if (p) {
		glCoverFillPathNV = (PFNGLCOVERFILLPATHNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCoverStrokePathNV");
	if (p) {
		glCoverStrokePathNV = (PFNGLCOVERSTROKEPATHNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCoverFillPathInstancedNV");
	if (p) {
		glCoverFillPathInstancedNV = (PFNGLCOVERFILLPATHINSTANCEDNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glCoverStrokePathInstancedNV");
	if (p) {
		glCoverStrokePathInstancedNV = (PFNGLCOVERSTROKEPATHINSTANCEDNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetPathParameterivNV");
	if (p) {
		glGetPathParameterivNV = (PFNGLGETPATHPARAMETERIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetPathParameterfvNV");
	if (p) {
		glGetPathParameterfvNV = (PFNGLGETPATHPARAMETERFVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetPathCommandsNV");
	if (p) {
		glGetPathCommandsNV = (PFNGLGETPATHCOMMANDSNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetPathCoordsNV");
	if (p) {
		glGetPathCoordsNV = (PFNGLGETPATHCOORDSNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetPathDashArrayNV");
	if (p) {
		glGetPathDashArrayNV = (PFNGLGETPATHDASHARRAYNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetPathMetricsNV");
	if (p) {
		glGetPathMetricsNV = (PFNGLGETPATHMETRICSNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetPathMetricRangeNV");
	if (p) {
		glGetPathMetricRangeNV = (PFNGLGETPATHMETRICRANGENVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetPathSpacingNV");
	if (p) {
		glGetPathSpacingNV = (PFNGLGETPATHSPACINGNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetPathColorGenivNV");
	if (p) {
		glGetPathColorGenivNV = (PFNGLGETPATHCOLORGENIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetPathColorGenfvNV");
	if (p) {
		glGetPathColorGenfvNV = (PFNGLGETPATHCOLORGENFVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetPathTexGenivNV");
	if (p) {
		glGetPathTexGenivNV = (PFNGLGETPATHTEXGENIVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetPathTexGenfvNV");
	if (p) {
		glGetPathTexGenfvNV = (PFNGLGETPATHTEXGENFVNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsPointInFillPathNV");
	if (p) {
		glIsPointInFillPathNV = (PFNGLISPOINTINFILLPATHNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsPointInStrokePathNV");
	if (p) {
		glIsPointInStrokePathNV = (PFNGLISPOINTINSTROKEPATHNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetPathLengthNV");
	if (p) {
		glGetPathLengthNV = (PFNGLGETPATHLENGTHNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glPointAlongPathNV");
	if (p) {
		glPointAlongPathNV = (PFNGLPOINTALONGPATHNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glStencilOpValueAMD");
	if (p) {
		glStencilOpValueAMD = (PFNGLSTENCILOPVALUEAMDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetTextureHandleNV");
	if (p) {
		glGetTextureHandleNV = (PFNGLGETTEXTUREHANDLENVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetTextureSamplerHandleNV");
	if (p) {
		glGetTextureSamplerHandleNV = (PFNGLGETTEXTURESAMPLERHANDLENVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMakeTextureHandleResidentNV");
	if (p) {
		glMakeTextureHandleResidentNV = (PFNGLMAKETEXTUREHANDLERESIDENTNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMakeTextureHandleNonResidentNV");
	if (p) {
		glMakeTextureHandleNonResidentNV = (PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glGetImageHandleNV");
	if (p) {
		glGetImageHandleNV = (PFNGLGETIMAGEHANDLENVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMakeImageHandleResidentNV");
	if (p) {
		glMakeImageHandleResidentNV = (PFNGLMAKEIMAGEHANDLERESIDENTNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glMakeImageHandleNonResidentNV");
	if (p) {
		glMakeImageHandleNonResidentNV = (PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniformHandleui64NV");
	if (p) {
		glUniformHandleui64NV = (PFNGLUNIFORMHANDLEUI64NVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glUniformHandleui64vNV");
	if (p) {
		glUniformHandleui64vNV = (PFNGLUNIFORMHANDLEUI64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformHandleui64NV");
	if (p) {
		glProgramUniformHandleui64NV = (PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glProgramUniformHandleui64vNV");
	if (p) {
		glProgramUniformHandleui64vNV = (PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsTextureHandleResidentNV");
	if (p) {
		glIsTextureHandleResidentNV = (PFNGLISTEXTUREHANDLERESIDENTNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glIsImageHandleResidentNV");
	if (p) {
		glIsImageHandleResidentNV = (PFNGLISIMAGEHANDLERESIDENTNVPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTexStorageSparseAMD");
	if (p) {
		glTexStorageSparseAMD = (PFNGLTEXSTORAGESPARSEAMDPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glTextureStorageSparseAMD");
	if (p) {
		glTextureStorageSparseAMD = (PFNGLTEXTURESTORAGESPARSEAMDPROC)p;
		m_count++;
	}
	return (m_count > 0);
}
