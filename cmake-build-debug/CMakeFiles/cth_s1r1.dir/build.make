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
include CMakeFiles/cth_s1r1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/cth_s1r1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/cth_s1r1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cth_s1r1.dir/flags.make

CMakeFiles/cth_s1r1.dir/contoh/s1r1.c.obj: CMakeFiles/cth_s1r1.dir/flags.make
CMakeFiles/cth_s1r1.dir/contoh/s1r1.c.obj: C:/Users/LOQ/Programming/daspro-and-a-lil-bit-of-everything/contoh/s1r1.c
CMakeFiles/cth_s1r1.dir/contoh/s1r1.c.obj: CMakeFiles/cth_s1r1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\LOQ\Programming\daspro-and-a-lil-bit-of-everything\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/cth_s1r1.dir/contoh/s1r1.c.obj"
	C:\Users\LOQ\AppData\Local\Programs\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/cth_s1r1.dir/contoh/s1r1.c.obj -MF CMakeFiles\cth_s1r1.dir\contoh\s1r1.c.obj.d -o CMakeFiles\cth_s1r1.dir\contoh\s1r1.c.obj -c C:\Users\LOQ\Programming\daspro-and-a-lil-bit-of-everything\contoh\s1r1.c

CMakeFiles/cth_s1r1.dir/contoh/s1r1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/cth_s1r1.dir/contoh/s1r1.c.i"
	C:\Users\LOQ\AppData\Local\Programs\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\LOQ\Programming\daspro-and-a-lil-bit-of-everything\contoh\s1r1.c > CMakeFiles\cth_s1r1.dir\contoh\s1r1.c.i

CMakeFiles/cth_s1r1.dir/contoh/s1r1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/cth_s1r1.dir/contoh/s1r1.c.s"
	C:\Users\LOQ\AppData\Local\Programs\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\LOQ\Programming\daspro-and-a-lil-bit-of-everything\contoh\s1r1.c -o CMakeFiles\cth_s1r1.dir\contoh\s1r1.c.s

# Object files for target cth_s1r1
cth_s1r1_OBJECTS = \
"CMakeFiles/cth_s1r1.dir/contoh/s1r1.c.obj"

# External object files for target cth_s1r1
cth_s1r1_EXTERNAL_OBJECTS =

cth_s1r1.exe: CMakeFiles/cth_s1r1.dir/contoh/s1r1.c.obj
cth_s1r1.exe: CMakeFiles/cth_s1r1.dir/build.make
cth_s1r1.exe: CMakeFiles/cth_s1r1.dir/linkLibs.rsp
cth_s1r1.exe: CMakeFiles/cth_s1r1.dir/objects1.rsp
cth_s1r1.exe: CMakeFiles/cth_s1r1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\LOQ\Programming\daspro-and-a-lil-bit-of-everything\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable cth_s1r1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\cth_s1r1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cth_s1r1.dir/build: cth_s1r1.exe
.PHONY : CMakeFiles/cth_s1r1.dir/build

CMakeFiles/cth_s1r1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\cth_s1r1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/cth_s1r1.dir/clean

CMakeFiles/cth_s1r1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\LOQ\Programming\daspro-and-a-lil-bit-of-everything C:\Users\LOQ\Programming\daspro-and-a-lil-bit-of-everything C:\Users\LOQ\Programming\daspro-and-a-lil-bit-of-everything\cmake-build-debug C:\Users\LOQ\Programming\daspro-and-a-lil-bit-of-everything\cmake-build-debug C:\Users\LOQ\Programming\daspro-and-a-lil-bit-of-everything\cmake-build-debug\CMakeFiles\cth_s1r1.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/cth_s1r1.dir/depend

