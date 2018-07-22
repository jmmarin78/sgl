# sgl
OpenGL standardization library

## Version
0.000...1 So please keep waiting a while

## Description
This library aims to be an abstraction of the non standardized things of opengl.
In the file sgl/gl.h we have the necessary "includes" as well as the "defines" not standardized in opengl. To standardize it, an S will be added to the beginning of the "define" or function in particular. For example, if, depending of the platform there is a define such as:
GL_SOME_OPTION_OES
GL_SOME_OPTION_EXT
GL_SOME_OPTION_ARB
...
will be standardized by: SGL_SOME_OPTION

## Dependencies
The dependencies are:
- pre: https://github.com/jmmarin78/pre

