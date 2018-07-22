#pragma once

#include <pre.h>

// ************************************************************
// Generic GPU options
// ************************************************************
#define	__GPU_USE_SHADERS__	1

// ************************************************************
// Specific OpenGL options
// ************************************************************
#define	__OPENGL_USE_VAO__			1
#define	__OPENGL_USE_BUFFER_MAP__	1

#define	__USE_OPENGL_ES_VERSION__	3


// ************************************************************
// Specific Android options
// ************************************************************
#if (OS_PLATFORM & OS_PLATFORM_ANDROID)
#endif



// ************************************************************
// Headers
// ************************************************************
#if (OS_PLATFORM & OS_PLATFORM_ANDROID)
    #if (__USE_OPENGL_ES_VERSION__ == 3)
        #include <GLES3/gl3.h>
        #include <GLES3/gl3ext.h>
		#include <GLES2/gl2ext.h>
    #else
	    #include <GLES2/gl2.h>
	    #include <GLES2/gl2ext.h>
    #endif
#elif (OS_PLATFORM & OS_PLATFORM_IOS)
	#include <OpenGLES/ES3/gl.h>
	#include <OpenGLES/ES3/glext.h>
#elif (OS_PLATFORM & OS_PLATFORM_APPLE)
//	#include <OpenGL/OpenGL.h>
	#include <OpenGL/gl3.h>
	#include <OpenGL/gl3ext.h>
#elif (OS_PLATFORM & OS_PLATFORM_WINDOWS)
	#include <GL/glew.h>
#elif (OS_PLATFORM & OS_PLATFORM_LINUX)
	#define GL_GLEXT_PROTOTYPES
	#include <GL/gl.h>
	#include <GL/glx.h>
	#include <GL/glext.h>
#endif


// ************************************************************
// Some standarization defines
// ************************************************************
#if defined(GL_ALPHA)
	#define	SGL_ALPHA	GL_ALPHA
#else
	#define	SGL_ALPHA	0
#endif
#if defined(GL_ALPHA4)
	#define	SGL_ALPHA4	GL_ALPHA4
#else
	#define	SGL_ALPHA4	0
#endif
#if defined(GL_ALPHA8)
	#define	SGL_ALPHA8	GL_ALPHA8
#else
	#define	SGL_ALPHA8	0
#endif
#if defined(GL_ALPHA12)
	#define	SGL_ALPHA12	GL_ALPHA12
#else
	#define	SGL_ALPHA12	0
#endif
#if defined(GL_ALPHA16)
	#define	SGL_ALPHA16	GL_ALPHA16
#else
	#define	SGL_ALPHA16	0
#endif
#if defined(GL_COMPRESSED_ALPHA)
	#define	SGL_COMPRESSED_ALPHA	GL_COMPRESSED_ALPHA
#else
	#define	SGL_COMPRESSED_ALPHA	0
#endif

#if defined(GL_COMPRESSED_LUMINANCE)
	#define	SGL_COMPRESSED_LUMINANCE	GL_COMPRESSED_LUMINANCE
#else
	#define	SGL_COMPRESSED_LUMINANCE	0
#endif
#if defined(GL_COMPRESSED_LUMINANCE_ALPHA)
	#define	SGL_COMPRESSED_LUMINANCE_ALPHA	GL_COMPRESSED_LUMINANCE_ALPHA
#else
	#define	SGL_COMPRESSED_LUMINANCE_ALPHA	0
#endif
#if defined(GL_COMPRESSED_INTENSITY)
	#define	SGL_COMPRESSED_INTENSITY	GL_COMPRESSED_INTENSITY
#else
	#define	SGL_COMPRESSED_INTENSITY	0
#endif
#if defined(GL_COMPRESSED_RGB)
	#define	SGL_COMPRESSED_RGB	GL_COMPRESSED_RGB
#else
	#define	SGL_COMPRESSED_RGB	0
#endif
#if defined(GL_COMPRESSED_RGBA)
	#define	SGL_COMPRESSED_RGBA	GL_COMPRESSED_RGBA
#else
	#define	SGL_COMPRESSED_RGBA	0
#endif
#if defined(GL_LUMINANCE)
	#define	SGL_LUMINANCE	GL_LUMINANCE
#else
	#define	SGL_LUMINANCE	0
#endif
#if defined(GL_LUMINANCE4)
	#define	SGL_LUMINANCE4	GL_LUMINANCE4
#else
	#define	SGL_LUMINANCE4	0
#endif
#if defined(GL_LUMINANCE8)
	#define	SGL_LUMINANCE8	GL_LUMINANCE8
#else
	#define	SGL_LUMINANCE8	0
#endif
#if defined(GL_LUMINANCE12)
	#define	SGL_LUMINANCE12	GL_LUMINANCE12
#else
	#define	SGL_LUMINANCE12	0
#endif
#if defined(GL_LUMINANCE16)
	#define	SGL_LUMINANCE16	GL_LUMINANCE16
#else
	#define	SGL_LUMINANCE16	0
#endif
#if defined(GL_LUMINANCE_ALPHA)
	#define	SGL_LUMINANCE_ALPHA	GL_LUMINANCE_ALPHA
#else
	#define	SGL_LUMINANCE_ALPHA	0
#endif
#if defined(GL_LUMINANCE4_ALPHA4)
	#define	SGL_LUMINANCE4_ALPHA4	GL_LUMINANCE4_ALPHA4
#else
	#define	SGL_LUMINANCE4_ALPHA4	0
#endif
#if defined(GL_LUMINANCE6_ALPHA2)
	#define	SGL_LUMINANCE6_ALPHA2	GL_LUMINANCE6_ALPHA2
#else
	#define	SGL_LUMINANCE6_ALPHA2	0
#endif
#if defined(GL_LUMINANCE8_ALPHA8)
	#define	SGL_LUMINANCE8_ALPHA8	GL_LUMINANCE8_ALPHA8
#else
	#define	SGL_LUMINANCE8_ALPHA8	0
#endif
#if defined(GL_LUMINANCE12_ALPHA4)
	#define	SGL_LUMINANCE12_ALPHA4	GL_LUMINANCE12_ALPHA4
#else
	#define	SGL_LUMINANCE12_ALPHA4	0
#endif
#if defined(GL_LUMINANCE12_ALPHA12)
	#define	SGL_LUMINANCE12_ALPHA12	GL_LUMINANCE12_ALPHA12
