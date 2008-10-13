mouse

Demonstrates how to track mouse movement and mouse button
events. This demo displays a wireframe cross that follows
the mouse pointer within the window, and changes colour
when a mouse button is pressed.

Points of note:
  * The mouse button event is sent twice for each button:
    once when the button is pressed, once when it is
    released. In this example, we ignore the event when
    the button is first pressed, and only change colour
    when the button is released.
  * The mouse coordinates are in pixels, and usually need
    to be scaled to match the coordinate system used by
    your OpenGL window. In this case, they are scaled to
    match the default viewing system range of -1 to +1
  * In this example, the window is redrawn on every mouse
    button or movement event. An alternative method would
    be to redraw OnIdle() instead.
