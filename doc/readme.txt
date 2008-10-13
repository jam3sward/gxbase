---- KNOWN ISSUES -------------------------------------------------------------

Model Class:
  * 3DS file format is very complex. Probably this class will never support all
    the subtleties of this format. However, it loads most 3DS models pretty
    well. I will fix any problems as they are reported to me.
  * TIF/CEL texture maps are not supported.
    WORKAROUND: Convert file to JPEG format, and use the file extension .jpg
    For example, you can use Paint Shop Pro to batch convert all TIF files to
    JPG files.
    Alternatively, the files can be renamed by replacing the . with _ and
    appending .jpg (this was the old behaviour in previous versions)
    For example, if the filename was 'some.tif', the loader tries to load it
    using the following names (in order shown):
      some.tif, some_tif.jpg, some.jpg
    And for 'some.cel' it would try:
      some.cel, some_cel.jpg, some.jpg
    If it can't load any of those, it gives up.
  * Loading non-power-of-two sized textures is slow, because they must be
    rescaled to power-of-two sizes for use with OpenGL.
    WORKAROUND: Scale textures to power-of-two size (eg. 476x234 -> 512x256)
    with PSP/Photoshop and resave them under the same filename.
  * Keyframer POS/ROT/SCL tags are not supported. These are used for keyframe
    animation. Some static models use keys to position objects: these objects
    will not be displayed correctly.
    WORKAROUND: Use 3D Studio to remove the keyframes, then export to 3DS
  * Hierarchical transformations are not supported. This may affect position
    and orientation of child parts of an object.
    WORKAROUND: Use 3D Studio to remove hierarchy, then export to 3DS
  * Certain materials are not supported; eg. environment mapping, and may
    render incorrectly (eg. chrome may appear dark grey matte)
  * Complex mapping types such as Bump Mapping, Opacity maps etc. are not
    supported.
  * Some transparent objects (I guess with very low alpha) are invisible
  * Texture transformations (eg. texture rotation) may not work correctly.

---- TODO LIST ----------------------------------------------------------------

TODO: ability to specify texture search paths for 3DS loader
TODO: multisample support through ARB extensions
TODO: support TGA horizontal flip flag
TODO: compressed TGA loader could be tidied up (less code)
TODO: method to query font size used by Printf()?
TODO: BMP RLE8 native support
TODO: remove workaround for wglUseFontBitmaps problem
TODO: save LUM/LUMALP formats as 8bpp greyscale BMP (currently 24bpp)
TODO: modify delta time method to use performance counters
TODO: handle activate/inactive messages to disable idle processing?
QSTN: maybe some functions to change display modes?
QSTN: support opacity maps for 3DS models
TODO: maybe remove STL use to allow MSVC6/7 library binary compatibility
TODO: test: DSVertNormTex draw style
RQST: function to retrieve diffuse colour for object
RQST: support FSAA mode for GLWindow
TODO: clean up window management code

---- DONE LIST ----------------------------------------------------------------

DONE: set/get stereo mode
DONE: access to command line parameters
DONE: mouse events
DONE: idle events
DONE: keyboard events
DONE: makecurrent method
DONE: bugfix: app. left running when no windows created in WinMain version
DONE: decide on some sensible window close behaviour
DONE: set window caption
DONE: set/get single/double buffering
DONE: window size/position: use client area or overall window?
  (size uses client area, position uses window top-left)
DONE: can keyboard events be handled better?
  (after discussion with WJV, decided to leave as is: use WIN32 key codes)
