# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.11

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jimmy/Documents/C++/TP1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jimmy/Documents/C++/TP1/build

# Include any dependencies generated for this target.
include CMakeFiles/main.out.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/main.out.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.out.dir/flags.make

CMakeFiles/main.out.dir/src/main.cpp.o: CMakeFiles/main.out.dir/flags.make
CMakeFiles/main.out.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jimmy/Documents/C++/TP1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.out.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.out.dir/src/main.cpp.o -c /home/jimmy/Documents/C++/TP1/src/main.cpp

CMakeFiles/main.out.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.out.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jimmy/Documents/C++/TP1/src/main.cpp > CMakeFiles/main.out.dir/src/main.cpp.i

CMakeFiles/main.out.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.out.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jimmy/Documents/C++/TP1/src/main.cpp -o CMakeFiles/main.out.dir/src/main.cpp.s

CMakeFiles/main.out.dir/src/Fibonacci.cpp.o: CMakeFiles/main.out.dir/flags.make
CMakeFiles/main.out.dir/src/Fibonacci.cpp.o: ../src/Fibonacci.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jimmy/Documents/C++/TP1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/main.out.dir/src/Fibonacci.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.out.dir/src/Fibonacci.cpp.o -c /home/jimmy/Documents/C++/TP1/src/Fibonacci.cpp

CMakeFiles/main.out.dir/src/Fibonacci.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.out.dir/src/Fibonacci.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jimmy/Documents/C++/TP1/src/Fibonacci.cpp > CMakeFiles/main.out.dir/src/Fibonacci.cpp.i

CMakeFiles/main.out.dir/src/Fibonacci.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.out.dir/src/Fibonacci.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jimmy/Documents/C++/TP1/src/Fibonacci.cpp -o CMakeFiles/main.out.dir/src/Fibonacci.cpp.s

CMakeFiles/main.out.dir/src/Vecteur3.cpp.o: CMakeFiles/main.out.dir/flags.make
CMakeFiles/main.out.dir/src/Vecteur3.cpp.o: ../src/Vecteur3.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jimmy/Documents/C++/TP1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/main.out.dir/src/Vecteur3.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.out.dir/src/Vecteur3.cpp.o -c /home/jimmy/Documents/C++/TP1/src/Vecteur3.cpp

CMakeFiles/main.out.dir/src/Vecteur3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.out.dir/src/Vecteur3.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jimmy/Documents/C++/TP1/src/Vecteur3.cpp > CMakeFiles/main.out.dir/src/Vecteur3.cpp.i

CMakeFiles/main.out.dir/src/Vecteur3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.out.dir/src/Vecteur3.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jimmy/Documents/C++/TP1/src/Vecteur3.cpp -o CMakeFiles/main.out.dir/src/Vecteur3.cpp.s

# Object files for target main.out
main_out_OBJECTS = \
"CMakeFiles/main.out.dir/src/main.cpp.o" \
"CMakeFiles/main.out.dir/src/Fibonacci.cpp.o" \
"CMakeFiles/main.out.dir/src/Vecteur3.cpp.o"

# External object files for target main.out
main_out_EXTERNAL_OBJECTS =

main.out: CMakeFiles/main.out.dir/src/main.cpp.o
main.out: CMakeFiles/main.out.dir/src/Fibonacci.cpp.o
main.out: CMakeFiles/main.out.dir/src/Vecteur3.cpp.o
main.out: CMakeFiles/main.out.dir/build.make
main.out: CMakeFiles/main.out.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jimmy/Documents/C++/TP1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable main.out"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.out.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.out.dir/build: main.out

.PHONY : CMakeFiles/main.out.dir/build

CMakeFiles/main.out.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.out.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.out.dir/clean

CMakeFiles/main.out.dir/depend:
	cd /home/jimmy/Documents/C++/TP1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jimmy/Documents/C++/TP1 /home/jimmy/Documents/C++/TP1 /home/jimmy/Documents/C++/TP1/build /home/jimmy/Documents/C++/TP1/build /home/jimmy/Documents/C++/TP1/build/CMakeFiles/main.out.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main.out.dir/depend
