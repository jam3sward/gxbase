@echo off
rem Clean various files created by VC6 to reduce disk space
echo Cleaning..
del *.ncb
del *.plg
del Debug\*.obj
del Debug\*.pch
del Debug\*.idb
del Debug\*.pdb
del Debug\*.htm
del Release\*.obj
del Release\*.pch
del Release\*.idb
del Release\*.htm
del DebugMD\*.pch
del DebugMD\*.htm
del ReleaseMD\*.pch
del ReleaseMD\*.htm
