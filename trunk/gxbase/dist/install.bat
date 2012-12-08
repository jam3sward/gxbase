@echo off
if exist %usr%\include goto checkdir

echo ERROR: Please specify the installation path by
echo defining the USR environment variable first
pause
goto exit

:checkdir
if exist %usr%\include\GX goto install
mkdir %usr%\include\GX

:install
copy inc\*.h %usr%\include\GX
copy lib\*.lib %usr%\local\lib

:exit
