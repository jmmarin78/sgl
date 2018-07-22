#pragma once

#include <EGL/egl.h>
#include <pre/log.h>
#include <cassert>

//#define	EGL(_Command)	{LOG_INFO(#_Command);_Command;segl::CheckEGLError(__FILE__,__FUNCTION__,__LINE__);}
#define	EGL(_Command)	{_Command;segl::CheckEGLError(__FILE__,__FUNCTION__,__LINE__);}

namespace segl
{
	inline	void CheckEGLError(const char* ipFile,const char* ipFunction,int iLine)
	{
		EGLint	err=eglGetError();
		if(err!=EGL_SUCCESS)
		{
			switch(err)
			{
				case EGL_NOT_INITIALIZED:		LOG_ERROR("EGL_NOT_INITIALIZED");break;
				case EGL_BAD_ACCESS:			LOG_ERROR("EGL_BAD_ACCESS");break;
				case EGL_BAD_ALLOC:				LOG_ERROR("EGL_BAD_ALLOC");break;
				case EGL_BAD_ATTRIBUTE:			LOG_ERROR("EGL_BAD_ATTRIBUTE");break;
				case EGL_BAD_CONFIG:			LOG_ERROR("EGL_BAD_CONFIG");break;
				case EGL_BAD_CONTEXT:			LOG_ERROR("EGL_BAD_CONTEXT");break;
				case EGL_BAD_CURRENT_SURFACE:	LOG_ERROR("EGL_BAD_CURRENT_SURFACE");break;
				case EGL_BAD_DISPLAY:			LOG_ERROR("EGL_BAD_DISPLAY");break;
				case EGL_BAD_MATCH:				LOG_ERROR("EGL_BAD_MATCH");break;
				case EGL_BAD_NATIVE_PIXMAP:		LOG_ERROR("EGL_BAD_NATIVE_PIXMAP");break;
				case EGL_BAD_NATIVE_WINDOW:		LOG_ERROR("EGL_BAD_NATIVE_WINDOW");break;
				case EGL_BAD_PARAMETER:			LOG_ERROR("EGL_BAD_PARAMETER");break;
				case EGL_BAD_SURFACE:			LOG_ERROR("EGL_BAD_SURFACE");break;
				case EGL_CONTEXT_LOST:			LOG_ERROR("EGL_CONTEXT_LOST");break;
					
			}
			
			LOG_ERROR("EGL ERROR %d : File(%s) Function(%s) Line(%d)",err,ipFile,ipFunction,iLine);
			assert(0);
		}
	}
}








