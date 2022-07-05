#SYS_CPP_INCLUDE=/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1
#SYS_C_INCLUDE=/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include
SYS_CPP_INCLUDE=/Library/Developer/CommandLineTools/usr/include/c++/v1
SYS_C_INCLUDE=/Library/Developer/CommandLineTools/SDKs/MacOSX10.15.sdk/usr/include
PWD=$(shell pwd)

NAME=taskflow
NAMESPACE_TO_BIND=tf
ALL_INCLUDES=all_includes.hpp
CPP_STANDARD=-std=c++17
CONFIG_FILE=config.txt

bind:
	@mkdir -p bind
	@binder \
		--root-module $(NAME) \
		--prefix $(PWD)/bind \
		--config=$(CONFIG_FILE) \
		--bind $(NAMESPACE_TO_BIND) \
		$(ALL_INCLUDES) \
		-- $(CPP_STANDARD) \
		-isystem $(SYS_C_INCLUDE) \
		-I/usr/local/include \
		-I$(SYS_C_INCLUDE) \
		-I$(SYS_CPP_INCLUDE) \
		-I$(PWD)/include \
		-DNDEBUG


.PHONY: build clean test

build:
	python3 setup.py build_ext --inplace

clean:
	@rm -rf bind build

test:
	g++ -std=c++17 tests/simple.cpp -Iinclude -O2 -pthread -o tests/simple