DONE: set/get z-buffer depth
DONE: full screen mode
DONE: finish writing clean up code for windows and associated classes
DONE: call user Window::OnDestroy handler at appropriate point
DONE: get window position
DONE: added stencil buffer support as requested by DPMW
DONE: added alpha buffer support as requested by DPMW
DONE: added accum buffer support as requested by DPMW
DONE: renaming of classes: Window to GLWindow, use of gxbase namespace
DONE: added GLWindow::IsVisible() method
DONE: added image class with format translation
DONE: added image class BMP loader
DONE: wrote image class sample
DONE: improved ImageEx::LoadBMP implementation, supports more BMP formats
DONE: tested BMP loader with 24,8,4,1 bit files, and width=256,255,254,253
DONE: handle PF changes from OnCreate() : made it an error to do this
DONE: fix issue with loss of context in OnCreate() when using SetSize()
DONE: added window/app close methods
DONE: added App::GetDeltaTime() method as requested by WJV
DONE: added simple font support: Printf() method using wglUseFontBitmaps
DONE: added screen capture for Image class; Image::GrabScreen() method
DONE: added Image::glTexImage2D() method
DONE: implemented Image::Save() method (saves 24bpp BMPs)
DONE: implemented JPG support for Image class
DONE: now uses white background when rendering IPicture metafiles
DONE: IPicture JPEG loader COM object clean up (uses COM auto pointers)
DONE: added Image::gluScaleImage() and Image::ScaleImagePow2() methods
DONE: provide MS VC++6 libs as well as VS.NET libs
DONE: RETIRED: no longer adding shader code: it's application specific really
DONE: support mouse button events when outside window by using SetCapture()
DONE: image set pixel functions
DONE: image get pixel functions
DONE: dpmw: auto-loading of GL extensions
DONE: improve robustness of HasExtension() method: should deprecate though?
DONE: added Image::glDrawPixels() method
DONE: added Image::glReadPixels() method
DONE: dpmw: ability to generate alpha from image
DONE: dpmw: generate alpha texture from LUM image (see above)
DONE: dpmw: ability to grab window contents (glReadPixels already proposed)
DONE: dpmw: fixed bug with -ve mouse coords. on mouse capture drag
DONE: improved BMP loading to avoid CompatibleDC() bpp limit in most cases
DONE: shift/alt/ctrl key query functions added
DONE: palette display mode support
DONE: dpmw: ability to load alpha from file: new TGA 32-bit RGBA support added
DONE: when loading an image, auto-detect 8bpp greyscale and load as LUM
DONE: support TGA compressed 24bit format (many 3DS file use this format)
DONE: support TGA vertical flip flag
DONE: query WGL extension functions
DONE: added timer callback support
DEPR: should/can we hide the extra windows from taskbar? NO
DONE: added DSVertNormTex draw style for 3DS model class
DONE: allow font size and typeface to be changed
DONE: added joystick support
DONE: wrote joystick sample code
DONE: fixed font change memory leak bug
DONE: extend keyboard functions to make game control easier

---- HISTORY ------------------------------------------------------------------

Latest changes at end.

Version 0.01-0.04
	* Early development versions undocumented

Version 0.05
	* First release to DPMW

Version 0.06: JWW 27/08/03
	* Added Window::SetMainWindow() and Window::GetMainWindow() methods,
	  and associated support code. First window created is now nominated
	  as the main window. The application only closes when the main window
	  is closed, all other windows are just hidden when the close message
	  is received. The user can nominate a different window as the main
	  window by calling the SetMainWindow method
	* Added Window::SetTitle() and Window::GetTitle() methods
	* Added Window::SetDoubleBuffer() and Window::GetDoubleBuffer() methods
	* Modified implementation of Window::SetStereo() to cache setting until
	  window is created if not existing (previously, it would create the
	  window if needed, but I feel that it is better to postpone window
	  creation until the last minute, to avoid multiple destroy/create
	  if needed to change pixel formats)

Version 0.07: JWW 01/09/03
	* Modified window creation/destruction code to handle cases where the
	  window needs to be temporarily destroyed then recreated with a new
	  pixel format. This is necessary to allow functions like SetStereo()
	  and SetDoubleBuffer() work correctly on existing windows.
	* Modified SetStereo() so that it only recreates window on format
	  change.
	* Modified window creation code to size the window so that the client
	  area matches the size specified by the user with Window::SetSize()
	* Modified Window::SetSize() method to resize window client area to
	  specified size (the container window will be larger).

Version 0.08: JWW 02/09/03
	* Added Window::SetDepthBits() and Window::GetDepthBits() methods
	* Added Window::SetFullscreen() and Window::GetFullscreen() methods,
	  rewrote window creation code to allow creation of windows with
	  initial fullscreen state, and to recreate with full screen state
	  when switching stereo/depth/other pixel format attributes.
	* Noticed driver problem with stereo flicker (synch.problem: flicker
	  visible at top of screen briefly when window brought to front).
	  Upgrading from nVidia 44.03 to 45.23 drivers cured this. Have seen
	  this problem before in other applications, and on other PCs. It is
	  also reported in the forums, and I believe that it is a driver issue,
	  most likely due to IRQ sharing between VGA card and other devices).
	* Added Window::SetOnTop() and GetOnTop() methods, allowing the window
	  to stay on top of all other windows. Modified CreateGL to consider
	  this attribute when window is recreated. This is implemented using
	  the WS_EX_TOPMOST style.
	* Implemented Main::DelWnd() to remove deleted windows from application
	  window vector. Implemented clean up code for windows, so that window
	  OnDestroy gets called to allow for clean up.

Version 0.09: JWW 02/09/03
	* Created Visual Studio .NET project
	* Added Window::GetPosition() method to query current window position
	  or, failing that, the predefined position.
	* Experimented with making extra windows child of main window, and with
	  using a hidden window as parent to child windows, but ended up just
	  commenting out the code and leaving it how it was before (only wanted
	  to hide the windows from the taskbar really..) [to be continued..]

Version 0.10: JWW 05/09/03
	* Added Window::SetStencilBits() and GetStencilBits(), which allow
	  stencil buffer to be allocated.
	  You can use GetStencilBits() to see what the driver actually allocated,
	  providing that it is called after window creation (otherwise it will
	  return the requested value, which is cached).
	* Fixed bug in Window::SetDepthBits(), improved return code so it only
	  returns true if you actually got >= the requested bit depth.
	  You can use GetDepthBits() to see what the driver actually allocated,
	  providing that it is called after window creation (otherwise it will
	  return the requested value, which is cached).

