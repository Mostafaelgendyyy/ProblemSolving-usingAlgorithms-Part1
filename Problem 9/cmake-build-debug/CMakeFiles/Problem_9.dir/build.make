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
CMAKE_SOURCE_DIR = "E:\FCAI MATERIALS\Algorithm Assignment-1\Problem 9"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\FCAI MATERIALS\Algorithm Assignment-1\Problem 9\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Problem_9.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Problem_9.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Problem_9.dir/flags.make

CMakeFiles/Problem_9.dir/main.cpp.obj: CMakeFiles/Problem_9.dir/flags.make
CMakeFiles/Problem_9.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\FCAI MATERIALS\Algorithm Assignment-1\Problem 9\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Problem_9.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Problem_9.dir\main.cpp.obj -c "E:\FCAI MATERIALS\Algorithm Assignment-1\Problem 9\main.cpp"

CMakeFiles/Problem_9.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Problem_9.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\FCAI MATERIALS\Algorithm Assignment-1\Problem 9\main.cpp" > CMakeFiles\Problem_9.dir\main.cpp.i

CMakeFiles/Problem_9.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Problem_9.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\FCAI MATERIALS\Algorithm Assignment-1\Problem 9\main.cpp" -o CMakeFiles\Problem_9.dir\main.cpp.s

# Object files for target Problem_9
Problem_9_OBJECTS = \
"CMakeFiles/Problem_9.dir/main.cpp.obj"

# External object files for target Problem_9
Problem_9_EXTERNAL_OBJECTS =

Problem_9.exe: CMakeFiles/Problem_9.dir/main.cpp.obj
Problem_9.exe: CMakeFiles/Problem_9.dir/build.make
Problem_9.exe: CMakeFiles/Problem_9.dir/linklibs.rsp
Problem_9.exe: CMakeFiles/Problem_9.dir/objects1.rsp
Problem_9.exe: CMakeFiles/Problem_9.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\FCAI MATERIALS\Algorithm Assignment-1\Problem 9\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Problem_9.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Problem_9.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Problem_9.dir/build: Problem_9.exe
.PHONY : CMakeFiles/Problem_9.dir/build

CMakeFiles/Problem_9.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Problem_9.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Problem_9.dir/clean

CMakeFiles/Problem_9.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\FCAI MATERIALS\Algorithm Assignment-1\Problem 9" "E:\FCAI MATERIALS\Algorithm Assignment-1\Problem 9" "E:\FCAI MATERIALS\Algorithm Assignment-1\Problem 9\cmake-build-debug" "E:\FCAI MATERIALS\Algorithm Assignment-1\Problem 9\cmake-build-debug" "E:\FCAI MATERIALS\Algorithm Assignment-1\Problem 9\cmake-build-debug\CMakeFiles\Problem_9.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Problem_9.dir/depend

