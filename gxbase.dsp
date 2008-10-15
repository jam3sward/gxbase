# Microsoft Developer Studio Project File - Name="gxbase" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Static Library" 0x0104

CFG=gxbase - Win32 Debug Multithreaded DLL
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "gxbase.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "gxbase.mak" CFG="gxbase - Win32 Debug Multithreaded DLL"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "gxbase - Win32 Release" (based on "Win32 (x86) Static Library")
!MESSAGE "gxbase - Win32 Debug" (based on "Win32 (x86) Static Library")
!MESSAGE "gxbase - Win32 Debug Multithreaded DLL" (based on "Win32 (x86) Static Library")
!MESSAGE "gxbase - Win32 Release Multithreaded DLL" (based on "Win32 (x86) Static Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=snCl.exe
RSC=rc.exe

!IF  "$(CFG)" == "gxbase - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# ADD CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# ADD BASE RSC /l 0x809 /d "NDEBUG"
# ADD RSC /l 0x809 /d "NDEBUG"
BSC32=snBsc.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=snLib.exe
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:"Release\gxbase.lib"

!ELSEIF  "$(CFG)" == "gxbase - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX /FD /GZ /c
# ADD CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX /FD /GZ /c
# ADD BASE RSC /l 0x809 /d "_DEBUG"
# ADD RSC /l 0x809 /d "_DEBUG"
BSC32=snBsc.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=snLib.exe
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:"Debug\gxbased.lib"

!ELSEIF  "$(CFG)" == "gxbase - Win32 Debug Multithreaded DLL"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "gxbase___Win32_Debug_Multithreaded_DLL"
# PROP BASE Intermediate_Dir "gxbase___Win32_Debug_Multithreaded_DLL"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX /FD /GZ /c
# ADD BASE RSC /l 0x809 /d "_DEBUG"
# ADD RSC /l 0x809 /d "_DEBUG"
BSC32=snBsc.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=snLib.exe
# ADD BASE LIB32 /nologo /out:"Debug\gxbased.lib"
# ADD LIB32 /nologo /out:"Debug\gxbasemd.lib"

!ELSEIF  "$(CFG)" == "gxbase - Win32 Release Multithreaded DLL"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "gxbase___Win32_Release_Multithreaded_DLL"
# PROP BASE Intermediate_Dir "gxbase___Win32_Release_Multithreaded_DLL"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# ADD BASE RSC /l 0x809 /d "NDEBUG"
# ADD RSC /l 0x809 /d "NDEBUG"
BSC32=snBsc.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=snLib.exe
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:"Release\gxbasem.lib"

!ENDIF 

# Begin Target

# Name "gxbase - Win32 Release"
# Name "gxbase - Win32 Debug"
# Name "gxbase - Win32 Debug Multithreaded DLL"
# Name "gxbase - Win32 Release Multithreaded DLL"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=src\App.cpp
# End Source File
# Begin Source File

SOURCE=src\ErrDbg.cpp
# End Source File
# Begin Source File

SOURCE=src\glexfp.cpp
# End Source File
# Begin Source File

SOURCE=src\glexfplib.cpp
# End Source File
# Begin Source File

SOURCE=src\GLWindow.cpp
# End Source File
# Begin Source File

SOURCE=src\Image.cpp
# End Source File
# Begin Source File

SOURCE=src\Main.cpp
# End Source File
# Begin Source File

SOURCE=src\WindowEx.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=src\App.h
# End Source File
# Begin Source File

SOURCE=src\ErrDbg.h
# End Source File
# Begin Source File

SOURCE=src\glex.h
# End Source File
# Begin Source File

SOURCE=src\glexfp.h
# End Source File
# Begin Source File

SOURCE=src\GLExWindow.h
# End Source File
# Begin Source File

SOURCE=src\GLWindow.h
# End Source File
# Begin Source File

SOURCE=src\GLWindowEx.h
# End Source File
# Begin Source File

SOURCE=src\GXBase.h
# End Source File
# Begin Source File

SOURCE=src\Image.h
# End Source File
# Begin Source File

SOURCE=src\Main.h
# End Source File
# Begin Source File

SOURCE=src\WindowEx.h
# End Source File
# End Group
# Begin Source File

SOURCE=doc\readme.txt
# End Source File
# End Target
# End Project