Version 0.11: JWW 09/09/03
	* Added Window::SetAlphaBits() and GetAlphaBits(), which allow alpha
	  buffer to be allocated.
	  You can use GetAlphaBits() to see what the driver actually allocated,
	  providing that it is called after window creation (otherwise it will
	  return the requested value, which is cached).
	* Added Window::SetAccumBits() and GetAccumBits(). This specifies the
	  total number of bits in the accumulation buffer. On the nVidia drivers,
	  you always seem to get 64-bits total (16-bit per component, RGBA).
	* Created new static LIB project, builds:
		glbasex.lib  (Release, Multithreaded DLL)
		glbasexd.lib (Debug, Multithreaded DLL)
	* Created 'clean.bat' to reduce disc space prior to zipping up
	* Created 'dist.bat' to create distribution files in 'dist' folder

Version 0.12: JWW 10/09/03
	* Created four different build configurations for the library:
		glbasex  .lib = Single Threaded
		glbasexd .lib = Debug Single Threaded
		glbasexm .lib = Multithreaded DLL
		glbasexmd.lib = Debug Multithreaded DLL
	  Modified 'AppBase.h' to automatically link the appropriate library
	  version, depending upon the project settings. This leaves only two
	  unsupported runtime library options (/MT and /MTd). An error message
	  is displayed in this case. See 'AppBase.h' for further detail.
	* When rebuilding LIBs, choose 'Batch Build', then 'Rebuild All' and
	  then run 'dist.bat' to copy the libraries into the 'dist' folder.

Version 0.13: JWW 11/09/03
	* Tested on new lab PCs in 177, it works except that LIBs needed to
	  be rebuilt for VS.NET 2003 since the VC++ 6 LIBs apparently aren't
	  compatible due to STL differences in the runtime libs.
	  I'm now developing in VS.NET 2003 from version 0.13 up.
	* The next job is to agree on:
		namespace	  = don't have one yet
		LIB basename  = 'glbasex' for no particularly good reason
		App class     = App currently (propose to leave it alone)
		Window class  = Window currently, should be GLWindow?

Version 0.14: JWW 13/09/03
	* Time to rename (sorry..) so that window class name reflects the
	  fact that it's an OpenGL Window: GLWindow, use of a namespace to
	  wrap the App/GLWindow classes (because they are quite generic
	  names). Namespace and LIB names are now 'gxbase' since we may
	  add DirectX support later, and have a DXWindow (in which case
	  using a library called glbase would not make sense).
	* Renaming of files and classes:
		AppBase.h   -> GXBase.h
		Window	    -> GLWindow
		glbasex.lib -> gxbase.lib
	* Introduction of namespace:
		gxbase
	* New include style:
		#include "GXBase.h"
		using namespace gxbase;
	* I considered including from a sub-folder called GX like this:
		#include <GX/GXBase.h>
		using namespace gxbase;
	  ..but haven't done so yet.
	  This would mean that you could install the headers and LIBs
	  under a standard include path on all the PCs, and then change
	  the global project settings for VS.NET so that people wouldn't
	  need to add the include/LIB directories to their project
	  manually. It would be done for them, as with GL, Windows etc.
	* UPDATING YOUR PROGRAMS TO WORK WITH VERSION 0.14
	  1.Include like this:
		#include "GXBase.h"
		using namespace gxbase;
	  2.Change occurences of Window to GLWindow:
		class MyWindow :public GLWindow {
	  3.Rebuild

Version 0.15: JWW 15/09/03
	* Updated documentation to reflect name changes, and use of namespace.
	  Slightly simplified some of the examples in the documentation (eg.
	  the keyboard events).
	* Added GLWindow::IsVisible() method

Version 0.16: JWW 16/09/03
	* Added Image class, to handle RGB/RGBA/BGR/BGRA/LUMA/LUMA-ALPHA
	  image formats, including translating between them. Got it to
	  start, and load a 24-bit BMP file, but as yet it isn't fully
	  tested.
	* Added Image::gluBuild2DMipmaps function to construct mip-maps
	  from the current image. No need for any knowledge of pointers :)
	* Externally, have developed an extension loading library, which
	  I will incorporate at some point.
	* Wrote sample program to demo image class

Version 0.17: JWW 18/09/03
	* Modified image class to use WIN32 LoadImage() function, which
	  allows support of BMP files with any bit depth and even RLE
	  encoded bitmaps.
	* Tested BMP loader with 24,8,4,1 bit per pixel files, and with
	  width=256,255,254,253 (to test for padding/alignment issues)
	* Improved Image::gluBuild2DMipmaps so that it can handle cases
	  where BGR/BGRA extension is unsupported, and to repack the
	  image if necessary.
	* Renamed Image::Alloc() method to Image::Create(), because it's
	  a bit more meaningful.
	* The OnCreate handler is now only called once for each window.
	  It will not be called when the window is recreated due (for
	  example) to changes in pixel format. How this will be handled
	  eventually is undecided (it causes recursion problems).

