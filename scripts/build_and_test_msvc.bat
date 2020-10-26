@echo off

setlocal EnableDelayedExpansion

REM can be "debug" or "release"
set config=%1
if [%config%]==[] (
	echo ERROR: Config not specified.
	GOTO :ShowUsage
)

pushd %~dp0
pushd "..\\..\\"

call "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Auxiliary\Build\vcvars64.bat"

call build_generator_msvc.bat %config%

echo ------- Running generator -------
build\msvc\%config%\hlml-gen.exe
echo ------- Done -------
echo.

echo ------- Building C tests -------
set source_files=code\tests\c\main.c
call build_tests_msvc.bat %config% %source_files%
echo ------- Done -------
echo.

echo ------- Running C tests -------
build\msvc\%config%\hlml-gen-tests-c.exe -c --time-unit=us
echo ------- Done -------
echo.

echo ------- Building C++ tests -------
set source_files=code\tests\cpp\main.cpp
call build_tests_msvc.bat %config% %source_files%
echo ------- Done -------
echo.

echo ------- Running C++ tests -------
build\msvc\%config%\hlml-gen-tests-cpp.exe -c --time-unit=us
echo ------- Done -------
echo.

popd
popd

goto :EOF


:ShowUsage
echo ERROR: Not all arguments are set.  Please check the arguments you are passing.
echo Usage:
echo "build_and_test_msvc.bat <config> <vcvars64 path>"
echo.
echo Arguments:
echo     ^<config^> (required).
echo         The build config.  Must be either "debug" or "release".
echo.
echo     <vcvars64 path> (required).
echo         The full path to vcvars64.bat as part of your Visual Studio installation.
goto :EOF