# pass configuration on command line!

all: build run

verify_args:
ifndef config
	$(error "config" argument was not specified. eg. "config=release")
else ifeq ($(config), debug)
else ifeq ($(config), release)
else
	$(error "config" argument can only equal "debug" or "release")
endif

source_files_c = ..\\code\\generator\\main.c ..\\code\\generator\\generator.win64.c ..\\code\\generator\\stb_impl.c
executable_name_c = generator

include include_clang_settings.mak
include build_clang.mak

build_dir_c = ..\\bin\\win64\\$(config)

build: verify_args build_c

run:
	$(build_dir_c)\\$(executable_name_c).exe