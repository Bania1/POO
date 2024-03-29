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
include src/seller/CMakeFiles/seller.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/seller/CMakeFiles/seller.dir/compiler_depend.make

# Include the progress variables for this target.
include src/seller/CMakeFiles/seller.dir/progress.make

# Include the compile flags for this target's objects.
include src/seller/CMakeFiles/seller.dir/flags.make

src/seller/CMakeFiles/seller.dir/seller.cc.o: src/seller/CMakeFiles/seller.dir/flags.make
src/seller/CMakeFiles/seller.dir/seller.cc.o: /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/src/seller/seller.cc
src/seller/CMakeFiles/seller.dir/seller.cc.o: src/seller/CMakeFiles/seller.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/seller/CMakeFiles/seller.dir/seller.cc.o"
	cd /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/src/seller && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/seller/CMakeFiles/seller.dir/seller.cc.o -MF CMakeFiles/seller.dir/seller.cc.o.d -o CMakeFiles/seller.dir/seller.cc.o -c /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/src/seller/seller.cc

src/seller/CMakeFiles/seller.dir/seller.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/seller.dir/seller.cc.i"
	cd /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/src/seller && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/src/seller/seller.cc > CMakeFiles/seller.dir/seller.cc.i

src/seller/CMakeFiles/seller.dir/seller.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/seller.dir/seller.cc.s"
	cd /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/src/seller && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/src/seller/seller.cc -o CMakeFiles/seller.dir/seller.cc.s

# Object files for target seller
seller_OBJECTS = \
"CMakeFiles/seller.dir/seller.cc.o"

# External object files for target seller
seller_EXTERNAL_OBJECTS =

src/seller/libseller.a: src/seller/CMakeFiles/seller.dir/seller.cc.o
src/seller/libseller.a: src/seller/CMakeFiles/seller.dir/build.make
src/seller/libseller.a: src/seller/CMakeFiles/seller.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libseller.a"
	cd /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/src/seller && $(CMAKE_COMMAND) -P CMakeFiles/seller.dir/cmake_clean_target.cmake
	cd /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/src/seller && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/seller.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/seller/CMakeFiles/seller.dir/build: src/seller/libseller.a
.PHONY : src/seller/CMakeFiles/seller.dir/build

src/seller/CMakeFiles/seller.dir/clean:
	cd /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/src/seller && $(CMAKE_COMMAND) -P CMakeFiles/seller.dir/cmake_clean.cmake
.PHONY : src/seller/CMakeFiles/seller.dir/clean

src/seller/CMakeFiles/seller.dir/depend:
	cd /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/src/seller /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/src/seller /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/src/seller/CMakeFiles/seller.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/seller/CMakeFiles/seller.dir/depend

