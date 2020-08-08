@echo off

REM TODO(DM): before doing any of this:
REM 1. do a release build of the generator
REM 2. run the generator
REM then build the tests

setlocal EnableDelayedExpansion

pushd %~dp0

set version=%1

if [%version%]==[] (
	echo ERROR: Release version was not set!  Please specify a release version
	goto :ShowUsage
)

echo Packing build...

REM copy the relevant files over into temp destinations
REM these will be deleted later
robocopy /s /e doxygen\ releases\doxygen\
robocopy /s /e code\out\ releases\code\

tools\\7zip\\7za.exe a -tzip releases\hlml_%version%.zip .\releases\code\ .\releases\doxygen\ generate_documentation.bat .\build\Release\hlml-gen-tests.exe

REM delete temp destinations
rd /s /Q releases\doxygen\
rd /s /Q releases\code\

echo.
echo Done.
echo.

pause
goto :EOF


:ShowUsage
echo Usage:
echo make_release.bat ^<version^>
echo.
echo Arguments:
echo     ^<version^> (required):
echo         The version of the release that you are making (for example: 1.0.2 - where 1 is the major version, 0 is the minor version, and 2 is the patch version)
goto :EOF


popd
