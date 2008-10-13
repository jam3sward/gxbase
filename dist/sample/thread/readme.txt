thread sample
-------------

This sample demonstrates one method for running a separate
simulation thread, independently of the main application
thread.
  JWW 18/02/04

In this sample:
  1. The main application thread consists of the following
     classes:
       MyApp
       MyWnd
     This thread does all the drawing. The window(s) are
     redrawn from the MyWnd::OnIdle() event.

  2. The second thread consists of the static function:
       MyApp::ThreadFunc()
     The thread is started from within MyApp::OnCreate(),
     and is eventually terminated from MyApp::OnDestroy().
  
  3. These two threads communicate through the shared
     memory structure:
       SharedMem
     Which exists in MyApp.
  
  4. Access to SharedMem is controlled by a Mutex. This is
     to prevent simultaneous access (ie. to prevent thread2
     from modifying the structure while thread1 is in the
     process of reading from the structure).

  5. The idea of the __try {} __finally {} blocks is to
     ensure that the mutex is released in case of an exception.

Notes:
  1. The compiler options for this sample have been changed to
     use the multithreaded runtime libraries. If you create new
     projects, you will need to do the same:
       a) for Debug,   choose "Debug Multithreaded DLL"
       b) for Release, choose "Multithreaded DLL"

  2. The whole sample relies on Windows API calls. For a more
     portable implementation, you could consider using the "pthreads"
     API (which is easily found by a google search..)
