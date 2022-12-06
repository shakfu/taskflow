# SYS_CPP_INCLUDE=/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1
# SYS_C_INCLUDE=/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include
SYS_C_INCLUDE=/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include
SYS_CPP_INCLUDE=//Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/c++/v1
#SYS_CPP_INCLUDE=/Library/Developer/CommandLineTools/usr/include/c++/v1
#SYS_C_INCLUDE=/Library/Developer/CommandLineTools/SDKs/MacOSX10.15.sdk/usr/include
CLANG_INCLUDE=/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib/clang/14.0.0/include
TOOLCHAIN_INCLUDE=/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include
FRAMEWORK_INCLUDE=/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/System/Library/Frameworks
PWD=$(shell pwd)

NAME=taskflow
ALL_INCLUDES=all_includes.hpp
CPP_STANDARD=-std=c++17

CONFIG_FILE=config.txt
NAMESPACE_TO_BIND=tf
NAMESPACE_TO_SKIP=''

all: regen build

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
		-I$(CLANG_INCLUDE) \
		-I$(TOOLCHAIN_INCLUDE) \
		-I$(FRAMEWORK_INCLUDE) \
		-I$(PWD)/include \
		-DNDEBUG


.PHONY: build clean regen test

build:
	python3 setup.py build_ext --inplace

clean:
	@rm -rf bind build
	@rm -f $(NAME).cpython*.so

regen: clean bind

test:
	g++ $(CPP_STANDARD) tests/simple.cpp -Iinclude -O2 -pthread -o tests/simple