#else
	#define	SGL_LUMINANCE12_ALPHA12	0
#endif
#if defined(GL_LUMINANCE16_ALPHA16)
	#define	SGL_LUMINANCE16_ALPHA16	GL_LUMINANCE16_ALPHA16
#else
	#define	SGL_LUMINANCE16_ALPHA16	0
#endif
#if defined(GL_INTENSITY)
	#define	SGL_INTENSITY	GL_INTENSITY
#else
	#define	SGL_INTENSITY	0
#endif
#if defined(GL_INTENSITY4)
	#define	SGL_INTENSITY4	GL_INTENSITY4
#else
	#define	SGL_INTENSITY4	0
#endif
#if defined(GL_INTENSITY8)
	#define	SGL_INTENSITY8	GL_INTENSITY8
#else
	#define	SGL_INTENSITY8	0
#endif
#if defined(GL_INTENSITY12)
	#define	SGL_INTENSITY12	GL_INTENSITY12
#else
	#define	SGL_INTENSITY12	0
#endif
#if defined(GL_INTENSITY16)
	#define	SGL_INTENSITY16	GL_INTENSITY16
#else
	#define	SGL_INTENSITY16	0
#endif
#if defined(GL_R3_G3_B2)
	#define	SGL_R3_G3_B2	GL_R3_G3_B2
#else
	#define	SGL_R3_G3_B2	0
#endif
#if defined(GL_RGB)
	#define	SGL_RGB	GL_RGB
#else
	#define	SGL_RGB	0
#endif
#if defined(GL_RGB4)
	#define	SGL_RGB4	GL_RGB4
#else
	#define	SGL_RGB4	0
#endif
#if defined(GL_RGB5)
	#define	SGL_RGB5	GL_RGB5
#else
	#define	SGL_RGB5	0
#endif
#if defined(GL_RGB8)
	#define	SGL_RGB8	GL_RGB8
#elif defined(GL_RGB8_OES)
	#define	SGL_RGB8	GL_RGB8_OES
#else
	#define	SGL_RGB8	0
#endif
#if defined(GL_RGB10)
	#define	SGL_RGB10	GL_RGB10
#else
	#define	SGL_RGB10	0
#endif
#if defined(GL_RGB12)
	#define	SGL_RGB12	GL_RGB12
#else
	#define	SGL_RGB12	0
#endif
#if defined(GL_RGB16)
	#define	SGL_RGB16	GL_RGB16
#else
	#define	SGL_RGB16	0
#endif
#if defined(GL_RGBA)
	#define	SGL_RGBA	GL_RGBA
#else
	#define	SGL_RGBA	0
#endif
#if defined(GL_RGBA2)
	#define	SGL_RGBA2	GL_RGBA2
#else
	#define	SGL_RGBA2	0
#endif
#if defined(GL_RGBA4)
	#define	SGL_RGBA4	GL_RGBA4
#else
	#define	SGL_RGBA4	0
#endif
#if defined(GL_RGB5_A1)
	#define	SGL_RGB5_A1	GL_RGB5_A1
#else
	#define	SGL_RGB5_A1	0
#endif
#if defined(GL_RGBA8)
	#define	SGL_RGBA8	GL_RGBA8
#elif defined(GL_RGBA8_OES)
	#define	SGL_RGBA8	GL_RGBA8_OES
#else
	#define	SGL_RGBA8	0
#endif
#if defined(GL_RGB10_A2)
	#define	SGL_RGB10_A2	GL_RGB10_A2
#else
	#define	SGL_RGB10_A2	0
#endif
#if defined(GL_RGBA12)
	#define	SGL_RGBA12	GL_RGBA12
#else
	#define	SGL_RGBA12	0
#endif
#if defined(GL_RGBA16)
	#define	SGL_RGBA16	GL_RGBA16
#else
	#define	SGL_RGBA16	0
#endif
#if defined(GL_SLUMINANCE)
	#define	SGL_SLUMINANCE	GL_SLUMINANCE
#else
	#define	SGL_SLUMINANCE	0
#endif
#if defined(GL_SLUMINANCE8)
	#define	SGL_SLUMINANCE8	GL_SLUMINANCE8
#else
	#define	SGL_SLUMINANCE8	0
#endif
#if defined(GL_SLUMINANCE_ALPHA)
	#define	SGL_SLUMINANCE_ALPHA	GL_SLUMINANCE_ALPHA
#else
	#define	SGL_SLUMINANCE_ALPHA	0
#endif
#if defined(GL_SLUMINANCE8_ALPHA8)
	#define	SGL_SLUMINANCE8_ALPHA8	GL_SLUMINANCE8_ALPHA8
#else
	#define	SGL_SLUMINANCE8_ALPHA8	0
#endif
#if defined(GL_SRGB)
	#define	SGL_SRGB	GL_SRGB
#else
	#define	SGL_SRGB	0
#endif
#if defined(GL_SRGB8)
	#define	SGL_SRGB8	GL_SRGB8
#else
	#define	SGL_SRGB8	0
#endif
#if defined(GL_SRGB_ALPHA)
	#define	SGL_SRGB_ALPHA	GL_SRGB_ALPHA
#else
	#define	SGL_SRGB_ALPHA	0
#endif
#if defined(GL_SRGB8_ALPHA8)
	#define	SGL_SRGB8_ALPHA8	GL_SRGB8_ALPHA8
#else
	#define	SGL_SRGB8_ALPHA8	0
#endif
#if defined(GL_DEPTH_COMPONENT16_OES)
	#define	SGL_DEPTH_COMPONENT16				GL_DEPTH_COMPONENT16_OES
#else
	#define	SGL_DEPTH_COMPONENT16					GL_DEPTH_COMPONENT16
#endif
#if defined(GL_DEPTH_COMPONENT24_OES)
	#define	SGL_DEPTH_COMPONENT24								GL_DEPTH_COMPONENT24_OES
#else
	#define	SGL_DEPTH_COMPONENT24								GL_DEPTH_COMPONENT24
#endif
#if defined(GL_DEPTH_COMPONENT32_OES)
	#define	SGL_DEPTH_COMPONENT32								GL_DEPTH_COMPONENT32_OES
#else
	#if defined(GL_DEPTH_COMPONENT32)
		#define	SGL_DEPTH_COMPONENT32							GL_DEPTH_COMPONENT32
	#else
		#define	SGL_DEPTH_COMPONENT32							0
	#endif
