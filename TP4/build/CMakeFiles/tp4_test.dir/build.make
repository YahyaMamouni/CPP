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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lghoul01/mydesk/CPP/TP4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lghoul01/mydesk/CPP/TP4/build

# Include any dependencies generated for this target.
include CMakeFiles/tp4_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/tp4_test.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tp4_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tp4_test.dir/flags.make

CMakeFiles/tp4_test.dir/test/catch.cpp.o: CMakeFiles/tp4_test.dir/flags.make
CMakeFiles/tp4_test.dir/test/catch.cpp.o: ../test/catch.cpp
CMakeFiles/tp4_test.dir/test/catch.cpp.o: CMakeFiles/tp4_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lghoul01/mydesk/CPP/TP4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tp4_test.dir/test/catch.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp4_test.dir/test/catch.cpp.o -MF CMakeFiles/tp4_test.dir/test/catch.cpp.o.d -o CMakeFiles/tp4_test.dir/test/catch.cpp.o -c /home/lghoul01/mydesk/CPP/TP4/test/catch.cpp

CMakeFiles/tp4_test.dir/test/catch.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tp4_test.dir/test/catch.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lghoul01/mydesk/CPP/TP4/test/catch.cpp > CMakeFiles/tp4_test.dir/test/catch.cpp.i

CMakeFiles/tp4_test.dir/test/catch.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tp4_test.dir/test/catch.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lghoul01/mydesk/CPP/TP4/test/catch.cpp -o CMakeFiles/tp4_test.dir/test/catch.cpp.s

CMakeFiles/tp4_test.dir/test/tp4_test.cpp.o: CMakeFiles/tp4_test.dir/flags.make
CMakeFiles/tp4_test.dir/test/tp4_test.cpp.o: ../test/tp4_test.cpp
CMakeFiles/tp4_test.dir/test/tp4_test.cpp.o: CMakeFiles/tp4_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lghoul01/mydesk/CPP/TP4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/tp4_test.dir/test/tp4_test.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp4_test.dir/test/tp4_test.cpp.o -MF CMakeFiles/tp4_test.dir/test/tp4_test.cpp.o.d -o CMakeFiles/tp4_test.dir/test/tp4_test.cpp.o -c /home/lghoul01/mydesk/CPP/TP4/test/tp4_test.cpp

CMakeFiles/tp4_test.dir/test/tp4_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tp4_test.dir/test/tp4_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lghoul01/mydesk/CPP/TP4/test/tp4_test.cpp > CMakeFiles/tp4_test.dir/test/tp4_test.cpp.i

CMakeFiles/tp4_test.dir/test/tp4_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tp4_test.dir/test/tp4_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lghoul01/mydesk/CPP/TP4/test/tp4_test.cpp -o CMakeFiles/tp4_test.dir/test/tp4_test.cpp.s

CMakeFiles/tp4_test.dir/src/carte.cpp.o: CMakeFiles/tp4_test.dir/flags.make
CMakeFiles/tp4_test.dir/src/carte.cpp.o: ../src/carte.cpp
CMakeFiles/tp4_test.dir/src/carte.cpp.o: CMakeFiles/tp4_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lghoul01/mydesk/CPP/TP4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/tp4_test.dir/src/carte.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp4_test.dir/src/carte.cpp.o -MF CMakeFiles/tp4_test.dir/src/carte.cpp.o.d -o CMakeFiles/tp4_test.dir/src/carte.cpp.o -c /home/lghoul01/mydesk/CPP/TP4/src/carte.cpp

CMakeFiles/tp4_test.dir/src/carte.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tp4_test.dir/src/carte.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lghoul01/mydesk/CPP/TP4/src/carte.cpp > CMakeFiles/tp4_test.dir/src/carte.cpp.i

CMakeFiles/tp4_test.dir/src/carte.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tp4_test.dir/src/carte.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lghoul01/mydesk/CPP/TP4/src/carte.cpp -o CMakeFiles/tp4_test.dir/src/carte.cpp.s

CMakeFiles/tp4_test.dir/src/usine.cpp.o: CMakeFiles/tp4_test.dir/flags.make
CMakeFiles/tp4_test.dir/src/usine.cpp.o: ../src/usine.cpp
CMakeFiles/tp4_test.dir/src/usine.cpp.o: CMakeFiles/tp4_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lghoul01/mydesk/CPP/TP4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/tp4_test.dir/src/usine.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp4_test.dir/src/usine.cpp.o -MF CMakeFiles/tp4_test.dir/src/usine.cpp.o.d -o CMakeFiles/tp4_test.dir/src/usine.cpp.o -c /home/lghoul01/mydesk/CPP/TP4/src/usine.cpp

CMakeFiles/tp4_test.dir/src/usine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tp4_test.dir/src/usine.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lghoul01/mydesk/CPP/TP4/src/usine.cpp > CMakeFiles/tp4_test.dir/src/usine.cpp.i

CMakeFiles/tp4_test.dir/src/usine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tp4_test.dir/src/usine.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lghoul01/mydesk/CPP/TP4/src/usine.cpp -o CMakeFiles/tp4_test.dir/src/usine.cpp.s

# Object files for target tp4_test
tp4_test_OBJECTS = \
"CMakeFiles/tp4_test.dir/test/catch.cpp.o" \
"CMakeFiles/tp4_test.dir/test/tp4_test.cpp.o" \
"CMakeFiles/tp4_test.dir/src/carte.cpp.o" \
"CMakeFiles/tp4_test.dir/src/usine.cpp.o"

# External object files for target tp4_test
tp4_test_EXTERNAL_OBJECTS =

tp4_test: CMakeFiles/tp4_test.dir/test/catch.cpp.o
tp4_test: CMakeFiles/tp4_test.dir/test/tp4_test.cpp.o
tp4_test: CMakeFiles/tp4_test.dir/src/carte.cpp.o
tp4_test: CMakeFiles/tp4_test.dir/src/usine.cpp.o
tp4_test: CMakeFiles/tp4_test.dir/build.make
tp4_test: CMakeFiles/tp4_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lghoul01/mydesk/CPP/TP4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking C executable tp4_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tp4_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tp4_test.dir/build: tp4_test
.PHONY : CMakeFiles/tp4_test.dir/build

CMakeFiles/tp4_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tp4_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tp4_test.dir/clean

CMakeFiles/tp4_test.dir/depend:
	cd /home/lghoul01/mydesk/CPP/TP4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lghoul01/mydesk/CPP/TP4 /home/lghoul01/mydesk/CPP/TP4 /home/lghoul01/mydesk/CPP/TP4/build /home/lghoul01/mydesk/CPP/TP4/build /home/lghoul01/mydesk/CPP/TP4/build/CMakeFiles/tp4_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tp4_test.dir/depend

