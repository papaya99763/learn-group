ECHO Off

SET dir_caller=%1
ECHO Caller: %dir_caller%
SET string=%dir_caller%

:split
for /f "tokens=1,* delims=\" %%i in (%string%) do (
    echo %%i
    set string=%%j
)
echo TTT %string%
echo TT2 "%string%"
if NOT %string%=="" (
    goto :split
)

ECHO target: %string%
::ECHO Caller: %dir_caller%



REM Project
SET dir_workspace=%~dp0..
SET dir_dev=%~dp0Develop

REM Target
SET dir_program=%~dp0..\demo
SET dir_lib=%~dp0..\src

REM Develop of Project
CD %dir_dev%

REM Compile
gcc %dir_program%\program.c %dir_lib%\list.c -o program

REM Execute the program
%dir_dev%\program.exe