Version 0.18: JWW 22/09/03
	* After discussion with WJV and DPMW, decided to make it an error
	  to call functions that modify the pixel format from within
	  the GLWindow::OnCreate() method. This will result in a warning
	  message, and the call will be ignored. This is to avoid the
	  danger of recursion through the pixel format change causing
	  the window to be recreated.
	  NOTES:
	    1) The window OnCreate() handler can be called more than
	       once. For example, if the pixel format is changed.
	    2) If the call is a "no operation", for example when the window
	       already has the requested format, the error message may not
	       be seen (since the pixel format does not change)
	* Bugfix: fixed problem when SetSize() called from GLWindow::OnCreate
	  where GL context is lost, so subsequent gl calls inside OnCreate
	  then failed. This bug was found by DPMW.
	  I've implemented a small stack that remembers the last few GL
	  context RC/DC pairs and restores them as required. There is a fixed
	  stack size (16), after which it falls back to the old behaviour.
	* Added GLWindow::Close() and App::Close() methods. Calling close on
	  a window is equivalent to closing the window manually. Closing the
	  main window will close the application, closing any other window
	  will effectively hide that window. Calling App::Close() simply
	  finds the main window and closes that, causing the application to
	  close.
	* Added App::GetDeltaTime() method as requested by WJV. Returns the
	  time interval between successive calls to GetDeltaTime(). If this
	  is the first time that the function has been called, it will return
	  a default value of 1/50th of a second. The accuracy of subsequent
	  values depends upon the resolution of the system timer. The frame
	  rate may exceed the timer resolution, so it is generally better to
	  time an interval over several frames in order to calculate the
	  frame rate.

Version 0.19: JWW 23/09/03
	* Added simple font support, with a GLWindow::Printf() method that
	  accepts the format string with variable argument(s) as used by
	  the stdio library printf() function. Text is output using a bitmap
	  font at the current raster position, and in the current draw colour.
	  This method automatically allocates display lists for the font, and
	  returns the base list ID of the display lists that it uses. The user
	  should avoid using fixed list IDs, to avoid collisions. Using the
	  glGenLists() function is safe. If using fixed list IDs, they should
	  avoid using IDs in the range N to N+255, where N is the list ID as
	  returned by the Printf() method.
	* Wrote 'test/font' project to test font support.
	* Wrote 'test/image' project to test image support: this is the first
	  time I've tested the image class.
	* Bugfix: Image conversion from BGR->LUM produced banding due to
	  incorrect scale factor, now fixed.
	* Bugfix: Image conversion to LUMALP compressed the image horizontally
	  due to typo, now fixed.
	* Modified HasExtension to release context, since we use a stack now.
	* Rewrote Image::SetFormat() to inline all 30 possible conversions,
	  which should be considerably faster. There is still a redundant copy
	  and memory allocation, but I opted to leave it because it is already
	  very fast compared to texture load (<1ms convert versus 1 second
	  mip-map load in testing, in release mode) and the (very marginally)
	  faster implementation isn't as clean. Have left non-copy code in,
	  but it's commented out.
	* Bugfix: Image packing caused skewing on cases where padding was
	  reduced and then increased again to a value <= previous pad. This
	  was due to unfinished implementation of SetRowPad().
	* Added Image::GrabScreen() method, which does exactly what it says
	  on the tin.. grabs the contents of the screen into an image. You can
	  then use it as a texture map, or save it to a file.
	* Added Image::glTexImage2D() method, which defines a texture from the
	  current image. As with Image::gluBuild2DMipmaps(), the parameters
	  are chosen automatically, based on the image format and dimensions.
	  Note: this is subject to the same "power of two" limitations as the
	  normal glTexImage2D() function. However, this restriction is not
	  enforced by the Image class: so if your local glTexImage2D() function
	  can support "non power of two" textures, it will work.
	  There is support for passing mip-map level, which is untested.
	* Moved BGRA_EXT detection code into a method of ImageEx, to save code
	  duplication (it is now used in several places).
	* Implemented Image::Save() method, which saves the image to file as a
	  24-bit uncompressed BMP.

Version 0.20: JWW 28/09/03
	* Implemented JPEG support, using IJG source. Decided to make it optional,
	  using #ifdef, so that IJG dependency can be removed if required.
	  There is a problem, since libjpeg is built with 1/6 possible runtime
	  libraries, when we want to support 4/6.. will need to build IJG source
	  into project to achieve this.
	* With JPEG source added directly to project, it works, and JPEG file
	  loading can be supported. I would like to find a nicer solution though.
	  Adding IJG C files to project is messy, and using LIB externally means
	  building 4 JPEG LIBs and linking those with the project.
	* Added support for JPEG loading with IPicture COM object, since this
	  exists on 32-bit versions of Windows, with (IE>=4). Again, there is an
	  #ifdef to build with/without this support. IJG code is still there.
	* Define one of the following symbols when building gxbase library to
	  determine which type of JPEG support is used:
		GXBASE_JPEG_IPIC  : uses COM IPicture
		  (does not require additional libraries on recent WIN32)
		GXBASE_JPEG_IJG	  : uses independent JPEG group library
		  (requires IJG code)

