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
include tests/CMakeFiles/product-test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tests/CMakeFiles/product-test.dir/compiler_depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/product-test.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/product-test.dir/flags.make

tests/CMakeFiles/product-test.dir/product-test.cc.o: tests/CMakeFiles/product-test.dir/flags.make
tests/CMakeFiles/product-test.dir/product-test.cc.o: /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/tests/product-test.cc
tests/CMakeFiles/product-test.dir/product-test.cc.o: tests/CMakeFiles/product-test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/CMakeFiles/product-test.dir/product-test.cc.o"
	cd /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tests/CMakeFiles/product-test.dir/product-test.cc.o -MF CMakeFiles/product-test.dir/product-test.cc.o.d -o CMakeFiles/product-test.dir/product-test.cc.o -c /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/tests/product-test.cc

tests/CMakeFiles/product-test.dir/product-test.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/product-test.dir/product-test.cc.i"
	cd /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/tests/product-test.cc > CMakeFiles/product-test.dir/product-test.cc.i

tests/CMakeFiles/product-test.dir/product-test.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/product-test.dir/product-test.cc.s"
	cd /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/tests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/tests/product-test.cc -o CMakeFiles/product-test.dir/product-test.cc.s

# Object files for target product-test
product__test_OBJECTS = \
"CMakeFiles/product-test.dir/product-test.cc.o"

# External object files for target product-test
product__test_EXTERNAL_OBJECTS =

tests/product-test: tests/CMakeFiles/product-test.dir/product-test.cc.o
tests/product-test: tests/CMakeFiles/product-test.dir/build.make
tests/product-test: src/product/libproduct.a
tests/product-test: lib/libgtest_main.a
tests/product-test: lib/libgmock_main.a
tests/product-test: lib/libgmock.a
tests/product-test: lib/libgtest.a
tests/product-test: tests/CMakeFiles/product-test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable product-test"
	cd /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/product-test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/product-test.dir/build: tests/product-test
.PHONY : tests/CMakeFiles/product-test.dir/build

tests/CMakeFiles/product-test.dir/clean:
	cd /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/tests && $(CMAKE_COMMAND) -P CMakeFiles/product-test.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/product-test.dir/clean

tests/CMakeFiles/product-test.dir/depend:
	cd /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/tests /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/tests /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/tests/CMakeFiles/product-test.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : tests/CMakeFiles/product-test.dir/depend

