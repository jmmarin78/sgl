#pragma once

#include <pre/gl.h>

// ************************************************************
// Common functions
// ************************************************************
#include <pre_deprecated.h>
#include <pre/log.h>
#include <cassert>

namespace glu
{
	inline	void	checkGLError(const char* ipFile,const char* ipFunction,int iLine)
	{
		GLenum	err = glGetError();
		bool	has_error=false;
		while (err != GL_NO_ERROR)
		{
			has_error=true;
			switch(err)
			{
				case GL_INVALID_VALUE:
					LOG_ERROR("GL_INVALID_VALUE");
					break;
				case GL_INVALID_ENUM:
					LOG_ERROR("GL_INVALID_ENUM");
					break;
				case GL_INVALID_OPERATION:
					LOG_ERROR("GL_INVALID_OPERATION");
					break;
#if defined(GL_STACK_OVERFLOW)
				case GL_STACK_OVERFLOW:
					LOG_ERROR("GL_STACK_OVERFLOW");
					break;
#endif
#if defined(GL_STACK_UNDERFLOW)
				case GL_STACK_UNDERFLOW:
					LOG_ERROR("GL_STACK_UNDERFLOW");
					break;
#endif
				case GL_OUT_OF_MEMORY:
					LOG_ERROR("GL_OUT_OF_MEMORY");
					break;
				case GL_INVALID_FRAMEBUFFER_OPERATION:
					LOG_ERROR("GL_INVALID_FRAMEBUFFER_OPERATION");
					break;
					
				default:
					LOG_ERROR("UNKNOWN %d",err);
					break;
			}
			err = glGetError();
		}
		if(has_error)
		{
			LOG_ERROR("EGL ERROR %d : File(%s) Function(%s) Line(%d)",err,ipFile,ipFunction,iLine);
			assert(0);
		}
	}
	
#if	COMPILING_MODE & COMPILING_MODE_DEBUG
	inline	void	CheckOpenGLError(const char* ipFile,const char* ipFunction,int iLine)
	{
		checkGLError(ipFile, ipFunction, iLine);
	}
#else
	FORCE_INLINE	void	CheckOpenGLError(const char* ipFile,const char* ipFunction,int iLine){}
#endif

	inline	const char*	GetCheckFramebufferStatus()
	{
        const char*	ret = nullptr;
        GLenum      status = sglCheckFramebufferStatus(SGL_FRAMEBUFFER);

        switch (status)
		{
			case SGL_FRAMEBUFFER_COMPLETE:
				ret=0x0;
				break;
			case SGL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT:
				ret=("GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_EXT");
				break;
			case SGL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT:
				ret=("GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_EXT");
	#if defined(__APPLE__)
				//#warning GL_FRAMEBUFFER_INCOMPLETE_DUPLICATE_ATTACHMENT_EXT no existe en MAC
	#else
				//case GL_FRAMEBUFFER_INCOMPLETE_DUPLICATE_ATTACHMENT_EXT:
				//	return("GL_FRAMEBUFFER_INCOMPLETE_DUPLICATE_ATTACHMENT_EXT");
				//break;
	#endif
				break;
	#if defined(SGL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS)
			case SGL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS:
				ret= ("GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_EXT");
				/*
				 case SGL_FRAMEBUFFER_INCOMPLETE_FORMATS:
				 ret=("GL_FRAMEBUFFER_INCOMPLETE_FORMATS_EXT");
				 break;
				 */
				break;
	#endif
	#if defined(SGL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER)
			case SGL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER:
				ret= ("GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER_EXT");
				break;
			case SGL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER:
				ret= ("GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER_EXT");
				break;
	#endif
			case SGL_FRAMEBUFFER_UNSUPPORTED:
				ret= ("GL_FRAMEBUFFER_UNSUPPORTED_EXT");
				break;
			default:
				ret= ("Unknown FBO error");
				break;
		}
		CheckOpenGLError("","",0);
		return ret;

	}

}

//#define	GL(_Command)	{LOG_INFO(#_Command);_Command;glu::CheckOpenGLError(__FILE__,__FUNCTION__,__LINE__);}
#define	GL(_Command)	{_Command;glu::CheckOpenGLError(__FILE__,__FUNCTION__,__LINE__);}
