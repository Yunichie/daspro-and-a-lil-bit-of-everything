# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = C:\Users\LOQ\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\LOQ\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\LOQ\Programming\daspro-and-a-lil-bit-of-everything

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\LOQ\Programming\daspro-and-a-lil-bit-of-everything\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/C.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/C.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/C.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/C.dir/flags.make

CMakeFiles/C.dir/main.c.obj: CMakeFiles/C.dir/flags.make
CMakeFiles/C.dir/main.c.obj: C:/Users/LOQ/Programming/daspro-and-a-lil-bit-of-everything/main.c
CMakeFiles/C.dir/main.c.obj: CMakeFiles/C.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\LOQ\Programming\daspro-and-a-lil-bit-of-everything\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/C.dir/main.c.obj"
	C:\Users\LOQ\AppData\Local\Programs\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/C.dir/main.c.obj -MF CMakeFiles\C.dir\main.c.obj.d -o CMakeFiles\C.dir\main.c.obj -c C:\Users\LOQ\Programming\daspro-and-a-lil-bit-of-everything\main.c

CMakeFiles/C.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/C.dir/main.c.i"
	C:\Users\LOQ\AppData\Local\Programs\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\LOQ\Programming\daspro-and-a-lil-bit-of-everything\main.c > CMakeFiles\C.dir\main.c.i

CMakeFiles/C.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/C.dir/main.c.s"
	C:\Users\LOQ\AppData\Local\Programs\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\LOQ\Programming\daspro-and-a-lil-bit-of-everything\main.c -o CMakeFiles\C.dir\main.c.s

# Object files for target C
C_OBJECTS = \
"CMakeFiles/C.dir/main.c.obj"

# External object files for target C
C_EXTERNAL_OBJECTS =

C.exe: CMakeFiles/C.dir/main.c.obj
C.exe: CMakeFiles/C.dir/build.make
C.exe: CMakeFiles/C.dir/linkLibs.rsp
C.exe: CMakeFiles/C.dir/objects1.rsp
C.exe: CMakeFiles/C.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\LOQ\Programming\daspro-and-a-lil-bit-of-everything\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable C.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\C.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/C.dir/build: C.exe
.PHONY : CMakeFiles/C.dir/build

CMakeFiles/C.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\C.dir\cmake_clean.cmake
.PHONY : CMakeFiles/C.dir/clean

CMakeFiles/C.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\LOQ\Programming\daspro-and-a-lil-bit-of-everything C:\Users\LOQ\Programming\daspro-and-a-lil-bit-of-everything C:\Users\LOQ\Programming\daspro-and-a-lil-bit-of-everything\cmake-build-debug C:\Users\LOQ\Programming\daspro-and-a-lil-bit-of-everything\cmake-build-debug C:\Users\LOQ\Programming\daspro-and-a-lil-bit-of-everything\cmake-build-debug\CMakeFiles\C.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/C.dir/depend

