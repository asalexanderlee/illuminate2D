# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ashleyalexander-lee/GitHub/illuminate2D/illuminate2D/include/opencv-4.5.1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ashleyalexander-lee/GitHub/illuminate2D/illuminate2D/include/build_opencv

# Utility rule file for gen_opencv_objc_source.

# Include any custom commands dependencies for this target.
include modules/objc_bindings_generator/CMakeFiles/gen_opencv_objc_source.dir/compiler_depend.make

# Include the progress variables for this target.
include modules/objc_bindings_generator/CMakeFiles/gen_opencv_objc_source.dir/progress.make

modules/objc_bindings_generator/CMakeFiles/gen_opencv_objc_source:

gen_opencv_objc_source: modules/objc_bindings_generator/CMakeFiles/gen_opencv_objc_source
gen_opencv_objc_source: modules/objc_bindings_generator/CMakeFiles/gen_opencv_objc_source.dir/build.make
.PHONY : gen_opencv_objc_source

# Rule to build all files generated by this target.
modules/objc_bindings_generator/CMakeFiles/gen_opencv_objc_source.dir/build: gen_opencv_objc_source
.PHONY : modules/objc_bindings_generator/CMakeFiles/gen_opencv_objc_source.dir/build

modules/objc_bindings_generator/CMakeFiles/gen_opencv_objc_source.dir/clean:
	cd /Users/ashleyalexander-lee/GitHub/illuminate2D/illuminate2D/include/build_opencv/modules/objc_bindings_generator && $(CMAKE_COMMAND) -P CMakeFiles/gen_opencv_objc_source.dir/cmake_clean.cmake
.PHONY : modules/objc_bindings_generator/CMakeFiles/gen_opencv_objc_source.dir/clean

modules/objc_bindings_generator/CMakeFiles/gen_opencv_objc_source.dir/depend:
	cd /Users/ashleyalexander-lee/GitHub/illuminate2D/illuminate2D/include/build_opencv && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ashleyalexander-lee/GitHub/illuminate2D/illuminate2D/include/opencv-4.5.1 /Users/ashleyalexander-lee/GitHub/illuminate2D/illuminate2D/include/opencv-4.5.1/modules/objc/generator /Users/ashleyalexander-lee/GitHub/illuminate2D/illuminate2D/include/build_opencv /Users/ashleyalexander-lee/GitHub/illuminate2D/illuminate2D/include/build_opencv/modules/objc_bindings_generator /Users/ashleyalexander-lee/GitHub/illuminate2D/illuminate2D/include/build_opencv/modules/objc_bindings_generator/CMakeFiles/gen_opencv_objc_source.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : modules/objc_bindings_generator/CMakeFiles/gen_opencv_objc_source.dir/depend

