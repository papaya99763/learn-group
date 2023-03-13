ECHO Off

ECHO.
ECHO Start to build
ECHO ===================================
SET dir_caller=%1
SET target=%2
SET tgt_name=%3
ECHO [Main-Program]: "%target%"
ECHO [Build-From]:   %dir_caller%


REM Project
SET dir_workspace=%~dp0..
SET dir_dev=%~dp0Develop
REM Make File
if Not exist %dir_dev% (
    MD %dir_dev%
    ECHO [Make File] ">>>>" Develop
)


REM ====================================
SET demo=program.c
SET main=main.c
REM Target: Main-Program
SET dir_demo=%~dp0..\demo
SET dir_main=%~dp0..\src
REM Select Build Target
if %target%==%demo% (
    SET tgt_build=%dir_demo%\%demo%
) else if %target%==%main% (
    SET tgt_build=%dir_main%\%main%
)
ECHO [Build-To]:     "%tgt_build%"
ECHO.

REM ====================================

REM Target: Library
SET dir_lib=%~dp0..\src
SET library=
SET library=%library% %dir_lib%\list.c
ECHO [lib-build]: list.c
REM SET library=%library% %dir_lib%\list.c
REM ECHO [lib-build]: list.c

REM Develop of Project
if %target%==%demo% (
    SET build=demo
) else if %target%==%main% (
    SET build=debug
)

REM Make File
if Not exist %dir_dev%\%build% (
    MD %dir_dev%\%build%
    ECHO [Make File]: %dir_dev%\%build%
)

CD %dir_dev%\%build%

REM Compile
gcc %tgt_build% %library% -o %tgt_name%

REM Execute the program
%tgt_name%.exe

:end
