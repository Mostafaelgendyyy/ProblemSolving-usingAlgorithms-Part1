# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\FCAI MATERIALS\Algorithm Assignment-1\Problem 1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\FCAI MATERIALS\Algorithm Assignment-1\Problem 1\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Problem_1.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Problem_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Problem_1.dir/flags.make

CMakeFiles/Problem_1.dir/main.cpp.obj: CMakeFiles/Problem_1.dir/flags.make
CMakeFiles/Problem_1.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\FCAI MATERIALS\Algorithm Assignment-1\Problem 1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Problem_1.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Problem_1.dir\main.cpp.obj -c "E:\FCAI MATERIALS\Algorithm Assignment-1\Problem 1\main.cpp"

CMakeFiles/Problem_1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Problem_1.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\FCAI MATERIALS\Algorithm Assignment-1\Problem 1\main.cpp" > CMakeFiles\Problem_1.dir\main.cpp.i

CMakeFiles/Problem_1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Problem_1.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\FCAI MATERIALS\Algorithm Assignment-1\Problem 1\main.cpp" -o CMakeFiles\Problem_1.dir\main.cpp.s

# Object files for target Problem_1
Problem_1_OBJECTS = \
"CMakeFiles/Problem_1.dir/main.cpp.obj"

# External object files for target Problem_1
Problem_1_EXTERNAL_OBJECTS =

Problem_1.exe: CMakeFiles/Problem_1.dir/main.cpp.obj
Problem_1.exe: CMakeFiles/Problem_1.dir/build.make
Problem_1.exe: CMakeFiles/Problem_1.dir/linklibs.rsp
Problem_1.exe: CMakeFiles/Problem_1.dir/objects1.rsp
Problem_1.exe: CMakeFiles/Problem_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\FCAI MATERIALS\Algorithm Assignment-1\Problem 1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Problem_1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Problem_1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Problem_1.dir/build: Problem_1.exe
.PHONY : CMakeFiles/Problem_1.dir/build

CMakeFiles/Problem_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Problem_1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Problem_1.dir/clean

CMakeFiles/Problem_1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\FCAI MATERIALS\Algorithm Assignment-1\Problem 1" "E:\FCAI MATERIALS\Algorithm Assignment-1\Problem 1" "E:\FCAI MATERIALS\Algorithm Assignment-1\Problem 1\cmake-build-debug" "E:\FCAI MATERIALS\Algorithm Assignment-1\Problem 1\cmake-build-debug" "E:\FCAI MATERIALS\Algorithm Assignment-1\Problem 1\cmake-build-debug\CMakeFiles\Problem_1.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Problem_1.dir/depend