Version 0.21: JWW 30/09/03
	* Modified JPEG IPicture code to use Render, so we get support for WMF
	  and other formats that don't have a bitmap handle.
	* When using GXBASE_JPEG_IPIC, we get support for the following image
	  formats: BMP,GIF,JPG,ICO,EMF,WMF
	* Modified JPEG IPicture code to clear bitmap to white prior to rendering
	  any non bitmap image (eg. WMF files)
	* Added Image::gluScaleImage(w,h) method, which can be used to arbitrarily
	  scale the image. This removes any packing in the process.
	* Added Image::ScaleImagePow2() method, which scales to nearest power of 2
	  on each axis, within the maximum texture size supported by the card.

Version 0.22: JWW 09/10/03
	* Modified implementation of WindowEx::MakeCurrent() so that it can be
	  compiled on VC++ 6.0 (scoping issue).
	* Successfully rebuilt with VC++ 6.0, for a student who doesn't have access
	  to VS.NET 2003 (actually released as version 0.21)
Version 0.22: JWW 13/10/03
	* The window now receives mouse movement and button events when clicking
	  and dragging the pointer out of the window. This is achieved by initiating
	  mouse capture for the window. I decided to make this the default behaviour.
	* Added numerous Image::SetPixel methods, which are fully clipped and include
	  automatic format conversion, at some cost in terms of performance.

Version 0.23: JWW 16/10/03
	* Added numerous Image::GetPixel methods, which are fully clipped and include
	  automatic format conversion, at some cost in terms of performance.
	  Addressing pixels outside the image will return (r=0,g=0,b=0,i=0) and
	  (a=Image_DefaultAlpha).
	* Added Image::glDrawPixels() method.
	* Intermediate release to DPMW.
	* Modified VC++ 6.0 project to include missing CPP files that resulted in
	  some functions missing from LIBs. That's what you get for a quick recompile
	  without trying the sample/test suite :)
	* Made minor changes to remove signed/unsigned warnings in VC++ 6.0 recompile
	* Recompile VC++ 6.0 version and ZIP for intermediate release to student.
	* Made GLWindow::HasExtension() function more general, but in any case this
	  method is rather redundant now that we have the extension loader class
	  with the Supports() method.
	* Wrote new 'glext' sample that demonstrates/tests the extension loading
	  features, by loading and using GL_ARB_multitexture extension. Wrote a
	  readme that explains how to use the extension loader in this example.
	* Wrote new 'getpixel' test program that uses the new GetPixel and
	  glDrawPixels() methods, as well as SetPixel. It's a simple paint program
	  that uses GetPixel to implement a clone-brush, copying pixels from one
	  part of an image to another.

Version 0.24: JWW 27/10/03
	* Added ALPHA image format, updating the following methods on Image class
	  to handle this new format:
		* SetFormat() - added new conversions to/from alpha format
		* Clear4b()   - added new ALPHA case
		* gluScaleImage - added new ALPHA case (interprets as GL_ALPHA)
		* gluBuild2DMipmaps - added new ALPHA case (as GL_ALPHA)
		* gluTexImage2D - added new ALPHA case (as GL_ALPHA)
		* glDrawPixels - added new ALPHA case (as GL_ALPHA)
		* SetPixel4b - added new ALPHA case (uses alpha channel only)
		* SetPixel2b - added new ALPHA case (uses alpha channel only)
		* GetPixel4b - added new ALPHA case (returns alpha channel only)
		* GetPixel1f - modified to return alpha channel of ALPHA images
		* SetPixel1f - modified to set alpha channel of ALPHA images
	* For ALPHA images:
		* When using SetPixel, only the alpha component is used.
		* When using GetPixel, only the alpha component is returned.
		* When using gluBuild2DMipmaps, gluTexImage2D, glDrawPixels,
		  the image is interpreted as GL_ALPHA
		* When converting (RGB/LUM -> ALPHA), the grey level value of
		  the pixel is assigned to the alpha channel
		* When converting (ALPHA -> RGBA/BGRA), the alpha channel is
		  copied and the RGB values are set to zero.
		* When converting (ALPHA -> RGB/LUM), the alpha channel is
		  converted to a grey level.
	* Added Image::glReadPixels() method. This allocates an image of
	  a given size and format, and calls glReadPixels() to read pixel
	  data from the current OpenGL context into the image.
	* Added Image::GrabGLViewport(), which captures the contents of
	  the current OpenGL viewport into an image in RGB format. This
	  is a convenience to allow the contents of a view to easily
	  be captured and saved to a file.
	* Added Image::GrabGLWindow() for DPMW. This is a somewhat contrived
	  implementation, since it doesn't have the window handle; instead
	  it enumerates windows until it finds a match with the HDC. The
	  cost should be pretty small compared to the pixel copy overhead.
	* Added Image::CopyAlpha() method for DPMW. This copies the alpha
	  channel from a source image to the destination, without modifying
	  the colour/intensity values of the destination. The images must be
	  of the same size. For example, you can combine two images that
	  contain RGB and ALPHA to get an RGBA image. When combined with the
	  SetFormat() method, you can convert RGB/LUM->ALPHA, which makes it
	  possible to load alpha images from a BMP/JPG file.
	* Modified Image::glDrawPixels, Image::glTexImage2D and
	  Image::gluBuild2DMipmaps to save/modify/restore all relevant
	  glPixelStorei unpack settings. Previously, only unpack alignment
	  was considered.
	* Checked that it compiles with MS VC++ 6.0 and it still does after a
	  minor change.
	* Pretty much all of the above new functions are untested as I write
	  this.. so this truly is an alpha release.
