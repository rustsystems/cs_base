# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.28.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.28.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/build

# Include any dependencies generated for this target.
include CMakeFiles/cs_base_c2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/cs_base_c2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/cs_base_c2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cs_base_c2.dir/flags.make

CMakeFiles/cs_base_c2.dir/src/main.c.o: CMakeFiles/cs_base_c2.dir/flags.make
CMakeFiles/cs_base_c2.dir/src/main.c.o: /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/src/main.c
CMakeFiles/cs_base_c2.dir/src/main.c.o: CMakeFiles/cs_base_c2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/cs_base_c2.dir/src/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/cs_base_c2.dir/src/main.c.o -MF CMakeFiles/cs_base_c2.dir/src/main.c.o.d -o CMakeFiles/cs_base_c2.dir/src/main.c.o -c /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/src/main.c

CMakeFiles/cs_base_c2.dir/src/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/cs_base_c2.dir/src/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/src/main.c > CMakeFiles/cs_base_c2.dir/src/main.c.i

CMakeFiles/cs_base_c2.dir/src/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/cs_base_c2.dir/src/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/src/main.c -o CMakeFiles/cs_base_c2.dir/src/main.c.s

# Object files for target cs_base_c2
cs_base_c2_OBJECTS = \
"CMakeFiles/cs_base_c2.dir/src/main.c.o"

# External object files for target cs_base_c2
cs_base_c2_EXTERNAL_OBJECTS =

cs_base_c2: CMakeFiles/cs_base_c2.dir/src/main.c.o
cs_base_c2: CMakeFiles/cs_base_c2.dir/build.make
cs_base_c2: /usr/local/lib/libjson-c.5.3.0.dylib
cs_base_c2: CMakeFiles/cs_base_c2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable cs_base_c2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cs_base_c2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cs_base_c2.dir/build: cs_base_c2
.PHONY : CMakeFiles/cs_base_c2.dir/build

CMakeFiles/cs_base_c2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cs_base_c2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cs_base_c2.dir/clean

CMakeFiles/cs_base_c2.dir/depend:
	cd /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2 /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2 /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/build /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/build /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/build/CMakeFiles/cs_base_c2.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/cs_base_c2.dir/depend

