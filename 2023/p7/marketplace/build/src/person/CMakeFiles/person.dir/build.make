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
include src/person/CMakeFiles/person.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/person/CMakeFiles/person.dir/compiler_depend.make

# Include the progress variables for this target.
include src/person/CMakeFiles/person.dir/progress.make

# Include the compile flags for this target's objects.
include src/person/CMakeFiles/person.dir/flags.make

src/person/CMakeFiles/person.dir/person.cc.o: src/person/CMakeFiles/person.dir/flags.make
src/person/CMakeFiles/person.dir/person.cc.o: /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/src/person/person.cc
src/person/CMakeFiles/person.dir/person.cc.o: src/person/CMakeFiles/person.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/person/CMakeFiles/person.dir/person.cc.o"
	cd /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/src/person && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/person/CMakeFiles/person.dir/person.cc.o -MF CMakeFiles/person.dir/person.cc.o.d -o CMakeFiles/person.dir/person.cc.o -c /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/src/person/person.cc

src/person/CMakeFiles/person.dir/person.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/person.dir/person.cc.i"
	cd /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/src/person && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/src/person/person.cc > CMakeFiles/person.dir/person.cc.i

src/person/CMakeFiles/person.dir/person.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/person.dir/person.cc.s"
	cd /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/src/person && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/src/person/person.cc -o CMakeFiles/person.dir/person.cc.s

# Object files for target person
person_OBJECTS = \
"CMakeFiles/person.dir/person.cc.o"

# External object files for target person
person_EXTERNAL_OBJECTS =

src/person/libperson.a: src/person/CMakeFiles/person.dir/person.cc.o
src/person/libperson.a: src/person/CMakeFiles/person.dir/build.make
src/person/libperson.a: src/person/CMakeFiles/person.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libperson.a"
	cd /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/src/person && $(CMAKE_COMMAND) -P CMakeFiles/person.dir/cmake_clean_target.cmake
	cd /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/src/person && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/person.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/person/CMakeFiles/person.dir/build: src/person/libperson.a
.PHONY : src/person/CMakeFiles/person.dir/build

src/person/CMakeFiles/person.dir/clean:
	cd /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/src/person && $(CMAKE_COMMAND) -P CMakeFiles/person.dir/cmake_clean.cmake
.PHONY : src/person/CMakeFiles/person.dir/clean

src/person/CMakeFiles/person.dir/depend:
	cd /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/src/person /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/src/person /home/angelbauste/Documentos/UNI/POO/2023/p7/marketplace/build/src/person/CMakeFiles/person.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/person/CMakeFiles/person.dir/depend

