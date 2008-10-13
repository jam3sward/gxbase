shader
------

This is a very simple example of an OpenGL shader, using the OpenGL
shading language (GLSL). The shader itself isn't particularly
exciting; it renders a 3D checkerboard procedural texture.

NOTE:
This sample will only run if your graphics card and drivers support
the OpenGL shading language extensions. For example, the latest
GeForce FX and Radeon cards, with the very latest drivers. I have
tested this program on the following cards:

  * nVidia Quadro FX Go1000 (61.77 drivers)
    Works very smoothly.

  * nVidia Quadro 4 900 XGL (61.77 drivers)
    Had to add OpenGL\Debug\ShaderObjects registry key (google search!)
    This card is GeForce 4 based and doesn't support fragment shaders,
    but you can tell the drivers to emulate in software by using
    'NVEmulate.exe' (again, search for it..) to enable NV30 emulation.
    This works, but is kind of slow :)

This loads a vertex and fragment shader in source code from the
following two files at runtime:
  shader.vert
  shader.frag

The shaders are then compiled, linked together to form a program,
and applied to a sphere. You can modify the vert/frag files and run
the program again to see the effect.

This sample shader was created within ATI RenderMonkey 1.5 (which
is free, supports GLSL, and also runs on nVidia cards). When finished,
the source code for the vertex/fragment programs was copy-pasted into
two text files 'shader.vert' and 'shader.frag'. These files are then
loaded by the main application at run-time. The original RenderMonkey
project file 'shader.rfx' is also included in this folder.

Further reading:
  http://www.opengl.org/documentation/oglsl.html

  http://developer.3dlabs.com/openGL2/specs/

  OpenGL Shading Language
  by Randi J. Rost, John M. Kessenich, Barthold Lichtenbelt, Marc Olano
  416 pages, Addison-Wesley Professional (February 1, 2004) 
  ISBN: 0321197895
