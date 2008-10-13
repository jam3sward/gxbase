spin2

This example creates two OpenGL windows, and draws
a rotating cross inside each. One window has a red
cross, one a green cross.

Note that the RedWnd and GrnWnd are derived from a
base class called SpinWnd. The animation is done by
the base class, so that the derived classes only
need to override the OnCreate() method to change the
colour of the cross.

Two windows are created by simply having the RedWnd
and GrnWnd as members of the MyApp class.

Note that the RedWnd becomes the 'main window' of the
application. This is simply because it is the first
window to be created. When you close the red window,
the whole application is closed. However, when the
green window is closed, the application continues to
run (since it is not the main window).

You can override this behaviour and nominate your own
main window. Also, the non main windows can be shown
again by the application after a user closes them (by
calling the Show() method on that window). Therefore,
non main windows can be temporarily closed.