#endif




// Format
#if defined(GL_UNSIGNED_BYTE_3_3_2)
	#define	SGL_UNSIGNED_BYTE_3_3_2	GL_UNSIGNED_BYTE_3_3_2
#else
	#define	SGL_UNSIGNED_BYTE_3_3_2	0
#endif
#if defined(GL_UNSIGNED_BYTE_2_3_3_REV)
	#define	SGL_UNSIGNED_BYTE_2_3_3_REV	GL_UNSIGNED_BYTE_2_3_3_REV
#else
	#define	SGL_UNSIGNED_BYTE_2_3_3_REV	0
#endif
#if defined(GL_UNSIGNED_SHORT_5_6_5)
	#define	SGL_UNSIGNED_SHORT_5_6_5	GL_UNSIGNED_SHORT_5_6_5
#else
	#define	SGL_UNSIGNED_SHORT_5_6_5	0
#endif
#if defined(GL_UNSIGNED_SHORT_5_6_5_REV)
	#define	SGL_UNSIGNED_SHORT_5_6_5_REV	GL_UNSIGNED_SHORT_5_6_5_REV
#else
	#define	SGL_UNSIGNED_SHORT_5_6_5_REV	0
#endif
#if defined(GL_UNSIGNED_SHORT_4_4_4_4)
	#define	SGL_UNSIGNED_SHORT_4_4_4_4	GL_UNSIGNED_SHORT_4_4_4_4
#else
	#define	SGL_UNSIGNED_SHORT_4_4_4_4	0
#endif
#if defined(GL_UNSIGNED_SHORT_4_4_4_4_REV)
	#define	SGL_UNSIGNED_SHORT_4_4_4_4_REV	GL_UNSIGNED_SHORT_4_4_4_4_REV
#else
	#define	SGL_UNSIGNED_SHORT_4_4_4_4_REV	0
#endif
#if defined(GL_UNSIGNED_SHORT_5_5_5_1)
	#define	SGL_UNSIGNED_SHORT_5_5_5_1	GL_UNSIGNED_SHORT_5_5_5_1
#else
	#define	SGL_UNSIGNED_SHORT_5_5_5_1	0
#endif
#if defined(GL_UNSIGNED_SHORT_1_5_5_5_REV)
	#define	SGL_UNSIGNED_SHORT_1_5_5_5_REV	GL_UNSIGNED_SHORT_1_5_5_5_REV
#else
	#define	SGL_UNSIGNED_SHORT_1_5_5_5_REV	0
#endif
#if defined(GL_UNSIGNED_INT_8_8_8_8)
	#define	SGL_UNSIGNED_INT_8_8_8_8	GL_UNSIGNED_INT_8_8_8_8
#else
	#define	SGL_UNSIGNED_INT_8_8_8_8	0
#endif
#if defined(GL_UNSIGNED_INT_8_8_8_8_REV)
	#define	SGL_UNSIGNED_INT_8_8_8_8_REV	GL_UNSIGNED_INT_8_8_8_8_REV
#else
	#define	SGL_UNSIGNED_INT_8_8_8_8_REV	0
#endif
#if defined(GL_UNSIGNED_INT_10_10_10_2)
	#define	SGL_UNSIGNED_INT_10_10_10_2	GL_UNSIGNED_INT_10_10_10_2
#else
	#define	SGL_UNSIGNED_INT_10_10_10_2	0
#endif
#if defined(GL_UNSIGNED_INT_2_10_10_10_REV)
	#define	SGL_UNSIGNED_INT_2_10_10_10_REV	GL_UNSIGNED_INT_2_10_10_10_REV
#else
	#define	SGL_UNSIGNED_INT_2_10_10_10_REV	0
#endif






// Texture standarization
#if defined(GL_COMPARE_REF_TO_TEXTURE_EXT)
	#define	SGL_COMPARE_REF_TO_TEXTURE	GL_COMPARE_REF_TO_TEXTURE_EXT
#elif defined(GL_COMPARE_REF_TO_TEXTURE)
	#define	SGL_COMPARE_REF_TO_TEXTURE	GL_COMPARE_REF_TO_TEXTURE
#endif

#if defined(GL_TEXTURE_COMPARE_FUNC_EXT)
	#define	SGL_TEXTURE_COMPARE_FUNC	GL_TEXTURE_COMPARE_FUNC_EXT
#elif defined(GL_TEXTURE_COMPARE_FUNC)
	#define	SGL_TEXTURE_COMPARE_FUNC	GL_TEXTURE_COMPARE_FUNC
#endif

#if defined(GL_TEXTURE_COMPARE_MODE_EXT)
	#define	SGL_TEXTURE_COMPARE_MODE	GL_TEXTURE_COMPARE_MODE_EXT
#elif defined(GL_TEXTURE_COMPARE_MODE)
	#define	SGL_TEXTURE_COMPARE_MODE	GL_TEXTURE_COMPARE_MODE
#endif


#if defined(GL_TEXTURE0_ARB)
	#define	SGL_TEXTURE0				GL_TEXTURE0_ARB
#else
	#define	SGL_TEXTURE0				GL_TEXTURE0
#endif
#if defined(GL_TEXTURE_1D)
	#define SGL_TEXTURE_1D				GL_TEXTURE_1D
	#define	SGL_TEXTURE_BINDING_1D		GL_TEXTURE_BINDING_1D
#else
	#define SGL_TEXTURE_1D				0
	#define	SGL_TEXTURE_BINDING_1D		0
#endif
#if defined(GL_TEXTURE_2D)
	#define SGL_TEXTURE_2D				GL_TEXTURE_2D
	#define	SGL_TEXTURE_BINDING_2D		GL_TEXTURE_BINDING_2D
#else
	#define SGL_TEXTURE_2D				0
	#define	SGL_TEXTURE_BINDING_2D		0
#endif

#if defined (GL_TEXTURE_EXTERNAL_OES)
#	define SGL_TEXTURE_EXTERNAL	GL_TEXTURE_EXTERNAL_OES
#else
#	define SGL_TEXTURE_EXTERNAL	0
#endif

#if defined(GL_TEXTURE_3D)
	#define SGL_TEXTURE_3D				GL_TEXTURE_3D
	#define	SGL_TEXTURE_BINDING_3D		GL_TEXTURE_BINDING_3D
