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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build

# Include any dependencies generated for this target.
include src/basket/CMakeFiles/basket.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/basket/CMakeFiles/basket.dir/compiler_depend.make

# Include the progress variables for this target.
include src/basket/CMakeFiles/basket.dir/progress.make

# Include the compile flags for this target's objects.
include src/basket/CMakeFiles/basket.dir/flags.make

src/basket/CMakeFiles/basket.dir/basket.cc.o: src/basket/CMakeFiles/basket.dir/flags.make
src/basket/CMakeFiles/basket.dir/basket.cc.o: /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/src/basket/basket.cc
src/basket/CMakeFiles/basket.dir/basket.cc.o: src/basket/CMakeFiles/basket.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/basket/CMakeFiles/basket.dir/basket.cc.o"
	cd /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/src/basket && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/basket/CMakeFiles/basket.dir/basket.cc.o -MF CMakeFiles/basket.dir/basket.cc.o.d -o CMakeFiles/basket.dir/basket.cc.o -c /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/src/basket/basket.cc

src/basket/CMakeFiles/basket.dir/basket.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/basket.dir/basket.cc.i"
	cd /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/src/basket && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/src/basket/basket.cc > CMakeFiles/basket.dir/basket.cc.i

src/basket/CMakeFiles/basket.dir/basket.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/basket.dir/basket.cc.s"
	cd /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/src/basket && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/src/basket/basket.cc -o CMakeFiles/basket.dir/basket.cc.s

# Object files for target basket
basket_OBJECTS = \
"CMakeFiles/basket.dir/basket.cc.o"

# External object files for target basket
basket_EXTERNAL_OBJECTS =

src/basket/libbasket.a: src/basket/CMakeFiles/basket.dir/basket.cc.o
src/basket/libbasket.a: src/basket/CMakeFiles/basket.dir/build.make
src/basket/libbasket.a: src/basket/CMakeFiles/basket.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libbasket.a"
	cd /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/src/basket && $(CMAKE_COMMAND) -P CMakeFiles/basket.dir/cmake_clean_target.cmake
	cd /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/src/basket && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/basket.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/basket/CMakeFiles/basket.dir/build: src/basket/libbasket.a
.PHONY : src/basket/CMakeFiles/basket.dir/build

src/basket/CMakeFiles/basket.dir/clean:
	cd /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/src/basket && $(CMAKE_COMMAND) -P CMakeFiles/basket.dir/cmake_clean.cmake
.PHONY : src/basket/CMakeFiles/basket.dir/clean

src/basket/CMakeFiles/basket.dir/depend:
	cd /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/src/basket /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/src/basket /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/src/basket/CMakeFiles/basket.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/basket/CMakeFiles/basket.dir/depend

