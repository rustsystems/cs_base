# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Library/Frameworks/Python.framework/Versions/3.11/lib/python3.11/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /Library/Frameworks/Python.framework/Versions/3.11/lib/python3.11/site-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/libs/json-c

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/libs/json-c-build

# Include any dependencies generated for this target.
include tests/CMakeFiles/test_json_pointer.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/test_json_pointer.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/test_json_pointer.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/test_json_pointer.dir/flags.make

tests/CMakeFiles/test_json_pointer.dir/test_json_pointer.c.o: tests/CMakeFiles/test_json_pointer.dir/flags.make
tests/CMakeFiles/test_json_pointer.dir/test_json_pointer.c.o: /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/libs/json-c/tests/test_json_pointer.c
tests/CMakeFiles/test_json_pointer.dir/test_json_pointer.c.o: tests/CMakeFiles/test_json_pointer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/libs/json-c-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object tests/CMakeFiles/test_json_pointer.dir/test_json_pointer.c.o"
	cd /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/libs/json-c-build/tests && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT tests/CMakeFiles/test_json_pointer.dir/test_json_pointer.c.o -MF CMakeFiles/test_json_pointer.dir/test_json_pointer.c.o.d -o CMakeFiles/test_json_pointer.dir/test_json_pointer.c.o -c /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/libs/json-c/tests/test_json_pointer.c

tests/CMakeFiles/test_json_pointer.dir/test_json_pointer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_json_pointer.dir/test_json_pointer.c.i"
	cd /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/libs/json-c-build/tests && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/libs/json-c/tests/test_json_pointer.c > CMakeFiles/test_json_pointer.dir/test_json_pointer.c.i

tests/CMakeFiles/test_json_pointer.dir/test_json_pointer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_json_pointer.dir/test_json_pointer.c.s"
	cd /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/libs/json-c-build/tests && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/libs/json-c/tests/test_json_pointer.c -o CMakeFiles/test_json_pointer.dir/test_json_pointer.c.s

# Object files for target test_json_pointer
test_json_pointer_OBJECTS = \
"CMakeFiles/test_json_pointer.dir/test_json_pointer.c.o"

# External object files for target test_json_pointer
test_json_pointer_EXTERNAL_OBJECTS =

tests/test_json_pointer: tests/CMakeFiles/test_json_pointer.dir/test_json_pointer.c.o
tests/test_json_pointer: tests/CMakeFiles/test_json_pointer.dir/build.make
tests/test_json_pointer: libjson-c.5.3.0.dylib
tests/test_json_pointer: tests/CMakeFiles/test_json_pointer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/libs/json-c-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable test_json_pointer"
	cd /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/libs/json-c-build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_json_pointer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/test_json_pointer.dir/build: tests/test_json_pointer
.PHONY : tests/CMakeFiles/test_json_pointer.dir/build

tests/CMakeFiles/test_json_pointer.dir/clean:
	cd /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/libs/json-c-build/tests && $(CMAKE_COMMAND) -P CMakeFiles/test_json_pointer.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/test_json_pointer.dir/clean

tests/CMakeFiles/test_json_pointer.dir/depend:
	cd /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/libs/json-c-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/libs/json-c /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/libs/json-c/tests /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/libs/json-c-build /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/libs/json-c-build/tests /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/libs/json-c-build/tests/CMakeFiles/test_json_pointer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/test_json_pointer.dir/depend