Version 0.25: JWW 29/10/03
	* Fixed bug with negative mouse coordinates when clicking and dragging
	  out of window over title bar, or out of left side of window. This was
	  caused by interpreting mouse coords. as unsigned. Bug affected
	  versions from 0.22-0.24 (due to introduction of mouse capture).
	* Decided that it was time to hide the debug message output by default.
	  These messages are normally displayed only when built in debug mode.
	  Messages are now disabled by default, but I added a static method
	  App::SetDebugMessageLevel() to allow them to be enabled. This only
	  has effect in debug mode, because the code isn't linked into release
	  builds.
	* Wrote 'alpha' test program to test RGBA texturing.
	* Intermediate release to WJV
	* Added some more documentation comments, and changed comment style of
	  some members to suit doxygen.
	* Autogenerated doxygen HTML and CHM help
Version 0.26: JWW 04/11/03
	* Fixed bug with handling of GL_ALPHA textures; V0.25 used 1-component,
	  but driver only accepts internal format of GL_ALPHA, GL_ALPHA4 or
	  GL_ALPHA8. This version now uses internal format GL_ALPHA for all such
	  cases. Bug reported on 03/11/03 by DPMW.
	  Changed ALPHA handling in the following methods:
		Image::gluBuild2DMipmaps()
		Image::glTexImage2D()
	* Reorganised library source code, splitting all class declarations into
	  .H files, and all class definitions into .CPP files. Hopefully, there
	  should be no visible change at the interface level.
	* Made GetHWNDFromHDC() function a static member of ImageEx class,
	  instead of being global.
Version 0.27: JWW 06/11/03
	* Wrote test/alpha2 project to test the following functions:
		Image::Create(w,h, Image::ALPHA)
		Image::SetPixel1f(x,y, a) on ALPHA image
		  (and by inference, SetPixel1b() also tested)
		Image::CopyAlpha(image)
		Image::glTexImage2D() with ALPHA image
	* Fixed a bug with CopyAlpha() caused by a typo in a switch statement.
	* Most alpha functions have now been tested to some extent, although
	  I've not been able to exhaustively test all combinations (there are
	  very many possibilities).
	* Added new Image::Image(w,h,format,rowpad) constructor, moved Format
	  enum declaration to top of Image class.
	* Added new Image::IsValid() const method, to check that image has a
	  valid size/format.
	* Added new Image::IsEmpty() const method, which returns true if the
	  image is empty, false otherwise.
Version 0.28: JWW 13/11/03
	* Improved BMP loading when desktop colour depth is low. Previous code
	  used compatible DC which limited bit depth to that of the desktop.
	  This seems hard (impossible?) to avoid with WIN32 API, so I've added
	  new code (ImageEx::LoadBMPDirect() method) to load 24bpp BMP files
	  without use of WIN32 API calls. If the BMP has an unsupported format,
	  the loader falls back to the original WIN32 API calls (with desktop
	  bpp limit). But in these cases (eg. paletted images), it probably
	  isn't so important.
	  Notes:
	    1) BMP save routine was already immune to this problem.
	    2) GIF,JPG,ICO,EMF,WMF are still limited to desktop bit depth.
		3) a google search suggests that everyone else in the whole world
		   uses a compatible DC. there must be a better way?
Version 0.29: JWW 14/11/03
	* Added 8bpp paletted BMP loader, including code to load 8bpp greyscale
	  BMP images as LUM format. In order to be considered a greyscale image,
	  the BMP loader checks that (R==G==B) for every palette entry. If any
	  of them do not, it converts the colour paletted BMP into 24bpp BGR form.
	  This function also supports non-linear paletted greyscale images (ie.
	  it substitutes palette intensity even in the case of 8bpp greyscale)