#else
	#define SGL_TEXTURE_3D				0
	#define	SGL_TEXTURE_BINDING_3D		0
#endif
#if defined(GL_TEXTURE_CUBE_MAP)
	#define SGL_TEXTURE_CUBE_MAP			GL_TEXTURE_CUBE_MAP
	#define	SGL_TEXTURE_BINDING_CUBE_MAP	GL_TEXTURE_BINDING_CUBE_MAP
#else
	#define SGL_TEXTURE_CUBE_MAP			0
	#define	SGL_TEXTURE_BINDING_CUBE_MAP	0
#endif
#if defined(GL_TEXTURE_CUBE_RECTANGLE_ARB)
	#define SGL_TEXTURE_CUBE_RECTANGLE	GL_TEXTURE_CUBE_RECTANGLE_ARB
#else
	#define SGL_TEXTURE_CUBE_RECTANGLE	0
#endif
#if defined(GL_TEXTURE_ARRAY)
	#define SGL_TEXTURE_ARRAY			GL_TEXTURE_ARRAY
#else
	#define SGL_TEXTURE_ARRAY			0
#endif

#if defined(GL_SAMPLER_2D_SHADOW_EXT)
	#define SGL_SAMPLER_2D_SHADOW			GL_SAMPLER_2D_SHADOW_EXT
#elif defined(GL_SAMPLER_2D_SHADOW_OES)
	#define SGL_SAMPLER_2D_SHADOW			GL_SAMPLER_2D_SHADOW_OES
#elif defined(GL_SAMPLER_2D_SHADOW)
	#define SGL_SAMPLER_2D_SHADOW			GL_SAMPLER_2D_SHADOW
#endif


// Frmabuffer
#if defined(GL_FRAMEBUFFER_BINDING_OES)
	#define SGL_FRAMEBUFFER_BINDING	GL_FRAMEBUFFER_BINDING_OES
#else
	#define SGL_FRAMEBUFFER_BINDING	GL_FRAMEBUFFER_BINDING
#endif

#if defined(GL_READ_FRAMEBUFFER_EXT)
	#define	SGL_READ_FRAMEBUFFER	GL_READ_FRAMEBUFFER_EXT
	#define	SGL_WRITE_FRAMEBUFFER	GL_WRITE_FRAMEBUFFER_EXT
#else
#endif



#if defined(GL_COLOR_ATTACHMENT0_OES)
	#define	SGL_COLOR_ATTACHMENT0								GL_COLOR_ATTACHMENT0_OES
#elif defined(GL_COLOR_ATTACHMENT0_EXT)
	#define	SGL_COLOR_ATTACHMENT0								GL_COLOR_ATTACHMENT0_EXT
#elif defined(GL_COLOR_ATTACHMENT0)
	#define	SGL_COLOR_ATTACHMENT0								GL_COLOR_ATTACHMENT0
#endif

#if defined(GL_DEPTH_ATTACHMENT_OES)
	#define	SGL_DEPTH_ATTACHMENT								GL_DEPTH_ATTACHMENT_OES
#elif defined(GL_DEPTH_ATTACHMENT_EXT)
	#define	SGL_DEPTH_ATTACHMENT								GL_DEPTH_ATTACHMENT_EXT
#elif defined(GL_DEPTH_ATTACHMENT)
	#define	SGL_DEPTH_ATTACHMENT								GL_DEPTH_ATTACHMENT
#endif

#if defined(GL_STENCIL_ATTACHMENT_OES)
	#define	SGL_STENCIL_ATTACHMENT								GL_STENCIL_ATTACHMENT_OES
#elif defined(GL_STENCIL_ATTACHMENT_EXT)
	#define	SGL_STENCIL_ATTACHMENT								GL_STENCIL_ATTACHMENT_EXT
#elif defined(GL_STENCIL_ATTACHMENT)
	#define	SGL_STENCIL_ATTACHMENT								GL_STENCIL_ATTACHMENT
#endif


// Render buffers **************************************************************

#if defined(GL_RENDERBUFFER_BINDING_OES)
	#define SGL_RENDERBUFFER_BINDING	GL_RENDERBUFFER_BINDING_OES
#else
	#define SGL_RENDERBUFFER_BINDING	GL_RENDERBUFFER_BINDING
#endif

#if defined(GL_RENDERBUFFER_HEIGHT_OES)
	#define	SGL_RENDERBUFFER_HEIGHT									GL_RENDERBUFFER_HEIGHT_OES
#elif defined(GL_RENDERBUFFER_HEIGHT_EXT)
	#define	SGL_RENDERBUFFER_HEIGHT									GL_RENDERBUFFER_HEIGHT_EXT
#elif defined(GL_RENDERBUFFER_HEIGHT)
	#define	SGL_RENDERBUFFER_HEIGHT									GL_RENDERBUFFER_HEIGHT
#endif


#if defined(GL_RENDERBUFFER_WIDTH_OES)
	#define	SGL_RENDERBUFFER_WIDTH									GL_RENDERBUFFER_WIDTH_OES
#elif defined(GL_RENDERBUFFER_WIDTH_EXT)
	#define	SGL_RENDERBUFFER_WIDTH									GL_RENDERBUFFER_WIDTH_EXT
#elif defined(GL_RENDERBUFFER_WIDTH)
	#define	SGL_RENDERBUFFER_WIDTH									GL_RENDERBUFFER_WIDTH
#endif


#if defined(GL_RENDERBUFFER_OES)
	#define	SGL_RENDERBUFFER									GL_RENDERBUFFER_OES
#elif defined(GL_RENDERBUFFER_EXT)
	#define	SGL_RENDERBUFFER									GL_RENDERBUFFER_EXT
#elif defined(GL_RENDERBUFFER)
	#define	SGL_RENDERBUFFER									GL_RENDERBUFFER
#endif




#if defined(GL_COMPUTE_SHADER_ARB)
	#define	SGL_COMPUTE_SHADER		GL_COMPUTE_SHADER_ARB
#elif defined(GL_COMPUTE_SHADER)
	#define	SGL_COMPUTE_SHADER		GL_COMPUTE_SHADER
#endif


#if defined(GL_VERTEX_SHADER_ARB)
	#define	SGL_VERTEX_SHADER		GL_VERTEX_SHADER_ARB
