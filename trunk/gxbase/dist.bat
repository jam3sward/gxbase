rem @echo off
rem Copies files for distribution into 'dist' folder

mkdir dist
mkdir dist\doc
mkdir dist\lib
mkdir dist\inc


rem Delete Debug and Release folders in all sample
rem and test folders, as well as all the various
rem temporary files created by the compiler

cd dist
for %%f in (Debug) do del /q %%f
for %%f in (Debug) do rmdir %%f
for %%f in (Release) do del /q %%f
for %%f in (Release) do rmdir %%f
del /s *.obj
del /s *.res
del /s *.pch
del /s *.pdb
del /s *.tlb
del /s *.idb
del /s *.ilk
del /s *.opt
del /s *.ncb
del /s *.sbr
del /s *.sup
del /s *.bsc
cd ..

rem Copy various files needed for distribution

copy Debug\*.lib dist\lib
copy Release\*.lib dist\lib
copy doc\*.pdf dist\doc
copy doc\*.txt dist\doc
copy src\App.h dist\inc
copy src\GXBase.h dist\inc
copy src\GLWindow.h dist\inc
copy src\Image.h dist\inc
copy src\GLWindowEx.h dist\inc
copy src\glex.h dist\inc
copy src\glexfp.h dist\inc
copy src\glext.h dist\inc
copy src\wglext.h dist\inc
copy src\Model.h dist\inc
copy src\Dialog.h dist\inc
copy src\Joystick.h dist\inc