Version 0.30: JWW 15/11/03
	* Added new keyboard functions to GLWindow class:
		GetShiftKey()
		GetCtrlKey()
		GetAltKey()
	  Each returns true if the key is pressed, false otherwise. They are
	  intended to be called from the OnKeyboard() method. The key state
	  is read using GetAsyncKeyState() with VK_SHIFT, VK_CONTROL, VK_MENU
	* Added new functions to change mouse cursor displayed by GLWindow class:
		SetCursor()
		GetCursor()
	  Possible types are CRNone, CRArrow, CRCross, CRHourglass
	* New test/keyboard project to test shift/ctrl/alt functionality
	* Modified test/mouse project to test new cursor functionality
	* Fixed bug with window size restore if SetFullscreen() called prior
	  to window creation. Also made window initial size calcs. more robust.
	* Added some support for paletted display modes
Version 0.31: JWW 19/11/03
	* Added support for TGA images with two possible formats:
		24-bit uncompressed (loads as RGB)
		32-bit uncompressed (loads as RGBA)
	  With the latter, it is possible to load RGBA textures directly.
	  These 32-bit RGBA textures can be exported from Paint Shop Pro (others?)
	* Wrote a tutorial on how to create 32-bit RGBA textures with PSP6
	* Made Image default alpha value 255 (fully opaque) instead of previous
	  value 0 (fully transparent). This is the default alpha value that is
	  used when converting RGB->RGBA, BGR->BGRA, LUM->LUMALP, and when
	  SetPixel3f() is called on RGBA/BGRA formats for example.
	* Modified test/image project to draw a checker board pattern in the
	  background, and enable blending, in order to test the TGA loader
	  with RGBA images.
Version 0.32: JWW 21/11/03
	* Added support for RLE compressed 24-bit TGA files, because they are
	  used in many of the sample 3DS files that I downloaded
	* Fixed reversed RGB bug in TGA loader (duh..)
	* Added support for TGA images with reverse T/B storage order
	* Added FlipX() and FlipY() methods to the image class.
Version 0.33: JWW 08/12/03
	* Added new extension loading library (glext007) which now allows query
	  of WGL_xxx extensions through the Supports() method. Also, the manually
	  written portion of this library is now in a separate CPP file to make
	  it easier to maintain.
	* Added some casts to silence C4018 warning in VC++ 6.0 (internal to lib)
Version 0.34: JWW 10/12/03
	* Added 3DS model loader (load3ds 0.19).
	* Added Dialog, FileDialog, OpenFileDialog, SaveFileDialog classes
	* Both the above should be viewed as 'early alpha' versions. Please report
	  any problems! Known issues with 3DS loader are:
	    - Texture loading of non power of two sizes is slow
	    - Object keyframes are not supported
	    - Object transform hierarchy is not supported
Version 0.35: JWW 11/12/03
	* Added Model::SetScale and GetScale methods for DPMW
	* Made all 3DS loader materials two-sided. Added code to parse MAT_TWOSIDE
	  chunk, but then decided that it was more robust to make everything two
	  sided (otherwise a single-sided mat. after a two-sided mat may inherit
	  the back face material of the previous two-sided mat)
	* Two-sided materials mean that a few more models are now loadable
	  (supercar + ferrari load correctly; parts appeared black previously)
Version 0.36: JWW 22/01/04
	* Added SetTimerPeriod, GetTimerPeriod and OnTimer functions to App class.
	  This allows regular timer events to be scheduled and handled. This is
	  useful to drive a simulation loop for example. The current implementation
	  uses the WIN32 SetTimer and KillTimer API, with a callback function used
	  to pass timer events to the App::OnTimer method.
	* Added test/timer project to test and demonstrate the new timer
	  functionality.
Version 0.37: JWW 22/02/04
	* Added new draw style 'DSVertNormTex' which causes the model to be drawn
	  using plain triangle strips with vertices, normals and texture coords
	  (or whichever combination of those is available in the file).
	  The materials associated with the model are ignored. This allows a
	  texture to be applied programmatically, using texture UV coordinates
	  read from the file.
	* Added new GLWindow::SetFont() method, which allows the font typeface
	  and size to be modified. For example: SetFont(24,"Arial")
	  This takes effect when Printf() is next called. Note that the size
	  is measured in logical units, not point size.
	* Updated test/font project to test new SetFont() method
	* Rolled multithread sample into v0.37
Version 0.38: JWW 05/03/04
	* Very reluctantly added GLWindow::GetSafeHwnd() method, so that people
	  can get access to an HWND for use with DirectSound functions. Obviously,
	  this breaks the whole philosophy of avoiding platform specifics in the
	  interface to GXBase (ie. that's why GLUT doesn't have such a function
	  any more).. I have dreams of porting GXBase to Linux you see.
	  Well, I added it anyway, so as not to be obstructive :)
	  So, it's there if you want it, but please try to avoid using it!
	* Added Joystick class, with methods to query number of joysticks, open
	  a particular one, retrieve the joystick name, query axis analogue
	  values and button states. I need to test this, and write some sample
	  code.