#elif defined(GL_VERTEX_SHADER)
	#define	SGL_VERTEX_SHADER		GL_VERTEX_SHADER
#endif

#if defined(GL_FRAGMENT_SHADER_ARB)
	#define	SGL_FRAGMENT_SHADER		GL_FRAGMENT_SHADER_ARB
#elif defined(GL_FRAGMENT_SHADER)
	#define	SGL_FRAGMENT_SHADER		GL_FRAGMENT_SHADER
#endif

#if defined(GL_GEOMETRY_SHADER_ARB)
	#define	SGL_GEOMETRY_SHADER		GL_GEOMETRY_SHADER_ARB
#elif defined(GL_GEOMETRY_SHADER)
	#define	SGL_GEOMETRY_SHADER		GL_GEOMETRY_SHADER
#elif defined(GL_GEOMETRY_SHADER_EXT)
	#define	SGL_GEOMETRY_SHADER		GL_GEOMETRY_SHADER_EXT
#endif

#if defined(GL_TESS_CONTROL_SHADER_ARB)
	#define	SGL_TESS_CONTROL_SHADER		GL_TESS_CONTROL_SHADER_ARB
#elif defined(GL_TESS_CONTROL_SHADER)
	#define	SGL_TESS_CONTROL_SHADER		GL_TESS_CONTROL_SHADER
#elif defined(GL_TESS_CONTROL_SHADER_EXT)
	#define	SGL_TESS_CONTROL_SHADER		GL_TESS_CONTROL_SHADER_EXT
#endif

#if defined(GL_TESS_EVALUATION_SHADER_ARB)
	#define	SGL_TESS_EVALUATION_SHADER		GL_TESS_EVALUATION_SHADER_ARB
#elif defined(GL_TESS_EVALUATION_SHADER)
	#define	SGL_TESS_EVALUATION_SHADER		GL_TESS_EVALUATION_SHADER
#elif defined(GL_TESS_EVALUATION_SHADER_EXT)
	#define	SGL_TESS_EVALUATION_SHADER		GL_TESS_EVALUATION_SHADER_EXT
#endif


#if defined(GL_MATRIX_INDEX_ARRAY_OES)
	#define	SGL_MATRIX_INDEX_ARRAY			GL_MATRIX_INDEX_ARRAY_OES
#elif defined(GL_MATRIX_INDEX_ARRAY_ARB)
	#define	SGL_MATRIX_INDEX_ARRAY			GL_MATRIX_INDEX_ARRAY_ARB
#elif defined(GL_MATRIX_INDEX_ARRAY)
	#define	SGL_MATRIX_INDEX_ARRAY			GL_MATRIX_INDEX_ARRAY
#endif

#if defined(GL_WEIGHT_ARRAY_OES)
	#define	SGL_WEIGHT_ARRAY				GL_WEIGHT_ARRAY_OES
#elif defined(GL_WEIGHT_ARRAY_ARB)
	#define	SGL_WEIGHT_ARRAY				GL_WEIGHT_ARRAY_ARB
#elif defined(GL_WEIGHT_ARRAY)
	#define	SGL_WEIGHT_ARRAY				GL_WEIGHT_ARRAY
#endif

#if defined(GL_POINT_SIZE_ARRAY_OES)
	#define	SGL_POINT_SIZE_ARRAY			GL_POINT_SIZE_ARRAY_OES
#elif defined(GL_POINT_SIZE_ARRAY_ARB)
	#define	SGL_POINT_SIZE_ARRAY			GL_POINT_SIZE_ARRAY_ARB
#elif defined(GL_POINT_SIZE_ARRAY)
	#define	SGL_POINT_SIZE_ARRAY			GL_POINT_SIZE_ARRAY
#endif

#if		defined(GL_MIN)
	#define	SGL_MIN						GL_MIN
#elif	defined(GL_MIN_EXT)
	#define	SGL_MIN						GL_MIN_EXT
#endif
#if		defined(GL_MAX)
	#define	SGL_MAX						GL_MAX
#elif	defined(GL_MAX_EXT)
	#define	SGL_MAX						GL_MAX_EXT
#endif
#if defined(GL_FUNC_ADD_OES)
	#define	SGL_FUNC_ADD				GL_FUNC_ADD_OES
#else
	#define	SGL_FUNC_ADD				GL_FUNC_ADD
#endif
#if defined(GL_FUNC_SUBTRACT_OES)
	#define	SGL_FUNC_SUBTRACT			GL_FUNC_SUBTRACT_OES
#else
	#define	SGL_FUNC_SUBTRACT			GL_FUNC_SUBTRACT
#endif
#if defined(GL_FUNC_REVERSE_SUBTRACT_OES)
	#define	SGL_FUNC_REVERSE_SUBTRACT	GL_FUNC_REVERSE_SUBTRACT_OES
#else
	#define	SGL_FUNC_REVERSE_SUBTRACT	GL_FUNC_REVERSE_SUBTRACT
#endif

#if defined(GL_CW)
	#define	SGL_CW	GL_CW
	#define	SGL_CCW	GL_CCW
#else
	#define	SGL_CW	GL_RIGHT
	#define	SGL_CCW	GL_LEFT
#endif


// Tipos de mapeo **************************************************************
#if defined(GL_WRITE_ONLY_ARB)
	#define	SGL_WRITE_ONLY			GL_WRITE_ONLY_ARB
#elif defined(GL_WRITE_ONLY_OES)
	#define	SGL_WRITE_ONLY			GL_WRITE_ONLY_OES
#elif defined(GL_WRITE_ONLY)
	#define	SGL_WRITE_ONLY			GL_WRITE_ONLY
#else
	#define	SGL_WRITE_ONLY			0
#endif

#if defined(GL_READ_ONLY_ARB)
	#define	SGL_READ_ONLY			GL_READ_ONLY_ARB
#elif defined(GL_READ_ONLY_OES)
	#define	SGL_READ_ONLY			GL_READ_ONLY_OES
#elif defined(GL_READ_ONLY)
	#define	SGL_READ_ONLY			GL_READ_ONLY
#else
	#define	SGL_READ_ONLY			0
#endif

#if defined(GL_READ_WRITE_ARB)
	#define	SGL_READ_WRITE			GL_READ_WRITE_ARB
#elif defined(GL_READ_WRITE_OES)
	#define	SGL_READ_WRITE			GL_READ_WRITE_OES
