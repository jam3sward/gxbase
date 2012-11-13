@ECHO OFF

REM this batch file uses glext.exe to auto-generate the OpenGL
REM extension loading source code and headers, which are placed
REM in a subdirectory (since they are OS specific files)

REM name of output subdirectory
SET outputdir=win32

REM which is the latest version of glext.exe?
FOR /f %%f IN ('DIR /b /o:d /s glext.exe') DO SET latest=%%f

REM create output subdirectory if it doesn't already exist
IF NOT EXIST %outputdir% MKDIR %outputdir%

REM generate source code in output subdirectory
PUSHD %outputdir%
%latest% ..\GL\glext.h ..\GL\wglext.h
POPD