Version 0.39: JWW 04/04/04
	* Fixed memory leak bug in WindowEx::print() method, which was evident
	  when repeatedly changing the font through the SetFont() method.
	* Added GLWindow::GetKey() method, which can be used to test if a
	  particular key is pressed.
Version 0.40: JWW 23/06/04
	* Rebuilt to use new OpenGL extension headers from SGI registry
Version 0.41: JWW 16/09/04
	* Rebuilt to use new OpenGL extension headers from SGI registry, this
	  totals 1047 supported extensions (it seems that only one has been
	  added since the previous build: glDrawBuffersARB)
	* Modified dist.bat to clean up Debug/Release/temporary files with
	  the dist folder prior to zipping for distribution.
	* Modified clean.bat to clean up a few more files.
	* Changed 3DS texture loader to try and load unsupported textures as jpg
	  files by simply changing extension. This allows simple batch convert
	  of unsupported image files to .jpg files, eg. with Paint Shop Pro.
	  (previously you had to convert to jpg and rename them like
          this: some.tif -> some_tif.jpg, now you only have to convert them
	  like this: some.tif -> some.jpg)
	* Added sample to demonstrate use of OpenGL shading language in GXBase
Version 0.42: JWW 19/11/04
	* Added 1D texture map functions to Image class:
		gluBuild1DMipmaps()
		glTexImage1D()
	  These are completely untested, please feedback by e-mail if you find
	  any problems.
Version 0.43: JWW 24/02/05
	* Added more meaningful error message when the user fails to create an
	  application instance. Previously, there was an assertion, whereas now
	  it displays a message. This should make it easier for newbies.
	* Prevented copy/assignment of GLWindow/GLWindowEx by declaring private
Version 0.44: JWW 02/03/05
	* Added GLWindow::OnMenu function, and supporting code in window proc
	  and WindowEx::msgCommand to call this function when a menu item is
	  selected. This will enable me to add menu support later.
Version 0.45: JWW 07/04/05
	* Added default constructor to GLWindowEx which was stupidly missing
	  after adding copy/assign privates from v0.43 (this would not affect
	  any students as the last version on the web-site is currently 0.42)
Version 0.46: JWW 11/04/05
	* Added stub for GLWindow::OnMenu function
	* Modified TMaterial to use alpha values with texturing, which was
	  broken. Spotted by Will Roots. Diffuse and ambient are fixed at
	  one and zero respectively, otherwise textures look very dark.
Version 0.47: JWW 20/06/05
	* Reluctantly added GLWindow::OnWindowsMessage() function to allow the
	  windows message loop to be intercepted. Obviously, this is only
	  available on WIN32. This was added to allow someone to use the
	  WIN32 asynchronous socket APIs.
Version 0.48: JWW 10/08/05
	* Added new GL texture bind / mip-map code from intermediate
	  project 45b, which seems to fix problem with slowdown when external
	  texture bind is combined with textures on display lists (seems to
	  be a driver limitation)
	* Added new DSNoBindTexture flag to disable new texture binding.
	* Made model loader use mip-map textures by default rather than tex2d
Version 0.49: JWW 17/10/05
	* Fixed bug (Q0002JPGPath) where JPEG loader would not load files when
	  given a relative path. Absolute paths, or files in current directory
	  worked correctly. Bug was reported by Kostas Vlahavas on 17/10/05
	  NOTES: This bug occurs when GXBase is built with the GXBASE_JPEG_IPIC
	  option, and should not occur when built with GXBASE_JPEG_IJG
	  CAUSE: OleLoadPicturePath requires absolute path. Loader assumed that
	  filenames containing '\' were absolute paths, otherwise prepended cwd
	  to simple filenames. Therefore relative paths were passed directly to
	  OleLoadPicturePath without building full path.
	  SOLUTION: code has been modified to support local, relative + absolute
	  paths by always converting filename to full path name before calling
	  OleLoadPicturePath
	* Increased warning level and fixed a load of resulting warnings. Also
	  commented out some unused code.
	* Fixed bug (Q0001OnDestroy) where OnDestroy() was not called on windows
	  derived from GLWindow (rather, the base was called instead). Bug was
	  reported by Kostas Vlahavas on 17/10/05
	  Specifically, OnDestroy() was called for pixel format changes, but not
	  for normal destruction.
	  CAUSE: This was due to an invalid virtual function call from another
	  function which itself was called from a destructor. Doh!
	  SOLUTION: The remaining windows are now cleaned up at the end of
	  Main::MessageLoop(). The window close message handler has been
	  altered, as well as the destructor.
Version 0.50: JWW 04/11/05
	* Fixed missing Vector3f::Normalise() in Version 0.49 Beta LIBs. Any
	  program attempting to use the Model class would fail to link in v0.49.

Version 0.51: JWW 20/02/06
	* Added LGPL license header to all files
	* Fixed a couple of "unreferenced formal parameter" warnings
	* Added LGPL license file to project
