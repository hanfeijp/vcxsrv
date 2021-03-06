/* DO NOT EDIT - This file generated automatically by gl_procs.py (from Mesa) script */

/*
 * Copyright (C) 1999-2001  Brian Paul   All Rights Reserved.
 * (C) Copyright IBM Corporation 2004, 2006
 * All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sub license,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT.  IN NO EVENT SHALL
 * BRIAN PAUL, IBM,
 * AND/OR THEIR SUPPLIERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
 * OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */


/* This file is only included by glapi.c and is used for
 * the GetProcAddress() function
 */

typedef struct {
    GLint Name_offset;
#if defined(NEED_FUNCTION_POINTER) || defined(GLX_INDIRECT_RENDERING)
    _glapi_proc Address;
#endif
    GLuint Offset;
} glprocs_table_t;

#if   !defined(NEED_FUNCTION_POINTER) && !defined(GLX_INDIRECT_RENDERING)
#  define NAME_FUNC_OFFSET(n,f1,f2,f3,o) { n , o }
#elif  defined(NEED_FUNCTION_POINTER) && !defined(GLX_INDIRECT_RENDERING)
#  define NAME_FUNC_OFFSET(n,f1,f2,f3,o) { n , (_glapi_proc) f1 , o }
#elif  defined(NEED_FUNCTION_POINTER) &&  defined(GLX_INDIRECT_RENDERING)
#  define NAME_FUNC_OFFSET(n,f1,f2,f3,o) { n , (_glapi_proc) f2 , o }
#elif !defined(NEED_FUNCTION_POINTER) &&  defined(GLX_INDIRECT_RENDERING)
#  define NAME_FUNC_OFFSET(n,f1,f2,f3,o) { n , (_glapi_proc) f3 , o }
#endif



static const char gl_string_table[] =
    "glNewList\0"
    "glEndList\0"
    "glCallList\0"
    "glCallLists\0"
    "glDeleteLists\0"
    "glGenLists\0"
    "glListBase\0"
    "glBegin\0"
    "glBitmap\0"
    "glColor3b\0"
    "glColor3bv\0"
    "glColor3d\0"
    "glColor3dv\0"
    "glColor3f\0"
    "glColor3fv\0"
    "glColor3i\0"
    "glColor3iv\0"
    "glColor3s\0"
    "glColor3sv\0"
    "glColor3ub\0"
    "glColor3ubv\0"
    "glColor3ui\0"
    "glColor3uiv\0"
    "glColor3us\0"
    "glColor3usv\0"
    "glColor4b\0"
    "glColor4bv\0"
    "glColor4d\0"
    "glColor4dv\0"
    "glColor4f\0"
    "glColor4fv\0"
    "glColor4i\0"
    "glColor4iv\0"
    "glColor4s\0"
    "glColor4sv\0"
    "glColor4ub\0"
    "glColor4ubv\0"
    "glColor4ui\0"
    "glColor4uiv\0"
    "glColor4us\0"
    "glColor4usv\0"
    "glEdgeFlag\0"
    "glEdgeFlagv\0"
    "glEnd\0"
    "glIndexd\0"
    "glIndexdv\0"
    "glIndexf\0"
    "glIndexfv\0"
    "glIndexi\0"
    "glIndexiv\0"
    "glIndexs\0"
    "glIndexsv\0"
    "glNormal3b\0"
    "glNormal3bv\0"
    "glNormal3d\0"
    "glNormal3dv\0"
    "glNormal3f\0"
    "glNormal3fv\0"
    "glNormal3i\0"
    "glNormal3iv\0"
    "glNormal3s\0"
    "glNormal3sv\0"
    "glRasterPos2d\0"
    "glRasterPos2dv\0"
    "glRasterPos2f\0"
    "glRasterPos2fv\0"
    "glRasterPos2i\0"
    "glRasterPos2iv\0"
    "glRasterPos2s\0"
    "glRasterPos2sv\0"
    "glRasterPos3d\0"
    "glRasterPos3dv\0"
    "glRasterPos3f\0"
    "glRasterPos3fv\0"
    "glRasterPos3i\0"
    "glRasterPos3iv\0"
    "glRasterPos3s\0"
    "glRasterPos3sv\0"
    "glRasterPos4d\0"
    "glRasterPos4dv\0"
    "glRasterPos4f\0"
    "glRasterPos4fv\0"
    "glRasterPos4i\0"
    "glRasterPos4iv\0"
    "glRasterPos4s\0"
    "glRasterPos4sv\0"
    "glRectd\0"
    "glRectdv\0"
    "glRectf\0"
    "glRectfv\0"
    "glRecti\0"
    "glRectiv\0"
    "glRects\0"
    "glRectsv\0"
    "glTexCoord1d\0"
    "glTexCoord1dv\0"
    "glTexCoord1f\0"
    "glTexCoord1fv\0"
    "glTexCoord1i\0"
    "glTexCoord1iv\0"
    "glTexCoord1s\0"
    "glTexCoord1sv\0"
    "glTexCoord2d\0"
    "glTexCoord2dv\0"
    "glTexCoord2f\0"
    "glTexCoord2fv\0"
    "glTexCoord2i\0"
    "glTexCoord2iv\0"
    "glTexCoord2s\0"
    "glTexCoord2sv\0"
    "glTexCoord3d\0"
    "glTexCoord3dv\0"
    "glTexCoord3f\0"
    "glTexCoord3fv\0"
    "glTexCoord3i\0"
    "glTexCoord3iv\0"
    "glTexCoord3s\0"
    "glTexCoord3sv\0"
    "glTexCoord4d\0"
    "glTexCoord4dv\0"
    "glTexCoord4f\0"
    "glTexCoord4fv\0"
    "glTexCoord4i\0"
    "glTexCoord4iv\0"
    "glTexCoord4s\0"
    "glTexCoord4sv\0"
    "glVertex2d\0"
    "glVertex2dv\0"
    "glVertex2f\0"
    "glVertex2fv\0"
    "glVertex2i\0"
    "glVertex2iv\0"
    "glVertex2s\0"
    "glVertex2sv\0"
    "glVertex3d\0"
    "glVertex3dv\0"
    "glVertex3f\0"
    "glVertex3fv\0"
    "glVertex3i\0"
    "glVertex3iv\0"
    "glVertex3s\0"
    "glVertex3sv\0"
    "glVertex4d\0"
    "glVertex4dv\0"
    "glVertex4f\0"
    "glVertex4fv\0"
    "glVertex4i\0"
    "glVertex4iv\0"
    "glVertex4s\0"
    "glVertex4sv\0"
    "glClipPlane\0"
    "glColorMaterial\0"
    "glCullFace\0"
    "glFogf\0"
    "glFogfv\0"
    "glFogi\0"
    "glFogiv\0"
    "glFrontFace\0"
    "glHint\0"
    "glLightf\0"
    "glLightfv\0"
    "glLighti\0"
    "glLightiv\0"
    "glLightModelf\0"
    "glLightModelfv\0"
    "glLightModeli\0"
    "glLightModeliv\0"
    "glLineStipple\0"
    "glLineWidth\0"
    "glMaterialf\0"
    "glMaterialfv\0"
    "glMateriali\0"
    "glMaterialiv\0"
    "glPointSize\0"
    "glPolygonMode\0"
    "glPolygonStipple\0"
    "glScissor\0"
    "glShadeModel\0"
    "glTexParameterf\0"
    "glTexParameterfv\0"
    "glTexParameteri\0"
    "glTexParameteriv\0"
    "glTexImage1D\0"
    "glTexImage2D\0"
    "glTexEnvf\0"
    "glTexEnvfv\0"
    "glTexEnvi\0"
    "glTexEnviv\0"
    "glTexGend\0"
    "glTexGendv\0"
    "glTexGenf\0"
    "glTexGenfv\0"
    "glTexGeni\0"
    "glTexGeniv\0"
    "glFeedbackBuffer\0"
    "glSelectBuffer\0"
    "glRenderMode\0"
    "glInitNames\0"
    "glLoadName\0"
    "glPassThrough\0"
    "glPopName\0"
    "glPushName\0"
    "glDrawBuffer\0"
    "glClear\0"
    "glClearAccum\0"
    "glClearIndex\0"
    "glClearColor\0"
    "glClearStencil\0"
    "glClearDepth\0"
    "glStencilMask\0"
    "glColorMask\0"
    "glDepthMask\0"
    "glIndexMask\0"
    "glAccum\0"
    "glDisable\0"
    "glEnable\0"
    "glFinish\0"
    "glFlush\0"
    "glPopAttrib\0"
    "glPushAttrib\0"
    "glMap1d\0"
    "glMap1f\0"
    "glMap2d\0"
    "glMap2f\0"
    "glMapGrid1d\0"
    "glMapGrid1f\0"
    "glMapGrid2d\0"
    "glMapGrid2f\0"
    "glEvalCoord1d\0"
    "glEvalCoord1dv\0"
    "glEvalCoord1f\0"
    "glEvalCoord1fv\0"
    "glEvalCoord2d\0"
    "glEvalCoord2dv\0"
    "glEvalCoord2f\0"
    "glEvalCoord2fv\0"
    "glEvalMesh1\0"
    "glEvalPoint1\0"
    "glEvalMesh2\0"
    "glEvalPoint2\0"
    "glAlphaFunc\0"
    "glBlendFunc\0"
    "glLogicOp\0"
    "glStencilFunc\0"
    "glStencilOp\0"
    "glDepthFunc\0"
    "glPixelZoom\0"
    "glPixelTransferf\0"
    "glPixelTransferi\0"
    "glPixelStoref\0"
    "glPixelStorei\0"
    "glPixelMapfv\0"
    "glPixelMapuiv\0"
    "glPixelMapusv\0"
    "glReadBuffer\0"
    "glCopyPixels\0"
    "glReadPixels\0"
    "glDrawPixels\0"
    "glGetBooleanv\0"
    "glGetClipPlane\0"
    "glGetDoublev\0"
    "glGetError\0"
    "glGetFloatv\0"
    "glGetIntegerv\0"
    "glGetLightfv\0"
    "glGetLightiv\0"
    "glGetMapdv\0"
    "glGetMapfv\0"
    "glGetMapiv\0"
    "glGetMaterialfv\0"
    "glGetMaterialiv\0"
    "glGetPixelMapfv\0"
    "glGetPixelMapuiv\0"
    "glGetPixelMapusv\0"
    "glGetPolygonStipple\0"
    "glGetString\0"
    "glGetTexEnvfv\0"
    "glGetTexEnviv\0"
    "glGetTexGendv\0"
    "glGetTexGenfv\0"
    "glGetTexGeniv\0"
    "glGetTexImage\0"
    "glGetTexParameterfv\0"
    "glGetTexParameteriv\0"
    "glGetTexLevelParameterfv\0"
    "glGetTexLevelParameteriv\0"
    "glIsEnabled\0"
    "glIsList\0"
    "glDepthRange\0"
    "glFrustum\0"
    "glLoadIdentity\0"
    "glLoadMatrixf\0"
    "glLoadMatrixd\0"
    "glMatrixMode\0"
    "glMultMatrixf\0"
    "glMultMatrixd\0"
    "glOrtho\0"
    "glPopMatrix\0"
    "glPushMatrix\0"
    "glRotated\0"
    "glRotatef\0"
    "glScaled\0"
    "glScalef\0"
    "glTranslated\0"
    "glTranslatef\0"
    "glViewport\0"
    "glArrayElement\0"
    "glBindTexture\0"
    "glColorPointer\0"
    "glDisableClientState\0"
    "glDrawArrays\0"
    "glDrawElements\0"
    "glEdgeFlagPointer\0"
    "glEnableClientState\0"
    "glIndexPointer\0"
    "glIndexub\0"
    "glIndexubv\0"
    "glInterleavedArrays\0"
    "glNormalPointer\0"
    "glPolygonOffset\0"
    "glTexCoordPointer\0"
    "glVertexPointer\0"
    "glAreTexturesResident\0"
    "glCopyTexImage1D\0"
    "glCopyTexImage2D\0"
    "glCopyTexSubImage1D\0"
    "glCopyTexSubImage2D\0"
    "glDeleteTextures\0"
    "glGenTextures\0"
    "glGetPointerv\0"
    "glIsTexture\0"
    "glPrioritizeTextures\0"
    "glTexSubImage1D\0"
    "glTexSubImage2D\0"
    "glPopClientAttrib\0"
    "glPushClientAttrib\0"
    "glBlendColor\0"
    "glBlendEquation\0"
    "glDrawRangeElements\0"
    "glColorTable\0"
    "glColorTableParameterfv\0"
    "glColorTableParameteriv\0"
    "glCopyColorTable\0"
    "glGetColorTable\0"
    "glGetColorTableParameterfv\0"
    "glGetColorTableParameteriv\0"
    "glColorSubTable\0"
    "glCopyColorSubTable\0"
    "glConvolutionFilter1D\0"
    "glConvolutionFilter2D\0"
    "glConvolutionParameterf\0"
    "glConvolutionParameterfv\0"
    "glConvolutionParameteri\0"
    "glConvolutionParameteriv\0"
    "glCopyConvolutionFilter1D\0"
    "glCopyConvolutionFilter2D\0"
    "glGetConvolutionFilter\0"
    "glGetConvolutionParameterfv\0"
    "glGetConvolutionParameteriv\0"
    "glGetSeparableFilter\0"
    "glSeparableFilter2D\0"
    "glGetHistogram\0"
    "glGetHistogramParameterfv\0"
    "glGetHistogramParameteriv\0"
    "glGetMinmax\0"
    "glGetMinmaxParameterfv\0"
    "glGetMinmaxParameteriv\0"
    "glHistogram\0"
    "glMinmax\0"
    "glResetHistogram\0"
    "glResetMinmax\0"
    "glTexImage3D\0"
    "glTexSubImage3D\0"
    "glCopyTexSubImage3D\0"
    "glActiveTexture\0"
    "glClientActiveTexture\0"
    "glMultiTexCoord1d\0"
    "glMultiTexCoord1dv\0"
    "glMultiTexCoord1fARB\0"
    "glMultiTexCoord1fvARB\0"
    "glMultiTexCoord1i\0"
    "glMultiTexCoord1iv\0"
    "glMultiTexCoord1s\0"
    "glMultiTexCoord1sv\0"
    "glMultiTexCoord2d\0"
    "glMultiTexCoord2dv\0"
    "glMultiTexCoord2fARB\0"
    "glMultiTexCoord2fvARB\0"
    "glMultiTexCoord2i\0"
    "glMultiTexCoord2iv\0"
    "glMultiTexCoord2s\0"
    "glMultiTexCoord2sv\0"
    "glMultiTexCoord3d\0"
    "glMultiTexCoord3dv\0"
    "glMultiTexCoord3fARB\0"
    "glMultiTexCoord3fvARB\0"
    "glMultiTexCoord3i\0"
    "glMultiTexCoord3iv\0"
    "glMultiTexCoord3s\0"
    "glMultiTexCoord3sv\0"
    "glMultiTexCoord4d\0"
    "glMultiTexCoord4dv\0"
    "glMultiTexCoord4fARB\0"
    "glMultiTexCoord4fvARB\0"
    "glMultiTexCoord4i\0"
    "glMultiTexCoord4iv\0"
    "glMultiTexCoord4s\0"
    "glMultiTexCoord4sv\0"
    "glGetnTexImage\0"
    "glCompressedTexImage1D\0"
    "glCompressedTexImage2D\0"
    "glCompressedTexImage3D\0"
    "glCompressedTexSubImage1D\0"
    "glCompressedTexSubImage2D\0"
    "glCompressedTexSubImage3D\0"
    "glGetCompressedTexImage\0"
    "glLoadTransposeMatrixd\0"
    "glLoadTransposeMatrixf\0"
    "glMultTransposeMatrixd\0"
    "glMultTransposeMatrixf\0"
    "glSampleCoverage\0"
    "glBlendFuncSeparate\0"
    "glFogCoordPointer\0"
    "glFogCoordd\0"
    "glFogCoorddv\0"
    "glMultiDrawArrays\0"
    "glPointParameterf\0"
    "glPointParameterfv\0"
    "glPointParameteri\0"
    "glPointParameteriv\0"
    "glSecondaryColor3b\0"
    "glSecondaryColor3bv\0"
    "glSecondaryColor3d\0"
    "glSecondaryColor3dv\0"
    "glSecondaryColor3i\0"
    "glSecondaryColor3iv\0"
    "glSecondaryColor3s\0"
    "glSecondaryColor3sv\0"
    "glSecondaryColor3ub\0"
    "glSecondaryColor3ubv\0"
    "glSecondaryColor3ui\0"
    "glSecondaryColor3uiv\0"
    "glSecondaryColor3us\0"
    "glSecondaryColor3usv\0"
    "glSecondaryColorPointer\0"
    "glWindowPos2d\0"
    "glWindowPos2dv\0"
    "glWindowPos2f\0"
    "glWindowPos2fv\0"
    "glWindowPos2i\0"
    "glWindowPos2iv\0"
    "glWindowPos2s\0"
    "glWindowPos2sv\0"
    "glWindowPos3d\0"
    "glWindowPos3dv\0"
    "glWindowPos3f\0"
    "glWindowPos3fv\0"
    "glWindowPos3i\0"
    "glWindowPos3iv\0"
    "glWindowPos3s\0"
    "glWindowPos3sv\0"
    "glBeginQuery\0"
    "glBindBuffer\0"
    "glBufferData\0"
    "glBufferSubData\0"
    "glDeleteBuffers\0"
    "glDeleteQueries\0"
    "glEndQuery\0"
    "glGenBuffers\0"
    "glGenQueries\0"
    "glGetBufferParameteriv\0"
    "glGetBufferPointerv\0"
    "glGetBufferSubData\0"
    "glGetQueryObjectiv\0"
    "glGetQueryObjectuiv\0"
    "glGetQueryiv\0"
    "glIsBuffer\0"
    "glIsQuery\0"
    "glMapBuffer\0"
    "glUnmapBuffer\0"
    "glAttachShader\0"
    "glBindAttribLocation\0"
    "glBlendEquationSeparate\0"
    "glCompileShader\0"
    "glCreateProgram\0"
    "glCreateShader\0"
    "glDeleteProgram\0"
    "glDeleteShader\0"
    "glDetachShader\0"
    "glDisableVertexAttribArray\0"
    "glDrawBuffers\0"
    "glEnableVertexAttribArray\0"
    "glGetActiveAttrib\0"
    "glGetActiveUniform\0"
    "glGetAttachedShaders\0"
    "glGetAttribLocation\0"
    "glGetProgramInfoLog\0"
    "glGetProgramiv\0"
    "glGetShaderInfoLog\0"
    "glGetShaderSource\0"
    "glGetShaderiv\0"
    "glGetUniformLocation\0"
    "glGetUniformfv\0"
    "glGetUniformiv\0"
    "glGetVertexAttribPointerv\0"
    "glGetVertexAttribdv\0"
    "glGetVertexAttribfv\0"
    "glGetVertexAttribiv\0"
    "glIsProgram\0"
    "glIsShader\0"
    "glLinkProgram\0"
    "glShaderSource\0"
    "glStencilFuncSeparate\0"
    "glStencilMaskSeparate\0"
    "glStencilOpSeparate\0"
    "glUniform1f\0"
    "glUniform1fv\0"
    "glUniform1i\0"
    "glUniform1iv\0"
    "glUniform2f\0"
    "glUniform2fv\0"
    "glUniform2i\0"
    "glUniform2iv\0"
    "glUniform3f\0"
    "glUniform3fv\0"
    "glUniform3i\0"
    "glUniform3iv\0"
    "glUniform4f\0"
    "glUniform4fv\0"
    "glUniform4i\0"
    "glUniform4iv\0"
    "glUniformMatrix2fv\0"
    "glUniformMatrix3fv\0"
    "glUniformMatrix4fv\0"
    "glUseProgram\0"
    "glValidateProgram\0"
    "glVertexAttrib1d\0"
    "glVertexAttrib1dv\0"
    "glVertexAttrib1s\0"
    "glVertexAttrib1sv\0"
    "glVertexAttrib2d\0"
    "glVertexAttrib2dv\0"
    "glVertexAttrib2s\0"
    "glVertexAttrib2sv\0"
    "glVertexAttrib3d\0"
    "glVertexAttrib3dv\0"
    "glVertexAttrib3s\0"
    "glVertexAttrib3sv\0"
    "glVertexAttrib4Nbv\0"
    "glVertexAttrib4Niv\0"
    "glVertexAttrib4Nsv\0"
    "glVertexAttrib4Nub\0"
    "glVertexAttrib4Nubv\0"
    "glVertexAttrib4Nuiv\0"
    "glVertexAttrib4Nusv\0"
    "glVertexAttrib4bv\0"
    "glVertexAttrib4d\0"
    "glVertexAttrib4dv\0"
    "glVertexAttrib4iv\0"
    "glVertexAttrib4s\0"
    "glVertexAttrib4sv\0"
    "glVertexAttrib4ubv\0"
    "glVertexAttrib4uiv\0"
    "glVertexAttrib4usv\0"
    "glVertexAttribPointer\0"
    "glUniformMatrix2x3fv\0"
    "glUniformMatrix2x4fv\0"
    "glUniformMatrix3x2fv\0"
    "glUniformMatrix3x4fv\0"
    "glUniformMatrix4x2fv\0"
    "glUniformMatrix4x3fv\0"
    "glBeginConditionalRender\0"
    "glBeginTransformFeedback\0"
    "glBindBufferBase\0"
    "glBindBufferRange\0"
    "glBindFragDataLocation\0"
    "glClampColor\0"
    "glClearBufferfi\0"
    "glClearBufferfv\0"
    "glClearBufferiv\0"
    "glClearBufferuiv\0"
    "glColorMaski\0"
    "glDisablei\0"
    "glEnablei\0"
    "glEndConditionalRender\0"
    "glEndTransformFeedback\0"
    "glGetBooleani_v\0"
    "glGetFragDataLocation\0"
    "glGetIntegeri_v\0"
    "glGetStringi\0"
    "glGetTexParameterIiv\0"
    "glGetTexParameterIuiv\0"
    "glGetTransformFeedbackVarying\0"
    "glGetUniformuiv\0"
    "glGetVertexAttribIiv\0"
    "glGetVertexAttribIuiv\0"
    "glIsEnabledi\0"
    "glTexParameterIiv\0"
    "glTexParameterIuiv\0"
    "glTransformFeedbackVaryings\0"
    "glUniform1ui\0"
    "glUniform1uiv\0"
    "glUniform2ui\0"
    "glUniform2uiv\0"
    "glUniform3ui\0"
    "glUniform3uiv\0"
    "glUniform4ui\0"
    "glUniform4uiv\0"
    "glVertexAttribI1iv\0"
    "glVertexAttribI1uiv\0"
    "glVertexAttribI4bv\0"
    "glVertexAttribI4sv\0"
    "glVertexAttribI4ubv\0"
    "glVertexAttribI4usv\0"
    "glVertexAttribIPointer\0"
    "glPrimitiveRestartIndex\0"
    "glTexBuffer\0"
    "glFramebufferTexture\0"
    "glGetBufferParameteri64v\0"
    "glGetInteger64i_v\0"
    "glVertexAttribDivisor\0"
    "glMinSampleShading\0"
    "glMemoryBarrierByRegion\0"
    "glBindProgramARB\0"
    "glDeleteProgramsARB\0"
    "glGenProgramsARB\0"
    "glGetProgramEnvParameterdvARB\0"
    "glGetProgramEnvParameterfvARB\0"
    "glGetProgramLocalParameterdvARB\0"
    "glGetProgramLocalParameterfvARB\0"
    "glGetProgramStringARB\0"
    "glGetProgramivARB\0"
    "glIsProgramARB\0"
    "glProgramEnvParameter4dARB\0"
    "glProgramEnvParameter4dvARB\0"
    "glProgramEnvParameter4fARB\0"
    "glProgramEnvParameter4fvARB\0"
    "glProgramLocalParameter4dARB\0"
    "glProgramLocalParameter4dvARB\0"
    "glProgramLocalParameter4fARB\0"
    "glProgramLocalParameter4fvARB\0"
    "glProgramStringARB\0"
    "glVertexAttrib1fARB\0"
    "glVertexAttrib1fvARB\0"
    "glVertexAttrib2fARB\0"
    "glVertexAttrib2fvARB\0"
    "glVertexAttrib3fARB\0"
    "glVertexAttrib3fvARB\0"
    "glVertexAttrib4fARB\0"
    "glVertexAttrib4fvARB\0"
    "glAttachObjectARB\0"
    "glCreateProgramObjectARB\0"
    "glCreateShaderObjectARB\0"
    "glDeleteObjectARB\0"
    "glDetachObjectARB\0"
    "glGetAttachedObjectsARB\0"
    "glGetHandleARB\0"
    "glGetInfoLogARB\0"
    "glGetObjectParameterfvARB\0"
    "glGetObjectParameterivARB\0"
    "glDrawArraysInstancedARB\0"
    "glDrawElementsInstancedARB\0"
    "glBindFramebuffer\0"
    "glBindRenderbuffer\0"
    "glBlitFramebuffer\0"
    "glCheckFramebufferStatus\0"
    "glDeleteFramebuffers\0"
    "glDeleteRenderbuffers\0"
    "glFramebufferRenderbuffer\0"
    "glFramebufferTexture1D\0"
    "glFramebufferTexture2D\0"
    "glFramebufferTexture3D\0"
    "glFramebufferTextureLayer\0"
    "glGenFramebuffers\0"
    "glGenRenderbuffers\0"
    "glGenerateMipmap\0"
    "glGetFramebufferAttachmentParameteriv\0"
    "glGetRenderbufferParameteriv\0"
    "glIsFramebuffer\0"
    "glIsRenderbuffer\0"
    "glRenderbufferStorage\0"
    "glRenderbufferStorageMultisample\0"
    "glFlushMappedBufferRange\0"
    "glMapBufferRange\0"
    "glBindVertexArray\0"
    "glDeleteVertexArrays\0"
    "glGenVertexArrays\0"
    "glIsVertexArray\0"
    "glGetActiveUniformBlockName\0"
    "glGetActiveUniformBlockiv\0"
    "glGetActiveUniformName\0"
    "glGetActiveUniformsiv\0"
    "glGetUniformBlockIndex\0"
    "glGetUniformIndices\0"
    "glUniformBlockBinding\0"
    "glCopyBufferSubData\0"
    "glClientWaitSync\0"
    "glDeleteSync\0"
    "glFenceSync\0"
    "glGetInteger64v\0"
    "glGetSynciv\0"
    "glIsSync\0"
    "glWaitSync\0"
    "glDrawElementsBaseVertex\0"
    "glDrawElementsInstancedBaseVertex\0"
    "glDrawRangeElementsBaseVertex\0"
    "glMultiDrawElementsBaseVertex\0"
    "glProvokingVertex\0"
    "glGetMultisamplefv\0"
    "glSampleMaski\0"
    "glTexImage2DMultisample\0"
    "glTexImage3DMultisample\0"
    "glBlendEquationSeparateiARB\0"
    "glBlendEquationiARB\0"
    "glBlendFuncSeparateiARB\0"
    "glBlendFunciARB\0"
    "glBindFragDataLocationIndexed\0"
    "glGetFragDataIndex\0"
    "glBindSampler\0"
    "glDeleteSamplers\0"
    "glGenSamplers\0"
    "glGetSamplerParameterIiv\0"
    "glGetSamplerParameterIuiv\0"
    "glGetSamplerParameterfv\0"
    "glGetSamplerParameteriv\0"
    "glIsSampler\0"
    "glSamplerParameterIiv\0"
    "glSamplerParameterIuiv\0"
    "glSamplerParameterf\0"
    "glSamplerParameterfv\0"
    "glSamplerParameteri\0"
    "glSamplerParameteriv\0"
    "glGetQueryObjecti64v\0"
    "glGetQueryObjectui64v\0"
    "glQueryCounter\0"
    "glColorP3ui\0"
    "glColorP3uiv\0"
    "glColorP4ui\0"
    "glColorP4uiv\0"
    "glMultiTexCoordP1ui\0"
    "glMultiTexCoordP1uiv\0"
    "glMultiTexCoordP2ui\0"
    "glMultiTexCoordP2uiv\0"
    "glMultiTexCoordP3ui\0"
    "glMultiTexCoordP3uiv\0"
    "glMultiTexCoordP4ui\0"
    "glMultiTexCoordP4uiv\0"
    "glNormalP3ui\0"
    "glNormalP3uiv\0"
    "glSecondaryColorP3ui\0"
    "glSecondaryColorP3uiv\0"
    "glTexCoordP1ui\0"
    "glTexCoordP1uiv\0"
    "glTexCoordP2ui\0"
    "glTexCoordP2uiv\0"
    "glTexCoordP3ui\0"
    "glTexCoordP3uiv\0"
    "glTexCoordP4ui\0"
    "glTexCoordP4uiv\0"
    "glVertexAttribP1ui\0"
    "glVertexAttribP1uiv\0"
    "glVertexAttribP2ui\0"
    "glVertexAttribP2uiv\0"
    "glVertexAttribP3ui\0"
    "glVertexAttribP3uiv\0"
    "glVertexAttribP4ui\0"
    "glVertexAttribP4uiv\0"
    "glVertexP2ui\0"
    "glVertexP2uiv\0"
    "glVertexP3ui\0"
    "glVertexP3uiv\0"
    "glVertexP4ui\0"
    "glVertexP4uiv\0"
    "glDrawArraysIndirect\0"
    "glDrawElementsIndirect\0"
    "glGetUniformdv\0"
    "glUniform1d\0"
    "glUniform1dv\0"
    "glUniform2d\0"
    "glUniform2dv\0"
    "glUniform3d\0"
    "glUniform3dv\0"
    "glUniform4d\0"
    "glUniform4dv\0"
    "glUniformMatrix2dv\0"
    "glUniformMatrix2x3dv\0"
    "glUniformMatrix2x4dv\0"
    "glUniformMatrix3dv\0"
    "glUniformMatrix3x2dv\0"
    "glUniformMatrix3x4dv\0"
    "glUniformMatrix4dv\0"
    "glUniformMatrix4x2dv\0"
    "glUniformMatrix4x3dv\0"
    "glGetActiveSubroutineName\0"
    "glGetActiveSubroutineUniformName\0"
    "glGetActiveSubroutineUniformiv\0"
    "glGetProgramStageiv\0"
    "glGetSubroutineIndex\0"
    "glGetSubroutineUniformLocation\0"
    "glGetUniformSubroutineuiv\0"
    "glUniformSubroutinesuiv\0"
    "glPatchParameterfv\0"
    "glPatchParameteri\0"
    "glBindTransformFeedback\0"
    "glDeleteTransformFeedbacks\0"
    "glDrawTransformFeedback\0"
    "glGenTransformFeedbacks\0"
    "glIsTransformFeedback\0"
    "glPauseTransformFeedback\0"
    "glResumeTransformFeedback\0"
    "glBeginQueryIndexed\0"
    "glDrawTransformFeedbackStream\0"
    "glEndQueryIndexed\0"
    "glGetQueryIndexediv\0"
    "glClearDepthf\0"
    "glDepthRangef\0"
    "glGetShaderPrecisionFormat\0"
    "glReleaseShaderCompiler\0"
    "glShaderBinary\0"
    "glGetProgramBinary\0"
    "glProgramBinary\0"
    "glProgramParameteri\0"
    "glGetVertexAttribLdv\0"
    "glVertexAttribL1d\0"
    "glVertexAttribL1dv\0"
    "glVertexAttribL2d\0"
    "glVertexAttribL2dv\0"
    "glVertexAttribL3d\0"
    "glVertexAttribL3dv\0"
    "glVertexAttribL4d\0"
    "glVertexAttribL4dv\0"
    "glVertexAttribLPointer\0"
    "glDepthRangeArrayv\0"
    "glDepthRangeIndexed\0"
    "glGetDoublei_v\0"
    "glGetFloati_v\0"
    "glScissorArrayv\0"
    "glScissorIndexed\0"
    "glScissorIndexedv\0"
    "glViewportArrayv\0"
    "glViewportIndexedf\0"
    "glViewportIndexedfv\0"
    "glGetGraphicsResetStatusARB\0"
    "glGetnColorTableARB\0"
    "glGetnCompressedTexImageARB\0"
    "glGetnConvolutionFilterARB\0"
    "glGetnHistogramARB\0"
    "glGetnMapdvARB\0"
    "glGetnMapfvARB\0"
    "glGetnMapivARB\0"
    "glGetnMinmaxARB\0"
    "glGetnPixelMapfvARB\0"
    "glGetnPixelMapuivARB\0"
    "glGetnPixelMapusvARB\0"
    "glGetnPolygonStippleARB\0"
    "glGetnSeparableFilterARB\0"
    "glGetnUniformdvARB\0"
    "glGetnUniformfvARB\0"
    "glGetnUniformivARB\0"
    "glGetnUniformuivARB\0"
    "glReadnPixelsARB\0"
    "glDrawArraysInstancedBaseInstance\0"
    "glDrawElementsInstancedBaseInstance\0"
    "glDrawElementsInstancedBaseVertexBaseInstance\0"
    "glDrawTransformFeedbackInstanced\0"
    "glDrawTransformFeedbackStreamInstanced\0"
    "glGetInternalformativ\0"
    "glGetActiveAtomicCounterBufferiv\0"
    "glBindImageTexture\0"
    "glMemoryBarrier\0"
    "glTexStorage1D\0"
    "glTexStorage2D\0"
    "glTexStorage3D\0"
    "glTextureStorage1DEXT\0"
    "glTextureStorage2DEXT\0"
    "glTextureStorage3DEXT\0"
    "glClearBufferData\0"
    "glClearBufferSubData\0"
    "glDispatchCompute\0"
    "glDispatchComputeIndirect\0"
    "glCopyImageSubData\0"
    "glTextureView\0"
    "glBindVertexBuffer\0"
    "glVertexAttribBinding\0"
    "glVertexAttribFormat\0"
    "glVertexAttribIFormat\0"
    "glVertexAttribLFormat\0"
    "glVertexBindingDivisor\0"
    "glFramebufferParameteri\0"
    "glGetFramebufferParameteriv\0"
    "glGetInternalformati64v\0"
    "glMultiDrawArraysIndirect\0"
    "glMultiDrawElementsIndirect\0"
    "glGetProgramInterfaceiv\0"
    "glGetProgramResourceIndex\0"
    "glGetProgramResourceLocation\0"
    "glGetProgramResourceLocationIndex\0"
    "glGetProgramResourceName\0"
    "glGetProgramResourceiv\0"
    "glShaderStorageBlockBinding\0"
    "glTexBufferRange\0"
    "glTexStorage2DMultisample\0"
    "glTexStorage3DMultisample\0"
    "glBufferStorage\0"
    "glClearTexImage\0"
    "glClearTexSubImage\0"
    "glBindBuffersBase\0"
    "glBindBuffersRange\0"
    "glBindImageTextures\0"
    "glBindSamplers\0"
    "glBindTextures\0"
    "glBindVertexBuffers\0"
    "glGetImageHandleARB\0"
    "glGetTextureHandleARB\0"
    "glGetTextureSamplerHandleARB\0"
    "glGetVertexAttribLui64vARB\0"
    "glIsImageHandleResidentARB\0"
    "glIsTextureHandleResidentARB\0"
    "glMakeImageHandleNonResidentARB\0"
    "glMakeImageHandleResidentARB\0"
    "glMakeTextureHandleNonResidentARB\0"
    "glMakeTextureHandleResidentARB\0"
    "glProgramUniformHandleui64ARB\0"
    "glProgramUniformHandleui64vARB\0"
    "glUniformHandleui64ARB\0"
    "glUniformHandleui64vARB\0"
    "glVertexAttribL1ui64ARB\0"
    "glVertexAttribL1ui64vARB\0"
    "glDispatchComputeGroupSizeARB\0"
    "glMultiDrawArraysIndirectCountARB\0"
    "glMultiDrawElementsIndirectCountARB\0"
    "glClipControl\0"
    "glBindTextureUnit\0"
    "glBlitNamedFramebuffer\0"
    "glCheckNamedFramebufferStatus\0"
    "glClearNamedBufferData\0"
    "glClearNamedBufferSubData\0"
    "glClearNamedFramebufferfi\0"
    "glClearNamedFramebufferfv\0"
    "glClearNamedFramebufferiv\0"
    "glClearNamedFramebufferuiv\0"
    "glCompressedTextureSubImage1D\0"
    "glCompressedTextureSubImage2D\0"
    "glCompressedTextureSubImage3D\0"
    "glCopyNamedBufferSubData\0"
    "glCopyTextureSubImage1D\0"
    "glCopyTextureSubImage2D\0"
    "glCopyTextureSubImage3D\0"
    "glCreateBuffers\0"
    "glCreateFramebuffers\0"
    "glCreateProgramPipelines\0"
    "glCreateQueries\0"
    "glCreateRenderbuffers\0"
    "glCreateSamplers\0"
    "glCreateTextures\0"
    "glCreateTransformFeedbacks\0"
    "glCreateVertexArrays\0"
    "glDisableVertexArrayAttrib\0"
    "glEnableVertexArrayAttrib\0"
    "glFlushMappedNamedBufferRange\0"
    "glGenerateTextureMipmap\0"
    "glGetCompressedTextureImage\0"
    "glGetNamedBufferParameteri64v\0"
    "glGetNamedBufferParameteriv\0"
    "glGetNamedBufferPointerv\0"
    "glGetNamedBufferSubData\0"
    "glGetNamedFramebufferAttachmentParameteriv\0"
    "glGetNamedFramebufferParameteriv\0"
    "glGetNamedRenderbufferParameteriv\0"
    "glGetQueryBufferObjecti64v\0"
    "glGetQueryBufferObjectiv\0"
    "glGetQueryBufferObjectui64v\0"
    "glGetQueryBufferObjectuiv\0"
    "glGetTextureImage\0"
    "glGetTextureLevelParameterfv\0"
    "glGetTextureLevelParameteriv\0"
    "glGetTextureParameterIiv\0"
    "glGetTextureParameterIuiv\0"
    "glGetTextureParameterfv\0"
    "glGetTextureParameteriv\0"
    "glGetTransformFeedbacki64_v\0"
    "glGetTransformFeedbacki_v\0"
    "glGetTransformFeedbackiv\0"
    "glGetVertexArrayIndexed64iv\0"
    "glGetVertexArrayIndexediv\0"
    "glGetVertexArrayiv\0"
    "glInvalidateNamedFramebufferData\0"
    "glInvalidateNamedFramebufferSubData\0"
    "glMapNamedBuffer\0"
    "glMapNamedBufferRange\0"
    "glNamedBufferData\0"
    "glNamedBufferStorage\0"
    "glNamedBufferSubData\0"
    "glNamedFramebufferDrawBuffer\0"
    "glNamedFramebufferDrawBuffers\0"
    "glNamedFramebufferParameteri\0"
    "glNamedFramebufferReadBuffer\0"
    "glNamedFramebufferRenderbuffer\0"
    "glNamedFramebufferTexture\0"
    "glNamedFramebufferTextureLayer\0"
    "glNamedRenderbufferStorage\0"
    "glNamedRenderbufferStorageMultisample\0"
    "glTextureBuffer\0"
    "glTextureBufferRange\0"
    "glTextureParameterIiv\0"
    "glTextureParameterIuiv\0"
    "glTextureParameterf\0"
    "glTextureParameterfv\0"
    "glTextureParameteri\0"
    "glTextureParameteriv\0"
    "glTextureStorage1D\0"
    "glTextureStorage2D\0"
    "glTextureStorage2DMultisample\0"
    "glTextureStorage3D\0"
    "glTextureStorage3DMultisample\0"
    "glTextureSubImage1D\0"
    "glTextureSubImage2D\0"
    "glTextureSubImage3D\0"
    "glTransformFeedbackBufferBase\0"
    "glTransformFeedbackBufferRange\0"
    "glUnmapNamedBuffer\0"
    "glVertexArrayAttribBinding\0"
    "glVertexArrayAttribFormat\0"
    "glVertexArrayAttribIFormat\0"
    "glVertexArrayAttribLFormat\0"
    "glVertexArrayBindingDivisor\0"
    "glVertexArrayElementBuffer\0"
    "glVertexArrayVertexBuffer\0"
    "glVertexArrayVertexBuffers\0"
    "glGetCompressedTextureSubImage\0"
    "glGetTextureSubImage\0"
    "glBufferPageCommitmentARB\0"
    "glNamedBufferPageCommitmentARB\0"
    "glGetUniformi64vARB\0"
    "glGetUniformui64vARB\0"
    "glGetnUniformi64vARB\0"
    "glGetnUniformui64vARB\0"
    "glProgramUniform1i64ARB\0"
    "glProgramUniform1i64vARB\0"
    "glProgramUniform1ui64ARB\0"
    "glProgramUniform1ui64vARB\0"
    "glProgramUniform2i64ARB\0"
    "glProgramUniform2i64vARB\0"
    "glProgramUniform2ui64ARB\0"
    "glProgramUniform2ui64vARB\0"
    "glProgramUniform3i64ARB\0"
    "glProgramUniform3i64vARB\0"
    "glProgramUniform3ui64ARB\0"
    "glProgramUniform3ui64vARB\0"
    "glProgramUniform4i64ARB\0"
    "glProgramUniform4i64vARB\0"
    "glProgramUniform4ui64ARB\0"
    "glProgramUniform4ui64vARB\0"
    "glUniform1i64ARB\0"
    "glUniform1i64vARB\0"
    "glUniform1ui64ARB\0"
    "glUniform1ui64vARB\0"
    "glUniform2i64ARB\0"
    "glUniform2i64vARB\0"
    "glUniform2ui64ARB\0"
    "glUniform2ui64vARB\0"
    "glUniform3i64ARB\0"
    "glUniform3i64vARB\0"
    "glUniform3ui64ARB\0"
    "glUniform3ui64vARB\0"
    "glUniform4i64ARB\0"
    "glUniform4i64vARB\0"
    "glUniform4ui64ARB\0"
    "glUniform4ui64vARB\0"
    "glEvaluateDepthValuesARB\0"
    "glFramebufferSampleLocationsfvARB\0"
    "glNamedFramebufferSampleLocationsfvARB\0"
    "glSpecializeShaderARB\0"
    "glInvalidateBufferData\0"
    "glInvalidateBufferSubData\0"
    "glInvalidateFramebuffer\0"
    "glInvalidateSubFramebuffer\0"
    "glInvalidateTexImage\0"
    "glInvalidateTexSubImage\0"
    "glDrawTexfOES\0"
    "glDrawTexfvOES\0"
    "glDrawTexiOES\0"
    "glDrawTexivOES\0"
    "glDrawTexsOES\0"
    "glDrawTexsvOES\0"
    "glDrawTexxOES\0"
    "glDrawTexxvOES\0"
    "glPointSizePointerOES\0"
    "glQueryMatrixxOES\0"
    "glSampleMaskSGIS\0"
    "glSamplePatternSGIS\0"
    "glColorPointerEXT\0"
    "glEdgeFlagPointerEXT\0"
    "glIndexPointerEXT\0"
    "glNormalPointerEXT\0"
    "glTexCoordPointerEXT\0"
    "glVertexPointerEXT\0"
    "glDiscardFramebufferEXT\0"
    "glActiveShaderProgram\0"
    "glBindProgramPipeline\0"
    "glCreateShaderProgramv\0"
    "glDeleteProgramPipelines\0"
    "glGenProgramPipelines\0"
    "glGetProgramPipelineInfoLog\0"
    "glGetProgramPipelineiv\0"
    "glIsProgramPipeline\0"
    "glLockArraysEXT\0"
    "glProgramUniform1d\0"
    "glProgramUniform1dv\0"
    "glProgramUniform1f\0"
    "glProgramUniform1fv\0"
    "glProgramUniform1i\0"
    "glProgramUniform1iv\0"
    "glProgramUniform1ui\0"
    "glProgramUniform1uiv\0"
    "glProgramUniform2d\0"
    "glProgramUniform2dv\0"
    "glProgramUniform2f\0"
    "glProgramUniform2fv\0"
    "glProgramUniform2i\0"
    "glProgramUniform2iv\0"
    "glProgramUniform2ui\0"
    "glProgramUniform2uiv\0"
    "glProgramUniform3d\0"
    "glProgramUniform3dv\0"
    "glProgramUniform3f\0"
    "glProgramUniform3fv\0"
    "glProgramUniform3i\0"
    "glProgramUniform3iv\0"
    "glProgramUniform3ui\0"
    "glProgramUniform3uiv\0"
    "glProgramUniform4d\0"
    "glProgramUniform4dv\0"
    "glProgramUniform4f\0"
    "glProgramUniform4fv\0"
    "glProgramUniform4i\0"
    "glProgramUniform4iv\0"
    "glProgramUniform4ui\0"
    "glProgramUniform4uiv\0"
    "glProgramUniformMatrix2dv\0"
    "glProgramUniformMatrix2fv\0"
    "glProgramUniformMatrix2x3dv\0"
    "glProgramUniformMatrix2x3fv\0"
    "glProgramUniformMatrix2x4dv\0"
    "glProgramUniformMatrix2x4fv\0"
    "glProgramUniformMatrix3dv\0"
    "glProgramUniformMatrix3fv\0"
    "glProgramUniformMatrix3x2dv\0"
    "glProgramUniformMatrix3x2fv\0"
    "glProgramUniformMatrix3x4dv\0"
    "glProgramUniformMatrix3x4fv\0"
    "glProgramUniformMatrix4dv\0"
    "glProgramUniformMatrix4fv\0"
    "glProgramUniformMatrix4x2dv\0"
    "glProgramUniformMatrix4x2fv\0"
    "glProgramUniformMatrix4x3dv\0"
    "glProgramUniformMatrix4x3fv\0"
    "glUnlockArraysEXT\0"
    "glUseProgramStages\0"
    "glValidateProgramPipeline\0"
    "glFramebufferTexture2DMultisampleEXT\0"
    "glDebugMessageCallback\0"
    "glDebugMessageControl\0"
    "glDebugMessageInsert\0"
    "glGetDebugMessageLog\0"
    "glGetObjectLabel\0"
    "glGetObjectPtrLabel\0"
    "glObjectLabel\0"
    "glObjectPtrLabel\0"
    "glPopDebugGroup\0"
    "glPushDebugGroup\0"
    "glSecondaryColor3fEXT\0"
    "glSecondaryColor3fvEXT\0"
    "glMultiDrawElementsEXT\0"
    "glFogCoordfEXT\0"
    "glFogCoordfvEXT\0"
    "glResizeBuffersMESA\0"
    "glWindowPos4dMESA\0"
    "glWindowPos4dvMESA\0"
    "glWindowPos4fMESA\0"
    "glWindowPos4fvMESA\0"
    "glWindowPos4iMESA\0"
    "glWindowPos4ivMESA\0"
    "glWindowPos4sMESA\0"
    "glWindowPos4svMESA\0"
    "glMultiModeDrawArraysIBM\0"
    "glMultiModeDrawElementsIBM\0"
    "glAreProgramsResidentNV\0"
    "glExecuteProgramNV\0"
    "glGetProgramParameterdvNV\0"
    "glGetProgramParameterfvNV\0"
    "glGetProgramStringNV\0"
    "glGetProgramivNV\0"
    "glGetTrackMatrixivNV\0"
    "glGetVertexAttribdvNV\0"
    "glGetVertexAttribfvNV\0"
    "glGetVertexAttribivNV\0"
    "glLoadProgramNV\0"
    "glProgramParameters4dvNV\0"
    "glProgramParameters4fvNV\0"
    "glRequestResidentProgramsNV\0"
    "glTrackMatrixNV\0"
    "glVertexAttrib1dNV\0"
    "glVertexAttrib1dvNV\0"
    "glVertexAttrib1fNV\0"
    "glVertexAttrib1fvNV\0"
    "glVertexAttrib1sNV\0"
    "glVertexAttrib1svNV\0"
    "glVertexAttrib2dNV\0"
    "glVertexAttrib2dvNV\0"
    "glVertexAttrib2fNV\0"
    "glVertexAttrib2fvNV\0"
    "glVertexAttrib2sNV\0"
    "glVertexAttrib2svNV\0"
    "glVertexAttrib3dNV\0"
    "glVertexAttrib3dvNV\0"
    "glVertexAttrib3fNV\0"
    "glVertexAttrib3fvNV\0"
    "glVertexAttrib3sNV\0"
    "glVertexAttrib3svNV\0"
    "glVertexAttrib4dNV\0"
    "glVertexAttrib4dvNV\0"
    "glVertexAttrib4fNV\0"
    "glVertexAttrib4fvNV\0"
    "glVertexAttrib4sNV\0"
    "glVertexAttrib4svNV\0"
    "glVertexAttrib4ubNV\0"
    "glVertexAttrib4ubvNV\0"
    "glVertexAttribPointerNV\0"
    "glVertexAttribs1dvNV\0"
    "glVertexAttribs1fvNV\0"
    "glVertexAttribs1svNV\0"
    "glVertexAttribs2dvNV\0"
    "glVertexAttribs2fvNV\0"
    "glVertexAttribs2svNV\0"
    "glVertexAttribs3dvNV\0"
    "glVertexAttribs3fvNV\0"
    "glVertexAttribs3svNV\0"
    "glVertexAttribs4dvNV\0"
    "glVertexAttribs4fvNV\0"
    "glVertexAttribs4svNV\0"
    "glVertexAttribs4ubvNV\0"
    "glGetTexBumpParameterfvATI\0"
    "glGetTexBumpParameterivATI\0"
    "glTexBumpParameterfvATI\0"
    "glTexBumpParameterivATI\0"
    "glAlphaFragmentOp1ATI\0"
    "glAlphaFragmentOp2ATI\0"
    "glAlphaFragmentOp3ATI\0"
    "glBeginFragmentShaderATI\0"
    "glBindFragmentShaderATI\0"
    "glColorFragmentOp1ATI\0"
    "glColorFragmentOp2ATI\0"
    "glColorFragmentOp3ATI\0"
    "glDeleteFragmentShaderATI\0"
    "glEndFragmentShaderATI\0"
    "glGenFragmentShadersATI\0"
    "glPassTexCoordATI\0"
    "glSampleMapATI\0"
    "glSetFragmentShaderConstantATI\0"
    "glDepthRangeArrayfvOES\0"
    "glDepthRangeIndexedfOES\0"
    "glActiveStencilFaceEXT\0"
    "glGetProgramNamedParameterdvNV\0"
    "glGetProgramNamedParameterfvNV\0"
    "glProgramNamedParameter4dNV\0"
    "glProgramNamedParameter4dvNV\0"
    "glProgramNamedParameter4fNV\0"
    "glProgramNamedParameter4fvNV\0"
    "glPrimitiveRestartNV\0"
    "glGetTexGenxvOES\0"
    "glTexGenxOES\0"
    "glTexGenxvOES\0"
    "glDepthBoundsEXT\0"
    "glBindFramebufferEXT\0"
    "glBindRenderbufferEXT\0"
    "glStringMarkerGREMEDY\0"
    "glBufferParameteriAPPLE\0"
    "glFlushMappedBufferRangeAPPLE\0"
    "glVertexAttribI1iEXT\0"
    "glVertexAttribI1uiEXT\0"
    "glVertexAttribI2iEXT\0"
    "glVertexAttribI2ivEXT\0"
    "glVertexAttribI2uiEXT\0"
    "glVertexAttribI2uivEXT\0"
    "glVertexAttribI3iEXT\0"
    "glVertexAttribI3ivEXT\0"
    "glVertexAttribI3uiEXT\0"
    "glVertexAttribI3uivEXT\0"
    "glVertexAttribI4iEXT\0"
    "glVertexAttribI4ivEXT\0"
    "glVertexAttribI4uiEXT\0"
    "glVertexAttribI4uivEXT\0"
    "glClearColorIiEXT\0"
    "glClearColorIuiEXT\0"
    "glBindBufferOffsetEXT\0"
    "glBeginPerfMonitorAMD\0"
    "glDeletePerfMonitorsAMD\0"
    "glEndPerfMonitorAMD\0"
    "glGenPerfMonitorsAMD\0"
    "glGetPerfMonitorCounterDataAMD\0"
    "glGetPerfMonitorCounterInfoAMD\0"
    "glGetPerfMonitorCounterStringAMD\0"
    "glGetPerfMonitorCountersAMD\0"
    "glGetPerfMonitorGroupStringAMD\0"
    "glGetPerfMonitorGroupsAMD\0"
    "glSelectPerfMonitorCountersAMD\0"
    "glGetObjectParameterivAPPLE\0"
    "glObjectPurgeableAPPLE\0"
    "glObjectUnpurgeableAPPLE\0"
    "glActiveProgramEXT\0"
    "glCreateShaderProgramEXT\0"
    "glUseShaderProgramEXT\0"
    "glTextureBarrierNV\0"
    "glVDPAUFiniNV\0"
    "glVDPAUGetSurfaceivNV\0"
    "glVDPAUInitNV\0"
    "glVDPAUIsSurfaceNV\0"
    "glVDPAUMapSurfacesNV\0"
    "glVDPAURegisterOutputSurfaceNV\0"
    "glVDPAURegisterVideoSurfaceNV\0"
    "glVDPAUSurfaceAccessNV\0"
    "glVDPAUUnmapSurfacesNV\0"
    "glVDPAUUnregisterSurfaceNV\0"
    "glBeginPerfQueryINTEL\0"
    "glCreatePerfQueryINTEL\0"
    "glDeletePerfQueryINTEL\0"
    "glEndPerfQueryINTEL\0"
    "glGetFirstPerfQueryIdINTEL\0"
    "glGetNextPerfQueryIdINTEL\0"
    "glGetPerfCounterInfoINTEL\0"
    "glGetPerfQueryDataINTEL\0"
    "glGetPerfQueryIdByNameINTEL\0"
    "glGetPerfQueryInfoINTEL\0"
    "glPolygonOffsetClampEXT\0"
    "glSubpixelPrecisionBiasNV\0"
    "glConservativeRasterParameterfNV\0"
    "glConservativeRasterParameteriNV\0"
    "glWindowRectanglesEXT\0"
    "glBufferStorageMemEXT\0"
    "glCreateMemoryObjectsEXT\0"
    "glDeleteMemoryObjectsEXT\0"
    "glDeleteSemaphoresEXT\0"
    "glGenSemaphoresEXT\0"
    "glGetMemoryObjectParameterivEXT\0"
    "glGetSemaphoreParameterui64vEXT\0"
    "glGetUnsignedBytei_vEXT\0"
    "glGetUnsignedBytevEXT\0"
    "glIsMemoryObjectEXT\0"
    "glIsSemaphoreEXT\0"
    "glMemoryObjectParameterivEXT\0"
    "glNamedBufferStorageMemEXT\0"
    "glSemaphoreParameterui64vEXT\0"
    "glSignalSemaphoreEXT\0"
    "glTexStorageMem1DEXT\0"
    "glTexStorageMem2DEXT\0"
    "glTexStorageMem2DMultisampleEXT\0"
    "glTexStorageMem3DEXT\0"
    "glTexStorageMem3DMultisampleEXT\0"
    "glTextureStorageMem1DEXT\0"
    "glTextureStorageMem2DEXT\0"
    "glTextureStorageMem2DMultisampleEXT\0"
    "glTextureStorageMem3DEXT\0"
    "glTextureStorageMem3DMultisampleEXT\0"
    "glWaitSemaphoreEXT\0"
    "glImportMemoryFdEXT\0"
    "glImportSemaphoreFdEXT\0"
    "glFramebufferFetchBarrierEXT\0"
    "glNamedRenderbufferStorageMultisampleAdvancedAMD\0"
    "glRenderbufferStorageMultisampleAdvancedAMD\0"
    "glStencilFuncSeparateATI\0"
    "glProgramEnvParameters4fvEXT\0"
    "glProgramLocalParameters4fvEXT\0"
    "glEGLImageTargetRenderbufferStorageOES\0"
    "glEGLImageTargetTexture2DOES\0"
    "glAlphaFuncx\0"
    "glClearColorx\0"
    "glClearDepthx\0"
    "glColor4x\0"
    "glDepthRangex\0"
    "glFogx\0"
    "glFogxv\0"
    "glFrustumf\0"
    "glFrustumx\0"
    "glLightModelx\0"
    "glLightModelxv\0"
    "glLightx\0"
    "glLightxv\0"
    "glLineWidthx\0"
    "glLoadMatrixx\0"
    "glMaterialx\0"
    "glMaterialxv\0"
    "glMultMatrixx\0"
    "glMultiTexCoord4x\0"
    "glNormal3x\0"
    "glOrthof\0"
    "glOrthox\0"
    "glPointSizex\0"
    "glPolygonOffsetx\0"
    "glRotatex\0"
    "glSampleCoveragex\0"
    "glScalex\0"
    "glTexEnvx\0"
    "glTexEnvxv\0"
    "glTexParameterx\0"
    "glTranslatex\0"
    "glClipPlanef\0"
    "glClipPlanex\0"
    "glGetClipPlanef\0"
    "glGetClipPlanex\0"
    "glGetFixedv\0"
    "glGetLightxv\0"
    "glGetMaterialxv\0"
    "glGetTexEnvxv\0"
    "glGetTexParameterxv\0"
    "glPointParameterx\0"
    "glPointParameterxv\0"
    "glTexParameterxv\0"
    "glBlendBarrier\0"
    "glPrimitiveBoundingBox\0"
    "glTexGenfOES\0"
    "glTexGenfvOES\0"
    "glTexGeniOES\0"
    "glTexGenivOES\0"
    "glReadBufferNV\0"
    "glGetTexGenfvOES\0"
    "glGetTexGenivOES\0"
    "glArrayElementEXT\0"
    "glBindTextureEXT\0"
    "glDrawArraysEXT\0"
    "glAreTexturesResidentEXT\0"
    "glCopyTexImage1DEXT\0"
    "glCopyTexImage2DEXT\0"
    "glCopyTexSubImage1DEXT\0"
    "glCopyTexSubImage2DEXT\0"
    "glDeleteTexturesEXT\0"
    "glGenTexturesEXT\0"
    "glGetPointervKHR\0"
    "glGetPointervEXT\0"
    "glIsTextureEXT\0"
    "glPrioritizeTexturesEXT\0"
    "glTexSubImage1DEXT\0"
    "glTexSubImage2DEXT\0"
    "glBlendColorEXT\0"
    "glBlendEquationEXT\0"
    "glBlendEquationOES\0"
    "glDrawRangeElementsEXT\0"
    "glColorTableSGI\0"
    "glColorTableEXT\0"
    "glColorTableParameterfvSGI\0"
    "glColorTableParameterivSGI\0"
    "glCopyColorTableSGI\0"
    "glGetColorTableSGI\0"
    "glGetColorTableEXT\0"
    "glGetColorTableParameterfvSGI\0"
    "glGetColorTableParameterfvEXT\0"
    "glGetColorTableParameterivSGI\0"
    "glGetColorTableParameterivEXT\0"
    "glColorSubTableEXT\0"
    "glCopyColorSubTableEXT\0"
    "glConvolutionFilter1DEXT\0"
    "glConvolutionFilter2DEXT\0"
    "glConvolutionParameterfEXT\0"
    "glConvolutionParameterfvEXT\0"
    "glConvolutionParameteriEXT\0"
    "glConvolutionParameterivEXT\0"
    "glCopyConvolutionFilter1DEXT\0"
    "glCopyConvolutionFilter2DEXT\0"
    "glGetConvolutionFilterEXT\0"
    "glGetConvolutionParameterfvEXT\0"
    "glGetConvolutionParameterivEXT\0"
    "glGetSeparableFilterEXT\0"
    "glSeparableFilter2DEXT\0"
    "glGetHistogramEXT\0"
    "glGetHistogramParameterfvEXT\0"
    "glGetHistogramParameterivEXT\0"
    "glGetMinmaxEXT\0"
    "glGetMinmaxParameterfvEXT\0"
    "glGetMinmaxParameterivEXT\0"
    "glHistogramEXT\0"
    "glMinmaxEXT\0"
    "glResetHistogramEXT\0"
    "glResetMinmaxEXT\0"
    "glTexImage3DEXT\0"
    "glTexImage3DOES\0"
    "glTexSubImage3DEXT\0"
    "glTexSubImage3DOES\0"
    "glCopyTexSubImage3DEXT\0"
    "glCopyTexSubImage3DOES\0"
    "glActiveTextureARB\0"
    "glClientActiveTextureARB\0"
    "glMultiTexCoord1dARB\0"
    "glMultiTexCoord1dvARB\0"
    "glMultiTexCoord1f\0"
    "glMultiTexCoord1fv\0"
    "glMultiTexCoord1iARB\0"
    "glMultiTexCoord1ivARB\0"
    "glMultiTexCoord1sARB\0"
    "glMultiTexCoord1svARB\0"
    "glMultiTexCoord2dARB\0"
    "glMultiTexCoord2dvARB\0"
    "glMultiTexCoord2f\0"
    "glMultiTexCoord2fv\0"
    "glMultiTexCoord2iARB\0"
    "glMultiTexCoord2ivARB\0"
    "glMultiTexCoord2sARB\0"
    "glMultiTexCoord2svARB\0"
    "glMultiTexCoord3dARB\0"
    "glMultiTexCoord3dvARB\0"
    "glMultiTexCoord3f\0"
    "glMultiTexCoord3fv\0"
    "glMultiTexCoord3iARB\0"
    "glMultiTexCoord3ivARB\0"
    "glMultiTexCoord3sARB\0"
    "glMultiTexCoord3svARB\0"
    "glMultiTexCoord4dARB\0"
    "glMultiTexCoord4dvARB\0"
    "glMultiTexCoord4f\0"
    "glMultiTexCoord4fv\0"
    "glMultiTexCoord4iARB\0"
    "glMultiTexCoord4ivARB\0"
    "glMultiTexCoord4sARB\0"
    "glMultiTexCoord4svARB\0"
    "glGetnTexImageARB\0"
    "glCompressedTexImage1DARB\0"
    "glCompressedTexImage2DARB\0"
    "glCompressedTexImage3DARB\0"
    "glCompressedTexImage3DOES\0"
    "glCompressedTexSubImage1DARB\0"
    "glCompressedTexSubImage2DARB\0"
    "glCompressedTexSubImage3DARB\0"
    "glCompressedTexSubImage3DOES\0"
    "glGetCompressedTexImageARB\0"
    "glLoadTransposeMatrixdARB\0"
    "glLoadTransposeMatrixfARB\0"
    "glMultTransposeMatrixdARB\0"
    "glMultTransposeMatrixfARB\0"
    "glSampleCoverageARB\0"
    "glBlendFuncSeparateEXT\0"
    "glBlendFuncSeparateINGR\0"
    "glBlendFuncSeparateOES\0"
    "glFogCoordPointerEXT\0"
    "glFogCoorddEXT\0"
    "glFogCoorddvEXT\0"
    "glMultiDrawArraysEXT\0"
    "glPointParameterfARB\0"
    "glPointParameterfEXT\0"
    "glPointParameterfSGIS\0"
    "glPointParameterfvARB\0"
    "glPointParameterfvEXT\0"
    "glPointParameterfvSGIS\0"
    "glPointParameteriNV\0"
    "glPointParameterivNV\0"
    "glSecondaryColor3bEXT\0"
    "glSecondaryColor3bvEXT\0"
    "glSecondaryColor3dEXT\0"
    "glSecondaryColor3dvEXT\0"
    "glSecondaryColor3iEXT\0"
    "glSecondaryColor3ivEXT\0"
    "glSecondaryColor3sEXT\0"
    "glSecondaryColor3svEXT\0"
    "glSecondaryColor3ubEXT\0"
    "glSecondaryColor3ubvEXT\0"
    "glSecondaryColor3uiEXT\0"
    "glSecondaryColor3uivEXT\0"
    "glSecondaryColor3usEXT\0"
    "glSecondaryColor3usvEXT\0"
    "glSecondaryColorPointerEXT\0"
    "glWindowPos2dARB\0"
    "glWindowPos2dMESA\0"
    "glWindowPos2dvARB\0"
    "glWindowPos2dvMESA\0"
    "glWindowPos2fARB\0"
    "glWindowPos2fMESA\0"
    "glWindowPos2fvARB\0"
    "glWindowPos2fvMESA\0"
    "glWindowPos2iARB\0"
    "glWindowPos2iMESA\0"
    "glWindowPos2ivARB\0"
    "glWindowPos2ivMESA\0"
    "glWindowPos2sARB\0"
    "glWindowPos2sMESA\0"
    "glWindowPos2svARB\0"
    "glWindowPos2svMESA\0"
    "glWindowPos3dARB\0"
    "glWindowPos3dMESA\0"
    "glWindowPos3dvARB\0"
    "glWindowPos3dvMESA\0"
    "glWindowPos3fARB\0"
    "glWindowPos3fMESA\0"
    "glWindowPos3fvARB\0"
    "glWindowPos3fvMESA\0"
    "glWindowPos3iARB\0"
    "glWindowPos3iMESA\0"
    "glWindowPos3ivARB\0"
    "glWindowPos3ivMESA\0"
    "glWindowPos3sARB\0"
    "glWindowPos3sMESA\0"
    "glWindowPos3svARB\0"
    "glWindowPos3svMESA\0"
    "glBeginQueryARB\0"
    "glBeginQueryEXT\0"
    "glBindBufferARB\0"
    "glBufferDataARB\0"
    "glBufferSubDataARB\0"
    "glDeleteBuffersARB\0"
    "glDeleteQueriesARB\0"
    "glDeleteQueriesEXT\0"
    "glEndQueryARB\0"
    "glEndQueryEXT\0"
    "glGenBuffersARB\0"
    "glGenQueriesARB\0"
    "glGenQueriesEXT\0"
    "glGetBufferParameterivARB\0"
    "glGetBufferPointervARB\0"
    "glGetBufferPointervOES\0"
    "glGetBufferSubDataARB\0"
    "glGetQueryObjectivARB\0"
    "glGetQueryObjectivEXT\0"
    "glGetQueryObjectuivARB\0"
    "glGetQueryObjectuivEXT\0"
    "glGetQueryivARB\0"
    "glGetQueryivEXT\0"
    "glIsBufferARB\0"
    "glIsQueryARB\0"
    "glIsQueryEXT\0"
    "glMapBufferARB\0"
    "glMapBufferOES\0"
    "glUnmapBufferARB\0"
    "glUnmapBufferOES\0"
    "glBindAttribLocationARB\0"
    "glBlendEquationSeparateEXT\0"
    "glBlendEquationSeparateATI\0"
    "glBlendEquationSeparateOES\0"
    "glCompileShaderARB\0"
    "glDisableVertexAttribArrayARB\0"
    "glDrawBuffersARB\0"
    "glDrawBuffersATI\0"
    "glDrawBuffersNV\0"
    "glDrawBuffersEXT\0"
    "glEnableVertexAttribArrayARB\0"
    "glGetActiveAttribARB\0"
    "glGetActiveUniformARB\0"
    "glGetAttribLocationARB\0"
    "glGetShaderSourceARB\0"
    "glGetUniformLocationARB\0"
    "glGetUniformfvARB\0"
    "glGetUniformivARB\0"
    "glGetVertexAttribPointervARB\0"
    "glGetVertexAttribPointervNV\0"
    "glGetVertexAttribdvARB\0"
    "glGetVertexAttribfvARB\0"
    "glGetVertexAttribivARB\0"
    "glLinkProgramARB\0"
    "glShaderSourceARB\0"
    "glStencilOpSeparateATI\0"
    "glUniform1fARB\0"
    "glUniform1fvARB\0"
    "glUniform1iARB\0"
    "glUniform1ivARB\0"
    "glUniform2fARB\0"
    "glUniform2fvARB\0"
    "glUniform2iARB\0"
    "glUniform2ivARB\0"
    "glUniform3fARB\0"
    "glUniform3fvARB\0"
    "glUniform3iARB\0"
    "glUniform3ivARB\0"
    "glUniform4fARB\0"
    "glUniform4fvARB\0"
    "glUniform4iARB\0"
    "glUniform4ivARB\0"
    "glUniformMatrix2fvARB\0"
    "glUniformMatrix3fvARB\0"
    "glUniformMatrix4fvARB\0"
    "glUseProgramObjectARB\0"
    "glValidateProgramARB\0"
    "glVertexAttrib1dARB\0"
    "glVertexAttrib1dvARB\0"
    "glVertexAttrib1sARB\0"
    "glVertexAttrib1svARB\0"
    "glVertexAttrib2dARB\0"
    "glVertexAttrib2dvARB\0"
    "glVertexAttrib2sARB\0"
    "glVertexAttrib2svARB\0"
    "glVertexAttrib3dARB\0"
    "glVertexAttrib3dvARB\0"
    "glVertexAttrib3sARB\0"
    "glVertexAttrib3svARB\0"
    "glVertexAttrib4NbvARB\0"
    "glVertexAttrib4NivARB\0"
    "glVertexAttrib4NsvARB\0"
    "glVertexAttrib4NubARB\0"
    "glVertexAttrib4NubvARB\0"
    "glVertexAttrib4NuivARB\0"
    "glVertexAttrib4NusvARB\0"
    "glVertexAttrib4bvARB\0"
    "glVertexAttrib4dARB\0"
    "glVertexAttrib4dvARB\0"
    "glVertexAttrib4ivARB\0"
    "glVertexAttrib4sARB\0"
    "glVertexAttrib4svARB\0"
    "glVertexAttrib4ubvARB\0"
    "glVertexAttrib4uivARB\0"
    "glVertexAttrib4usvARB\0"
    "glVertexAttribPointerARB\0"
    "glBeginConditionalRenderNV\0"
    "glBeginTransformFeedbackEXT\0"
    "glBindBufferBaseEXT\0"
    "glBindBufferRangeEXT\0"
    "glBindFragDataLocationEXT\0"
    "glClampColorARB\0"
    "glColorMaskIndexedEXT\0"
    "glColorMaskiEXT\0"
    "glColorMaskiOES\0"
    "glDisableIndexedEXT\0"
    "glDisableiEXT\0"
    "glDisableiOES\0"
    "glEnableIndexedEXT\0"
    "glEnableiEXT\0"
    "glEnableiOES\0"
    "glEndConditionalRenderNV\0"
    "glEndTransformFeedbackEXT\0"
    "glGetBooleanIndexedvEXT\0"
    "glGetFragDataLocationEXT\0"
    "glGetIntegerIndexedvEXT\0"
    "glGetTexParameterIivEXT\0"
    "glGetTexParameterIivOES\0"
    "glGetTexParameterIuivEXT\0"
    "glGetTexParameterIuivOES\0"
    "glGetTransformFeedbackVaryingEXT\0"
    "glGetUniformuivEXT\0"
    "glGetVertexAttribIivEXT\0"
    "glGetVertexAttribIuivEXT\0"
    "glIsEnabledIndexedEXT\0"
    "glIsEnablediEXT\0"
    "glIsEnablediOES\0"
    "glTexParameterIivEXT\0"
    "glTexParameterIivOES\0"
    "glTexParameterIuivEXT\0"
    "glTexParameterIuivOES\0"
    "glTransformFeedbackVaryingsEXT\0"
    "glUniform1uiEXT\0"
    "glUniform1uivEXT\0"
    "glUniform2uiEXT\0"
    "glUniform2uivEXT\0"
    "glUniform3uiEXT\0"
    "glUniform3uivEXT\0"
    "glUniform4uiEXT\0"
    "glUniform4uivEXT\0"
    "glVertexAttribI1ivEXT\0"
    "glVertexAttribI1uivEXT\0"
    "glVertexAttribI4bvEXT\0"
    "glVertexAttribI4svEXT\0"
    "glVertexAttribI4ubvEXT\0"
    "glVertexAttribI4usvEXT\0"
    "glVertexAttribIPointerEXT\0"
    "glPrimitiveRestartIndexNV\0"
    "glTexBufferARB\0"
    "glTexBufferEXT\0"
    "glTexBufferOES\0"
    "glFramebufferTextureEXT\0"
    "glFramebufferTextureOES\0"
    "glVertexAttribDivisorARB\0"
    "glMinSampleShadingARB\0"
    "glMinSampleShadingOES\0"
    "glBindProgramNV\0"
    "glDeleteProgramsNV\0"
    "glGenProgramsNV\0"
    "glIsProgramNV\0"
    "glProgramParameter4dNV\0"
    "glProgramParameter4dvNV\0"
    "glProgramParameter4fNV\0"
    "glProgramParameter4fvNV\0"
    "glVertexAttrib1f\0"
    "glVertexAttrib1fv\0"
    "glVertexAttrib2f\0"
    "glVertexAttrib2fv\0"
    "glVertexAttrib3f\0"
    "glVertexAttrib3fv\0"
    "glVertexAttrib4f\0"
    "glVertexAttrib4fv\0"
    "glDrawArraysInstancedEXT\0"
    "glDrawArraysInstanced\0"
    "glDrawElementsInstancedEXT\0"
    "glDrawElementsInstanced\0"
    "glBindFramebufferOES\0"
    "glBindRenderbufferOES\0"
    "glBlitFramebufferEXT\0"
    "glCheckFramebufferStatusEXT\0"
    "glCheckFramebufferStatusOES\0"
    "glDeleteFramebuffersEXT\0"
    "glDeleteFramebuffersOES\0"
    "glDeleteRenderbuffersEXT\0"
    "glDeleteRenderbuffersOES\0"
    "glFramebufferRenderbufferEXT\0"
    "glFramebufferRenderbufferOES\0"
    "glFramebufferTexture1DEXT\0"
    "glFramebufferTexture2DEXT\0"
    "glFramebufferTexture2DOES\0"
    "glFramebufferTexture3DEXT\0"
    "glFramebufferTexture3DOES\0"
    "glFramebufferTextureLayerEXT\0"
    "glGenFramebuffersEXT\0"
    "glGenFramebuffersOES\0"
    "glGenRenderbuffersEXT\0"
    "glGenRenderbuffersOES\0"
    "glGenerateMipmapEXT\0"
    "glGenerateMipmapOES\0"
    "glGetFramebufferAttachmentParameterivEXT\0"
    "glGetFramebufferAttachmentParameterivOES\0"
    "glGetRenderbufferParameterivEXT\0"
    "glGetRenderbufferParameterivOES\0"
    "glIsFramebufferEXT\0"
    "glIsFramebufferOES\0"
    "glIsRenderbufferEXT\0"
    "glIsRenderbufferOES\0"
    "glRenderbufferStorageEXT\0"
    "glRenderbufferStorageOES\0"
    "glRenderbufferStorageMultisampleEXT\0"
    "glFlushMappedBufferRangeEXT\0"
    "glMapBufferRangeEXT\0"
    "glBindVertexArrayOES\0"
    "glDeleteVertexArraysOES\0"
    "glGenVertexArraysOES\0"
    "glIsVertexArrayOES\0"
    "glDrawElementsBaseVertexEXT\0"
    "glDrawElementsBaseVertexOES\0"
    "glDrawElementsInstancedBaseVertexEXT\0"
    "glDrawElementsInstancedBaseVertexOES\0"
    "glDrawRangeElementsBaseVertexEXT\0"
    "glDrawRangeElementsBaseVertexOES\0"
    "glMultiDrawElementsBaseVertexEXT\0"
    "glProvokingVertexEXT\0"
    "glBlendEquationSeparateIndexedAMD\0"
    "glBlendEquationSeparatei\0"
    "glBlendEquationSeparateiEXT\0"
    "glBlendEquationSeparateiOES\0"
    "glBlendEquationIndexedAMD\0"
    "glBlendEquationi\0"
    "glBlendEquationiEXT\0"
    "glBlendEquationiOES\0"
    "glBlendFuncSeparateIndexedAMD\0"
    "glBlendFuncSeparatei\0"
    "glBlendFuncSeparateiEXT\0"
    "glBlendFuncSeparateiOES\0"
    "glBlendFuncIndexedAMD\0"
    "glBlendFunci\0"
    "glBlendFunciEXT\0"
    "glBlendFunciOES\0"
    "glBindFragDataLocationIndexedEXT\0"
    "glGetFragDataIndexEXT\0"
    "glGetSamplerParameterIivEXT\0"
    "glGetSamplerParameterIivOES\0"
    "glGetSamplerParameterIuivEXT\0"
    "glGetSamplerParameterIuivOES\0"
    "glSamplerParameterIivEXT\0"
    "glSamplerParameterIivOES\0"
    "glSamplerParameterIuivEXT\0"
    "glSamplerParameterIuivOES\0"
    "glGetQueryObjecti64vEXT\0"
    "glGetQueryObjectui64vEXT\0"
    "glQueryCounterEXT\0"
    "glPatchParameteriEXT\0"
    "glPatchParameteriOES\0"
    "glClearDepthfOES\0"
    "glDepthRangefOES\0"
    "glGetProgramBinaryOES\0"
    "glProgramBinaryOES\0"
    "glProgramParameteriEXT\0"
    "glGetVertexAttribLdvEXT\0"
    "glVertexAttribL1dEXT\0"
    "glVertexAttribL1dvEXT\0"
    "glVertexAttribL2dEXT\0"
    "glVertexAttribL2dvEXT\0"
    "glVertexAttribL3dEXT\0"
    "glVertexAttribL3dvEXT\0"
    "glVertexAttribL4dEXT\0"
    "glVertexAttribL4dvEXT\0"
    "glVertexAttribLPointerEXT\0"
    "glGetFloati_vOES\0"
    "glScissorArrayvOES\0"
    "glScissorIndexedOES\0"
    "glScissorIndexedvOES\0"
    "glViewportArrayvOES\0"
    "glViewportIndexedfOES\0"
    "glViewportIndexedfvOES\0"
    "glGetGraphicsResetStatus\0"
    "glGetGraphicsResetStatusKHR\0"
    "glGetGraphicsResetStatusEXT\0"
    "glGetnUniformfv\0"
    "glGetnUniformfvKHR\0"
    "glGetnUniformfvEXT\0"
    "glGetnUniformiv\0"
    "glGetnUniformivKHR\0"
    "glGetnUniformivEXT\0"
    "glGetnUniformuiv\0"
    "glGetnUniformuivKHR\0"
    "glReadnPixels\0"
    "glReadnPixelsKHR\0"
    "glReadnPixelsEXT\0"
    "glDrawArraysInstancedBaseInstanceEXT\0"
    "glDrawElementsInstancedBaseInstanceEXT\0"
    "glDrawElementsInstancedBaseVertexBaseInstanceEXT\0"
    "glCopyImageSubDataEXT\0"
    "glCopyImageSubDataOES\0"
    "glTextureViewOES\0"
    "glTextureViewEXT\0"
    "glMultiDrawArraysIndirectAMD\0"
    "glMultiDrawElementsIndirectAMD\0"
    "glGetProgramResourceLocationIndexEXT\0"
    "glTexBufferRangeEXT\0"
    "glTexBufferRangeOES\0"
    "glTexStorage3DMultisampleOES\0"
    "glBufferStorageEXT\0"
    "glMultiDrawArraysIndirectCount\0"
    "glMultiDrawElementsIndirectCount\0"
    "glGetUniformi64vNV\0"
    "glGetUniformui64vNV\0"
    "glProgramUniform1i64NV\0"
    "glProgramUniform1i64vNV\0"
    "glProgramUniform1ui64NV\0"
    "glProgramUniform1ui64vNV\0"
    "glProgramUniform2i64NV\0"
    "glProgramUniform2i64vNV\0"
    "glProgramUniform2ui64NV\0"
    "glProgramUniform2ui64vNV\0"
    "glProgramUniform3i64NV\0"
    "glProgramUniform3i64vNV\0"
    "glProgramUniform3ui64NV\0"
    "glProgramUniform3ui64vNV\0"
    "glProgramUniform4i64NV\0"
    "glProgramUniform4i64vNV\0"
    "glProgramUniform4ui64NV\0"
    "glProgramUniform4ui64vNV\0"
    "glUniform1i64NV\0"
    "glUniform1i64vNV\0"
    "glUniform1ui64NV\0"
    "glUniform1ui64vNV\0"
    "glUniform2i64NV\0"
    "glUniform2i64vNV\0"
    "glUniform2ui64NV\0"
    "glUniform2ui64vNV\0"
    "glUniform3i64NV\0"
    "glUniform3i64vNV\0"
    "glUniform3ui64NV\0"
    "glUniform3ui64vNV\0"
    "glUniform4i64NV\0"
    "glUniform4i64vNV\0"
    "glUniform4ui64NV\0"
    "glUniform4ui64vNV\0"
    "glResolveDepthValuesNV\0"
    "glFramebufferSampleLocationsfvNV\0"
    "glNamedFramebufferSampleLocationsfvNV\0"
    "glSpecializeShader\0"
    "glSampleMaskEXT\0"
    "glSamplePatternEXT\0"
    "glActiveShaderProgramEXT\0"
    "glBindProgramPipelineEXT\0"
    "glCreateShaderProgramvEXT\0"
    "glDeleteProgramPipelinesEXT\0"
    "glGenProgramPipelinesEXT\0"
    "glGetProgramPipelineInfoLogEXT\0"
    "glGetProgramPipelineivEXT\0"
    "glIsProgramPipelineEXT\0"
    "glProgramUniform1fEXT\0"
    "glProgramUniform1fvEXT\0"
    "glProgramUniform1iEXT\0"
    "glProgramUniform1ivEXT\0"
    "glProgramUniform1uiEXT\0"
    "glProgramUniform1uivEXT\0"
    "glProgramUniform2fEXT\0"
    "glProgramUniform2fvEXT\0"
    "glProgramUniform2iEXT\0"
    "glProgramUniform2ivEXT\0"
    "glProgramUniform2uiEXT\0"
    "glProgramUniform2uivEXT\0"
    "glProgramUniform3fEXT\0"
    "glProgramUniform3fvEXT\0"
    "glProgramUniform3iEXT\0"
    "glProgramUniform3ivEXT\0"
    "glProgramUniform3uiEXT\0"
    "glProgramUniform3uivEXT\0"
    "glProgramUniform4fEXT\0"
    "glProgramUniform4fvEXT\0"
    "glProgramUniform4iEXT\0"
    "glProgramUniform4ivEXT\0"
    "glProgramUniform4uiEXT\0"
    "glProgramUniform4uivEXT\0"
    "glProgramUniformMatrix2fvEXT\0"
    "glProgramUniformMatrix2x3fvEXT\0"
    "glProgramUniformMatrix2x4fvEXT\0"
    "glProgramUniformMatrix3fvEXT\0"
    "glProgramUniformMatrix3x2fvEXT\0"
    "glProgramUniformMatrix3x4fvEXT\0"
    "glProgramUniformMatrix4fvEXT\0"
    "glProgramUniformMatrix4x2fvEXT\0"
    "glProgramUniformMatrix4x3fvEXT\0"
    "glUseProgramStagesEXT\0"
    "glValidateProgramPipelineEXT\0"
    "glDebugMessageCallbackARB\0"
    "glDebugMessageCallbackKHR\0"
    "glDebugMessageControlARB\0"
    "glDebugMessageControlKHR\0"
    "glDebugMessageInsertARB\0"
    "glDebugMessageInsertKHR\0"
    "glGetDebugMessageLogARB\0"
    "glGetDebugMessageLogKHR\0"
    "glGetObjectLabelKHR\0"
    "glGetObjectPtrLabelKHR\0"
    "glObjectLabelKHR\0"
    "glObjectPtrLabelKHR\0"
    "glPopDebugGroupKHR\0"
    "glPushDebugGroupKHR\0"
    "glSecondaryColor3f\0"
    "glSecondaryColor3fv\0"
    "glMultiDrawElements\0"
    "glFogCoordf\0"
    "glFogCoordfv\0"
    "glVertexAttribI1i\0"
    "glVertexAttribI1ui\0"
    "glVertexAttribI2i\0"
    "glVertexAttribI2iv\0"
    "glVertexAttribI2ui\0"
    "glVertexAttribI2uiv\0"
    "glVertexAttribI3i\0"
    "glVertexAttribI3iv\0"
    "glVertexAttribI3ui\0"
    "glVertexAttribI3uiv\0"
    "glVertexAttribI4i\0"
    "glVertexAttribI4iv\0"
    "glVertexAttribI4ui\0"
    "glVertexAttribI4uiv\0"
    "glTextureBarrier\0"
    "glPolygonOffsetClamp\0"
    "glAlphaFuncxOES\0"
    "glClearColorxOES\0"
    "glClearDepthxOES\0"
    "glColor4xOES\0"
    "glDepthRangexOES\0"
    "glFogxOES\0"
    "glFogxvOES\0"
    "glFrustumfOES\0"
    "glFrustumxOES\0"
    "glLightModelxOES\0"
    "glLightModelxvOES\0"
    "glLightxOES\0"
    "glLightxvOES\0"
    "glLineWidthxOES\0"
    "glLoadMatrixxOES\0"
    "glMaterialxOES\0"
    "glMaterialxvOES\0"
    "glMultMatrixxOES\0"
    "glMultiTexCoord4xOES\0"
    "glNormal3xOES\0"
    "glOrthofOES\0"
    "glOrthoxOES\0"
    "glPointSizexOES\0"
    "glPolygonOffsetxOES\0"
    "glRotatexOES\0"
    "glSampleCoveragexOES\0"
    "glScalexOES\0"
    "glTexEnvxOES\0"
    "glTexEnvxvOES\0"
    "glTexParameterxOES\0"
    "glTranslatexOES\0"
    "glClipPlanefOES\0"
    "glClipPlanexOES\0"
    "glGetClipPlanefOES\0"
    "glGetClipPlanexOES\0"
    "glGetFixedvOES\0"
    "glGetLightxvOES\0"
    "glGetMaterialxvOES\0"
    "glGetTexEnvxvOES\0"
    "glGetTexParameterxvOES\0"
    "glPointParameterxOES\0"
    "glPointParameterxvOES\0"
    "glTexParameterxvOES\0"
    "glBlendBarrierKHR\0"
    "glPrimitiveBoundingBoxARB\0"
    "glPrimitiveBoundingBoxEXT\0"
    "glPrimitiveBoundingBoxOES\0"
    ;


#ifdef USE_MGL_NAMESPACE
#define gl_dispatch_stub_343 mgl_dispatch_stub_343
#define gl_dispatch_stub_344 mgl_dispatch_stub_344
#define gl_dispatch_stub_345 mgl_dispatch_stub_345
#define gl_dispatch_stub_356 mgl_dispatch_stub_356
#define gl_dispatch_stub_357 mgl_dispatch_stub_357
#define gl_dispatch_stub_358 mgl_dispatch_stub_358
#define gl_dispatch_stub_359 mgl_dispatch_stub_359
#define gl_dispatch_stub_361 mgl_dispatch_stub_361
#define gl_dispatch_stub_362 mgl_dispatch_stub_362
#define gl_dispatch_stub_363 mgl_dispatch_stub_363
#define gl_dispatch_stub_364 mgl_dispatch_stub_364
#define gl_dispatch_stub_365 mgl_dispatch_stub_365
#define gl_dispatch_stub_366 mgl_dispatch_stub_366
#define gl_dispatch_stub_408 mgl_dispatch_stub_408
#define gl_dispatch_stub_732 mgl_dispatch_stub_732
#define gl_dispatch_stub_733 mgl_dispatch_stub_733
#define gl_dispatch_stub_734 mgl_dispatch_stub_734
#define gl_dispatch_stub_775 mgl_dispatch_stub_775
#define gl_dispatch_stub_776 mgl_dispatch_stub_776
#define gl_dispatch_stub_777 mgl_dispatch_stub_777
#define gl_dispatch_stub_778 mgl_dispatch_stub_778
#define gl_dispatch_stub_779 mgl_dispatch_stub_779
#define gl_dispatch_stub_780 mgl_dispatch_stub_780
#define gl_dispatch_stub_781 mgl_dispatch_stub_781
#define gl_dispatch_stub_782 mgl_dispatch_stub_782
#define gl_dispatch_stub_783 mgl_dispatch_stub_783
#define gl_dispatch_stub_784 mgl_dispatch_stub_784
#define gl_dispatch_stub_785 mgl_dispatch_stub_785
#define gl_dispatch_stub_786 mgl_dispatch_stub_786
#define gl_dispatch_stub_787 mgl_dispatch_stub_787
#define gl_dispatch_stub_788 mgl_dispatch_stub_788
#define gl_dispatch_stub_789 mgl_dispatch_stub_789
#define gl_dispatch_stub_790 mgl_dispatch_stub_790
#define gl_dispatch_stub_791 mgl_dispatch_stub_791
#define gl_dispatch_stub_792 mgl_dispatch_stub_792
#define gl_dispatch_stub_793 mgl_dispatch_stub_793
#define gl_dispatch_stub_794 mgl_dispatch_stub_794
#define gl_dispatch_stub_795 mgl_dispatch_stub_795
#define gl_dispatch_stub_796 mgl_dispatch_stub_796
#define gl_dispatch_stub_797 mgl_dispatch_stub_797
#define gl_dispatch_stub_798 mgl_dispatch_stub_798
#define gl_dispatch_stub_799 mgl_dispatch_stub_799
#define gl_dispatch_stub_800 mgl_dispatch_stub_800
#define gl_dispatch_stub_801 mgl_dispatch_stub_801
#define gl_dispatch_stub_822 mgl_dispatch_stub_822
#define gl_dispatch_stub_823 mgl_dispatch_stub_823
#define gl_dispatch_stub_824 mgl_dispatch_stub_824
#define gl_dispatch_stub_825 mgl_dispatch_stub_825
#define gl_dispatch_stub_826 mgl_dispatch_stub_826
#define gl_dispatch_stub_827 mgl_dispatch_stub_827
#define gl_dispatch_stub_828 mgl_dispatch_stub_828
#define gl_dispatch_stub_829 mgl_dispatch_stub_829
#define gl_dispatch_stub_830 mgl_dispatch_stub_830
#define gl_dispatch_stub_831 mgl_dispatch_stub_831
#define gl_dispatch_stub_866 mgl_dispatch_stub_866
#define gl_dispatch_stub_890 mgl_dispatch_stub_890
#define gl_dispatch_stub_896 mgl_dispatch_stub_896
#define gl_dispatch_stub_899 mgl_dispatch_stub_899
#define gl_dispatch_stub_912 mgl_dispatch_stub_912
#define gl_dispatch_stub_913 mgl_dispatch_stub_913
#define gl_dispatch_stub_914 mgl_dispatch_stub_914
#define gl_dispatch_stub_915 mgl_dispatch_stub_915
#define gl_dispatch_stub_916 mgl_dispatch_stub_916
#define gl_dispatch_stub_917 mgl_dispatch_stub_917
#define gl_dispatch_stub_918 mgl_dispatch_stub_918
#define gl_dispatch_stub_919 mgl_dispatch_stub_919
#define gl_dispatch_stub_920 mgl_dispatch_stub_920
#define gl_dispatch_stub_921 mgl_dispatch_stub_921
#define gl_dispatch_stub_922 mgl_dispatch_stub_922
#define gl_dispatch_stub_923 mgl_dispatch_stub_923
#define gl_dispatch_stub_924 mgl_dispatch_stub_924
#define gl_dispatch_stub_925 mgl_dispatch_stub_925
#define gl_dispatch_stub_926 mgl_dispatch_stub_926
#define gl_dispatch_stub_927 mgl_dispatch_stub_927
#define gl_dispatch_stub_928 mgl_dispatch_stub_928
#define gl_dispatch_stub_929 mgl_dispatch_stub_929
#define gl_dispatch_stub_930 mgl_dispatch_stub_930
#define gl_dispatch_stub_931 mgl_dispatch_stub_931
#define gl_dispatch_stub_932 mgl_dispatch_stub_932
#define gl_dispatch_stub_933 mgl_dispatch_stub_933
#define gl_dispatch_stub_934 mgl_dispatch_stub_934
#define gl_dispatch_stub_935 mgl_dispatch_stub_935
#define gl_dispatch_stub_936 mgl_dispatch_stub_936
#define gl_dispatch_stub_937 mgl_dispatch_stub_937
#define gl_dispatch_stub_938 mgl_dispatch_stub_938
#define gl_dispatch_stub_939 mgl_dispatch_stub_939
#define gl_dispatch_stub_940 mgl_dispatch_stub_940
#define gl_dispatch_stub_941 mgl_dispatch_stub_941
#define gl_dispatch_stub_942 mgl_dispatch_stub_942
#define gl_dispatch_stub_943 mgl_dispatch_stub_943
#define gl_dispatch_stub_944 mgl_dispatch_stub_944
#define gl_dispatch_stub_945 mgl_dispatch_stub_945
#define gl_dispatch_stub_946 mgl_dispatch_stub_946
#define gl_dispatch_stub_947 mgl_dispatch_stub_947
#define gl_dispatch_stub_948 mgl_dispatch_stub_948
#define gl_dispatch_stub_949 mgl_dispatch_stub_949
#define gl_dispatch_stub_950 mgl_dispatch_stub_950
#define gl_dispatch_stub_951 mgl_dispatch_stub_951
#define gl_dispatch_stub_952 mgl_dispatch_stub_952
#define gl_dispatch_stub_953 mgl_dispatch_stub_953
#define gl_dispatch_stub_954 mgl_dispatch_stub_954
#define gl_dispatch_stub_955 mgl_dispatch_stub_955
#define gl_dispatch_stub_956 mgl_dispatch_stub_956
#define gl_dispatch_stub_957 mgl_dispatch_stub_957
#define gl_dispatch_stub_958 mgl_dispatch_stub_958
#define gl_dispatch_stub_959 mgl_dispatch_stub_959
#define gl_dispatch_stub_960 mgl_dispatch_stub_960
#define gl_dispatch_stub_961 mgl_dispatch_stub_961
#define gl_dispatch_stub_962 mgl_dispatch_stub_962
#define gl_dispatch_stub_963 mgl_dispatch_stub_963
#define gl_dispatch_stub_964 mgl_dispatch_stub_964
#define gl_dispatch_stub_965 mgl_dispatch_stub_965
#define gl_dispatch_stub_966 mgl_dispatch_stub_966
#define gl_dispatch_stub_967 mgl_dispatch_stub_967
#define gl_dispatch_stub_968 mgl_dispatch_stub_968
#define gl_dispatch_stub_969 mgl_dispatch_stub_969
#define gl_dispatch_stub_970 mgl_dispatch_stub_970
#define gl_dispatch_stub_971 mgl_dispatch_stub_971
#define gl_dispatch_stub_972 mgl_dispatch_stub_972
#define gl_dispatch_stub_973 mgl_dispatch_stub_973
#define gl_dispatch_stub_974 mgl_dispatch_stub_974
#define gl_dispatch_stub_975 mgl_dispatch_stub_975
#define gl_dispatch_stub_976 mgl_dispatch_stub_976
#define gl_dispatch_stub_977 mgl_dispatch_stub_977
#define gl_dispatch_stub_978 mgl_dispatch_stub_978
#define gl_dispatch_stub_979 mgl_dispatch_stub_979
#define gl_dispatch_stub_980 mgl_dispatch_stub_980
#define gl_dispatch_stub_981 mgl_dispatch_stub_981
#define gl_dispatch_stub_982 mgl_dispatch_stub_982
#define gl_dispatch_stub_983 mgl_dispatch_stub_983
#define gl_dispatch_stub_984 mgl_dispatch_stub_984
#define gl_dispatch_stub_985 mgl_dispatch_stub_985
#define gl_dispatch_stub_986 mgl_dispatch_stub_986
#define gl_dispatch_stub_987 mgl_dispatch_stub_987
#define gl_dispatch_stub_988 mgl_dispatch_stub_988
#define gl_dispatch_stub_989 mgl_dispatch_stub_989
#define gl_dispatch_stub_990 mgl_dispatch_stub_990
#define gl_dispatch_stub_991 mgl_dispatch_stub_991
#define gl_dispatch_stub_992 mgl_dispatch_stub_992
#define gl_dispatch_stub_993 mgl_dispatch_stub_993
#define gl_dispatch_stub_994 mgl_dispatch_stub_994
#define gl_dispatch_stub_995 mgl_dispatch_stub_995
#define gl_dispatch_stub_996 mgl_dispatch_stub_996
#define gl_dispatch_stub_997 mgl_dispatch_stub_997
#define gl_dispatch_stub_998 mgl_dispatch_stub_998
#define gl_dispatch_stub_999 mgl_dispatch_stub_999
#define gl_dispatch_stub_1000 mgl_dispatch_stub_1000
#define gl_dispatch_stub_1001 mgl_dispatch_stub_1001
#define gl_dispatch_stub_1002 mgl_dispatch_stub_1002
#define gl_dispatch_stub_1003 mgl_dispatch_stub_1003
#define gl_dispatch_stub_1004 mgl_dispatch_stub_1004
#define gl_dispatch_stub_1005 mgl_dispatch_stub_1005
#define gl_dispatch_stub_1006 mgl_dispatch_stub_1006
#define gl_dispatch_stub_1007 mgl_dispatch_stub_1007
#define gl_dispatch_stub_1008 mgl_dispatch_stub_1008
#define gl_dispatch_stub_1009 mgl_dispatch_stub_1009
#define gl_dispatch_stub_1010 mgl_dispatch_stub_1010
#define gl_dispatch_stub_1011 mgl_dispatch_stub_1011
#define gl_dispatch_stub_1012 mgl_dispatch_stub_1012
#define gl_dispatch_stub_1013 mgl_dispatch_stub_1013
#define gl_dispatch_stub_1014 mgl_dispatch_stub_1014
#define gl_dispatch_stub_1015 mgl_dispatch_stub_1015
#define gl_dispatch_stub_1016 mgl_dispatch_stub_1016
#define gl_dispatch_stub_1017 mgl_dispatch_stub_1017
#define gl_dispatch_stub_1018 mgl_dispatch_stub_1018
#define gl_dispatch_stub_1019 mgl_dispatch_stub_1019
#define gl_dispatch_stub_1020 mgl_dispatch_stub_1020
#define gl_dispatch_stub_1021 mgl_dispatch_stub_1021
#define gl_dispatch_stub_1022 mgl_dispatch_stub_1022
#define gl_dispatch_stub_1023 mgl_dispatch_stub_1023
#define gl_dispatch_stub_1024 mgl_dispatch_stub_1024
#define gl_dispatch_stub_1025 mgl_dispatch_stub_1025
#define gl_dispatch_stub_1026 mgl_dispatch_stub_1026
#define gl_dispatch_stub_1027 mgl_dispatch_stub_1027
#define gl_dispatch_stub_1028 mgl_dispatch_stub_1028
#define gl_dispatch_stub_1029 mgl_dispatch_stub_1029
#define gl_dispatch_stub_1030 mgl_dispatch_stub_1030
#define gl_dispatch_stub_1031 mgl_dispatch_stub_1031
#define gl_dispatch_stub_1032 mgl_dispatch_stub_1032
#define gl_dispatch_stub_1033 mgl_dispatch_stub_1033
#define gl_dispatch_stub_1034 mgl_dispatch_stub_1034
#define gl_dispatch_stub_1035 mgl_dispatch_stub_1035
#define gl_dispatch_stub_1036 mgl_dispatch_stub_1036
#define gl_dispatch_stub_1037 mgl_dispatch_stub_1037
#define gl_dispatch_stub_1038 mgl_dispatch_stub_1038
#define gl_dispatch_stub_1039 mgl_dispatch_stub_1039
#define gl_dispatch_stub_1040 mgl_dispatch_stub_1040
#define gl_dispatch_stub_1041 mgl_dispatch_stub_1041
#define gl_dispatch_stub_1042 mgl_dispatch_stub_1042
#define gl_dispatch_stub_1043 mgl_dispatch_stub_1043
#define gl_dispatch_stub_1044 mgl_dispatch_stub_1044
#define gl_dispatch_stub_1045 mgl_dispatch_stub_1045
#define gl_dispatch_stub_1046 mgl_dispatch_stub_1046
#define gl_dispatch_stub_1047 mgl_dispatch_stub_1047
#define gl_dispatch_stub_1048 mgl_dispatch_stub_1048
#define gl_dispatch_stub_1049 mgl_dispatch_stub_1049
#define gl_dispatch_stub_1050 mgl_dispatch_stub_1050
#define gl_dispatch_stub_1051 mgl_dispatch_stub_1051
#define gl_dispatch_stub_1052 mgl_dispatch_stub_1052
#define gl_dispatch_stub_1053 mgl_dispatch_stub_1053
#define gl_dispatch_stub_1054 mgl_dispatch_stub_1054
#define gl_dispatch_stub_1055 mgl_dispatch_stub_1055
#define gl_dispatch_stub_1056 mgl_dispatch_stub_1056
#define gl_dispatch_stub_1057 mgl_dispatch_stub_1057
#define gl_dispatch_stub_1058 mgl_dispatch_stub_1058
#define gl_dispatch_stub_1059 mgl_dispatch_stub_1059
#define gl_dispatch_stub_1060 mgl_dispatch_stub_1060
#define gl_dispatch_stub_1061 mgl_dispatch_stub_1061
#define gl_dispatch_stub_1062 mgl_dispatch_stub_1062
#define gl_dispatch_stub_1063 mgl_dispatch_stub_1063
#define gl_dispatch_stub_1064 mgl_dispatch_stub_1064
#define gl_dispatch_stub_1065 mgl_dispatch_stub_1065
#define gl_dispatch_stub_1066 mgl_dispatch_stub_1066
#define gl_dispatch_stub_1067 mgl_dispatch_stub_1067
#define gl_dispatch_stub_1068 mgl_dispatch_stub_1068
#define gl_dispatch_stub_1069 mgl_dispatch_stub_1069
#define gl_dispatch_stub_1070 mgl_dispatch_stub_1070
#define gl_dispatch_stub_1071 mgl_dispatch_stub_1071
#define gl_dispatch_stub_1072 mgl_dispatch_stub_1072
#define gl_dispatch_stub_1079 mgl_dispatch_stub_1079
#define gl_dispatch_stub_1080 mgl_dispatch_stub_1080
#define gl_dispatch_stub_1081 mgl_dispatch_stub_1081
#define gl_dispatch_stub_1082 mgl_dispatch_stub_1082
#define gl_dispatch_stub_1083 mgl_dispatch_stub_1083
#define gl_dispatch_stub_1084 mgl_dispatch_stub_1084
#define gl_dispatch_stub_1085 mgl_dispatch_stub_1085
#define gl_dispatch_stub_1086 mgl_dispatch_stub_1086
#define gl_dispatch_stub_1088 mgl_dispatch_stub_1088
#define gl_dispatch_stub_1089 mgl_dispatch_stub_1089
#define gl_dispatch_stub_1090 mgl_dispatch_stub_1090
#define gl_dispatch_stub_1097 mgl_dispatch_stub_1097
#define gl_dispatch_stub_1107 mgl_dispatch_stub_1107
#define gl_dispatch_stub_1108 mgl_dispatch_stub_1108
#define gl_dispatch_stub_1115 mgl_dispatch_stub_1115
#define gl_dispatch_stub_1116 mgl_dispatch_stub_1116
#define gl_dispatch_stub_1123 mgl_dispatch_stub_1123
#define gl_dispatch_stub_1124 mgl_dispatch_stub_1124
#define gl_dispatch_stub_1131 mgl_dispatch_stub_1131
#define gl_dispatch_stub_1132 mgl_dispatch_stub_1132
#define gl_dispatch_stub_1139 mgl_dispatch_stub_1139
#define gl_dispatch_stub_1141 mgl_dispatch_stub_1141
#define gl_dispatch_stub_1143 mgl_dispatch_stub_1143
#define gl_dispatch_stub_1145 mgl_dispatch_stub_1145
#define gl_dispatch_stub_1147 mgl_dispatch_stub_1147
#define gl_dispatch_stub_1149 mgl_dispatch_stub_1149
#define gl_dispatch_stub_1151 mgl_dispatch_stub_1151
#define gl_dispatch_stub_1153 mgl_dispatch_stub_1153
#define gl_dispatch_stub_1155 mgl_dispatch_stub_1155
#define gl_dispatch_stub_1160 mgl_dispatch_stub_1160
#define gl_dispatch_stub_1176 mgl_dispatch_stub_1176
#define gl_dispatch_stub_1177 mgl_dispatch_stub_1177
#define gl_dispatch_stub_1178 mgl_dispatch_stub_1178
#define gl_dispatch_stub_1179 mgl_dispatch_stub_1179
#define gl_dispatch_stub_1180 mgl_dispatch_stub_1180
#define gl_dispatch_stub_1181 mgl_dispatch_stub_1181
#define gl_dispatch_stub_1182 mgl_dispatch_stub_1182
#define gl_dispatch_stub_1183 mgl_dispatch_stub_1183
#define gl_dispatch_stub_1184 mgl_dispatch_stub_1184
#define gl_dispatch_stub_1185 mgl_dispatch_stub_1185
#define gl_dispatch_stub_1186 mgl_dispatch_stub_1186
#define gl_dispatch_stub_1187 mgl_dispatch_stub_1187
#define gl_dispatch_stub_1188 mgl_dispatch_stub_1188
#define gl_dispatch_stub_1189 mgl_dispatch_stub_1189
#define gl_dispatch_stub_1190 mgl_dispatch_stub_1190
#define gl_dispatch_stub_1191 mgl_dispatch_stub_1191
#define gl_dispatch_stub_1192 mgl_dispatch_stub_1192
#define gl_dispatch_stub_1193 mgl_dispatch_stub_1193
#define gl_dispatch_stub_1194 mgl_dispatch_stub_1194
#define gl_dispatch_stub_1195 mgl_dispatch_stub_1195
#define gl_dispatch_stub_1196 mgl_dispatch_stub_1196
#define gl_dispatch_stub_1197 mgl_dispatch_stub_1197
#define gl_dispatch_stub_1198 mgl_dispatch_stub_1198
#define gl_dispatch_stub_1199 mgl_dispatch_stub_1199
#define gl_dispatch_stub_1200 mgl_dispatch_stub_1200
#define gl_dispatch_stub_1201 mgl_dispatch_stub_1201
#define gl_dispatch_stub_1202 mgl_dispatch_stub_1202
#define gl_dispatch_stub_1203 mgl_dispatch_stub_1203
#define gl_dispatch_stub_1204 mgl_dispatch_stub_1204
#define gl_dispatch_stub_1205 mgl_dispatch_stub_1205
#define gl_dispatch_stub_1206 mgl_dispatch_stub_1206
#define gl_dispatch_stub_1207 mgl_dispatch_stub_1207
#define gl_dispatch_stub_1208 mgl_dispatch_stub_1208
#define gl_dispatch_stub_1209 mgl_dispatch_stub_1209
#define gl_dispatch_stub_1210 mgl_dispatch_stub_1210
#define gl_dispatch_stub_1211 mgl_dispatch_stub_1211
#define gl_dispatch_stub_1212 mgl_dispatch_stub_1212
#define gl_dispatch_stub_1213 mgl_dispatch_stub_1213
#define gl_dispatch_stub_1214 mgl_dispatch_stub_1214
#define gl_dispatch_stub_1215 mgl_dispatch_stub_1215
#define gl_dispatch_stub_1216 mgl_dispatch_stub_1216
#define gl_dispatch_stub_1217 mgl_dispatch_stub_1217
#define gl_dispatch_stub_1218 mgl_dispatch_stub_1218
#define gl_dispatch_stub_1219 mgl_dispatch_stub_1219
#define gl_dispatch_stub_1220 mgl_dispatch_stub_1220
#define gl_dispatch_stub_1221 mgl_dispatch_stub_1221
#define gl_dispatch_stub_1222 mgl_dispatch_stub_1222
#define gl_dispatch_stub_1223 mgl_dispatch_stub_1223
#define gl_dispatch_stub_1224 mgl_dispatch_stub_1224
#define gl_dispatch_stub_1225 mgl_dispatch_stub_1225
#define gl_dispatch_stub_1226 mgl_dispatch_stub_1226
#define gl_dispatch_stub_1227 mgl_dispatch_stub_1227
#define gl_dispatch_stub_1228 mgl_dispatch_stub_1228
#define gl_dispatch_stub_1229 mgl_dispatch_stub_1229
#define gl_dispatch_stub_1230 mgl_dispatch_stub_1230
#define gl_dispatch_stub_1231 mgl_dispatch_stub_1231
#define gl_dispatch_stub_1232 mgl_dispatch_stub_1232
#define gl_dispatch_stub_1233 mgl_dispatch_stub_1233
#define gl_dispatch_stub_1234 mgl_dispatch_stub_1234
#define gl_dispatch_stub_1235 mgl_dispatch_stub_1235
#define gl_dispatch_stub_1236 mgl_dispatch_stub_1236
#define gl_dispatch_stub_1237 mgl_dispatch_stub_1237
#define gl_dispatch_stub_1238 mgl_dispatch_stub_1238
#define gl_dispatch_stub_1239 mgl_dispatch_stub_1239
#define gl_dispatch_stub_1240 mgl_dispatch_stub_1240
#define gl_dispatch_stub_1241 mgl_dispatch_stub_1241
#define gl_dispatch_stub_1242 mgl_dispatch_stub_1242
#define gl_dispatch_stub_1243 mgl_dispatch_stub_1243
#define gl_dispatch_stub_1244 mgl_dispatch_stub_1244
#define gl_dispatch_stub_1245 mgl_dispatch_stub_1245
#define gl_dispatch_stub_1246 mgl_dispatch_stub_1246
#define gl_dispatch_stub_1247 mgl_dispatch_stub_1247
#define gl_dispatch_stub_1248 mgl_dispatch_stub_1248
#define gl_dispatch_stub_1249 mgl_dispatch_stub_1249
#define gl_dispatch_stub_1250 mgl_dispatch_stub_1250
#define gl_dispatch_stub_1251 mgl_dispatch_stub_1251
#define gl_dispatch_stub_1252 mgl_dispatch_stub_1252
#define gl_dispatch_stub_1253 mgl_dispatch_stub_1253
#define gl_dispatch_stub_1254 mgl_dispatch_stub_1254
#define gl_dispatch_stub_1255 mgl_dispatch_stub_1255
#define gl_dispatch_stub_1256 mgl_dispatch_stub_1256
#define gl_dispatch_stub_1257 mgl_dispatch_stub_1257
#define gl_dispatch_stub_1258 mgl_dispatch_stub_1258
#define gl_dispatch_stub_1259 mgl_dispatch_stub_1259
#define gl_dispatch_stub_1260 mgl_dispatch_stub_1260
#define gl_dispatch_stub_1261 mgl_dispatch_stub_1261
#define gl_dispatch_stub_1262 mgl_dispatch_stub_1262
#define gl_dispatch_stub_1263 mgl_dispatch_stub_1263
#define gl_dispatch_stub_1264 mgl_dispatch_stub_1264
#define gl_dispatch_stub_1265 mgl_dispatch_stub_1265
#define gl_dispatch_stub_1266 mgl_dispatch_stub_1266
#define gl_dispatch_stub_1267 mgl_dispatch_stub_1267
#define gl_dispatch_stub_1268 mgl_dispatch_stub_1268
#define gl_dispatch_stub_1270 mgl_dispatch_stub_1270
#define gl_dispatch_stub_1271 mgl_dispatch_stub_1271
#define gl_dispatch_stub_1272 mgl_dispatch_stub_1272
#define gl_dispatch_stub_1273 mgl_dispatch_stub_1273
#define gl_dispatch_stub_1276 mgl_dispatch_stub_1276
#define gl_dispatch_stub_1277 mgl_dispatch_stub_1277
#define gl_dispatch_stub_1278 mgl_dispatch_stub_1278
#define gl_dispatch_stub_1295 mgl_dispatch_stub_1295
#define gl_dispatch_stub_1296 mgl_dispatch_stub_1296
#define gl_dispatch_stub_1297 mgl_dispatch_stub_1297
#define gl_dispatch_stub_1298 mgl_dispatch_stub_1298
#define gl_dispatch_stub_1299 mgl_dispatch_stub_1299
#define gl_dispatch_stub_1300 mgl_dispatch_stub_1300
#define gl_dispatch_stub_1301 mgl_dispatch_stub_1301
#define gl_dispatch_stub_1302 mgl_dispatch_stub_1302
#define gl_dispatch_stub_1303 mgl_dispatch_stub_1303
#define gl_dispatch_stub_1304 mgl_dispatch_stub_1304
#define gl_dispatch_stub_1305 mgl_dispatch_stub_1305
#define gl_dispatch_stub_1306 mgl_dispatch_stub_1306
#define gl_dispatch_stub_1307 mgl_dispatch_stub_1307
#define gl_dispatch_stub_1308 mgl_dispatch_stub_1308
#define gl_dispatch_stub_1309 mgl_dispatch_stub_1309
#define gl_dispatch_stub_1310 mgl_dispatch_stub_1310
#define gl_dispatch_stub_1311 mgl_dispatch_stub_1311
#define gl_dispatch_stub_1312 mgl_dispatch_stub_1312
#define gl_dispatch_stub_1314 mgl_dispatch_stub_1314
#define gl_dispatch_stub_1315 mgl_dispatch_stub_1315
#define gl_dispatch_stub_1316 mgl_dispatch_stub_1316
#define gl_dispatch_stub_1317 mgl_dispatch_stub_1317
#define gl_dispatch_stub_1318 mgl_dispatch_stub_1318
#define gl_dispatch_stub_1319 mgl_dispatch_stub_1319
#define gl_dispatch_stub_1320 mgl_dispatch_stub_1320
#define gl_dispatch_stub_1321 mgl_dispatch_stub_1321
#define gl_dispatch_stub_1322 mgl_dispatch_stub_1322
#define gl_dispatch_stub_1323 mgl_dispatch_stub_1323
#define gl_dispatch_stub_1324 mgl_dispatch_stub_1324
#define gl_dispatch_stub_1325 mgl_dispatch_stub_1325
#define gl_dispatch_stub_1326 mgl_dispatch_stub_1326
#define gl_dispatch_stub_1327 mgl_dispatch_stub_1327
#define gl_dispatch_stub_1328 mgl_dispatch_stub_1328
#define gl_dispatch_stub_1329 mgl_dispatch_stub_1329
#define gl_dispatch_stub_1330 mgl_dispatch_stub_1330
#define gl_dispatch_stub_1331 mgl_dispatch_stub_1331
#define gl_dispatch_stub_1332 mgl_dispatch_stub_1332
#define gl_dispatch_stub_1333 mgl_dispatch_stub_1333
#define gl_dispatch_stub_1334 mgl_dispatch_stub_1334
#define gl_dispatch_stub_1335 mgl_dispatch_stub_1335
#define gl_dispatch_stub_1336 mgl_dispatch_stub_1336
#define gl_dispatch_stub_1337 mgl_dispatch_stub_1337
#define gl_dispatch_stub_1338 mgl_dispatch_stub_1338
#define gl_dispatch_stub_1339 mgl_dispatch_stub_1339
#define gl_dispatch_stub_1340 mgl_dispatch_stub_1340
#define gl_dispatch_stub_1341 mgl_dispatch_stub_1341
#define gl_dispatch_stub_1342 mgl_dispatch_stub_1342
#define gl_dispatch_stub_1343 mgl_dispatch_stub_1343
#define gl_dispatch_stub_1344 mgl_dispatch_stub_1344
#define gl_dispatch_stub_1345 mgl_dispatch_stub_1345
#define gl_dispatch_stub_1346 mgl_dispatch_stub_1346
#define gl_dispatch_stub_1347 mgl_dispatch_stub_1347
#define gl_dispatch_stub_1348 mgl_dispatch_stub_1348
#define gl_dispatch_stub_1349 mgl_dispatch_stub_1349
#define gl_dispatch_stub_1350 mgl_dispatch_stub_1350
#define gl_dispatch_stub_1351 mgl_dispatch_stub_1351
#define gl_dispatch_stub_1352 mgl_dispatch_stub_1352
#define gl_dispatch_stub_1353 mgl_dispatch_stub_1353
#define gl_dispatch_stub_1354 mgl_dispatch_stub_1354
#define gl_dispatch_stub_1355 mgl_dispatch_stub_1355
#define gl_dispatch_stub_1356 mgl_dispatch_stub_1356
#define gl_dispatch_stub_1357 mgl_dispatch_stub_1357
#define gl_dispatch_stub_1358 mgl_dispatch_stub_1358
#define gl_dispatch_stub_1359 mgl_dispatch_stub_1359
#define gl_dispatch_stub_1360 mgl_dispatch_stub_1360
#define gl_dispatch_stub_1361 mgl_dispatch_stub_1361
#define gl_dispatch_stub_1362 mgl_dispatch_stub_1362
#define gl_dispatch_stub_1363 mgl_dispatch_stub_1363
#define gl_dispatch_stub_1364 mgl_dispatch_stub_1364
#define gl_dispatch_stub_1365 mgl_dispatch_stub_1365
#define gl_dispatch_stub_1366 mgl_dispatch_stub_1366
#define gl_dispatch_stub_1367 mgl_dispatch_stub_1367
#define gl_dispatch_stub_1368 mgl_dispatch_stub_1368
#define gl_dispatch_stub_1369 mgl_dispatch_stub_1369
#define gl_dispatch_stub_1370 mgl_dispatch_stub_1370
#define gl_dispatch_stub_1371 mgl_dispatch_stub_1371
#define gl_dispatch_stub_1372 mgl_dispatch_stub_1372
#define gl_dispatch_stub_1373 mgl_dispatch_stub_1373
#define gl_dispatch_stub_1374 mgl_dispatch_stub_1374
#endif /* USE_MGL_NAMESPACE */


#if defined(NEED_FUNCTION_POINTER) || defined(GLX_INDIRECT_RENDERING)
void GLAPIENTRY gl_dispatch_stub_343(GLenum target, GLenum format, GLenum type, GLvoid * table);
void GLAPIENTRY gl_dispatch_stub_344(GLenum target, GLenum pname, GLfloat * params);
void GLAPIENTRY gl_dispatch_stub_345(GLenum target, GLenum pname, GLint * params);
void GLAPIENTRY gl_dispatch_stub_356(GLenum target, GLenum format, GLenum type, GLvoid * image);
void GLAPIENTRY gl_dispatch_stub_357(GLenum target, GLenum pname, GLfloat * params);
void GLAPIENTRY gl_dispatch_stub_358(GLenum target, GLenum pname, GLint * params);
void GLAPIENTRY gl_dispatch_stub_359(GLenum target, GLenum format, GLenum type, GLvoid * row, GLvoid * column, GLvoid * span);
void GLAPIENTRY gl_dispatch_stub_361(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid * values);
void GLAPIENTRY gl_dispatch_stub_362(GLenum target, GLenum pname, GLfloat * params);
void GLAPIENTRY gl_dispatch_stub_363(GLenum target, GLenum pname, GLint * params);
void GLAPIENTRY gl_dispatch_stub_364(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid * values);
void GLAPIENTRY gl_dispatch_stub_365(GLenum target, GLenum pname, GLfloat * params);
void GLAPIENTRY gl_dispatch_stub_366(GLenum target, GLenum pname, GLint * params);
void GLAPIENTRY gl_dispatch_stub_408(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, GLvoid * img);
void GLAPIENTRY gl_dispatch_stub_732(GLuint id, GLenum pname, GLint64 * params);
void GLAPIENTRY gl_dispatch_stub_733(GLuint id, GLenum pname, GLuint64 * params);
void GLAPIENTRY gl_dispatch_stub_734(GLuint id, GLenum target);
void GLAPIENTRY gl_dispatch_stub_775(GLuint program, GLint location, GLdouble * params);
void GLAPIENTRY gl_dispatch_stub_776(GLint location, GLdouble x);
void GLAPIENTRY gl_dispatch_stub_777(GLint location, GLsizei count, const GLdouble * value);
void GLAPIENTRY gl_dispatch_stub_778(GLint location, GLdouble x, GLdouble y);
void GLAPIENTRY gl_dispatch_stub_779(GLint location, GLsizei count, const GLdouble * value);
void GLAPIENTRY gl_dispatch_stub_780(GLint location, GLdouble x, GLdouble y, GLdouble z);
void GLAPIENTRY gl_dispatch_stub_781(GLint location, GLsizei count, const GLdouble * value);
void GLAPIENTRY gl_dispatch_stub_782(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
void GLAPIENTRY gl_dispatch_stub_783(GLint location, GLsizei count, const GLdouble * value);
void GLAPIENTRY gl_dispatch_stub_784(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
void GLAPIENTRY gl_dispatch_stub_785(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
void GLAPIENTRY gl_dispatch_stub_786(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
void GLAPIENTRY gl_dispatch_stub_787(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
void GLAPIENTRY gl_dispatch_stub_788(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
void GLAPIENTRY gl_dispatch_stub_789(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
void GLAPIENTRY gl_dispatch_stub_790(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
void GLAPIENTRY gl_dispatch_stub_791(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
void GLAPIENTRY gl_dispatch_stub_792(GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
void GLAPIENTRY gl_dispatch_stub_793(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name);
void GLAPIENTRY gl_dispatch_stub_794(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei * length, GLchar * name);
void GLAPIENTRY gl_dispatch_stub_795(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint * values);
void GLAPIENTRY gl_dispatch_stub_796(GLuint program, GLenum shadertype, GLenum pname, GLint * values);
GLuint GLAPIENTRY gl_dispatch_stub_797(GLuint program, GLenum shadertype, const GLchar * name);
GLint GLAPIENTRY gl_dispatch_stub_798(GLuint program, GLenum shadertype, const GLchar * name);
void GLAPIENTRY gl_dispatch_stub_799(GLenum shadertype, GLint location, GLuint * params);
void GLAPIENTRY gl_dispatch_stub_800(GLenum shadertype, GLsizei count, const GLuint * indices);
void GLAPIENTRY gl_dispatch_stub_801(GLenum pname, const GLfloat * values);
void GLAPIENTRY gl_dispatch_stub_822(GLuint index, GLenum pname, GLdouble * params);
void GLAPIENTRY gl_dispatch_stub_823(GLuint index, GLdouble x);
void GLAPIENTRY gl_dispatch_stub_824(GLuint index, const GLdouble * v);
void GLAPIENTRY gl_dispatch_stub_825(GLuint index, GLdouble x, GLdouble y);
void GLAPIENTRY gl_dispatch_stub_826(GLuint index, const GLdouble * v);
void GLAPIENTRY gl_dispatch_stub_827(GLuint index, GLdouble x, GLdouble y, GLdouble z);
void GLAPIENTRY gl_dispatch_stub_828(GLuint index, const GLdouble * v);
void GLAPIENTRY gl_dispatch_stub_829(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
void GLAPIENTRY gl_dispatch_stub_830(GLuint index, const GLdouble * v);
void GLAPIENTRY gl_dispatch_stub_831(GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid * pointer);
void GLAPIENTRY gl_dispatch_stub_866(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint * params);
void GLAPIENTRY gl_dispatch_stub_890(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 * params);
GLint GLAPIENTRY gl_dispatch_stub_896(GLuint program, GLenum programInterface, const GLchar * name);
void GLAPIENTRY gl_dispatch_stub_899(GLuint program, GLuint shaderStorageBlockIndex, GLuint shaderStorageBlockBinding);
GLuint64 GLAPIENTRY gl_dispatch_stub_912(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format);
GLuint64 GLAPIENTRY gl_dispatch_stub_913(GLuint texture);
GLuint64 GLAPIENTRY gl_dispatch_stub_914(GLuint texture, GLuint sampler);
void GLAPIENTRY gl_dispatch_stub_915(GLuint index, GLenum pname, GLuint64EXT * params);
GLboolean GLAPIENTRY gl_dispatch_stub_916(GLuint64 handle);
GLboolean GLAPIENTRY gl_dispatch_stub_917(GLuint64 handle);
void GLAPIENTRY gl_dispatch_stub_918(GLuint64 handle);
void GLAPIENTRY gl_dispatch_stub_919(GLuint64 handle, GLenum access);
void GLAPIENTRY gl_dispatch_stub_920(GLuint64 handle);
void GLAPIENTRY gl_dispatch_stub_921(GLuint64 handle);
void GLAPIENTRY gl_dispatch_stub_922(GLuint program, GLint location, GLuint64 value);
void GLAPIENTRY gl_dispatch_stub_923(GLuint program, GLint location, GLsizei count, const GLuint64 * value);
void GLAPIENTRY gl_dispatch_stub_924(GLint location, GLuint64 value);
void GLAPIENTRY gl_dispatch_stub_925(GLint location, GLsizei count, const GLuint64 * value);
void GLAPIENTRY gl_dispatch_stub_926(GLuint index, GLuint64EXT x);
void GLAPIENTRY gl_dispatch_stub_927(GLuint index, const GLuint64EXT * v);
void GLAPIENTRY gl_dispatch_stub_928(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z);
void GLAPIENTRY gl_dispatch_stub_929(GLenum mode, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
void GLAPIENTRY gl_dispatch_stub_930(GLenum mode, GLenum type, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
void GLAPIENTRY gl_dispatch_stub_931(GLenum origin, GLenum depth);
void GLAPIENTRY gl_dispatch_stub_932(GLuint unit, GLuint texture);
void GLAPIENTRY gl_dispatch_stub_933(GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
GLenum GLAPIENTRY gl_dispatch_stub_934(GLuint framebuffer, GLenum target);
void GLAPIENTRY gl_dispatch_stub_935(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const GLvoid * data);
void GLAPIENTRY gl_dispatch_stub_936(GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const GLvoid * data);
void GLAPIENTRY gl_dispatch_stub_937(GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
void GLAPIENTRY gl_dispatch_stub_938(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat * value);
void GLAPIENTRY gl_dispatch_stub_939(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint * value);
void GLAPIENTRY gl_dispatch_stub_940(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint * value);
void GLAPIENTRY gl_dispatch_stub_941(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid * data);
void GLAPIENTRY gl_dispatch_stub_942(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid * data);
void GLAPIENTRY gl_dispatch_stub_943(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid * data);
void GLAPIENTRY gl_dispatch_stub_944(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
void GLAPIENTRY gl_dispatch_stub_945(GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
void GLAPIENTRY gl_dispatch_stub_946(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
void GLAPIENTRY gl_dispatch_stub_947(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
void GLAPIENTRY gl_dispatch_stub_948(GLsizei n, GLuint * buffers);
void GLAPIENTRY gl_dispatch_stub_949(GLsizei n, GLuint * framebuffers);
void GLAPIENTRY gl_dispatch_stub_950(GLsizei n, GLuint * pipelines);
void GLAPIENTRY gl_dispatch_stub_951(GLenum target, GLsizei n, GLuint * ids);
void GLAPIENTRY gl_dispatch_stub_952(GLsizei n, GLuint * renderbuffers);
void GLAPIENTRY gl_dispatch_stub_953(GLsizei n, GLuint * samplers);
void GLAPIENTRY gl_dispatch_stub_954(GLenum target, GLsizei n, GLuint * textures);
void GLAPIENTRY gl_dispatch_stub_955(GLsizei n, GLuint * ids);
void GLAPIENTRY gl_dispatch_stub_956(GLsizei n, GLuint * arrays);
void GLAPIENTRY gl_dispatch_stub_957(GLuint vaobj, GLuint index);
void GLAPIENTRY gl_dispatch_stub_958(GLuint vaobj, GLuint index);
void GLAPIENTRY gl_dispatch_stub_959(GLuint buffer, GLintptr offset, GLsizeiptr length);
void GLAPIENTRY gl_dispatch_stub_960(GLuint texture);
void GLAPIENTRY gl_dispatch_stub_961(GLuint texture, GLint level, GLsizei bufSize, GLvoid * pixels);
void GLAPIENTRY gl_dispatch_stub_962(GLuint buffer, GLenum pname, GLint64 * params);
void GLAPIENTRY gl_dispatch_stub_963(GLuint buffer, GLenum pname, GLint * params);
void GLAPIENTRY gl_dispatch_stub_964(GLuint buffer, GLenum pname, GLvoid ** params);
void GLAPIENTRY gl_dispatch_stub_965(GLuint buffer, GLintptr offset, GLsizeiptr size, GLvoid * data);
void GLAPIENTRY gl_dispatch_stub_966(GLuint framebuffer, GLenum attachment, GLenum pname, GLint * params);
void GLAPIENTRY gl_dispatch_stub_967(GLuint framebuffer, GLenum pname, GLint * param);
void GLAPIENTRY gl_dispatch_stub_968(GLuint renderbuffer, GLenum pname, GLint * params);
void GLAPIENTRY gl_dispatch_stub_969(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
void GLAPIENTRY gl_dispatch_stub_970(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
void GLAPIENTRY gl_dispatch_stub_971(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
void GLAPIENTRY gl_dispatch_stub_972(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
void GLAPIENTRY gl_dispatch_stub_973(GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, GLvoid * pixels);
void GLAPIENTRY gl_dispatch_stub_974(GLuint texture, GLint level, GLenum pname, GLfloat * params);
void GLAPIENTRY gl_dispatch_stub_975(GLuint texture, GLint level, GLenum pname, GLint * params);
void GLAPIENTRY gl_dispatch_stub_976(GLuint texture, GLenum pname, GLint * params);
void GLAPIENTRY gl_dispatch_stub_977(GLuint texture, GLenum pname, GLuint * params);
void GLAPIENTRY gl_dispatch_stub_978(GLuint texture, GLenum pname, GLfloat * params);
void GLAPIENTRY gl_dispatch_stub_979(GLuint texture, GLenum pname, GLint * params);
void GLAPIENTRY gl_dispatch_stub_980(GLuint xfb, GLenum pname, GLuint index, GLint64 * param);
void GLAPIENTRY gl_dispatch_stub_981(GLuint xfb, GLenum pname, GLuint index, GLint * param);
void GLAPIENTRY gl_dispatch_stub_982(GLuint xfb, GLenum pname, GLint * param);
void GLAPIENTRY gl_dispatch_stub_983(GLuint vaobj, GLuint index, GLenum pname, GLint64 * param);
void GLAPIENTRY gl_dispatch_stub_984(GLuint vaobj, GLuint index, GLenum pname, GLint * param);
void GLAPIENTRY gl_dispatch_stub_985(GLuint vaobj, GLenum pname, GLint * param);
void GLAPIENTRY gl_dispatch_stub_986(GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments);
void GLAPIENTRY gl_dispatch_stub_987(GLuint framebuffer, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height);
GLvoid * GLAPIENTRY gl_dispatch_stub_988(GLuint buffer, GLenum access);
GLvoid * GLAPIENTRY gl_dispatch_stub_989(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
void GLAPIENTRY gl_dispatch_stub_990(GLuint buffer, GLsizeiptr size, const GLvoid * data, GLenum usage);
void GLAPIENTRY gl_dispatch_stub_991(GLuint buffer, GLsizeiptr size, const GLvoid * data, GLbitfield flags);
void GLAPIENTRY gl_dispatch_stub_992(GLuint buffer, GLintptr offset, GLsizeiptr size, const GLvoid * data);
void GLAPIENTRY gl_dispatch_stub_993(GLuint framebuffer, GLenum buf);
void GLAPIENTRY gl_dispatch_stub_994(GLuint framebuffer, GLsizei n, const GLenum * bufs);
void GLAPIENTRY gl_dispatch_stub_995(GLuint framebuffer, GLenum pname, GLint param);
void GLAPIENTRY gl_dispatch_stub_996(GLuint framebuffer, GLenum buf);
void GLAPIENTRY gl_dispatch_stub_997(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
void GLAPIENTRY gl_dispatch_stub_998(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
void GLAPIENTRY gl_dispatch_stub_999(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
void GLAPIENTRY gl_dispatch_stub_1000(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
void GLAPIENTRY gl_dispatch_stub_1001(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
void GLAPIENTRY gl_dispatch_stub_1002(GLuint texture, GLenum internalformat, GLuint buffer);
void GLAPIENTRY gl_dispatch_stub_1003(GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
void GLAPIENTRY gl_dispatch_stub_1004(GLuint texture, GLenum pname, const GLint * params);
void GLAPIENTRY gl_dispatch_stub_1005(GLuint texture, GLenum pname, const GLuint * params);
void GLAPIENTRY gl_dispatch_stub_1006(GLuint texture, GLenum pname, GLfloat param);
void GLAPIENTRY gl_dispatch_stub_1007(GLuint texture, GLenum pname, const GLfloat * param);
void GLAPIENTRY gl_dispatch_stub_1008(GLuint texture, GLenum pname, GLint param);
void GLAPIENTRY gl_dispatch_stub_1009(GLuint texture, GLenum pname, const GLint * param);
void GLAPIENTRY gl_dispatch_stub_1010(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width);
void GLAPIENTRY gl_dispatch_stub_1011(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
void GLAPIENTRY gl_dispatch_stub_1012(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
void GLAPIENTRY gl_dispatch_stub_1013(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
void GLAPIENTRY gl_dispatch_stub_1014(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
void GLAPIENTRY gl_dispatch_stub_1015(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid * pixels);
void GLAPIENTRY gl_dispatch_stub_1016(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels);
void GLAPIENTRY gl_dispatch_stub_1017(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid * pixels);
void GLAPIENTRY gl_dispatch_stub_1018(GLuint xfb, GLuint index, GLuint buffer);
void GLAPIENTRY gl_dispatch_stub_1019(GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
GLboolean GLAPIENTRY gl_dispatch_stub_1020(GLuint buffer);
void GLAPIENTRY gl_dispatch_stub_1021(GLuint vaobj, GLuint attribindex, GLuint bindingindex);
void GLAPIENTRY gl_dispatch_stub_1022(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
void GLAPIENTRY gl_dispatch_stub_1023(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
void GLAPIENTRY gl_dispatch_stub_1024(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
void GLAPIENTRY gl_dispatch_stub_1025(GLuint vaobj, GLuint bindingindex, GLuint divisor);
void GLAPIENTRY gl_dispatch_stub_1026(GLuint vaobj, GLuint buffer);
void GLAPIENTRY gl_dispatch_stub_1027(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
void GLAPIENTRY gl_dispatch_stub_1028(GLuint vaobj, GLuint first, GLsizei count, const GLuint * buffers, const GLintptr * offsets, const GLsizei * strides);
void GLAPIENTRY gl_dispatch_stub_1029(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, GLvoid * pixels);
void GLAPIENTRY gl_dispatch_stub_1030(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, GLvoid * pixels);
void GLAPIENTRY gl_dispatch_stub_1031(GLenum target, GLintptr offset, GLsizeiptr size, GLboolean commit);
void GLAPIENTRY gl_dispatch_stub_1032(GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit);
void GLAPIENTRY gl_dispatch_stub_1033(GLuint program, GLint location, GLint64 * params);
void GLAPIENTRY gl_dispatch_stub_1034(GLuint program, GLint location, GLuint64 * params);
void GLAPIENTRY gl_dispatch_stub_1035(GLuint program, GLint location, GLsizei bufSize, GLint64 * params);
void GLAPIENTRY gl_dispatch_stub_1036(GLuint program, GLint location, GLsizei bufSize, GLuint64 * params);
void GLAPIENTRY gl_dispatch_stub_1037(GLuint program, GLint location, GLint64 x);
void GLAPIENTRY gl_dispatch_stub_1038(GLuint program, GLint location, GLsizei count, const GLint64 * value);
void GLAPIENTRY gl_dispatch_stub_1039(GLuint program, GLint location, GLuint64 x);
void GLAPIENTRY gl_dispatch_stub_1040(GLuint program, GLint location, GLsizei count, const GLuint64 * value);
void GLAPIENTRY gl_dispatch_stub_1041(GLuint program, GLint location, GLint64 x, GLint64 y);
void GLAPIENTRY gl_dispatch_stub_1042(GLuint program, GLint location, GLsizei count, const GLint64 * value);
void GLAPIENTRY gl_dispatch_stub_1043(GLuint program, GLint location, GLuint64 x, GLuint64 y);
void GLAPIENTRY gl_dispatch_stub_1044(GLuint program, GLint location, GLsizei count, const GLuint64 * value);
void GLAPIENTRY gl_dispatch_stub_1045(GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z);
void GLAPIENTRY gl_dispatch_stub_1046(GLuint program, GLint location, GLsizei count, const GLint64 * value);
void GLAPIENTRY gl_dispatch_stub_1047(GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z);
void GLAPIENTRY gl_dispatch_stub_1048(GLuint program, GLint location, GLsizei count, const GLuint64 * value);
void GLAPIENTRY gl_dispatch_stub_1049(GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w);
void GLAPIENTRY gl_dispatch_stub_1050(GLuint program, GLint location, GLsizei count, const GLint64 * value);
void GLAPIENTRY gl_dispatch_stub_1051(GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w);
void GLAPIENTRY gl_dispatch_stub_1052(GLuint program, GLint location, GLsizei count, const GLuint64 * value);
void GLAPIENTRY gl_dispatch_stub_1053(GLint location, GLint64 x);
void GLAPIENTRY gl_dispatch_stub_1054(GLint location, GLsizei count, const GLint64 * value);
void GLAPIENTRY gl_dispatch_stub_1055(GLint location, GLuint64 x);
void GLAPIENTRY gl_dispatch_stub_1056(GLint location, GLsizei count, const GLuint64 * value);
void GLAPIENTRY gl_dispatch_stub_1057(GLint location, GLint64 x, GLint64 y);
void GLAPIENTRY gl_dispatch_stub_1058(GLint location, GLsizei count, const GLint64 * value);
void GLAPIENTRY gl_dispatch_stub_1059(GLint location, GLuint64 x, GLuint64 y);
void GLAPIENTRY gl_dispatch_stub_1060(GLint location, GLsizei count, const GLuint64 * value);
void GLAPIENTRY gl_dispatch_stub_1061(GLint location, GLint64 x, GLint64 y, GLint64 z);
void GLAPIENTRY gl_dispatch_stub_1062(GLint location, GLsizei count, const GLint64 * value);
void GLAPIENTRY gl_dispatch_stub_1063(GLint location, GLuint64 x, GLuint64 y, GLuint64 z);
void GLAPIENTRY gl_dispatch_stub_1064(GLint location, GLsizei count, const GLuint64 * value);
void GLAPIENTRY gl_dispatch_stub_1065(GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w);
void GLAPIENTRY gl_dispatch_stub_1066(GLint location, GLsizei count, const GLint64 * value);
void GLAPIENTRY gl_dispatch_stub_1067(GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w);
void GLAPIENTRY gl_dispatch_stub_1068(GLint location, GLsizei count, const GLuint64 * value);
void GLAPIENTRY gl_dispatch_stub_1069(void);
void GLAPIENTRY gl_dispatch_stub_1070(GLenum target, GLuint start, GLsizei count, const GLfloat * v);
void GLAPIENTRY gl_dispatch_stub_1071(GLuint framebuffer, GLuint start, GLsizei count, const GLfloat * v);
void GLAPIENTRY gl_dispatch_stub_1072(GLuint shader, const GLchar * pEntryPoint, GLuint numSpecializationConstants, const GLuint * pConstantIndex, const GLuint * pConstantValue);
void GLAPIENTRY gl_dispatch_stub_1079(GLfloat x, GLfloat y, GLfloat z, GLfloat width, GLfloat height);
void GLAPIENTRY gl_dispatch_stub_1080(const GLfloat * coords);
void GLAPIENTRY gl_dispatch_stub_1081(GLint x, GLint y, GLint z, GLint width, GLint height);
void GLAPIENTRY gl_dispatch_stub_1082(const GLint * coords);
void GLAPIENTRY gl_dispatch_stub_1083(GLshort x, GLshort y, GLshort z, GLshort width, GLshort height);
void GLAPIENTRY gl_dispatch_stub_1084(const GLshort * coords);
void GLAPIENTRY gl_dispatch_stub_1085(GLfixed x, GLfixed y, GLfixed z, GLfixed width, GLfixed height);
void GLAPIENTRY gl_dispatch_stub_1086(const GLfixed * coords);
GLbitfield GLAPIENTRY gl_dispatch_stub_1088(GLfixed * mantissa, GLint * exponent);
void GLAPIENTRY gl_dispatch_stub_1089(GLclampf value, GLboolean invert);
void GLAPIENTRY gl_dispatch_stub_1090(GLenum pattern);
void GLAPIENTRY gl_dispatch_stub_1097(GLenum target, GLsizei numAttachments, const GLenum * attachments);
void GLAPIENTRY gl_dispatch_stub_1107(GLuint program, GLint location, GLdouble x);
void GLAPIENTRY gl_dispatch_stub_1108(GLuint program, GLint location, GLsizei count, const GLdouble * value);
void GLAPIENTRY gl_dispatch_stub_1115(GLuint program, GLint location, GLdouble x, GLdouble y);
void GLAPIENTRY gl_dispatch_stub_1116(GLuint program, GLint location, GLsizei count, const GLdouble * value);
void GLAPIENTRY gl_dispatch_stub_1123(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z);
void GLAPIENTRY gl_dispatch_stub_1124(GLuint program, GLint location, GLsizei count, const GLdouble * value);
void GLAPIENTRY gl_dispatch_stub_1131(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
void GLAPIENTRY gl_dispatch_stub_1132(GLuint program, GLint location, GLsizei count, const GLdouble * value);
void GLAPIENTRY gl_dispatch_stub_1139(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
void GLAPIENTRY gl_dispatch_stub_1141(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
void GLAPIENTRY gl_dispatch_stub_1143(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
void GLAPIENTRY gl_dispatch_stub_1145(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
void GLAPIENTRY gl_dispatch_stub_1147(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
void GLAPIENTRY gl_dispatch_stub_1149(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
void GLAPIENTRY gl_dispatch_stub_1151(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
void GLAPIENTRY gl_dispatch_stub_1153(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
void GLAPIENTRY gl_dispatch_stub_1155(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble * value);
void GLAPIENTRY gl_dispatch_stub_1160(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples);
void GLAPIENTRY gl_dispatch_stub_1176(void);
void GLAPIENTRY gl_dispatch_stub_1177(GLdouble x, GLdouble y, GLdouble z, GLdouble w);
void GLAPIENTRY gl_dispatch_stub_1178(const GLdouble * v);
void GLAPIENTRY gl_dispatch_stub_1179(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void GLAPIENTRY gl_dispatch_stub_1180(const GLfloat * v);
void GLAPIENTRY gl_dispatch_stub_1181(GLint x, GLint y, GLint z, GLint w);
void GLAPIENTRY gl_dispatch_stub_1182(const GLint * v);
void GLAPIENTRY gl_dispatch_stub_1183(GLshort x, GLshort y, GLshort z, GLshort w);
void GLAPIENTRY gl_dispatch_stub_1184(const GLshort * v);
void GLAPIENTRY gl_dispatch_stub_1185(const GLenum * mode, const GLint * first, const GLsizei * count, GLsizei primcount, GLint modestride);
void GLAPIENTRY gl_dispatch_stub_1186(const GLenum * mode, const GLsizei * count, GLenum type, const GLvoid * const * indices, GLsizei primcount, GLint modestride);
GLboolean GLAPIENTRY gl_dispatch_stub_1187(GLsizei n, const GLuint * ids, GLboolean * residences);
void GLAPIENTRY gl_dispatch_stub_1188(GLenum target, GLuint id, const GLfloat * params);
void GLAPIENTRY gl_dispatch_stub_1189(GLenum target, GLuint index, GLenum pname, GLdouble * params);
void GLAPIENTRY gl_dispatch_stub_1190(GLenum target, GLuint index, GLenum pname, GLfloat * params);
void GLAPIENTRY gl_dispatch_stub_1191(GLuint id, GLenum pname, GLubyte * program);
void GLAPIENTRY gl_dispatch_stub_1192(GLuint id, GLenum pname, GLint * params);
void GLAPIENTRY gl_dispatch_stub_1193(GLenum target, GLuint address, GLenum pname, GLint * params);
void GLAPIENTRY gl_dispatch_stub_1194(GLuint index, GLenum pname, GLdouble * params);
void GLAPIENTRY gl_dispatch_stub_1195(GLuint index, GLenum pname, GLfloat * params);
void GLAPIENTRY gl_dispatch_stub_1196(GLuint index, GLenum pname, GLint * params);
void GLAPIENTRY gl_dispatch_stub_1197(GLenum target, GLuint id, GLsizei len, const GLubyte * program);
void GLAPIENTRY gl_dispatch_stub_1198(GLenum target, GLuint index, GLsizei num, const GLdouble * params);
void GLAPIENTRY gl_dispatch_stub_1199(GLenum target, GLuint index, GLsizei num, const GLfloat * params);
void GLAPIENTRY gl_dispatch_stub_1200(GLsizei n, const GLuint * ids);
void GLAPIENTRY gl_dispatch_stub_1201(GLenum target, GLuint address, GLenum matrix, GLenum transform);
void GLAPIENTRY gl_dispatch_stub_1202(GLuint index, GLdouble x);
void GLAPIENTRY gl_dispatch_stub_1203(GLuint index, const GLdouble * v);
void GLAPIENTRY gl_dispatch_stub_1204(GLuint index, GLfloat x);
void GLAPIENTRY gl_dispatch_stub_1205(GLuint index, const GLfloat * v);
void GLAPIENTRY gl_dispatch_stub_1206(GLuint index, GLshort x);
void GLAPIENTRY gl_dispatch_stub_1207(GLuint index, const GLshort * v);
void GLAPIENTRY gl_dispatch_stub_1208(GLuint index, GLdouble x, GLdouble y);
void GLAPIENTRY gl_dispatch_stub_1209(GLuint index, const GLdouble * v);
void GLAPIENTRY gl_dispatch_stub_1210(GLuint index, GLfloat x, GLfloat y);
void GLAPIENTRY gl_dispatch_stub_1211(GLuint index, const GLfloat * v);
void GLAPIENTRY gl_dispatch_stub_1212(GLuint index, GLshort x, GLshort y);
void GLAPIENTRY gl_dispatch_stub_1213(GLuint index, const GLshort * v);
void GLAPIENTRY gl_dispatch_stub_1214(GLuint index, GLdouble x, GLdouble y, GLdouble z);
void GLAPIENTRY gl_dispatch_stub_1215(GLuint index, const GLdouble * v);
void GLAPIENTRY gl_dispatch_stub_1216(GLuint index, GLfloat x, GLfloat y, GLfloat z);
void GLAPIENTRY gl_dispatch_stub_1217(GLuint index, const GLfloat * v);
void GLAPIENTRY gl_dispatch_stub_1218(GLuint index, GLshort x, GLshort y, GLshort z);
void GLAPIENTRY gl_dispatch_stub_1219(GLuint index, const GLshort * v);
void GLAPIENTRY gl_dispatch_stub_1220(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
void GLAPIENTRY gl_dispatch_stub_1221(GLuint index, const GLdouble * v);
void GLAPIENTRY gl_dispatch_stub_1222(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void GLAPIENTRY gl_dispatch_stub_1223(GLuint index, const GLfloat * v);
void GLAPIENTRY gl_dispatch_stub_1224(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
void GLAPIENTRY gl_dispatch_stub_1225(GLuint index, const GLshort * v);
void GLAPIENTRY gl_dispatch_stub_1226(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
void GLAPIENTRY gl_dispatch_stub_1227(GLuint index, const GLubyte * v);
void GLAPIENTRY gl_dispatch_stub_1228(GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid * pointer);
void GLAPIENTRY gl_dispatch_stub_1229(GLuint index, GLsizei n, const GLdouble * v);
void GLAPIENTRY gl_dispatch_stub_1230(GLuint index, GLsizei n, const GLfloat * v);
void GLAPIENTRY gl_dispatch_stub_1231(GLuint index, GLsizei n, const GLshort * v);
void GLAPIENTRY gl_dispatch_stub_1232(GLuint index, GLsizei n, const GLdouble * v);
void GLAPIENTRY gl_dispatch_stub_1233(GLuint index, GLsizei n, const GLfloat * v);
void GLAPIENTRY gl_dispatch_stub_1234(GLuint index, GLsizei n, const GLshort * v);
void GLAPIENTRY gl_dispatch_stub_1235(GLuint index, GLsizei n, const GLdouble * v);
void GLAPIENTRY gl_dispatch_stub_1236(GLuint index, GLsizei n, const GLfloat * v);
void GLAPIENTRY gl_dispatch_stub_1237(GLuint index, GLsizei n, const GLshort * v);
void GLAPIENTRY gl_dispatch_stub_1238(GLuint index, GLsizei n, const GLdouble * v);
void GLAPIENTRY gl_dispatch_stub_1239(GLuint index, GLsizei n, const GLfloat * v);
void GLAPIENTRY gl_dispatch_stub_1240(GLuint index, GLsizei n, const GLshort * v);
void GLAPIENTRY gl_dispatch_stub_1241(GLuint index, GLsizei n, const GLubyte * v);
void GLAPIENTRY gl_dispatch_stub_1242(GLenum pname, GLfloat * param);
void GLAPIENTRY gl_dispatch_stub_1243(GLenum pname, GLint * param);
void GLAPIENTRY gl_dispatch_stub_1244(GLenum pname, const GLfloat * param);
void GLAPIENTRY gl_dispatch_stub_1245(GLenum pname, const GLint * param);
void GLAPIENTRY gl_dispatch_stub_1246(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod);
void GLAPIENTRY gl_dispatch_stub_1247(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod);
void GLAPIENTRY gl_dispatch_stub_1248(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod);
void GLAPIENTRY gl_dispatch_stub_1249(void);
void GLAPIENTRY gl_dispatch_stub_1250(GLuint id);
void GLAPIENTRY gl_dispatch_stub_1251(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod);
void GLAPIENTRY gl_dispatch_stub_1252(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod);
void GLAPIENTRY gl_dispatch_stub_1253(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod);
void GLAPIENTRY gl_dispatch_stub_1254(GLuint id);
void GLAPIENTRY gl_dispatch_stub_1255(void);
GLuint GLAPIENTRY gl_dispatch_stub_1256(GLuint range);
void GLAPIENTRY gl_dispatch_stub_1257(GLuint dst, GLuint coord, GLenum swizzle);
void GLAPIENTRY gl_dispatch_stub_1258(GLuint dst, GLuint interp, GLenum swizzle);
void GLAPIENTRY gl_dispatch_stub_1259(GLuint dst, const GLfloat * value);
void GLAPIENTRY gl_dispatch_stub_1260(GLuint first, GLsizei count, const GLfloat * v);
void GLAPIENTRY gl_dispatch_stub_1261(GLuint index, GLfloat n, GLfloat f);
void GLAPIENTRY gl_dispatch_stub_1262(GLenum face);
void GLAPIENTRY gl_dispatch_stub_1263(GLuint id, GLsizei len, const GLubyte * name, GLdouble * params);
void GLAPIENTRY gl_dispatch_stub_1264(GLuint id, GLsizei len, const GLubyte * name, GLfloat * params);
void GLAPIENTRY gl_dispatch_stub_1265(GLuint id, GLsizei len, const GLubyte * name, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
void GLAPIENTRY gl_dispatch_stub_1266(GLuint id, GLsizei len, const GLubyte * name, const GLdouble * v);
void GLAPIENTRY gl_dispatch_stub_1267(GLuint id, GLsizei len, const GLubyte * name, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void GLAPIENTRY gl_dispatch_stub_1268(GLuint id, GLsizei len, const GLubyte * name, const GLfloat * v);
void GLAPIENTRY gl_dispatch_stub_1270(GLenum coord, GLenum pname, GLfixed * params);
void GLAPIENTRY gl_dispatch_stub_1271(GLenum coord, GLenum pname, GLint param);
void GLAPIENTRY gl_dispatch_stub_1272(GLenum coord, GLenum pname, const GLfixed * params);
void GLAPIENTRY gl_dispatch_stub_1273(GLclampd zmin, GLclampd zmax);
void GLAPIENTRY gl_dispatch_stub_1276(GLsizei len, const GLvoid * string);
void GLAPIENTRY gl_dispatch_stub_1277(GLenum target, GLenum pname, GLint param);
void GLAPIENTRY gl_dispatch_stub_1278(GLenum target, GLintptr offset, GLsizeiptr size);
void GLAPIENTRY gl_dispatch_stub_1295(GLenum target, GLuint index, GLuint buffer, GLintptr offset);
void GLAPIENTRY gl_dispatch_stub_1296(GLuint monitor);
void GLAPIENTRY gl_dispatch_stub_1297(GLsizei n, GLuint * monitors);
void GLAPIENTRY gl_dispatch_stub_1298(GLuint monitor);
void GLAPIENTRY gl_dispatch_stub_1299(GLsizei n, GLuint * monitors);
void GLAPIENTRY gl_dispatch_stub_1300(GLuint monitor, GLenum pname, GLsizei dataSize, GLuint * data, GLint * bytesWritten);
void GLAPIENTRY gl_dispatch_stub_1301(GLuint group, GLuint counter, GLenum pname, GLvoid * data);
void GLAPIENTRY gl_dispatch_stub_1302(GLuint group, GLuint counter, GLsizei bufSize, GLsizei * length, GLchar * counterString);
void GLAPIENTRY gl_dispatch_stub_1303(GLuint group, GLint * numCounters, GLint * maxActiveCounters, GLsizei countersSize, GLuint * counters);
void GLAPIENTRY gl_dispatch_stub_1304(GLuint group, GLsizei bufSize, GLsizei * length, GLchar * groupString);
void GLAPIENTRY gl_dispatch_stub_1305(GLint * numGroups, GLsizei groupsSize, GLuint * groups);
void GLAPIENTRY gl_dispatch_stub_1306(GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint * counterList);
void GLAPIENTRY gl_dispatch_stub_1307(GLenum objectType, GLuint name, GLenum pname, GLint * value);
GLenum GLAPIENTRY gl_dispatch_stub_1308(GLenum objectType, GLuint name, GLenum option);
GLenum GLAPIENTRY gl_dispatch_stub_1309(GLenum objectType, GLuint name, GLenum option);
void GLAPIENTRY gl_dispatch_stub_1310(GLuint program);
GLuint GLAPIENTRY gl_dispatch_stub_1311(GLenum type, const GLchar * string);
void GLAPIENTRY gl_dispatch_stub_1312(GLenum type, GLuint program);
void GLAPIENTRY gl_dispatch_stub_1314(void);
void GLAPIENTRY gl_dispatch_stub_1315(GLintptr surface, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values);
void GLAPIENTRY gl_dispatch_stub_1316(const GLvoid * vdpDevice, const GLvoid * getProcAddress);
GLboolean GLAPIENTRY gl_dispatch_stub_1317(GLintptr surface);
void GLAPIENTRY gl_dispatch_stub_1318(GLsizei numSurfaces, const GLintptr * surfaces);
GLintptr GLAPIENTRY gl_dispatch_stub_1319(const GLvoid * vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint * textureNames);
GLintptr GLAPIENTRY gl_dispatch_stub_1320(const GLvoid * vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint * textureNames);
void GLAPIENTRY gl_dispatch_stub_1321(GLintptr surface, GLenum access);
void GLAPIENTRY gl_dispatch_stub_1322(GLsizei numSurfaces, const GLintptr * surfaces);
void GLAPIENTRY gl_dispatch_stub_1323(GLintptr surface);
void GLAPIENTRY gl_dispatch_stub_1324(GLuint queryHandle);
void GLAPIENTRY gl_dispatch_stub_1325(GLuint queryId, GLuint * queryHandle);
void GLAPIENTRY gl_dispatch_stub_1326(GLuint queryHandle);
void GLAPIENTRY gl_dispatch_stub_1327(GLuint queryHandle);
void GLAPIENTRY gl_dispatch_stub_1328(GLuint * queryId);
void GLAPIENTRY gl_dispatch_stub_1329(GLuint queryId, GLuint * nextQueryId);
void GLAPIENTRY gl_dispatch_stub_1330(GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar * counterName, GLuint counterDescLength, GLchar * counterDesc, GLuint * counterOffset, GLuint * counterDataSize, GLuint * counterTypeEnum, GLuint * counterDataTypeEnum, GLuint64 * rawCounterMaxValue);
void GLAPIENTRY gl_dispatch_stub_1331(GLuint queryHandle, GLuint flags, GLsizei dataSize, GLvoid * data, GLuint * bytesWritten);
void GLAPIENTRY gl_dispatch_stub_1332(GLchar * queryName, GLuint * queryId);
void GLAPIENTRY gl_dispatch_stub_1333(GLuint queryId, GLuint queryNameLength, GLchar * queryName, GLuint * dataSize, GLuint * noCounters, GLuint * noInstances, GLuint * capsMask);
void GLAPIENTRY gl_dispatch_stub_1334(GLfloat factor, GLfloat units, GLfloat clamp);
void GLAPIENTRY gl_dispatch_stub_1335(GLuint xbits, GLuint ybits);
void GLAPIENTRY gl_dispatch_stub_1336(GLenum pname, GLfloat param);
void GLAPIENTRY gl_dispatch_stub_1337(GLenum pname, GLint param);
void GLAPIENTRY gl_dispatch_stub_1338(GLenum mode, GLsizei count, const GLint * box);
void GLAPIENTRY gl_dispatch_stub_1339(GLenum target, GLsizeiptr size, GLuint memory, GLuint64 offset);
void GLAPIENTRY gl_dispatch_stub_1340(GLsizei n, GLuint * memoryObjects);
void GLAPIENTRY gl_dispatch_stub_1341(GLsizei n, const GLuint * memoryObjects);
void GLAPIENTRY gl_dispatch_stub_1342(GLsizei n, const GLuint * semaphores);
void GLAPIENTRY gl_dispatch_stub_1343(GLsizei n, GLuint * semaphores);
void GLAPIENTRY gl_dispatch_stub_1344(GLuint memoryObject, GLenum pname, GLint * params);
void GLAPIENTRY gl_dispatch_stub_1345(GLuint semaphore, GLenum pname, GLuint64 * params);
void GLAPIENTRY gl_dispatch_stub_1346(GLenum target, GLuint index, GLubyte * data);
void GLAPIENTRY gl_dispatch_stub_1347(GLenum pname, GLubyte * data);
GLboolean GLAPIENTRY gl_dispatch_stub_1348(GLuint memoryObject);
GLboolean GLAPIENTRY gl_dispatch_stub_1349(GLuint semaphore);
void GLAPIENTRY gl_dispatch_stub_1350(GLuint memoryObject, GLenum pname, const GLint * params);
void GLAPIENTRY gl_dispatch_stub_1351(GLuint buffer, GLsizeiptr size, GLuint memory, GLuint64 offset);
void GLAPIENTRY gl_dispatch_stub_1352(GLuint semaphore, GLenum pname, const GLuint64 * params);
void GLAPIENTRY gl_dispatch_stub_1353(GLuint semaphore, GLuint numBufferBarriers, const GLuint * buffers, GLuint numTextureBarriers, const GLuint * textures, const GLenum * dstLayouts);
void GLAPIENTRY gl_dispatch_stub_1354(GLenum target, GLsizei levels, GLenum internalFormat, GLsizei width, GLuint memory, GLuint64 offset);
void GLAPIENTRY gl_dispatch_stub_1355(GLenum target, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLuint memory, GLuint64 offset);
void GLAPIENTRY gl_dispatch_stub_1356(GLenum target, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
void GLAPIENTRY gl_dispatch_stub_1357(GLenum target, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset);
void GLAPIENTRY gl_dispatch_stub_1358(GLenum target, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
void GLAPIENTRY gl_dispatch_stub_1359(GLuint texture, GLsizei levels, GLenum internalFormat, GLsizei width, GLuint memory, GLuint64 offset);
void GLAPIENTRY gl_dispatch_stub_1360(GLenum texture, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLuint memory, GLuint64 offset);
void GLAPIENTRY gl_dispatch_stub_1361(GLuint texture, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
void GLAPIENTRY gl_dispatch_stub_1362(GLuint texture, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLuint memory, GLuint64 offset);
void GLAPIENTRY gl_dispatch_stub_1363(GLuint texture, GLsizei samples, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations, GLuint memory, GLuint64 offset);
void GLAPIENTRY gl_dispatch_stub_1364(GLuint semaphore, GLuint numBufferBarriers, const GLuint * buffers, GLuint numTextureBarriers, const GLuint * textures, const GLenum * srcLayouts);
void GLAPIENTRY gl_dispatch_stub_1365(GLuint memory, GLuint64 size, GLenum handleType, GLint fd);
void GLAPIENTRY gl_dispatch_stub_1366(GLuint semaphore, GLenum handleType, GLint fd);
void GLAPIENTRY gl_dispatch_stub_1367(void);
void GLAPIENTRY gl_dispatch_stub_1368(GLuint renderbuffer, GLsizei samples, GLsizei storageSamples, GLenum internalformat, GLsizei width, GLsizei height);
void GLAPIENTRY gl_dispatch_stub_1369(GLenum target, GLsizei samples, GLsizei storageSamples, GLenum internalformat, GLsizei width, GLsizei height);
void GLAPIENTRY gl_dispatch_stub_1370(GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask);
void GLAPIENTRY gl_dispatch_stub_1371(GLenum target, GLuint index, GLsizei count, const GLfloat * params);
void GLAPIENTRY gl_dispatch_stub_1372(GLenum target, GLuint index, GLsizei count, const GLfloat * params);
void GLAPIENTRY gl_dispatch_stub_1373(GLenum target, GLvoid * writeOffset);
void GLAPIENTRY gl_dispatch_stub_1374(GLenum target, GLvoid * writeOffset);
#endif /* defined(NEED_FUNCTION_POINTER) || defined(GLX_INDIRECT_RENDERING) */

static const glprocs_table_t static_functions[] = {
    NAME_FUNC_OFFSET(    0, glNewList, glNewList, NULL, 0),
    NAME_FUNC_OFFSET(   10, glEndList, glEndList, NULL, 1),
    NAME_FUNC_OFFSET(   20, glCallList, glCallList, NULL, 2),
    NAME_FUNC_OFFSET(   31, glCallLists, glCallLists, NULL, 3),
    NAME_FUNC_OFFSET(   43, glDeleteLists, glDeleteLists, NULL, 4),
    NAME_FUNC_OFFSET(   57, glGenLists, glGenLists, NULL, 5),
    NAME_FUNC_OFFSET(   68, glListBase, glListBase, NULL, 6),
    NAME_FUNC_OFFSET(   79, glBegin, glBegin, NULL, 7),
    NAME_FUNC_OFFSET(   87, glBitmap, glBitmap, NULL, 8),
    NAME_FUNC_OFFSET(   96, glColor3b, glColor3b, NULL, 9),
    NAME_FUNC_OFFSET(  106, glColor3bv, glColor3bv, NULL, 10),
    NAME_FUNC_OFFSET(  117, glColor3d, glColor3d, NULL, 11),
    NAME_FUNC_OFFSET(  127, glColor3dv, glColor3dv, NULL, 12),
    NAME_FUNC_OFFSET(  138, glColor3f, glColor3f, NULL, 13),
    NAME_FUNC_OFFSET(  148, glColor3fv, glColor3fv, NULL, 14),
    NAME_FUNC_OFFSET(  159, glColor3i, glColor3i, NULL, 15),
    NAME_FUNC_OFFSET(  169, glColor3iv, glColor3iv, NULL, 16),
    NAME_FUNC_OFFSET(  180, glColor3s, glColor3s, NULL, 17),
    NAME_FUNC_OFFSET(  190, glColor3sv, glColor3sv, NULL, 18),
    NAME_FUNC_OFFSET(  201, glColor3ub, glColor3ub, NULL, 19),
    NAME_FUNC_OFFSET(  212, glColor3ubv, glColor3ubv, NULL, 20),
    NAME_FUNC_OFFSET(  224, glColor3ui, glColor3ui, NULL, 21),
    NAME_FUNC_OFFSET(  235, glColor3uiv, glColor3uiv, NULL, 22),
    NAME_FUNC_OFFSET(  247, glColor3us, glColor3us, NULL, 23),
    NAME_FUNC_OFFSET(  258, glColor3usv, glColor3usv, NULL, 24),
    NAME_FUNC_OFFSET(  270, glColor4b, glColor4b, NULL, 25),
    NAME_FUNC_OFFSET(  280, glColor4bv, glColor4bv, NULL, 26),
    NAME_FUNC_OFFSET(  291, glColor4d, glColor4d, NULL, 27),
    NAME_FUNC_OFFSET(  301, glColor4dv, glColor4dv, NULL, 28),
    NAME_FUNC_OFFSET(  312, glColor4f, glColor4f, NULL, 29),
    NAME_FUNC_OFFSET(  322, glColor4fv, glColor4fv, NULL, 30),
    NAME_FUNC_OFFSET(  333, glColor4i, glColor4i, NULL, 31),
    NAME_FUNC_OFFSET(  343, glColor4iv, glColor4iv, NULL, 32),
    NAME_FUNC_OFFSET(  354, glColor4s, glColor4s, NULL, 33),
    NAME_FUNC_OFFSET(  364, glColor4sv, glColor4sv, NULL, 34),
    NAME_FUNC_OFFSET(  375, glColor4ub, glColor4ub, NULL, 35),
    NAME_FUNC_OFFSET(  386, glColor4ubv, glColor4ubv, NULL, 36),
    NAME_FUNC_OFFSET(  398, glColor4ui, glColor4ui, NULL, 37),
    NAME_FUNC_OFFSET(  409, glColor4uiv, glColor4uiv, NULL, 38),
    NAME_FUNC_OFFSET(  421, glColor4us, glColor4us, NULL, 39),
    NAME_FUNC_OFFSET(  432, glColor4usv, glColor4usv, NULL, 40),
    NAME_FUNC_OFFSET(  444, glEdgeFlag, glEdgeFlag, NULL, 41),
    NAME_FUNC_OFFSET(  455, glEdgeFlagv, glEdgeFlagv, NULL, 42),
    NAME_FUNC_OFFSET(  467, glEnd, glEnd, NULL, 43),
    NAME_FUNC_OFFSET(  473, glIndexd, glIndexd, NULL, 44),
    NAME_FUNC_OFFSET(  482, glIndexdv, glIndexdv, NULL, 45),
    NAME_FUNC_OFFSET(  492, glIndexf, glIndexf, NULL, 46),
    NAME_FUNC_OFFSET(  501, glIndexfv, glIndexfv, NULL, 47),
    NAME_FUNC_OFFSET(  511, glIndexi, glIndexi, NULL, 48),
    NAME_FUNC_OFFSET(  520, glIndexiv, glIndexiv, NULL, 49),
    NAME_FUNC_OFFSET(  530, glIndexs, glIndexs, NULL, 50),
    NAME_FUNC_OFFSET(  539, glIndexsv, glIndexsv, NULL, 51),
    NAME_FUNC_OFFSET(  549, glNormal3b, glNormal3b, NULL, 52),
    NAME_FUNC_OFFSET(  560, glNormal3bv, glNormal3bv, NULL, 53),
    NAME_FUNC_OFFSET(  572, glNormal3d, glNormal3d, NULL, 54),
    NAME_FUNC_OFFSET(  583, glNormal3dv, glNormal3dv, NULL, 55),
    NAME_FUNC_OFFSET(  595, glNormal3f, glNormal3f, NULL, 56),
    NAME_FUNC_OFFSET(  606, glNormal3fv, glNormal3fv, NULL, 57),
    NAME_FUNC_OFFSET(  618, glNormal3i, glNormal3i, NULL, 58),
    NAME_FUNC_OFFSET(  629, glNormal3iv, glNormal3iv, NULL, 59),
    NAME_FUNC_OFFSET(  641, glNormal3s, glNormal3s, NULL, 60),
    NAME_FUNC_OFFSET(  652, glNormal3sv, glNormal3sv, NULL, 61),
    NAME_FUNC_OFFSET(  664, glRasterPos2d, glRasterPos2d, NULL, 62),
    NAME_FUNC_OFFSET(  678, glRasterPos2dv, glRasterPos2dv, NULL, 63),
    NAME_FUNC_OFFSET(  693, glRasterPos2f, glRasterPos2f, NULL, 64),
    NAME_FUNC_OFFSET(  707, glRasterPos2fv, glRasterPos2fv, NULL, 65),
    NAME_FUNC_OFFSET(  722, glRasterPos2i, glRasterPos2i, NULL, 66),
    NAME_FUNC_OFFSET(  736, glRasterPos2iv, glRasterPos2iv, NULL, 67),
    NAME_FUNC_OFFSET(  751, glRasterPos2s, glRasterPos2s, NULL, 68),
    NAME_FUNC_OFFSET(  765, glRasterPos2sv, glRasterPos2sv, NULL, 69),
    NAME_FUNC_OFFSET(  780, glRasterPos3d, glRasterPos3d, NULL, 70),
    NAME_FUNC_OFFSET(  794, glRasterPos3dv, glRasterPos3dv, NULL, 71),
    NAME_FUNC_OFFSET(  809, glRasterPos3f, glRasterPos3f, NULL, 72),
    NAME_FUNC_OFFSET(  823, glRasterPos3fv, glRasterPos3fv, NULL, 73),
    NAME_FUNC_OFFSET(  838, glRasterPos3i, glRasterPos3i, NULL, 74),
    NAME_FUNC_OFFSET(  852, glRasterPos3iv, glRasterPos3iv, NULL, 75),
    NAME_FUNC_OFFSET(  867, glRasterPos3s, glRasterPos3s, NULL, 76),
    NAME_FUNC_OFFSET(  881, glRasterPos3sv, glRasterPos3sv, NULL, 77),
    NAME_FUNC_OFFSET(  896, glRasterPos4d, glRasterPos4d, NULL, 78),
    NAME_FUNC_OFFSET(  910, glRasterPos4dv, glRasterPos4dv, NULL, 79),
    NAME_FUNC_OFFSET(  925, glRasterPos4f, glRasterPos4f, NULL, 80),
    NAME_FUNC_OFFSET(  939, glRasterPos4fv, glRasterPos4fv, NULL, 81),
    NAME_FUNC_OFFSET(  954, glRasterPos4i, glRasterPos4i, NULL, 82),
    NAME_FUNC_OFFSET(  968, glRasterPos4iv, glRasterPos4iv, NULL, 83),
    NAME_FUNC_OFFSET(  983, glRasterPos4s, glRasterPos4s, NULL, 84),
    NAME_FUNC_OFFSET(  997, glRasterPos4sv, glRasterPos4sv, NULL, 85),
    NAME_FUNC_OFFSET( 1012, glRectd, glRectd, NULL, 86),
    NAME_FUNC_OFFSET( 1020, glRectdv, glRectdv, NULL, 87),
    NAME_FUNC_OFFSET( 1029, glRectf, glRectf, NULL, 88),
    NAME_FUNC_OFFSET( 1037, glRectfv, glRectfv, NULL, 89),
    NAME_FUNC_OFFSET( 1046, glRecti, glRecti, NULL, 90),
    NAME_FUNC_OFFSET( 1054, glRectiv, glRectiv, NULL, 91),
    NAME_FUNC_OFFSET( 1063, glRects, glRects, NULL, 92),
    NAME_FUNC_OFFSET( 1071, glRectsv, glRectsv, NULL, 93),
    NAME_FUNC_OFFSET( 1080, glTexCoord1d, glTexCoord1d, NULL, 94),
    NAME_FUNC_OFFSET( 1093, glTexCoord1dv, glTexCoord1dv, NULL, 95),
    NAME_FUNC_OFFSET( 1107, glTexCoord1f, glTexCoord1f, NULL, 96),
    NAME_FUNC_OFFSET( 1120, glTexCoord1fv, glTexCoord1fv, NULL, 97),
    NAME_FUNC_OFFSET( 1134, glTexCoord1i, glTexCoord1i, NULL, 98),
    NAME_FUNC_OFFSET( 1147, glTexCoord1iv, glTexCoord1iv, NULL, 99),
    NAME_FUNC_OFFSET( 1161, glTexCoord1s, glTexCoord1s, NULL, 100),
    NAME_FUNC_OFFSET( 1174, glTexCoord1sv, glTexCoord1sv, NULL, 101),
    NAME_FUNC_OFFSET( 1188, glTexCoord2d, glTexCoord2d, NULL, 102),
    NAME_FUNC_OFFSET( 1201, glTexCoord2dv, glTexCoord2dv, NULL, 103),
    NAME_FUNC_OFFSET( 1215, glTexCoord2f, glTexCoord2f, NULL, 104),
    NAME_FUNC_OFFSET( 1228, glTexCoord2fv, glTexCoord2fv, NULL, 105),
    NAME_FUNC_OFFSET( 1242, glTexCoord2i, glTexCoord2i, NULL, 106),
    NAME_FUNC_OFFSET( 1255, glTexCoord2iv, glTexCoord2iv, NULL, 107),
    NAME_FUNC_OFFSET( 1269, glTexCoord2s, glTexCoord2s, NULL, 108),
    NAME_FUNC_OFFSET( 1282, glTexCoord2sv, glTexCoord2sv, NULL, 109),
    NAME_FUNC_OFFSET( 1296, glTexCoord3d, glTexCoord3d, NULL, 110),
    NAME_FUNC_OFFSET( 1309, glTexCoord3dv, glTexCoord3dv, NULL, 111),
    NAME_FUNC_OFFSET( 1323, glTexCoord3f, glTexCoord3f, NULL, 112),
    NAME_FUNC_OFFSET( 1336, glTexCoord3fv, glTexCoord3fv, NULL, 113),
    NAME_FUNC_OFFSET( 1350, glTexCoord3i, glTexCoord3i, NULL, 114),
    NAME_FUNC_OFFSET( 1363, glTexCoord3iv, glTexCoord3iv, NULL, 115),
    NAME_FUNC_OFFSET( 1377, glTexCoord3s, glTexCoord3s, NULL, 116),
    NAME_FUNC_OFFSET( 1390, glTexCoord3sv, glTexCoord3sv, NULL, 117),
    NAME_FUNC_OFFSET( 1404, glTexCoord4d, glTexCoord4d, NULL, 118),
    NAME_FUNC_OFFSET( 1417, glTexCoord4dv, glTexCoord4dv, NULL, 119),
    NAME_FUNC_OFFSET( 1431, glTexCoord4f, glTexCoord4f, NULL, 120),
    NAME_FUNC_OFFSET( 1444, glTexCoord4fv, glTexCoord4fv, NULL, 121),
    NAME_FUNC_OFFSET( 1458, glTexCoord4i, glTexCoord4i, NULL, 122),
    NAME_FUNC_OFFSET( 1471, glTexCoord4iv, glTexCoord4iv, NULL, 123),
    NAME_FUNC_OFFSET( 1485, glTexCoord4s, glTexCoord4s, NULL, 124),
    NAME_FUNC_OFFSET( 1498, glTexCoord4sv, glTexCoord4sv, NULL, 125),
    NAME_FUNC_OFFSET( 1512, glVertex2d, glVertex2d, NULL, 126),
    NAME_FUNC_OFFSET( 1523, glVertex2dv, glVertex2dv, NULL, 127),
    NAME_FUNC_OFFSET( 1535, glVertex2f, glVertex2f, NULL, 128),
    NAME_FUNC_OFFSET( 1546, glVertex2fv, glVertex2fv, NULL, 129),
    NAME_FUNC_OFFSET( 1558, glVertex2i, glVertex2i, NULL, 130),
    NAME_FUNC_OFFSET( 1569, glVertex2iv, glVertex2iv, NULL, 131),
    NAME_FUNC_OFFSET( 1581, glVertex2s, glVertex2s, NULL, 132),
    NAME_FUNC_OFFSET( 1592, glVertex2sv, glVertex2sv, NULL, 133),
    NAME_FUNC_OFFSET( 1604, glVertex3d, glVertex3d, NULL, 134),
    NAME_FUNC_OFFSET( 1615, glVertex3dv, glVertex3dv, NULL, 135),
    NAME_FUNC_OFFSET( 1627, glVertex3f, glVertex3f, NULL, 136),
    NAME_FUNC_OFFSET( 1638, glVertex3fv, glVertex3fv, NULL, 137),
    NAME_FUNC_OFFSET( 1650, glVertex3i, glVertex3i, NULL, 138),
    NAME_FUNC_OFFSET( 1661, glVertex3iv, glVertex3iv, NULL, 139),
    NAME_FUNC_OFFSET( 1673, glVertex3s, glVertex3s, NULL, 140),
    NAME_FUNC_OFFSET( 1684, glVertex3sv, glVertex3sv, NULL, 141),
    NAME_FUNC_OFFSET( 1696, glVertex4d, glVertex4d, NULL, 142),
    NAME_FUNC_OFFSET( 1707, glVertex4dv, glVertex4dv, NULL, 143),
    NAME_FUNC_OFFSET( 1719, glVertex4f, glVertex4f, NULL, 144),
    NAME_FUNC_OFFSET( 1730, glVertex4fv, glVertex4fv, NULL, 145),
    NAME_FUNC_OFFSET( 1742, glVertex4i, glVertex4i, NULL, 146),
    NAME_FUNC_OFFSET( 1753, glVertex4iv, glVertex4iv, NULL, 147),
    NAME_FUNC_OFFSET( 1765, glVertex4s, glVertex4s, NULL, 148),
    NAME_FUNC_OFFSET( 1776, glVertex4sv, glVertex4sv, NULL, 149),
    NAME_FUNC_OFFSET( 1788, glClipPlane, glClipPlane, NULL, 150),
    NAME_FUNC_OFFSET( 1800, glColorMaterial, glColorMaterial, NULL, 151),
    NAME_FUNC_OFFSET( 1816, glCullFace, glCullFace, NULL, 152),
    NAME_FUNC_OFFSET( 1827, glFogf, glFogf, NULL, 153),
    NAME_FUNC_OFFSET( 1834, glFogfv, glFogfv, NULL, 154),
    NAME_FUNC_OFFSET( 1842, glFogi, glFogi, NULL, 155),
    NAME_FUNC_OFFSET( 1849, glFogiv, glFogiv, NULL, 156),
    NAME_FUNC_OFFSET( 1857, glFrontFace, glFrontFace, NULL, 157),
    NAME_FUNC_OFFSET( 1869, glHint, glHint, NULL, 158),
    NAME_FUNC_OFFSET( 1876, glLightf, glLightf, NULL, 159),
    NAME_FUNC_OFFSET( 1885, glLightfv, glLightfv, NULL, 160),
    NAME_FUNC_OFFSET( 1895, glLighti, glLighti, NULL, 161),
    NAME_FUNC_OFFSET( 1904, glLightiv, glLightiv, NULL, 162),
    NAME_FUNC_OFFSET( 1914, glLightModelf, glLightModelf, NULL, 163),
    NAME_FUNC_OFFSET( 1928, glLightModelfv, glLightModelfv, NULL, 164),
    NAME_FUNC_OFFSET( 1943, glLightModeli, glLightModeli, NULL, 165),
    NAME_FUNC_OFFSET( 1957, glLightModeliv, glLightModeliv, NULL, 166),
    NAME_FUNC_OFFSET( 1972, glLineStipple, glLineStipple, NULL, 167),
    NAME_FUNC_OFFSET( 1986, glLineWidth, glLineWidth, NULL, 168),
    NAME_FUNC_OFFSET( 1998, glMaterialf, glMaterialf, NULL, 169),
    NAME_FUNC_OFFSET( 2010, glMaterialfv, glMaterialfv, NULL, 170),
    NAME_FUNC_OFFSET( 2023, glMateriali, glMateriali, NULL, 171),
    NAME_FUNC_OFFSET( 2035, glMaterialiv, glMaterialiv, NULL, 172),
    NAME_FUNC_OFFSET( 2048, glPointSize, glPointSize, NULL, 173),
    NAME_FUNC_OFFSET( 2060, glPolygonMode, glPolygonMode, NULL, 174),
    NAME_FUNC_OFFSET( 2074, glPolygonStipple, glPolygonStipple, NULL, 175),
    NAME_FUNC_OFFSET( 2091, glScissor, glScissor, NULL, 176),
    NAME_FUNC_OFFSET( 2101, glShadeModel, glShadeModel, NULL, 177),
    NAME_FUNC_OFFSET( 2114, glTexParameterf, glTexParameterf, NULL, 178),
    NAME_FUNC_OFFSET( 2130, glTexParameterfv, glTexParameterfv, NULL, 179),
    NAME_FUNC_OFFSET( 2147, glTexParameteri, glTexParameteri, NULL, 180),
    NAME_FUNC_OFFSET( 2163, glTexParameteriv, glTexParameteriv, NULL, 181),
    NAME_FUNC_OFFSET( 2180, glTexImage1D, glTexImage1D, NULL, 182),
    NAME_FUNC_OFFSET( 2193, glTexImage2D, glTexImage2D, NULL, 183),
    NAME_FUNC_OFFSET( 2206, glTexEnvf, glTexEnvf, NULL, 184),
    NAME_FUNC_OFFSET( 2216, glTexEnvfv, glTexEnvfv, NULL, 185),
    NAME_FUNC_OFFSET( 2227, glTexEnvi, glTexEnvi, NULL, 186),
    NAME_FUNC_OFFSET( 2237, glTexEnviv, glTexEnviv, NULL, 187),
    NAME_FUNC_OFFSET( 2248, glTexGend, glTexGend, NULL, 188),
    NAME_FUNC_OFFSET( 2258, glTexGendv, glTexGendv, NULL, 189),
    NAME_FUNC_OFFSET( 2269, glTexGenf, glTexGenf, NULL, 190),
    NAME_FUNC_OFFSET( 2279, glTexGenfv, glTexGenfv, NULL, 191),
    NAME_FUNC_OFFSET( 2290, glTexGeni, glTexGeni, NULL, 192),
    NAME_FUNC_OFFSET( 2300, glTexGeniv, glTexGeniv, NULL, 193),
    NAME_FUNC_OFFSET( 2311, glFeedbackBuffer, glFeedbackBuffer, NULL, 194),
    NAME_FUNC_OFFSET( 2328, glSelectBuffer, glSelectBuffer, NULL, 195),
    NAME_FUNC_OFFSET( 2343, glRenderMode, glRenderMode, NULL, 196),
    NAME_FUNC_OFFSET( 2356, glInitNames, glInitNames, NULL, 197),
    NAME_FUNC_OFFSET( 2368, glLoadName, glLoadName, NULL, 198),
    NAME_FUNC_OFFSET( 2379, glPassThrough, glPassThrough, NULL, 199),
    NAME_FUNC_OFFSET( 2393, glPopName, glPopName, NULL, 200),
    NAME_FUNC_OFFSET( 2403, glPushName, glPushName, NULL, 201),
    NAME_FUNC_OFFSET( 2414, glDrawBuffer, glDrawBuffer, NULL, 202),
    NAME_FUNC_OFFSET( 2427, glClear, glClear, NULL, 203),
    NAME_FUNC_OFFSET( 2435, glClearAccum, glClearAccum, NULL, 204),
    NAME_FUNC_OFFSET( 2448, glClearIndex, glClearIndex, NULL, 205),
    NAME_FUNC_OFFSET( 2461, glClearColor, glClearColor, NULL, 206),
    NAME_FUNC_OFFSET( 2474, glClearStencil, glClearStencil, NULL, 207),
    NAME_FUNC_OFFSET( 2489, glClearDepth, glClearDepth, NULL, 208),
    NAME_FUNC_OFFSET( 2502, glStencilMask, glStencilMask, NULL, 209),
    NAME_FUNC_OFFSET( 2516, glColorMask, glColorMask, NULL, 210),
    NAME_FUNC_OFFSET( 2528, glDepthMask, glDepthMask, NULL, 211),
    NAME_FUNC_OFFSET( 2540, glIndexMask, glIndexMask, NULL, 212),
    NAME_FUNC_OFFSET( 2552, glAccum, glAccum, NULL, 213),
    NAME_FUNC_OFFSET( 2560, glDisable, glDisable, NULL, 214),
    NAME_FUNC_OFFSET( 2570, glEnable, glEnable, NULL, 215),
    NAME_FUNC_OFFSET( 2579, glFinish, glFinish, NULL, 216),
    NAME_FUNC_OFFSET( 2588, glFlush, glFlush, NULL, 217),
    NAME_FUNC_OFFSET( 2596, glPopAttrib, glPopAttrib, NULL, 218),
    NAME_FUNC_OFFSET( 2608, glPushAttrib, glPushAttrib, NULL, 219),
    NAME_FUNC_OFFSET( 2621, glMap1d, glMap1d, NULL, 220),
    NAME_FUNC_OFFSET( 2629, glMap1f, glMap1f, NULL, 221),
    NAME_FUNC_OFFSET( 2637, glMap2d, glMap2d, NULL, 222),
    NAME_FUNC_OFFSET( 2645, glMap2f, glMap2f, NULL, 223),
    NAME_FUNC_OFFSET( 2653, glMapGrid1d, glMapGrid1d, NULL, 224),
    NAME_FUNC_OFFSET( 2665, glMapGrid1f, glMapGrid1f, NULL, 225),
    NAME_FUNC_OFFSET( 2677, glMapGrid2d, glMapGrid2d, NULL, 226),
    NAME_FUNC_OFFSET( 2689, glMapGrid2f, glMapGrid2f, NULL, 227),
    NAME_FUNC_OFFSET( 2701, glEvalCoord1d, glEvalCoord1d, NULL, 228),
    NAME_FUNC_OFFSET( 2715, glEvalCoord1dv, glEvalCoord1dv, NULL, 229),
    NAME_FUNC_OFFSET( 2730, glEvalCoord1f, glEvalCoord1f, NULL, 230),
    NAME_FUNC_OFFSET( 2744, glEvalCoord1fv, glEvalCoord1fv, NULL, 231),
    NAME_FUNC_OFFSET( 2759, glEvalCoord2d, glEvalCoord2d, NULL, 232),
    NAME_FUNC_OFFSET( 2773, glEvalCoord2dv, glEvalCoord2dv, NULL, 233),
    NAME_FUNC_OFFSET( 2788, glEvalCoord2f, glEvalCoord2f, NULL, 234),
    NAME_FUNC_OFFSET( 2802, glEvalCoord2fv, glEvalCoord2fv, NULL, 235),
    NAME_FUNC_OFFSET( 2817, glEvalMesh1, glEvalMesh1, NULL, 236),
    NAME_FUNC_OFFSET( 2829, glEvalPoint1, glEvalPoint1, NULL, 237),
    NAME_FUNC_OFFSET( 2842, glEvalMesh2, glEvalMesh2, NULL, 238),
    NAME_FUNC_OFFSET( 2854, glEvalPoint2, glEvalPoint2, NULL, 239),
    NAME_FUNC_OFFSET( 2867, glAlphaFunc, glAlphaFunc, NULL, 240),
    NAME_FUNC_OFFSET( 2879, glBlendFunc, glBlendFunc, NULL, 241),
    NAME_FUNC_OFFSET( 2891, glLogicOp, glLogicOp, NULL, 242),
    NAME_FUNC_OFFSET( 2901, glStencilFunc, glStencilFunc, NULL, 243),
    NAME_FUNC_OFFSET( 2915, glStencilOp, glStencilOp, NULL, 244),
    NAME_FUNC_OFFSET( 2927, glDepthFunc, glDepthFunc, NULL, 245),
    NAME_FUNC_OFFSET( 2939, glPixelZoom, glPixelZoom, NULL, 246),
    NAME_FUNC_OFFSET( 2951, glPixelTransferf, glPixelTransferf, NULL, 247),
    NAME_FUNC_OFFSET( 2968, glPixelTransferi, glPixelTransferi, NULL, 248),
    NAME_FUNC_OFFSET( 2985, glPixelStoref, glPixelStoref, NULL, 249),
    NAME_FUNC_OFFSET( 2999, glPixelStorei, glPixelStorei, NULL, 250),
    NAME_FUNC_OFFSET( 3013, glPixelMapfv, glPixelMapfv, NULL, 251),
    NAME_FUNC_OFFSET( 3026, glPixelMapuiv, glPixelMapuiv, NULL, 252),
    NAME_FUNC_OFFSET( 3040, glPixelMapusv, glPixelMapusv, NULL, 253),
    NAME_FUNC_OFFSET( 3054, glReadBuffer, glReadBuffer, NULL, 254),
    NAME_FUNC_OFFSET( 3067, glCopyPixels, glCopyPixels, NULL, 255),
    NAME_FUNC_OFFSET( 3080, glReadPixels, glReadPixels, NULL, 256),
    NAME_FUNC_OFFSET( 3093, glDrawPixels, glDrawPixels, NULL, 257),
    NAME_FUNC_OFFSET( 3106, glGetBooleanv, glGetBooleanv, NULL, 258),
    NAME_FUNC_OFFSET( 3120, glGetClipPlane, glGetClipPlane, NULL, 259),
    NAME_FUNC_OFFSET( 3135, glGetDoublev, glGetDoublev, NULL, 260),
    NAME_FUNC_OFFSET( 3148, glGetError, glGetError, NULL, 261),
    NAME_FUNC_OFFSET( 3159, glGetFloatv, glGetFloatv, NULL, 262),
    NAME_FUNC_OFFSET( 3171, glGetIntegerv, glGetIntegerv, NULL, 263),
    NAME_FUNC_OFFSET( 3185, glGetLightfv, glGetLightfv, NULL, 264),
    NAME_FUNC_OFFSET( 3198, glGetLightiv, glGetLightiv, NULL, 265),
    NAME_FUNC_OFFSET( 3211, glGetMapdv, glGetMapdv, NULL, 266),
    NAME_FUNC_OFFSET( 3222, glGetMapfv, glGetMapfv, NULL, 267),
    NAME_FUNC_OFFSET( 3233, glGetMapiv, glGetMapiv, NULL, 268),
    NAME_FUNC_OFFSET( 3244, glGetMaterialfv, glGetMaterialfv, NULL, 269),
    NAME_FUNC_OFFSET( 3260, glGetMaterialiv, glGetMaterialiv, NULL, 270),
    NAME_FUNC_OFFSET( 3276, glGetPixelMapfv, glGetPixelMapfv, NULL, 271),
    NAME_FUNC_OFFSET( 3292, glGetPixelMapuiv, glGetPixelMapuiv, NULL, 272),
    NAME_FUNC_OFFSET( 3309, glGetPixelMapusv, glGetPixelMapusv, NULL, 273),
    NAME_FUNC_OFFSET( 3326, glGetPolygonStipple, glGetPolygonStipple, NULL, 274),
    NAME_FUNC_OFFSET( 3346, glGetString, glGetString, NULL, 275),
    NAME_FUNC_OFFSET( 3358, glGetTexEnvfv, glGetTexEnvfv, NULL, 276),
    NAME_FUNC_OFFSET( 3372, glGetTexEnviv, glGetTexEnviv, NULL, 277),
    NAME_FUNC_OFFSET( 3386, glGetTexGendv, glGetTexGendv, NULL, 278),
    NAME_FUNC_OFFSET( 3400, glGetTexGenfv, glGetTexGenfv, NULL, 279),
    NAME_FUNC_OFFSET( 3414, glGetTexGeniv, glGetTexGeniv, NULL, 280),
    NAME_FUNC_OFFSET( 3428, glGetTexImage, glGetTexImage, NULL, 281),
    NAME_FUNC_OFFSET( 3442, glGetTexParameterfv, glGetTexParameterfv, NULL, 282),
    NAME_FUNC_OFFSET( 3462, glGetTexParameteriv, glGetTexParameteriv, NULL, 283),
    NAME_FUNC_OFFSET( 3482, glGetTexLevelParameterfv, glGetTexLevelParameterfv, NULL, 284),
    NAME_FUNC_OFFSET( 3507, glGetTexLevelParameteriv, glGetTexLevelParameteriv, NULL, 285),
    NAME_FUNC_OFFSET( 3532, glIsEnabled, glIsEnabled, NULL, 286),
    NAME_FUNC_OFFSET( 3544, glIsList, glIsList, NULL, 287),
    NAME_FUNC_OFFSET( 3553, glDepthRange, glDepthRange, NULL, 288),
    NAME_FUNC_OFFSET( 3566, glFrustum, glFrustum, NULL, 289),
    NAME_FUNC_OFFSET( 3576, glLoadIdentity, glLoadIdentity, NULL, 290),
    NAME_FUNC_OFFSET( 3591, glLoadMatrixf, glLoadMatrixf, NULL, 291),
    NAME_FUNC_OFFSET( 3605, glLoadMatrixd, glLoadMatrixd, NULL, 292),
    NAME_FUNC_OFFSET( 3619, glMatrixMode, glMatrixMode, NULL, 293),
    NAME_FUNC_OFFSET( 3632, glMultMatrixf, glMultMatrixf, NULL, 294),
    NAME_FUNC_OFFSET( 3646, glMultMatrixd, glMultMatrixd, NULL, 295),
    NAME_FUNC_OFFSET( 3660, glOrtho, glOrtho, NULL, 296),
    NAME_FUNC_OFFSET( 3668, glPopMatrix, glPopMatrix, NULL, 297),
    NAME_FUNC_OFFSET( 3680, glPushMatrix, glPushMatrix, NULL, 298),
    NAME_FUNC_OFFSET( 3693, glRotated, glRotated, NULL, 299),
    NAME_FUNC_OFFSET( 3703, glRotatef, glRotatef, NULL, 300),
    NAME_FUNC_OFFSET( 3713, glScaled, glScaled, NULL, 301),
    NAME_FUNC_OFFSET( 3722, glScalef, glScalef, NULL, 302),
    NAME_FUNC_OFFSET( 3731, glTranslated, glTranslated, NULL, 303),
    NAME_FUNC_OFFSET( 3744, glTranslatef, glTranslatef, NULL, 304),
    NAME_FUNC_OFFSET( 3757, glViewport, glViewport, NULL, 305),
    NAME_FUNC_OFFSET( 3768, glArrayElement, glArrayElement, NULL, 306),
    NAME_FUNC_OFFSET( 3783, glBindTexture, glBindTexture, NULL, 307),
    NAME_FUNC_OFFSET( 3797, glColorPointer, glColorPointer, NULL, 308),
    NAME_FUNC_OFFSET( 3812, glDisableClientState, glDisableClientState, NULL, 309),
    NAME_FUNC_OFFSET( 3833, glDrawArrays, glDrawArrays, NULL, 310),
    NAME_FUNC_OFFSET( 3846, glDrawElements, glDrawElements, NULL, 311),
    NAME_FUNC_OFFSET( 3861, glEdgeFlagPointer, glEdgeFlagPointer, NULL, 312),
    NAME_FUNC_OFFSET( 3879, glEnableClientState, glEnableClientState, NULL, 313),
    NAME_FUNC_OFFSET( 3899, glIndexPointer, glIndexPointer, NULL, 314),
    NAME_FUNC_OFFSET( 3914, glIndexub, glIndexub, NULL, 315),
    NAME_FUNC_OFFSET( 3924, glIndexubv, glIndexubv, NULL, 316),
    NAME_FUNC_OFFSET( 3935, glInterleavedArrays, glInterleavedArrays, NULL, 317),
    NAME_FUNC_OFFSET( 3955, glNormalPointer, glNormalPointer, NULL, 318),
    NAME_FUNC_OFFSET( 3971, glPolygonOffset, glPolygonOffset, NULL, 319),
    NAME_FUNC_OFFSET( 3987, glTexCoordPointer, glTexCoordPointer, NULL, 320),
    NAME_FUNC_OFFSET( 4005, glVertexPointer, glVertexPointer, NULL, 321),
    NAME_FUNC_OFFSET( 4021, glAreTexturesResident, glAreTexturesResident, NULL, 322),
    NAME_FUNC_OFFSET( 4043, glCopyTexImage1D, glCopyTexImage1D, NULL, 323),
    NAME_FUNC_OFFSET( 4060, glCopyTexImage2D, glCopyTexImage2D, NULL, 324),
    NAME_FUNC_OFFSET( 4077, glCopyTexSubImage1D, glCopyTexSubImage1D, NULL, 325),
    NAME_FUNC_OFFSET( 4097, glCopyTexSubImage2D, glCopyTexSubImage2D, NULL, 326),
    NAME_FUNC_OFFSET( 4117, glDeleteTextures, glDeleteTextures, NULL, 327),
    NAME_FUNC_OFFSET( 4134, glGenTextures, glGenTextures, NULL, 328),
    NAME_FUNC_OFFSET( 4148, glGetPointerv, glGetPointerv, NULL, 329),
    NAME_FUNC_OFFSET( 4162, glIsTexture, glIsTexture, NULL, 330),
    NAME_FUNC_OFFSET( 4174, glPrioritizeTextures, glPrioritizeTextures, NULL, 331),
    NAME_FUNC_OFFSET( 4195, glTexSubImage1D, glTexSubImage1D, NULL, 332),
    NAME_FUNC_OFFSET( 4211, glTexSubImage2D, glTexSubImage2D, NULL, 333),
    NAME_FUNC_OFFSET( 4227, glPopClientAttrib, glPopClientAttrib, NULL, 334),
    NAME_FUNC_OFFSET( 4245, glPushClientAttrib, glPushClientAttrib, NULL, 335),
    NAME_FUNC_OFFSET( 4264, glBlendColor, glBlendColor, NULL, 336),
    NAME_FUNC_OFFSET( 4277, glBlendEquation, glBlendEquation, NULL, 337),
    NAME_FUNC_OFFSET( 4293, glDrawRangeElements, glDrawRangeElements, NULL, 338),
    NAME_FUNC_OFFSET( 4313, glColorTable, glColorTable, NULL, 339),
    NAME_FUNC_OFFSET( 4326, glColorTableParameterfv, glColorTableParameterfv, NULL, 340),
    NAME_FUNC_OFFSET( 4350, glColorTableParameteriv, glColorTableParameteriv, NULL, 341),
    NAME_FUNC_OFFSET( 4374, glCopyColorTable, glCopyColorTable, NULL, 342),
    NAME_FUNC_OFFSET( 4391, glGetColorTable, glGetColorTable, NULL, 343),
    NAME_FUNC_OFFSET( 4407, glGetColorTableParameterfv, glGetColorTableParameterfv, NULL, 344),
    NAME_FUNC_OFFSET( 4434, glGetColorTableParameteriv, glGetColorTableParameteriv, NULL, 345),
    NAME_FUNC_OFFSET( 4461, glColorSubTable, glColorSubTable, NULL, 346),
    NAME_FUNC_OFFSET( 4477, glCopyColorSubTable, glCopyColorSubTable, NULL, 347),
    NAME_FUNC_OFFSET( 4497, glConvolutionFilter1D, glConvolutionFilter1D, NULL, 348),
    NAME_FUNC_OFFSET( 4519, glConvolutionFilter2D, glConvolutionFilter2D, NULL, 349),
    NAME_FUNC_OFFSET( 4541, glConvolutionParameterf, glConvolutionParameterf, NULL, 350),
    NAME_FUNC_OFFSET( 4565, glConvolutionParameterfv, glConvolutionParameterfv, NULL, 351),
    NAME_FUNC_OFFSET( 4590, glConvolutionParameteri, glConvolutionParameteri, NULL, 352),
    NAME_FUNC_OFFSET( 4614, glConvolutionParameteriv, glConvolutionParameteriv, NULL, 353),
    NAME_FUNC_OFFSET( 4639, glCopyConvolutionFilter1D, glCopyConvolutionFilter1D, NULL, 354),
    NAME_FUNC_OFFSET( 4665, glCopyConvolutionFilter2D, glCopyConvolutionFilter2D, NULL, 355),
    NAME_FUNC_OFFSET( 4691, glGetConvolutionFilter, glGetConvolutionFilter, NULL, 356),
    NAME_FUNC_OFFSET( 4714, glGetConvolutionParameterfv, glGetConvolutionParameterfv, NULL, 357),
    NAME_FUNC_OFFSET( 4742, glGetConvolutionParameteriv, glGetConvolutionParameteriv, NULL, 358),
    NAME_FUNC_OFFSET( 4770, glGetSeparableFilter, glGetSeparableFilter, NULL, 359),
    NAME_FUNC_OFFSET( 4791, glSeparableFilter2D, glSeparableFilter2D, NULL, 360),
    NAME_FUNC_OFFSET( 4811, glGetHistogram, glGetHistogram, NULL, 361),
    NAME_FUNC_OFFSET( 4826, glGetHistogramParameterfv, glGetHistogramParameterfv, NULL, 362),
    NAME_FUNC_OFFSET( 4852, glGetHistogramParameteriv, glGetHistogramParameteriv, NULL, 363),
    NAME_FUNC_OFFSET( 4878, glGetMinmax, glGetMinmax, NULL, 364),
    NAME_FUNC_OFFSET( 4890, glGetMinmaxParameterfv, glGetMinmaxParameterfv, NULL, 365),
    NAME_FUNC_OFFSET( 4913, glGetMinmaxParameteriv, glGetMinmaxParameteriv, NULL, 366),
    NAME_FUNC_OFFSET( 4936, glHistogram, glHistogram, NULL, 367),
    NAME_FUNC_OFFSET( 4948, glMinmax, glMinmax, NULL, 368),
    NAME_FUNC_OFFSET( 4957, glResetHistogram, glResetHistogram, NULL, 369),
    NAME_FUNC_OFFSET( 4974, glResetMinmax, glResetMinmax, NULL, 370),
    NAME_FUNC_OFFSET( 4988, glTexImage3D, glTexImage3D, NULL, 371),
    NAME_FUNC_OFFSET( 5001, glTexSubImage3D, glTexSubImage3D, NULL, 372),
    NAME_FUNC_OFFSET( 5017, glCopyTexSubImage3D, glCopyTexSubImage3D, NULL, 373),
    NAME_FUNC_OFFSET( 5037, glActiveTexture, glActiveTexture, NULL, 374),
    NAME_FUNC_OFFSET( 5053, glClientActiveTexture, glClientActiveTexture, NULL, 375),
    NAME_FUNC_OFFSET( 5075, glMultiTexCoord1d, glMultiTexCoord1d, NULL, 376),
    NAME_FUNC_OFFSET( 5093, glMultiTexCoord1dv, glMultiTexCoord1dv, NULL, 377),
    NAME_FUNC_OFFSET( 5112, glMultiTexCoord1fARB, glMultiTexCoord1fARB, NULL, 378),
    NAME_FUNC_OFFSET( 5133, glMultiTexCoord1fvARB, glMultiTexCoord1fvARB, NULL, 379),
    NAME_FUNC_OFFSET( 5155, glMultiTexCoord1i, glMultiTexCoord1i, NULL, 380),
    NAME_FUNC_OFFSET( 5173, glMultiTexCoord1iv, glMultiTexCoord1iv, NULL, 381),
    NAME_FUNC_OFFSET( 5192, glMultiTexCoord1s, glMultiTexCoord1s, NULL, 382),
    NAME_FUNC_OFFSET( 5210, glMultiTexCoord1sv, glMultiTexCoord1sv, NULL, 383),
    NAME_FUNC_OFFSET( 5229, glMultiTexCoord2d, glMultiTexCoord2d, NULL, 384),
    NAME_FUNC_OFFSET( 5247, glMultiTexCoord2dv, glMultiTexCoord2dv, NULL, 385),
    NAME_FUNC_OFFSET( 5266, glMultiTexCoord2fARB, glMultiTexCoord2fARB, NULL, 386),
    NAME_FUNC_OFFSET( 5287, glMultiTexCoord2fvARB, glMultiTexCoord2fvARB, NULL, 387),
    NAME_FUNC_OFFSET( 5309, glMultiTexCoord2i, glMultiTexCoord2i, NULL, 388),
    NAME_FUNC_OFFSET( 5327, glMultiTexCoord2iv, glMultiTexCoord2iv, NULL, 389),
    NAME_FUNC_OFFSET( 5346, glMultiTexCoord2s, glMultiTexCoord2s, NULL, 390),
    NAME_FUNC_OFFSET( 5364, glMultiTexCoord2sv, glMultiTexCoord2sv, NULL, 391),
    NAME_FUNC_OFFSET( 5383, glMultiTexCoord3d, glMultiTexCoord3d, NULL, 392),
    NAME_FUNC_OFFSET( 5401, glMultiTexCoord3dv, glMultiTexCoord3dv, NULL, 393),
    NAME_FUNC_OFFSET( 5420, glMultiTexCoord3fARB, glMultiTexCoord3fARB, NULL, 394),
    NAME_FUNC_OFFSET( 5441, glMultiTexCoord3fvARB, glMultiTexCoord3fvARB, NULL, 395),
    NAME_FUNC_OFFSET( 5463, glMultiTexCoord3i, glMultiTexCoord3i, NULL, 396),
    NAME_FUNC_OFFSET( 5481, glMultiTexCoord3iv, glMultiTexCoord3iv, NULL, 397),
    NAME_FUNC_OFFSET( 5500, glMultiTexCoord3s, glMultiTexCoord3s, NULL, 398),
    NAME_FUNC_OFFSET( 5518, glMultiTexCoord3sv, glMultiTexCoord3sv, NULL, 399),
    NAME_FUNC_OFFSET( 5537, glMultiTexCoord4d, glMultiTexCoord4d, NULL, 400),
    NAME_FUNC_OFFSET( 5555, glMultiTexCoord4dv, glMultiTexCoord4dv, NULL, 401),
    NAME_FUNC_OFFSET( 5574, glMultiTexCoord4fARB, glMultiTexCoord4fARB, NULL, 402),
    NAME_FUNC_OFFSET( 5595, glMultiTexCoord4fvARB, glMultiTexCoord4fvARB, NULL, 403),
    NAME_FUNC_OFFSET( 5617, glMultiTexCoord4i, glMultiTexCoord4i, NULL, 404),
    NAME_FUNC_OFFSET( 5635, glMultiTexCoord4iv, glMultiTexCoord4iv, NULL, 405),
    NAME_FUNC_OFFSET( 5654, glMultiTexCoord4s, glMultiTexCoord4s, NULL, 406),
    NAME_FUNC_OFFSET( 5672, glMultiTexCoord4sv, glMultiTexCoord4sv, NULL, 407),
    NAME_FUNC_OFFSET( 5691, gl_dispatch_stub_408, gl_dispatch_stub_408, NULL, 408),
    NAME_FUNC_OFFSET( 5706, glCompressedTexImage1D, glCompressedTexImage1D, NULL, 409),
    NAME_FUNC_OFFSET( 5729, glCompressedTexImage2D, glCompressedTexImage2D, NULL, 410),
    NAME_FUNC_OFFSET( 5752, glCompressedTexImage3D, glCompressedTexImage3D, NULL, 411),
    NAME_FUNC_OFFSET( 5775, glCompressedTexSubImage1D, glCompressedTexSubImage1D, NULL, 412),
    NAME_FUNC_OFFSET( 5801, glCompressedTexSubImage2D, glCompressedTexSubImage2D, NULL, 413),
    NAME_FUNC_OFFSET( 5827, glCompressedTexSubImage3D, glCompressedTexSubImage3D, NULL, 414),
    NAME_FUNC_OFFSET( 5853, glGetCompressedTexImage, glGetCompressedTexImage, NULL, 415),
    NAME_FUNC_OFFSET( 5877, glLoadTransposeMatrixd, glLoadTransposeMatrixd, NULL, 416),
    NAME_FUNC_OFFSET( 5900, glLoadTransposeMatrixf, glLoadTransposeMatrixf, NULL, 417),
    NAME_FUNC_OFFSET( 5923, glMultTransposeMatrixd, glMultTransposeMatrixd, NULL, 418),
    NAME_FUNC_OFFSET( 5946, glMultTransposeMatrixf, glMultTransposeMatrixf, NULL, 419),
    NAME_FUNC_OFFSET( 5969, glSampleCoverage, glSampleCoverage, NULL, 420),
    NAME_FUNC_OFFSET( 5986, glBlendFuncSeparate, glBlendFuncSeparate, NULL, 421),
    NAME_FUNC_OFFSET( 6006, glFogCoordPointer, glFogCoordPointer, NULL, 422),
    NAME_FUNC_OFFSET( 6024, glFogCoordd, glFogCoordd, NULL, 423),
    NAME_FUNC_OFFSET( 6036, glFogCoorddv, glFogCoorddv, NULL, 424),
    NAME_FUNC_OFFSET( 6049, glMultiDrawArrays, glMultiDrawArrays, NULL, 425),
    NAME_FUNC_OFFSET( 6067, glPointParameterf, glPointParameterf, NULL, 426),
    NAME_FUNC_OFFSET( 6085, glPointParameterfv, glPointParameterfv, NULL, 427),
    NAME_FUNC_OFFSET( 6104, glPointParameteri, glPointParameteri, NULL, 428),
    NAME_FUNC_OFFSET( 6122, glPointParameteriv, glPointParameteriv, NULL, 429),
    NAME_FUNC_OFFSET( 6141, glSecondaryColor3b, glSecondaryColor3b, NULL, 430),
    NAME_FUNC_OFFSET( 6160, glSecondaryColor3bv, glSecondaryColor3bv, NULL, 431),
    NAME_FUNC_OFFSET( 6180, glSecondaryColor3d, glSecondaryColor3d, NULL, 432),
    NAME_FUNC_OFFSET( 6199, glSecondaryColor3dv, glSecondaryColor3dv, NULL, 433),
    NAME_FUNC_OFFSET( 6219, glSecondaryColor3i, glSecondaryColor3i, NULL, 434),
    NAME_FUNC_OFFSET( 6238, glSecondaryColor3iv, glSecondaryColor3iv, NULL, 435),
    NAME_FUNC_OFFSET( 6258, glSecondaryColor3s, glSecondaryColor3s, NULL, 436),
    NAME_FUNC_OFFSET( 6277, glSecondaryColor3sv, glSecondaryColor3sv, NULL, 437),
    NAME_FUNC_OFFSET( 6297, glSecondaryColor3ub, glSecondaryColor3ub, NULL, 438),
    NAME_FUNC_OFFSET( 6317, glSecondaryColor3ubv, glSecondaryColor3ubv, NULL, 439),
    NAME_FUNC_OFFSET( 6338, glSecondaryColor3ui, glSecondaryColor3ui, NULL, 440),
    NAME_FUNC_OFFSET( 6358, glSecondaryColor3uiv, glSecondaryColor3uiv, NULL, 441),
    NAME_FUNC_OFFSET( 6379, glSecondaryColor3us, glSecondaryColor3us, NULL, 442),
    NAME_FUNC_OFFSET( 6399, glSecondaryColor3usv, glSecondaryColor3usv, NULL, 443),
    NAME_FUNC_OFFSET( 6420, glSecondaryColorPointer, glSecondaryColorPointer, NULL, 444),
    NAME_FUNC_OFFSET( 6444, glWindowPos2d, glWindowPos2d, NULL, 445),
    NAME_FUNC_OFFSET( 6458, glWindowPos2dv, glWindowPos2dv, NULL, 446),
    NAME_FUNC_OFFSET( 6473, glWindowPos2f, glWindowPos2f, NULL, 447),
    NAME_FUNC_OFFSET( 6487, glWindowPos2fv, glWindowPos2fv, NULL, 448),
    NAME_FUNC_OFFSET( 6502, glWindowPos2i, glWindowPos2i, NULL, 449),
    NAME_FUNC_OFFSET( 6516, glWindowPos2iv, glWindowPos2iv, NULL, 450),
    NAME_FUNC_OFFSET( 6531, glWindowPos2s, glWindowPos2s, NULL, 451),
    NAME_FUNC_OFFSET( 6545, glWindowPos2sv, glWindowPos2sv, NULL, 452),
    NAME_FUNC_OFFSET( 6560, glWindowPos3d, glWindowPos3d, NULL, 453),
    NAME_FUNC_OFFSET( 6574, glWindowPos3dv, glWindowPos3dv, NULL, 454),
    NAME_FUNC_OFFSET( 6589, glWindowPos3f, glWindowPos3f, NULL, 455),
    NAME_FUNC_OFFSET( 6603, glWindowPos3fv, glWindowPos3fv, NULL, 456),
    NAME_FUNC_OFFSET( 6618, glWindowPos3i, glWindowPos3i, NULL, 457),
    NAME_FUNC_OFFSET( 6632, glWindowPos3iv, glWindowPos3iv, NULL, 458),
    NAME_FUNC_OFFSET( 6647, glWindowPos3s, glWindowPos3s, NULL, 459),
    NAME_FUNC_OFFSET( 6661, glWindowPos3sv, glWindowPos3sv, NULL, 460),
    NAME_FUNC_OFFSET( 6676, glBeginQuery, glBeginQuery, NULL, 461),
    NAME_FUNC_OFFSET( 6689, glBindBuffer, glBindBuffer, NULL, 462),
    NAME_FUNC_OFFSET( 6702, glBufferData, glBufferData, NULL, 463),
    NAME_FUNC_OFFSET( 6715, glBufferSubData, glBufferSubData, NULL, 464),
    NAME_FUNC_OFFSET( 6731, glDeleteBuffers, glDeleteBuffers, NULL, 465),
    NAME_FUNC_OFFSET( 6747, glDeleteQueries, glDeleteQueries, NULL, 466),
    NAME_FUNC_OFFSET( 6763, glEndQuery, glEndQuery, NULL, 467),
    NAME_FUNC_OFFSET( 6774, glGenBuffers, glGenBuffers, NULL, 468),
    NAME_FUNC_OFFSET( 6787, glGenQueries, glGenQueries, NULL, 469),
    NAME_FUNC_OFFSET( 6800, glGetBufferParameteriv, glGetBufferParameteriv, NULL, 470),
    NAME_FUNC_OFFSET( 6823, glGetBufferPointerv, glGetBufferPointerv, NULL, 471),
    NAME_FUNC_OFFSET( 6843, glGetBufferSubData, glGetBufferSubData, NULL, 472),
    NAME_FUNC_OFFSET( 6862, glGetQueryObjectiv, glGetQueryObjectiv, NULL, 473),
    NAME_FUNC_OFFSET( 6881, glGetQueryObjectuiv, glGetQueryObjectuiv, NULL, 474),
    NAME_FUNC_OFFSET( 6901, glGetQueryiv, glGetQueryiv, NULL, 475),
    NAME_FUNC_OFFSET( 6914, glIsBuffer, glIsBuffer, NULL, 476),
    NAME_FUNC_OFFSET( 6925, glIsQuery, glIsQuery, NULL, 477),
    NAME_FUNC_OFFSET( 6935, glMapBuffer, glMapBuffer, NULL, 478),
    NAME_FUNC_OFFSET( 6947, glUnmapBuffer, glUnmapBuffer, NULL, 479),
    NAME_FUNC_OFFSET( 6961, glAttachShader, glAttachShader, NULL, 480),
    NAME_FUNC_OFFSET( 6976, glBindAttribLocation, glBindAttribLocation, NULL, 481),
    NAME_FUNC_OFFSET( 6997, glBlendEquationSeparate, glBlendEquationSeparate, NULL, 482),
    NAME_FUNC_OFFSET( 7021, glCompileShader, glCompileShader, NULL, 483),
    NAME_FUNC_OFFSET( 7037, glCreateProgram, glCreateProgram, NULL, 484),
    NAME_FUNC_OFFSET( 7053, glCreateShader, glCreateShader, NULL, 485),
    NAME_FUNC_OFFSET( 7068, glDeleteProgram, glDeleteProgram, NULL, 486),
    NAME_FUNC_OFFSET( 7084, glDeleteShader, glDeleteShader, NULL, 487),
    NAME_FUNC_OFFSET( 7099, glDetachShader, glDetachShader, NULL, 488),
    NAME_FUNC_OFFSET( 7114, glDisableVertexAttribArray, glDisableVertexAttribArray, NULL, 489),
    NAME_FUNC_OFFSET( 7141, glDrawBuffers, glDrawBuffers, NULL, 490),
    NAME_FUNC_OFFSET( 7155, glEnableVertexAttribArray, glEnableVertexAttribArray, NULL, 491),
    NAME_FUNC_OFFSET( 7181, glGetActiveAttrib, glGetActiveAttrib, NULL, 492),
    NAME_FUNC_OFFSET( 7199, glGetActiveUniform, glGetActiveUniform, NULL, 493),
    NAME_FUNC_OFFSET( 7218, glGetAttachedShaders, glGetAttachedShaders, NULL, 494),
    NAME_FUNC_OFFSET( 7239, glGetAttribLocation, glGetAttribLocation, NULL, 495),
    NAME_FUNC_OFFSET( 7259, glGetProgramInfoLog, glGetProgramInfoLog, NULL, 496),
    NAME_FUNC_OFFSET( 7279, glGetProgramiv, glGetProgramiv, NULL, 497),
    NAME_FUNC_OFFSET( 7294, glGetShaderInfoLog, glGetShaderInfoLog, NULL, 498),
    NAME_FUNC_OFFSET( 7313, glGetShaderSource, glGetShaderSource, NULL, 499),
    NAME_FUNC_OFFSET( 7331, glGetShaderiv, glGetShaderiv, NULL, 500),
    NAME_FUNC_OFFSET( 7345, glGetUniformLocation, glGetUniformLocation, NULL, 501),
    NAME_FUNC_OFFSET( 7366, glGetUniformfv, glGetUniformfv, NULL, 502),
    NAME_FUNC_OFFSET( 7381, glGetUniformiv, glGetUniformiv, NULL, 503),
    NAME_FUNC_OFFSET( 7396, glGetVertexAttribPointerv, glGetVertexAttribPointerv, NULL, 504),
    NAME_FUNC_OFFSET( 7422, glGetVertexAttribdv, glGetVertexAttribdv, NULL, 505),
    NAME_FUNC_OFFSET( 7442, glGetVertexAttribfv, glGetVertexAttribfv, NULL, 506),
    NAME_FUNC_OFFSET( 7462, glGetVertexAttribiv, glGetVertexAttribiv, NULL, 507),
    NAME_FUNC_OFFSET( 7482, glIsProgram, glIsProgram, NULL, 508),
    NAME_FUNC_OFFSET( 7494, glIsShader, glIsShader, NULL, 509),
    NAME_FUNC_OFFSET( 7505, glLinkProgram, glLinkProgram, NULL, 510),
    NAME_FUNC_OFFSET( 7519, glShaderSource, glShaderSource, NULL, 511),
    NAME_FUNC_OFFSET( 7534, glStencilFuncSeparate, glStencilFuncSeparate, NULL, 512),
    NAME_FUNC_OFFSET( 7556, glStencilMaskSeparate, glStencilMaskSeparate, NULL, 513),
    NAME_FUNC_OFFSET( 7578, glStencilOpSeparate, glStencilOpSeparate, NULL, 514),
    NAME_FUNC_OFFSET( 7598, glUniform1f, glUniform1f, NULL, 515),
    NAME_FUNC_OFFSET( 7610, glUniform1fv, glUniform1fv, NULL, 516),
    NAME_FUNC_OFFSET( 7623, glUniform1i, glUniform1i, NULL, 517),
    NAME_FUNC_OFFSET( 7635, glUniform1iv, glUniform1iv, NULL, 518),
    NAME_FUNC_OFFSET( 7648, glUniform2f, glUniform2f, NULL, 519),
    NAME_FUNC_OFFSET( 7660, glUniform2fv, glUniform2fv, NULL, 520),
    NAME_FUNC_OFFSET( 7673, glUniform2i, glUniform2i, NULL, 521),
    NAME_FUNC_OFFSET( 7685, glUniform2iv, glUniform2iv, NULL, 522),
    NAME_FUNC_OFFSET( 7698, glUniform3f, glUniform3f, NULL, 523),
    NAME_FUNC_OFFSET( 7710, glUniform3fv, glUniform3fv, NULL, 524),
    NAME_FUNC_OFFSET( 7723, glUniform3i, glUniform3i, NULL, 525),
    NAME_FUNC_OFFSET( 7735, glUniform3iv, glUniform3iv, NULL, 526),
    NAME_FUNC_OFFSET( 7748, glUniform4f, glUniform4f, NULL, 527),
    NAME_FUNC_OFFSET( 7760, glUniform4fv, glUniform4fv, NULL, 528),
    NAME_FUNC_OFFSET( 7773, glUniform4i, glUniform4i, NULL, 529),
    NAME_FUNC_OFFSET( 7785, glUniform4iv, glUniform4iv, NULL, 530),
    NAME_FUNC_OFFSET( 7798, glUniformMatrix2fv, glUniformMatrix2fv, NULL, 531),
    NAME_FUNC_OFFSET( 7817, glUniformMatrix3fv, glUniformMatrix3fv, NULL, 532),
    NAME_FUNC_OFFSET( 7836, glUniformMatrix4fv, glUniformMatrix4fv, NULL, 533),
    NAME_FUNC_OFFSET( 7855, glUseProgram, glUseProgram, NULL, 534),
    NAME_FUNC_OFFSET( 7868, glValidateProgram, glValidateProgram, NULL, 535),
    NAME_FUNC_OFFSET( 7886, glVertexAttrib1d, glVertexAttrib1d, NULL, 536),
    NAME_FUNC_OFFSET( 7903, glVertexAttrib1dv, glVertexAttrib1dv, NULL, 537),
    NAME_FUNC_OFFSET( 7921, glVertexAttrib1s, glVertexAttrib1s, NULL, 538),
    NAME_FUNC_OFFSET( 7938, glVertexAttrib1sv, glVertexAttrib1sv, NULL, 539),
    NAME_FUNC_OFFSET( 7956, glVertexAttrib2d, glVertexAttrib2d, NULL, 540),
    NAME_FUNC_OFFSET( 7973, glVertexAttrib2dv, glVertexAttrib2dv, NULL, 541),
    NAME_FUNC_OFFSET( 7991, glVertexAttrib2s, glVertexAttrib2s, NULL, 542),
    NAME_FUNC_OFFSET( 8008, glVertexAttrib2sv, glVertexAttrib2sv, NULL, 543),
    NAME_FUNC_OFFSET( 8026, glVertexAttrib3d, glVertexAttrib3d, NULL, 544),
    NAME_FUNC_OFFSET( 8043, glVertexAttrib3dv, glVertexAttrib3dv, NULL, 545),
    NAME_FUNC_OFFSET( 8061, glVertexAttrib3s, glVertexAttrib3s, NULL, 546),
    NAME_FUNC_OFFSET( 8078, glVertexAttrib3sv, glVertexAttrib3sv, NULL, 547),
    NAME_FUNC_OFFSET( 8096, glVertexAttrib4Nbv, glVertexAttrib4Nbv, NULL, 548),
    NAME_FUNC_OFFSET( 8115, glVertexAttrib4Niv, glVertexAttrib4Niv, NULL, 549),
    NAME_FUNC_OFFSET( 8134, glVertexAttrib4Nsv, glVertexAttrib4Nsv, NULL, 550),
    NAME_FUNC_OFFSET( 8153, glVertexAttrib4Nub, glVertexAttrib4Nub, NULL, 551),
    NAME_FUNC_OFFSET( 8172, glVertexAttrib4Nubv, glVertexAttrib4Nubv, NULL, 552),
    NAME_FUNC_OFFSET( 8192, glVertexAttrib4Nuiv, glVertexAttrib4Nuiv, NULL, 553),
    NAME_FUNC_OFFSET( 8212, glVertexAttrib4Nusv, glVertexAttrib4Nusv, NULL, 554),
    NAME_FUNC_OFFSET( 8232, glVertexAttrib4bv, glVertexAttrib4bv, NULL, 555),
    NAME_FUNC_OFFSET( 8250, glVertexAttrib4d, glVertexAttrib4d, NULL, 556),
    NAME_FUNC_OFFSET( 8267, glVertexAttrib4dv, glVertexAttrib4dv, NULL, 557),
    NAME_FUNC_OFFSET( 8285, glVertexAttrib4iv, glVertexAttrib4iv, NULL, 558),
    NAME_FUNC_OFFSET( 8303, glVertexAttrib4s, glVertexAttrib4s, NULL, 559),
    NAME_FUNC_OFFSET( 8320, glVertexAttrib4sv, glVertexAttrib4sv, NULL, 560),
    NAME_FUNC_OFFSET( 8338, glVertexAttrib4ubv, glVertexAttrib4ubv, NULL, 561),
    NAME_FUNC_OFFSET( 8357, glVertexAttrib4uiv, glVertexAttrib4uiv, NULL, 562),
    NAME_FUNC_OFFSET( 8376, glVertexAttrib4usv, glVertexAttrib4usv, NULL, 563),
    NAME_FUNC_OFFSET( 8395, glVertexAttribPointer, glVertexAttribPointer, NULL, 564),
    NAME_FUNC_OFFSET( 8417, glUniformMatrix2x3fv, glUniformMatrix2x3fv, NULL, 565),
    NAME_FUNC_OFFSET( 8438, glUniformMatrix2x4fv, glUniformMatrix2x4fv, NULL, 566),
    NAME_FUNC_OFFSET( 8459, glUniformMatrix3x2fv, glUniformMatrix3x2fv, NULL, 567),
    NAME_FUNC_OFFSET( 8480, glUniformMatrix3x4fv, glUniformMatrix3x4fv, NULL, 568),
    NAME_FUNC_OFFSET( 8501, glUniformMatrix4x2fv, glUniformMatrix4x2fv, NULL, 569),
    NAME_FUNC_OFFSET( 8522, glUniformMatrix4x3fv, glUniformMatrix4x3fv, NULL, 570),
    NAME_FUNC_OFFSET( 8543, glBeginConditionalRender, glBeginConditionalRender, NULL, 571),
    NAME_FUNC_OFFSET( 8568, glBeginTransformFeedback, glBeginTransformFeedback, NULL, 572),
    NAME_FUNC_OFFSET( 8593, glBindBufferBase, glBindBufferBase, NULL, 573),
    NAME_FUNC_OFFSET( 8610, glBindBufferRange, glBindBufferRange, NULL, 574),
    NAME_FUNC_OFFSET( 8628, glBindFragDataLocation, glBindFragDataLocation, NULL, 575),
    NAME_FUNC_OFFSET( 8651, glClampColor, glClampColor, NULL, 576),
    NAME_FUNC_OFFSET( 8664, glClearBufferfi, glClearBufferfi, NULL, 577),
    NAME_FUNC_OFFSET( 8680, glClearBufferfv, glClearBufferfv, NULL, 578),
    NAME_FUNC_OFFSET( 8696, glClearBufferiv, glClearBufferiv, NULL, 579),
    NAME_FUNC_OFFSET( 8712, glClearBufferuiv, glClearBufferuiv, NULL, 580),
    NAME_FUNC_OFFSET( 8729, glColorMaski, glColorMaski, NULL, 581),
    NAME_FUNC_OFFSET( 8742, glDisablei, glDisablei, NULL, 582),
    NAME_FUNC_OFFSET( 8753, glEnablei, glEnablei, NULL, 583),
    NAME_FUNC_OFFSET( 8763, glEndConditionalRender, glEndConditionalRender, NULL, 584),
    NAME_FUNC_OFFSET( 8786, glEndTransformFeedback, glEndTransformFeedback, NULL, 585),
    NAME_FUNC_OFFSET( 8809, glGetBooleani_v, glGetBooleani_v, NULL, 586),
    NAME_FUNC_OFFSET( 8825, glGetFragDataLocation, glGetFragDataLocation, NULL, 587),
    NAME_FUNC_OFFSET( 8847, glGetIntegeri_v, glGetIntegeri_v, NULL, 588),
    NAME_FUNC_OFFSET( 8863, glGetStringi, glGetStringi, NULL, 589),
    NAME_FUNC_OFFSET( 8876, glGetTexParameterIiv, glGetTexParameterIiv, NULL, 590),
    NAME_FUNC_OFFSET( 8897, glGetTexParameterIuiv, glGetTexParameterIuiv, NULL, 591),
    NAME_FUNC_OFFSET( 8919, glGetTransformFeedbackVarying, glGetTransformFeedbackVarying, NULL, 592),
    NAME_FUNC_OFFSET( 8949, glGetUniformuiv, glGetUniformuiv, NULL, 593),
    NAME_FUNC_OFFSET( 8965, glGetVertexAttribIiv, glGetVertexAttribIiv, NULL, 594),
    NAME_FUNC_OFFSET( 8986, glGetVertexAttribIuiv, glGetVertexAttribIuiv, NULL, 595),
    NAME_FUNC_OFFSET( 9008, glIsEnabledi, glIsEnabledi, NULL, 596),
    NAME_FUNC_OFFSET( 9021, glTexParameterIiv, glTexParameterIiv, NULL, 597),
    NAME_FUNC_OFFSET( 9039, glTexParameterIuiv, glTexParameterIuiv, NULL, 598),
    NAME_FUNC_OFFSET( 9058, glTransformFeedbackVaryings, glTransformFeedbackVaryings, NULL, 599),
    NAME_FUNC_OFFSET( 9086, glUniform1ui, glUniform1ui, NULL, 600),
    NAME_FUNC_OFFSET( 9099, glUniform1uiv, glUniform1uiv, NULL, 601),
    NAME_FUNC_OFFSET( 9113, glUniform2ui, glUniform2ui, NULL, 602),
    NAME_FUNC_OFFSET( 9126, glUniform2uiv, glUniform2uiv, NULL, 603),
    NAME_FUNC_OFFSET( 9140, glUniform3ui, glUniform3ui, NULL, 604),
    NAME_FUNC_OFFSET( 9153, glUniform3uiv, glUniform3uiv, NULL, 605),
    NAME_FUNC_OFFSET( 9167, glUniform4ui, glUniform4ui, NULL, 606),
    NAME_FUNC_OFFSET( 9180, glUniform4uiv, glUniform4uiv, NULL, 607),
    NAME_FUNC_OFFSET( 9194, glVertexAttribI1iv, glVertexAttribI1iv, NULL, 608),
    NAME_FUNC_OFFSET( 9213, glVertexAttribI1uiv, glVertexAttribI1uiv, NULL, 609),
    NAME_FUNC_OFFSET( 9233, glVertexAttribI4bv, glVertexAttribI4bv, NULL, 610),
    NAME_FUNC_OFFSET( 9252, glVertexAttribI4sv, glVertexAttribI4sv, NULL, 611),
    NAME_FUNC_OFFSET( 9271, glVertexAttribI4ubv, glVertexAttribI4ubv, NULL, 612),
    NAME_FUNC_OFFSET( 9291, glVertexAttribI4usv, glVertexAttribI4usv, NULL, 613),
    NAME_FUNC_OFFSET( 9311, glVertexAttribIPointer, glVertexAttribIPointer, NULL, 614),
    NAME_FUNC_OFFSET( 9334, glPrimitiveRestartIndex, glPrimitiveRestartIndex, NULL, 615),
    NAME_FUNC_OFFSET( 9358, glTexBuffer, glTexBuffer, NULL, 616),
    NAME_FUNC_OFFSET( 9370, glFramebufferTexture, glFramebufferTexture, NULL, 617),
    NAME_FUNC_OFFSET( 9391, glGetBufferParameteri64v, glGetBufferParameteri64v, NULL, 618),
    NAME_FUNC_OFFSET( 9416, glGetInteger64i_v, glGetInteger64i_v, NULL, 619),
    NAME_FUNC_OFFSET( 9434, glVertexAttribDivisor, glVertexAttribDivisor, NULL, 620),
    NAME_FUNC_OFFSET( 9456, glMinSampleShading, glMinSampleShading, NULL, 621),
    NAME_FUNC_OFFSET( 9475, glMemoryBarrierByRegion, glMemoryBarrierByRegion, NULL, 622),
    NAME_FUNC_OFFSET( 9499, glBindProgramARB, glBindProgramARB, NULL, 623),
    NAME_FUNC_OFFSET( 9516, glDeleteProgramsARB, glDeleteProgramsARB, NULL, 624),
    NAME_FUNC_OFFSET( 9536, glGenProgramsARB, glGenProgramsARB, NULL, 625),
    NAME_FUNC_OFFSET( 9553, glGetProgramEnvParameterdvARB, glGetProgramEnvParameterdvARB, NULL, 626),
    NAME_FUNC_OFFSET( 9583, glGetProgramEnvParameterfvARB, glGetProgramEnvParameterfvARB, NULL, 627),
    NAME_FUNC_OFFSET( 9613, glGetProgramLocalParameterdvARB, glGetProgramLocalParameterdvARB, NULL, 628),
    NAME_FUNC_OFFSET( 9645, glGetProgramLocalParameterfvARB, glGetProgramLocalParameterfvARB, NULL, 629),
    NAME_FUNC_OFFSET( 9677, glGetProgramStringARB, glGetProgramStringARB, NULL, 630),
    NAME_FUNC_OFFSET( 9699, glGetProgramivARB, glGetProgramivARB, NULL, 631),
    NAME_FUNC_OFFSET( 9717, glIsProgramARB, glIsProgramARB, NULL, 632),
    NAME_FUNC_OFFSET( 9732, glProgramEnvParameter4dARB, glProgramEnvParameter4dARB, NULL, 633),
    NAME_FUNC_OFFSET( 9759, glProgramEnvParameter4dvARB, glProgramEnvParameter4dvARB, NULL, 634),
    NAME_FUNC_OFFSET( 9787, glProgramEnvParameter4fARB, glProgramEnvParameter4fARB, NULL, 635),
    NAME_FUNC_OFFSET( 9814, glProgramEnvParameter4fvARB, glProgramEnvParameter4fvARB, NULL, 636),
    NAME_FUNC_OFFSET( 9842, glProgramLocalParameter4dARB, glProgramLocalParameter4dARB, NULL, 637),
    NAME_FUNC_OFFSET( 9871, glProgramLocalParameter4dvARB, glProgramLocalParameter4dvARB, NULL, 638),
    NAME_FUNC_OFFSET( 9901, glProgramLocalParameter4fARB, glProgramLocalParameter4fARB, NULL, 639),
    NAME_FUNC_OFFSET( 9930, glProgramLocalParameter4fvARB, glProgramLocalParameter4fvARB, NULL, 640),
    NAME_FUNC_OFFSET( 9960, glProgramStringARB, glProgramStringARB, NULL, 641),
    NAME_FUNC_OFFSET( 9979, glVertexAttrib1fARB, glVertexAttrib1fARB, NULL, 642),
    NAME_FUNC_OFFSET( 9999, glVertexAttrib1fvARB, glVertexAttrib1fvARB, NULL, 643),
    NAME_FUNC_OFFSET(10020, glVertexAttrib2fARB, glVertexAttrib2fARB, NULL, 644),
    NAME_FUNC_OFFSET(10040, glVertexAttrib2fvARB, glVertexAttrib2fvARB, NULL, 645),
    NAME_FUNC_OFFSET(10061, glVertexAttrib3fARB, glVertexAttrib3fARB, NULL, 646),
    NAME_FUNC_OFFSET(10081, glVertexAttrib3fvARB, glVertexAttrib3fvARB, NULL, 647),
    NAME_FUNC_OFFSET(10102, glVertexAttrib4fARB, glVertexAttrib4fARB, NULL, 648),
    NAME_FUNC_OFFSET(10122, glVertexAttrib4fvARB, glVertexAttrib4fvARB, NULL, 649),
    NAME_FUNC_OFFSET(10143, glAttachObjectARB, glAttachObjectARB, NULL, 650),
    NAME_FUNC_OFFSET(10161, glCreateProgramObjectARB, glCreateProgramObjectARB, NULL, 651),
    NAME_FUNC_OFFSET(10186, glCreateShaderObjectARB, glCreateShaderObjectARB, NULL, 652),
    NAME_FUNC_OFFSET(10210, glDeleteObjectARB, glDeleteObjectARB, NULL, 653),
    NAME_FUNC_OFFSET(10228, glDetachObjectARB, glDetachObjectARB, NULL, 654),
    NAME_FUNC_OFFSET(10246, glGetAttachedObjectsARB, glGetAttachedObjectsARB, NULL, 655),
    NAME_FUNC_OFFSET(10270, glGetHandleARB, glGetHandleARB, NULL, 656),
    NAME_FUNC_OFFSET(10285, glGetInfoLogARB, glGetInfoLogARB, NULL, 657),
    NAME_FUNC_OFFSET(10301, glGetObjectParameterfvARB, glGetObjectParameterfvARB, NULL, 658),
    NAME_FUNC_OFFSET(10327, glGetObjectParameterivARB, glGetObjectParameterivARB, NULL, 659),
    NAME_FUNC_OFFSET(10353, glDrawArraysInstancedARB, glDrawArraysInstancedARB, NULL, 660),
    NAME_FUNC_OFFSET(10378, glDrawElementsInstancedARB, glDrawElementsInstancedARB, NULL, 661),
    NAME_FUNC_OFFSET(10405, glBindFramebuffer, glBindFramebuffer, NULL, 662),
    NAME_FUNC_OFFSET(10423, glBindRenderbuffer, glBindRenderbuffer, NULL, 663),
    NAME_FUNC_OFFSET(10442, glBlitFramebuffer, glBlitFramebuffer, NULL, 664),
    NAME_FUNC_OFFSET(10460, glCheckFramebufferStatus, glCheckFramebufferStatus, NULL, 665),
    NAME_FUNC_OFFSET(10485, glDeleteFramebuffers, glDeleteFramebuffers, NULL, 666),
    NAME_FUNC_OFFSET(10506, glDeleteRenderbuffers, glDeleteRenderbuffers, NULL, 667),
    NAME_FUNC_OFFSET(10528, glFramebufferRenderbuffer, glFramebufferRenderbuffer, NULL, 668),
    NAME_FUNC_OFFSET(10554, glFramebufferTexture1D, glFramebufferTexture1D, NULL, 669),
    NAME_FUNC_OFFSET(10577, glFramebufferTexture2D, glFramebufferTexture2D, NULL, 670),
    NAME_FUNC_OFFSET(10600, glFramebufferTexture3D, glFramebufferTexture3D, NULL, 671),
    NAME_FUNC_OFFSET(10623, glFramebufferTextureLayer, glFramebufferTextureLayer, NULL, 672),
    NAME_FUNC_OFFSET(10649, glGenFramebuffers, glGenFramebuffers, NULL, 673),
    NAME_FUNC_OFFSET(10667, glGenRenderbuffers, glGenRenderbuffers, NULL, 674),
    NAME_FUNC_OFFSET(10686, glGenerateMipmap, glGenerateMipmap, NULL, 675),
    NAME_FUNC_OFFSET(10703, glGetFramebufferAttachmentParameteriv, glGetFramebufferAttachmentParameteriv, NULL, 676),
    NAME_FUNC_OFFSET(10741, glGetRenderbufferParameteriv, glGetRenderbufferParameteriv, NULL, 677),
    NAME_FUNC_OFFSET(10770, glIsFramebuffer, glIsFramebuffer, NULL, 678),
    NAME_FUNC_OFFSET(10786, glIsRenderbuffer, glIsRenderbuffer, NULL, 679),
    NAME_FUNC_OFFSET(10803, glRenderbufferStorage, glRenderbufferStorage, NULL, 680),
    NAME_FUNC_OFFSET(10825, glRenderbufferStorageMultisample, glRenderbufferStorageMultisample, NULL, 681),
    NAME_FUNC_OFFSET(10858, glFlushMappedBufferRange, glFlushMappedBufferRange, NULL, 682),
    NAME_FUNC_OFFSET(10883, glMapBufferRange, glMapBufferRange, NULL, 683),
    NAME_FUNC_OFFSET(10900, glBindVertexArray, glBindVertexArray, NULL, 684),
    NAME_FUNC_OFFSET(10918, glDeleteVertexArrays, glDeleteVertexArrays, NULL, 685),
    NAME_FUNC_OFFSET(10939, glGenVertexArrays, glGenVertexArrays, NULL, 686),
    NAME_FUNC_OFFSET(10957, glIsVertexArray, glIsVertexArray, NULL, 687),
    NAME_FUNC_OFFSET(10973, glGetActiveUniformBlockName, glGetActiveUniformBlockName, NULL, 688),
    NAME_FUNC_OFFSET(11001, glGetActiveUniformBlockiv, glGetActiveUniformBlockiv, NULL, 689),
    NAME_FUNC_OFFSET(11027, glGetActiveUniformName, glGetActiveUniformName, NULL, 690),
    NAME_FUNC_OFFSET(11050, glGetActiveUniformsiv, glGetActiveUniformsiv, NULL, 691),
    NAME_FUNC_OFFSET(11072, glGetUniformBlockIndex, glGetUniformBlockIndex, NULL, 692),
    NAME_FUNC_OFFSET(11095, glGetUniformIndices, glGetUniformIndices, NULL, 693),
    NAME_FUNC_OFFSET(11115, glUniformBlockBinding, glUniformBlockBinding, NULL, 694),
    NAME_FUNC_OFFSET(11137, glCopyBufferSubData, glCopyBufferSubData, NULL, 695),
    NAME_FUNC_OFFSET(11157, glClientWaitSync, glClientWaitSync, NULL, 696),
    NAME_FUNC_OFFSET(11174, glDeleteSync, glDeleteSync, NULL, 697),
    NAME_FUNC_OFFSET(11187, glFenceSync, glFenceSync, NULL, 698),
    NAME_FUNC_OFFSET(11199, glGetInteger64v, glGetInteger64v, NULL, 699),
    NAME_FUNC_OFFSET(11215, glGetSynciv, glGetSynciv, NULL, 700),
    NAME_FUNC_OFFSET(11227, glIsSync, glIsSync, NULL, 701),
    NAME_FUNC_OFFSET(11236, glWaitSync, glWaitSync, NULL, 702),
    NAME_FUNC_OFFSET(11247, glDrawElementsBaseVertex, glDrawElementsBaseVertex, NULL, 703),
    NAME_FUNC_OFFSET(11272, glDrawElementsInstancedBaseVertex, glDrawElementsInstancedBaseVertex, NULL, 704),
    NAME_FUNC_OFFSET(11306, glDrawRangeElementsBaseVertex, glDrawRangeElementsBaseVertex, NULL, 705),
    NAME_FUNC_OFFSET(11336, glMultiDrawElementsBaseVertex, glMultiDrawElementsBaseVertex, NULL, 706),
    NAME_FUNC_OFFSET(11366, glProvokingVertex, glProvokingVertex, NULL, 707),
    NAME_FUNC_OFFSET(11384, glGetMultisamplefv, glGetMultisamplefv, NULL, 708),
    NAME_FUNC_OFFSET(11403, glSampleMaski, glSampleMaski, NULL, 709),
    NAME_FUNC_OFFSET(11417, glTexImage2DMultisample, glTexImage2DMultisample, NULL, 710),
    NAME_FUNC_OFFSET(11441, glTexImage3DMultisample, glTexImage3DMultisample, NULL, 711),
    NAME_FUNC_OFFSET(11465, glBlendEquationSeparateiARB, glBlendEquationSeparateiARB, NULL, 712),
    NAME_FUNC_OFFSET(11493, glBlendEquationiARB, glBlendEquationiARB, NULL, 713),
    NAME_FUNC_OFFSET(11513, glBlendFuncSeparateiARB, glBlendFuncSeparateiARB, NULL, 714),
    NAME_FUNC_OFFSET(11537, glBlendFunciARB, glBlendFunciARB, NULL, 715),
    NAME_FUNC_OFFSET(11553, glBindFragDataLocationIndexed, glBindFragDataLocationIndexed, NULL, 716),
    NAME_FUNC_OFFSET(11583, glGetFragDataIndex, glGetFragDataIndex, NULL, 717),
    NAME_FUNC_OFFSET(11602, glBindSampler, glBindSampler, NULL, 718),
    NAME_FUNC_OFFSET(11616, glDeleteSamplers, glDeleteSamplers, NULL, 719),
    NAME_FUNC_OFFSET(11633, glGenSamplers, glGenSamplers, NULL, 720),
    NAME_FUNC_OFFSET(11647, glGetSamplerParameterIiv, glGetSamplerParameterIiv, NULL, 721),
    NAME_FUNC_OFFSET(11672, glGetSamplerParameterIuiv, glGetSamplerParameterIuiv, NULL, 722),
    NAME_FUNC_OFFSET(11698, glGetSamplerParameterfv, glGetSamplerParameterfv, NULL, 723),
    NAME_FUNC_OFFSET(11722, glGetSamplerParameteriv, glGetSamplerParameteriv, NULL, 724),
    NAME_FUNC_OFFSET(11746, glIsSampler, glIsSampler, NULL, 725),
    NAME_FUNC_OFFSET(11758, glSamplerParameterIiv, glSamplerParameterIiv, NULL, 726),
    NAME_FUNC_OFFSET(11780, glSamplerParameterIuiv, glSamplerParameterIuiv, NULL, 727),
    NAME_FUNC_OFFSET(11803, glSamplerParameterf, glSamplerParameterf, NULL, 728),
    NAME_FUNC_OFFSET(11823, glSamplerParameterfv, glSamplerParameterfv, NULL, 729),
    NAME_FUNC_OFFSET(11844, glSamplerParameteri, glSamplerParameteri, NULL, 730),
    NAME_FUNC_OFFSET(11864, glSamplerParameteriv, glSamplerParameteriv, NULL, 731),
    NAME_FUNC_OFFSET(11885, gl_dispatch_stub_732, gl_dispatch_stub_732, NULL, 732),
    NAME_FUNC_OFFSET(11906, gl_dispatch_stub_733, gl_dispatch_stub_733, NULL, 733),
    NAME_FUNC_OFFSET(11928, gl_dispatch_stub_734, gl_dispatch_stub_734, NULL, 734),
    NAME_FUNC_OFFSET(11943, glColorP3ui, glColorP3ui, NULL, 735),
    NAME_FUNC_OFFSET(11955, glColorP3uiv, glColorP3uiv, NULL, 736),
    NAME_FUNC_OFFSET(11968, glColorP4ui, glColorP4ui, NULL, 737),
    NAME_FUNC_OFFSET(11980, glColorP4uiv, glColorP4uiv, NULL, 738),
    NAME_FUNC_OFFSET(11993, glMultiTexCoordP1ui, glMultiTexCoordP1ui, NULL, 739),
    NAME_FUNC_OFFSET(12013, glMultiTexCoordP1uiv, glMultiTexCoordP1uiv, NULL, 740),
    NAME_FUNC_OFFSET(12034, glMultiTexCoordP2ui, glMultiTexCoordP2ui, NULL, 741),
    NAME_FUNC_OFFSET(12054, glMultiTexCoordP2uiv, glMultiTexCoordP2uiv, NULL, 742),
    NAME_FUNC_OFFSET(12075, glMultiTexCoordP3ui, glMultiTexCoordP3ui, NULL, 743),
    NAME_FUNC_OFFSET(12095, glMultiTexCoordP3uiv, glMultiTexCoordP3uiv, NULL, 744),
    NAME_FUNC_OFFSET(12116, glMultiTexCoordP4ui, glMultiTexCoordP4ui, NULL, 745),
    NAME_FUNC_OFFSET(12136, glMultiTexCoordP4uiv, glMultiTexCoordP4uiv, NULL, 746),
    NAME_FUNC_OFFSET(12157, glNormalP3ui, glNormalP3ui, NULL, 747),
    NAME_FUNC_OFFSET(12170, glNormalP3uiv, glNormalP3uiv, NULL, 748),
    NAME_FUNC_OFFSET(12184, glSecondaryColorP3ui, glSecondaryColorP3ui, NULL, 749),
    NAME_FUNC_OFFSET(12205, glSecondaryColorP3uiv, glSecondaryColorP3uiv, NULL, 750),
    NAME_FUNC_OFFSET(12227, glTexCoordP1ui, glTexCoordP1ui, NULL, 751),
    NAME_FUNC_OFFSET(12242, glTexCoordP1uiv, glTexCoordP1uiv, NULL, 752),
    NAME_FUNC_OFFSET(12258, glTexCoordP2ui, glTexCoordP2ui, NULL, 753),
    NAME_FUNC_OFFSET(12273, glTexCoordP2uiv, glTexCoordP2uiv, NULL, 754),
    NAME_FUNC_OFFSET(12289, glTexCoordP3ui, glTexCoordP3ui, NULL, 755),
    NAME_FUNC_OFFSET(12304, glTexCoordP3uiv, glTexCoordP3uiv, NULL, 756),
    NAME_FUNC_OFFSET(12320, glTexCoordP4ui, glTexCoordP4ui, NULL, 757),
    NAME_FUNC_OFFSET(12335, glTexCoordP4uiv, glTexCoordP4uiv, NULL, 758),
    NAME_FUNC_OFFSET(12351, glVertexAttribP1ui, glVertexAttribP1ui, NULL, 759),
    NAME_FUNC_OFFSET(12370, glVertexAttribP1uiv, glVertexAttribP1uiv, NULL, 760),
    NAME_FUNC_OFFSET(12390, glVertexAttribP2ui, glVertexAttribP2ui, NULL, 761),
    NAME_FUNC_OFFSET(12409, glVertexAttribP2uiv, glVertexAttribP2uiv, NULL, 762),
    NAME_FUNC_OFFSET(12429, glVertexAttribP3ui, glVertexAttribP3ui, NULL, 763),
    NAME_FUNC_OFFSET(12448, glVertexAttribP3uiv, glVertexAttribP3uiv, NULL, 764),
    NAME_FUNC_OFFSET(12468, glVertexAttribP4ui, glVertexAttribP4ui, NULL, 765),
    NAME_FUNC_OFFSET(12487, glVertexAttribP4uiv, glVertexAttribP4uiv, NULL, 766),
    NAME_FUNC_OFFSET(12507, glVertexP2ui, glVertexP2ui, NULL, 767),
    NAME_FUNC_OFFSET(12520, glVertexP2uiv, glVertexP2uiv, NULL, 768),
    NAME_FUNC_OFFSET(12534, glVertexP3ui, glVertexP3ui, NULL, 769),
    NAME_FUNC_OFFSET(12547, glVertexP3uiv, glVertexP3uiv, NULL, 770),
    NAME_FUNC_OFFSET(12561, glVertexP4ui, glVertexP4ui, NULL, 771),
    NAME_FUNC_OFFSET(12574, glVertexP4uiv, glVertexP4uiv, NULL, 772),
    NAME_FUNC_OFFSET(12588, glDrawArraysIndirect, glDrawArraysIndirect, NULL, 773),
    NAME_FUNC_OFFSET(12609, glDrawElementsIndirect, glDrawElementsIndirect, NULL, 774),
    NAME_FUNC_OFFSET(12632, gl_dispatch_stub_775, gl_dispatch_stub_775, NULL, 775),
    NAME_FUNC_OFFSET(12647, gl_dispatch_stub_776, gl_dispatch_stub_776, NULL, 776),
    NAME_FUNC_OFFSET(12659, gl_dispatch_stub_777, gl_dispatch_stub_777, NULL, 777),
    NAME_FUNC_OFFSET(12672, gl_dispatch_stub_778, gl_dispatch_stub_778, NULL, 778),
    NAME_FUNC_OFFSET(12684, gl_dispatch_stub_779, gl_dispatch_stub_779, NULL, 779),
    NAME_FUNC_OFFSET(12697, gl_dispatch_stub_780, gl_dispatch_stub_780, NULL, 780),
    NAME_FUNC_OFFSET(12709, gl_dispatch_stub_781, gl_dispatch_stub_781, NULL, 781),
    NAME_FUNC_OFFSET(12722, gl_dispatch_stub_782, gl_dispatch_stub_782, NULL, 782),
    NAME_FUNC_OFFSET(12734, gl_dispatch_stub_783, gl_dispatch_stub_783, NULL, 783),
    NAME_FUNC_OFFSET(12747, gl_dispatch_stub_784, gl_dispatch_stub_784, NULL, 784),
    NAME_FUNC_OFFSET(12766, gl_dispatch_stub_785, gl_dispatch_stub_785, NULL, 785),
    NAME_FUNC_OFFSET(12787, gl_dispatch_stub_786, gl_dispatch_stub_786, NULL, 786),
    NAME_FUNC_OFFSET(12808, gl_dispatch_stub_787, gl_dispatch_stub_787, NULL, 787),
    NAME_FUNC_OFFSET(12827, gl_dispatch_stub_788, gl_dispatch_stub_788, NULL, 788),
    NAME_FUNC_OFFSET(12848, gl_dispatch_stub_789, gl_dispatch_stub_789, NULL, 789),
    NAME_FUNC_OFFSET(12869, gl_dispatch_stub_790, gl_dispatch_stub_790, NULL, 790),
    NAME_FUNC_OFFSET(12888, gl_dispatch_stub_791, gl_dispatch_stub_791, NULL, 791),
    NAME_FUNC_OFFSET(12909, gl_dispatch_stub_792, gl_dispatch_stub_792, NULL, 792),
    NAME_FUNC_OFFSET(12930, gl_dispatch_stub_793, gl_dispatch_stub_793, NULL, 793),
    NAME_FUNC_OFFSET(12956, gl_dispatch_stub_794, gl_dispatch_stub_794, NULL, 794),
    NAME_FUNC_OFFSET(12989, gl_dispatch_stub_795, gl_dispatch_stub_795, NULL, 795),
    NAME_FUNC_OFFSET(13020, gl_dispatch_stub_796, gl_dispatch_stub_796, NULL, 796),
    NAME_FUNC_OFFSET(13040, gl_dispatch_stub_797, gl_dispatch_stub_797, NULL, 797),
    NAME_FUNC_OFFSET(13061, gl_dispatch_stub_798, gl_dispatch_stub_798, NULL, 798),
    NAME_FUNC_OFFSET(13092, gl_dispatch_stub_799, gl_dispatch_stub_799, NULL, 799),
    NAME_FUNC_OFFSET(13118, gl_dispatch_stub_800, gl_dispatch_stub_800, NULL, 800),
    NAME_FUNC_OFFSET(13142, gl_dispatch_stub_801, gl_dispatch_stub_801, NULL, 801),
    NAME_FUNC_OFFSET(13161, glPatchParameteri, glPatchParameteri, NULL, 802),
    NAME_FUNC_OFFSET(13179, glBindTransformFeedback, glBindTransformFeedback, NULL, 803),
    NAME_FUNC_OFFSET(13203, glDeleteTransformFeedbacks, glDeleteTransformFeedbacks, NULL, 804),
    NAME_FUNC_OFFSET(13230, glDrawTransformFeedback, glDrawTransformFeedback, NULL, 805),
    NAME_FUNC_OFFSET(13254, glGenTransformFeedbacks, glGenTransformFeedbacks, NULL, 806),
    NAME_FUNC_OFFSET(13278, glIsTransformFeedback, glIsTransformFeedback, NULL, 807),
    NAME_FUNC_OFFSET(13300, glPauseTransformFeedback, glPauseTransformFeedback, NULL, 808),
    NAME_FUNC_OFFSET(13325, glResumeTransformFeedback, glResumeTransformFeedback, NULL, 809),
    NAME_FUNC_OFFSET(13351, glBeginQueryIndexed, glBeginQueryIndexed, NULL, 810),
    NAME_FUNC_OFFSET(13371, glDrawTransformFeedbackStream, glDrawTransformFeedbackStream, NULL, 811),
    NAME_FUNC_OFFSET(13401, glEndQueryIndexed, glEndQueryIndexed, NULL, 812),
    NAME_FUNC_OFFSET(13419, glGetQueryIndexediv, glGetQueryIndexediv, NULL, 813),
    NAME_FUNC_OFFSET(13439, glClearDepthf, glClearDepthf, NULL, 814),
    NAME_FUNC_OFFSET(13453, glDepthRangef, glDepthRangef, NULL, 815),
    NAME_FUNC_OFFSET(13467, glGetShaderPrecisionFormat, glGetShaderPrecisionFormat, NULL, 816),
    NAME_FUNC_OFFSET(13494, glReleaseShaderCompiler, glReleaseShaderCompiler, NULL, 817),
    NAME_FUNC_OFFSET(13518, glShaderBinary, glShaderBinary, NULL, 818),
    NAME_FUNC_OFFSET(13533, glGetProgramBinary, glGetProgramBinary, NULL, 819),
    NAME_FUNC_OFFSET(13552, glProgramBinary, glProgramBinary, NULL, 820),
    NAME_FUNC_OFFSET(13568, glProgramParameteri, glProgramParameteri, NULL, 821),
    NAME_FUNC_OFFSET(13588, gl_dispatch_stub_822, gl_dispatch_stub_822, NULL, 822),
    NAME_FUNC_OFFSET(13609, gl_dispatch_stub_823, gl_dispatch_stub_823, NULL, 823),
    NAME_FUNC_OFFSET(13627, gl_dispatch_stub_824, gl_dispatch_stub_824, NULL, 824),
    NAME_FUNC_OFFSET(13646, gl_dispatch_stub_825, gl_dispatch_stub_825, NULL, 825),
    NAME_FUNC_OFFSET(13664, gl_dispatch_stub_826, gl_dispatch_stub_826, NULL, 826),
    NAME_FUNC_OFFSET(13683, gl_dispatch_stub_827, gl_dispatch_stub_827, NULL, 827),
    NAME_FUNC_OFFSET(13701, gl_dispatch_stub_828, gl_dispatch_stub_828, NULL, 828),
    NAME_FUNC_OFFSET(13720, gl_dispatch_stub_829, gl_dispatch_stub_829, NULL, 829),
    NAME_FUNC_OFFSET(13738, gl_dispatch_stub_830, gl_dispatch_stub_830, NULL, 830),
    NAME_FUNC_OFFSET(13757, gl_dispatch_stub_831, gl_dispatch_stub_831, NULL, 831),
    NAME_FUNC_OFFSET(13780, glDepthRangeArrayv, glDepthRangeArrayv, NULL, 832),
    NAME_FUNC_OFFSET(13799, glDepthRangeIndexed, glDepthRangeIndexed, NULL, 833),
    NAME_FUNC_OFFSET(13819, glGetDoublei_v, glGetDoublei_v, NULL, 834),
    NAME_FUNC_OFFSET(13834, glGetFloati_v, glGetFloati_v, NULL, 835),
    NAME_FUNC_OFFSET(13848, glScissorArrayv, glScissorArrayv, NULL, 836),
    NAME_FUNC_OFFSET(13864, glScissorIndexed, glScissorIndexed, NULL, 837),
    NAME_FUNC_OFFSET(13881, glScissorIndexedv, glScissorIndexedv, NULL, 838),
    NAME_FUNC_OFFSET(13899, glViewportArrayv, glViewportArrayv, NULL, 839),
    NAME_FUNC_OFFSET(13916, glViewportIndexedf, glViewportIndexedf, NULL, 840),
    NAME_FUNC_OFFSET(13935, glViewportIndexedfv, glViewportIndexedfv, NULL, 841),
    NAME_FUNC_OFFSET(13955, glGetGraphicsResetStatusARB, glGetGraphicsResetStatusARB, NULL, 842),
    NAME_FUNC_OFFSET(13983, glGetnColorTableARB, glGetnColorTableARB, NULL, 843),
    NAME_FUNC_OFFSET(14003, glGetnCompressedTexImageARB, glGetnCompressedTexImageARB, NULL, 844),
    NAME_FUNC_OFFSET(14031, glGetnConvolutionFilterARB, glGetnConvolutionFilterARB, NULL, 845),
    NAME_FUNC_OFFSET(14058, glGetnHistogramARB, glGetnHistogramARB, NULL, 846),
    NAME_FUNC_OFFSET(14077, glGetnMapdvARB, glGetnMapdvARB, NULL, 847),
    NAME_FUNC_OFFSET(14092, glGetnMapfvARB, glGetnMapfvARB, NULL, 848),
    NAME_FUNC_OFFSET(14107, glGetnMapivARB, glGetnMapivARB, NULL, 849),
    NAME_FUNC_OFFSET(14122, glGetnMinmaxARB, glGetnMinmaxARB, NULL, 850),
    NAME_FUNC_OFFSET(14138, glGetnPixelMapfvARB, glGetnPixelMapfvARB, NULL, 851),
    NAME_FUNC_OFFSET(14158, glGetnPixelMapuivARB, glGetnPixelMapuivARB, NULL, 852),
    NAME_FUNC_OFFSET(14179, glGetnPixelMapusvARB, glGetnPixelMapusvARB, NULL, 853),
    NAME_FUNC_OFFSET(14200, glGetnPolygonStippleARB, glGetnPolygonStippleARB, NULL, 854),
    NAME_FUNC_OFFSET(14224, glGetnSeparableFilterARB, glGetnSeparableFilterARB, NULL, 855),
    NAME_FUNC_OFFSET(14249, glGetnUniformdvARB, glGetnUniformdvARB, NULL, 856),
    NAME_FUNC_OFFSET(14268, glGetnUniformfvARB, glGetnUniformfvARB, NULL, 857),
    NAME_FUNC_OFFSET(14287, glGetnUniformivARB, glGetnUniformivARB, NULL, 858),
    NAME_FUNC_OFFSET(14306, glGetnUniformuivARB, glGetnUniformuivARB, NULL, 859),
    NAME_FUNC_OFFSET(14326, glReadnPixelsARB, glReadnPixelsARB, NULL, 860),
    NAME_FUNC_OFFSET(14343, glDrawArraysInstancedBaseInstance, glDrawArraysInstancedBaseInstance, NULL, 861),
    NAME_FUNC_OFFSET(14377, glDrawElementsInstancedBaseInstance, glDrawElementsInstancedBaseInstance, NULL, 862),
    NAME_FUNC_OFFSET(14413, glDrawElementsInstancedBaseVertexBaseInstance, glDrawElementsInstancedBaseVertexBaseInstance, NULL, 863),
    NAME_FUNC_OFFSET(14459, glDrawTransformFeedbackInstanced, glDrawTransformFeedbackInstanced, NULL, 864),
    NAME_FUNC_OFFSET(14492, glDrawTransformFeedbackStreamInstanced, glDrawTransformFeedbackStreamInstanced, NULL, 865),
    NAME_FUNC_OFFSET(14531, gl_dispatch_stub_866, gl_dispatch_stub_866, NULL, 866),
    NAME_FUNC_OFFSET(14553, glGetActiveAtomicCounterBufferiv, glGetActiveAtomicCounterBufferiv, NULL, 867),
    NAME_FUNC_OFFSET(14586, glBindImageTexture, glBindImageTexture, NULL, 868),
    NAME_FUNC_OFFSET(14605, glMemoryBarrier, glMemoryBarrier, NULL, 869),
    NAME_FUNC_OFFSET(14621, glTexStorage1D, glTexStorage1D, NULL, 870),
    NAME_FUNC_OFFSET(14636, glTexStorage2D, glTexStorage2D, NULL, 871),
    NAME_FUNC_OFFSET(14651, glTexStorage3D, glTexStorage3D, NULL, 872),
    NAME_FUNC_OFFSET(14666, glTextureStorage1DEXT, glTextureStorage1DEXT, NULL, 873),
    NAME_FUNC_OFFSET(14688, glTextureStorage2DEXT, glTextureStorage2DEXT, NULL, 874),
    NAME_FUNC_OFFSET(14710, glTextureStorage3DEXT, glTextureStorage3DEXT, NULL, 875),
    NAME_FUNC_OFFSET(14732, glClearBufferData, glClearBufferData, NULL, 876),
    NAME_FUNC_OFFSET(14750, glClearBufferSubData, glClearBufferSubData, NULL, 877),
    NAME_FUNC_OFFSET(14771, glDispatchCompute, glDispatchCompute, NULL, 878),
    NAME_FUNC_OFFSET(14789, glDispatchComputeIndirect, glDispatchComputeIndirect, NULL, 879),
    NAME_FUNC_OFFSET(14815, glCopyImageSubData, glCopyImageSubData, NULL, 880),
    NAME_FUNC_OFFSET(14834, glTextureView, glTextureView, NULL, 881),
    NAME_FUNC_OFFSET(14848, glBindVertexBuffer, glBindVertexBuffer, NULL, 882),
    NAME_FUNC_OFFSET(14867, glVertexAttribBinding, glVertexAttribBinding, NULL, 883),
    NAME_FUNC_OFFSET(14889, glVertexAttribFormat, glVertexAttribFormat, NULL, 884),
    NAME_FUNC_OFFSET(14910, glVertexAttribIFormat, glVertexAttribIFormat, NULL, 885),
    NAME_FUNC_OFFSET(14932, glVertexAttribLFormat, glVertexAttribLFormat, NULL, 886),
    NAME_FUNC_OFFSET(14954, glVertexBindingDivisor, glVertexBindingDivisor, NULL, 887),
    NAME_FUNC_OFFSET(14977, glFramebufferParameteri, glFramebufferParameteri, NULL, 888),
    NAME_FUNC_OFFSET(15001, glGetFramebufferParameteriv, glGetFramebufferParameteriv, NULL, 889),
    NAME_FUNC_OFFSET(15029, gl_dispatch_stub_890, gl_dispatch_stub_890, NULL, 890),
    NAME_FUNC_OFFSET(15053, glMultiDrawArraysIndirect, glMultiDrawArraysIndirect, NULL, 891),
    NAME_FUNC_OFFSET(15079, glMultiDrawElementsIndirect, glMultiDrawElementsIndirect, NULL, 892),
    NAME_FUNC_OFFSET(15107, glGetProgramInterfaceiv, glGetProgramInterfaceiv, NULL, 893),
    NAME_FUNC_OFFSET(15131, glGetProgramResourceIndex, glGetProgramResourceIndex, NULL, 894),
    NAME_FUNC_OFFSET(15157, glGetProgramResourceLocation, glGetProgramResourceLocation, NULL, 895),
    NAME_FUNC_OFFSET(15186, gl_dispatch_stub_896, gl_dispatch_stub_896, NULL, 896),
    NAME_FUNC_OFFSET(15220, glGetProgramResourceName, glGetProgramResourceName, NULL, 897),
    NAME_FUNC_OFFSET(15245, glGetProgramResourceiv, glGetProgramResourceiv, NULL, 898),
    NAME_FUNC_OFFSET(15268, gl_dispatch_stub_899, gl_dispatch_stub_899, NULL, 899),
    NAME_FUNC_OFFSET(15296, glTexBufferRange, glTexBufferRange, NULL, 900),
    NAME_FUNC_OFFSET(15313, glTexStorage2DMultisample, glTexStorage2DMultisample, NULL, 901),
    NAME_FUNC_OFFSET(15339, glTexStorage3DMultisample, glTexStorage3DMultisample, NULL, 902),
    NAME_FUNC_OFFSET(15365, glBufferStorage, glBufferStorage, NULL, 903),
    NAME_FUNC_OFFSET(15381, glClearTexImage, glClearTexImage, NULL, 904),
    NAME_FUNC_OFFSET(15397, glClearTexSubImage, glClearTexSubImage, NULL, 905),
    NAME_FUNC_OFFSET(15416, glBindBuffersBase, glBindBuffersBase, NULL, 906),
    NAME_FUNC_OFFSET(15434, glBindBuffersRange, glBindBuffersRange, NULL, 907),
    NAME_FUNC_OFFSET(15453, glBindImageTextures, glBindImageTextures, NULL, 908),
    NAME_FUNC_OFFSET(15473, glBindSamplers, glBindSamplers, NULL, 909),
    NAME_FUNC_OFFSET(15488, glBindTextures, glBindTextures, NULL, 910),
    NAME_FUNC_OFFSET(15503, glBindVertexBuffers, glBindVertexBuffers, NULL, 911),
    NAME_FUNC_OFFSET(15523, gl_dispatch_stub_912, gl_dispatch_stub_912, NULL, 912),
    NAME_FUNC_OFFSET(15543, gl_dispatch_stub_913, gl_dispatch_stub_913, NULL, 913),
    NAME_FUNC_OFFSET(15565, gl_dispatch_stub_914, gl_dispatch_stub_914, NULL, 914),
    NAME_FUNC_OFFSET(15594, gl_dispatch_stub_915, gl_dispatch_stub_915, NULL, 915),
    NAME_FUNC_OFFSET(15621, gl_dispatch_stub_916, gl_dispatch_stub_916, NULL, 916),
    NAME_FUNC_OFFSET(15648, gl_dispatch_stub_917, gl_dispatch_stub_917, NULL, 917),
    NAME_FUNC_OFFSET(15677, gl_dispatch_stub_918, gl_dispatch_stub_918, NULL, 918),
    NAME_FUNC_OFFSET(15709, gl_dispatch_stub_919, gl_dispatch_stub_919, NULL, 919),
    NAME_FUNC_OFFSET(15738, gl_dispatch_stub_920, gl_dispatch_stub_920, NULL, 920),
    NAME_FUNC_OFFSET(15772, gl_dispatch_stub_921, gl_dispatch_stub_921, NULL, 921),
    NAME_FUNC_OFFSET(15803, gl_dispatch_stub_922, gl_dispatch_stub_922, NULL, 922),
    NAME_FUNC_OFFSET(15833, gl_dispatch_stub_923, gl_dispatch_stub_923, NULL, 923),
    NAME_FUNC_OFFSET(15864, gl_dispatch_stub_924, gl_dispatch_stub_924, NULL, 924),
    NAME_FUNC_OFFSET(15887, gl_dispatch_stub_925, gl_dispatch_stub_925, NULL, 925),
    NAME_FUNC_OFFSET(15911, gl_dispatch_stub_926, gl_dispatch_stub_926, NULL, 926),
    NAME_FUNC_OFFSET(15935, gl_dispatch_stub_927, gl_dispatch_stub_927, NULL, 927),
    NAME_FUNC_OFFSET(15960, gl_dispatch_stub_928, gl_dispatch_stub_928, NULL, 928),
    NAME_FUNC_OFFSET(15990, gl_dispatch_stub_929, gl_dispatch_stub_929, NULL, 929),
    NAME_FUNC_OFFSET(16024, gl_dispatch_stub_930, gl_dispatch_stub_930, NULL, 930),
    NAME_FUNC_OFFSET(16060, gl_dispatch_stub_931, gl_dispatch_stub_931, NULL, 931),
    NAME_FUNC_OFFSET(16074, gl_dispatch_stub_932, gl_dispatch_stub_932, NULL, 932),
    NAME_FUNC_OFFSET(16092, gl_dispatch_stub_933, gl_dispatch_stub_933, NULL, 933),
    NAME_FUNC_OFFSET(16115, gl_dispatch_stub_934, gl_dispatch_stub_934, NULL, 934),
    NAME_FUNC_OFFSET(16145, gl_dispatch_stub_935, gl_dispatch_stub_935, NULL, 935),
    NAME_FUNC_OFFSET(16168, gl_dispatch_stub_936, gl_dispatch_stub_936, NULL, 936),
    NAME_FUNC_OFFSET(16194, gl_dispatch_stub_937, gl_dispatch_stub_937, NULL, 937),
    NAME_FUNC_OFFSET(16220, gl_dispatch_stub_938, gl_dispatch_stub_938, NULL, 938),
    NAME_FUNC_OFFSET(16246, gl_dispatch_stub_939, gl_dispatch_stub_939, NULL, 939),
    NAME_FUNC_OFFSET(16272, gl_dispatch_stub_940, gl_dispatch_stub_940, NULL, 940),
    NAME_FUNC_OFFSET(16299, gl_dispatch_stub_941, gl_dispatch_stub_941, NULL, 941),
    NAME_FUNC_OFFSET(16329, gl_dispatch_stub_942, gl_dispatch_stub_942, NULL, 942),
    NAME_FUNC_OFFSET(16359, gl_dispatch_stub_943, gl_dispatch_stub_943, NULL, 943),
    NAME_FUNC_OFFSET(16389, gl_dispatch_stub_944, gl_dispatch_stub_944, NULL, 944),
    NAME_FUNC_OFFSET(16414, gl_dispatch_stub_945, gl_dispatch_stub_945, NULL, 945),
    NAME_FUNC_OFFSET(16438, gl_dispatch_stub_946, gl_dispatch_stub_946, NULL, 946),
    NAME_FUNC_OFFSET(16462, gl_dispatch_stub_947, gl_dispatch_stub_947, NULL, 947),
    NAME_FUNC_OFFSET(16486, gl_dispatch_stub_948, gl_dispatch_stub_948, NULL, 948),
    NAME_FUNC_OFFSET(16502, gl_dispatch_stub_949, gl_dispatch_stub_949, NULL, 949),
    NAME_FUNC_OFFSET(16523, gl_dispatch_stub_950, gl_dispatch_stub_950, NULL, 950),
    NAME_FUNC_OFFSET(16548, gl_dispatch_stub_951, gl_dispatch_stub_951, NULL, 951),
    NAME_FUNC_OFFSET(16564, gl_dispatch_stub_952, gl_dispatch_stub_952, NULL, 952),
    NAME_FUNC_OFFSET(16586, gl_dispatch_stub_953, gl_dispatch_stub_953, NULL, 953),
    NAME_FUNC_OFFSET(16603, gl_dispatch_stub_954, gl_dispatch_stub_954, NULL, 954),
    NAME_FUNC_OFFSET(16620, gl_dispatch_stub_955, gl_dispatch_stub_955, NULL, 955),
    NAME_FUNC_OFFSET(16647, gl_dispatch_stub_956, gl_dispatch_stub_956, NULL, 956),
    NAME_FUNC_OFFSET(16668, gl_dispatch_stub_957, gl_dispatch_stub_957, NULL, 957),
    NAME_FUNC_OFFSET(16695, gl_dispatch_stub_958, gl_dispatch_stub_958, NULL, 958),
    NAME_FUNC_OFFSET(16721, gl_dispatch_stub_959, gl_dispatch_stub_959, NULL, 959),
    NAME_FUNC_OFFSET(16751, gl_dispatch_stub_960, gl_dispatch_stub_960, NULL, 960),
    NAME_FUNC_OFFSET(16775, gl_dispatch_stub_961, gl_dispatch_stub_961, NULL, 961),
    NAME_FUNC_OFFSET(16803, gl_dispatch_stub_962, gl_dispatch_stub_962, NULL, 962),
    NAME_FUNC_OFFSET(16833, gl_dispatch_stub_963, gl_dispatch_stub_963, NULL, 963),
    NAME_FUNC_OFFSET(16861, gl_dispatch_stub_964, gl_dispatch_stub_964, NULL, 964),
    NAME_FUNC_OFFSET(16886, gl_dispatch_stub_965, gl_dispatch_stub_965, NULL, 965),
    NAME_FUNC_OFFSET(16910, gl_dispatch_stub_966, gl_dispatch_stub_966, NULL, 966),
    NAME_FUNC_OFFSET(16953, gl_dispatch_stub_967, gl_dispatch_stub_967, NULL, 967),
    NAME_FUNC_OFFSET(16986, gl_dispatch_stub_968, gl_dispatch_stub_968, NULL, 968),
    NAME_FUNC_OFFSET(17020, gl_dispatch_stub_969, gl_dispatch_stub_969, NULL, 969),
    NAME_FUNC_OFFSET(17047, gl_dispatch_stub_970, gl_dispatch_stub_970, NULL, 970),
    NAME_FUNC_OFFSET(17072, gl_dispatch_stub_971, gl_dispatch_stub_971, NULL, 971),
    NAME_FUNC_OFFSET(17100, gl_dispatch_stub_972, gl_dispatch_stub_972, NULL, 972),
    NAME_FUNC_OFFSET(17126, gl_dispatch_stub_973, gl_dispatch_stub_973, NULL, 973),
    NAME_FUNC_OFFSET(17144, gl_dispatch_stub_974, gl_dispatch_stub_974, NULL, 974),
    NAME_FUNC_OFFSET(17173, gl_dispatch_stub_975, gl_dispatch_stub_975, NULL, 975),
    NAME_FUNC_OFFSET(17202, gl_dispatch_stub_976, gl_dispatch_stub_976, NULL, 976),
    NAME_FUNC_OFFSET(17227, gl_dispatch_stub_977, gl_dispatch_stub_977, NULL, 977),
    NAME_FUNC_OFFSET(17253, gl_dispatch_stub_978, gl_dispatch_stub_978, NULL, 978),
    NAME_FUNC_OFFSET(17277, gl_dispatch_stub_979, gl_dispatch_stub_979, NULL, 979),
    NAME_FUNC_OFFSET(17301, gl_dispatch_stub_980, gl_dispatch_stub_980, NULL, 980),
    NAME_FUNC_OFFSET(17329, gl_dispatch_stub_981, gl_dispatch_stub_981, NULL, 981),
    NAME_FUNC_OFFSET(17355, gl_dispatch_stub_982, gl_dispatch_stub_982, NULL, 982),
    NAME_FUNC_OFFSET(17380, gl_dispatch_stub_983, gl_dispatch_stub_983, NULL, 983),
    NAME_FUNC_OFFSET(17408, gl_dispatch_stub_984, gl_dispatch_stub_984, NULL, 984),
    NAME_FUNC_OFFSET(17434, gl_dispatch_stub_985, gl_dispatch_stub_985, NULL, 985),
    NAME_FUNC_OFFSET(17453, gl_dispatch_stub_986, gl_dispatch_stub_986, NULL, 986),
    NAME_FUNC_OFFSET(17486, gl_dispatch_stub_987, gl_dispatch_stub_987, NULL, 987),
    NAME_FUNC_OFFSET(17522, gl_dispatch_stub_988, gl_dispatch_stub_988, NULL, 988),
    NAME_FUNC_OFFSET(17539, gl_dispatch_stub_989, gl_dispatch_stub_989, NULL, 989),
    NAME_FUNC_OFFSET(17561, gl_dispatch_stub_990, gl_dispatch_stub_990, NULL, 990),
    NAME_FUNC_OFFSET(17579, gl_dispatch_stub_991, gl_dispatch_stub_991, NULL, 991),
    NAME_FUNC_OFFSET(17600, gl_dispatch_stub_992, gl_dispatch_stub_992, NULL, 992),
    NAME_FUNC_OFFSET(17621, gl_dispatch_stub_993, gl_dispatch_stub_993, NULL, 993),
    NAME_FUNC_OFFSET(17650, gl_dispatch_stub_994, gl_dispatch_stub_994, NULL, 994),
    NAME_FUNC_OFFSET(17680, gl_dispatch_stub_995, gl_dispatch_stub_995, NULL, 995),
    NAME_FUNC_OFFSET(17709, gl_dispatch_stub_996, gl_dispatch_stub_996, NULL, 996),
    NAME_FUNC_OFFSET(17738, gl_dispatch_stub_997, gl_dispatch_stub_997, NULL, 997),
    NAME_FUNC_OFFSET(17769, gl_dispatch_stub_998, gl_dispatch_stub_998, NULL, 998),
    NAME_FUNC_OFFSET(17795, gl_dispatch_stub_999, gl_dispatch_stub_999, NULL, 999),
    NAME_FUNC_OFFSET(17826, gl_dispatch_stub_1000, gl_dispatch_stub_1000, NULL, 1000),
    NAME_FUNC_OFFSET(17853, gl_dispatch_stub_1001, gl_dispatch_stub_1001, NULL, 1001),
    NAME_FUNC_OFFSET(17891, gl_dispatch_stub_1002, gl_dispatch_stub_1002, NULL, 1002),
    NAME_FUNC_OFFSET(17907, gl_dispatch_stub_1003, gl_dispatch_stub_1003, NULL, 1003),
    NAME_FUNC_OFFSET(17928, gl_dispatch_stub_1004, gl_dispatch_stub_1004, NULL, 1004),
    NAME_FUNC_OFFSET(17950, gl_dispatch_stub_1005, gl_dispatch_stub_1005, NULL, 1005),
    NAME_FUNC_OFFSET(17973, gl_dispatch_stub_1006, gl_dispatch_stub_1006, NULL, 1006),
    NAME_FUNC_OFFSET(17993, gl_dispatch_stub_1007, gl_dispatch_stub_1007, NULL, 1007),
    NAME_FUNC_OFFSET(18014, gl_dispatch_stub_1008, gl_dispatch_stub_1008, NULL, 1008),
    NAME_FUNC_OFFSET(18034, gl_dispatch_stub_1009, gl_dispatch_stub_1009, NULL, 1009),
    NAME_FUNC_OFFSET(18055, gl_dispatch_stub_1010, gl_dispatch_stub_1010, NULL, 1010),
    NAME_FUNC_OFFSET(18074, gl_dispatch_stub_1011, gl_dispatch_stub_1011, NULL, 1011),
    NAME_FUNC_OFFSET(18093, gl_dispatch_stub_1012, gl_dispatch_stub_1012, NULL, 1012),
    NAME_FUNC_OFFSET(18123, gl_dispatch_stub_1013, gl_dispatch_stub_1013, NULL, 1013),
    NAME_FUNC_OFFSET(18142, gl_dispatch_stub_1014, gl_dispatch_stub_1014, NULL, 1014),
    NAME_FUNC_OFFSET(18172, gl_dispatch_stub_1015, gl_dispatch_stub_1015, NULL, 1015),
    NAME_FUNC_OFFSET(18192, gl_dispatch_stub_1016, gl_dispatch_stub_1016, NULL, 1016),
    NAME_FUNC_OFFSET(18212, gl_dispatch_stub_1017, gl_dispatch_stub_1017, NULL, 1017),
    NAME_FUNC_OFFSET(18232, gl_dispatch_stub_1018, gl_dispatch_stub_1018, NULL, 1018),
    NAME_FUNC_OFFSET(18262, gl_dispatch_stub_1019, gl_dispatch_stub_1019, NULL, 1019),
    NAME_FUNC_OFFSET(18293, gl_dispatch_stub_1020, gl_dispatch_stub_1020, NULL, 1020),
    NAME_FUNC_OFFSET(18312, gl_dispatch_stub_1021, gl_dispatch_stub_1021, NULL, 1021),
    NAME_FUNC_OFFSET(18339, gl_dispatch_stub_1022, gl_dispatch_stub_1022, NULL, 1022),
    NAME_FUNC_OFFSET(18365, gl_dispatch_stub_1023, gl_dispatch_stub_1023, NULL, 1023),
    NAME_FUNC_OFFSET(18392, gl_dispatch_stub_1024, gl_dispatch_stub_1024, NULL, 1024),
    NAME_FUNC_OFFSET(18419, gl_dispatch_stub_1025, gl_dispatch_stub_1025, NULL, 1025),
    NAME_FUNC_OFFSET(18447, gl_dispatch_stub_1026, gl_dispatch_stub_1026, NULL, 1026),
    NAME_FUNC_OFFSET(18474, gl_dispatch_stub_1027, gl_dispatch_stub_1027, NULL, 1027),
    NAME_FUNC_OFFSET(18500, gl_dispatch_stub_1028, gl_dispatch_stub_1028, NULL, 1028),
    NAME_FUNC_OFFSET(18527, gl_dispatch_stub_1029, gl_dispatch_stub_1029, NULL, 1029),
    NAME_FUNC_OFFSET(18558, gl_dispatch_stub_1030, gl_dispatch_stub_1030, NULL, 1030),
    NAME_FUNC_OFFSET(18579, gl_dispatch_stub_1031, gl_dispatch_stub_1031, NULL, 1031),
    NAME_FUNC_OFFSET(18605, gl_dispatch_stub_1032, gl_dispatch_stub_1032, NULL, 1032),
    NAME_FUNC_OFFSET(18636, gl_dispatch_stub_1033, gl_dispatch_stub_1033, NULL, 1033),
    NAME_FUNC_OFFSET(18656, gl_dispatch_stub_1034, gl_dispatch_stub_1034, NULL, 1034),
    NAME_FUNC_OFFSET(18677, gl_dispatch_stub_1035, gl_dispatch_stub_1035, NULL, 1035),
    NAME_FUNC_OFFSET(18698, gl_dispatch_stub_1036, gl_dispatch_stub_1036, NULL, 1036),
    NAME_FUNC_OFFSET(18720, gl_dispatch_stub_1037, gl_dispatch_stub_1037, NULL, 1037),
    NAME_FUNC_OFFSET(18744, gl_dispatch_stub_1038, gl_dispatch_stub_1038, NULL, 1038),
    NAME_FUNC_OFFSET(18769, gl_dispatch_stub_1039, gl_dispatch_stub_1039, NULL, 1039),
    NAME_FUNC_OFFSET(18794, gl_dispatch_stub_1040, gl_dispatch_stub_1040, NULL, 1040),
    NAME_FUNC_OFFSET(18820, gl_dispatch_stub_1041, gl_dispatch_stub_1041, NULL, 1041),
    NAME_FUNC_OFFSET(18844, gl_dispatch_stub_1042, gl_dispatch_stub_1042, NULL, 1042),
    NAME_FUNC_OFFSET(18869, gl_dispatch_stub_1043, gl_dispatch_stub_1043, NULL, 1043),
    NAME_FUNC_OFFSET(18894, gl_dispatch_stub_1044, gl_dispatch_stub_1044, NULL, 1044),
    NAME_FUNC_OFFSET(18920, gl_dispatch_stub_1045, gl_dispatch_stub_1045, NULL, 1045),
    NAME_FUNC_OFFSET(18944, gl_dispatch_stub_1046, gl_dispatch_stub_1046, NULL, 1046),
    NAME_FUNC_OFFSET(18969, gl_dispatch_stub_1047, gl_dispatch_stub_1047, NULL, 1047),
    NAME_FUNC_OFFSET(18994, gl_dispatch_stub_1048, gl_dispatch_stub_1048, NULL, 1048),
    NAME_FUNC_OFFSET(19020, gl_dispatch_stub_1049, gl_dispatch_stub_1049, NULL, 1049),
    NAME_FUNC_OFFSET(19044, gl_dispatch_stub_1050, gl_dispatch_stub_1050, NULL, 1050),
    NAME_FUNC_OFFSET(19069, gl_dispatch_stub_1051, gl_dispatch_stub_1051, NULL, 1051),
    NAME_FUNC_OFFSET(19094, gl_dispatch_stub_1052, gl_dispatch_stub_1052, NULL, 1052),
    NAME_FUNC_OFFSET(19120, gl_dispatch_stub_1053, gl_dispatch_stub_1053, NULL, 1053),
    NAME_FUNC_OFFSET(19137, gl_dispatch_stub_1054, gl_dispatch_stub_1054, NULL, 1054),
    NAME_FUNC_OFFSET(19155, gl_dispatch_stub_1055, gl_dispatch_stub_1055, NULL, 1055),
    NAME_FUNC_OFFSET(19173, gl_dispatch_stub_1056, gl_dispatch_stub_1056, NULL, 1056),
    NAME_FUNC_OFFSET(19192, gl_dispatch_stub_1057, gl_dispatch_stub_1057, NULL, 1057),
    NAME_FUNC_OFFSET(19209, gl_dispatch_stub_1058, gl_dispatch_stub_1058, NULL, 1058),
    NAME_FUNC_OFFSET(19227, gl_dispatch_stub_1059, gl_dispatch_stub_1059, NULL, 1059),
    NAME_FUNC_OFFSET(19245, gl_dispatch_stub_1060, gl_dispatch_stub_1060, NULL, 1060),
    NAME_FUNC_OFFSET(19264, gl_dispatch_stub_1061, gl_dispatch_stub_1061, NULL, 1061),
    NAME_FUNC_OFFSET(19281, gl_dispatch_stub_1062, gl_dispatch_stub_1062, NULL, 1062),
    NAME_FUNC_OFFSET(19299, gl_dispatch_stub_1063, gl_dispatch_stub_1063, NULL, 1063),
    NAME_FUNC_OFFSET(19317, gl_dispatch_stub_1064, gl_dispatch_stub_1064, NULL, 1064),
    NAME_FUNC_OFFSET(19336, gl_dispatch_stub_1065, gl_dispatch_stub_1065, NULL, 1065),
    NAME_FUNC_OFFSET(19353, gl_dispatch_stub_1066, gl_dispatch_stub_1066, NULL, 1066),
    NAME_FUNC_OFFSET(19371, gl_dispatch_stub_1067, gl_dispatch_stub_1067, NULL, 1067),
    NAME_FUNC_OFFSET(19389, gl_dispatch_stub_1068, gl_dispatch_stub_1068, NULL, 1068),
    NAME_FUNC_OFFSET(19408, gl_dispatch_stub_1069, gl_dispatch_stub_1069, NULL, 1069),
    NAME_FUNC_OFFSET(19433, gl_dispatch_stub_1070, gl_dispatch_stub_1070, NULL, 1070),
    NAME_FUNC_OFFSET(19467, gl_dispatch_stub_1071, gl_dispatch_stub_1071, NULL, 1071),
    NAME_FUNC_OFFSET(19506, gl_dispatch_stub_1072, gl_dispatch_stub_1072, NULL, 1072),
    NAME_FUNC_OFFSET(19528, glInvalidateBufferData, glInvalidateBufferData, NULL, 1073),
    NAME_FUNC_OFFSET(19551, glInvalidateBufferSubData, glInvalidateBufferSubData, NULL, 1074),
    NAME_FUNC_OFFSET(19577, glInvalidateFramebuffer, glInvalidateFramebuffer, NULL, 1075),
    NAME_FUNC_OFFSET(19601, glInvalidateSubFramebuffer, glInvalidateSubFramebuffer, NULL, 1076),
    NAME_FUNC_OFFSET(19628, glInvalidateTexImage, glInvalidateTexImage, NULL, 1077),
    NAME_FUNC_OFFSET(19649, glInvalidateTexSubImage, glInvalidateTexSubImage, NULL, 1078),
    NAME_FUNC_OFFSET(19673, gl_dispatch_stub_1079, gl_dispatch_stub_1079, NULL, 1079),
    NAME_FUNC_OFFSET(19687, gl_dispatch_stub_1080, gl_dispatch_stub_1080, NULL, 1080),
    NAME_FUNC_OFFSET(19702, gl_dispatch_stub_1081, gl_dispatch_stub_1081, NULL, 1081),
    NAME_FUNC_OFFSET(19716, gl_dispatch_stub_1082, gl_dispatch_stub_1082, NULL, 1082),
    NAME_FUNC_OFFSET(19731, gl_dispatch_stub_1083, gl_dispatch_stub_1083, NULL, 1083),
    NAME_FUNC_OFFSET(19745, gl_dispatch_stub_1084, gl_dispatch_stub_1084, NULL, 1084),
    NAME_FUNC_OFFSET(19760, gl_dispatch_stub_1085, gl_dispatch_stub_1085, NULL, 1085),
    NAME_FUNC_OFFSET(19774, gl_dispatch_stub_1086, gl_dispatch_stub_1086, NULL, 1086),
    NAME_FUNC_OFFSET(19789, glPointSizePointerOES, glPointSizePointerOES, NULL, 1087),
    NAME_FUNC_OFFSET(19811, gl_dispatch_stub_1088, gl_dispatch_stub_1088, NULL, 1088),
    NAME_FUNC_OFFSET(19829, gl_dispatch_stub_1089, gl_dispatch_stub_1089, NULL, 1089),
    NAME_FUNC_OFFSET(19846, gl_dispatch_stub_1090, gl_dispatch_stub_1090, NULL, 1090),
    NAME_FUNC_OFFSET(19866, glColorPointerEXT, glColorPointerEXT, NULL, 1091),
    NAME_FUNC_OFFSET(19884, glEdgeFlagPointerEXT, glEdgeFlagPointerEXT, NULL, 1092),
    NAME_FUNC_OFFSET(19905, glIndexPointerEXT, glIndexPointerEXT, NULL, 1093),
    NAME_FUNC_OFFSET(19923, glNormalPointerEXT, glNormalPointerEXT, NULL, 1094),
    NAME_FUNC_OFFSET(19942, glTexCoordPointerEXT, glTexCoordPointerEXT, NULL, 1095),
    NAME_FUNC_OFFSET(19963, glVertexPointerEXT, glVertexPointerEXT, NULL, 1096),
    NAME_FUNC_OFFSET(19982, gl_dispatch_stub_1097, gl_dispatch_stub_1097, NULL, 1097),
    NAME_FUNC_OFFSET(20006, glActiveShaderProgram, glActiveShaderProgram, NULL, 1098),
    NAME_FUNC_OFFSET(20028, glBindProgramPipeline, glBindProgramPipeline, NULL, 1099),
    NAME_FUNC_OFFSET(20050, glCreateShaderProgramv, glCreateShaderProgramv, NULL, 1100),
    NAME_FUNC_OFFSET(20073, glDeleteProgramPipelines, glDeleteProgramPipelines, NULL, 1101),
    NAME_FUNC_OFFSET(20098, glGenProgramPipelines, glGenProgramPipelines, NULL, 1102),
    NAME_FUNC_OFFSET(20120, glGetProgramPipelineInfoLog, glGetProgramPipelineInfoLog, NULL, 1103),
    NAME_FUNC_OFFSET(20148, glGetProgramPipelineiv, glGetProgramPipelineiv, NULL, 1104),
    NAME_FUNC_OFFSET(20171, glIsProgramPipeline, glIsProgramPipeline, NULL, 1105),
    NAME_FUNC_OFFSET(20191, glLockArraysEXT, glLockArraysEXT, NULL, 1106),
    NAME_FUNC_OFFSET(20207, gl_dispatch_stub_1107, gl_dispatch_stub_1107, NULL, 1107),
    NAME_FUNC_OFFSET(20226, gl_dispatch_stub_1108, gl_dispatch_stub_1108, NULL, 1108),
    NAME_FUNC_OFFSET(20246, glProgramUniform1f, glProgramUniform1f, NULL, 1109),
    NAME_FUNC_OFFSET(20265, glProgramUniform1fv, glProgramUniform1fv, NULL, 1110),
    NAME_FUNC_OFFSET(20285, glProgramUniform1i, glProgramUniform1i, NULL, 1111),
    NAME_FUNC_OFFSET(20304, glProgramUniform1iv, glProgramUniform1iv, NULL, 1112),
    NAME_FUNC_OFFSET(20324, glProgramUniform1ui, glProgramUniform1ui, NULL, 1113),
    NAME_FUNC_OFFSET(20344, glProgramUniform1uiv, glProgramUniform1uiv, NULL, 1114),
    NAME_FUNC_OFFSET(20365, gl_dispatch_stub_1115, gl_dispatch_stub_1115, NULL, 1115),
    NAME_FUNC_OFFSET(20384, gl_dispatch_stub_1116, gl_dispatch_stub_1116, NULL, 1116),
    NAME_FUNC_OFFSET(20404, glProgramUniform2f, glProgramUniform2f, NULL, 1117),
    NAME_FUNC_OFFSET(20423, glProgramUniform2fv, glProgramUniform2fv, NULL, 1118),
    NAME_FUNC_OFFSET(20443, glProgramUniform2i, glProgramUniform2i, NULL, 1119),
    NAME_FUNC_OFFSET(20462, glProgramUniform2iv, glProgramUniform2iv, NULL, 1120),
    NAME_FUNC_OFFSET(20482, glProgramUniform2ui, glProgramUniform2ui, NULL, 1121),
    NAME_FUNC_OFFSET(20502, glProgramUniform2uiv, glProgramUniform2uiv, NULL, 1122),
    NAME_FUNC_OFFSET(20523, gl_dispatch_stub_1123, gl_dispatch_stub_1123, NULL, 1123),
    NAME_FUNC_OFFSET(20542, gl_dispatch_stub_1124, gl_dispatch_stub_1124, NULL, 1124),
    NAME_FUNC_OFFSET(20562, glProgramUniform3f, glProgramUniform3f, NULL, 1125),
    NAME_FUNC_OFFSET(20581, glProgramUniform3fv, glProgramUniform3fv, NULL, 1126),
    NAME_FUNC_OFFSET(20601, glProgramUniform3i, glProgramUniform3i, NULL, 1127),
    NAME_FUNC_OFFSET(20620, glProgramUniform3iv, glProgramUniform3iv, NULL, 1128),
    NAME_FUNC_OFFSET(20640, glProgramUniform3ui, glProgramUniform3ui, NULL, 1129),
    NAME_FUNC_OFFSET(20660, glProgramUniform3uiv, glProgramUniform3uiv, NULL, 1130),
    NAME_FUNC_OFFSET(20681, gl_dispatch_stub_1131, gl_dispatch_stub_1131, NULL, 1131),
    NAME_FUNC_OFFSET(20700, gl_dispatch_stub_1132, gl_dispatch_stub_1132, NULL, 1132),
    NAME_FUNC_OFFSET(20720, glProgramUniform4f, glProgramUniform4f, NULL, 1133),
    NAME_FUNC_OFFSET(20739, glProgramUniform4fv, glProgramUniform4fv, NULL, 1134),
    NAME_FUNC_OFFSET(20759, glProgramUniform4i, glProgramUniform4i, NULL, 1135),
    NAME_FUNC_OFFSET(20778, glProgramUniform4iv, glProgramUniform4iv, NULL, 1136),
    NAME_FUNC_OFFSET(20798, glProgramUniform4ui, glProgramUniform4ui, NULL, 1137),
    NAME_FUNC_OFFSET(20818, glProgramUniform4uiv, glProgramUniform4uiv, NULL, 1138),
    NAME_FUNC_OFFSET(20839, gl_dispatch_stub_1139, gl_dispatch_stub_1139, NULL, 1139),
    NAME_FUNC_OFFSET(20865, glProgramUniformMatrix2fv, glProgramUniformMatrix2fv, NULL, 1140),
    NAME_FUNC_OFFSET(20891, gl_dispatch_stub_1141, gl_dispatch_stub_1141, NULL, 1141),
    NAME_FUNC_OFFSET(20919, glProgramUniformMatrix2x3fv, glProgramUniformMatrix2x3fv, NULL, 1142),
    NAME_FUNC_OFFSET(20947, gl_dispatch_stub_1143, gl_dispatch_stub_1143, NULL, 1143),
    NAME_FUNC_OFFSET(20975, glProgramUniformMatrix2x4fv, glProgramUniformMatrix2x4fv, NULL, 1144),
    NAME_FUNC_OFFSET(21003, gl_dispatch_stub_1145, gl_dispatch_stub_1145, NULL, 1145),
    NAME_FUNC_OFFSET(21029, glProgramUniformMatrix3fv, glProgramUniformMatrix3fv, NULL, 1146),
    NAME_FUNC_OFFSET(21055, gl_dispatch_stub_1147, gl_dispatch_stub_1147, NULL, 1147),
    NAME_FUNC_OFFSET(21083, glProgramUniformMatrix3x2fv, glProgramUniformMatrix3x2fv, NULL, 1148),
    NAME_FUNC_OFFSET(21111, gl_dispatch_stub_1149, gl_dispatch_stub_1149, NULL, 1149),
    NAME_FUNC_OFFSET(21139, glProgramUniformMatrix3x4fv, glProgramUniformMatrix3x4fv, NULL, 1150),
    NAME_FUNC_OFFSET(21167, gl_dispatch_stub_1151, gl_dispatch_stub_1151, NULL, 1151),
    NAME_FUNC_OFFSET(21193, glProgramUniformMatrix4fv, glProgramUniformMatrix4fv, NULL, 1152),
    NAME_FUNC_OFFSET(21219, gl_dispatch_stub_1153, gl_dispatch_stub_1153, NULL, 1153),
    NAME_FUNC_OFFSET(21247, glProgramUniformMatrix4x2fv, glProgramUniformMatrix4x2fv, NULL, 1154),
    NAME_FUNC_OFFSET(21275, gl_dispatch_stub_1155, gl_dispatch_stub_1155, NULL, 1155),
    NAME_FUNC_OFFSET(21303, glProgramUniformMatrix4x3fv, glProgramUniformMatrix4x3fv, NULL, 1156),
    NAME_FUNC_OFFSET(21331, glUnlockArraysEXT, glUnlockArraysEXT, NULL, 1157),
    NAME_FUNC_OFFSET(21349, glUseProgramStages, glUseProgramStages, NULL, 1158),
    NAME_FUNC_OFFSET(21368, glValidateProgramPipeline, glValidateProgramPipeline, NULL, 1159),
    NAME_FUNC_OFFSET(21394, gl_dispatch_stub_1160, gl_dispatch_stub_1160, NULL, 1160),
    NAME_FUNC_OFFSET(21431, glDebugMessageCallback, glDebugMessageCallback, NULL, 1161),
    NAME_FUNC_OFFSET(21454, glDebugMessageControl, glDebugMessageControl, NULL, 1162),
    NAME_FUNC_OFFSET(21476, glDebugMessageInsert, glDebugMessageInsert, NULL, 1163),
    NAME_FUNC_OFFSET(21497, glGetDebugMessageLog, glGetDebugMessageLog, NULL, 1164),
    NAME_FUNC_OFFSET(21518, glGetObjectLabel, glGetObjectLabel, NULL, 1165),
    NAME_FUNC_OFFSET(21535, glGetObjectPtrLabel, glGetObjectPtrLabel, NULL, 1166),
    NAME_FUNC_OFFSET(21555, glObjectLabel, glObjectLabel, NULL, 1167),
    NAME_FUNC_OFFSET(21569, glObjectPtrLabel, glObjectPtrLabel, NULL, 1168),
    NAME_FUNC_OFFSET(21586, glPopDebugGroup, glPopDebugGroup, NULL, 1169),
    NAME_FUNC_OFFSET(21602, glPushDebugGroup, glPushDebugGroup, NULL, 1170),
    NAME_FUNC_OFFSET(21619, glSecondaryColor3fEXT, glSecondaryColor3fEXT, NULL, 1171),
    NAME_FUNC_OFFSET(21641, glSecondaryColor3fvEXT, glSecondaryColor3fvEXT, NULL, 1172),
    NAME_FUNC_OFFSET(21664, glMultiDrawElementsEXT, glMultiDrawElementsEXT, NULL, 1173),
    NAME_FUNC_OFFSET(21687, glFogCoordfEXT, glFogCoordfEXT, NULL, 1174),
    NAME_FUNC_OFFSET(21702, glFogCoordfvEXT, glFogCoordfvEXT, NULL, 1175),
    NAME_FUNC_OFFSET(21718, gl_dispatch_stub_1176, gl_dispatch_stub_1176, NULL, 1176),
    NAME_FUNC_OFFSET(21738, gl_dispatch_stub_1177, gl_dispatch_stub_1177, NULL, 1177),
    NAME_FUNC_OFFSET(21756, gl_dispatch_stub_1178, gl_dispatch_stub_1178, NULL, 1178),
    NAME_FUNC_OFFSET(21775, gl_dispatch_stub_1179, gl_dispatch_stub_1179, NULL, 1179),
    NAME_FUNC_OFFSET(21793, gl_dispatch_stub_1180, gl_dispatch_stub_1180, NULL, 1180),
    NAME_FUNC_OFFSET(21812, gl_dispatch_stub_1181, gl_dispatch_stub_1181, NULL, 1181),
    NAME_FUNC_OFFSET(21830, gl_dispatch_stub_1182, gl_dispatch_stub_1182, NULL, 1182),
    NAME_FUNC_OFFSET(21849, gl_dispatch_stub_1183, gl_dispatch_stub_1183, NULL, 1183),
    NAME_FUNC_OFFSET(21867, gl_dispatch_stub_1184, gl_dispatch_stub_1184, NULL, 1184),
    NAME_FUNC_OFFSET(21886, gl_dispatch_stub_1185, gl_dispatch_stub_1185, NULL, 1185),
    NAME_FUNC_OFFSET(21911, gl_dispatch_stub_1186, gl_dispatch_stub_1186, NULL, 1186),
    NAME_FUNC_OFFSET(21938, gl_dispatch_stub_1187, gl_dispatch_stub_1187, NULL, 1187),
    NAME_FUNC_OFFSET(21962, gl_dispatch_stub_1188, gl_dispatch_stub_1188, NULL, 1188),
    NAME_FUNC_OFFSET(21981, gl_dispatch_stub_1189, gl_dispatch_stub_1189, NULL, 1189),
    NAME_FUNC_OFFSET(22007, gl_dispatch_stub_1190, gl_dispatch_stub_1190, NULL, 1190),
    NAME_FUNC_OFFSET(22033, gl_dispatch_stub_1191, gl_dispatch_stub_1191, NULL, 1191),
    NAME_FUNC_OFFSET(22054, gl_dispatch_stub_1192, gl_dispatch_stub_1192, NULL, 1192),
    NAME_FUNC_OFFSET(22071, gl_dispatch_stub_1193, gl_dispatch_stub_1193, NULL, 1193),
    NAME_FUNC_OFFSET(22092, gl_dispatch_stub_1194, gl_dispatch_stub_1194, NULL, 1194),
    NAME_FUNC_OFFSET(22114, gl_dispatch_stub_1195, gl_dispatch_stub_1195, NULL, 1195),
    NAME_FUNC_OFFSET(22136, gl_dispatch_stub_1196, gl_dispatch_stub_1196, NULL, 1196),
    NAME_FUNC_OFFSET(22158, gl_dispatch_stub_1197, gl_dispatch_stub_1197, NULL, 1197),
    NAME_FUNC_OFFSET(22174, gl_dispatch_stub_1198, gl_dispatch_stub_1198, NULL, 1198),
    NAME_FUNC_OFFSET(22199, gl_dispatch_stub_1199, gl_dispatch_stub_1199, NULL, 1199),
    NAME_FUNC_OFFSET(22224, gl_dispatch_stub_1200, gl_dispatch_stub_1200, NULL, 1200),
    NAME_FUNC_OFFSET(22252, gl_dispatch_stub_1201, gl_dispatch_stub_1201, NULL, 1201),
    NAME_FUNC_OFFSET(22268, gl_dispatch_stub_1202, gl_dispatch_stub_1202, NULL, 1202),
    NAME_FUNC_OFFSET(22287, gl_dispatch_stub_1203, gl_dispatch_stub_1203, NULL, 1203),
    NAME_FUNC_OFFSET(22307, gl_dispatch_stub_1204, gl_dispatch_stub_1204, NULL, 1204),
    NAME_FUNC_OFFSET(22326, gl_dispatch_stub_1205, gl_dispatch_stub_1205, NULL, 1205),
    NAME_FUNC_OFFSET(22346, gl_dispatch_stub_1206, gl_dispatch_stub_1206, NULL, 1206),
    NAME_FUNC_OFFSET(22365, gl_dispatch_stub_1207, gl_dispatch_stub_1207, NULL, 1207),
    NAME_FUNC_OFFSET(22385, gl_dispatch_stub_1208, gl_dispatch_stub_1208, NULL, 1208),
    NAME_FUNC_OFFSET(22404, gl_dispatch_stub_1209, gl_dispatch_stub_1209, NULL, 1209),
    NAME_FUNC_OFFSET(22424, gl_dispatch_stub_1210, gl_dispatch_stub_1210, NULL, 1210),
    NAME_FUNC_OFFSET(22443, gl_dispatch_stub_1211, gl_dispatch_stub_1211, NULL, 1211),
    NAME_FUNC_OFFSET(22463, gl_dispatch_stub_1212, gl_dispatch_stub_1212, NULL, 1212),
    NAME_FUNC_OFFSET(22482, gl_dispatch_stub_1213, gl_dispatch_stub_1213, NULL, 1213),
    NAME_FUNC_OFFSET(22502, gl_dispatch_stub_1214, gl_dispatch_stub_1214, NULL, 1214),
    NAME_FUNC_OFFSET(22521, gl_dispatch_stub_1215, gl_dispatch_stub_1215, NULL, 1215),
    NAME_FUNC_OFFSET(22541, gl_dispatch_stub_1216, gl_dispatch_stub_1216, NULL, 1216),
    NAME_FUNC_OFFSET(22560, gl_dispatch_stub_1217, gl_dispatch_stub_1217, NULL, 1217),
    NAME_FUNC_OFFSET(22580, gl_dispatch_stub_1218, gl_dispatch_stub_1218, NULL, 1218),
    NAME_FUNC_OFFSET(22599, gl_dispatch_stub_1219, gl_dispatch_stub_1219, NULL, 1219),
    NAME_FUNC_OFFSET(22619, gl_dispatch_stub_1220, gl_dispatch_stub_1220, NULL, 1220),
    NAME_FUNC_OFFSET(22638, gl_dispatch_stub_1221, gl_dispatch_stub_1221, NULL, 1221),
    NAME_FUNC_OFFSET(22658, gl_dispatch_stub_1222, gl_dispatch_stub_1222, NULL, 1222),
    NAME_FUNC_OFFSET(22677, gl_dispatch_stub_1223, gl_dispatch_stub_1223, NULL, 1223),
    NAME_FUNC_OFFSET(22697, gl_dispatch_stub_1224, gl_dispatch_stub_1224, NULL, 1224),
    NAME_FUNC_OFFSET(22716, gl_dispatch_stub_1225, gl_dispatch_stub_1225, NULL, 1225),
    NAME_FUNC_OFFSET(22736, gl_dispatch_stub_1226, gl_dispatch_stub_1226, NULL, 1226),
    NAME_FUNC_OFFSET(22756, gl_dispatch_stub_1227, gl_dispatch_stub_1227, NULL, 1227),
    NAME_FUNC_OFFSET(22777, gl_dispatch_stub_1228, gl_dispatch_stub_1228, NULL, 1228),
    NAME_FUNC_OFFSET(22801, gl_dispatch_stub_1229, gl_dispatch_stub_1229, NULL, 1229),
    NAME_FUNC_OFFSET(22822, gl_dispatch_stub_1230, gl_dispatch_stub_1230, NULL, 1230),
    NAME_FUNC_OFFSET(22843, gl_dispatch_stub_1231, gl_dispatch_stub_1231, NULL, 1231),
    NAME_FUNC_OFFSET(22864, gl_dispatch_stub_1232, gl_dispatch_stub_1232, NULL, 1232),
    NAME_FUNC_OFFSET(22885, gl_dispatch_stub_1233, gl_dispatch_stub_1233, NULL, 1233),
    NAME_FUNC_OFFSET(22906, gl_dispatch_stub_1234, gl_dispatch_stub_1234, NULL, 1234),
    NAME_FUNC_OFFSET(22927, gl_dispatch_stub_1235, gl_dispatch_stub_1235, NULL, 1235),
    NAME_FUNC_OFFSET(22948, gl_dispatch_stub_1236, gl_dispatch_stub_1236, NULL, 1236),
    NAME_FUNC_OFFSET(22969, gl_dispatch_stub_1237, gl_dispatch_stub_1237, NULL, 1237),
    NAME_FUNC_OFFSET(22990, gl_dispatch_stub_1238, gl_dispatch_stub_1238, NULL, 1238),
    NAME_FUNC_OFFSET(23011, gl_dispatch_stub_1239, gl_dispatch_stub_1239, NULL, 1239),
    NAME_FUNC_OFFSET(23032, gl_dispatch_stub_1240, gl_dispatch_stub_1240, NULL, 1240),
    NAME_FUNC_OFFSET(23053, gl_dispatch_stub_1241, gl_dispatch_stub_1241, NULL, 1241),
    NAME_FUNC_OFFSET(23075, gl_dispatch_stub_1242, gl_dispatch_stub_1242, NULL, 1242),
    NAME_FUNC_OFFSET(23102, gl_dispatch_stub_1243, gl_dispatch_stub_1243, NULL, 1243),
    NAME_FUNC_OFFSET(23129, gl_dispatch_stub_1244, gl_dispatch_stub_1244, NULL, 1244),
    NAME_FUNC_OFFSET(23153, gl_dispatch_stub_1245, gl_dispatch_stub_1245, NULL, 1245),
    NAME_FUNC_OFFSET(23177, gl_dispatch_stub_1246, gl_dispatch_stub_1246, NULL, 1246),
    NAME_FUNC_OFFSET(23199, gl_dispatch_stub_1247, gl_dispatch_stub_1247, NULL, 1247),
    NAME_FUNC_OFFSET(23221, gl_dispatch_stub_1248, gl_dispatch_stub_1248, NULL, 1248),
    NAME_FUNC_OFFSET(23243, gl_dispatch_stub_1249, gl_dispatch_stub_1249, NULL, 1249),
    NAME_FUNC_OFFSET(23268, gl_dispatch_stub_1250, gl_dispatch_stub_1250, NULL, 1250),
    NAME_FUNC_OFFSET(23292, gl_dispatch_stub_1251, gl_dispatch_stub_1251, NULL, 1251),
    NAME_FUNC_OFFSET(23314, gl_dispatch_stub_1252, gl_dispatch_stub_1252, NULL, 1252),
    NAME_FUNC_OFFSET(23336, gl_dispatch_stub_1253, gl_dispatch_stub_1253, NULL, 1253),
    NAME_FUNC_OFFSET(23358, gl_dispatch_stub_1254, gl_dispatch_stub_1254, NULL, 1254),
    NAME_FUNC_OFFSET(23384, gl_dispatch_stub_1255, gl_dispatch_stub_1255, NULL, 1255),
    NAME_FUNC_OFFSET(23407, gl_dispatch_stub_1256, gl_dispatch_stub_1256, NULL, 1256),
    NAME_FUNC_OFFSET(23431, gl_dispatch_stub_1257, gl_dispatch_stub_1257, NULL, 1257),
    NAME_FUNC_OFFSET(23449, gl_dispatch_stub_1258, gl_dispatch_stub_1258, NULL, 1258),
    NAME_FUNC_OFFSET(23464, gl_dispatch_stub_1259, gl_dispatch_stub_1259, NULL, 1259),
    NAME_FUNC_OFFSET(23495, gl_dispatch_stub_1260, gl_dispatch_stub_1260, NULL, 1260),
    NAME_FUNC_OFFSET(23518, gl_dispatch_stub_1261, gl_dispatch_stub_1261, NULL, 1261),
    NAME_FUNC_OFFSET(23542, gl_dispatch_stub_1262, gl_dispatch_stub_1262, NULL, 1262),
    NAME_FUNC_OFFSET(23565, gl_dispatch_stub_1263, gl_dispatch_stub_1263, NULL, 1263),
    NAME_FUNC_OFFSET(23596, gl_dispatch_stub_1264, gl_dispatch_stub_1264, NULL, 1264),
    NAME_FUNC_OFFSET(23627, gl_dispatch_stub_1265, gl_dispatch_stub_1265, NULL, 1265),
    NAME_FUNC_OFFSET(23655, gl_dispatch_stub_1266, gl_dispatch_stub_1266, NULL, 1266),
    NAME_FUNC_OFFSET(23684, gl_dispatch_stub_1267, gl_dispatch_stub_1267, NULL, 1267),
    NAME_FUNC_OFFSET(23712, gl_dispatch_stub_1268, gl_dispatch_stub_1268, NULL, 1268),
    NAME_FUNC_OFFSET(23741, glPrimitiveRestartNV, glPrimitiveRestartNV, NULL, 1269),
    NAME_FUNC_OFFSET(23762, gl_dispatch_stub_1270, gl_dispatch_stub_1270, NULL, 1270),
    NAME_FUNC_OFFSET(23779, gl_dispatch_stub_1271, gl_dispatch_stub_1271, NULL, 1271),
    NAME_FUNC_OFFSET(23792, gl_dispatch_stub_1272, gl_dispatch_stub_1272, NULL, 1272),
    NAME_FUNC_OFFSET(23806, gl_dispatch_stub_1273, gl_dispatch_stub_1273, NULL, 1273),
    NAME_FUNC_OFFSET(23823, glBindFramebufferEXT, glBindFramebufferEXT, NULL, 1274),
    NAME_FUNC_OFFSET(23844, glBindRenderbufferEXT, glBindRenderbufferEXT, NULL, 1275),
    NAME_FUNC_OFFSET(23866, gl_dispatch_stub_1276, gl_dispatch_stub_1276, NULL, 1276),
    NAME_FUNC_OFFSET(23888, gl_dispatch_stub_1277, gl_dispatch_stub_1277, NULL, 1277),
    NAME_FUNC_OFFSET(23912, gl_dispatch_stub_1278, gl_dispatch_stub_1278, NULL, 1278),
    NAME_FUNC_OFFSET(23942, glVertexAttribI1iEXT, glVertexAttribI1iEXT, NULL, 1279),
    NAME_FUNC_OFFSET(23963, glVertexAttribI1uiEXT, glVertexAttribI1uiEXT, NULL, 1280),
    NAME_FUNC_OFFSET(23985, glVertexAttribI2iEXT, glVertexAttribI2iEXT, NULL, 1281),
    NAME_FUNC_OFFSET(24006, glVertexAttribI2ivEXT, glVertexAttribI2ivEXT, NULL, 1282),
    NAME_FUNC_OFFSET(24028, glVertexAttribI2uiEXT, glVertexAttribI2uiEXT, NULL, 1283),
    NAME_FUNC_OFFSET(24050, glVertexAttribI2uivEXT, glVertexAttribI2uivEXT, NULL, 1284),
    NAME_FUNC_OFFSET(24073, glVertexAttribI3iEXT, glVertexAttribI3iEXT, NULL, 1285),
    NAME_FUNC_OFFSET(24094, glVertexAttribI3ivEXT, glVertexAttribI3ivEXT, NULL, 1286),
    NAME_FUNC_OFFSET(24116, glVertexAttribI3uiEXT, glVertexAttribI3uiEXT, NULL, 1287),
    NAME_FUNC_OFFSET(24138, glVertexAttribI3uivEXT, glVertexAttribI3uivEXT, NULL, 1288),
    NAME_FUNC_OFFSET(24161, glVertexAttribI4iEXT, glVertexAttribI4iEXT, NULL, 1289),
    NAME_FUNC_OFFSET(24182, glVertexAttribI4ivEXT, glVertexAttribI4ivEXT, NULL, 1290),
    NAME_FUNC_OFFSET(24204, glVertexAttribI4uiEXT, glVertexAttribI4uiEXT, NULL, 1291),
    NAME_FUNC_OFFSET(24226, glVertexAttribI4uivEXT, glVertexAttribI4uivEXT, NULL, 1292),
    NAME_FUNC_OFFSET(24249, glClearColorIiEXT, glClearColorIiEXT, NULL, 1293),
    NAME_FUNC_OFFSET(24267, glClearColorIuiEXT, glClearColorIuiEXT, NULL, 1294),
    NAME_FUNC_OFFSET(24286, gl_dispatch_stub_1295, gl_dispatch_stub_1295, NULL, 1295),
    NAME_FUNC_OFFSET(24308, gl_dispatch_stub_1296, gl_dispatch_stub_1296, NULL, 1296),
    NAME_FUNC_OFFSET(24330, gl_dispatch_stub_1297, gl_dispatch_stub_1297, NULL, 1297),
    NAME_FUNC_OFFSET(24354, gl_dispatch_stub_1298, gl_dispatch_stub_1298, NULL, 1298),
    NAME_FUNC_OFFSET(24374, gl_dispatch_stub_1299, gl_dispatch_stub_1299, NULL, 1299),
    NAME_FUNC_OFFSET(24395, gl_dispatch_stub_1300, gl_dispatch_stub_1300, NULL, 1300),
    NAME_FUNC_OFFSET(24426, gl_dispatch_stub_1301, gl_dispatch_stub_1301, NULL, 1301),
    NAME_FUNC_OFFSET(24457, gl_dispatch_stub_1302, gl_dispatch_stub_1302, NULL, 1302),
    NAME_FUNC_OFFSET(24490, gl_dispatch_stub_1303, gl_dispatch_stub_1303, NULL, 1303),
    NAME_FUNC_OFFSET(24518, gl_dispatch_stub_1304, gl_dispatch_stub_1304, NULL, 1304),
    NAME_FUNC_OFFSET(24549, gl_dispatch_stub_1305, gl_dispatch_stub_1305, NULL, 1305),
    NAME_FUNC_OFFSET(24575, gl_dispatch_stub_1306, gl_dispatch_stub_1306, NULL, 1306),
    NAME_FUNC_OFFSET(24606, gl_dispatch_stub_1307, gl_dispatch_stub_1307, NULL, 1307),
    NAME_FUNC_OFFSET(24634, gl_dispatch_stub_1308, gl_dispatch_stub_1308, NULL, 1308),
    NAME_FUNC_OFFSET(24657, gl_dispatch_stub_1309, gl_dispatch_stub_1309, NULL, 1309),
    NAME_FUNC_OFFSET(24682, gl_dispatch_stub_1310, gl_dispatch_stub_1310, NULL, 1310),
    NAME_FUNC_OFFSET(24701, gl_dispatch_stub_1311, gl_dispatch_stub_1311, NULL, 1311),
    NAME_FUNC_OFFSET(24726, gl_dispatch_stub_1312, gl_dispatch_stub_1312, NULL, 1312),
    NAME_FUNC_OFFSET(24748, glTextureBarrierNV, glTextureBarrierNV, NULL, 1313),
    NAME_FUNC_OFFSET(24767, gl_dispatch_stub_1314, gl_dispatch_stub_1314, NULL, 1314),
    NAME_FUNC_OFFSET(24781, gl_dispatch_stub_1315, gl_dispatch_stub_1315, NULL, 1315),
    NAME_FUNC_OFFSET(24803, gl_dispatch_stub_1316, gl_dispatch_stub_1316, NULL, 1316),
    NAME_FUNC_OFFSET(24817, gl_dispatch_stub_1317, gl_dispatch_stub_1317, NULL, 1317),
    NAME_FUNC_OFFSET(24836, gl_dispatch_stub_1318, gl_dispatch_stub_1318, NULL, 1318),
    NAME_FUNC_OFFSET(24857, gl_dispatch_stub_1319, gl_dispatch_stub_1319, NULL, 1319),
    NAME_FUNC_OFFSET(24888, gl_dispatch_stub_1320, gl_dispatch_stub_1320, NULL, 1320),
    NAME_FUNC_OFFSET(24918, gl_dispatch_stub_1321, gl_dispatch_stub_1321, NULL, 1321),
    NAME_FUNC_OFFSET(24941, gl_dispatch_stub_1322, gl_dispatch_stub_1322, NULL, 1322),
    NAME_FUNC_OFFSET(24964, gl_dispatch_stub_1323, gl_dispatch_stub_1323, NULL, 1323),
    NAME_FUNC_OFFSET(24991, gl_dispatch_stub_1324, gl_dispatch_stub_1324, NULL, 1324),
    NAME_FUNC_OFFSET(25013, gl_dispatch_stub_1325, gl_dispatch_stub_1325, NULL, 1325),
    NAME_FUNC_OFFSET(25036, gl_dispatch_stub_1326, gl_dispatch_stub_1326, NULL, 1326),
    NAME_FUNC_OFFSET(25059, gl_dispatch_stub_1327, gl_dispatch_stub_1327, NULL, 1327),
    NAME_FUNC_OFFSET(25079, gl_dispatch_stub_1328, gl_dispatch_stub_1328, NULL, 1328),
    NAME_FUNC_OFFSET(25106, gl_dispatch_stub_1329, gl_dispatch_stub_1329, NULL, 1329),
    NAME_FUNC_OFFSET(25132, gl_dispatch_stub_1330, gl_dispatch_stub_1330, NULL, 1330),
    NAME_FUNC_OFFSET(25158, gl_dispatch_stub_1331, gl_dispatch_stub_1331, NULL, 1331),
    NAME_FUNC_OFFSET(25182, gl_dispatch_stub_1332, gl_dispatch_stub_1332, NULL, 1332),
    NAME_FUNC_OFFSET(25210, gl_dispatch_stub_1333, gl_dispatch_stub_1333, NULL, 1333),
    NAME_FUNC_OFFSET(25234, gl_dispatch_stub_1334, gl_dispatch_stub_1334, NULL, 1334),
    NAME_FUNC_OFFSET(25258, gl_dispatch_stub_1335, gl_dispatch_stub_1335, NULL, 1335),
    NAME_FUNC_OFFSET(25284, gl_dispatch_stub_1336, gl_dispatch_stub_1336, NULL, 1336),
    NAME_FUNC_OFFSET(25317, gl_dispatch_stub_1337, gl_dispatch_stub_1337, NULL, 1337),
    NAME_FUNC_OFFSET(25350, gl_dispatch_stub_1338, gl_dispatch_stub_1338, NULL, 1338),
    NAME_FUNC_OFFSET(25372, gl_dispatch_stub_1339, gl_dispatch_stub_1339, NULL, 1339),
    NAME_FUNC_OFFSET(25394, gl_dispatch_stub_1340, gl_dispatch_stub_1340, NULL, 1340),
    NAME_FUNC_OFFSET(25419, gl_dispatch_stub_1341, gl_dispatch_stub_1341, NULL, 1341),
    NAME_FUNC_OFFSET(25444, gl_dispatch_stub_1342, gl_dispatch_stub_1342, NULL, 1342),
    NAME_FUNC_OFFSET(25466, gl_dispatch_stub_1343, gl_dispatch_stub_1343, NULL, 1343),
    NAME_FUNC_OFFSET(25485, gl_dispatch_stub_1344, gl_dispatch_stub_1344, NULL, 1344),
    NAME_FUNC_OFFSET(25517, gl_dispatch_stub_1345, gl_dispatch_stub_1345, NULL, 1345),
    NAME_FUNC_OFFSET(25549, gl_dispatch_stub_1346, gl_dispatch_stub_1346, NULL, 1346),
    NAME_FUNC_OFFSET(25573, gl_dispatch_stub_1347, gl_dispatch_stub_1347, NULL, 1347),
    NAME_FUNC_OFFSET(25595, gl_dispatch_stub_1348, gl_dispatch_stub_1348, NULL, 1348),
    NAME_FUNC_OFFSET(25615, gl_dispatch_stub_1349, gl_dispatch_stub_1349, NULL, 1349),
    NAME_FUNC_OFFSET(25632, gl_dispatch_stub_1350, gl_dispatch_stub_1350, NULL, 1350),
    NAME_FUNC_OFFSET(25661, gl_dispatch_stub_1351, gl_dispatch_stub_1351, NULL, 1351),
    NAME_FUNC_OFFSET(25688, gl_dispatch_stub_1352, gl_dispatch_stub_1352, NULL, 1352),
    NAME_FUNC_OFFSET(25717, gl_dispatch_stub_1353, gl_dispatch_stub_1353, NULL, 1353),
    NAME_FUNC_OFFSET(25738, gl_dispatch_stub_1354, gl_dispatch_stub_1354, NULL, 1354),
    NAME_FUNC_OFFSET(25759, gl_dispatch_stub_1355, gl_dispatch_stub_1355, NULL, 1355),
    NAME_FUNC_OFFSET(25780, gl_dispatch_stub_1356, gl_dispatch_stub_1356, NULL, 1356),
    NAME_FUNC_OFFSET(25812, gl_dispatch_stub_1357, gl_dispatch_stub_1357, NULL, 1357),
    NAME_FUNC_OFFSET(25833, gl_dispatch_stub_1358, gl_dispatch_stub_1358, NULL, 1358),
    NAME_FUNC_OFFSET(25865, gl_dispatch_stub_1359, gl_dispatch_stub_1359, NULL, 1359),
    NAME_FUNC_OFFSET(25890, gl_dispatch_stub_1360, gl_dispatch_stub_1360, NULL, 1360),
    NAME_FUNC_OFFSET(25915, gl_dispatch_stub_1361, gl_dispatch_stub_1361, NULL, 1361),
    NAME_FUNC_OFFSET(25951, gl_dispatch_stub_1362, gl_dispatch_stub_1362, NULL, 1362),
    NAME_FUNC_OFFSET(25976, gl_dispatch_stub_1363, gl_dispatch_stub_1363, NULL, 1363),
    NAME_FUNC_OFFSET(26012, gl_dispatch_stub_1364, gl_dispatch_stub_1364, NULL, 1364),
    NAME_FUNC_OFFSET(26031, gl_dispatch_stub_1365, gl_dispatch_stub_1365, NULL, 1365),
    NAME_FUNC_OFFSET(26051, gl_dispatch_stub_1366, gl_dispatch_stub_1366, NULL, 1366),
    NAME_FUNC_OFFSET(26074, gl_dispatch_stub_1367, gl_dispatch_stub_1367, NULL, 1367),
    NAME_FUNC_OFFSET(26103, gl_dispatch_stub_1368, gl_dispatch_stub_1368, NULL, 1368),
    NAME_FUNC_OFFSET(26152, gl_dispatch_stub_1369, gl_dispatch_stub_1369, NULL, 1369),
    NAME_FUNC_OFFSET(26196, gl_dispatch_stub_1370, gl_dispatch_stub_1370, NULL, 1370),
    NAME_FUNC_OFFSET(26221, gl_dispatch_stub_1371, gl_dispatch_stub_1371, NULL, 1371),
    NAME_FUNC_OFFSET(26250, gl_dispatch_stub_1372, gl_dispatch_stub_1372, NULL, 1372),
    NAME_FUNC_OFFSET(26281, gl_dispatch_stub_1373, gl_dispatch_stub_1373, NULL, 1373),
    NAME_FUNC_OFFSET(26320, gl_dispatch_stub_1374, gl_dispatch_stub_1374, NULL, 1374),
    NAME_FUNC_OFFSET(26349, glAlphaFuncx, glAlphaFuncx, NULL, 1375),
    NAME_FUNC_OFFSET(26362, glClearColorx, glClearColorx, NULL, 1376),
    NAME_FUNC_OFFSET(26376, glClearDepthx, glClearDepthx, NULL, 1377),
    NAME_FUNC_OFFSET(26390, glColor4x, glColor4x, NULL, 1378),
    NAME_FUNC_OFFSET(26400, glDepthRangex, glDepthRangex, NULL, 1379),
    NAME_FUNC_OFFSET(26414, glFogx, glFogx, NULL, 1380),
    NAME_FUNC_OFFSET(26421, glFogxv, glFogxv, NULL, 1381),
    NAME_FUNC_OFFSET(26429, glFrustumf, glFrustumf, NULL, 1382),
    NAME_FUNC_OFFSET(26440, glFrustumx, glFrustumx, NULL, 1383),
    NAME_FUNC_OFFSET(26451, glLightModelx, glLightModelx, NULL, 1384),
    NAME_FUNC_OFFSET(26465, glLightModelxv, glLightModelxv, NULL, 1385),
    NAME_FUNC_OFFSET(26480, glLightx, glLightx, NULL, 1386),
    NAME_FUNC_OFFSET(26489, glLightxv, glLightxv, NULL, 1387),
    NAME_FUNC_OFFSET(26499, glLineWidthx, glLineWidthx, NULL, 1388),
    NAME_FUNC_OFFSET(26512, glLoadMatrixx, glLoadMatrixx, NULL, 1389),
    NAME_FUNC_OFFSET(26526, glMaterialx, glMaterialx, NULL, 1390),
    NAME_FUNC_OFFSET(26538, glMaterialxv, glMaterialxv, NULL, 1391),
    NAME_FUNC_OFFSET(26551, glMultMatrixx, glMultMatrixx, NULL, 1392),
    NAME_FUNC_OFFSET(26565, glMultiTexCoord4x, glMultiTexCoord4x, NULL, 1393),
    NAME_FUNC_OFFSET(26583, glNormal3x, glNormal3x, NULL, 1394),
    NAME_FUNC_OFFSET(26594, glOrthof, glOrthof, NULL, 1395),
    NAME_FUNC_OFFSET(26603, glOrthox, glOrthox, NULL, 1396),
    NAME_FUNC_OFFSET(26612, glPointSizex, glPointSizex, NULL, 1397),
    NAME_FUNC_OFFSET(26625, glPolygonOffsetx, glPolygonOffsetx, NULL, 1398),
    NAME_FUNC_OFFSET(26642, glRotatex, glRotatex, NULL, 1399),
    NAME_FUNC_OFFSET(26652, glSampleCoveragex, glSampleCoveragex, NULL, 1400),
    NAME_FUNC_OFFSET(26670, glScalex, glScalex, NULL, 1401),
    NAME_FUNC_OFFSET(26679, glTexEnvx, glTexEnvx, NULL, 1402),
    NAME_FUNC_OFFSET(26689, glTexEnvxv, glTexEnvxv, NULL, 1403),
    NAME_FUNC_OFFSET(26700, glTexParameterx, glTexParameterx, NULL, 1404),
    NAME_FUNC_OFFSET(26716, glTranslatex, glTranslatex, NULL, 1405),
    NAME_FUNC_OFFSET(26729, glClipPlanef, glClipPlanef, NULL, 1406),
    NAME_FUNC_OFFSET(26742, glClipPlanex, glClipPlanex, NULL, 1407),
    NAME_FUNC_OFFSET(26755, glGetClipPlanef, glGetClipPlanef, NULL, 1408),
    NAME_FUNC_OFFSET(26771, glGetClipPlanex, glGetClipPlanex, NULL, 1409),
    NAME_FUNC_OFFSET(26787, glGetFixedv, glGetFixedv, NULL, 1410),
    NAME_FUNC_OFFSET(26799, glGetLightxv, glGetLightxv, NULL, 1411),
    NAME_FUNC_OFFSET(26812, glGetMaterialxv, glGetMaterialxv, NULL, 1412),
    NAME_FUNC_OFFSET(26828, glGetTexEnvxv, glGetTexEnvxv, NULL, 1413),
    NAME_FUNC_OFFSET(26842, glGetTexParameterxv, glGetTexParameterxv, NULL, 1414),
    NAME_FUNC_OFFSET(26862, glPointParameterx, glPointParameterx, NULL, 1415),
    NAME_FUNC_OFFSET(26880, glPointParameterxv, glPointParameterxv, NULL, 1416),
    NAME_FUNC_OFFSET(26899, glTexParameterxv, glTexParameterxv, NULL, 1417),
    NAME_FUNC_OFFSET(26916, glBlendBarrier, glBlendBarrier, NULL, 1418),
    NAME_FUNC_OFFSET(26931, glPrimitiveBoundingBox, glPrimitiveBoundingBox, NULL, 1419),
    NAME_FUNC_OFFSET(26954, glTexGenf, glTexGenf, NULL, 190),
    NAME_FUNC_OFFSET(26967, glTexGenfv, glTexGenfv, NULL, 191),
    NAME_FUNC_OFFSET(26981, glTexGeni, glTexGeni, NULL, 192),
    NAME_FUNC_OFFSET(26994, glTexGeniv, glTexGeniv, NULL, 193),
    NAME_FUNC_OFFSET(27008, glReadBuffer, glReadBuffer, NULL, 254),
    NAME_FUNC_OFFSET(27023, glGetTexGenfv, glGetTexGenfv, NULL, 279),
    NAME_FUNC_OFFSET(27040, glGetTexGeniv, glGetTexGeniv, NULL, 280),
    NAME_FUNC_OFFSET(27057, glArrayElement, glArrayElement, NULL, 306),
    NAME_FUNC_OFFSET(27075, glBindTexture, glBindTexture, NULL, 307),
    NAME_FUNC_OFFSET(27092, glDrawArrays, glDrawArrays, NULL, 310),
    NAME_FUNC_OFFSET(27108, glAreTexturesResident, glAreTexturesResidentEXT, glAreTexturesResidentEXT, 322),
    NAME_FUNC_OFFSET(27133, glCopyTexImage1D, glCopyTexImage1D, NULL, 323),
    NAME_FUNC_OFFSET(27153, glCopyTexImage2D, glCopyTexImage2D, NULL, 324),
    NAME_FUNC_OFFSET(27173, glCopyTexSubImage1D, glCopyTexSubImage1D, NULL, 325),
    NAME_FUNC_OFFSET(27196, glCopyTexSubImage2D, glCopyTexSubImage2D, NULL, 326),
    NAME_FUNC_OFFSET(27219, glDeleteTextures, glDeleteTexturesEXT, glDeleteTexturesEXT, 327),
    NAME_FUNC_OFFSET(27239, glGenTextures, glGenTexturesEXT, glGenTexturesEXT, 328),
    NAME_FUNC_OFFSET(27256, glGetPointerv, glGetPointerv, NULL, 329),
    NAME_FUNC_OFFSET(27273, glGetPointerv, glGetPointerv, NULL, 329),
    NAME_FUNC_OFFSET(27290, glIsTexture, glIsTextureEXT, glIsTextureEXT, 330),
    NAME_FUNC_OFFSET(27305, glPrioritizeTextures, glPrioritizeTextures, NULL, 331),
    NAME_FUNC_OFFSET(27329, glTexSubImage1D, glTexSubImage1D, NULL, 332),
    NAME_FUNC_OFFSET(27348, glTexSubImage2D, glTexSubImage2D, NULL, 333),
    NAME_FUNC_OFFSET(27367, glBlendColor, glBlendColor, NULL, 336),
    NAME_FUNC_OFFSET(27383, glBlendEquation, glBlendEquation, NULL, 337),
    NAME_FUNC_OFFSET(27402, glBlendEquation, glBlendEquation, NULL, 337),
    NAME_FUNC_OFFSET(27421, glDrawRangeElements, glDrawRangeElements, NULL, 338),
    NAME_FUNC_OFFSET(27444, glColorTable, glColorTable, NULL, 339),
    NAME_FUNC_OFFSET(27460, glColorTable, glColorTable, NULL, 339),
    NAME_FUNC_OFFSET(27476, glColorTableParameterfv, glColorTableParameterfv, NULL, 340),
    NAME_FUNC_OFFSET(27503, glColorTableParameteriv, glColorTableParameteriv, NULL, 341),
    NAME_FUNC_OFFSET(27530, glCopyColorTable, glCopyColorTable, NULL, 342),
    NAME_FUNC_OFFSET(27550, glGetColorTable, gl_dispatch_stub_343, gl_dispatch_stub_343, 343),
    NAME_FUNC_OFFSET(27569, glGetColorTable, gl_dispatch_stub_343, gl_dispatch_stub_343, 343),
    NAME_FUNC_OFFSET(27588, glGetColorTableParameterfv, gl_dispatch_stub_344, gl_dispatch_stub_344, 344),
    NAME_FUNC_OFFSET(27618, glGetColorTableParameterfv, gl_dispatch_stub_344, gl_dispatch_stub_344, 344),
    NAME_FUNC_OFFSET(27648, glGetColorTableParameteriv, gl_dispatch_stub_345, gl_dispatch_stub_345, 345),
    NAME_FUNC_OFFSET(27678, glGetColorTableParameteriv, gl_dispatch_stub_345, gl_dispatch_stub_345, 345),
    NAME_FUNC_OFFSET(27708, glColorSubTable, glColorSubTable, NULL, 346),
    NAME_FUNC_OFFSET(27727, glCopyColorSubTable, glCopyColorSubTable, NULL, 347),
    NAME_FUNC_OFFSET(27750, glConvolutionFilter1D, glConvolutionFilter1D, NULL, 348),
    NAME_FUNC_OFFSET(27775, glConvolutionFilter2D, glConvolutionFilter2D, NULL, 349),
    NAME_FUNC_OFFSET(27800, glConvolutionParameterf, glConvolutionParameterf, NULL, 350),
    NAME_FUNC_OFFSET(27827, glConvolutionParameterfv, glConvolutionParameterfv, NULL, 351),
    NAME_FUNC_OFFSET(27855, glConvolutionParameteri, glConvolutionParameteri, NULL, 352),
    NAME_FUNC_OFFSET(27882, glConvolutionParameteriv, glConvolutionParameteriv, NULL, 353),
    NAME_FUNC_OFFSET(27910, glCopyConvolutionFilter1D, glCopyConvolutionFilter1D, NULL, 354),
    NAME_FUNC_OFFSET(27939, glCopyConvolutionFilter2D, glCopyConvolutionFilter2D, NULL, 355),
    NAME_FUNC_OFFSET(27968, glGetConvolutionFilter, gl_dispatch_stub_356, gl_dispatch_stub_356, 356),
    NAME_FUNC_OFFSET(27994, glGetConvolutionParameterfv, gl_dispatch_stub_357, gl_dispatch_stub_357, 357),
    NAME_FUNC_OFFSET(28025, glGetConvolutionParameteriv, gl_dispatch_stub_358, gl_dispatch_stub_358, 358),
    NAME_FUNC_OFFSET(28056, glGetSeparableFilter, gl_dispatch_stub_359, gl_dispatch_stub_359, 359),
    NAME_FUNC_OFFSET(28080, glSeparableFilter2D, glSeparableFilter2D, NULL, 360),
    NAME_FUNC_OFFSET(28103, glGetHistogram, gl_dispatch_stub_361, gl_dispatch_stub_361, 361),
    NAME_FUNC_OFFSET(28121, glGetHistogramParameterfv, gl_dispatch_stub_362, gl_dispatch_stub_362, 362),
    NAME_FUNC_OFFSET(28150, glGetHistogramParameteriv, gl_dispatch_stub_363, gl_dispatch_stub_363, 363),
    NAME_FUNC_OFFSET(28179, glGetMinmax, gl_dispatch_stub_364, gl_dispatch_stub_364, 364),
    NAME_FUNC_OFFSET(28194, glGetMinmaxParameterfv, gl_dispatch_stub_365, gl_dispatch_stub_365, 365),
    NAME_FUNC_OFFSET(28220, glGetMinmaxParameteriv, gl_dispatch_stub_366, gl_dispatch_stub_366, 366),
    NAME_FUNC_OFFSET(28246, glHistogram, glHistogram, NULL, 367),
    NAME_FUNC_OFFSET(28261, glMinmax, glMinmax, NULL, 368),
    NAME_FUNC_OFFSET(28273, glResetHistogram, glResetHistogram, NULL, 369),
    NAME_FUNC_OFFSET(28293, glResetMinmax, glResetMinmax, NULL, 370),
    NAME_FUNC_OFFSET(28310, glTexImage3D, glTexImage3D, NULL, 371),
    NAME_FUNC_OFFSET(28326, glTexImage3D, glTexImage3D, NULL, 371),
    NAME_FUNC_OFFSET(28342, glTexSubImage3D, glTexSubImage3D, NULL, 372),
    NAME_FUNC_OFFSET(28361, glTexSubImage3D, glTexSubImage3D, NULL, 372),
    NAME_FUNC_OFFSET(28380, glCopyTexSubImage3D, glCopyTexSubImage3D, NULL, 373),
    NAME_FUNC_OFFSET(28403, glCopyTexSubImage3D, glCopyTexSubImage3D, NULL, 373),
    NAME_FUNC_OFFSET(28426, glActiveTexture, glActiveTexture, NULL, 374),
    NAME_FUNC_OFFSET(28445, glClientActiveTexture, glClientActiveTexture, NULL, 375),
    NAME_FUNC_OFFSET(28470, glMultiTexCoord1d, glMultiTexCoord1d, NULL, 376),
    NAME_FUNC_OFFSET(28491, glMultiTexCoord1dv, glMultiTexCoord1dv, NULL, 377),
    NAME_FUNC_OFFSET(28513, glMultiTexCoord1fARB, glMultiTexCoord1fARB, NULL, 378),
    NAME_FUNC_OFFSET(28531, glMultiTexCoord1fvARB, glMultiTexCoord1fvARB, NULL, 379),
    NAME_FUNC_OFFSET(28550, glMultiTexCoord1i, glMultiTexCoord1i, NULL, 380),
    NAME_FUNC_OFFSET(28571, glMultiTexCoord1iv, glMultiTexCoord1iv, NULL, 381),
    NAME_FUNC_OFFSET(28593, glMultiTexCoord1s, glMultiTexCoord1s, NULL, 382),
    NAME_FUNC_OFFSET(28614, glMultiTexCoord1sv, glMultiTexCoord1sv, NULL, 383),
    NAME_FUNC_OFFSET(28636, glMultiTexCoord2d, glMultiTexCoord2d, NULL, 384),
    NAME_FUNC_OFFSET(28657, glMultiTexCoord2dv, glMultiTexCoord2dv, NULL, 385),
    NAME_FUNC_OFFSET(28679, glMultiTexCoord2fARB, glMultiTexCoord2fARB, NULL, 386),
    NAME_FUNC_OFFSET(28697, glMultiTexCoord2fvARB, glMultiTexCoord2fvARB, NULL, 387),
    NAME_FUNC_OFFSET(28716, glMultiTexCoord2i, glMultiTexCoord2i, NULL, 388),
    NAME_FUNC_OFFSET(28737, glMultiTexCoord2iv, glMultiTexCoord2iv, NULL, 389),
    NAME_FUNC_OFFSET(28759, glMultiTexCoord2s, glMultiTexCoord2s, NULL, 390),
    NAME_FUNC_OFFSET(28780, glMultiTexCoord2sv, glMultiTexCoord2sv, NULL, 391),
    NAME_FUNC_OFFSET(28802, glMultiTexCoord3d, glMultiTexCoord3d, NULL, 392),
    NAME_FUNC_OFFSET(28823, glMultiTexCoord3dv, glMultiTexCoord3dv, NULL, 393),
    NAME_FUNC_OFFSET(28845, glMultiTexCoord3fARB, glMultiTexCoord3fARB, NULL, 394),
    NAME_FUNC_OFFSET(28863, glMultiTexCoord3fvARB, glMultiTexCoord3fvARB, NULL, 395),
    NAME_FUNC_OFFSET(28882, glMultiTexCoord3i, glMultiTexCoord3i, NULL, 396),
    NAME_FUNC_OFFSET(28903, glMultiTexCoord3iv, glMultiTexCoord3iv, NULL, 397),
    NAME_FUNC_OFFSET(28925, glMultiTexCoord3s, glMultiTexCoord3s, NULL, 398),
    NAME_FUNC_OFFSET(28946, glMultiTexCoord3sv, glMultiTexCoord3sv, NULL, 399),
    NAME_FUNC_OFFSET(28968, glMultiTexCoord4d, glMultiTexCoord4d, NULL, 400),
    NAME_FUNC_OFFSET(28989, glMultiTexCoord4dv, glMultiTexCoord4dv, NULL, 401),
    NAME_FUNC_OFFSET(29011, glMultiTexCoord4fARB, glMultiTexCoord4fARB, NULL, 402),
    NAME_FUNC_OFFSET(29029, glMultiTexCoord4fvARB, glMultiTexCoord4fvARB, NULL, 403),
    NAME_FUNC_OFFSET(29048, glMultiTexCoord4i, glMultiTexCoord4i, NULL, 404),
    NAME_FUNC_OFFSET(29069, glMultiTexCoord4iv, glMultiTexCoord4iv, NULL, 405),
    NAME_FUNC_OFFSET(29091, glMultiTexCoord4s, glMultiTexCoord4s, NULL, 406),
    NAME_FUNC_OFFSET(29112, glMultiTexCoord4sv, glMultiTexCoord4sv, NULL, 407),
    NAME_FUNC_OFFSET(29134, gl_dispatch_stub_408, gl_dispatch_stub_408, NULL, 408),
    NAME_FUNC_OFFSET(29152, glCompressedTexImage1D, glCompressedTexImage1D, NULL, 409),
    NAME_FUNC_OFFSET(29178, glCompressedTexImage2D, glCompressedTexImage2D, NULL, 410),
    NAME_FUNC_OFFSET(29204, glCompressedTexImage3D, glCompressedTexImage3D, NULL, 411),
    NAME_FUNC_OFFSET(29230, glCompressedTexImage3D, glCompressedTexImage3D, NULL, 411),
    NAME_FUNC_OFFSET(29256, glCompressedTexSubImage1D, glCompressedTexSubImage1D, NULL, 412),
    NAME_FUNC_OFFSET(29285, glCompressedTexSubImage2D, glCompressedTexSubImage2D, NULL, 413),
    NAME_FUNC_OFFSET(29314, glCompressedTexSubImage3D, glCompressedTexSubImage3D, NULL, 414),
    NAME_FUNC_OFFSET(29343, glCompressedTexSubImage3D, glCompressedTexSubImage3D, NULL, 414),
    NAME_FUNC_OFFSET(29372, glGetCompressedTexImage, glGetCompressedTexImage, NULL, 415),
    NAME_FUNC_OFFSET(29399, glLoadTransposeMatrixd, glLoadTransposeMatrixd, NULL, 416),
    NAME_FUNC_OFFSET(29425, glLoadTransposeMatrixf, glLoadTransposeMatrixf, NULL, 417),
    NAME_FUNC_OFFSET(29451, glMultTransposeMatrixd, glMultTransposeMatrixd, NULL, 418),
    NAME_FUNC_OFFSET(29477, glMultTransposeMatrixf, glMultTransposeMatrixf, NULL, 419),
    NAME_FUNC_OFFSET(29503, glSampleCoverage, glSampleCoverage, NULL, 420),
    NAME_FUNC_OFFSET(29523, glBlendFuncSeparate, glBlendFuncSeparate, NULL, 421),
    NAME_FUNC_OFFSET(29546, glBlendFuncSeparate, glBlendFuncSeparate, NULL, 421),
    NAME_FUNC_OFFSET(29570, glBlendFuncSeparate, glBlendFuncSeparate, NULL, 421),
    NAME_FUNC_OFFSET(29593, glFogCoordPointer, glFogCoordPointer, NULL, 422),
    NAME_FUNC_OFFSET(29614, glFogCoordd, glFogCoordd, NULL, 423),
    NAME_FUNC_OFFSET(29629, glFogCoorddv, glFogCoorddv, NULL, 424),
    NAME_FUNC_OFFSET(29645, glMultiDrawArrays, glMultiDrawArrays, NULL, 425),
    NAME_FUNC_OFFSET(29666, glPointParameterf, glPointParameterf, NULL, 426),
    NAME_FUNC_OFFSET(29687, glPointParameterf, glPointParameterf, NULL, 426),
    NAME_FUNC_OFFSET(29708, glPointParameterf, glPointParameterf, NULL, 426),
    NAME_FUNC_OFFSET(29730, glPointParameterfv, glPointParameterfv, NULL, 427),
    NAME_FUNC_OFFSET(29752, glPointParameterfv, glPointParameterfv, NULL, 427),
    NAME_FUNC_OFFSET(29774, glPointParameterfv, glPointParameterfv, NULL, 427),
    NAME_FUNC_OFFSET(29797, glPointParameteri, glPointParameteri, NULL, 428),
    NAME_FUNC_OFFSET(29817, glPointParameteriv, glPointParameteriv, NULL, 429),
    NAME_FUNC_OFFSET(29838, glSecondaryColor3b, glSecondaryColor3b, NULL, 430),
    NAME_FUNC_OFFSET(29860, glSecondaryColor3bv, glSecondaryColor3bv, NULL, 431),
    NAME_FUNC_OFFSET(29883, glSecondaryColor3d, glSecondaryColor3d, NULL, 432),
    NAME_FUNC_OFFSET(29905, glSecondaryColor3dv, glSecondaryColor3dv, NULL, 433),
    NAME_FUNC_OFFSET(29928, glSecondaryColor3i, glSecondaryColor3i, NULL, 434),
    NAME_FUNC_OFFSET(29950, glSecondaryColor3iv, glSecondaryColor3iv, NULL, 435),
    NAME_FUNC_OFFSET(29973, glSecondaryColor3s, glSecondaryColor3s, NULL, 436),
    NAME_FUNC_OFFSET(29995, glSecondaryColor3sv, glSecondaryColor3sv, NULL, 437),
    NAME_FUNC_OFFSET(30018, glSecondaryColor3ub, glSecondaryColor3ub, NULL, 438),
    NAME_FUNC_OFFSET(30041, glSecondaryColor3ubv, glSecondaryColor3ubv, NULL, 439),
    NAME_FUNC_OFFSET(30065, glSecondaryColor3ui, glSecondaryColor3ui, NULL, 440),
    NAME_FUNC_OFFSET(30088, glSecondaryColor3uiv, glSecondaryColor3uiv, NULL, 441),
    NAME_FUNC_OFFSET(30112, glSecondaryColor3us, glSecondaryColor3us, NULL, 442),
    NAME_FUNC_OFFSET(30135, glSecondaryColor3usv, glSecondaryColor3usv, NULL, 443),
    NAME_FUNC_OFFSET(30159, glSecondaryColorPointer, glSecondaryColorPointer, NULL, 444),
    NAME_FUNC_OFFSET(30186, glWindowPos2d, glWindowPos2d, NULL, 445),
    NAME_FUNC_OFFSET(30203, glWindowPos2d, glWindowPos2d, NULL, 445),
    NAME_FUNC_OFFSET(30221, glWindowPos2dv, glWindowPos2dv, NULL, 446),
    NAME_FUNC_OFFSET(30239, glWindowPos2dv, glWindowPos2dv, NULL, 446),
    NAME_FUNC_OFFSET(30258, glWindowPos2f, glWindowPos2f, NULL, 447),
    NAME_FUNC_OFFSET(30275, glWindowPos2f, glWindowPos2f, NULL, 447),
    NAME_FUNC_OFFSET(30293, glWindowPos2fv, glWindowPos2fv, NULL, 448),
    NAME_FUNC_OFFSET(30311, glWindowPos2fv, glWindowPos2fv, NULL, 448),
    NAME_FUNC_OFFSET(30330, glWindowPos2i, glWindowPos2i, NULL, 449),
    NAME_FUNC_OFFSET(30347, glWindowPos2i, glWindowPos2i, NULL, 449),
    NAME_FUNC_OFFSET(30365, glWindowPos2iv, glWindowPos2iv, NULL, 450),
    NAME_FUNC_OFFSET(30383, glWindowPos2iv, glWindowPos2iv, NULL, 450),
    NAME_FUNC_OFFSET(30402, glWindowPos2s, glWindowPos2s, NULL, 451),
    NAME_FUNC_OFFSET(30419, glWindowPos2s, glWindowPos2s, NULL, 451),
    NAME_FUNC_OFFSET(30437, glWindowPos2sv, glWindowPos2sv, NULL, 452),
    NAME_FUNC_OFFSET(30455, glWindowPos2sv, glWindowPos2sv, NULL, 452),
    NAME_FUNC_OFFSET(30474, glWindowPos3d, glWindowPos3d, NULL, 453),
    NAME_FUNC_OFFSET(30491, glWindowPos3d, glWindowPos3d, NULL, 453),
    NAME_FUNC_OFFSET(30509, glWindowPos3dv, glWindowPos3dv, NULL, 454),
    NAME_FUNC_OFFSET(30527, glWindowPos3dv, glWindowPos3dv, NULL, 454),
    NAME_FUNC_OFFSET(30546, glWindowPos3f, glWindowPos3f, NULL, 455),
    NAME_FUNC_OFFSET(30563, glWindowPos3f, glWindowPos3f, NULL, 455),
    NAME_FUNC_OFFSET(30581, glWindowPos3fv, glWindowPos3fv, NULL, 456),
    NAME_FUNC_OFFSET(30599, glWindowPos3fv, glWindowPos3fv, NULL, 456),
    NAME_FUNC_OFFSET(30618, glWindowPos3i, glWindowPos3i, NULL, 457),
    NAME_FUNC_OFFSET(30635, glWindowPos3i, glWindowPos3i, NULL, 457),
    NAME_FUNC_OFFSET(30653, glWindowPos3iv, glWindowPos3iv, NULL, 458),
    NAME_FUNC_OFFSET(30671, glWindowPos3iv, glWindowPos3iv, NULL, 458),
    NAME_FUNC_OFFSET(30690, glWindowPos3s, glWindowPos3s, NULL, 459),
    NAME_FUNC_OFFSET(30707, glWindowPos3s, glWindowPos3s, NULL, 459),
    NAME_FUNC_OFFSET(30725, glWindowPos3sv, glWindowPos3sv, NULL, 460),
    NAME_FUNC_OFFSET(30743, glWindowPos3sv, glWindowPos3sv, NULL, 460),
    NAME_FUNC_OFFSET(30762, glBeginQuery, glBeginQuery, NULL, 461),
    NAME_FUNC_OFFSET(30778, glBeginQuery, glBeginQuery, NULL, 461),
    NAME_FUNC_OFFSET(30794, glBindBuffer, glBindBuffer, NULL, 462),
    NAME_FUNC_OFFSET(30810, glBufferData, glBufferData, NULL, 463),
    NAME_FUNC_OFFSET(30826, glBufferSubData, glBufferSubData, NULL, 464),
    NAME_FUNC_OFFSET(30845, glDeleteBuffers, glDeleteBuffers, NULL, 465),
    NAME_FUNC_OFFSET(30864, glDeleteQueries, glDeleteQueries, NULL, 466),
    NAME_FUNC_OFFSET(30883, glDeleteQueries, glDeleteQueries, NULL, 466),
    NAME_FUNC_OFFSET(30902, glEndQuery, glEndQuery, NULL, 467),
    NAME_FUNC_OFFSET(30916, glEndQuery, glEndQuery, NULL, 467),
    NAME_FUNC_OFFSET(30930, glGenBuffers, glGenBuffers, NULL, 468),
    NAME_FUNC_OFFSET(30946, glGenQueries, glGenQueries, NULL, 469),
    NAME_FUNC_OFFSET(30962, glGenQueries, glGenQueries, NULL, 469),
    NAME_FUNC_OFFSET(30978, glGetBufferParameteriv, glGetBufferParameteriv, NULL, 470),
    NAME_FUNC_OFFSET(31004, glGetBufferPointerv, glGetBufferPointerv, NULL, 471),
    NAME_FUNC_OFFSET(31027, glGetBufferPointerv, glGetBufferPointerv, NULL, 471),
    NAME_FUNC_OFFSET(31050, glGetBufferSubData, glGetBufferSubData, NULL, 472),
    NAME_FUNC_OFFSET(31072, glGetQueryObjectiv, glGetQueryObjectiv, NULL, 473),
    NAME_FUNC_OFFSET(31094, glGetQueryObjectiv, glGetQueryObjectiv, NULL, 473),
    NAME_FUNC_OFFSET(31116, glGetQueryObjectuiv, glGetQueryObjectuiv, NULL, 474),
    NAME_FUNC_OFFSET(31139, glGetQueryObjectuiv, glGetQueryObjectuiv, NULL, 474),
    NAME_FUNC_OFFSET(31162, glGetQueryiv, glGetQueryiv, NULL, 475),
    NAME_FUNC_OFFSET(31178, glGetQueryiv, glGetQueryiv, NULL, 475),
    NAME_FUNC_OFFSET(31194, glIsBuffer, glIsBuffer, NULL, 476),
    NAME_FUNC_OFFSET(31208, glIsQuery, glIsQuery, NULL, 477),
    NAME_FUNC_OFFSET(31221, glIsQuery, glIsQuery, NULL, 477),
    NAME_FUNC_OFFSET(31234, glMapBuffer, glMapBuffer, NULL, 478),
    NAME_FUNC_OFFSET(31249, glMapBuffer, glMapBuffer, NULL, 478),
    NAME_FUNC_OFFSET(31264, glUnmapBuffer, glUnmapBuffer, NULL, 479),
    NAME_FUNC_OFFSET(31281, glUnmapBuffer, glUnmapBuffer, NULL, 479),
    NAME_FUNC_OFFSET(31298, glBindAttribLocation, glBindAttribLocation, NULL, 481),
    NAME_FUNC_OFFSET(31322, glBlendEquationSeparate, glBlendEquationSeparate, NULL, 482),
    NAME_FUNC_OFFSET(31349, glBlendEquationSeparate, glBlendEquationSeparate, NULL, 482),
    NAME_FUNC_OFFSET(31376, glBlendEquationSeparate, glBlendEquationSeparate, NULL, 482),
    NAME_FUNC_OFFSET(31403, glCompileShader, glCompileShader, NULL, 483),
    NAME_FUNC_OFFSET(31422, glDisableVertexAttribArray, glDisableVertexAttribArray, NULL, 489),
    NAME_FUNC_OFFSET(31452, glDrawBuffers, glDrawBuffers, NULL, 490),
    NAME_FUNC_OFFSET(31469, glDrawBuffers, glDrawBuffers, NULL, 490),
    NAME_FUNC_OFFSET(31486, glDrawBuffers, glDrawBuffers, NULL, 490),
    NAME_FUNC_OFFSET(31502, glDrawBuffers, glDrawBuffers, NULL, 490),
    NAME_FUNC_OFFSET(31519, glEnableVertexAttribArray, glEnableVertexAttribArray, NULL, 491),
    NAME_FUNC_OFFSET(31548, glGetActiveAttrib, glGetActiveAttrib, NULL, 492),
    NAME_FUNC_OFFSET(31569, glGetActiveUniform, glGetActiveUniform, NULL, 493),
    NAME_FUNC_OFFSET(31591, glGetAttribLocation, glGetAttribLocation, NULL, 495),
    NAME_FUNC_OFFSET(31614, glGetShaderSource, glGetShaderSource, NULL, 499),
    NAME_FUNC_OFFSET(31635, glGetUniformLocation, glGetUniformLocation, NULL, 501),
    NAME_FUNC_OFFSET(31659, glGetUniformfv, glGetUniformfv, NULL, 502),
    NAME_FUNC_OFFSET(31677, glGetUniformiv, glGetUniformiv, NULL, 503),
    NAME_FUNC_OFFSET(31695, glGetVertexAttribPointerv, glGetVertexAttribPointerv, NULL, 504),
    NAME_FUNC_OFFSET(31724, glGetVertexAttribPointerv, glGetVertexAttribPointerv, NULL, 504),
    NAME_FUNC_OFFSET(31752, glGetVertexAttribdv, glGetVertexAttribdv, NULL, 505),
    NAME_FUNC_OFFSET(31775, glGetVertexAttribfv, glGetVertexAttribfv, NULL, 506),
    NAME_FUNC_OFFSET(31798, glGetVertexAttribiv, glGetVertexAttribiv, NULL, 507),
    NAME_FUNC_OFFSET(31821, glLinkProgram, glLinkProgram, NULL, 510),
    NAME_FUNC_OFFSET(31838, glShaderSource, glShaderSource, NULL, 511),
    NAME_FUNC_OFFSET(31856, glStencilOpSeparate, glStencilOpSeparate, NULL, 514),
    NAME_FUNC_OFFSET(31879, glUniform1f, glUniform1f, NULL, 515),
    NAME_FUNC_OFFSET(31894, glUniform1fv, glUniform1fv, NULL, 516),
    NAME_FUNC_OFFSET(31910, glUniform1i, glUniform1i, NULL, 517),
    NAME_FUNC_OFFSET(31925, glUniform1iv, glUniform1iv, NULL, 518),
    NAME_FUNC_OFFSET(31941, glUniform2f, glUniform2f, NULL, 519),
    NAME_FUNC_OFFSET(31956, glUniform2fv, glUniform2fv, NULL, 520),
    NAME_FUNC_OFFSET(31972, glUniform2i, glUniform2i, NULL, 521),
    NAME_FUNC_OFFSET(31987, glUniform2iv, glUniform2iv, NULL, 522),
    NAME_FUNC_OFFSET(32003, glUniform3f, glUniform3f, NULL, 523),
    NAME_FUNC_OFFSET(32018, glUniform3fv, glUniform3fv, NULL, 524),
    NAME_FUNC_OFFSET(32034, glUniform3i, glUniform3i, NULL, 525),
    NAME_FUNC_OFFSET(32049, glUniform3iv, glUniform3iv, NULL, 526),
    NAME_FUNC_OFFSET(32065, glUniform4f, glUniform4f, NULL, 527),
    NAME_FUNC_OFFSET(32080, glUniform4fv, glUniform4fv, NULL, 528),
    NAME_FUNC_OFFSET(32096, glUniform4i, glUniform4i, NULL, 529),
    NAME_FUNC_OFFSET(32111, glUniform4iv, glUniform4iv, NULL, 530),
    NAME_FUNC_OFFSET(32127, glUniformMatrix2fv, glUniformMatrix2fv, NULL, 531),
    NAME_FUNC_OFFSET(32149, glUniformMatrix3fv, glUniformMatrix3fv, NULL, 532),
    NAME_FUNC_OFFSET(32171, glUniformMatrix4fv, glUniformMatrix4fv, NULL, 533),
    NAME_FUNC_OFFSET(32193, glUseProgram, glUseProgram, NULL, 534),
    NAME_FUNC_OFFSET(32215, glValidateProgram, glValidateProgram, NULL, 535),
    NAME_FUNC_OFFSET(32236, glVertexAttrib1d, glVertexAttrib1d, NULL, 536),
    NAME_FUNC_OFFSET(32256, glVertexAttrib1dv, glVertexAttrib1dv, NULL, 537),
    NAME_FUNC_OFFSET(32277, glVertexAttrib1s, glVertexAttrib1s, NULL, 538),
    NAME_FUNC_OFFSET(32297, glVertexAttrib1sv, glVertexAttrib1sv, NULL, 539),
    NAME_FUNC_OFFSET(32318, glVertexAttrib2d, glVertexAttrib2d, NULL, 540),
    NAME_FUNC_OFFSET(32338, glVertexAttrib2dv, glVertexAttrib2dv, NULL, 541),
    NAME_FUNC_OFFSET(32359, glVertexAttrib2s, glVertexAttrib2s, NULL, 542),
    NAME_FUNC_OFFSET(32379, glVertexAttrib2sv, glVertexAttrib2sv, NULL, 543),
    NAME_FUNC_OFFSET(32400, glVertexAttrib3d, glVertexAttrib3d, NULL, 544),
    NAME_FUNC_OFFSET(32420, glVertexAttrib3dv, glVertexAttrib3dv, NULL, 545),
    NAME_FUNC_OFFSET(32441, glVertexAttrib3s, glVertexAttrib3s, NULL, 546),
    NAME_FUNC_OFFSET(32461, glVertexAttrib3sv, glVertexAttrib3sv, NULL, 547),
    NAME_FUNC_OFFSET(32482, glVertexAttrib4Nbv, glVertexAttrib4Nbv, NULL, 548),
    NAME_FUNC_OFFSET(32504, glVertexAttrib4Niv, glVertexAttrib4Niv, NULL, 549),
    NAME_FUNC_OFFSET(32526, glVertexAttrib4Nsv, glVertexAttrib4Nsv, NULL, 550),
    NAME_FUNC_OFFSET(32548, glVertexAttrib4Nub, glVertexAttrib4Nub, NULL, 551),
    NAME_FUNC_OFFSET(32570, glVertexAttrib4Nubv, glVertexAttrib4Nubv, NULL, 552),
    NAME_FUNC_OFFSET(32593, glVertexAttrib4Nuiv, glVertexAttrib4Nuiv, NULL, 553),
    NAME_FUNC_OFFSET(32616, glVertexAttrib4Nusv, glVertexAttrib4Nusv, NULL, 554),
    NAME_FUNC_OFFSET(32639, glVertexAttrib4bv, glVertexAttrib4bv, NULL, 555),
    NAME_FUNC_OFFSET(32660, glVertexAttrib4d, glVertexAttrib4d, NULL, 556),
    NAME_FUNC_OFFSET(32680, glVertexAttrib4dv, glVertexAttrib4dv, NULL, 557),
    NAME_FUNC_OFFSET(32701, glVertexAttrib4iv, glVertexAttrib4iv, NULL, 558),
    NAME_FUNC_OFFSET(32722, glVertexAttrib4s, glVertexAttrib4s, NULL, 559),
    NAME_FUNC_OFFSET(32742, glVertexAttrib4sv, glVertexAttrib4sv, NULL, 560),
    NAME_FUNC_OFFSET(32763, glVertexAttrib4ubv, glVertexAttrib4ubv, NULL, 561),
    NAME_FUNC_OFFSET(32785, glVertexAttrib4uiv, glVertexAttrib4uiv, NULL, 562),
    NAME_FUNC_OFFSET(32807, glVertexAttrib4usv, glVertexAttrib4usv, NULL, 563),
    NAME_FUNC_OFFSET(32829, glVertexAttribPointer, glVertexAttribPointer, NULL, 564),
    NAME_FUNC_OFFSET(32854, glBeginConditionalRender, glBeginConditionalRender, NULL, 571),
    NAME_FUNC_OFFSET(32881, glBeginTransformFeedback, glBeginTransformFeedback, NULL, 572),
    NAME_FUNC_OFFSET(32909, glBindBufferBase, glBindBufferBase, NULL, 573),
    NAME_FUNC_OFFSET(32929, glBindBufferRange, glBindBufferRange, NULL, 574),
    NAME_FUNC_OFFSET(32950, glBindFragDataLocation, glBindFragDataLocation, NULL, 575),
    NAME_FUNC_OFFSET(32976, glClampColor, glClampColor, NULL, 576),
    NAME_FUNC_OFFSET(32992, glColorMaski, glColorMaski, NULL, 581),
    NAME_FUNC_OFFSET(33014, glColorMaski, glColorMaski, NULL, 581),
    NAME_FUNC_OFFSET(33030, glColorMaski, glColorMaski, NULL, 581),
    NAME_FUNC_OFFSET(33046, glDisablei, glDisablei, NULL, 582),
    NAME_FUNC_OFFSET(33066, glDisablei, glDisablei, NULL, 582),
    NAME_FUNC_OFFSET(33080, glDisablei, glDisablei, NULL, 582),
    NAME_FUNC_OFFSET(33094, glEnablei, glEnablei, NULL, 583),
    NAME_FUNC_OFFSET(33113, glEnablei, glEnablei, NULL, 583),
    NAME_FUNC_OFFSET(33126, glEnablei, glEnablei, NULL, 583),
    NAME_FUNC_OFFSET(33139, glEndConditionalRender, glEndConditionalRender, NULL, 584),
    NAME_FUNC_OFFSET(33164, glEndTransformFeedback, glEndTransformFeedback, NULL, 585),
    NAME_FUNC_OFFSET(33190, glGetBooleani_v, glGetBooleani_v, NULL, 586),
    NAME_FUNC_OFFSET(33214, glGetFragDataLocation, glGetFragDataLocation, NULL, 587),
    NAME_FUNC_OFFSET(33239, glGetIntegeri_v, glGetIntegeri_v, NULL, 588),
    NAME_FUNC_OFFSET(33263, glGetTexParameterIiv, glGetTexParameterIiv, NULL, 590),
    NAME_FUNC_OFFSET(33287, glGetTexParameterIiv, glGetTexParameterIiv, NULL, 590),
    NAME_FUNC_OFFSET(33311, glGetTexParameterIuiv, glGetTexParameterIuiv, NULL, 591),
    NAME_FUNC_OFFSET(33336, glGetTexParameterIuiv, glGetTexParameterIuiv, NULL, 591),
    NAME_FUNC_OFFSET(33361, glGetTransformFeedbackVarying, glGetTransformFeedbackVarying, NULL, 592),
    NAME_FUNC_OFFSET(33394, glGetUniformuiv, glGetUniformuiv, NULL, 593),
    NAME_FUNC_OFFSET(33413, glGetVertexAttribIiv, glGetVertexAttribIiv, NULL, 594),
    NAME_FUNC_OFFSET(33437, glGetVertexAttribIuiv, glGetVertexAttribIuiv, NULL, 595),
    NAME_FUNC_OFFSET(33462, glIsEnabledi, glIsEnabledi, NULL, 596),
    NAME_FUNC_OFFSET(33484, glIsEnabledi, glIsEnabledi, NULL, 596),
    NAME_FUNC_OFFSET(33500, glIsEnabledi, glIsEnabledi, NULL, 596),
    NAME_FUNC_OFFSET(33516, glTexParameterIiv, glTexParameterIiv, NULL, 597),
    NAME_FUNC_OFFSET(33537, glTexParameterIiv, glTexParameterIiv, NULL, 597),
    NAME_FUNC_OFFSET(33558, glTexParameterIuiv, glTexParameterIuiv, NULL, 598),
    NAME_FUNC_OFFSET(33580, glTexParameterIuiv, glTexParameterIuiv, NULL, 598),
    NAME_FUNC_OFFSET(33602, glTransformFeedbackVaryings, glTransformFeedbackVaryings, NULL, 599),
    NAME_FUNC_OFFSET(33633, glUniform1ui, glUniform1ui, NULL, 600),
    NAME_FUNC_OFFSET(33649, glUniform1uiv, glUniform1uiv, NULL, 601),
    NAME_FUNC_OFFSET(33666, glUniform2ui, glUniform2ui, NULL, 602),
    NAME_FUNC_OFFSET(33682, glUniform2uiv, glUniform2uiv, NULL, 603),
    NAME_FUNC_OFFSET(33699, glUniform3ui, glUniform3ui, NULL, 604),
    NAME_FUNC_OFFSET(33715, glUniform3uiv, glUniform3uiv, NULL, 605),
    NAME_FUNC_OFFSET(33732, glUniform4ui, glUniform4ui, NULL, 606),
    NAME_FUNC_OFFSET(33748, glUniform4uiv, glUniform4uiv, NULL, 607),
    NAME_FUNC_OFFSET(33765, glVertexAttribI1iv, glVertexAttribI1iv, NULL, 608),
    NAME_FUNC_OFFSET(33787, glVertexAttribI1uiv, glVertexAttribI1uiv, NULL, 609),
    NAME_FUNC_OFFSET(33810, glVertexAttribI4bv, glVertexAttribI4bv, NULL, 610),
    NAME_FUNC_OFFSET(33832, glVertexAttribI4sv, glVertexAttribI4sv, NULL, 611),
    NAME_FUNC_OFFSET(33854, glVertexAttribI4ubv, glVertexAttribI4ubv, NULL, 612),
    NAME_FUNC_OFFSET(33877, glVertexAttribI4usv, glVertexAttribI4usv, NULL, 613),
    NAME_FUNC_OFFSET(33900, glVertexAttribIPointer, glVertexAttribIPointer, NULL, 614),
    NAME_FUNC_OFFSET(33926, glPrimitiveRestartIndex, glPrimitiveRestartIndex, NULL, 615),
    NAME_FUNC_OFFSET(33952, glTexBuffer, glTexBuffer, NULL, 616),
    NAME_FUNC_OFFSET(33967, glTexBuffer, glTexBuffer, NULL, 616),
    NAME_FUNC_OFFSET(33982, glTexBuffer, glTexBuffer, NULL, 616),
    NAME_FUNC_OFFSET(33997, glFramebufferTexture, glFramebufferTexture, NULL, 617),
    NAME_FUNC_OFFSET(34021, glFramebufferTexture, glFramebufferTexture, NULL, 617),
    NAME_FUNC_OFFSET(34045, glVertexAttribDivisor, glVertexAttribDivisor, NULL, 620),
    NAME_FUNC_OFFSET(34070, glMinSampleShading, glMinSampleShading, NULL, 621),
    NAME_FUNC_OFFSET(34092, glMinSampleShading, glMinSampleShading, NULL, 621),
    NAME_FUNC_OFFSET(34114, glBindProgramARB, glBindProgramARB, NULL, 623),
    NAME_FUNC_OFFSET(34130, glDeleteProgramsARB, glDeleteProgramsARB, NULL, 624),
    NAME_FUNC_OFFSET(34149, glGenProgramsARB, glGenProgramsARB, NULL, 625),
    NAME_FUNC_OFFSET(34165, glIsProgramARB, glIsProgramARB, NULL, 632),
    NAME_FUNC_OFFSET(34179, glProgramEnvParameter4dARB, glProgramEnvParameter4dARB, NULL, 633),
    NAME_FUNC_OFFSET(34202, glProgramEnvParameter4dvARB, glProgramEnvParameter4dvARB, NULL, 634),
    NAME_FUNC_OFFSET(34226, glProgramEnvParameter4fARB, glProgramEnvParameter4fARB, NULL, 635),
    NAME_FUNC_OFFSET(34249, glProgramEnvParameter4fvARB, glProgramEnvParameter4fvARB, NULL, 636),
    NAME_FUNC_OFFSET(34273, glVertexAttrib1fARB, glVertexAttrib1fARB, NULL, 642),
    NAME_FUNC_OFFSET(34290, glVertexAttrib1fvARB, glVertexAttrib1fvARB, NULL, 643),
    NAME_FUNC_OFFSET(34308, glVertexAttrib2fARB, glVertexAttrib2fARB, NULL, 644),
    NAME_FUNC_OFFSET(34325, glVertexAttrib2fvARB, glVertexAttrib2fvARB, NULL, 645),
    NAME_FUNC_OFFSET(34343, glVertexAttrib3fARB, glVertexAttrib3fARB, NULL, 646),
    NAME_FUNC_OFFSET(34360, glVertexAttrib3fvARB, glVertexAttrib3fvARB, NULL, 647),
    NAME_FUNC_OFFSET(34378, glVertexAttrib4fARB, glVertexAttrib4fARB, NULL, 648),
    NAME_FUNC_OFFSET(34395, glVertexAttrib4fvARB, glVertexAttrib4fvARB, NULL, 649),
    NAME_FUNC_OFFSET(34413, glDrawArraysInstancedARB, glDrawArraysInstancedARB, NULL, 660),
    NAME_FUNC_OFFSET(34438, glDrawArraysInstancedARB, glDrawArraysInstancedARB, NULL, 660),
    NAME_FUNC_OFFSET(34460, glDrawElementsInstancedARB, glDrawElementsInstancedARB, NULL, 661),
    NAME_FUNC_OFFSET(34487, glDrawElementsInstancedARB, glDrawElementsInstancedARB, NULL, 661),
    NAME_FUNC_OFFSET(34511, glBindFramebuffer, glBindFramebuffer, NULL, 662),
    NAME_FUNC_OFFSET(34532, glBindRenderbuffer, glBindRenderbuffer, NULL, 663),
    NAME_FUNC_OFFSET(34554, glBlitFramebuffer, glBlitFramebuffer, NULL, 664),
    NAME_FUNC_OFFSET(34575, glCheckFramebufferStatus, glCheckFramebufferStatus, NULL, 665),
    NAME_FUNC_OFFSET(34603, glCheckFramebufferStatus, glCheckFramebufferStatus, NULL, 665),
    NAME_FUNC_OFFSET(34631, glDeleteFramebuffers, glDeleteFramebuffers, NULL, 666),
    NAME_FUNC_OFFSET(34655, glDeleteFramebuffers, glDeleteFramebuffers, NULL, 666),
    NAME_FUNC_OFFSET(34679, glDeleteRenderbuffers, glDeleteRenderbuffers, NULL, 667),
    NAME_FUNC_OFFSET(34704, glDeleteRenderbuffers, glDeleteRenderbuffers, NULL, 667),
    NAME_FUNC_OFFSET(34729, glFramebufferRenderbuffer, glFramebufferRenderbuffer, NULL, 668),
    NAME_FUNC_OFFSET(34758, glFramebufferRenderbuffer, glFramebufferRenderbuffer, NULL, 668),
    NAME_FUNC_OFFSET(34787, glFramebufferTexture1D, glFramebufferTexture1D, NULL, 669),
    NAME_FUNC_OFFSET(34813, glFramebufferTexture2D, glFramebufferTexture2D, NULL, 670),
    NAME_FUNC_OFFSET(34839, glFramebufferTexture2D, glFramebufferTexture2D, NULL, 670),
    NAME_FUNC_OFFSET(34865, glFramebufferTexture3D, glFramebufferTexture3D, NULL, 671),
    NAME_FUNC_OFFSET(34891, glFramebufferTexture3D, glFramebufferTexture3D, NULL, 671),
    NAME_FUNC_OFFSET(34917, glFramebufferTextureLayer, glFramebufferTextureLayer, NULL, 672),
    NAME_FUNC_OFFSET(34946, glGenFramebuffers, glGenFramebuffers, NULL, 673),
    NAME_FUNC_OFFSET(34967, glGenFramebuffers, glGenFramebuffers, NULL, 673),
    NAME_FUNC_OFFSET(34988, glGenRenderbuffers, glGenRenderbuffers, NULL, 674),
    NAME_FUNC_OFFSET(35010, glGenRenderbuffers, glGenRenderbuffers, NULL, 674),
    NAME_FUNC_OFFSET(35032, glGenerateMipmap, glGenerateMipmap, NULL, 675),
    NAME_FUNC_OFFSET(35052, glGenerateMipmap, glGenerateMipmap, NULL, 675),
    NAME_FUNC_OFFSET(35072, glGetFramebufferAttachmentParameteriv, glGetFramebufferAttachmentParameteriv, NULL, 676),
    NAME_FUNC_OFFSET(35113, glGetFramebufferAttachmentParameteriv, glGetFramebufferAttachmentParameteriv, NULL, 676),
    NAME_FUNC_OFFSET(35154, glGetRenderbufferParameteriv, glGetRenderbufferParameteriv, NULL, 677),
    NAME_FUNC_OFFSET(35186, glGetRenderbufferParameteriv, glGetRenderbufferParameteriv, NULL, 677),
    NAME_FUNC_OFFSET(35218, glIsFramebuffer, glIsFramebuffer, NULL, 678),
    NAME_FUNC_OFFSET(35237, glIsFramebuffer, glIsFramebuffer, NULL, 678),
    NAME_FUNC_OFFSET(35256, glIsRenderbuffer, glIsRenderbuffer, NULL, 679),
    NAME_FUNC_OFFSET(35276, glIsRenderbuffer, glIsRenderbuffer, NULL, 679),
    NAME_FUNC_OFFSET(35296, glRenderbufferStorage, glRenderbufferStorage, NULL, 680),
    NAME_FUNC_OFFSET(35321, glRenderbufferStorage, glRenderbufferStorage, NULL, 680),
    NAME_FUNC_OFFSET(35346, glRenderbufferStorageMultisample, glRenderbufferStorageMultisample, NULL, 681),
    NAME_FUNC_OFFSET(35382, glFlushMappedBufferRange, glFlushMappedBufferRange, NULL, 682),
    NAME_FUNC_OFFSET(35410, glMapBufferRange, glMapBufferRange, NULL, 683),
    NAME_FUNC_OFFSET(35430, glBindVertexArray, glBindVertexArray, NULL, 684),
    NAME_FUNC_OFFSET(35451, glDeleteVertexArrays, glDeleteVertexArrays, NULL, 685),
    NAME_FUNC_OFFSET(35475, glGenVertexArrays, glGenVertexArrays, NULL, 686),
    NAME_FUNC_OFFSET(35496, glIsVertexArray, glIsVertexArray, NULL, 687),
    NAME_FUNC_OFFSET(35515, glDrawElementsBaseVertex, glDrawElementsBaseVertex, NULL, 703),
    NAME_FUNC_OFFSET(35543, glDrawElementsBaseVertex, glDrawElementsBaseVertex, NULL, 703),
    NAME_FUNC_OFFSET(35571, glDrawElementsInstancedBaseVertex, glDrawElementsInstancedBaseVertex, NULL, 704),
    NAME_FUNC_OFFSET(35608, glDrawElementsInstancedBaseVertex, glDrawElementsInstancedBaseVertex, NULL, 704),
    NAME_FUNC_OFFSET(35645, glDrawRangeElementsBaseVertex, glDrawRangeElementsBaseVertex, NULL, 705),
    NAME_FUNC_OFFSET(35678, glDrawRangeElementsBaseVertex, glDrawRangeElementsBaseVertex, NULL, 705),
    NAME_FUNC_OFFSET(35711, glMultiDrawElementsBaseVertex, glMultiDrawElementsBaseVertex, NULL, 706),
    NAME_FUNC_OFFSET(35744, glProvokingVertex, glProvokingVertex, NULL, 707),
    NAME_FUNC_OFFSET(35765, glBlendEquationSeparateiARB, glBlendEquationSeparateiARB, NULL, 712),
    NAME_FUNC_OFFSET(35799, glBlendEquationSeparateiARB, glBlendEquationSeparateiARB, NULL, 712),
    NAME_FUNC_OFFSET(35824, glBlendEquationSeparateiARB, glBlendEquationSeparateiARB, NULL, 712),
    NAME_FUNC_OFFSET(35852, glBlendEquationSeparateiARB, glBlendEquationSeparateiARB, NULL, 712),
    NAME_FUNC_OFFSET(35880, glBlendEquationiARB, glBlendEquationiARB, NULL, 713),
    NAME_FUNC_OFFSET(35906, glBlendEquationiARB, glBlendEquationiARB, NULL, 713),
    NAME_FUNC_OFFSET(35923, glBlendEquationiARB, glBlendEquationiARB, NULL, 713),
    NAME_FUNC_OFFSET(35943, glBlendEquationiARB, glBlendEquationiARB, NULL, 713),
    NAME_FUNC_OFFSET(35963, glBlendFuncSeparateiARB, glBlendFuncSeparateiARB, NULL, 714),
    NAME_FUNC_OFFSET(35993, glBlendFuncSeparateiARB, glBlendFuncSeparateiARB, NULL, 714),
    NAME_FUNC_OFFSET(36014, glBlendFuncSeparateiARB, glBlendFuncSeparateiARB, NULL, 714),
    NAME_FUNC_OFFSET(36038, glBlendFuncSeparateiARB, glBlendFuncSeparateiARB, NULL, 714),
    NAME_FUNC_OFFSET(36062, glBlendFunciARB, glBlendFunciARB, NULL, 715),
    NAME_FUNC_OFFSET(36084, glBlendFunciARB, glBlendFunciARB, NULL, 715),
    NAME_FUNC_OFFSET(36097, glBlendFunciARB, glBlendFunciARB, NULL, 715),
    NAME_FUNC_OFFSET(36113, glBlendFunciARB, glBlendFunciARB, NULL, 715),
    NAME_FUNC_OFFSET(36129, glBindFragDataLocationIndexed, glBindFragDataLocationIndexed, NULL, 716),
    NAME_FUNC_OFFSET(36162, glGetFragDataIndex, glGetFragDataIndex, NULL, 717),
    NAME_FUNC_OFFSET(36184, glGetSamplerParameterIiv, glGetSamplerParameterIiv, NULL, 721),
    NAME_FUNC_OFFSET(36212, glGetSamplerParameterIiv, glGetSamplerParameterIiv, NULL, 721),
    NAME_FUNC_OFFSET(36240, glGetSamplerParameterIuiv, glGetSamplerParameterIuiv, NULL, 722),
    NAME_FUNC_OFFSET(36269, glGetSamplerParameterIuiv, glGetSamplerParameterIuiv, NULL, 722),
    NAME_FUNC_OFFSET(36298, glSamplerParameterIiv, glSamplerParameterIiv, NULL, 726),
    NAME_FUNC_OFFSET(36323, glSamplerParameterIiv, glSamplerParameterIiv, NULL, 726),
    NAME_FUNC_OFFSET(36348, glSamplerParameterIuiv, glSamplerParameterIuiv, NULL, 727),
    NAME_FUNC_OFFSET(36374, glSamplerParameterIuiv, glSamplerParameterIuiv, NULL, 727),
    NAME_FUNC_OFFSET(36400, gl_dispatch_stub_732, gl_dispatch_stub_732, NULL, 732),
    NAME_FUNC_OFFSET(36424, gl_dispatch_stub_733, gl_dispatch_stub_733, NULL, 733),
    NAME_FUNC_OFFSET(36449, gl_dispatch_stub_734, gl_dispatch_stub_734, NULL, 734),
    NAME_FUNC_OFFSET(36467, glPatchParameteri, glPatchParameteri, NULL, 802),
    NAME_FUNC_OFFSET(36488, glPatchParameteri, glPatchParameteri, NULL, 802),
    NAME_FUNC_OFFSET(36509, glClearDepthf, glClearDepthf, NULL, 814),
    NAME_FUNC_OFFSET(36526, glDepthRangef, glDepthRangef, NULL, 815),
    NAME_FUNC_OFFSET(36543, glGetProgramBinary, glGetProgramBinary, NULL, 819),
    NAME_FUNC_OFFSET(36565, glProgramBinary, glProgramBinary, NULL, 820),
    NAME_FUNC_OFFSET(36584, glProgramParameteri, glProgramParameteri, NULL, 821),
    NAME_FUNC_OFFSET(36607, gl_dispatch_stub_822, gl_dispatch_stub_822, NULL, 822),
    NAME_FUNC_OFFSET(36631, gl_dispatch_stub_823, gl_dispatch_stub_823, NULL, 823),
    NAME_FUNC_OFFSET(36652, gl_dispatch_stub_824, gl_dispatch_stub_824, NULL, 824),
    NAME_FUNC_OFFSET(36674, gl_dispatch_stub_825, gl_dispatch_stub_825, NULL, 825),
    NAME_FUNC_OFFSET(36695, gl_dispatch_stub_826, gl_dispatch_stub_826, NULL, 826),
    NAME_FUNC_OFFSET(36717, gl_dispatch_stub_827, gl_dispatch_stub_827, NULL, 827),
    NAME_FUNC_OFFSET(36738, gl_dispatch_stub_828, gl_dispatch_stub_828, NULL, 828),
    NAME_FUNC_OFFSET(36760, gl_dispatch_stub_829, gl_dispatch_stub_829, NULL, 829),
    NAME_FUNC_OFFSET(36781, gl_dispatch_stub_830, gl_dispatch_stub_830, NULL, 830),
    NAME_FUNC_OFFSET(36803, gl_dispatch_stub_831, gl_dispatch_stub_831, NULL, 831),
    NAME_FUNC_OFFSET(36829, glGetFloati_v, glGetFloati_v, NULL, 835),
    NAME_FUNC_OFFSET(36846, glScissorArrayv, glScissorArrayv, NULL, 836),
    NAME_FUNC_OFFSET(36865, glScissorIndexed, glScissorIndexed, NULL, 837),
    NAME_FUNC_OFFSET(36885, glScissorIndexedv, glScissorIndexedv, NULL, 838),
    NAME_FUNC_OFFSET(36906, glViewportArrayv, glViewportArrayv, NULL, 839),
    NAME_FUNC_OFFSET(36926, glViewportIndexedf, glViewportIndexedf, NULL, 840),
    NAME_FUNC_OFFSET(36948, glViewportIndexedfv, glViewportIndexedfv, NULL, 841),
    NAME_FUNC_OFFSET(36971, glGetGraphicsResetStatusARB, glGetGraphicsResetStatusARB, NULL, 842),
    NAME_FUNC_OFFSET(36996, glGetGraphicsResetStatusARB, glGetGraphicsResetStatusARB, NULL, 842),
    NAME_FUNC_OFFSET(37024, glGetGraphicsResetStatusARB, glGetGraphicsResetStatusARB, NULL, 842),
    NAME_FUNC_OFFSET(37052, glGetnUniformfvARB, glGetnUniformfvARB, NULL, 857),
    NAME_FUNC_OFFSET(37068, glGetnUniformfvARB, glGetnUniformfvARB, NULL, 857),
    NAME_FUNC_OFFSET(37087, glGetnUniformfvARB, glGetnUniformfvARB, NULL, 857),
    NAME_FUNC_OFFSET(37106, glGetnUniformivARB, glGetnUniformivARB, NULL, 858),
    NAME_FUNC_OFFSET(37122, glGetnUniformivARB, glGetnUniformivARB, NULL, 858),
    NAME_FUNC_OFFSET(37141, glGetnUniformivARB, glGetnUniformivARB, NULL, 858),
    NAME_FUNC_OFFSET(37160, glGetnUniformuivARB, glGetnUniformuivARB, NULL, 859),
    NAME_FUNC_OFFSET(37177, glGetnUniformuivARB, glGetnUniformuivARB, NULL, 859),
    NAME_FUNC_OFFSET(37197, glReadnPixelsARB, glReadnPixelsARB, NULL, 860),
    NAME_FUNC_OFFSET(37211, glReadnPixelsARB, glReadnPixelsARB, NULL, 860),
    NAME_FUNC_OFFSET(37228, glReadnPixelsARB, glReadnPixelsARB, NULL, 860),
    NAME_FUNC_OFFSET(37245, glDrawArraysInstancedBaseInstance, glDrawArraysInstancedBaseInstance, NULL, 861),
    NAME_FUNC_OFFSET(37282, glDrawElementsInstancedBaseInstance, glDrawElementsInstancedBaseInstance, NULL, 862),
    NAME_FUNC_OFFSET(37321, glDrawElementsInstancedBaseVertexBaseInstance, glDrawElementsInstancedBaseVertexBaseInstance, NULL, 863),
    NAME_FUNC_OFFSET(37370, glCopyImageSubData, glCopyImageSubData, NULL, 880),
    NAME_FUNC_OFFSET(37392, glCopyImageSubData, glCopyImageSubData, NULL, 880),
    NAME_FUNC_OFFSET(37414, glTextureView, glTextureView, NULL, 881),
    NAME_FUNC_OFFSET(37431, glTextureView, glTextureView, NULL, 881),
    NAME_FUNC_OFFSET(37448, glMultiDrawArraysIndirect, glMultiDrawArraysIndirect, NULL, 891),
    NAME_FUNC_OFFSET(37477, glMultiDrawElementsIndirect, glMultiDrawElementsIndirect, NULL, 892),
    NAME_FUNC_OFFSET(37508, gl_dispatch_stub_896, gl_dispatch_stub_896, NULL, 896),
    NAME_FUNC_OFFSET(37545, glTexBufferRange, glTexBufferRange, NULL, 900),
    NAME_FUNC_OFFSET(37565, glTexBufferRange, glTexBufferRange, NULL, 900),
    NAME_FUNC_OFFSET(37585, glTexStorage3DMultisample, glTexStorage3DMultisample, NULL, 902),
    NAME_FUNC_OFFSET(37614, glBufferStorage, glBufferStorage, NULL, 903),
    NAME_FUNC_OFFSET(37633, gl_dispatch_stub_929, gl_dispatch_stub_929, NULL, 929),
    NAME_FUNC_OFFSET(37664, gl_dispatch_stub_930, gl_dispatch_stub_930, NULL, 930),
    NAME_FUNC_OFFSET(37697, gl_dispatch_stub_1033, gl_dispatch_stub_1033, NULL, 1033),
    NAME_FUNC_OFFSET(37716, gl_dispatch_stub_1034, gl_dispatch_stub_1034, NULL, 1034),
    NAME_FUNC_OFFSET(37736, gl_dispatch_stub_1037, gl_dispatch_stub_1037, NULL, 1037),
    NAME_FUNC_OFFSET(37759, gl_dispatch_stub_1038, gl_dispatch_stub_1038, NULL, 1038),
    NAME_FUNC_OFFSET(37783, gl_dispatch_stub_1039, gl_dispatch_stub_1039, NULL, 1039),
    NAME_FUNC_OFFSET(37807, gl_dispatch_stub_1040, gl_dispatch_stub_1040, NULL, 1040),
    NAME_FUNC_OFFSET(37832, gl_dispatch_stub_1041, gl_dispatch_stub_1041, NULL, 1041),
    NAME_FUNC_OFFSET(37855, gl_dispatch_stub_1042, gl_dispatch_stub_1042, NULL, 1042),
    NAME_FUNC_OFFSET(37879, gl_dispatch_stub_1043, gl_dispatch_stub_1043, NULL, 1043),
    NAME_FUNC_OFFSET(37903, gl_dispatch_stub_1044, gl_dispatch_stub_1044, NULL, 1044),
    NAME_FUNC_OFFSET(37928, gl_dispatch_stub_1045, gl_dispatch_stub_1045, NULL, 1045),
    NAME_FUNC_OFFSET(37951, gl_dispatch_stub_1046, gl_dispatch_stub_1046, NULL, 1046),
    NAME_FUNC_OFFSET(37975, gl_dispatch_stub_1047, gl_dispatch_stub_1047, NULL, 1047),
    NAME_FUNC_OFFSET(37999, gl_dispatch_stub_1048, gl_dispatch_stub_1048, NULL, 1048),
    NAME_FUNC_OFFSET(38024, gl_dispatch_stub_1049, gl_dispatch_stub_1049, NULL, 1049),
    NAME_FUNC_OFFSET(38047, gl_dispatch_stub_1050, gl_dispatch_stub_1050, NULL, 1050),
    NAME_FUNC_OFFSET(38071, gl_dispatch_stub_1051, gl_dispatch_stub_1051, NULL, 1051),
    NAME_FUNC_OFFSET(38095, gl_dispatch_stub_1052, gl_dispatch_stub_1052, NULL, 1052),
    NAME_FUNC_OFFSET(38120, gl_dispatch_stub_1053, gl_dispatch_stub_1053, NULL, 1053),
    NAME_FUNC_OFFSET(38136, gl_dispatch_stub_1054, gl_dispatch_stub_1054, NULL, 1054),
    NAME_FUNC_OFFSET(38153, gl_dispatch_stub_1055, gl_dispatch_stub_1055, NULL, 1055),
    NAME_FUNC_OFFSET(38170, gl_dispatch_stub_1056, gl_dispatch_stub_1056, NULL, 1056),
    NAME_FUNC_OFFSET(38188, gl_dispatch_stub_1057, gl_dispatch_stub_1057, NULL, 1057),
    NAME_FUNC_OFFSET(38204, gl_dispatch_stub_1058, gl_dispatch_stub_1058, NULL, 1058),
    NAME_FUNC_OFFSET(38221, gl_dispatch_stub_1059, gl_dispatch_stub_1059, NULL, 1059),
    NAME_FUNC_OFFSET(38238, gl_dispatch_stub_1060, gl_dispatch_stub_1060, NULL, 1060),
    NAME_FUNC_OFFSET(38256, gl_dispatch_stub_1061, gl_dispatch_stub_1061, NULL, 1061),
    NAME_FUNC_OFFSET(38272, gl_dispatch_stub_1062, gl_dispatch_stub_1062, NULL, 1062),
    NAME_FUNC_OFFSET(38289, gl_dispatch_stub_1063, gl_dispatch_stub_1063, NULL, 1063),
    NAME_FUNC_OFFSET(38306, gl_dispatch_stub_1064, gl_dispatch_stub_1064, NULL, 1064),
    NAME_FUNC_OFFSET(38324, gl_dispatch_stub_1065, gl_dispatch_stub_1065, NULL, 1065),
    NAME_FUNC_OFFSET(38340, gl_dispatch_stub_1066, gl_dispatch_stub_1066, NULL, 1066),
    NAME_FUNC_OFFSET(38357, gl_dispatch_stub_1067, gl_dispatch_stub_1067, NULL, 1067),
    NAME_FUNC_OFFSET(38374, gl_dispatch_stub_1068, gl_dispatch_stub_1068, NULL, 1068),
    NAME_FUNC_OFFSET(38392, gl_dispatch_stub_1069, gl_dispatch_stub_1069, NULL, 1069),
    NAME_FUNC_OFFSET(38415, gl_dispatch_stub_1070, gl_dispatch_stub_1070, NULL, 1070),
    NAME_FUNC_OFFSET(38448, gl_dispatch_stub_1071, gl_dispatch_stub_1071, NULL, 1071),
    NAME_FUNC_OFFSET(38486, gl_dispatch_stub_1072, gl_dispatch_stub_1072, NULL, 1072),
    NAME_FUNC_OFFSET(38505, gl_dispatch_stub_1089, gl_dispatch_stub_1089, NULL, 1089),
    NAME_FUNC_OFFSET(38521, gl_dispatch_stub_1090, gl_dispatch_stub_1090, NULL, 1090),
    NAME_FUNC_OFFSET(38540, glActiveShaderProgram, glActiveShaderProgram, NULL, 1098),
    NAME_FUNC_OFFSET(38565, glBindProgramPipeline, glBindProgramPipeline, NULL, 1099),
    NAME_FUNC_OFFSET(38590, glCreateShaderProgramv, glCreateShaderProgramv, NULL, 1100),
    NAME_FUNC_OFFSET(38616, glDeleteProgramPipelines, glDeleteProgramPipelines, NULL, 1101),
    NAME_FUNC_OFFSET(38644, glGenProgramPipelines, glGenProgramPipelines, NULL, 1102),
    NAME_FUNC_OFFSET(38669, glGetProgramPipelineInfoLog, glGetProgramPipelineInfoLog, NULL, 1103),
    NAME_FUNC_OFFSET(38700, glGetProgramPipelineiv, glGetProgramPipelineiv, NULL, 1104),
    NAME_FUNC_OFFSET(38726, glIsProgramPipeline, glIsProgramPipeline, NULL, 1105),
    NAME_FUNC_OFFSET(38749, glProgramUniform1f, glProgramUniform1f, NULL, 1109),
    NAME_FUNC_OFFSET(38771, glProgramUniform1fv, glProgramUniform1fv, NULL, 1110),
    NAME_FUNC_OFFSET(38794, glProgramUniform1i, glProgramUniform1i, NULL, 1111),
    NAME_FUNC_OFFSET(38816, glProgramUniform1iv, glProgramUniform1iv, NULL, 1112),
    NAME_FUNC_OFFSET(38839, glProgramUniform1ui, glProgramUniform1ui, NULL, 1113),
    NAME_FUNC_OFFSET(38862, glProgramUniform1uiv, glProgramUniform1uiv, NULL, 1114),
    NAME_FUNC_OFFSET(38886, glProgramUniform2f, glProgramUniform2f, NULL, 1117),
    NAME_FUNC_OFFSET(38908, glProgramUniform2fv, glProgramUniform2fv, NULL, 1118),
    NAME_FUNC_OFFSET(38931, glProgramUniform2i, glProgramUniform2i, NULL, 1119),
    NAME_FUNC_OFFSET(38953, glProgramUniform2iv, glProgramUniform2iv, NULL, 1120),
    NAME_FUNC_OFFSET(38976, glProgramUniform2ui, glProgramUniform2ui, NULL, 1121),
    NAME_FUNC_OFFSET(38999, glProgramUniform2uiv, glProgramUniform2uiv, NULL, 1122),
    NAME_FUNC_OFFSET(39023, glProgramUniform3f, glProgramUniform3f, NULL, 1125),
    NAME_FUNC_OFFSET(39045, glProgramUniform3fv, glProgramUniform3fv, NULL, 1126),
    NAME_FUNC_OFFSET(39068, glProgramUniform3i, glProgramUniform3i, NULL, 1127),
    NAME_FUNC_OFFSET(39090, glProgramUniform3iv, glProgramUniform3iv, NULL, 1128),
    NAME_FUNC_OFFSET(39113, glProgramUniform3ui, glProgramUniform3ui, NULL, 1129),
    NAME_FUNC_OFFSET(39136, glProgramUniform3uiv, glProgramUniform3uiv, NULL, 1130),
    NAME_FUNC_OFFSET(39160, glProgramUniform4f, glProgramUniform4f, NULL, 1133),
    NAME_FUNC_OFFSET(39182, glProgramUniform4fv, glProgramUniform4fv, NULL, 1134),
    NAME_FUNC_OFFSET(39205, glProgramUniform4i, glProgramUniform4i, NULL, 1135),
    NAME_FUNC_OFFSET(39227, glProgramUniform4iv, glProgramUniform4iv, NULL, 1136),
    NAME_FUNC_OFFSET(39250, glProgramUniform4ui, glProgramUniform4ui, NULL, 1137),
    NAME_FUNC_OFFSET(39273, glProgramUniform4uiv, glProgramUniform4uiv, NULL, 1138),
    NAME_FUNC_OFFSET(39297, glProgramUniformMatrix2fv, glProgramUniformMatrix2fv, NULL, 1140),
    NAME_FUNC_OFFSET(39326, glProgramUniformMatrix2x3fv, glProgramUniformMatrix2x3fv, NULL, 1142),
    NAME_FUNC_OFFSET(39357, glProgramUniformMatrix2x4fv, glProgramUniformMatrix2x4fv, NULL, 1144),
    NAME_FUNC_OFFSET(39388, glProgramUniformMatrix3fv, glProgramUniformMatrix3fv, NULL, 1146),
    NAME_FUNC_OFFSET(39417, glProgramUniformMatrix3x2fv, glProgramUniformMatrix3x2fv, NULL, 1148),
    NAME_FUNC_OFFSET(39448, glProgramUniformMatrix3x4fv, glProgramUniformMatrix3x4fv, NULL, 1150),
    NAME_FUNC_OFFSET(39479, glProgramUniformMatrix4fv, glProgramUniformMatrix4fv, NULL, 1152),
    NAME_FUNC_OFFSET(39508, glProgramUniformMatrix4x2fv, glProgramUniformMatrix4x2fv, NULL, 1154),
    NAME_FUNC_OFFSET(39539, glProgramUniformMatrix4x3fv, glProgramUniformMatrix4x3fv, NULL, 1156),
    NAME_FUNC_OFFSET(39570, glUseProgramStages, glUseProgramStages, NULL, 1158),
    NAME_FUNC_OFFSET(39592, glValidateProgramPipeline, glValidateProgramPipeline, NULL, 1159),
    NAME_FUNC_OFFSET(39621, glDebugMessageCallback, glDebugMessageCallback, NULL, 1161),
    NAME_FUNC_OFFSET(39647, glDebugMessageCallback, glDebugMessageCallback, NULL, 1161),
    NAME_FUNC_OFFSET(39673, glDebugMessageControl, glDebugMessageControl, NULL, 1162),
    NAME_FUNC_OFFSET(39698, glDebugMessageControl, glDebugMessageControl, NULL, 1162),
    NAME_FUNC_OFFSET(39723, glDebugMessageInsert, glDebugMessageInsert, NULL, 1163),
    NAME_FUNC_OFFSET(39747, glDebugMessageInsert, glDebugMessageInsert, NULL, 1163),
    NAME_FUNC_OFFSET(39771, glGetDebugMessageLog, glGetDebugMessageLog, NULL, 1164),
    NAME_FUNC_OFFSET(39795, glGetDebugMessageLog, glGetDebugMessageLog, NULL, 1164),
    NAME_FUNC_OFFSET(39819, glGetObjectLabel, glGetObjectLabel, NULL, 1165),
    NAME_FUNC_OFFSET(39839, glGetObjectPtrLabel, glGetObjectPtrLabel, NULL, 1166),
    NAME_FUNC_OFFSET(39862, glObjectLabel, glObjectLabel, NULL, 1167),
    NAME_FUNC_OFFSET(39879, glObjectPtrLabel, glObjectPtrLabel, NULL, 1168),
    NAME_FUNC_OFFSET(39899, glPopDebugGroup, glPopDebugGroup, NULL, 1169),
    NAME_FUNC_OFFSET(39918, glPushDebugGroup, glPushDebugGroup, NULL, 1170),
    NAME_FUNC_OFFSET(39938, glSecondaryColor3fEXT, glSecondaryColor3fEXT, NULL, 1171),
    NAME_FUNC_OFFSET(39957, glSecondaryColor3fvEXT, glSecondaryColor3fvEXT, NULL, 1172),
    NAME_FUNC_OFFSET(39977, glMultiDrawElementsEXT, glMultiDrawElementsEXT, NULL, 1173),
    NAME_FUNC_OFFSET(39997, glFogCoordfEXT, glFogCoordfEXT, NULL, 1174),
    NAME_FUNC_OFFSET(40009, glFogCoordfvEXT, glFogCoordfvEXT, NULL, 1175),
    NAME_FUNC_OFFSET(40022, glVertexAttribI1iEXT, glVertexAttribI1iEXT, NULL, 1279),
    NAME_FUNC_OFFSET(40040, glVertexAttribI1uiEXT, glVertexAttribI1uiEXT, NULL, 1280),
    NAME_FUNC_OFFSET(40059, glVertexAttribI2iEXT, glVertexAttribI2iEXT, NULL, 1281),
    NAME_FUNC_OFFSET(40077, glVertexAttribI2ivEXT, glVertexAttribI2ivEXT, NULL, 1282),
    NAME_FUNC_OFFSET(40096, glVertexAttribI2uiEXT, glVertexAttribI2uiEXT, NULL, 1283),
    NAME_FUNC_OFFSET(40115, glVertexAttribI2uivEXT, glVertexAttribI2uivEXT, NULL, 1284),
    NAME_FUNC_OFFSET(40135, glVertexAttribI3iEXT, glVertexAttribI3iEXT, NULL, 1285),
    NAME_FUNC_OFFSET(40153, glVertexAttribI3ivEXT, glVertexAttribI3ivEXT, NULL, 1286),
    NAME_FUNC_OFFSET(40172, glVertexAttribI3uiEXT, glVertexAttribI3uiEXT, NULL, 1287),
    NAME_FUNC_OFFSET(40191, glVertexAttribI3uivEXT, glVertexAttribI3uivEXT, NULL, 1288),
    NAME_FUNC_OFFSET(40211, glVertexAttribI4iEXT, glVertexAttribI4iEXT, NULL, 1289),
    NAME_FUNC_OFFSET(40229, glVertexAttribI4ivEXT, glVertexAttribI4ivEXT, NULL, 1290),
    NAME_FUNC_OFFSET(40248, glVertexAttribI4uiEXT, glVertexAttribI4uiEXT, NULL, 1291),
    NAME_FUNC_OFFSET(40267, glVertexAttribI4uivEXT, glVertexAttribI4uivEXT, NULL, 1292),
    NAME_FUNC_OFFSET(40287, glTextureBarrierNV, glTextureBarrierNV, NULL, 1313),
    NAME_FUNC_OFFSET(40304, gl_dispatch_stub_1334, gl_dispatch_stub_1334, NULL, 1334),
    NAME_FUNC_OFFSET(40325, glAlphaFuncx, glAlphaFuncx, NULL, 1375),
    NAME_FUNC_OFFSET(40341, glClearColorx, glClearColorx, NULL, 1376),
    NAME_FUNC_OFFSET(40358, glClearDepthx, glClearDepthx, NULL, 1377),
    NAME_FUNC_OFFSET(40375, glColor4x, glColor4x, NULL, 1378),
    NAME_FUNC_OFFSET(40388, glDepthRangex, glDepthRangex, NULL, 1379),
    NAME_FUNC_OFFSET(40405, glFogx, glFogx, NULL, 1380),
    NAME_FUNC_OFFSET(40415, glFogxv, glFogxv, NULL, 1381),
    NAME_FUNC_OFFSET(40426, glFrustumf, glFrustumf, NULL, 1382),
    NAME_FUNC_OFFSET(40440, glFrustumx, glFrustumx, NULL, 1383),
    NAME_FUNC_OFFSET(40454, glLightModelx, glLightModelx, NULL, 1384),
    NAME_FUNC_OFFSET(40471, glLightModelxv, glLightModelxv, NULL, 1385),
    NAME_FUNC_OFFSET(40489, glLightx, glLightx, NULL, 1386),
    NAME_FUNC_OFFSET(40501, glLightxv, glLightxv, NULL, 1387),
    NAME_FUNC_OFFSET(40514, glLineWidthx, glLineWidthx, NULL, 1388),
    NAME_FUNC_OFFSET(40530, glLoadMatrixx, glLoadMatrixx, NULL, 1389),
    NAME_FUNC_OFFSET(40547, glMaterialx, glMaterialx, NULL, 1390),
    NAME_FUNC_OFFSET(40562, glMaterialxv, glMaterialxv, NULL, 1391),
    NAME_FUNC_OFFSET(40578, glMultMatrixx, glMultMatrixx, NULL, 1392),
    NAME_FUNC_OFFSET(40595, glMultiTexCoord4x, glMultiTexCoord4x, NULL, 1393),
    NAME_FUNC_OFFSET(40616, glNormal3x, glNormal3x, NULL, 1394),
    NAME_FUNC_OFFSET(40630, glOrthof, glOrthof, NULL, 1395),
    NAME_FUNC_OFFSET(40642, glOrthox, glOrthox, NULL, 1396),
    NAME_FUNC_OFFSET(40654, glPointSizex, glPointSizex, NULL, 1397),
    NAME_FUNC_OFFSET(40670, glPolygonOffsetx, glPolygonOffsetx, NULL, 1398),
    NAME_FUNC_OFFSET(40690, glRotatex, glRotatex, NULL, 1399),
    NAME_FUNC_OFFSET(40703, glSampleCoveragex, glSampleCoveragex, NULL, 1400),
    NAME_FUNC_OFFSET(40724, glScalex, glScalex, NULL, 1401),
    NAME_FUNC_OFFSET(40736, glTexEnvx, glTexEnvx, NULL, 1402),
    NAME_FUNC_OFFSET(40749, glTexEnvxv, glTexEnvxv, NULL, 1403),
    NAME_FUNC_OFFSET(40763, glTexParameterx, glTexParameterx, NULL, 1404),
    NAME_FUNC_OFFSET(40782, glTranslatex, glTranslatex, NULL, 1405),
    NAME_FUNC_OFFSET(40798, glClipPlanef, glClipPlanef, NULL, 1406),
    NAME_FUNC_OFFSET(40814, glClipPlanex, glClipPlanex, NULL, 1407),
    NAME_FUNC_OFFSET(40830, glGetClipPlanef, glGetClipPlanef, NULL, 1408),
    NAME_FUNC_OFFSET(40849, glGetClipPlanex, glGetClipPlanex, NULL, 1409),
    NAME_FUNC_OFFSET(40868, glGetFixedv, glGetFixedv, NULL, 1410),
    NAME_FUNC_OFFSET(40883, glGetLightxv, glGetLightxv, NULL, 1411),
    NAME_FUNC_OFFSET(40899, glGetMaterialxv, glGetMaterialxv, NULL, 1412),
    NAME_FUNC_OFFSET(40918, glGetTexEnvxv, glGetTexEnvxv, NULL, 1413),
    NAME_FUNC_OFFSET(40935, glGetTexParameterxv, glGetTexParameterxv, NULL, 1414),
    NAME_FUNC_OFFSET(40958, glPointParameterx, glPointParameterx, NULL, 1415),
    NAME_FUNC_OFFSET(40979, glPointParameterxv, glPointParameterxv, NULL, 1416),
    NAME_FUNC_OFFSET(41001, glTexParameterxv, glTexParameterxv, NULL, 1417),
    NAME_FUNC_OFFSET(41021, glBlendBarrier, glBlendBarrier, NULL, 1418),
    NAME_FUNC_OFFSET(41039, glPrimitiveBoundingBox, glPrimitiveBoundingBox, NULL, 1419),
    NAME_FUNC_OFFSET(41065, glPrimitiveBoundingBox, glPrimitiveBoundingBox, NULL, 1419),
    NAME_FUNC_OFFSET(41091, glPrimitiveBoundingBox, glPrimitiveBoundingBox, NULL, 1419),
    NAME_FUNC_OFFSET(-1, NULL, NULL, NULL, 0)
};

#undef NAME_FUNC_OFFSET
