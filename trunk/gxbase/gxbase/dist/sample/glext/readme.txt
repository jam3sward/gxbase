This is a simple example of how to use OpenGL extension functions
from within gxbase. It is a rewrite of 'MultiTex.c' which used
GLUT, and was originally written by Nick Triantos at NVIDIA Corp.

The program draws a quad with two animated textures, using the
following OpenGL extension:
   GL_ARB_multitexture
This was chosen as an example, because I believe that it should
be supported on most graphics cards these days, so that there is
a good chance this sample will run on your PC :)

Unfortunately, the code is quite long, so it doesn't serve as a
simple example of how to use extensions in gxbase. Here is the
general procedure:

How to use OpenGL extensions in gxbase:
  1. Derive your window class from GLWindowEx.
  2. If you handle the window OnCreate() event, make sure that it
     starts with a call to GLWindowEx::OnCreate(). This loads the
     OpenGL extensions for you.
  3. Check that the extensions that you want to use are supported.
     For example:
       if ( Supports("GL_EXT_bgra") ) m_bHaveBGRA = true;
     The OnCreate() method is the ideal place to do this.
  4. TIP: Store the setting in a bool (as shown above) because it
     is obviously much quicker to test the bool in future, than to
     keep calling Supports().. which requires a string search.
  5. Now you can call the extension functions directly, just as if
     they were any other OpenGL function:
	   glActiveTextureARB(GL_TEXTURE0_ARB);
	   
Notes / how it works:
  * The GLWindowEx::OnCreate() method loads the OpenGL extensions
    for you automatically, when the window is created.
  * If you call a function that isn't supported by your card,
    gxbase substitutes a 'stub' function that does nothing.
    Therefore, your program is unlikely to crash, although the
    rendering will not be as expected.
  * The extension functions (over 970 of them!) exist as inline
	methods of the GLWindowEx class. The real OpenGL extension
	function is automatically called by gxbase, with very low
	performance cost (inline + function pointer dereference).
  * Since the functions are loaded for each GLWindowEx object, this
    library will support drivers that provide different extension
    functions for each display context.
  * The extension loader is auto-generated from the OpenGL extension
    headers provided on the SGI OpenGL extension registry site. New
    versions will be generated periodically to add support for the
    latest OpenGL extensions.

James Ward, 16th October 2003.
