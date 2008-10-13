@echo off
if exist %usr%\include goto checkdir

echo ERROR Check usr directory and variable
pause
goto exit

:checkdir
if exist %usr%\include\GX goto install
mkdir %usr%\include\GX

:install
copy inc\*.h %usr%\include\GX
copy lib\*.lib %usr%\local\lib

:exit
