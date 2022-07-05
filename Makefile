#SYS_CPP_INCLUDE=/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1
#SYS_C_INCLUDE=/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include
SYS_CPP_INCLUDE=/Library/Developer/CommandLineTools/usr/include/c++/v1
SYS_C_INCLUDE=/Library/Developer/CommandLineTools/SDKs/MacOSX10.15.sdk/usr/include
PWD=$(shell pwd)

NAME=taskflow
ALL_INCLUDES=all_includes.hpp
CPP_STANDARD=-std=c++17
CONFIG_FILE=config.txt
NAMESPACE_TO_BIND=tf
NAMESPACE_TO_SKIP=std

all: regen

bind:
	@mkdir -p bind
	@binder \
		--root-module $(NAME) \
		--prefix $(PWD)/bind \
		--config=$(CONFIG_FILE) \
		--bind $(NAMESPACE_TO_BIND) \
		--skip $(NAMESPACE_TO_SKIP) \
		$(ALL_INCLUDES) \
		-- $(CPP_STANDARD) \
		-isystem $(SYS_C_INCLUDE) \
		-I/usr/local/include \
		-I$(SYS_C_INCLUDE) \
		-I$(SYS_CPP_INCLUDE) \
		-I$(PWD)/include \
		-DNDEBUG


.PHONY: build clean regen test

build:
	python3 setup.py build_ext --inplace

clean:
	@rm -rf bind build

regen: clean bind

test:
	g++ -std=c++17 tests/simple.cpp -Iinclude -O2 -pthread -o tests/simple


