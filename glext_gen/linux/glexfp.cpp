#include "glexfp.h"
#include <stdlib.h>

/**
 * This is an automatically generated file: do not edit
 * Generated on Tue Nov 13 22:12:26 2012
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
	return 1564;
}//Known

//----------------------------------------------------------------------------

GLAPI void APIENTRY stub_glBlendColor (GLclampf, GLclampf, GLclampf, GLclampf) {
}
GLAPI void APIENTRY stub_glBlendEquation (GLenum) {
}
GLAPI void APIENTRY stub_glDrawRangeElements (GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glTexImage3D (GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glTexSubImage3D (GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glCopyTexSubImage3D (GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) {
}
GLAPI void APIENTRY stub_glColorTable (GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glColorTableParameterfv (GLenum, GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glColorTableParameteriv (GLenum, GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glCopyColorTable (GLenum, GLenum, GLint, GLint, GLsizei) {
}
GLAPI void APIENTRY stub_glGetColorTable (GLenum, GLenum, GLenum, GLvoid *) {
}
GLAPI void APIENTRY stub_glGetColorTableParameterfv (GLenum, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetColorTableParameteriv (GLenum, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glColorSubTable (GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glCopyColorSubTable (GLenum, GLsizei, GLint, GLint, GLsizei) {
}
GLAPI void APIENTRY stub_glConvolutionFilter1D (GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glConvolutionFilter2D (GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glConvolutionParameterf (GLenum, GLenum, GLfloat) {
}
GLAPI void APIENTRY stub_glConvolutionParameterfv (GLenum, GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glConvolutionParameteri (GLenum, GLenum, GLint) {
}
GLAPI void APIENTRY stub_glConvolutionParameteriv (GLenum, GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glCopyConvolutionFilter1D (GLenum, GLenum, GLint, GLint, GLsizei) {
}
GLAPI void APIENTRY stub_glCopyConvolutionFilter2D (GLenum, GLenum, GLint, GLint, GLsizei, GLsizei) {
}
GLAPI void APIENTRY stub_glGetConvolutionFilter (GLenum, GLenum, GLenum, GLvoid *) {
}
GLAPI void APIENTRY stub_glGetConvolutionParameterfv (GLenum, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetConvolutionParameteriv (GLenum, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetSeparableFilter (GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *) {
}
GLAPI void APIENTRY stub_glSeparableFilter2D (GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *) {
}
GLAPI void APIENTRY stub_glGetHistogram (GLenum, GLboolean, GLenum, GLenum, GLvoid *) {
}
GLAPI void APIENTRY stub_glGetHistogramParameterfv (GLenum, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetHistogramParameteriv (GLenum, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetMinmax (GLenum, GLboolean, GLenum, GLenum, GLvoid *) {
}
GLAPI void APIENTRY stub_glGetMinmaxParameterfv (GLenum, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetMinmaxParameteriv (GLenum, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glHistogram (GLenum, GLsizei, GLenum, GLboolean) {
}
GLAPI void APIENTRY stub_glMinmax (GLenum, GLenum, GLboolean) {
}
GLAPI void APIENTRY stub_glResetHistogram (GLenum) {
}
GLAPI void APIENTRY stub_glResetMinmax (GLenum) {
}
GLAPI void APIENTRY stub_glActiveTexture (GLenum) {
}
GLAPI void APIENTRY stub_glSampleCoverage (GLclampf, GLboolean) {
}
GLAPI void APIENTRY stub_glCompressedTexImage3D (GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glCompressedTexImage2D (GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glCompressedTexImage1D (GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glCompressedTexSubImage3D (GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glCompressedTexSubImage2D (GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glCompressedTexSubImage1D (GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glGetCompressedTexImage (GLenum, GLint, GLvoid *) {
}
GLAPI void APIENTRY stub_glClientActiveTexture (GLenum) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1d (GLenum, GLdouble) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1dv (GLenum, const GLdouble *) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1f (GLenum, GLfloat) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1fv (GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1i (GLenum, GLint) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1iv (GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1s (GLenum, GLshort) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1sv (GLenum, const GLshort *) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2d (GLenum, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2dv (GLenum, const GLdouble *) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2f (GLenum, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2fv (GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2i (GLenum, GLint, GLint) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2iv (GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2s (GLenum, GLshort, GLshort) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2sv (GLenum, const GLshort *) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3d (GLenum, GLdouble, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3dv (GLenum, const GLdouble *) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3f (GLenum, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3fv (GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3i (GLenum, GLint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3iv (GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3s (GLenum, GLshort, GLshort, GLshort) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3sv (GLenum, const GLshort *) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4d (GLenum, GLdouble, GLdouble, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4dv (GLenum, const GLdouble *) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4f (GLenum, GLfloat, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4fv (GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4i (GLenum, GLint, GLint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4iv (GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4s (GLenum, GLshort, GLshort, GLshort, GLshort) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4sv (GLenum, const GLshort *) {
}
GLAPI void APIENTRY stub_glLoadTransposeMatrixf (const GLfloat *) {
}
GLAPI void APIENTRY stub_glLoadTransposeMatrixd (const GLdouble *) {
}
GLAPI void APIENTRY stub_glMultTransposeMatrixf (const GLfloat *) {
}
GLAPI void APIENTRY stub_glMultTransposeMatrixd (const GLdouble *) {
}
GLAPI void APIENTRY stub_glBlendFuncSeparate (GLenum, GLenum, GLenum, GLenum) {
}
GLAPI void APIENTRY stub_glMultiDrawArrays (GLenum, GLint *, GLsizei *, GLsizei) {
}
GLAPI void APIENTRY stub_glMultiDrawElements (GLenum, const GLsizei *, GLenum, const GLvoid* *, GLsizei) {
}
GLAPI void APIENTRY stub_glPointParameterf (GLenum, GLfloat) {
}
GLAPI void APIENTRY stub_glPointParameterfv (GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glPointParameteri (GLenum, GLint) {
}
GLAPI void APIENTRY stub_glPointParameteriv (GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glFogCoordf (GLfloat) {
}
GLAPI void APIENTRY stub_glFogCoordfv (const GLfloat *) {
}
GLAPI void APIENTRY stub_glFogCoordd (GLdouble) {
}
GLAPI void APIENTRY stub_glFogCoorddv (const GLdouble *) {
}
GLAPI void APIENTRY stub_glFogCoordPointer (GLenum, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glSecondaryColor3b (GLbyte, GLbyte, GLbyte) {
}
GLAPI void APIENTRY stub_glSecondaryColor3bv (const GLbyte *) {
}
GLAPI void APIENTRY stub_glSecondaryColor3d (GLdouble, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glSecondaryColor3dv (const GLdouble *) {
}
GLAPI void APIENTRY stub_glSecondaryColor3f (GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glSecondaryColor3fv (const GLfloat *) {
}
GLAPI void APIENTRY stub_glSecondaryColor3i (GLint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glSecondaryColor3iv (const GLint *) {
}
GLAPI void APIENTRY stub_glSecondaryColor3s (GLshort, GLshort, GLshort) {
}
GLAPI void APIENTRY stub_glSecondaryColor3sv (const GLshort *) {
}
GLAPI void APIENTRY stub_glSecondaryColor3ub (GLubyte, GLubyte, GLubyte) {
}
GLAPI void APIENTRY stub_glSecondaryColor3ubv (const GLubyte *) {
}
GLAPI void APIENTRY stub_glSecondaryColor3ui (GLuint, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glSecondaryColor3uiv (const GLuint *) {
}
GLAPI void APIENTRY stub_glSecondaryColor3us (GLushort, GLushort, GLushort) {
}
GLAPI void APIENTRY stub_glSecondaryColor3usv (const GLushort *) {
}
GLAPI void APIENTRY stub_glSecondaryColorPointer (GLint, GLenum, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glWindowPos2d (GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glWindowPos2dv (const GLdouble *) {
}
GLAPI void APIENTRY stub_glWindowPos2f (GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glWindowPos2fv (const GLfloat *) {
}
GLAPI void APIENTRY stub_glWindowPos2i (GLint, GLint) {
}
GLAPI void APIENTRY stub_glWindowPos2iv (const GLint *) {
}
GLAPI void APIENTRY stub_glWindowPos2s (GLshort, GLshort) {
}
GLAPI void APIENTRY stub_glWindowPos2sv (const GLshort *) {
}
GLAPI void APIENTRY stub_glWindowPos3d (GLdouble, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glWindowPos3dv (const GLdouble *) {
}
GLAPI void APIENTRY stub_glWindowPos3f (GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glWindowPos3fv (const GLfloat *) {
}
GLAPI void APIENTRY stub_glWindowPos3i (GLint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glWindowPos3iv (const GLint *) {
}
GLAPI void APIENTRY stub_glWindowPos3s (GLshort, GLshort, GLshort) {
}
GLAPI void APIENTRY stub_glWindowPos3sv (const GLshort *) {
}
GLAPI void APIENTRY stub_glGenQueries (GLsizei, GLuint *) {
}
GLAPI void APIENTRY stub_glDeleteQueries (GLsizei, const GLuint *) {
}
GLAPI GLboolean APIENTRY stub_glIsQuery (GLuint) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glBeginQuery (GLenum, GLuint) {
}
GLAPI void APIENTRY stub_glEndQuery (GLenum) {
}
GLAPI void APIENTRY stub_glGetQueryiv (GLenum, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetQueryObjectiv (GLuint, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetQueryObjectuiv (GLuint, GLenum, GLuint *) {
}
GLAPI void APIENTRY stub_glBindBuffer (GLenum, GLuint) {
}
GLAPI void APIENTRY stub_glDeleteBuffers (GLsizei, const GLuint *) {
}
GLAPI void APIENTRY stub_glGenBuffers (GLsizei, GLuint *) {
}
GLAPI GLboolean APIENTRY stub_glIsBuffer (GLuint) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glBufferData (GLenum, GLsizeiptr, const GLvoid *, GLenum) {
}
GLAPI void APIENTRY stub_glBufferSubData (GLenum, GLintptr, GLsizeiptr, const GLvoid *) {
}
GLAPI void APIENTRY stub_glGetBufferSubData (GLenum, GLintptr, GLsizeiptr, GLvoid *) {
}
GLAPI GLvoid* APIENTRY stub_glMapBuffer (GLenum, GLenum) {
	return (GLvoid*)0;
}
GLAPI GLboolean APIENTRY stub_glUnmapBuffer (GLenum) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glGetBufferParameteriv (GLenum, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetBufferPointerv (GLenum, GLenum, GLvoid* *) {
}
GLAPI void APIENTRY stub_glBlendEquationSeparate (GLenum, GLenum) {
}
GLAPI void APIENTRY stub_glDrawBuffers (GLsizei, const GLenum *) {
}
GLAPI void APIENTRY stub_glStencilOpSeparate (GLenum, GLenum, GLenum, GLenum) {
}
GLAPI void APIENTRY stub_glStencilFuncSeparate (GLenum, GLenum, GLint, GLuint) {
}
GLAPI void APIENTRY stub_glStencilMaskSeparate (GLenum, GLuint) {
}
GLAPI void APIENTRY stub_glAttachShader (GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glBindAttribLocation (GLuint, GLuint, const GLchar *) {
}
GLAPI void APIENTRY stub_glCompileShader (GLuint) {
}
GLAPI GLuint APIENTRY stub_glCreateProgram (void) {
	return (GLuint)0;
}
GLAPI GLuint APIENTRY stub_glCreateShader (GLenum) {
	return (GLuint)0;
}
GLAPI void APIENTRY stub_glDeleteProgram (GLuint) {
}
GLAPI void APIENTRY stub_glDeleteShader (GLuint) {
}
GLAPI void APIENTRY stub_glDetachShader (GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glDisableVertexAttribArray (GLuint) {
}
GLAPI void APIENTRY stub_glEnableVertexAttribArray (GLuint) {
}
GLAPI void APIENTRY stub_glGetActiveAttrib (GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *) {
}
GLAPI void APIENTRY stub_glGetActiveUniform (GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *) {
}
GLAPI void APIENTRY stub_glGetAttachedShaders (GLuint, GLsizei, GLsizei *, GLuint *) {
}
GLAPI GLint APIENTRY stub_glGetAttribLocation (GLuint, const GLchar *) {
	return (GLint)0;
}
GLAPI void APIENTRY stub_glGetProgramiv (GLuint, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetProgramInfoLog (GLuint, GLsizei, GLsizei *, GLchar *) {
}
GLAPI void APIENTRY stub_glGetShaderiv (GLuint, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetShaderInfoLog (GLuint, GLsizei, GLsizei *, GLchar *) {
}
GLAPI void APIENTRY stub_glGetShaderSource (GLuint, GLsizei, GLsizei *, GLchar *) {
}
GLAPI GLint APIENTRY stub_glGetUniformLocation (GLuint, const GLchar *) {
	return (GLint)0;
}
GLAPI void APIENTRY stub_glGetUniformfv (GLuint, GLint, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetUniformiv (GLuint, GLint, GLint *) {
}
GLAPI void APIENTRY stub_glGetVertexAttribdv (GLuint, GLenum, GLdouble *) {
}
GLAPI void APIENTRY stub_glGetVertexAttribfv (GLuint, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetVertexAttribiv (GLuint, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetVertexAttribPointerv (GLuint, GLenum, GLvoid* *) {
}
GLAPI GLboolean APIENTRY stub_glIsProgram (GLuint) {
	return (GLboolean)0;
}
GLAPI GLboolean APIENTRY stub_glIsShader (GLuint) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glLinkProgram (GLuint) {
}
GLAPI void APIENTRY stub_glShaderSource (GLuint, GLsizei, const GLchar* *, const GLint *) {
}
GLAPI void APIENTRY stub_glUseProgram (GLuint) {
}
GLAPI void APIENTRY stub_glUniform1f (GLint, GLfloat) {
}
GLAPI void APIENTRY stub_glUniform2f (GLint, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glUniform3f (GLint, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glUniform4f (GLint, GLfloat, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glUniform1i (GLint, GLint) {
}
GLAPI void APIENTRY stub_glUniform2i (GLint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glUniform3i (GLint, GLint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glUniform4i (GLint, GLint, GLint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glUniform1fv (GLint, GLsizei, const GLfloat *) {
}
GLAPI void APIENTRY stub_glUniform2fv (GLint, GLsizei, const GLfloat *) {
}
GLAPI void APIENTRY stub_glUniform3fv (GLint, GLsizei, const GLfloat *) {
}
GLAPI void APIENTRY stub_glUniform4fv (GLint, GLsizei, const GLfloat *) {
}
GLAPI void APIENTRY stub_glUniform1iv (GLint, GLsizei, const GLint *) {
}
GLAPI void APIENTRY stub_glUniform2iv (GLint, GLsizei, const GLint *) {
}
GLAPI void APIENTRY stub_glUniform3iv (GLint, GLsizei, const GLint *) {
}
GLAPI void APIENTRY stub_glUniform4iv (GLint, GLsizei, const GLint *) {
}
GLAPI void APIENTRY stub_glUniformMatrix2fv (GLint, GLsizei, GLboolean, const GLfloat *) {
}
GLAPI void APIENTRY stub_glUniformMatrix3fv (GLint, GLsizei, GLboolean, const GLfloat *) {
}
GLAPI void APIENTRY stub_glUniformMatrix4fv (GLint, GLsizei, GLboolean, const GLfloat *) {
}
GLAPI void APIENTRY stub_glValidateProgram (GLuint) {
}
GLAPI void APIENTRY stub_glVertexAttrib1d (GLuint, GLdouble) {
}
GLAPI void APIENTRY stub_glVertexAttrib1dv (GLuint, const GLdouble *) {
}
GLAPI void APIENTRY stub_glVertexAttrib1f (GLuint, GLfloat) {
}
GLAPI void APIENTRY stub_glVertexAttrib1fv (GLuint, const GLfloat *) {
}
GLAPI void APIENTRY stub_glVertexAttrib1s (GLuint, GLshort) {
}
GLAPI void APIENTRY stub_glVertexAttrib1sv (GLuint, const GLshort *) {
}
GLAPI void APIENTRY stub_glVertexAttrib2d (GLuint, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glVertexAttrib2dv (GLuint, const GLdouble *) {
}
GLAPI void APIENTRY stub_glVertexAttrib2f (GLuint, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glVertexAttrib2fv (GLuint, const GLfloat *) {
}
GLAPI void APIENTRY stub_glVertexAttrib2s (GLuint, GLshort, GLshort) {
}
GLAPI void APIENTRY stub_glVertexAttrib2sv (GLuint, const GLshort *) {
}
GLAPI void APIENTRY stub_glVertexAttrib3d (GLuint, GLdouble, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glVertexAttrib3dv (GLuint, const GLdouble *) {
}
GLAPI void APIENTRY stub_glVertexAttrib3f (GLuint, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glVertexAttrib3fv (GLuint, const GLfloat *) {
}
GLAPI void APIENTRY stub_glVertexAttrib3s (GLuint, GLshort, GLshort, GLshort) {
}
GLAPI void APIENTRY stub_glVertexAttrib3sv (GLuint, const GLshort *) {
}
GLAPI void APIENTRY stub_glVertexAttrib4Nbv (GLuint, const GLbyte *) {
}
GLAPI void APIENTRY stub_glVertexAttrib4Niv (GLuint, const GLint *) {
}
GLAPI void APIENTRY stub_glVertexAttrib4Nsv (GLuint, const GLshort *) {
}
GLAPI void APIENTRY stub_glVertexAttrib4Nub (GLuint, GLubyte, GLubyte, GLubyte, GLubyte) {
}
GLAPI void APIENTRY stub_glVertexAttrib4Nubv (GLuint, const GLubyte *) {
}
GLAPI void APIENTRY stub_glVertexAttrib4Nuiv (GLuint, const GLuint *) {
}
GLAPI void APIENTRY stub_glVertexAttrib4Nusv (GLuint, const GLushort *) {
}
GLAPI void APIENTRY stub_glVertexAttrib4bv (GLuint, const GLbyte *) {
}
GLAPI void APIENTRY stub_glVertexAttrib4d (GLuint, GLdouble, GLdouble, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glVertexAttrib4dv (GLuint, const GLdouble *) {
}
GLAPI void APIENTRY stub_glVertexAttrib4f (GLuint, GLfloat, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glVertexAttrib4fv (GLuint, const GLfloat *) {
}
GLAPI void APIENTRY stub_glVertexAttrib4iv (GLuint, const GLint *) {
}
GLAPI void APIENTRY stub_glVertexAttrib4s (GLuint, GLshort, GLshort, GLshort, GLshort) {
}
GLAPI void APIENTRY stub_glVertexAttrib4sv (GLuint, const GLshort *) {
}
GLAPI void APIENTRY stub_glVertexAttrib4ubv (GLuint, const GLubyte *) {
}
GLAPI void APIENTRY stub_glVertexAttrib4uiv (GLuint, const GLuint *) {
}
GLAPI void APIENTRY stub_glVertexAttrib4usv (GLuint, const GLushort *) {
}
GLAPI void APIENTRY stub_glVertexAttribPointer (GLuint, GLint, GLenum, GLboolean, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glUniformMatrix2x3fv (GLint, GLsizei, GLboolean, const GLfloat *) {
}
GLAPI void APIENTRY stub_glUniformMatrix3x2fv (GLint, GLsizei, GLboolean, const GLfloat *) {
}
GLAPI void APIENTRY stub_glUniformMatrix2x4fv (GLint, GLsizei, GLboolean, const GLfloat *) {
}
GLAPI void APIENTRY stub_glUniformMatrix4x2fv (GLint, GLsizei, GLboolean, const GLfloat *) {
}
GLAPI void APIENTRY stub_glUniformMatrix3x4fv (GLint, GLsizei, GLboolean, const GLfloat *) {
}
GLAPI void APIENTRY stub_glUniformMatrix4x3fv (GLint, GLsizei, GLboolean, const GLfloat *) {
}
GLAPI void APIENTRY stub_glColorMaski (GLuint, GLboolean, GLboolean, GLboolean, GLboolean) {
}
GLAPI void APIENTRY stub_glGetBooleani_v (GLenum, GLuint, GLboolean *) {
}
GLAPI void APIENTRY stub_glGetIntegeri_v (GLenum, GLuint, GLint *) {
}
GLAPI void APIENTRY stub_glEnablei (GLenum, GLuint) {
}
GLAPI void APIENTRY stub_glDisablei (GLenum, GLuint) {
}
GLAPI GLboolean APIENTRY stub_glIsEnabledi (GLenum, GLuint) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glBeginTransformFeedback (GLenum) {
}
GLAPI void APIENTRY stub_glEndTransformFeedback (void) {
}
GLAPI void APIENTRY stub_glBindBufferRange (GLenum, GLuint, GLuint, GLintptr, GLsizeiptr) {
}
GLAPI void APIENTRY stub_glBindBufferBase (GLenum, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glTransformFeedbackVaryings (GLuint, GLsizei, const GLchar* *, GLenum) {
}
GLAPI void APIENTRY stub_glGetTransformFeedbackVarying (GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *) {
}
GLAPI void APIENTRY stub_glClampColor (GLenum, GLenum) {
}
GLAPI void APIENTRY stub_glBeginConditionalRender (GLuint, GLenum) {
}
GLAPI void APIENTRY stub_glEndConditionalRender (void) {
}
GLAPI void APIENTRY stub_glVertexAttribIPointer (GLuint, GLint, GLenum, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glGetVertexAttribIiv (GLuint, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetVertexAttribIuiv (GLuint, GLenum, GLuint *) {
}
GLAPI void APIENTRY stub_glVertexAttribI1i (GLuint, GLint) {
}
GLAPI void APIENTRY stub_glVertexAttribI2i (GLuint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glVertexAttribI3i (GLuint, GLint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glVertexAttribI4i (GLuint, GLint, GLint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glVertexAttribI1ui (GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glVertexAttribI2ui (GLuint, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glVertexAttribI3ui (GLuint, GLuint, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glVertexAttribI4ui (GLuint, GLuint, GLuint, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glVertexAttribI1iv (GLuint, const GLint *) {
}
GLAPI void APIENTRY stub_glVertexAttribI2iv (GLuint, const GLint *) {
}
GLAPI void APIENTRY stub_glVertexAttribI3iv (GLuint, const GLint *) {
}
GLAPI void APIENTRY stub_glVertexAttribI4iv (GLuint, const GLint *) {
}
GLAPI void APIENTRY stub_glVertexAttribI1uiv (GLuint, const GLuint *) {
}
GLAPI void APIENTRY stub_glVertexAttribI2uiv (GLuint, const GLuint *) {
}
GLAPI void APIENTRY stub_glVertexAttribI3uiv (GLuint, const GLuint *) {
}
GLAPI void APIENTRY stub_glVertexAttribI4uiv (GLuint, const GLuint *) {
}
GLAPI void APIENTRY stub_glVertexAttribI4bv (GLuint, const GLbyte *) {
}
GLAPI void APIENTRY stub_glVertexAttribI4sv (GLuint, const GLshort *) {
}
GLAPI void APIENTRY stub_glVertexAttribI4ubv (GLuint, const GLubyte *) {
}
GLAPI void APIENTRY stub_glVertexAttribI4usv (GLuint, const GLushort *) {
}
GLAPI void APIENTRY stub_glGetUniformuiv (GLuint, GLint, GLuint *) {
}
GLAPI void APIENTRY stub_glBindFragDataLocation (GLuint, GLuint, const GLchar *) {
}
GLAPI GLint APIENTRY stub_glGetFragDataLocation (GLuint, const GLchar *) {
	return (GLint)0;
}
GLAPI void APIENTRY stub_glUniform1ui (GLint, GLuint) {
}
GLAPI void APIENTRY stub_glUniform2ui (GLint, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glUniform3ui (GLint, GLuint, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glUniform4ui (GLint, GLuint, GLuint, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glUniform1uiv (GLint, GLsizei, const GLuint *) {
}
GLAPI void APIENTRY stub_glUniform2uiv (GLint, GLsizei, const GLuint *) {
}
GLAPI void APIENTRY stub_glUniform3uiv (GLint, GLsizei, const GLuint *) {
}
GLAPI void APIENTRY stub_glUniform4uiv (GLint, GLsizei, const GLuint *) {
}
GLAPI void APIENTRY stub_glTexParameterIiv (GLenum, GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glTexParameterIuiv (GLenum, GLenum, const GLuint *) {
}
GLAPI void APIENTRY stub_glGetTexParameterIiv (GLenum, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetTexParameterIuiv (GLenum, GLenum, GLuint *) {
}
GLAPI void APIENTRY stub_glClearBufferiv (GLenum, GLint, const GLint *) {
}
GLAPI void APIENTRY stub_glClearBufferuiv (GLenum, GLint, const GLuint *) {
}
GLAPI void APIENTRY stub_glClearBufferfv (GLenum, GLint, const GLfloat *) {
}
GLAPI void APIENTRY stub_glClearBufferfi (GLenum, GLint, GLfloat, GLint) {
}
GLAPI const GLubyte * APIENTRY stub_glGetStringi (GLenum, GLuint) {
	return (const GLubyte *)0;
}
GLAPI void APIENTRY stub_glDrawArraysInstanced (GLenum, GLint, GLsizei, GLsizei) {
}
GLAPI void APIENTRY stub_glDrawElementsInstanced (GLenum, GLsizei, GLenum, const GLvoid *, GLsizei) {
}
GLAPI void APIENTRY stub_glTexBuffer (GLenum, GLenum, GLuint) {
}
GLAPI void APIENTRY stub_glPrimitiveRestartIndex (GLuint) {
}
GLAPI void APIENTRY stub_glGetInteger64i_v (GLenum, GLuint, GLint64 *) {
}
GLAPI void APIENTRY stub_glGetBufferParameteri64v (GLenum, GLenum, GLint64 *) {
}
GLAPI void APIENTRY stub_glProgramParameteri (GLuint, GLenum, GLint) {
}
GLAPI void APIENTRY stub_glFramebufferTexture (GLenum, GLenum, GLuint, GLint) {
}
GLAPI void APIENTRY stub_glFramebufferTextureFace (GLenum, GLenum, GLuint, GLint, GLenum) {
}
GLAPI void APIENTRY stub_glActiveTextureARB (GLenum) {
}
GLAPI void APIENTRY stub_glClientActiveTextureARB (GLenum) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1dARB (GLenum, GLdouble) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1dvARB (GLenum, const GLdouble *) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1fARB (GLenum, GLfloat) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1fvARB (GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1iARB (GLenum, GLint) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1ivARB (GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1sARB (GLenum, GLshort) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1svARB (GLenum, const GLshort *) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2dARB (GLenum, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2dvARB (GLenum, const GLdouble *) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2fARB (GLenum, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2fvARB (GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2iARB (GLenum, GLint, GLint) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2ivARB (GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2sARB (GLenum, GLshort, GLshort) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2svARB (GLenum, const GLshort *) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3dARB (GLenum, GLdouble, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3dvARB (GLenum, const GLdouble *) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3fARB (GLenum, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3fvARB (GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3iARB (GLenum, GLint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3ivARB (GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3sARB (GLenum, GLshort, GLshort, GLshort) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3svARB (GLenum, const GLshort *) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4dARB (GLenum, GLdouble, GLdouble, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4dvARB (GLenum, const GLdouble *) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4fARB (GLenum, GLfloat, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4fvARB (GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4iARB (GLenum, GLint, GLint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4ivARB (GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4sARB (GLenum, GLshort, GLshort, GLshort, GLshort) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4svARB (GLenum, const GLshort *) {
}
GLAPI void APIENTRY stub_glLoadTransposeMatrixfARB (const GLfloat *) {
}
GLAPI void APIENTRY stub_glLoadTransposeMatrixdARB (const GLdouble *) {
}
GLAPI void APIENTRY stub_glMultTransposeMatrixfARB (const GLfloat *) {
}
GLAPI void APIENTRY stub_glMultTransposeMatrixdARB (const GLdouble *) {
}
GLAPI void APIENTRY stub_glSampleCoverageARB (GLclampf, GLboolean) {
}
GLAPI void APIENTRY stub_glCompressedTexImage3DARB (GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glCompressedTexImage2DARB (GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glCompressedTexImage1DARB (GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glCompressedTexSubImage3DARB (GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glCompressedTexSubImage2DARB (GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glCompressedTexSubImage1DARB (GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glGetCompressedTexImageARB (GLenum, GLint, GLvoid *) {
}
GLAPI void APIENTRY stub_glPointParameterfARB (GLenum, GLfloat) {
}
GLAPI void APIENTRY stub_glPointParameterfvARB (GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glWeightbvARB (GLint, const GLbyte *) {
}
GLAPI void APIENTRY stub_glWeightsvARB (GLint, const GLshort *) {
}
GLAPI void APIENTRY stub_glWeightivARB (GLint, const GLint *) {
}
GLAPI void APIENTRY stub_glWeightfvARB (GLint, const GLfloat *) {
}
GLAPI void APIENTRY stub_glWeightdvARB (GLint, const GLdouble *) {
}
GLAPI void APIENTRY stub_glWeightubvARB (GLint, const GLubyte *) {
}
GLAPI void APIENTRY stub_glWeightusvARB (GLint, const GLushort *) {
}
GLAPI void APIENTRY stub_glWeightuivARB (GLint, const GLuint *) {
}
GLAPI void APIENTRY stub_glWeightPointerARB (GLint, GLenum, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glVertexBlendARB (GLint) {
}
GLAPI void APIENTRY stub_glCurrentPaletteMatrixARB (GLint) {
}
GLAPI void APIENTRY stub_glMatrixIndexubvARB (GLint, const GLubyte *) {
}
GLAPI void APIENTRY stub_glMatrixIndexusvARB (GLint, const GLushort *) {
}
GLAPI void APIENTRY stub_glMatrixIndexuivARB (GLint, const GLuint *) {
}
GLAPI void APIENTRY stub_glMatrixIndexPointerARB (GLint, GLenum, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glWindowPos2dARB (GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glWindowPos2dvARB (const GLdouble *) {
}
GLAPI void APIENTRY stub_glWindowPos2fARB (GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glWindowPos2fvARB (const GLfloat *) {
}
GLAPI void APIENTRY stub_glWindowPos2iARB (GLint, GLint) {
}
GLAPI void APIENTRY stub_glWindowPos2ivARB (const GLint *) {
}
GLAPI void APIENTRY stub_glWindowPos2sARB (GLshort, GLshort) {
}
GLAPI void APIENTRY stub_glWindowPos2svARB (const GLshort *) {
}
GLAPI void APIENTRY stub_glWindowPos3dARB (GLdouble, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glWindowPos3dvARB (const GLdouble *) {
}
GLAPI void APIENTRY stub_glWindowPos3fARB (GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glWindowPos3fvARB (const GLfloat *) {
}
GLAPI void APIENTRY stub_glWindowPos3iARB (GLint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glWindowPos3ivARB (const GLint *) {
}
GLAPI void APIENTRY stub_glWindowPos3sARB (GLshort, GLshort, GLshort) {
}
GLAPI void APIENTRY stub_glWindowPos3svARB (const GLshort *) {
}
GLAPI void APIENTRY stub_glVertexAttrib1dARB (GLuint, GLdouble) {
}
GLAPI void APIENTRY stub_glVertexAttrib1dvARB (GLuint, const GLdouble *) {
}
GLAPI void APIENTRY stub_glVertexAttrib1fARB (GLuint, GLfloat) {
}
GLAPI void APIENTRY stub_glVertexAttrib1fvARB (GLuint, const GLfloat *) {
}
GLAPI void APIENTRY stub_glVertexAttrib1sARB (GLuint, GLshort) {
}
GLAPI void APIENTRY stub_glVertexAttrib1svARB (GLuint, const GLshort *) {
}
GLAPI void APIENTRY stub_glVertexAttrib2dARB (GLuint, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glVertexAttrib2dvARB (GLuint, const GLdouble *) {
}
GLAPI void APIENTRY stub_glVertexAttrib2fARB (GLuint, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glVertexAttrib2fvARB (GLuint, const GLfloat *) {
}
GLAPI void APIENTRY stub_glVertexAttrib2sARB (GLuint, GLshort, GLshort) {
}
GLAPI void APIENTRY stub_glVertexAttrib2svARB (GLuint, const GLshort *) {
}
GLAPI void APIENTRY stub_glVertexAttrib3dARB (GLuint, GLdouble, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glVertexAttrib3dvARB (GLuint, const GLdouble *) {
}
GLAPI void APIENTRY stub_glVertexAttrib3fARB (GLuint, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glVertexAttrib3fvARB (GLuint, const GLfloat *) {
}
GLAPI void APIENTRY stub_glVertexAttrib3sARB (GLuint, GLshort, GLshort, GLshort) {
}
GLAPI void APIENTRY stub_glVertexAttrib3svARB (GLuint, const GLshort *) {
}
GLAPI void APIENTRY stub_glVertexAttrib4NbvARB (GLuint, const GLbyte *) {
}
GLAPI void APIENTRY stub_glVertexAttrib4NivARB (GLuint, const GLint *) {
}
GLAPI void APIENTRY stub_glVertexAttrib4NsvARB (GLuint, const GLshort *) {
}
GLAPI void APIENTRY stub_glVertexAttrib4NubARB (GLuint, GLubyte, GLubyte, GLubyte, GLubyte) {
}
GLAPI void APIENTRY stub_glVertexAttrib4NubvARB (GLuint, const GLubyte *) {
}
GLAPI void APIENTRY stub_glVertexAttrib4NuivARB (GLuint, const GLuint *) {
}
GLAPI void APIENTRY stub_glVertexAttrib4NusvARB (GLuint, const GLushort *) {
}
GLAPI void APIENTRY stub_glVertexAttrib4bvARB (GLuint, const GLbyte *) {
}
GLAPI void APIENTRY stub_glVertexAttrib4dARB (GLuint, GLdouble, GLdouble, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glVertexAttrib4dvARB (GLuint, const GLdouble *) {
}
GLAPI void APIENTRY stub_glVertexAttrib4fARB (GLuint, GLfloat, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glVertexAttrib4fvARB (GLuint, const GLfloat *) {
}
GLAPI void APIENTRY stub_glVertexAttrib4ivARB (GLuint, const GLint *) {
}
GLAPI void APIENTRY stub_glVertexAttrib4sARB (GLuint, GLshort, GLshort, GLshort, GLshort) {
}
GLAPI void APIENTRY stub_glVertexAttrib4svARB (GLuint, const GLshort *) {
}
GLAPI void APIENTRY stub_glVertexAttrib4ubvARB (GLuint, const GLubyte *) {
}
GLAPI void APIENTRY stub_glVertexAttrib4uivARB (GLuint, const GLuint *) {
}
GLAPI void APIENTRY stub_glVertexAttrib4usvARB (GLuint, const GLushort *) {
}
GLAPI void APIENTRY stub_glVertexAttribPointerARB (GLuint, GLint, GLenum, GLboolean, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glEnableVertexAttribArrayARB (GLuint) {
}
GLAPI void APIENTRY stub_glDisableVertexAttribArrayARB (GLuint) {
}
GLAPI void APIENTRY stub_glProgramStringARB (GLenum, GLenum, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glBindProgramARB (GLenum, GLuint) {
}
GLAPI void APIENTRY stub_glDeleteProgramsARB (GLsizei, const GLuint *) {
}
GLAPI void APIENTRY stub_glGenProgramsARB (GLsizei, GLuint *) {
}
GLAPI void APIENTRY stub_glProgramEnvParameter4dARB (GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glProgramEnvParameter4dvARB (GLenum, GLuint, const GLdouble *) {
}
GLAPI void APIENTRY stub_glProgramEnvParameter4fARB (GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glProgramEnvParameter4fvARB (GLenum, GLuint, const GLfloat *) {
}
GLAPI void APIENTRY stub_glProgramLocalParameter4dARB (GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glProgramLocalParameter4dvARB (GLenum, GLuint, const GLdouble *) {
}
GLAPI void APIENTRY stub_glProgramLocalParameter4fARB (GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glProgramLocalParameter4fvARB (GLenum, GLuint, const GLfloat *) {
}
GLAPI void APIENTRY stub_glGetProgramEnvParameterdvARB (GLenum, GLuint, GLdouble *) {
}
GLAPI void APIENTRY stub_glGetProgramEnvParameterfvARB (GLenum, GLuint, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetProgramLocalParameterdvARB (GLenum, GLuint, GLdouble *) {
}
GLAPI void APIENTRY stub_glGetProgramLocalParameterfvARB (GLenum, GLuint, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetProgramivARB (GLenum, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetProgramStringARB (GLenum, GLenum, GLvoid *) {
}
GLAPI void APIENTRY stub_glGetVertexAttribdvARB (GLuint, GLenum, GLdouble *) {
}
GLAPI void APIENTRY stub_glGetVertexAttribfvARB (GLuint, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetVertexAttribivARB (GLuint, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetVertexAttribPointervARB (GLuint, GLenum, GLvoid* *) {
}
GLAPI GLboolean APIENTRY stub_glIsProgramARB (GLuint) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glBindBufferARB (GLenum, GLuint) {
}
GLAPI void APIENTRY stub_glDeleteBuffersARB (GLsizei, const GLuint *) {
}
GLAPI void APIENTRY stub_glGenBuffersARB (GLsizei, GLuint *) {
}
GLAPI GLboolean APIENTRY stub_glIsBufferARB (GLuint) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glBufferDataARB (GLenum, GLsizeiptrARB, const GLvoid *, GLenum) {
}
GLAPI void APIENTRY stub_glBufferSubDataARB (GLenum, GLintptrARB, GLsizeiptrARB, const GLvoid *) {
}
GLAPI void APIENTRY stub_glGetBufferSubDataARB (GLenum, GLintptrARB, GLsizeiptrARB, GLvoid *) {
}
GLAPI GLvoid* APIENTRY stub_glMapBufferARB (GLenum, GLenum) {
	return (GLvoid*)0;
}
GLAPI GLboolean APIENTRY stub_glUnmapBufferARB (GLenum) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glGetBufferParameterivARB (GLenum, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetBufferPointervARB (GLenum, GLenum, GLvoid* *) {
}
GLAPI void APIENTRY stub_glGenQueriesARB (GLsizei, GLuint *) {
}
GLAPI void APIENTRY stub_glDeleteQueriesARB (GLsizei, const GLuint *) {
}
GLAPI GLboolean APIENTRY stub_glIsQueryARB (GLuint) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glBeginQueryARB (GLenum, GLuint) {
}
GLAPI void APIENTRY stub_glEndQueryARB (GLenum) {
}
GLAPI void APIENTRY stub_glGetQueryivARB (GLenum, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetQueryObjectivARB (GLuint, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetQueryObjectuivARB (GLuint, GLenum, GLuint *) {
}
GLAPI void APIENTRY stub_glDeleteObjectARB (GLhandleARB) {
}
GLAPI GLhandleARB APIENTRY stub_glGetHandleARB (GLenum) {
	return (GLhandleARB)0;
}
GLAPI void APIENTRY stub_glDetachObjectARB (GLhandleARB, GLhandleARB) {
}
GLAPI GLhandleARB APIENTRY stub_glCreateShaderObjectARB (GLenum) {
	return (GLhandleARB)0;
}
GLAPI void APIENTRY stub_glShaderSourceARB (GLhandleARB, GLsizei, const GLcharARB* *, const GLint *) {
}
GLAPI void APIENTRY stub_glCompileShaderARB (GLhandleARB) {
}
GLAPI GLhandleARB APIENTRY stub_glCreateProgramObjectARB (void) {
	return (GLhandleARB)0;
}
GLAPI void APIENTRY stub_glAttachObjectARB (GLhandleARB, GLhandleARB) {
}
GLAPI void APIENTRY stub_glLinkProgramARB (GLhandleARB) {
}
GLAPI void APIENTRY stub_glUseProgramObjectARB (GLhandleARB) {
}
GLAPI void APIENTRY stub_glValidateProgramARB (GLhandleARB) {
}
GLAPI void APIENTRY stub_glUniform1fARB (GLint, GLfloat) {
}
GLAPI void APIENTRY stub_glUniform2fARB (GLint, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glUniform3fARB (GLint, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glUniform4fARB (GLint, GLfloat, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glUniform1iARB (GLint, GLint) {
}
GLAPI void APIENTRY stub_glUniform2iARB (GLint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glUniform3iARB (GLint, GLint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glUniform4iARB (GLint, GLint, GLint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glUniform1fvARB (GLint, GLsizei, const GLfloat *) {
}
GLAPI void APIENTRY stub_glUniform2fvARB (GLint, GLsizei, const GLfloat *) {
}
GLAPI void APIENTRY stub_glUniform3fvARB (GLint, GLsizei, const GLfloat *) {
}
GLAPI void APIENTRY stub_glUniform4fvARB (GLint, GLsizei, const GLfloat *) {
}
GLAPI void APIENTRY stub_glUniform1ivARB (GLint, GLsizei, const GLint *) {
}
GLAPI void APIENTRY stub_glUniform2ivARB (GLint, GLsizei, const GLint *) {
}
GLAPI void APIENTRY stub_glUniform3ivARB (GLint, GLsizei, const GLint *) {
}
GLAPI void APIENTRY stub_glUniform4ivARB (GLint, GLsizei, const GLint *) {
}
GLAPI void APIENTRY stub_glUniformMatrix2fvARB (GLint, GLsizei, GLboolean, const GLfloat *) {
}
GLAPI void APIENTRY stub_glUniformMatrix3fvARB (GLint, GLsizei, GLboolean, const GLfloat *) {
}
GLAPI void APIENTRY stub_glUniformMatrix4fvARB (GLint, GLsizei, GLboolean, const GLfloat *) {
}
GLAPI void APIENTRY stub_glGetObjectParameterfvARB (GLhandleARB, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetObjectParameterivARB (GLhandleARB, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetInfoLogARB (GLhandleARB, GLsizei, GLsizei *, GLcharARB *) {
}
GLAPI void APIENTRY stub_glGetAttachedObjectsARB (GLhandleARB, GLsizei, GLsizei *, GLhandleARB *) {
}
GLAPI GLint APIENTRY stub_glGetUniformLocationARB (GLhandleARB, const GLcharARB *) {
	return (GLint)0;
}
GLAPI void APIENTRY stub_glGetActiveUniformARB (GLhandleARB, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLcharARB *) {
}
GLAPI void APIENTRY stub_glGetUniformfvARB (GLhandleARB, GLint, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetUniformivARB (GLhandleARB, GLint, GLint *) {
}
GLAPI void APIENTRY stub_glGetShaderSourceARB (GLhandleARB, GLsizei, GLsizei *, GLcharARB *) {
}
GLAPI void APIENTRY stub_glBindAttribLocationARB (GLhandleARB, GLuint, const GLcharARB *) {
}
GLAPI void APIENTRY stub_glGetActiveAttribARB (GLhandleARB, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLcharARB *) {
}
GLAPI GLint APIENTRY stub_glGetAttribLocationARB (GLhandleARB, const GLcharARB *) {
	return (GLint)0;
}
GLAPI void APIENTRY stub_glDrawBuffersARB (GLsizei, const GLenum *) {
}
GLAPI void APIENTRY stub_glClampColorARB (GLenum, GLenum) {
}
GLAPI void APIENTRY stub_glDrawArraysInstancedARB (GLenum, GLint, GLsizei, GLsizei) {
}
GLAPI void APIENTRY stub_glDrawElementsInstancedARB (GLenum, GLsizei, GLenum, const GLvoid *, GLsizei) {
}
GLAPI GLboolean APIENTRY stub_glIsRenderbuffer (GLuint) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glBindRenderbuffer (GLenum, GLuint) {
}
GLAPI void APIENTRY stub_glDeleteRenderbuffers (GLsizei, const GLuint *) {
}
GLAPI void APIENTRY stub_glGenRenderbuffers (GLsizei, GLuint *) {
}
GLAPI void APIENTRY stub_glRenderbufferStorage (GLenum, GLenum, GLsizei, GLsizei) {
}
GLAPI void APIENTRY stub_glGetRenderbufferParameteriv (GLenum, GLenum, GLint *) {
}
GLAPI GLboolean APIENTRY stub_glIsFramebuffer (GLuint) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glBindFramebuffer (GLenum, GLuint) {
}
GLAPI void APIENTRY stub_glDeleteFramebuffers (GLsizei, const GLuint *) {
}
GLAPI void APIENTRY stub_glGenFramebuffers (GLsizei, GLuint *) {
}
GLAPI GLenum APIENTRY stub_glCheckFramebufferStatus (GLenum) {
	return (GLenum)0;
}
GLAPI void APIENTRY stub_glFramebufferTexture1D (GLenum, GLenum, GLenum, GLuint, GLint) {
}
GLAPI void APIENTRY stub_glFramebufferTexture2D (GLenum, GLenum, GLenum, GLuint, GLint) {
}
GLAPI void APIENTRY stub_glFramebufferTexture3D (GLenum, GLenum, GLenum, GLuint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glFramebufferRenderbuffer (GLenum, GLenum, GLenum, GLuint) {
}
GLAPI void APIENTRY stub_glGetFramebufferAttachmentParameteriv (GLenum, GLenum, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGenerateMipmap (GLenum) {
}
GLAPI void APIENTRY stub_glBlitFramebuffer (GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum) {
}
GLAPI void APIENTRY stub_glRenderbufferStorageMultisample (GLenum, GLsizei, GLenum, GLsizei, GLsizei) {
}
GLAPI void APIENTRY stub_glFramebufferTextureLayer (GLenum, GLenum, GLuint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glProgramParameteriARB (GLuint, GLenum, GLint) {
}
GLAPI void APIENTRY stub_glFramebufferTextureARB (GLenum, GLenum, GLuint, GLint) {
}
GLAPI void APIENTRY stub_glFramebufferTextureLayerARB (GLenum, GLenum, GLuint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glFramebufferTextureFaceARB (GLenum, GLenum, GLuint, GLint, GLenum) {
}
GLAPI void APIENTRY stub_glVertexAttribDivisorARB (GLuint, GLuint) {
}
GLAPI GLvoid* APIENTRY stub_glMapBufferRange (GLenum, GLintptr, GLsizeiptr, GLbitfield) {
	return (GLvoid*)0;
}
GLAPI void APIENTRY stub_glFlushMappedBufferRange (GLenum, GLintptr, GLsizeiptr) {
}
GLAPI void APIENTRY stub_glTexBufferARB (GLenum, GLenum, GLuint) {
}
GLAPI void APIENTRY stub_glBindVertexArray (GLuint) {
}
GLAPI void APIENTRY stub_glDeleteVertexArrays (GLsizei, const GLuint *) {
}
GLAPI void APIENTRY stub_glGenVertexArrays (GLsizei, GLuint *) {
}
GLAPI GLboolean APIENTRY stub_glIsVertexArray (GLuint) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glGetUniformIndices (GLuint, GLsizei, const GLchar* *, GLuint *) {
}
GLAPI void APIENTRY stub_glGetActiveUniformsiv (GLuint, GLsizei, const GLuint *, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetActiveUniformName (GLuint, GLuint, GLsizei, GLsizei *, GLchar *) {
}
GLAPI GLuint APIENTRY stub_glGetUniformBlockIndex (GLuint, const GLchar *) {
	return (GLuint)0;
}
GLAPI void APIENTRY stub_glGetActiveUniformBlockiv (GLuint, GLuint, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetActiveUniformBlockName (GLuint, GLuint, GLsizei, GLsizei *, GLchar *) {
}
GLAPI void APIENTRY stub_glUniformBlockBinding (GLuint, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glCopyBufferSubData (GLenum, GLenum, GLintptr, GLintptr, GLsizeiptr) {
}
GLAPI void APIENTRY stub_glDrawElementsBaseVertex (GLenum, GLsizei, GLenum, const GLvoid *, GLint) {
}
GLAPI void APIENTRY stub_glDrawRangeElementsBaseVertex (GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *, GLint) {
}
GLAPI void APIENTRY stub_glDrawElementsInstancedBaseVertex (GLenum, GLsizei, GLenum, const GLvoid *, GLsizei, GLint) {
}
GLAPI void APIENTRY stub_glMultiDrawElementsBaseVertex (GLenum, const GLsizei *, GLenum, const GLvoid* *, GLsizei, const GLint *) {
}
GLAPI void APIENTRY stub_glProvokingVertex (GLenum) {
}
GLAPI GLsync APIENTRY stub_glFenceSync (GLenum, GLbitfield) {
	return (GLsync)0;
}
GLAPI GLboolean APIENTRY stub_glIsSync (GLsync) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glDeleteSync (GLsync) {
}
GLAPI GLenum APIENTRY stub_glClientWaitSync (GLsync, GLbitfield, GLuint64) {
	return (GLenum)0;
}
GLAPI void APIENTRY stub_glWaitSync (GLsync, GLbitfield, GLuint64) {
}
GLAPI void APIENTRY stub_glGetInteger64v (GLenum, GLint64 *) {
}
GLAPI void APIENTRY stub_glGetSynciv (GLsync, GLenum, GLsizei, GLsizei *, GLint *) {
}
GLAPI void APIENTRY stub_glTexImage2DMultisample (GLenum, GLsizei, GLint, GLsizei, GLsizei, GLboolean) {
}
GLAPI void APIENTRY stub_glTexImage3DMultisample (GLenum, GLsizei, GLint, GLsizei, GLsizei, GLsizei, GLboolean) {
}
GLAPI void APIENTRY stub_glGetMultisamplefv (GLenum, GLuint, GLfloat *) {
}
GLAPI void APIENTRY stub_glSampleMaski (GLuint, GLbitfield) {
}
GLAPI void APIENTRY stub_glBlendEquationi (GLuint, GLenum) {
}
GLAPI void APIENTRY stub_glBlendEquationSeparatei (GLuint, GLenum, GLenum) {
}
GLAPI void APIENTRY stub_glBlendFunci (GLuint, GLenum, GLenum) {
}
GLAPI void APIENTRY stub_glBlendFuncSeparatei (GLuint, GLenum, GLenum, GLenum, GLenum) {
}
GLAPI void APIENTRY stub_glMinSampleShading (GLclampf) {
}
GLAPI void APIENTRY stub_glBlendColorEXT (GLclampf, GLclampf, GLclampf, GLclampf) {
}
GLAPI void APIENTRY stub_glPolygonOffsetEXT (GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glTexImage3DEXT (GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glTexSubImage3DEXT (GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glGetTexFilterFuncSGIS (GLenum, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glTexFilterFuncSGIS (GLenum, GLenum, GLsizei, const GLfloat *) {
}
GLAPI void APIENTRY stub_glTexSubImage1DEXT (GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glTexSubImage2DEXT (GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glCopyTexImage1DEXT (GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint) {
}
GLAPI void APIENTRY stub_glCopyTexImage2DEXT (GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint) {
}
GLAPI void APIENTRY stub_glCopyTexSubImage1DEXT (GLenum, GLint, GLint, GLint, GLint, GLsizei) {
}
GLAPI void APIENTRY stub_glCopyTexSubImage2DEXT (GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) {
}
GLAPI void APIENTRY stub_glCopyTexSubImage3DEXT (GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) {
}
GLAPI void APIENTRY stub_glGetHistogramEXT (GLenum, GLboolean, GLenum, GLenum, GLvoid *) {
}
GLAPI void APIENTRY stub_glGetHistogramParameterfvEXT (GLenum, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetHistogramParameterivEXT (GLenum, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetMinmaxEXT (GLenum, GLboolean, GLenum, GLenum, GLvoid *) {
}
GLAPI void APIENTRY stub_glGetMinmaxParameterfvEXT (GLenum, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetMinmaxParameterivEXT (GLenum, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glHistogramEXT (GLenum, GLsizei, GLenum, GLboolean) {
}
GLAPI void APIENTRY stub_glMinmaxEXT (GLenum, GLenum, GLboolean) {
}
GLAPI void APIENTRY stub_glResetHistogramEXT (GLenum) {
}
GLAPI void APIENTRY stub_glResetMinmaxEXT (GLenum) {
}
GLAPI void APIENTRY stub_glConvolutionFilter1DEXT (GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glConvolutionFilter2DEXT (GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glConvolutionParameterfEXT (GLenum, GLenum, GLfloat) {
}
GLAPI void APIENTRY stub_glConvolutionParameterfvEXT (GLenum, GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glConvolutionParameteriEXT (GLenum, GLenum, GLint) {
}
GLAPI void APIENTRY stub_glConvolutionParameterivEXT (GLenum, GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glCopyConvolutionFilter1DEXT (GLenum, GLenum, GLint, GLint, GLsizei) {
}
GLAPI void APIENTRY stub_glCopyConvolutionFilter2DEXT (GLenum, GLenum, GLint, GLint, GLsizei, GLsizei) {
}
GLAPI void APIENTRY stub_glGetConvolutionFilterEXT (GLenum, GLenum, GLenum, GLvoid *) {
}
GLAPI void APIENTRY stub_glGetConvolutionParameterfvEXT (GLenum, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetConvolutionParameterivEXT (GLenum, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetSeparableFilterEXT (GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *) {
}
GLAPI void APIENTRY stub_glSeparableFilter2DEXT (GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *) {
}
GLAPI void APIENTRY stub_glColorTableSGI (GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glColorTableParameterfvSGI (GLenum, GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glColorTableParameterivSGI (GLenum, GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glCopyColorTableSGI (GLenum, GLenum, GLint, GLint, GLsizei) {
}
GLAPI void APIENTRY stub_glGetColorTableSGI (GLenum, GLenum, GLenum, GLvoid *) {
}
GLAPI void APIENTRY stub_glGetColorTableParameterfvSGI (GLenum, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetColorTableParameterivSGI (GLenum, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glPixelTexGenSGIX (GLenum) {
}
GLAPI void APIENTRY stub_glPixelTexGenParameteriSGIS (GLenum, GLint) {
}
GLAPI void APIENTRY stub_glPixelTexGenParameterivSGIS (GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glPixelTexGenParameterfSGIS (GLenum, GLfloat) {
}
GLAPI void APIENTRY stub_glPixelTexGenParameterfvSGIS (GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glGetPixelTexGenParameterivSGIS (GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetPixelTexGenParameterfvSGIS (GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glTexImage4DSGIS (GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glTexSubImage4DSGIS (GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) {
}
GLAPI GLboolean APIENTRY stub_glAreTexturesResidentEXT (GLsizei, const GLuint *, GLboolean *) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glBindTextureEXT (GLenum, GLuint) {
}
GLAPI void APIENTRY stub_glDeleteTexturesEXT (GLsizei, const GLuint *) {
}
GLAPI void APIENTRY stub_glGenTexturesEXT (GLsizei, GLuint *) {
}
GLAPI GLboolean APIENTRY stub_glIsTextureEXT (GLuint) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glPrioritizeTexturesEXT (GLsizei, const GLuint *, const GLclampf *) {
}
GLAPI void APIENTRY stub_glDetailTexFuncSGIS (GLenum, GLsizei, const GLfloat *) {
}
GLAPI void APIENTRY stub_glGetDetailTexFuncSGIS (GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glSharpenTexFuncSGIS (GLenum, GLsizei, const GLfloat *) {
}
GLAPI void APIENTRY stub_glGetSharpenTexFuncSGIS (GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glSampleMaskSGIS (GLclampf, GLboolean) {
}
GLAPI void APIENTRY stub_glSamplePatternSGIS (GLenum) {
}
GLAPI void APIENTRY stub_glArrayElementEXT (GLint) {
}
GLAPI void APIENTRY stub_glColorPointerEXT (GLint, GLenum, GLsizei, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glDrawArraysEXT (GLenum, GLint, GLsizei) {
}
GLAPI void APIENTRY stub_glEdgeFlagPointerEXT (GLsizei, GLsizei, const GLboolean *) {
}
GLAPI void APIENTRY stub_glGetPointervEXT (GLenum, GLvoid* *) {
}
GLAPI void APIENTRY stub_glIndexPointerEXT (GLenum, GLsizei, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glNormalPointerEXT (GLenum, GLsizei, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glTexCoordPointerEXT (GLint, GLenum, GLsizei, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glVertexPointerEXT (GLint, GLenum, GLsizei, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glBlendEquationEXT (GLenum) {
}
GLAPI void APIENTRY stub_glSpriteParameterfSGIX (GLenum, GLfloat) {
}
GLAPI void APIENTRY stub_glSpriteParameterfvSGIX (GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glSpriteParameteriSGIX (GLenum, GLint) {
}
GLAPI void APIENTRY stub_glSpriteParameterivSGIX (GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glPointParameterfEXT (GLenum, GLfloat) {
}
GLAPI void APIENTRY stub_glPointParameterfvEXT (GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glPointParameterfSGIS (GLenum, GLfloat) {
}
GLAPI void APIENTRY stub_glPointParameterfvSGIS (GLenum, const GLfloat *) {
}
GLAPI GLint APIENTRY stub_glGetInstrumentsSGIX (void) {
	return (GLint)0;
}
GLAPI void APIENTRY stub_glInstrumentsBufferSGIX (GLsizei, GLint *) {
}
GLAPI GLint APIENTRY stub_glPollInstrumentsSGIX (GLint *) {
	return (GLint)0;
}
GLAPI void APIENTRY stub_glReadInstrumentsSGIX (GLint) {
}
GLAPI void APIENTRY stub_glStartInstrumentsSGIX (void) {
}
GLAPI void APIENTRY stub_glStopInstrumentsSGIX (GLint) {
}
GLAPI void APIENTRY stub_glFrameZoomSGIX (GLint) {
}
GLAPI void APIENTRY stub_glTagSampleBufferSGIX (void) {
}
GLAPI void APIENTRY stub_glDeformationMap3dSGIX (GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *) {
}
GLAPI void APIENTRY stub_glDeformationMap3fSGIX (GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *) {
}
GLAPI void APIENTRY stub_glDeformSGIX (GLbitfield) {
}
GLAPI void APIENTRY stub_glLoadIdentityDeformationMapSGIX (GLbitfield) {
}
GLAPI void APIENTRY stub_glReferencePlaneSGIX (const GLdouble *) {
}
GLAPI void APIENTRY stub_glFlushRasterSGIX (void) {
}
GLAPI void APIENTRY stub_glFogFuncSGIS (GLsizei, const GLfloat *) {
}
GLAPI void APIENTRY stub_glGetFogFuncSGIS (GLfloat *) {
}
GLAPI void APIENTRY stub_glImageTransformParameteriHP (GLenum, GLenum, GLint) {
}
GLAPI void APIENTRY stub_glImageTransformParameterfHP (GLenum, GLenum, GLfloat) {
}
GLAPI void APIENTRY stub_glImageTransformParameterivHP (GLenum, GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glImageTransformParameterfvHP (GLenum, GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glGetImageTransformParameterivHP (GLenum, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetImageTransformParameterfvHP (GLenum, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glColorSubTableEXT (GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glCopyColorSubTableEXT (GLenum, GLsizei, GLint, GLint, GLsizei) {
}
GLAPI void APIENTRY stub_glHintPGI (GLenum, GLint) {
}
GLAPI void APIENTRY stub_glColorTableEXT (GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glGetColorTableEXT (GLenum, GLenum, GLenum, GLvoid *) {
}
GLAPI void APIENTRY stub_glGetColorTableParameterivEXT (GLenum, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetColorTableParameterfvEXT (GLenum, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetListParameterfvSGIX (GLuint, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetListParameterivSGIX (GLuint, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glListParameterfSGIX (GLuint, GLenum, GLfloat) {
}
GLAPI void APIENTRY stub_glListParameterfvSGIX (GLuint, GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glListParameteriSGIX (GLuint, GLenum, GLint) {
}
GLAPI void APIENTRY stub_glListParameterivSGIX (GLuint, GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glIndexMaterialEXT (GLenum, GLenum) {
}
GLAPI void APIENTRY stub_glIndexFuncEXT (GLenum, GLclampf) {
}
GLAPI void APIENTRY stub_glLockArraysEXT (GLint, GLsizei) {
}
GLAPI void APIENTRY stub_glUnlockArraysEXT (void) {
}
GLAPI void APIENTRY stub_glCullParameterdvEXT (GLenum, GLdouble *) {
}
GLAPI void APIENTRY stub_glCullParameterfvEXT (GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glFragmentColorMaterialSGIX (GLenum, GLenum) {
}
GLAPI void APIENTRY stub_glFragmentLightfSGIX (GLenum, GLenum, GLfloat) {
}
GLAPI void APIENTRY stub_glFragmentLightfvSGIX (GLenum, GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glFragmentLightiSGIX (GLenum, GLenum, GLint) {
}
GLAPI void APIENTRY stub_glFragmentLightivSGIX (GLenum, GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glFragmentLightModelfSGIX (GLenum, GLfloat) {
}
GLAPI void APIENTRY stub_glFragmentLightModelfvSGIX (GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glFragmentLightModeliSGIX (GLenum, GLint) {
}
GLAPI void APIENTRY stub_glFragmentLightModelivSGIX (GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glFragmentMaterialfSGIX (GLenum, GLenum, GLfloat) {
}
GLAPI void APIENTRY stub_glFragmentMaterialfvSGIX (GLenum, GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glFragmentMaterialiSGIX (GLenum, GLenum, GLint) {
}
GLAPI void APIENTRY stub_glFragmentMaterialivSGIX (GLenum, GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glGetFragmentLightfvSGIX (GLenum, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetFragmentLightivSGIX (GLenum, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetFragmentMaterialfvSGIX (GLenum, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetFragmentMaterialivSGIX (GLenum, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glLightEnviSGIX (GLenum, GLint) {
}
GLAPI void APIENTRY stub_glDrawRangeElementsEXT (GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glApplyTextureEXT (GLenum) {
}
GLAPI void APIENTRY stub_glTextureLightEXT (GLenum) {
}
GLAPI void APIENTRY stub_glTextureMaterialEXT (GLenum, GLenum) {
}
GLAPI void APIENTRY stub_glAsyncMarkerSGIX (GLuint) {
}
GLAPI GLint APIENTRY stub_glFinishAsyncSGIX (GLuint *) {
	return (GLint)0;
}
GLAPI GLint APIENTRY stub_glPollAsyncSGIX (GLuint *) {
	return (GLint)0;
}
GLAPI GLuint APIENTRY stub_glGenAsyncMarkersSGIX (GLsizei) {
	return (GLuint)0;
}
GLAPI void APIENTRY stub_glDeleteAsyncMarkersSGIX (GLuint, GLsizei) {
}
GLAPI GLboolean APIENTRY stub_glIsAsyncMarkerSGIX (GLuint) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glVertexPointervINTEL (GLint, GLenum, const GLvoid* *) {
}
GLAPI void APIENTRY stub_glNormalPointervINTEL (GLenum, const GLvoid* *) {
}
GLAPI void APIENTRY stub_glColorPointervINTEL (GLint, GLenum, const GLvoid* *) {
}
GLAPI void APIENTRY stub_glTexCoordPointervINTEL (GLint, GLenum, const GLvoid* *) {
}
GLAPI void APIENTRY stub_glPixelTransformParameteriEXT (GLenum, GLenum, GLint) {
}
GLAPI void APIENTRY stub_glPixelTransformParameterfEXT (GLenum, GLenum, GLfloat) {
}
GLAPI void APIENTRY stub_glPixelTransformParameterivEXT (GLenum, GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glPixelTransformParameterfvEXT (GLenum, GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glSecondaryColor3bEXT (GLbyte, GLbyte, GLbyte) {
}
GLAPI void APIENTRY stub_glSecondaryColor3bvEXT (const GLbyte *) {
}
GLAPI void APIENTRY stub_glSecondaryColor3dEXT (GLdouble, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glSecondaryColor3dvEXT (const GLdouble *) {
}
GLAPI void APIENTRY stub_glSecondaryColor3fEXT (GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glSecondaryColor3fvEXT (const GLfloat *) {
}
GLAPI void APIENTRY stub_glSecondaryColor3iEXT (GLint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glSecondaryColor3ivEXT (const GLint *) {
}
GLAPI void APIENTRY stub_glSecondaryColor3sEXT (GLshort, GLshort, GLshort) {
}
GLAPI void APIENTRY stub_glSecondaryColor3svEXT (const GLshort *) {
}
GLAPI void APIENTRY stub_glSecondaryColor3ubEXT (GLubyte, GLubyte, GLubyte) {
}
GLAPI void APIENTRY stub_glSecondaryColor3ubvEXT (const GLubyte *) {
}
GLAPI void APIENTRY stub_glSecondaryColor3uiEXT (GLuint, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glSecondaryColor3uivEXT (const GLuint *) {
}
GLAPI void APIENTRY stub_glSecondaryColor3usEXT (GLushort, GLushort, GLushort) {
}
GLAPI void APIENTRY stub_glSecondaryColor3usvEXT (const GLushort *) {
}
GLAPI void APIENTRY stub_glSecondaryColorPointerEXT (GLint, GLenum, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glTextureNormalEXT (GLenum) {
}
GLAPI void APIENTRY stub_glMultiDrawArraysEXT (GLenum, GLint *, GLsizei *, GLsizei) {
}
GLAPI void APIENTRY stub_glMultiDrawElementsEXT (GLenum, const GLsizei *, GLenum, const GLvoid* *, GLsizei) {
}
GLAPI void APIENTRY stub_glFogCoordfEXT (GLfloat) {
}
GLAPI void APIENTRY stub_glFogCoordfvEXT (const GLfloat *) {
}
GLAPI void APIENTRY stub_glFogCoorddEXT (GLdouble) {
}
GLAPI void APIENTRY stub_glFogCoorddvEXT (const GLdouble *) {
}
GLAPI void APIENTRY stub_glFogCoordPointerEXT (GLenum, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glTangent3bEXT (GLbyte, GLbyte, GLbyte) {
}
GLAPI void APIENTRY stub_glTangent3bvEXT (const GLbyte *) {
}
GLAPI void APIENTRY stub_glTangent3dEXT (GLdouble, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glTangent3dvEXT (const GLdouble *) {
}
GLAPI void APIENTRY stub_glTangent3fEXT (GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glTangent3fvEXT (const GLfloat *) {
}
GLAPI void APIENTRY stub_glTangent3iEXT (GLint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glTangent3ivEXT (const GLint *) {
}
GLAPI void APIENTRY stub_glTangent3sEXT (GLshort, GLshort, GLshort) {
}
GLAPI void APIENTRY stub_glTangent3svEXT (const GLshort *) {
}
GLAPI void APIENTRY stub_glBinormal3bEXT (GLbyte, GLbyte, GLbyte) {
}
GLAPI void APIENTRY stub_glBinormal3bvEXT (const GLbyte *) {
}
GLAPI void APIENTRY stub_glBinormal3dEXT (GLdouble, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glBinormal3dvEXT (const GLdouble *) {
}
GLAPI void APIENTRY stub_glBinormal3fEXT (GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glBinormal3fvEXT (const GLfloat *) {
}
GLAPI void APIENTRY stub_glBinormal3iEXT (GLint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glBinormal3ivEXT (const GLint *) {
}
GLAPI void APIENTRY stub_glBinormal3sEXT (GLshort, GLshort, GLshort) {
}
GLAPI void APIENTRY stub_glBinormal3svEXT (const GLshort *) {
}
GLAPI void APIENTRY stub_glTangentPointerEXT (GLenum, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glBinormalPointerEXT (GLenum, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glFinishTextureSUNX (void) {
}
GLAPI void APIENTRY stub_glGlobalAlphaFactorbSUN (GLbyte) {
}
GLAPI void APIENTRY stub_glGlobalAlphaFactorsSUN (GLshort) {
}
GLAPI void APIENTRY stub_glGlobalAlphaFactoriSUN (GLint) {
}
GLAPI void APIENTRY stub_glGlobalAlphaFactorfSUN (GLfloat) {
}
GLAPI void APIENTRY stub_glGlobalAlphaFactordSUN (GLdouble) {
}
GLAPI void APIENTRY stub_glGlobalAlphaFactorubSUN (GLubyte) {
}
GLAPI void APIENTRY stub_glGlobalAlphaFactorusSUN (GLushort) {
}
GLAPI void APIENTRY stub_glGlobalAlphaFactoruiSUN (GLuint) {
}
GLAPI void APIENTRY stub_glReplacementCodeuiSUN (GLuint) {
}
GLAPI void APIENTRY stub_glReplacementCodeusSUN (GLushort) {
}
GLAPI void APIENTRY stub_glReplacementCodeubSUN (GLubyte) {
}
GLAPI void APIENTRY stub_glReplacementCodeuivSUN (const GLuint *) {
}
GLAPI void APIENTRY stub_glReplacementCodeusvSUN (const GLushort *) {
}
GLAPI void APIENTRY stub_glReplacementCodeubvSUN (const GLubyte *) {
}
GLAPI void APIENTRY stub_glReplacementCodePointerSUN (GLenum, GLsizei, const GLvoid* *) {
}
GLAPI void APIENTRY stub_glColor4ubVertex2fSUN (GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glColor4ubVertex2fvSUN (const GLubyte *, const GLfloat *) {
}
GLAPI void APIENTRY stub_glColor4ubVertex3fSUN (GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glColor4ubVertex3fvSUN (const GLubyte *, const GLfloat *) {
}
GLAPI void APIENTRY stub_glColor3fVertex3fSUN (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glColor3fVertex3fvSUN (const GLfloat *, const GLfloat *) {
}
GLAPI void APIENTRY stub_glNormal3fVertex3fSUN (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glNormal3fVertex3fvSUN (const GLfloat *, const GLfloat *) {
}
GLAPI void APIENTRY stub_glColor4fNormal3fVertex3fSUN (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glColor4fNormal3fVertex3fvSUN (const GLfloat *, const GLfloat *, const GLfloat *) {
}
GLAPI void APIENTRY stub_glTexCoord2fVertex3fSUN (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glTexCoord2fVertex3fvSUN (const GLfloat *, const GLfloat *) {
}
GLAPI void APIENTRY stub_glTexCoord4fVertex4fSUN (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glTexCoord4fVertex4fvSUN (const GLfloat *, const GLfloat *) {
}
GLAPI void APIENTRY stub_glTexCoord2fColor4ubVertex3fSUN (GLfloat, GLfloat, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glTexCoord2fColor4ubVertex3fvSUN (const GLfloat *, const GLubyte *, const GLfloat *) {
}
GLAPI void APIENTRY stub_glTexCoord2fColor3fVertex3fSUN (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glTexCoord2fColor3fVertex3fvSUN (const GLfloat *, const GLfloat *, const GLfloat *) {
}
GLAPI void APIENTRY stub_glTexCoord2fNormal3fVertex3fSUN (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glTexCoord2fNormal3fVertex3fvSUN (const GLfloat *, const GLfloat *, const GLfloat *) {
}
GLAPI void APIENTRY stub_glTexCoord2fColor4fNormal3fVertex3fSUN (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glTexCoord2fColor4fNormal3fVertex3fvSUN (const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *) {
}
GLAPI void APIENTRY stub_glTexCoord4fColor4fNormal3fVertex4fSUN (GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glTexCoord4fColor4fNormal3fVertex4fvSUN (const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *) {
}
GLAPI void APIENTRY stub_glReplacementCodeuiVertex3fSUN (GLuint, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glReplacementCodeuiVertex3fvSUN (const GLuint *, const GLfloat *) {
}
GLAPI void APIENTRY stub_glReplacementCodeuiColor4ubVertex3fSUN (GLuint, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glReplacementCodeuiColor4ubVertex3fvSUN (const GLuint *, const GLubyte *, const GLfloat *) {
}
GLAPI void APIENTRY stub_glReplacementCodeuiColor3fVertex3fSUN (GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glReplacementCodeuiColor3fVertex3fvSUN (const GLuint *, const GLfloat *, const GLfloat *) {
}
GLAPI void APIENTRY stub_glReplacementCodeuiNormal3fVertex3fSUN (GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glReplacementCodeuiNormal3fVertex3fvSUN (const GLuint *, const GLfloat *, const GLfloat *) {
}
GLAPI void APIENTRY stub_glReplacementCodeuiColor4fNormal3fVertex3fSUN (GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glReplacementCodeuiColor4fNormal3fVertex3fvSUN (const GLuint *, const GLfloat *, const GLfloat *, const GLfloat *) {
}
GLAPI void APIENTRY stub_glReplacementCodeuiTexCoord2fVertex3fSUN (GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glReplacementCodeuiTexCoord2fVertex3fvSUN (const GLuint *, const GLfloat *, const GLfloat *) {
}
GLAPI void APIENTRY stub_glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN (GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN (const GLuint *, const GLfloat *, const GLfloat *, const GLfloat *) {
}
GLAPI void APIENTRY stub_glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN (GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN (const GLuint *, const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *) {
}
GLAPI void APIENTRY stub_glBlendFuncSeparateEXT (GLenum, GLenum, GLenum, GLenum) {
}
GLAPI void APIENTRY stub_glBlendFuncSeparateINGR (GLenum, GLenum, GLenum, GLenum) {
}
GLAPI void APIENTRY stub_glVertexWeightfEXT (GLfloat) {
}
GLAPI void APIENTRY stub_glVertexWeightfvEXT (const GLfloat *) {
}
GLAPI void APIENTRY stub_glVertexWeightPointerEXT (GLsizei, GLenum, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glFlushVertexArrayRangeNV (void) {
}
GLAPI void APIENTRY stub_glVertexArrayRangeNV (GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glCombinerParameterfvNV (GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glCombinerParameterfNV (GLenum, GLfloat) {
}
GLAPI void APIENTRY stub_glCombinerParameterivNV (GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glCombinerParameteriNV (GLenum, GLint) {
}
GLAPI void APIENTRY stub_glCombinerInputNV (GLenum, GLenum, GLenum, GLenum, GLenum, GLenum) {
}
GLAPI void APIENTRY stub_glCombinerOutputNV (GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, GLboolean, GLboolean, GLboolean) {
}
GLAPI void APIENTRY stub_glFinalCombinerInputNV (GLenum, GLenum, GLenum, GLenum) {
}
GLAPI void APIENTRY stub_glGetCombinerInputParameterfvNV (GLenum, GLenum, GLenum, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetCombinerInputParameterivNV (GLenum, GLenum, GLenum, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetCombinerOutputParameterfvNV (GLenum, GLenum, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetCombinerOutputParameterivNV (GLenum, GLenum, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetFinalCombinerInputParameterfvNV (GLenum, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetFinalCombinerInputParameterivNV (GLenum, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glResizeBuffersMESA (void) {
}
GLAPI void APIENTRY stub_glWindowPos2dMESA (GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glWindowPos2dvMESA (const GLdouble *) {
}
GLAPI void APIENTRY stub_glWindowPos2fMESA (GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glWindowPos2fvMESA (const GLfloat *) {
}
GLAPI void APIENTRY stub_glWindowPos2iMESA (GLint, GLint) {
}
GLAPI void APIENTRY stub_glWindowPos2ivMESA (const GLint *) {
}
GLAPI void APIENTRY stub_glWindowPos2sMESA (GLshort, GLshort) {
}
GLAPI void APIENTRY stub_glWindowPos2svMESA (const GLshort *) {
}
GLAPI void APIENTRY stub_glWindowPos3dMESA (GLdouble, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glWindowPos3dvMESA (const GLdouble *) {
}
GLAPI void APIENTRY stub_glWindowPos3fMESA (GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glWindowPos3fvMESA (const GLfloat *) {
}
GLAPI void APIENTRY stub_glWindowPos3iMESA (GLint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glWindowPos3ivMESA (const GLint *) {
}
GLAPI void APIENTRY stub_glWindowPos3sMESA (GLshort, GLshort, GLshort) {
}
GLAPI void APIENTRY stub_glWindowPos3svMESA (const GLshort *) {
}
GLAPI void APIENTRY stub_glWindowPos4dMESA (GLdouble, GLdouble, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glWindowPos4dvMESA (const GLdouble *) {
}
GLAPI void APIENTRY stub_glWindowPos4fMESA (GLfloat, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glWindowPos4fvMESA (const GLfloat *) {
}
GLAPI void APIENTRY stub_glWindowPos4iMESA (GLint, GLint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glWindowPos4ivMESA (const GLint *) {
}
GLAPI void APIENTRY stub_glWindowPos4sMESA (GLshort, GLshort, GLshort, GLshort) {
}
GLAPI void APIENTRY stub_glWindowPos4svMESA (const GLshort *) {
}
GLAPI void APIENTRY stub_glMultiModeDrawArraysIBM (const GLenum *, const GLint *, const GLsizei *, GLsizei, GLint) {
}
GLAPI void APIENTRY stub_glMultiModeDrawElementsIBM (const GLenum *, const GLsizei *, GLenum, const GLvoid* const *, GLsizei, GLint) {
}
GLAPI void APIENTRY stub_glColorPointerListIBM (GLint, GLenum, GLint, const GLvoid* *, GLint) {
}
GLAPI void APIENTRY stub_glSecondaryColorPointerListIBM (GLint, GLenum, GLint, const GLvoid* *, GLint) {
}
GLAPI void APIENTRY stub_glEdgeFlagPointerListIBM (GLint, const GLboolean* *, GLint) {
}
GLAPI void APIENTRY stub_glFogCoordPointerListIBM (GLenum, GLint, const GLvoid* *, GLint) {
}
GLAPI void APIENTRY stub_glIndexPointerListIBM (GLenum, GLint, const GLvoid* *, GLint) {
}
GLAPI void APIENTRY stub_glNormalPointerListIBM (GLenum, GLint, const GLvoid* *, GLint) {
}
GLAPI void APIENTRY stub_glTexCoordPointerListIBM (GLint, GLenum, GLint, const GLvoid* *, GLint) {
}
GLAPI void APIENTRY stub_glVertexPointerListIBM (GLint, GLenum, GLint, const GLvoid* *, GLint) {
}
GLAPI void APIENTRY stub_glTbufferMask3DFX (GLuint) {
}
GLAPI void APIENTRY stub_glSampleMaskEXT (GLclampf, GLboolean) {
}
GLAPI void APIENTRY stub_glSamplePatternEXT (GLenum) {
}
GLAPI void APIENTRY stub_glTextureColorMaskSGIS (GLboolean, GLboolean, GLboolean, GLboolean) {
}
GLAPI void APIENTRY stub_glIglooInterfaceSGIX (GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glDeleteFencesNV (GLsizei, const GLuint *) {
}
GLAPI void APIENTRY stub_glGenFencesNV (GLsizei, GLuint *) {
}
GLAPI GLboolean APIENTRY stub_glIsFenceNV (GLuint) {
	return (GLboolean)0;
}
GLAPI GLboolean APIENTRY stub_glTestFenceNV (GLuint) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glGetFenceivNV (GLuint, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glFinishFenceNV (GLuint) {
}
GLAPI void APIENTRY stub_glSetFenceNV (GLuint, GLenum) {
}
GLAPI void APIENTRY stub_glMapControlPointsNV (GLenum, GLuint, GLenum, GLsizei, GLsizei, GLint, GLint, GLboolean, const GLvoid *) {
}
GLAPI void APIENTRY stub_glMapParameterivNV (GLenum, GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glMapParameterfvNV (GLenum, GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glGetMapControlPointsNV (GLenum, GLuint, GLenum, GLsizei, GLsizei, GLboolean, GLvoid *) {
}
GLAPI void APIENTRY stub_glGetMapParameterivNV (GLenum, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetMapParameterfvNV (GLenum, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetMapAttribParameterivNV (GLenum, GLuint, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetMapAttribParameterfvNV (GLenum, GLuint, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glEvalMapsNV (GLenum, GLenum) {
}
GLAPI void APIENTRY stub_glCombinerStageParameterfvNV (GLenum, GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glGetCombinerStageParameterfvNV (GLenum, GLenum, GLfloat *) {
}
GLAPI GLboolean APIENTRY stub_glAreProgramsResidentNV (GLsizei, const GLuint *, GLboolean *) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glBindProgramNV (GLenum, GLuint) {
}
GLAPI void APIENTRY stub_glDeleteProgramsNV (GLsizei, const GLuint *) {
}
GLAPI void APIENTRY stub_glExecuteProgramNV (GLenum, GLuint, const GLfloat *) {
}
GLAPI void APIENTRY stub_glGenProgramsNV (GLsizei, GLuint *) {
}
GLAPI void APIENTRY stub_glGetProgramParameterdvNV (GLenum, GLuint, GLenum, GLdouble *) {
}
GLAPI void APIENTRY stub_glGetProgramParameterfvNV (GLenum, GLuint, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetProgramivNV (GLuint, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetProgramStringNV (GLuint, GLenum, GLubyte *) {
}
GLAPI void APIENTRY stub_glGetTrackMatrixivNV (GLenum, GLuint, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetVertexAttribdvNV (GLuint, GLenum, GLdouble *) {
}
GLAPI void APIENTRY stub_glGetVertexAttribfvNV (GLuint, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetVertexAttribivNV (GLuint, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetVertexAttribPointervNV (GLuint, GLenum, GLvoid* *) {
}
GLAPI GLboolean APIENTRY stub_glIsProgramNV (GLuint) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glLoadProgramNV (GLenum, GLuint, GLsizei, const GLubyte *) {
}
GLAPI void APIENTRY stub_glProgramParameter4dNV (GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glProgramParameter4dvNV (GLenum, GLuint, const GLdouble *) {
}
GLAPI void APIENTRY stub_glProgramParameter4fNV (GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glProgramParameter4fvNV (GLenum, GLuint, const GLfloat *) {
}
GLAPI void APIENTRY stub_glProgramParameters4dvNV (GLenum, GLuint, GLuint, const GLdouble *) {
}
GLAPI void APIENTRY stub_glProgramParameters4fvNV (GLenum, GLuint, GLuint, const GLfloat *) {
}
GLAPI void APIENTRY stub_glRequestResidentProgramsNV (GLsizei, const GLuint *) {
}
GLAPI void APIENTRY stub_glTrackMatrixNV (GLenum, GLuint, GLenum, GLenum) {
}
GLAPI void APIENTRY stub_glVertexAttribPointerNV (GLuint, GLint, GLenum, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glVertexAttrib1dNV (GLuint, GLdouble) {
}
GLAPI void APIENTRY stub_glVertexAttrib1dvNV (GLuint, const GLdouble *) {
}
GLAPI void APIENTRY stub_glVertexAttrib1fNV (GLuint, GLfloat) {
}
GLAPI void APIENTRY stub_glVertexAttrib1fvNV (GLuint, const GLfloat *) {
}
GLAPI void APIENTRY stub_glVertexAttrib1sNV (GLuint, GLshort) {
}
GLAPI void APIENTRY stub_glVertexAttrib1svNV (GLuint, const GLshort *) {
}
GLAPI void APIENTRY stub_glVertexAttrib2dNV (GLuint, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glVertexAttrib2dvNV (GLuint, const GLdouble *) {
}
GLAPI void APIENTRY stub_glVertexAttrib2fNV (GLuint, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glVertexAttrib2fvNV (GLuint, const GLfloat *) {
}
GLAPI void APIENTRY stub_glVertexAttrib2sNV (GLuint, GLshort, GLshort) {
}
GLAPI void APIENTRY stub_glVertexAttrib2svNV (GLuint, const GLshort *) {
}
GLAPI void APIENTRY stub_glVertexAttrib3dNV (GLuint, GLdouble, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glVertexAttrib3dvNV (GLuint, const GLdouble *) {
}
GLAPI void APIENTRY stub_glVertexAttrib3fNV (GLuint, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glVertexAttrib3fvNV (GLuint, const GLfloat *) {
}
GLAPI void APIENTRY stub_glVertexAttrib3sNV (GLuint, GLshort, GLshort, GLshort) {
}
GLAPI void APIENTRY stub_glVertexAttrib3svNV (GLuint, const GLshort *) {
}
GLAPI void APIENTRY stub_glVertexAttrib4dNV (GLuint, GLdouble, GLdouble, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glVertexAttrib4dvNV (GLuint, const GLdouble *) {
}
GLAPI void APIENTRY stub_glVertexAttrib4fNV (GLuint, GLfloat, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glVertexAttrib4fvNV (GLuint, const GLfloat *) {
}
GLAPI void APIENTRY stub_glVertexAttrib4sNV (GLuint, GLshort, GLshort, GLshort, GLshort) {
}
GLAPI void APIENTRY stub_glVertexAttrib4svNV (GLuint, const GLshort *) {
}
GLAPI void APIENTRY stub_glVertexAttrib4ubNV (GLuint, GLubyte, GLubyte, GLubyte, GLubyte) {
}
GLAPI void APIENTRY stub_glVertexAttrib4ubvNV (GLuint, const GLubyte *) {
}
GLAPI void APIENTRY stub_glVertexAttribs1dvNV (GLuint, GLsizei, const GLdouble *) {
}
GLAPI void APIENTRY stub_glVertexAttribs1fvNV (GLuint, GLsizei, const GLfloat *) {
}
GLAPI void APIENTRY stub_glVertexAttribs1svNV (GLuint, GLsizei, const GLshort *) {
}
GLAPI void APIENTRY stub_glVertexAttribs2dvNV (GLuint, GLsizei, const GLdouble *) {
}
GLAPI void APIENTRY stub_glVertexAttribs2fvNV (GLuint, GLsizei, const GLfloat *) {
}
GLAPI void APIENTRY stub_glVertexAttribs2svNV (GLuint, GLsizei, const GLshort *) {
}
GLAPI void APIENTRY stub_glVertexAttribs3dvNV (GLuint, GLsizei, const GLdouble *) {
}
GLAPI void APIENTRY stub_glVertexAttribs3fvNV (GLuint, GLsizei, const GLfloat *) {
}
GLAPI void APIENTRY stub_glVertexAttribs3svNV (GLuint, GLsizei, const GLshort *) {
}
GLAPI void APIENTRY stub_glVertexAttribs4dvNV (GLuint, GLsizei, const GLdouble *) {
}
GLAPI void APIENTRY stub_glVertexAttribs4fvNV (GLuint, GLsizei, const GLfloat *) {
}
GLAPI void APIENTRY stub_glVertexAttribs4svNV (GLuint, GLsizei, const GLshort *) {
}
GLAPI void APIENTRY stub_glVertexAttribs4ubvNV (GLuint, GLsizei, const GLubyte *) {
}
GLAPI void APIENTRY stub_glTexBumpParameterivATI (GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glTexBumpParameterfvATI (GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glGetTexBumpParameterivATI (GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetTexBumpParameterfvATI (GLenum, GLfloat *) {
}
GLAPI GLuint APIENTRY stub_glGenFragmentShadersATI (GLuint) {
	return (GLuint)0;
}
GLAPI void APIENTRY stub_glBindFragmentShaderATI (GLuint) {
}
GLAPI void APIENTRY stub_glDeleteFragmentShaderATI (GLuint) {
}
GLAPI void APIENTRY stub_glBeginFragmentShaderATI (void) {
}
GLAPI void APIENTRY stub_glEndFragmentShaderATI (void) {
}
GLAPI void APIENTRY stub_glPassTexCoordATI (GLuint, GLuint, GLenum) {
}
GLAPI void APIENTRY stub_glSampleMapATI (GLuint, GLuint, GLenum) {
}
GLAPI void APIENTRY stub_glColorFragmentOp1ATI (GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glColorFragmentOp2ATI (GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glColorFragmentOp3ATI (GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glAlphaFragmentOp1ATI (GLenum, GLuint, GLuint, GLuint, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glAlphaFragmentOp2ATI (GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glAlphaFragmentOp3ATI (GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glSetFragmentShaderConstantATI (GLuint, const GLfloat *) {
}
GLAPI void APIENTRY stub_glPNTrianglesiATI (GLenum, GLint) {
}
GLAPI void APIENTRY stub_glPNTrianglesfATI (GLenum, GLfloat) {
}
GLAPI GLuint APIENTRY stub_glNewObjectBufferATI (GLsizei, const GLvoid *, GLenum) {
	return (GLuint)0;
}
GLAPI GLboolean APIENTRY stub_glIsObjectBufferATI (GLuint) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glUpdateObjectBufferATI (GLuint, GLuint, GLsizei, const GLvoid *, GLenum) {
}
GLAPI void APIENTRY stub_glGetObjectBufferfvATI (GLuint, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetObjectBufferivATI (GLuint, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glFreeObjectBufferATI (GLuint) {
}
GLAPI void APIENTRY stub_glArrayObjectATI (GLenum, GLint, GLenum, GLsizei, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glGetArrayObjectfvATI (GLenum, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetArrayObjectivATI (GLenum, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glVariantArrayObjectATI (GLuint, GLenum, GLsizei, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glGetVariantArrayObjectfvATI (GLuint, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetVariantArrayObjectivATI (GLuint, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glBeginVertexShaderEXT (void) {
}
GLAPI void APIENTRY stub_glEndVertexShaderEXT (void) {
}
GLAPI void APIENTRY stub_glBindVertexShaderEXT (GLuint) {
}
GLAPI GLuint APIENTRY stub_glGenVertexShadersEXT (GLuint) {
	return (GLuint)0;
}
GLAPI void APIENTRY stub_glDeleteVertexShaderEXT (GLuint) {
}
GLAPI void APIENTRY stub_glShaderOp1EXT (GLenum, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glShaderOp2EXT (GLenum, GLuint, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glShaderOp3EXT (GLenum, GLuint, GLuint, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glSwizzleEXT (GLuint, GLuint, GLenum, GLenum, GLenum, GLenum) {
}
GLAPI void APIENTRY stub_glWriteMaskEXT (GLuint, GLuint, GLenum, GLenum, GLenum, GLenum) {
}
GLAPI void APIENTRY stub_glInsertComponentEXT (GLuint, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glExtractComponentEXT (GLuint, GLuint, GLuint) {
}
GLAPI GLuint APIENTRY stub_glGenSymbolsEXT (GLenum, GLenum, GLenum, GLuint) {
	return (GLuint)0;
}
GLAPI void APIENTRY stub_glSetInvariantEXT (GLuint, GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glSetLocalConstantEXT (GLuint, GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glVariantbvEXT (GLuint, const GLbyte *) {
}
GLAPI void APIENTRY stub_glVariantsvEXT (GLuint, const GLshort *) {
}
GLAPI void APIENTRY stub_glVariantivEXT (GLuint, const GLint *) {
}
GLAPI void APIENTRY stub_glVariantfvEXT (GLuint, const GLfloat *) {
}
GLAPI void APIENTRY stub_glVariantdvEXT (GLuint, const GLdouble *) {
}
GLAPI void APIENTRY stub_glVariantubvEXT (GLuint, const GLubyte *) {
}
GLAPI void APIENTRY stub_glVariantusvEXT (GLuint, const GLushort *) {
}
GLAPI void APIENTRY stub_glVariantuivEXT (GLuint, const GLuint *) {
}
GLAPI void APIENTRY stub_glVariantPointerEXT (GLuint, GLenum, GLuint, const GLvoid *) {
}
GLAPI void APIENTRY stub_glEnableVariantClientStateEXT (GLuint) {
}
GLAPI void APIENTRY stub_glDisableVariantClientStateEXT (GLuint) {
}
GLAPI GLuint APIENTRY stub_glBindLightParameterEXT (GLenum, GLenum) {
	return (GLuint)0;
}
GLAPI GLuint APIENTRY stub_glBindMaterialParameterEXT (GLenum, GLenum) {
	return (GLuint)0;
}
GLAPI GLuint APIENTRY stub_glBindTexGenParameterEXT (GLenum, GLenum, GLenum) {
	return (GLuint)0;
}
GLAPI GLuint APIENTRY stub_glBindTextureUnitParameterEXT (GLenum, GLenum) {
	return (GLuint)0;
}
GLAPI GLuint APIENTRY stub_glBindParameterEXT (GLenum) {
	return (GLuint)0;
}
GLAPI GLboolean APIENTRY stub_glIsVariantEnabledEXT (GLuint, GLenum) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glGetVariantBooleanvEXT (GLuint, GLenum, GLboolean *) {
}
GLAPI void APIENTRY stub_glGetVariantIntegervEXT (GLuint, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetVariantFloatvEXT (GLuint, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetVariantPointervEXT (GLuint, GLenum, GLvoid* *) {
}
GLAPI void APIENTRY stub_glGetInvariantBooleanvEXT (GLuint, GLenum, GLboolean *) {
}
GLAPI void APIENTRY stub_glGetInvariantIntegervEXT (GLuint, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetInvariantFloatvEXT (GLuint, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetLocalConstantBooleanvEXT (GLuint, GLenum, GLboolean *) {
}
GLAPI void APIENTRY stub_glGetLocalConstantIntegervEXT (GLuint, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetLocalConstantFloatvEXT (GLuint, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glVertexStream1sATI (GLenum, GLshort) {
}
GLAPI void APIENTRY stub_glVertexStream1svATI (GLenum, const GLshort *) {
}
GLAPI void APIENTRY stub_glVertexStream1iATI (GLenum, GLint) {
}
GLAPI void APIENTRY stub_glVertexStream1ivATI (GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glVertexStream1fATI (GLenum, GLfloat) {
}
GLAPI void APIENTRY stub_glVertexStream1fvATI (GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glVertexStream1dATI (GLenum, GLdouble) {
}
GLAPI void APIENTRY stub_glVertexStream1dvATI (GLenum, const GLdouble *) {
}
GLAPI void APIENTRY stub_glVertexStream2sATI (GLenum, GLshort, GLshort) {
}
GLAPI void APIENTRY stub_glVertexStream2svATI (GLenum, const GLshort *) {
}
GLAPI void APIENTRY stub_glVertexStream2iATI (GLenum, GLint, GLint) {
}
GLAPI void APIENTRY stub_glVertexStream2ivATI (GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glVertexStream2fATI (GLenum, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glVertexStream2fvATI (GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glVertexStream2dATI (GLenum, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glVertexStream2dvATI (GLenum, const GLdouble *) {
}
GLAPI void APIENTRY stub_glVertexStream3sATI (GLenum, GLshort, GLshort, GLshort) {
}
GLAPI void APIENTRY stub_glVertexStream3svATI (GLenum, const GLshort *) {
}
GLAPI void APIENTRY stub_glVertexStream3iATI (GLenum, GLint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glVertexStream3ivATI (GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glVertexStream3fATI (GLenum, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glVertexStream3fvATI (GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glVertexStream3dATI (GLenum, GLdouble, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glVertexStream3dvATI (GLenum, const GLdouble *) {
}
GLAPI void APIENTRY stub_glVertexStream4sATI (GLenum, GLshort, GLshort, GLshort, GLshort) {
}
GLAPI void APIENTRY stub_glVertexStream4svATI (GLenum, const GLshort *) {
}
GLAPI void APIENTRY stub_glVertexStream4iATI (GLenum, GLint, GLint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glVertexStream4ivATI (GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glVertexStream4fATI (GLenum, GLfloat, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glVertexStream4fvATI (GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glVertexStream4dATI (GLenum, GLdouble, GLdouble, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glVertexStream4dvATI (GLenum, const GLdouble *) {
}
GLAPI void APIENTRY stub_glNormalStream3bATI (GLenum, GLbyte, GLbyte, GLbyte) {
}
GLAPI void APIENTRY stub_glNormalStream3bvATI (GLenum, const GLbyte *) {
}
GLAPI void APIENTRY stub_glNormalStream3sATI (GLenum, GLshort, GLshort, GLshort) {
}
GLAPI void APIENTRY stub_glNormalStream3svATI (GLenum, const GLshort *) {
}
GLAPI void APIENTRY stub_glNormalStream3iATI (GLenum, GLint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glNormalStream3ivATI (GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glNormalStream3fATI (GLenum, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glNormalStream3fvATI (GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glNormalStream3dATI (GLenum, GLdouble, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glNormalStream3dvATI (GLenum, const GLdouble *) {
}
GLAPI void APIENTRY stub_glClientActiveVertexStreamATI (GLenum) {
}
GLAPI void APIENTRY stub_glVertexBlendEnviATI (GLenum, GLint) {
}
GLAPI void APIENTRY stub_glVertexBlendEnvfATI (GLenum, GLfloat) {
}
GLAPI void APIENTRY stub_glElementPointerATI (GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glDrawElementArrayATI (GLenum, GLsizei) {
}
GLAPI void APIENTRY stub_glDrawRangeElementArrayATI (GLenum, GLuint, GLuint, GLsizei) {
}
GLAPI void APIENTRY stub_glDrawMeshArraysSUN (GLenum, GLint, GLsizei, GLsizei) {
}
GLAPI void APIENTRY stub_glGenOcclusionQueriesNV (GLsizei, GLuint *) {
}
GLAPI void APIENTRY stub_glDeleteOcclusionQueriesNV (GLsizei, const GLuint *) {
}
GLAPI GLboolean APIENTRY stub_glIsOcclusionQueryNV (GLuint) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glBeginOcclusionQueryNV (GLuint) {
}
GLAPI void APIENTRY stub_glEndOcclusionQueryNV (void) {
}
GLAPI void APIENTRY stub_glGetOcclusionQueryivNV (GLuint, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetOcclusionQueryuivNV (GLuint, GLenum, GLuint *) {
}
GLAPI void APIENTRY stub_glPointParameteriNV (GLenum, GLint) {
}
GLAPI void APIENTRY stub_glPointParameterivNV (GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glActiveStencilFaceEXT (GLenum) {
}
GLAPI void APIENTRY stub_glElementPointerAPPLE (GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glDrawElementArrayAPPLE (GLenum, GLint, GLsizei) {
}
GLAPI void APIENTRY stub_glDrawRangeElementArrayAPPLE (GLenum, GLuint, GLuint, GLint, GLsizei) {
}
GLAPI void APIENTRY stub_glMultiDrawElementArrayAPPLE (GLenum, const GLint *, const GLsizei *, GLsizei) {
}
GLAPI void APIENTRY stub_glMultiDrawRangeElementArrayAPPLE (GLenum, GLuint, GLuint, const GLint *, const GLsizei *, GLsizei) {
}
GLAPI void APIENTRY stub_glGenFencesAPPLE (GLsizei, GLuint *) {
}
GLAPI void APIENTRY stub_glDeleteFencesAPPLE (GLsizei, const GLuint *) {
}
GLAPI void APIENTRY stub_glSetFenceAPPLE (GLuint) {
}
GLAPI GLboolean APIENTRY stub_glIsFenceAPPLE (GLuint) {
	return (GLboolean)0;
}
GLAPI GLboolean APIENTRY stub_glTestFenceAPPLE (GLuint) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glFinishFenceAPPLE (GLuint) {
}
GLAPI GLboolean APIENTRY stub_glTestObjectAPPLE (GLenum, GLuint) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glFinishObjectAPPLE (GLenum, GLint) {
}
GLAPI void APIENTRY stub_glBindVertexArrayAPPLE (GLuint) {
}
GLAPI void APIENTRY stub_glDeleteVertexArraysAPPLE (GLsizei, const GLuint *) {
}
GLAPI void APIENTRY stub_glGenVertexArraysAPPLE (GLsizei, GLuint *) {
}
GLAPI GLboolean APIENTRY stub_glIsVertexArrayAPPLE (GLuint) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glVertexArrayRangeAPPLE (GLsizei, GLvoid *) {
}
GLAPI void APIENTRY stub_glFlushVertexArrayRangeAPPLE (GLsizei, GLvoid *) {
}
GLAPI void APIENTRY stub_glVertexArrayParameteriAPPLE (GLenum, GLint) {
}
GLAPI void APIENTRY stub_glDrawBuffersATI (GLsizei, const GLenum *) {
}
GLAPI void APIENTRY stub_glProgramNamedParameter4fNV (GLuint, GLsizei, const GLubyte *, GLfloat, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glProgramNamedParameter4dNV (GLuint, GLsizei, const GLubyte *, GLdouble, GLdouble, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glProgramNamedParameter4fvNV (GLuint, GLsizei, const GLubyte *, const GLfloat *) {
}
GLAPI void APIENTRY stub_glProgramNamedParameter4dvNV (GLuint, GLsizei, const GLubyte *, const GLdouble *) {
}
GLAPI void APIENTRY stub_glGetProgramNamedParameterfvNV (GLuint, GLsizei, const GLubyte *, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetProgramNamedParameterdvNV (GLuint, GLsizei, const GLubyte *, GLdouble *) {
}
GLAPI void APIENTRY stub_glVertex2hNV (GLhalfNV, GLhalfNV) {
}
GLAPI void APIENTRY stub_glVertex2hvNV (const GLhalfNV *) {
}
GLAPI void APIENTRY stub_glVertex3hNV (GLhalfNV, GLhalfNV, GLhalfNV) {
}
GLAPI void APIENTRY stub_glVertex3hvNV (const GLhalfNV *) {
}
GLAPI void APIENTRY stub_glVertex4hNV (GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV) {
}
GLAPI void APIENTRY stub_glVertex4hvNV (const GLhalfNV *) {
}
GLAPI void APIENTRY stub_glNormal3hNV (GLhalfNV, GLhalfNV, GLhalfNV) {
}
GLAPI void APIENTRY stub_glNormal3hvNV (const GLhalfNV *) {
}
GLAPI void APIENTRY stub_glColor3hNV (GLhalfNV, GLhalfNV, GLhalfNV) {
}
GLAPI void APIENTRY stub_glColor3hvNV (const GLhalfNV *) {
}
GLAPI void APIENTRY stub_glColor4hNV (GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV) {
}
GLAPI void APIENTRY stub_glColor4hvNV (const GLhalfNV *) {
}
GLAPI void APIENTRY stub_glTexCoord1hNV (GLhalfNV) {
}
GLAPI void APIENTRY stub_glTexCoord1hvNV (const GLhalfNV *) {
}
GLAPI void APIENTRY stub_glTexCoord2hNV (GLhalfNV, GLhalfNV) {
}
GLAPI void APIENTRY stub_glTexCoord2hvNV (const GLhalfNV *) {
}
GLAPI void APIENTRY stub_glTexCoord3hNV (GLhalfNV, GLhalfNV, GLhalfNV) {
}
GLAPI void APIENTRY stub_glTexCoord3hvNV (const GLhalfNV *) {
}
GLAPI void APIENTRY stub_glTexCoord4hNV (GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV) {
}
GLAPI void APIENTRY stub_glTexCoord4hvNV (const GLhalfNV *) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1hNV (GLenum, GLhalfNV) {
}
GLAPI void APIENTRY stub_glMultiTexCoord1hvNV (GLenum, const GLhalfNV *) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2hNV (GLenum, GLhalfNV, GLhalfNV) {
}
GLAPI void APIENTRY stub_glMultiTexCoord2hvNV (GLenum, const GLhalfNV *) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3hNV (GLenum, GLhalfNV, GLhalfNV, GLhalfNV) {
}
GLAPI void APIENTRY stub_glMultiTexCoord3hvNV (GLenum, const GLhalfNV *) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4hNV (GLenum, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV) {
}
GLAPI void APIENTRY stub_glMultiTexCoord4hvNV (GLenum, const GLhalfNV *) {
}
GLAPI void APIENTRY stub_glFogCoordhNV (GLhalfNV) {
}
GLAPI void APIENTRY stub_glFogCoordhvNV (const GLhalfNV *) {
}
GLAPI void APIENTRY stub_glSecondaryColor3hNV (GLhalfNV, GLhalfNV, GLhalfNV) {
}
GLAPI void APIENTRY stub_glSecondaryColor3hvNV (const GLhalfNV *) {
}
GLAPI void APIENTRY stub_glVertexWeighthNV (GLhalfNV) {
}
GLAPI void APIENTRY stub_glVertexWeighthvNV (const GLhalfNV *) {
}
GLAPI void APIENTRY stub_glVertexAttrib1hNV (GLuint, GLhalfNV) {
}
GLAPI void APIENTRY stub_glVertexAttrib1hvNV (GLuint, const GLhalfNV *) {
}
GLAPI void APIENTRY stub_glVertexAttrib2hNV (GLuint, GLhalfNV, GLhalfNV) {
}
GLAPI void APIENTRY stub_glVertexAttrib2hvNV (GLuint, const GLhalfNV *) {
}
GLAPI void APIENTRY stub_glVertexAttrib3hNV (GLuint, GLhalfNV, GLhalfNV, GLhalfNV) {
}
GLAPI void APIENTRY stub_glVertexAttrib3hvNV (GLuint, const GLhalfNV *) {
}
GLAPI void APIENTRY stub_glVertexAttrib4hNV (GLuint, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV) {
}
GLAPI void APIENTRY stub_glVertexAttrib4hvNV (GLuint, const GLhalfNV *) {
}
GLAPI void APIENTRY stub_glVertexAttribs1hvNV (GLuint, GLsizei, const GLhalfNV *) {
}
GLAPI void APIENTRY stub_glVertexAttribs2hvNV (GLuint, GLsizei, const GLhalfNV *) {
}
GLAPI void APIENTRY stub_glVertexAttribs3hvNV (GLuint, GLsizei, const GLhalfNV *) {
}
GLAPI void APIENTRY stub_glVertexAttribs4hvNV (GLuint, GLsizei, const GLhalfNV *) {
}
GLAPI void APIENTRY stub_glPixelDataRangeNV (GLenum, GLsizei, GLvoid *) {
}
GLAPI void APIENTRY stub_glFlushPixelDataRangeNV (GLenum) {
}
GLAPI void APIENTRY stub_glPrimitiveRestartNV (void) {
}
GLAPI void APIENTRY stub_glPrimitiveRestartIndexNV (GLuint) {
}
GLAPI GLvoid* APIENTRY stub_glMapObjectBufferATI (GLuint) {
	return (GLvoid*)0;
}
GLAPI void APIENTRY stub_glUnmapObjectBufferATI (GLuint) {
}
GLAPI void APIENTRY stub_glStencilOpSeparateATI (GLenum, GLenum, GLenum, GLenum) {
}
GLAPI void APIENTRY stub_glStencilFuncSeparateATI (GLenum, GLenum, GLint, GLuint) {
}
GLAPI void APIENTRY stub_glVertexAttribArrayObjectATI (GLuint, GLint, GLenum, GLboolean, GLsizei, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glGetVertexAttribArrayObjectfvATI (GLuint, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetVertexAttribArrayObjectivATI (GLuint, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glDepthBoundsEXT (GLclampd, GLclampd) {
}
GLAPI void APIENTRY stub_glBlendEquationSeparateEXT (GLenum, GLenum) {
}
GLAPI GLboolean APIENTRY stub_glIsRenderbufferEXT (GLuint) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glBindRenderbufferEXT (GLenum, GLuint) {
}
GLAPI void APIENTRY stub_glDeleteRenderbuffersEXT (GLsizei, const GLuint *) {
}
GLAPI void APIENTRY stub_glGenRenderbuffersEXT (GLsizei, GLuint *) {
}
GLAPI void APIENTRY stub_glRenderbufferStorageEXT (GLenum, GLenum, GLsizei, GLsizei) {
}
GLAPI void APIENTRY stub_glGetRenderbufferParameterivEXT (GLenum, GLenum, GLint *) {
}
GLAPI GLboolean APIENTRY stub_glIsFramebufferEXT (GLuint) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glBindFramebufferEXT (GLenum, GLuint) {
}
GLAPI void APIENTRY stub_glDeleteFramebuffersEXT (GLsizei, const GLuint *) {
}
GLAPI void APIENTRY stub_glGenFramebuffersEXT (GLsizei, GLuint *) {
}
GLAPI GLenum APIENTRY stub_glCheckFramebufferStatusEXT (GLenum) {
	return (GLenum)0;
}
GLAPI void APIENTRY stub_glFramebufferTexture1DEXT (GLenum, GLenum, GLenum, GLuint, GLint) {
}
GLAPI void APIENTRY stub_glFramebufferTexture2DEXT (GLenum, GLenum, GLenum, GLuint, GLint) {
}
GLAPI void APIENTRY stub_glFramebufferTexture3DEXT (GLenum, GLenum, GLenum, GLuint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glFramebufferRenderbufferEXT (GLenum, GLenum, GLenum, GLuint) {
}
GLAPI void APIENTRY stub_glGetFramebufferAttachmentParameterivEXT (GLenum, GLenum, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGenerateMipmapEXT (GLenum) {
}
GLAPI void APIENTRY stub_glStringMarkerGREMEDY (GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glStencilClearTagEXT (GLsizei, GLuint) {
}
GLAPI void APIENTRY stub_glBlitFramebufferEXT (GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum) {
}
GLAPI void APIENTRY stub_glRenderbufferStorageMultisampleEXT (GLenum, GLsizei, GLenum, GLsizei, GLsizei) {
}
GLAPI void APIENTRY stub_glGetQueryObjecti64vEXT (GLuint, GLenum, GLint64EXT *) {
}
GLAPI void APIENTRY stub_glGetQueryObjectui64vEXT (GLuint, GLenum, GLuint64EXT *) {
}
GLAPI void APIENTRY stub_glProgramEnvParameters4fvEXT (GLenum, GLuint, GLsizei, const GLfloat *) {
}
GLAPI void APIENTRY stub_glProgramLocalParameters4fvEXT (GLenum, GLuint, GLsizei, const GLfloat *) {
}
GLAPI void APIENTRY stub_glBufferParameteriAPPLE (GLenum, GLenum, GLint) {
}
GLAPI void APIENTRY stub_glFlushMappedBufferRangeAPPLE (GLenum, GLintptr, GLsizeiptr) {
}
GLAPI void APIENTRY stub_glProgramLocalParameterI4iNV (GLenum, GLuint, GLint, GLint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glProgramLocalParameterI4ivNV (GLenum, GLuint, const GLint *) {
}
GLAPI void APIENTRY stub_glProgramLocalParametersI4ivNV (GLenum, GLuint, GLsizei, const GLint *) {
}
GLAPI void APIENTRY stub_glProgramLocalParameterI4uiNV (GLenum, GLuint, GLuint, GLuint, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glProgramLocalParameterI4uivNV (GLenum, GLuint, const GLuint *) {
}
GLAPI void APIENTRY stub_glProgramLocalParametersI4uivNV (GLenum, GLuint, GLsizei, const GLuint *) {
}
GLAPI void APIENTRY stub_glProgramEnvParameterI4iNV (GLenum, GLuint, GLint, GLint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glProgramEnvParameterI4ivNV (GLenum, GLuint, const GLint *) {
}
GLAPI void APIENTRY stub_glProgramEnvParametersI4ivNV (GLenum, GLuint, GLsizei, const GLint *) {
}
GLAPI void APIENTRY stub_glProgramEnvParameterI4uiNV (GLenum, GLuint, GLuint, GLuint, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glProgramEnvParameterI4uivNV (GLenum, GLuint, const GLuint *) {
}
GLAPI void APIENTRY stub_glProgramEnvParametersI4uivNV (GLenum, GLuint, GLsizei, const GLuint *) {
}
GLAPI void APIENTRY stub_glGetProgramLocalParameterIivNV (GLenum, GLuint, GLint *) {
}
GLAPI void APIENTRY stub_glGetProgramLocalParameterIuivNV (GLenum, GLuint, GLuint *) {
}
GLAPI void APIENTRY stub_glGetProgramEnvParameterIivNV (GLenum, GLuint, GLint *) {
}
GLAPI void APIENTRY stub_glGetProgramEnvParameterIuivNV (GLenum, GLuint, GLuint *) {
}
GLAPI void APIENTRY stub_glProgramVertexLimitNV (GLenum, GLint) {
}
GLAPI void APIENTRY stub_glFramebufferTextureEXT (GLenum, GLenum, GLuint, GLint) {
}
GLAPI void APIENTRY stub_glFramebufferTextureLayerEXT (GLenum, GLenum, GLuint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glFramebufferTextureFaceEXT (GLenum, GLenum, GLuint, GLint, GLenum) {
}
GLAPI void APIENTRY stub_glProgramParameteriEXT (GLuint, GLenum, GLint) {
}
GLAPI void APIENTRY stub_glVertexAttribI1iEXT (GLuint, GLint) {
}
GLAPI void APIENTRY stub_glVertexAttribI2iEXT (GLuint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glVertexAttribI3iEXT (GLuint, GLint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glVertexAttribI4iEXT (GLuint, GLint, GLint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glVertexAttribI1uiEXT (GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glVertexAttribI2uiEXT (GLuint, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glVertexAttribI3uiEXT (GLuint, GLuint, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glVertexAttribI4uiEXT (GLuint, GLuint, GLuint, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glVertexAttribI1ivEXT (GLuint, const GLint *) {
}
GLAPI void APIENTRY stub_glVertexAttribI2ivEXT (GLuint, const GLint *) {
}
GLAPI void APIENTRY stub_glVertexAttribI3ivEXT (GLuint, const GLint *) {
}
GLAPI void APIENTRY stub_glVertexAttribI4ivEXT (GLuint, const GLint *) {
}
GLAPI void APIENTRY stub_glVertexAttribI1uivEXT (GLuint, const GLuint *) {
}
GLAPI void APIENTRY stub_glVertexAttribI2uivEXT (GLuint, const GLuint *) {
}
GLAPI void APIENTRY stub_glVertexAttribI3uivEXT (GLuint, const GLuint *) {
}
GLAPI void APIENTRY stub_glVertexAttribI4uivEXT (GLuint, const GLuint *) {
}
GLAPI void APIENTRY stub_glVertexAttribI4bvEXT (GLuint, const GLbyte *) {
}
GLAPI void APIENTRY stub_glVertexAttribI4svEXT (GLuint, const GLshort *) {
}
GLAPI void APIENTRY stub_glVertexAttribI4ubvEXT (GLuint, const GLubyte *) {
}
GLAPI void APIENTRY stub_glVertexAttribI4usvEXT (GLuint, const GLushort *) {
}
GLAPI void APIENTRY stub_glVertexAttribIPointerEXT (GLuint, GLint, GLenum, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glGetVertexAttribIivEXT (GLuint, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetVertexAttribIuivEXT (GLuint, GLenum, GLuint *) {
}
GLAPI void APIENTRY stub_glGetUniformuivEXT (GLuint, GLint, GLuint *) {
}
GLAPI void APIENTRY stub_glBindFragDataLocationEXT (GLuint, GLuint, const GLchar *) {
}
GLAPI GLint APIENTRY stub_glGetFragDataLocationEXT (GLuint, const GLchar *) {
	return (GLint)0;
}
GLAPI void APIENTRY stub_glUniform1uiEXT (GLint, GLuint) {
}
GLAPI void APIENTRY stub_glUniform2uiEXT (GLint, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glUniform3uiEXT (GLint, GLuint, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glUniform4uiEXT (GLint, GLuint, GLuint, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glUniform1uivEXT (GLint, GLsizei, const GLuint *) {
}
GLAPI void APIENTRY stub_glUniform2uivEXT (GLint, GLsizei, const GLuint *) {
}
GLAPI void APIENTRY stub_glUniform3uivEXT (GLint, GLsizei, const GLuint *) {
}
GLAPI void APIENTRY stub_glUniform4uivEXT (GLint, GLsizei, const GLuint *) {
}
GLAPI void APIENTRY stub_glDrawArraysInstancedEXT (GLenum, GLint, GLsizei, GLsizei) {
}
GLAPI void APIENTRY stub_glDrawElementsInstancedEXT (GLenum, GLsizei, GLenum, const GLvoid *, GLsizei) {
}
GLAPI void APIENTRY stub_glTexBufferEXT (GLenum, GLenum, GLuint) {
}
GLAPI void APIENTRY stub_glDepthRangedNV (GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glClearDepthdNV (GLdouble) {
}
GLAPI void APIENTRY stub_glDepthBoundsdNV (GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glRenderbufferStorageMultisampleCoverageNV (GLenum, GLsizei, GLsizei, GLenum, GLsizei, GLsizei) {
}
GLAPI void APIENTRY stub_glProgramBufferParametersfvNV (GLenum, GLuint, GLuint, GLsizei, const GLfloat *) {
}
GLAPI void APIENTRY stub_glProgramBufferParametersIivNV (GLenum, GLuint, GLuint, GLsizei, const GLint *) {
}
GLAPI void APIENTRY stub_glProgramBufferParametersIuivNV (GLenum, GLuint, GLuint, GLsizei, const GLuint *) {
}
GLAPI void APIENTRY stub_glColorMaskIndexedEXT (GLuint, GLboolean, GLboolean, GLboolean, GLboolean) {
}
GLAPI void APIENTRY stub_glGetBooleanIndexedvEXT (GLenum, GLuint, GLboolean *) {
}
GLAPI void APIENTRY stub_glGetIntegerIndexedvEXT (GLenum, GLuint, GLint *) {
}
GLAPI void APIENTRY stub_glEnableIndexedEXT (GLenum, GLuint) {
}
GLAPI void APIENTRY stub_glDisableIndexedEXT (GLenum, GLuint) {
}
GLAPI GLboolean APIENTRY stub_glIsEnabledIndexedEXT (GLenum, GLuint) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glBeginTransformFeedbackNV (GLenum) {
}
GLAPI void APIENTRY stub_glEndTransformFeedbackNV (void) {
}
GLAPI void APIENTRY stub_glTransformFeedbackAttribsNV (GLuint, const GLint *, GLenum) {
}
GLAPI void APIENTRY stub_glBindBufferRangeNV (GLenum, GLuint, GLuint, GLintptr, GLsizeiptr) {
}
GLAPI void APIENTRY stub_glBindBufferOffsetNV (GLenum, GLuint, GLuint, GLintptr) {
}
GLAPI void APIENTRY stub_glBindBufferBaseNV (GLenum, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glTransformFeedbackVaryingsNV (GLuint, GLsizei, const GLchar* *, GLenum) {
}
GLAPI void APIENTRY stub_glActiveVaryingNV (GLuint, const GLchar *) {
}
GLAPI GLint APIENTRY stub_glGetVaryingLocationNV (GLuint, const GLchar *) {
	return (GLint)0;
}
GLAPI void APIENTRY stub_glGetActiveVaryingNV (GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *) {
}
GLAPI void APIENTRY stub_glGetTransformFeedbackVaryingNV (GLuint, GLuint, GLint *) {
}
GLAPI void APIENTRY stub_glUniformBufferEXT (GLuint, GLint, GLuint) {
}
GLAPI GLint APIENTRY stub_glGetUniformBufferSizeEXT (GLuint, GLint) {
	return (GLint)0;
}
GLAPI GLintptr APIENTRY stub_glGetUniformOffsetEXT (GLuint, GLint) {
	return (GLintptr)0;
}
GLAPI void APIENTRY stub_glTexParameterIivEXT (GLenum, GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glTexParameterIuivEXT (GLenum, GLenum, const GLuint *) {
}
GLAPI void APIENTRY stub_glGetTexParameterIivEXT (GLenum, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetTexParameterIuivEXT (GLenum, GLenum, GLuint *) {
}
GLAPI void APIENTRY stub_glClearColorIiEXT (GLint, GLint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glClearColorIuiEXT (GLuint, GLuint, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glFrameTerminatorGREMEDY (void) {
}
GLAPI void APIENTRY stub_glBeginConditionalRenderNV (GLuint, GLenum) {
}
GLAPI void APIENTRY stub_glEndConditionalRenderNV (void) {
}
GLAPI void APIENTRY stub_glPresentFrameKeyedNV (GLuint, GLuint64EXT, GLuint, GLuint, GLenum, GLenum, GLuint, GLuint, GLenum, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glPresentFrameDualFillNV (GLuint, GLuint64EXT, GLuint, GLuint, GLenum, GLenum, GLuint, GLenum, GLuint, GLenum, GLuint, GLenum, GLuint) {
}
GLAPI void APIENTRY stub_glGetVideoivNV (GLuint, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetVideouivNV (GLuint, GLenum, GLuint *) {
}
GLAPI void APIENTRY stub_glGetVideoi64vNV (GLuint, GLenum, GLint64EXT *) {
}
GLAPI void APIENTRY stub_glGetVideoui64vNV (GLuint, GLenum, GLuint64EXT *) {
}
GLAPI void APIENTRY stub_glBeginTransformFeedbackEXT (GLenum) {
}
GLAPI void APIENTRY stub_glEndTransformFeedbackEXT (void) {
}
GLAPI void APIENTRY stub_glBindBufferRangeEXT (GLenum, GLuint, GLuint, GLintptr, GLsizeiptr) {
}
GLAPI void APIENTRY stub_glBindBufferOffsetEXT (GLenum, GLuint, GLuint, GLintptr) {
}
GLAPI void APIENTRY stub_glBindBufferBaseEXT (GLenum, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glTransformFeedbackVaryingsEXT (GLuint, GLsizei, const GLchar* *, GLenum) {
}
GLAPI void APIENTRY stub_glGetTransformFeedbackVaryingEXT (GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *) {
}
GLAPI void APIENTRY stub_glClientAttribDefaultEXT (GLbitfield) {
}
GLAPI void APIENTRY stub_glPushClientAttribDefaultEXT (GLbitfield) {
}
GLAPI void APIENTRY stub_glMatrixLoadfEXT (GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glMatrixLoaddEXT (GLenum, const GLdouble *) {
}
GLAPI void APIENTRY stub_glMatrixMultfEXT (GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glMatrixMultdEXT (GLenum, const GLdouble *) {
}
GLAPI void APIENTRY stub_glMatrixLoadIdentityEXT (GLenum) {
}
GLAPI void APIENTRY stub_glMatrixRotatefEXT (GLenum, GLfloat, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glMatrixRotatedEXT (GLenum, GLdouble, GLdouble, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glMatrixScalefEXT (GLenum, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glMatrixScaledEXT (GLenum, GLdouble, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glMatrixTranslatefEXT (GLenum, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glMatrixTranslatedEXT (GLenum, GLdouble, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glMatrixFrustumEXT (GLenum, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glMatrixOrthoEXT (GLenum, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glMatrixPopEXT (GLenum) {
}
GLAPI void APIENTRY stub_glMatrixPushEXT (GLenum) {
}
GLAPI void APIENTRY stub_glMatrixLoadTransposefEXT (GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glMatrixLoadTransposedEXT (GLenum, const GLdouble *) {
}
GLAPI void APIENTRY stub_glMatrixMultTransposefEXT (GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glMatrixMultTransposedEXT (GLenum, const GLdouble *) {
}
GLAPI void APIENTRY stub_glTextureParameterfEXT (GLuint, GLenum, GLenum, GLfloat) {
}
GLAPI void APIENTRY stub_glTextureParameterfvEXT (GLuint, GLenum, GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glTextureParameteriEXT (GLuint, GLenum, GLenum, GLint) {
}
GLAPI void APIENTRY stub_glTextureParameterivEXT (GLuint, GLenum, GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glTextureImage1DEXT (GLuint, GLenum, GLint, GLenum, GLsizei, GLint, GLenum, GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glTextureImage2DEXT (GLuint, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glTextureSubImage1DEXT (GLuint, GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glTextureSubImage2DEXT (GLuint, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glCopyTextureImage1DEXT (GLuint, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint) {
}
GLAPI void APIENTRY stub_glCopyTextureImage2DEXT (GLuint, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint) {
}
GLAPI void APIENTRY stub_glCopyTextureSubImage1DEXT (GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei) {
}
GLAPI void APIENTRY stub_glCopyTextureSubImage2DEXT (GLuint, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) {
}
GLAPI void APIENTRY stub_glGetTextureImageEXT (GLuint, GLenum, GLint, GLenum, GLenum, GLvoid *) {
}
GLAPI void APIENTRY stub_glGetTextureParameterfvEXT (GLuint, GLenum, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetTextureParameterivEXT (GLuint, GLenum, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetTextureLevelParameterfvEXT (GLuint, GLenum, GLint, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetTextureLevelParameterivEXT (GLuint, GLenum, GLint, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glTextureImage3DEXT (GLuint, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glTextureSubImage3DEXT (GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glCopyTextureSubImage3DEXT (GLuint, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) {
}
GLAPI void APIENTRY stub_glMultiTexParameterfEXT (GLenum, GLenum, GLenum, GLfloat) {
}
GLAPI void APIENTRY stub_glMultiTexParameterfvEXT (GLenum, GLenum, GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glMultiTexParameteriEXT (GLenum, GLenum, GLenum, GLint) {
}
GLAPI void APIENTRY stub_glMultiTexParameterivEXT (GLenum, GLenum, GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glMultiTexImage1DEXT (GLenum, GLenum, GLint, GLenum, GLsizei, GLint, GLenum, GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glMultiTexImage2DEXT (GLenum, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glMultiTexSubImage1DEXT (GLenum, GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glMultiTexSubImage2DEXT (GLenum, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glCopyMultiTexImage1DEXT (GLenum, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint) {
}
GLAPI void APIENTRY stub_glCopyMultiTexImage2DEXT (GLenum, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint) {
}
GLAPI void APIENTRY stub_glCopyMultiTexSubImage1DEXT (GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei) {
}
GLAPI void APIENTRY stub_glCopyMultiTexSubImage2DEXT (GLenum, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) {
}
GLAPI void APIENTRY stub_glGetMultiTexImageEXT (GLenum, GLenum, GLint, GLenum, GLenum, GLvoid *) {
}
GLAPI void APIENTRY stub_glGetMultiTexParameterfvEXT (GLenum, GLenum, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetMultiTexParameterivEXT (GLenum, GLenum, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetMultiTexLevelParameterfvEXT (GLenum, GLenum, GLint, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetMultiTexLevelParameterivEXT (GLenum, GLenum, GLint, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glMultiTexImage3DEXT (GLenum, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glMultiTexSubImage3DEXT (GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) {
}
GLAPI void APIENTRY stub_glCopyMultiTexSubImage3DEXT (GLenum, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) {
}
GLAPI void APIENTRY stub_glBindMultiTextureEXT (GLenum, GLenum, GLuint) {
}
GLAPI void APIENTRY stub_glEnableClientStateIndexedEXT (GLenum, GLuint) {
}
GLAPI void APIENTRY stub_glDisableClientStateIndexedEXT (GLenum, GLuint) {
}
GLAPI void APIENTRY stub_glMultiTexCoordPointerEXT (GLenum, GLint, GLenum, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glMultiTexEnvfEXT (GLenum, GLenum, GLenum, GLfloat) {
}
GLAPI void APIENTRY stub_glMultiTexEnvfvEXT (GLenum, GLenum, GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glMultiTexEnviEXT (GLenum, GLenum, GLenum, GLint) {
}
GLAPI void APIENTRY stub_glMultiTexEnvivEXT (GLenum, GLenum, GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glMultiTexGendEXT (GLenum, GLenum, GLenum, GLdouble) {
}
GLAPI void APIENTRY stub_glMultiTexGendvEXT (GLenum, GLenum, GLenum, const GLdouble *) {
}
GLAPI void APIENTRY stub_glMultiTexGenfEXT (GLenum, GLenum, GLenum, GLfloat) {
}
GLAPI void APIENTRY stub_glMultiTexGenfvEXT (GLenum, GLenum, GLenum, const GLfloat *) {
}
GLAPI void APIENTRY stub_glMultiTexGeniEXT (GLenum, GLenum, GLenum, GLint) {
}
GLAPI void APIENTRY stub_glMultiTexGenivEXT (GLenum, GLenum, GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glGetMultiTexEnvfvEXT (GLenum, GLenum, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetMultiTexEnvivEXT (GLenum, GLenum, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetMultiTexGendvEXT (GLenum, GLenum, GLenum, GLdouble *) {
}
GLAPI void APIENTRY stub_glGetMultiTexGenfvEXT (GLenum, GLenum, GLenum, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetMultiTexGenivEXT (GLenum, GLenum, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetFloatIndexedvEXT (GLenum, GLuint, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetDoubleIndexedvEXT (GLenum, GLuint, GLdouble *) {
}
GLAPI void APIENTRY stub_glGetPointerIndexedvEXT (GLenum, GLuint, GLvoid* *) {
}
GLAPI void APIENTRY stub_glCompressedTextureImage3DEXT (GLuint, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glCompressedTextureImage2DEXT (GLuint, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glCompressedTextureImage1DEXT (GLuint, GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glCompressedTextureSubImage3DEXT (GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glCompressedTextureSubImage2DEXT (GLuint, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glCompressedTextureSubImage1DEXT (GLuint, GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glGetCompressedTextureImageEXT (GLuint, GLenum, GLint, GLvoid *) {
}
GLAPI void APIENTRY stub_glCompressedMultiTexImage3DEXT (GLenum, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glCompressedMultiTexImage2DEXT (GLenum, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glCompressedMultiTexImage1DEXT (GLenum, GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glCompressedMultiTexSubImage3DEXT (GLenum, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glCompressedMultiTexSubImage2DEXT (GLenum, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glCompressedMultiTexSubImage1DEXT (GLenum, GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glGetCompressedMultiTexImageEXT (GLenum, GLenum, GLint, GLvoid *) {
}
GLAPI void APIENTRY stub_glNamedProgramStringEXT (GLuint, GLenum, GLenum, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glNamedProgramLocalParameter4dEXT (GLuint, GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble) {
}
GLAPI void APIENTRY stub_glNamedProgramLocalParameter4dvEXT (GLuint, GLenum, GLuint, const GLdouble *) {
}
GLAPI void APIENTRY stub_glNamedProgramLocalParameter4fEXT (GLuint, GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glNamedProgramLocalParameter4fvEXT (GLuint, GLenum, GLuint, const GLfloat *) {
}
GLAPI void APIENTRY stub_glGetNamedProgramLocalParameterdvEXT (GLuint, GLenum, GLuint, GLdouble *) {
}
GLAPI void APIENTRY stub_glGetNamedProgramLocalParameterfvEXT (GLuint, GLenum, GLuint, GLfloat *) {
}
GLAPI void APIENTRY stub_glGetNamedProgramivEXT (GLuint, GLenum, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetNamedProgramStringEXT (GLuint, GLenum, GLenum, GLvoid *) {
}
GLAPI void APIENTRY stub_glNamedProgramLocalParameters4fvEXT (GLuint, GLenum, GLuint, GLsizei, const GLfloat *) {
}
GLAPI void APIENTRY stub_glNamedProgramLocalParameterI4iEXT (GLuint, GLenum, GLuint, GLint, GLint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glNamedProgramLocalParameterI4ivEXT (GLuint, GLenum, GLuint, const GLint *) {
}
GLAPI void APIENTRY stub_glNamedProgramLocalParametersI4ivEXT (GLuint, GLenum, GLuint, GLsizei, const GLint *) {
}
GLAPI void APIENTRY stub_glNamedProgramLocalParameterI4uiEXT (GLuint, GLenum, GLuint, GLuint, GLuint, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glNamedProgramLocalParameterI4uivEXT (GLuint, GLenum, GLuint, const GLuint *) {
}
GLAPI void APIENTRY stub_glNamedProgramLocalParametersI4uivEXT (GLuint, GLenum, GLuint, GLsizei, const GLuint *) {
}
GLAPI void APIENTRY stub_glGetNamedProgramLocalParameterIivEXT (GLuint, GLenum, GLuint, GLint *) {
}
GLAPI void APIENTRY stub_glGetNamedProgramLocalParameterIuivEXT (GLuint, GLenum, GLuint, GLuint *) {
}
GLAPI void APIENTRY stub_glTextureParameterIivEXT (GLuint, GLenum, GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glTextureParameterIuivEXT (GLuint, GLenum, GLenum, const GLuint *) {
}
GLAPI void APIENTRY stub_glGetTextureParameterIivEXT (GLuint, GLenum, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetTextureParameterIuivEXT (GLuint, GLenum, GLenum, GLuint *) {
}
GLAPI void APIENTRY stub_glMultiTexParameterIivEXT (GLenum, GLenum, GLenum, const GLint *) {
}
GLAPI void APIENTRY stub_glMultiTexParameterIuivEXT (GLenum, GLenum, GLenum, const GLuint *) {
}
GLAPI void APIENTRY stub_glGetMultiTexParameterIivEXT (GLenum, GLenum, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetMultiTexParameterIuivEXT (GLenum, GLenum, GLenum, GLuint *) {
}
GLAPI void APIENTRY stub_glProgramUniform1fEXT (GLuint, GLint, GLfloat) {
}
GLAPI void APIENTRY stub_glProgramUniform2fEXT (GLuint, GLint, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glProgramUniform3fEXT (GLuint, GLint, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glProgramUniform4fEXT (GLuint, GLint, GLfloat, GLfloat, GLfloat, GLfloat) {
}
GLAPI void APIENTRY stub_glProgramUniform1iEXT (GLuint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glProgramUniform2iEXT (GLuint, GLint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glProgramUniform3iEXT (GLuint, GLint, GLint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glProgramUniform4iEXT (GLuint, GLint, GLint, GLint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glProgramUniform1fvEXT (GLuint, GLint, GLsizei, const GLfloat *) {
}
GLAPI void APIENTRY stub_glProgramUniform2fvEXT (GLuint, GLint, GLsizei, const GLfloat *) {
}
GLAPI void APIENTRY stub_glProgramUniform3fvEXT (GLuint, GLint, GLsizei, const GLfloat *) {
}
GLAPI void APIENTRY stub_glProgramUniform4fvEXT (GLuint, GLint, GLsizei, const GLfloat *) {
}
GLAPI void APIENTRY stub_glProgramUniform1ivEXT (GLuint, GLint, GLsizei, const GLint *) {
}
GLAPI void APIENTRY stub_glProgramUniform2ivEXT (GLuint, GLint, GLsizei, const GLint *) {
}
GLAPI void APIENTRY stub_glProgramUniform3ivEXT (GLuint, GLint, GLsizei, const GLint *) {
}
GLAPI void APIENTRY stub_glProgramUniform4ivEXT (GLuint, GLint, GLsizei, const GLint *) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix2fvEXT (GLuint, GLint, GLsizei, GLboolean, const GLfloat *) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix3fvEXT (GLuint, GLint, GLsizei, GLboolean, const GLfloat *) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix4fvEXT (GLuint, GLint, GLsizei, GLboolean, const GLfloat *) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix2x3fvEXT (GLuint, GLint, GLsizei, GLboolean, const GLfloat *) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix3x2fvEXT (GLuint, GLint, GLsizei, GLboolean, const GLfloat *) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix2x4fvEXT (GLuint, GLint, GLsizei, GLboolean, const GLfloat *) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix4x2fvEXT (GLuint, GLint, GLsizei, GLboolean, const GLfloat *) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix3x4fvEXT (GLuint, GLint, GLsizei, GLboolean, const GLfloat *) {
}
GLAPI void APIENTRY stub_glProgramUniformMatrix4x3fvEXT (GLuint, GLint, GLsizei, GLboolean, const GLfloat *) {
}
GLAPI void APIENTRY stub_glProgramUniform1uiEXT (GLuint, GLint, GLuint) {
}
GLAPI void APIENTRY stub_glProgramUniform2uiEXT (GLuint, GLint, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glProgramUniform3uiEXT (GLuint, GLint, GLuint, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glProgramUniform4uiEXT (GLuint, GLint, GLuint, GLuint, GLuint, GLuint) {
}
GLAPI void APIENTRY stub_glProgramUniform1uivEXT (GLuint, GLint, GLsizei, const GLuint *) {
}
GLAPI void APIENTRY stub_glProgramUniform2uivEXT (GLuint, GLint, GLsizei, const GLuint *) {
}
GLAPI void APIENTRY stub_glProgramUniform3uivEXT (GLuint, GLint, GLsizei, const GLuint *) {
}
GLAPI void APIENTRY stub_glProgramUniform4uivEXT (GLuint, GLint, GLsizei, const GLuint *) {
}
GLAPI void APIENTRY stub_glNamedBufferDataEXT (GLuint, GLsizeiptr, const GLvoid *, GLenum) {
}
GLAPI void APIENTRY stub_glNamedBufferSubDataEXT (GLuint, GLintptr, GLsizeiptr, const GLvoid *) {
}
GLAPI GLvoid* APIENTRY stub_glMapNamedBufferEXT (GLuint, GLenum) {
	return (GLvoid*)0;
}
GLAPI GLboolean APIENTRY stub_glUnmapNamedBufferEXT (GLuint) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glGetNamedBufferParameterivEXT (GLuint, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGetNamedBufferPointervEXT (GLuint, GLenum, GLvoid* *) {
}
GLAPI void APIENTRY stub_glGetNamedBufferSubDataEXT (GLuint, GLintptr, GLsizeiptr, GLvoid *) {
}
GLAPI void APIENTRY stub_glTextureBufferEXT (GLuint, GLenum, GLenum, GLuint) {
}
GLAPI void APIENTRY stub_glMultiTexBufferEXT (GLenum, GLenum, GLenum, GLuint) {
}
GLAPI void APIENTRY stub_glNamedRenderbufferStorageEXT (GLuint, GLenum, GLsizei, GLsizei) {
}
GLAPI void APIENTRY stub_glGetNamedRenderbufferParameterivEXT (GLuint, GLenum, GLint *) {
}
GLAPI GLenum APIENTRY stub_glCheckNamedFramebufferStatusEXT (GLuint, GLenum) {
	return (GLenum)0;
}
GLAPI void APIENTRY stub_glNamedFramebufferTexture1DEXT (GLuint, GLenum, GLenum, GLuint, GLint) {
}
GLAPI void APIENTRY stub_glNamedFramebufferTexture2DEXT (GLuint, GLenum, GLenum, GLuint, GLint) {
}
GLAPI void APIENTRY stub_glNamedFramebufferTexture3DEXT (GLuint, GLenum, GLenum, GLuint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glNamedFramebufferRenderbufferEXT (GLuint, GLenum, GLenum, GLuint) {
}
GLAPI void APIENTRY stub_glGetNamedFramebufferAttachmentParameterivEXT (GLuint, GLenum, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glGenerateTextureMipmapEXT (GLuint, GLenum) {
}
GLAPI void APIENTRY stub_glGenerateMultiTexMipmapEXT (GLenum, GLenum) {
}
GLAPI void APIENTRY stub_glFramebufferDrawBufferEXT (GLuint, GLenum) {
}
GLAPI void APIENTRY stub_glFramebufferDrawBuffersEXT (GLuint, GLsizei, const GLenum *) {
}
GLAPI void APIENTRY stub_glFramebufferReadBufferEXT (GLuint, GLenum) {
}
GLAPI void APIENTRY stub_glGetFramebufferParameterivEXT (GLuint, GLenum, GLint *) {
}
GLAPI void APIENTRY stub_glNamedRenderbufferStorageMultisampleEXT (GLuint, GLsizei, GLenum, GLsizei, GLsizei) {
}
GLAPI void APIENTRY stub_glNamedRenderbufferStorageMultisampleCoverageEXT (GLuint, GLsizei, GLsizei, GLenum, GLsizei, GLsizei) {
}
GLAPI void APIENTRY stub_glNamedFramebufferTextureEXT (GLuint, GLenum, GLuint, GLint) {
}
GLAPI void APIENTRY stub_glNamedFramebufferTextureLayerEXT (GLuint, GLenum, GLuint, GLint, GLint) {
}
GLAPI void APIENTRY stub_glNamedFramebufferTextureFaceEXT (GLuint, GLenum, GLuint, GLint, GLenum) {
}
GLAPI void APIENTRY stub_glTextureRenderbufferEXT (GLuint, GLenum, GLuint) {
}
GLAPI void APIENTRY stub_glMultiTexRenderbufferEXT (GLenum, GLenum, GLuint) {
}
GLAPI void APIENTRY stub_glGetMultisamplefvNV (GLenum, GLuint, GLfloat *) {
}
GLAPI void APIENTRY stub_glSampleMaskIndexedNV (GLuint, GLbitfield) {
}
GLAPI void APIENTRY stub_glTexRenderbufferNV (GLenum, GLuint) {
}
GLAPI void APIENTRY stub_glBindTransformFeedbackNV (GLenum, GLuint) {
}
GLAPI void APIENTRY stub_glDeleteTransformFeedbacksNV (GLsizei, const GLuint *) {
}
GLAPI void APIENTRY stub_glGenTransformFeedbacksNV (GLsizei, GLuint *) {
}
GLAPI GLboolean APIENTRY stub_glIsTransformFeedbackNV (GLuint) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glPauseTransformFeedbackNV (void) {
}
GLAPI void APIENTRY stub_glResumeTransformFeedbackNV (void) {
}
GLAPI void APIENTRY stub_glDrawTransformFeedbackNV (GLenum, GLuint) {
}
GLAPI void APIENTRY stub_glGetPerfMonitorGroupsAMD (GLint *, GLsizei, GLuint *) {
}
GLAPI void APIENTRY stub_glGetPerfMonitorCountersAMD (GLuint, GLint *, GLint *, GLsizei, GLuint *) {
}
GLAPI void APIENTRY stub_glGetPerfMonitorGroupStringAMD (GLuint, GLsizei, GLsizei *, GLchar *) {
}
GLAPI void APIENTRY stub_glGetPerfMonitorCounterStringAMD (GLuint, GLuint, GLsizei, GLsizei *, GLchar *) {
}
GLAPI void APIENTRY stub_glGetPerfMonitorCounterInfoAMD (GLuint, GLuint, GLenum, void *) {
}
GLAPI void APIENTRY stub_glGenPerfMonitorsAMD (GLsizei, GLuint *) {
}
GLAPI void APIENTRY stub_glDeletePerfMonitorsAMD (GLsizei, GLuint *) {
}
GLAPI void APIENTRY stub_glSelectPerfMonitorCountersAMD (GLuint, GLboolean, GLuint, GLint, GLuint *) {
}
GLAPI void APIENTRY stub_glBeginPerfMonitorAMD (GLuint) {
}
GLAPI void APIENTRY stub_glEndPerfMonitorAMD (GLuint) {
}
GLAPI void APIENTRY stub_glGetPerfMonitorCounterDataAMD (GLuint, GLenum, GLsizei, GLuint *, GLint *) {
}
GLAPI void APIENTRY stub_glTessellationFactorAMD (GLfloat) {
}
GLAPI void APIENTRY stub_glTessellationModeAMD (GLenum) {
}
GLAPI void APIENTRY stub_glProvokingVertexEXT (GLenum) {
}
GLAPI void APIENTRY stub_glBlendFuncIndexedAMD (GLuint, GLenum, GLenum) {
}
GLAPI void APIENTRY stub_glBlendFuncSeparateIndexedAMD (GLuint, GLenum, GLenum, GLenum, GLenum) {
}
GLAPI void APIENTRY stub_glBlendEquationIndexedAMD (GLuint, GLenum) {
}
GLAPI void APIENTRY stub_glBlendEquationSeparateIndexedAMD (GLuint, GLenum, GLenum) {
}
GLAPI void APIENTRY stub_glTextureRangeAPPLE (GLenum, GLsizei, const GLvoid *) {
}
GLAPI void APIENTRY stub_glGetTexParameterPointervAPPLE (GLenum, GLenum, GLvoid* *) {
}
GLAPI void APIENTRY stub_glEnableVertexAttribAPPLE (GLuint, GLenum) {
}
GLAPI void APIENTRY stub_glDisableVertexAttribAPPLE (GLuint, GLenum) {
}
GLAPI GLboolean APIENTRY stub_glIsVertexAttribEnabledAPPLE (GLuint, GLenum) {
	return (GLboolean)0;
}
GLAPI void APIENTRY stub_glMapVertexAttrib1dAPPLE (GLuint, GLuint, GLdouble, GLdouble, GLint, GLint, const GLdouble *) {
}
GLAPI void APIENTRY stub_glMapVertexAttrib1fAPPLE (GLuint, GLuint, GLfloat, GLfloat, GLint, GLint, const GLfloat *) {
}
GLAPI void APIENTRY stub_glMapVertexAttrib2dAPPLE (GLuint, GLuint, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *) {
}
GLAPI void APIENTRY stub_glMapVertexAttrib2fAPPLE (GLuint, GLuint, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *) {
}
GLAPI GLenum APIENTRY stub_glObjectPurgeableAPPLE (GLenum, GLuint, GLenum) {
	return (GLenum)0;
}
GLAPI GLenum APIENTRY stub_glObjectUnpurgeableAPPLE (GLenum, GLuint, GLenum) {
	return (GLenum)0;
}
GLAPI void APIENTRY stub_glGetObjectParameterivAPPLE (GLenum, GLuint, GLenum, GLint *) {
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
	glProgramParameteri = stub_glProgramParameteri;
	glFramebufferTexture = stub_glFramebufferTexture;
	glFramebufferTextureFace = stub_glFramebufferTextureFace;
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
	glBlendEquationi = stub_glBlendEquationi;
	glBlendEquationSeparatei = stub_glBlendEquationSeparatei;
	glBlendFunci = stub_glBlendFunci;
	glBlendFuncSeparatei = stub_glBlendFuncSeparatei;
	glMinSampleShading = stub_glMinSampleShading;
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
	p = glXGetProcAddress((const unsigned char*)"glProgramParameteri");
	if (p) {
		glProgramParameteri = (PFNGLPROGRAMPARAMETERIPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFramebufferTexture");
	if (p) {
		glFramebufferTexture = (PFNGLFRAMEBUFFERTEXTUREPROC)p;
		m_count++;
	}
	p = glXGetProcAddress((const unsigned char*)"glFramebufferTextureFace");
	if (p) {
		glFramebufferTextureFace = (PFNGLFRAMEBUFFERTEXTUREFACEPROC)p;
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
	p = glXGetProcAddress((const unsigned char*)"glMinSampleShading");
	if (p) {
		glMinSampleShading = (PFNGLMINSAMPLESHADINGPROC)p;
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
	return (m_count > 0);
}
