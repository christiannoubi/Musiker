# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = "/Users/christiannoubi/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/181.4668.70/CLion.app/Contents/bin/cmake/bin/cmake"

# The command to remove a file.
RM = "/Users/christiannoubi/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/181.4668.70/CLion.app/Contents/bin/cmake/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/christiannoubi/Desktop/Forschung/CLionProjects/Musiker

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/christiannoubi/Desktop/Forschung/CLionProjects/Musiker/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Musiker.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Musiker.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Musiker.dir/flags.make

CMakeFiles/Musiker.dir/main.cpp.o: CMakeFiles/Musiker.dir/flags.make
CMakeFiles/Musiker.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/christiannoubi/Desktop/Forschung/CLionProjects/Musiker/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Musiker.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Musiker.dir/main.cpp.o -c /Users/christiannoubi/Desktop/Forschung/CLionProjects/Musiker/main.cpp

CMakeFiles/Musiker.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Musiker.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/christiannoubi/Desktop/Forschung/CLionProjects/Musiker/main.cpp > CMakeFiles/Musiker.dir/main.cpp.i

CMakeFiles/Musiker.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Musiker.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/christiannoubi/Desktop/Forschung/CLionProjects/Musiker/main.cpp -o CMakeFiles/Musiker.dir/main.cpp.s

CMakeFiles/Musiker.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Musiker.dir/main.cpp.o.requires

CMakeFiles/Musiker.dir/main.cpp.o.provides: CMakeFiles/Musiker.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Musiker.dir/build.make CMakeFiles/Musiker.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Musiker.dir/main.cpp.o.provides

CMakeFiles/Musiker.dir/main.cpp.o.provides.build: CMakeFiles/Musiker.dir/main.cpp.o


# Object files for target Musiker
Musiker_OBJECTS = \
"CMakeFiles/Musiker.dir/main.cpp.o"

# External object files for target Musiker
Musiker_EXTERNAL_OBJECTS =

Musiker: CMakeFiles/Musiker.dir/main.cpp.o
Musiker: CMakeFiles/Musiker.dir/build.make
Musiker: CMakeFiles/Musiker.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/christiannoubi/Desktop/Forschung/CLionProjects/Musiker/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Musiker"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Musiker.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Musiker.dir/build: Musiker

.PHONY : CMakeFiles/Musiker.dir/build

CMakeFiles/Musiker.dir/requires: CMakeFiles/Musiker.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Musiker.dir/requires

CMakeFiles/Musiker.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Musiker.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Musiker.dir/clean

CMakeFiles/Musiker.dir/depend:
	cd /Users/christiannoubi/Desktop/Forschung/CLionProjects/Musiker/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/christiannoubi/Desktop/Forschung/CLionProjects/Musiker /Users/christiannoubi/Desktop/Forschung/CLionProjects/Musiker /Users/christiannoubi/Desktop/Forschung/CLionProjects/Musiker/cmake-build-debug /Users/christiannoubi/Desktop/Forschung/CLionProjects/Musiker/cmake-build-debug /Users/christiannoubi/Desktop/Forschung/CLionProjects/Musiker/cmake-build-debug/CMakeFiles/Musiker.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Musiker.dir/depend
