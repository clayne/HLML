#!/bin/bash

# exit on first failure
set -e

compiler=$1				# can be either "clang++" or "g++"
config=$2				# can be either "debug" or "release"
output_file=$3			# name of the exe to build, should include ".exe"
source_files_path=$4	# path to source files to build, shouldn't include "*.cpp"

# make build folder if it doesn't already exist
if [ ! -d "build" ]; then
	mkdir -p build/${config}
fi

options_std="-std=c++14"

# clang requires extra weird c++ settings
if [[ $compiler == clang* ]]; then
	options_compiler="-Xclang -flto-visibility-public-std"
fi

# enable optimisations for release
if [[ $config = release ]]; then
	options_compiler="${options_compiler} -O3 -ffast-math"
fi

# additional includes
options_compiler="${options_compiler} -Icode/3rdparty/include/"

# add -Weverything for clang
options_error="-Wall -Wextra -Wpedantic"
if [[ $compiler == clang* ]]; then
	options_error="${options_error} -Weverything"
fi

ignore_warnings="-Wno-c++98-compat-pedantic -Wno-covered-switch-default -Wno-newline-eof -Wno-reserved-id-macro -Wno-global-constructors -Wno-exit-time-destructors -Wno-padded -Wno-unused-macros -Wno-gnu-anonymous-struct -Wno-nested-anon-types -Wno-old-style-cast -Wno-shadow-field-in-constructor"

echo Building for $compiler

echo Building with options : ${options_compiler}
echo Enabled errors        : ${options_error}
echo Ignoring options      : ${ignore_warnings}
echo ""

${compiler} ${options_std} ${options_compiler} -o build/${config}/${output_file} ${source_files_path}/*.cpp ${options_error} ${ignore_warnings}
