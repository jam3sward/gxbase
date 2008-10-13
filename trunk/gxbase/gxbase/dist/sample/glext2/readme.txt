glext2
------

This example shows one way of structuring an application so that you
can call OpenGL extension functions from outside the window class.
In this case, we have a 'world' class that might contain scenery and
objects. The world class has a 'Draw' function that is called by a
window when a redraw is required. The world then redraws itself on
that window.

This structure supports:
  * Single world class (your 'scene' or 'document' object)
  * Multiple views of that world
  * Use of OpenGL extensions to draw the world, on multiple windows

It could easily be extended to allow:
  * Different draw styles per window..
  * Different camera views per window..