#elif defined(GL_READ_WRITE)
	#define	SGL_READ_WRITE			GL_READ_WRITE
#else
	#define	SGL_READ_WRITE			0
#endif





// Tipos de creacion de vertex buffers******************************************
#if defined(GL_STATIC_DRAW_ARB)
	#define	SGL_STATIC_DRAW			GL_STATIC_DRAW_ARB
#elif defined(GL_STATIC_DRAW_OES)
	#define	SGL_STATIC_DRAW			GL_STATIC_DRAW_OES
#elif defined(GL_STATIC_DRAW)
	#define	SGL_STATIC_DRAW			GL_STATIC_DRAW
#else
	#define	SGL_STATIC_DRAW			0
#endif

#if defined(GL_DYNAMIC_DRAW_ARB)
	#define	SGL_DYNAMIC_DRAW			GL_DYNAMIC_DRAW_ARB
#elif defined(GL_DYNAMIC_DRAW_OES)
	#define	SGL_DYNAMIC_DRAW			GL_DYNAMIC_DRAW_OES
#elif defined(GL_DYNAMIC_DRAW)
	#define	SGL_DYNAMIC_DRAW			GL_DYNAMIC_DRAW
#else
	#define	SGL_DYNAMIC_DRAW			SGL_STATIC_DRAW
#endif

#if defined(GL_STREAM_DRAW_ARB)
	#define	SGL_STREAM_DRAW			GL_STREAM_DRAW_ARB
#elif defined(GL_STREAM_DRAW_OES)
	#define	SGL_STREAM_DRAW			GL_STREAM_DRAW_OES
#elif defined(GL_STREAM_DRAW)
	#define	SGL_STREAM_DRAW			GL_STREAM_DRAW
#else
	#define	SGL_STREAM_DRAW			SGL_DYNAMIC_DRAW
#endif



#if defined(GL_STATIC_READ_ARB)
	#define	SGL_STATIC_READ			GL_STATIC_READ_ARB
#elif defined(GL_STATIC_READ_OES)
	#define	SGL_STATIC_READ			GL_STATIC_READ_OES
#elif defined(GL_STATIC_READ)
	#define	SGL_STATIC_READ			GL_STATIC_READ
#else
	#define	SGL_STATIC_READ			0
#endif

#if defined(GL_DYNAMIC_READ_ARB)
	#define	SGL_DYNAMIC_READ			GL_DYNAMIC_READ_ARB
#elif defined(GL_DYNAMIC_READ_OES)
	#define	SGL_DYNAMIC_READ			GL_DYNAMIC_READ_OES
#elif defined(GL_DYNAMIC_READ)
	#define	SGL_DYNAMIC_READ			GL_DYNAMIC_READ
#else
	#define	SGL_DYNAMIC_READ			SGL_STATIC_READ
#endif

#if defined(GL_STREAM_READ_ARB)
	#define	SGL_STREAM_READ			GL_STREAM_READ_ARB
#elif defined(GL_STREAM_READ_OES)
	#define	SGL_STREAM_READ			GL_STREAM_READ_OES
#elif defined(GL_STREAM_READ)
	#define	SGL_STREAM_READ			GL_STREAM_READ
#else
	#define	SGL_STREAM_READ			SGL_DYNAMIC_READ
#endif



#if defined(GL_STATIC_COPY_ARB)
	#define	SGL_STATIC_COPY			GL_STATIC_COPY_ARB
#elif defined(GL_STATIC_COPY_OES)
	#define	SGL_STATIC_COPY			GL_STATIC_COPY_OES
#elif defined(GL_STATIC_COPY)
	#define	SGL_STATIC_COPY			GL_STATIC_COPY
#else
	#define	SGL_STATIC_COPY			0
#endif

#if defined(GL_DYNAMIC_COPY_ARB)
	#define	SGL_DYNAMIC_COPY			GL_DYNAMIC_COPY_ARB
#elif defined(GL_DYNAMIC_COPY_OES)
	#define	SGL_DYNAMIC_COPY			GL_DYNAMIC_COPY_OES
#elif defined(GL_DYNAMIC_COPY)
	#define	SGL_DYNAMIC_COPY			GL_DYNAMIC_COPY
#else
	#define	SGL_DYNAMIC_COPY			SGL_STATIC_COPY
#endif

#if defined(GL_STREAM_COPY_ARB)
	#define	SGL_STREAM_COPY			GL_STREAM_COPY_ARB
#elif defined(GL_STREAM_COPY_OES)
	#define	SGL_STREAM_COPY			GL_STREAM_COPY_OES
#elif defined(GL_STREAM_COPY)
	#define	SGL_STREAM_COPY			GL_STREAM_COPY
#else
	#define	SGL_STREAM_COPY			SGL_DYNAMIC_COPY
#endif

#if defined(GL_VERTEX_ARRAY_BINDING_APPLE)
	#define	SGL_VERTEX_ARRAY_BINDING	GL_VERTEX_ARRAY_BINDING_APPLE
#elif defined(GL_VERTEX_ARRAY_BINDING)
	#define	SGL_VERTEX_ARRAY_BINDING	GL_VERTEX_ARRAY_BINDING
#elif defined(GL_VERTEX_ARRAY_BINDING_OES)
	#define	SGL_VERTEX_ARRAY_BINDING	GL_VERTEX_ARRAY_BINDING_OES
#endif

#if __OPENGL_USE_VAO__
	#if defined(GL_OES_vertex_array_object) && !defined(__gl3_h_)

			#define	sglBindVertexArray			glBindVertexArrayOES
			#define	sglDeleteVertexArrays		glDeleteVertexArraysOES
			#define	sglGenVertexArrays			glGenVertexArraysOES
			#define	sglIsVertexArray			glIsVertexArrayOES

//	#elif (OS_PLATFORM & OS_PLATFORM_OSX)
//		#if defined(GL_APPLE_vertex_array_object)
//
//			#define	sglBindVertexArray			glBindVertexArrayAPPLE
//			#define	sglDeleteVertexArrays		glDeleteVertexArraysAPPLE
//			#define	sglGenVertexArrays			glGenVertexArraysAPPLE
//			#define	sglIsVertexArray			glIsVertexArrayAPPLE
//		#endif
	#else

		#define	sglBindVertexArray			glBindVertexArray
		#define	sglDeleteVertexArrays		glDeleteVertexArrays
		#define	sglGenVertexArrays			glGenVertexArrays
		#define	sglIsVertexArray			glIsVertexArray
	#endif
