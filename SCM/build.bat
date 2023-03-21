@ECHO Off

ECHO.
ECHO ***********************************
ECHO          [Start To Build]         
ECHO ***********************************
ECHO.

ECHO 1. Check Arguments
ECHO -----------------------------------
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

REM Target: Library
ECHO.
ECHO 2. Build library
ECHO -----------------------------------
SET dir_lib=%~dp0..\src
SET library=
SET library=%library% %dir_lib%\list.c
ECHO [lib-build]: list.c
SET library=%library% %dir_lib%\string.c
ECHO [lib-build]: string.c
SET library=%library% %dir_lib%\queue.c
ECHO [lib-build]: queue.c
SET library=%library% %dir_lib%\stack.c
ECHO [lib-build]: stack.c

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

ECHO.
ECHO ========= [Build Success] =========
ECHO ***********************************
ECHO.

ECHO [%target%]: Start
ECHO -----------------------------------
ECHO.
REM Execute the program
%tgt_name%.exe
ECHO.
ECHO -----------------------------------

SET errCode=%ERRORLEVEL%
SET errStr=
if %errCode% EQU 0 ( SET errStr=NoError
) else ( SET errStr=Error)

ECHO Program Return: %errCode% ( %errStr% )
ECHO.
ECHO * End of run ...
ECHO.

:end

