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

# Utility rule file for ContinuousConfigure.

# Include any custom commands dependencies for this target.
include CMakeFiles/ContinuousConfigure.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ContinuousConfigure.dir/progress.make

CMakeFiles/ContinuousConfigure:
	/Library/Frameworks/Python.framework/Versions/3.11/lib/python3.11/site-packages/cmake/data/bin/ctest -D ContinuousConfigure

ContinuousConfigure: CMakeFiles/ContinuousConfigure
ContinuousConfigure: CMakeFiles/ContinuousConfigure.dir/build.make
.PHONY : ContinuousConfigure

# Rule to build all files generated by this target.
CMakeFiles/ContinuousConfigure.dir/build: ContinuousConfigure
.PHONY : CMakeFiles/ContinuousConfigure.dir/build

CMakeFiles/ContinuousConfigure.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ContinuousConfigure.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ContinuousConfigure.dir/clean

CMakeFiles/ContinuousConfigure.dir/depend:
	cd /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/libs/json-c-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/libs/json-c /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/libs/json-c /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/libs/json-c-build /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/libs/json-c-build /Users/brian/dev_space/Rust-Systems/cs_base/cs_base-c2/libs/json-c-build/CMakeFiles/ContinuousConfigure.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ContinuousConfigure.dir/depend

