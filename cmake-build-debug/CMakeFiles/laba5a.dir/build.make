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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\kruko\CLionProjects\laba5a

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\kruko\CLionProjects\laba5a\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/laba5a.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/laba5a.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/laba5a.dir/flags.make

CMakeFiles/laba5a.dir/main.c.obj: CMakeFiles/laba5a.dir/flags.make
CMakeFiles/laba5a.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\kruko\CLionProjects\laba5a\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/laba5a.dir/main.c.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\laba5a.dir\main.c.obj -c C:\Users\kruko\CLionProjects\laba5a\main.c

CMakeFiles/laba5a.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/laba5a.dir/main.c.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\kruko\CLionProjects\laba5a\main.c > CMakeFiles\laba5a.dir\main.c.i

CMakeFiles/laba5a.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/laba5a.dir/main.c.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\kruko\CLionProjects\laba5a\main.c -o CMakeFiles\laba5a.dir\main.c.s

# Object files for target laba5a
laba5a_OBJECTS = \
"CMakeFiles/laba5a.dir/main.c.obj"

# External object files for target laba5a
laba5a_EXTERNAL_OBJECTS =

laba5a.exe: CMakeFiles/laba5a.dir/main.c.obj
laba5a.exe: CMakeFiles/laba5a.dir/build.make
laba5a.exe: libs/data_structures/libdata_structures.a
laba5a.exe: libs/algorithms/libalgorithms.a
laba5a.exe: CMakeFiles/laba5a.dir/linklibs.rsp
laba5a.exe: CMakeFiles/laba5a.dir/objects1.rsp
laba5a.exe: CMakeFiles/laba5a.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\kruko\CLionProjects\laba5a\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable laba5a.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\laba5a.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/laba5a.dir/build: laba5a.exe
.PHONY : CMakeFiles/laba5a.dir/build

CMakeFiles/laba5a.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\laba5a.dir\cmake_clean.cmake
.PHONY : CMakeFiles/laba5a.dir/clean

CMakeFiles/laba5a.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\kruko\CLionProjects\laba5a C:\Users\kruko\CLionProjects\laba5a C:\Users\kruko\CLionProjects\laba5a\cmake-build-debug C:\Users\kruko\CLionProjects\laba5a\cmake-build-debug C:\Users\kruko\CLionProjects\laba5a\cmake-build-debug\CMakeFiles\laba5a.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/laba5a.dir/depend