#endif


#if defined (SGL_READ_FRAMEBUFFER)
	#define	USE_DRAW_READ_PROFILE
#endif

// Shaders
#if defined(GLEE_EXTERN)

	#define	sglDeleteObject			glDeleteObjectARB
	#define	sglDeleteShader			glDeleteShader
	#define	sglGetInfoLog			glGetInfoLogARB
	#define	sglGetShaderInfoLog		glGetShaderInfoLog
	#define	sglGetProgramInfoLog	glGetProgramInfoLog
	#define	sglShaderSource			glShaderSourceARB
	#define	sglCompileShader		glCompileShaderARB
	#define	sglGetShaderiv			glGetShaderiv
	#define	sglGetAttribLocation	glGetAttribLocationARB
	#define	sglCreateShader			glCreateShader

	#define	SGLchar					GLcharARB

	#define	sglUniformuiv			glUniformuivEXT

#else

	#define	sglDeleteObject			glDeleteObject
	#define	sglDeleteShader			glDeleteShader
	#define	sglGetInfoLog			glGetInfoLog
	#define	sglGetShaderInfoLog		glGetShaderInfoLog
	#define	sglGetProgramInfoLog	glGetProgramInfoLog
	#define	sglShaderSource			glShaderSource
	#define	sglCompileShader		glCompileShader
	#define	sglGetShaderiv			glGetShaderiv
	#define	sglGetAttribLocation	glGetAttribLocation
	#define	sglCreateShader			glCreateShader

	#define	SGLchar					GLchar

	#define	sglUniformuiv			glUniformuiv

#endif


#if defined(GL_ARB_framebuffer_object)

	#define	sglDeleteFramebuffers			glDeleteFramebuffersEXT
	#define	sglFramebufferTexture2D			glFramebufferTexture2DEXT
	#define	sglFramebufferRenderbuffer		glFramebufferRenderbufferEXT
	#define	sglBindFramebuffer				glBindFramebufferEXT
	#define	sglGenFramebuffers				glGenFramebuffersEXT

	#define	sglDeleteRenderbuffers			glDeleteRenderbuffersEXT
	#define	sglGenRenderbuffers				glGenRenderbuffersEXT
	#define	sglBindRenderbuffer				glBindRenderbufferEXT
	#define	sglRenderbufferStorage			glRenderbufferStorageEXT
	#define	sglGetRenderbufferParameteriv	glGetRenderbufferParameterivEXT


#elif defined(GL_OES_framebuffer_object)

	#define	sglDeleteFramebuffers			glDeleteFramebuffersOES
	#define	sglFramebufferTexture2D			glFramebufferTexture2DOES
	#define	sglFramebufferRenderbuffer		glFramebufferRenderbufferOES
	#define	sglBindFramebuffer				glBindFramebufferOES
	#define	sglGenFramebuffers				glGenFramebuffersOES

	#define	sglDeleteRenderbuffers			glDeleteRenderbuffersOES
	#define	sglGenRenderbuffers				glGenRenderbuffersOES
	#define	sglBindRenderbuffer				glBindRenderbufferOES
	#define	sglRenderbufferStorage			glRenderbufferStorageOES
	#define	sglGetRenderbufferParameteriv	glGetRenderbufferParameterivOES
#else

	#define	sglDeleteFramebuffers			glDeleteFramebuffers
	#define	sglFramebufferTexture2D			glFramebufferTexture2D
	#define	sglFramebufferRenderbuffer		glFramebufferRenderbuffer
	#define	sglBindFramebuffer				glBindFramebuffer
	#define	sglGenFramebuffers				glGenFramebuffers

	#define	sglDeleteRenderbuffers			glDeleteRenderbuffers
	#define	sglGenRenderbuffers				glGenRenderbuffers
	#define	sglBindRenderbuffer				glBindRenderbuffer
	#define	sglRenderbufferStorage			glRenderbufferStorage
	#define	sglGetRenderbufferParameteriv	glGetRenderbufferParameteriv
#endif


#if defined(GL_TEXTURE0_ARB)
	#define sglBindBuffer				glBindBufferARB
	#define sglDeleteBuffers			glDeleteBuffersARB
	#define sglGenBuffers				glGenBuffersARB
	#define sglIsBuffer					glIsBufferARB
	#define sglBufferData				glBufferDataARB
	#define sglBufferSubData			glBufferSubDataARB
	#define sglGetBufferSubData			glGetBufferSubDataARB
	#define sglMapBuffer				glMapBufferARB
	#define sglUnmapBuffer				glUnmapBufferARB
	#define sglGetBufferParameteriv		glGetBufferParameterivARB
	#define sglGetBufferPointerv		glGetBufferPointervARB

	#define	sglGenerateMipmap			glGenerateMipmapEXT
#else

	#define sglBindBuffer				glBindBuffer
	#define sglDeleteBuffers			glDeleteBuffers
	#define sglGenBuffers				glGenBuffers
	#define sglIsBuffer					glIsBuffer
	#define sglBufferData				glBufferData
	#define sglBufferSubData			glBufferSubData
	#define sglGetBufferSubData			glGetBufferSubData

	#define sglGetBufferParameteriv		glGetBufferParameteriv
	#define sglGetBufferPointerv		glGetBufferPointerv


	#if defined(GL_OES_mapbuffer)
		#define sglMapBuffer			glMapBufferOES
		#define sglUnmapBuffer			glUnmapBufferOES
	#else
		#define sglMapBuffer			glMapBuffer
		#define sglUnmapBuffer			glUnmapBuffer
	#endif

	#if defined(__gl_es20ext_h_) || defined (GL_GENERATE_MIPMAP_HINT)
		#define	sglGenerateMipmap		glGenerateMipmap
	#else
		#if defined(GL_VERSION_3_1)
			#define	sglGenerateMipmap		glGenerateMipmap
		#else
			#define	sglGenerateMipmap		glGenerateMipmapOES
		#endif
	#endif
#endif
#if defined(GL_TEXTURE0_ARB)
	#define	sglMatrixIndexPointer			glMatrixIndexPointerARB
	#define	sglWeightPointer				glWeightPointerARB
	//#define	sglPointSizePointer			glPointSizePointer

