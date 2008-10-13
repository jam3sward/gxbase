spin

This example creates a single OpenGL window, and draws
a rotating cross inside it.

Note the use of OnIdle(), which calls Redraw() on the
window to force it to be updated continuously.

The animation is achieved by using the current elapsed
system time from App::GetTime() to determine the angle
of rotation.
