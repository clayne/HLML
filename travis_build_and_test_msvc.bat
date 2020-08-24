@echo off

SETLOCAL EnableDelayedExpansion

REM can be "debug" or "release"
set config=%1
if [%config%]==[] (
	echo ERROR: Config not specified.
	GOTO :bail
)

call "C:\Program Files (x86)\Microsoft Visual Studio\2017\BuildTools\VC\Auxiliary\Build\vcvars64.bat"

echo ------- Building generator -------
set source_files=code\generator\*.cpp
call build_msvc.bat %config% hlml-gen %source_files%
echo ------- Done -------
echo.

echo ------- Running generator -------
build\msvc\%config%\hlml-gen.exe
echo ------- Done -------
echo.

echo ------- Building C tests -------
set source_files=code\tests\c\main.c
call build_msvc.bat %config% hlml-gen-tests-c %source_files%
echo ------- Done -------
echo.

echo ------- Running C tests -------
build\msvc\%config%\hlml-gen-tests-c.exe -c --time-unit=us
echo ------- Done -------
echo.

echo ------- Building C++ tests -------
set source_files=code\tests\cpp\main.cpp
call build_msvc.bat %config% hlml-gen-tests-cpp %source_files%
echo ------- Done -------
echo.

echo ------- Running C++ tests -------
build\msvc\%config%\hlml-gen-tests-cpp.exe -c --time-unit=us
echo ------- Done -------
echo.

goto :exit


:bail
echo ERROR: Not all arguments are set.  Please check the arguments you are passing.
echo Usage:
echo "build_and_test_msvc.bat <config> <vcvars64 path>"
goto :EOF


:exit