#else
	#if defined(GL_OES_VERSION_1_0)
		#define	sglMatrixIndexPointer			glMatrixIndexPointerOES
		#define	sglWeightPointer				glWeightPointerOES
		#define	sglPointSizePointer				glPointSizePointerOES
		#define	sglFogCoordPointer				glFogCoordPointerOES
	#else
		#define	sglMatrixIndexPointer			glMatrixIndexPointer
		#define	sglWeightPointer				glWeightPointer
		#define	sglPointSizePointer				glPointSizePointer
		#define	sglFogCoordPointer				glFogCoordPointer
	#endif
#endif

#if defined(GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT)
	#define SGL_MAX_GEOMETRY_OUTPUT_VERTICES GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT
#else
	#define SGL_MAX_GEOMETRY_OUTPUT_VERTICES GL_MAX_GEOMETRY_OUTPUT_VERTICES
#endif

#if defined(GL_FRAMEBUFFER_OES)
	#define	SGL_FRAMEBUFFER										GL_FRAMEBUFFER_OES
#elif defined(GL_FRAMEBUFFER_EXT)
	#define	SGL_FRAMEBUFFER										GL_FRAMEBUFFER_EXT
#elif defined(GL_FRAMEBUFFER)
	#define	SGL_FRAMEBUFFER										GL_FRAMEBUFFER
#endif

#if defined(GL_FRAMEBUFFER_COMPLETE_OES)
	#define	SGL_FRAMEBUFFER_COMPLETE							GL_FRAMEBUFFER_COMPLETE_OES
#elif defined(GL_FRAMEBUFFER_COMPLETE_EXT)
	#define	SGL_FRAMEBUFFER_COMPLETE							GL_FRAMEBUFFER_COMPLETE_EXT
#elif defined(GL_FRAMEBUFFER_COMPLETE)
	#define	SGL_FRAMEBUFFER_COMPLETE							GL_FRAMEBUFFER_COMPLETE
#endif

#if defined(GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_OES)
	#define	SGL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT				GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_OES
#elif defined(GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_EXT)
	#define	SGL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT				GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_EXT
#elif defined(GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT)
	#define	SGL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT				GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT
#endif

#if defined(GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_OES)
	#define	SGL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT		GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_OES
#elif defined(GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_EXT)
	#define	SGL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT		GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_EXT
#elif defined(GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT)
	#define	SGL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT		GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT
#endif

#if defined(GL_FRAMEBUFFER_INCOMPLETE_DUPLICATE_ATTACHMENT_OES)
	#define	SGL_FRAMEBUFFER_INCOMPLETE_DUPLICATE_ATTACHMENT		GL_FRAMEBUFFER_INCOMPLETE_DUPLICATE_ATTACHMENT_OES
#elif defined(GL_FRAMEBUFFER_INCOMPLETE_DUPLICATE_ATTACHMENT_EXT)
	#define	SGL_FRAMEBUFFER_INCOMPLETE_DUPLICATE_ATTACHMENT		GL_FRAMEBUFFER_INCOMPLETE_DUPLICATE_ATTACHMENT_EXT
#elif defined(GL_FRAMEBUFFER_INCOMPLETE_DUPLICATE_ATTACHMENT)
	#define	SGL_FRAMEBUFFER_INCOMPLETE_DUPLICATE_ATTACHMENT		GL_FRAMEBUFFER_INCOMPLETE_DUPLICATE_ATTACHMENT
#endif

#if defined(GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_OES)
	#define	SGL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS				GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_OES
#elif defined(GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_EXT)
	#define	SGL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS				GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_EXT
#elif defined(GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS)
	#define	SGL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS				GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS
#endif

#if defined(GL_FRAMEBUFFER_INCOMPLETE_FORMATS_OES)
	#define	SGL_FRAMEBUFFER_INCOMPLETE_FORMATS					GL_FRAMEBUFFER_INCOMPLETE_FORMATS_OES
#elif defined(GL_FRAMEBUFFER_INCOMPLETE_FORMATS_EXT)
	#define	SGL_FRAMEBUFFER_INCOMPLETE_FORMATS					GL_FRAMEBUFFER_INCOMPLETE_FORMATS_EXT
#elif defined(GL_FRAMEBUFFER_INCOMPLETE_FORMATS)
	#define	SGL_FRAMEBUFFER_INCOMPLETE_FORMATS					GL_FRAMEBUFFER_INCOMPLETE_FORMATS
#endif

#if defined(GL_FRAMEBUFFER_UNSUPPORTED_OES)
	#define	SGL_FRAMEBUFFER_UNSUPPORTED							GL_FRAMEBUFFER_UNSUPPORTED_OES
#elif defined(GL_FRAMEBUFFER_UNSUPPORTED_EXT)
	#define	SGL_FRAMEBUFFER_UNSUPPORTED							GL_FRAMEBUFFER_UNSUPPORTED_EXT
#elif defined(GL_FRAMEBUFFER_UNSUPPORTED)
	#define	SGL_FRAMEBUFFER_UNSUPPORTED							GL_FRAMEBUFFER_UNSUPPORTED
#endif

#if defined(GL_ARB_framebuffer_object)
	#if (OS_PLATFORM & OS_PLATFORM_LINUX)
        #define	sglCheckFramebufferStatus		glCheckFramebufferStatusEXT
	#else
		#define	sglCheckFramebufferStatus		glCheckFramebufferStatus
	#endif
	//#define	sglCheckFramebufferStatus		glCheckFramebufferStatusEXT
#elif defined(GL_OES_framebuffer_object)
	#define	sglCheckFramebufferStatus		glCheckFramebufferStatusOES
#else
    #define	sglCheckFramebufferStatus		glCheckFramebufferStatus
#endif

#if defined(__APPLE__)
	#define sglProgramParameteri	glProgramParameteriEXT
#else
	#define sglProgramParameteri	glProgramParameteri
#endif


#if !defined(GLdouble)
	typedef double GLdouble;
	typedef double GLclampd;
#endif

#if !defined(GL_STACK_OVERFLOW)
#define GL_STACK_OVERFLOW                 0x0503
#endif
#if !defined(GL_STACK_UNDERFLOW)
#define GL_STACK_UNDERFLOW                0x0504
#endif
#if !defined(GL_TABLE_TOO_LARGE)
#define GL_TABLE_TOO_LARGE					0x8031
#endif

