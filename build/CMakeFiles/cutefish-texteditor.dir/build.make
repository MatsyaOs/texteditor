# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_SOURCE_DIR = /home/tokyo/clone/cuteclone/texteditor

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tokyo/clone/cuteclone/texteditor/build

# Include any dependencies generated for this target.
include CMakeFiles/cutefish-texteditor.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cutefish-texteditor.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cutefish-texteditor.dir/flags.make

cutefish-texteditor_autogen/EWIEGA46WW/qrc_qml.cpp: ../qml.qrc
cutefish-texteditor_autogen/EWIEGA46WW/qrc_qml.cpp: CMakeFiles/cutefish-texteditor_autogen.dir/AutoRcc_qml_EWIEGA46WW_Info.json
cutefish-texteditor_autogen/EWIEGA46WW/qrc_qml.cpp: ../qml/TextEditor.qml
cutefish-texteditor_autogen/EWIEGA46WW/qrc_qml.cpp: ../qml/main.qml
cutefish-texteditor_autogen/EWIEGA46WW/qrc_qml.cpp: ../images/light/close.svg
cutefish-texteditor_autogen/EWIEGA46WW/qrc_qml.cpp: ../images/light/add.svg
cutefish-texteditor_autogen/EWIEGA46WW/qrc_qml.cpp: ../images/dark/close.svg
cutefish-texteditor_autogen/EWIEGA46WW/qrc_qml.cpp: ../images/dark/add.svg
cutefish-texteditor_autogen/EWIEGA46WW/qrc_qml.cpp: /usr/lib/qt5/bin/rcc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tokyo/clone/cuteclone/texteditor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic RCC for qml.qrc"
	/usr/bin/cmake -E cmake_autorcc /home/tokyo/clone/cuteclone/texteditor/build/CMakeFiles/cutefish-texteditor_autogen.dir/AutoRcc_qml_EWIEGA46WW_Info.json 

CMakeFiles/cutefish-texteditor.dir/cutefish-texteditor_autogen/mocs_compilation.cpp.o: CMakeFiles/cutefish-texteditor.dir/flags.make
CMakeFiles/cutefish-texteditor.dir/cutefish-texteditor_autogen/mocs_compilation.cpp.o: cutefish-texteditor_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/clone/cuteclone/texteditor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/cutefish-texteditor.dir/cutefish-texteditor_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cutefish-texteditor.dir/cutefish-texteditor_autogen/mocs_compilation.cpp.o -c /home/tokyo/clone/cuteclone/texteditor/build/cutefish-texteditor_autogen/mocs_compilation.cpp

CMakeFiles/cutefish-texteditor.dir/cutefish-texteditor_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cutefish-texteditor.dir/cutefish-texteditor_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/clone/cuteclone/texteditor/build/cutefish-texteditor_autogen/mocs_compilation.cpp > CMakeFiles/cutefish-texteditor.dir/cutefish-texteditor_autogen/mocs_compilation.cpp.i

CMakeFiles/cutefish-texteditor.dir/cutefish-texteditor_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cutefish-texteditor.dir/cutefish-texteditor_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/clone/cuteclone/texteditor/build/cutefish-texteditor_autogen/mocs_compilation.cpp -o CMakeFiles/cutefish-texteditor.dir/cutefish-texteditor_autogen/mocs_compilation.cpp.s

CMakeFiles/cutefish-texteditor.dir/src/main.cpp.o: CMakeFiles/cutefish-texteditor.dir/flags.make
CMakeFiles/cutefish-texteditor.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/clone/cuteclone/texteditor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/cutefish-texteditor.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cutefish-texteditor.dir/src/main.cpp.o -c /home/tokyo/clone/cuteclone/texteditor/src/main.cpp

CMakeFiles/cutefish-texteditor.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cutefish-texteditor.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/clone/cuteclone/texteditor/src/main.cpp > CMakeFiles/cutefish-texteditor.dir/src/main.cpp.i

CMakeFiles/cutefish-texteditor.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cutefish-texteditor.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/clone/cuteclone/texteditor/src/main.cpp -o CMakeFiles/cutefish-texteditor.dir/src/main.cpp.s

CMakeFiles/cutefish-texteditor.dir/src/documenthandler.cpp.o: CMakeFiles/cutefish-texteditor.dir/flags.make
CMakeFiles/cutefish-texteditor.dir/src/documenthandler.cpp.o: ../src/documenthandler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/clone/cuteclone/texteditor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/cutefish-texteditor.dir/src/documenthandler.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cutefish-texteditor.dir/src/documenthandler.cpp.o -c /home/tokyo/clone/cuteclone/texteditor/src/documenthandler.cpp

CMakeFiles/cutefish-texteditor.dir/src/documenthandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cutefish-texteditor.dir/src/documenthandler.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/clone/cuteclone/texteditor/src/documenthandler.cpp > CMakeFiles/cutefish-texteditor.dir/src/documenthandler.cpp.i

CMakeFiles/cutefish-texteditor.dir/src/documenthandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cutefish-texteditor.dir/src/documenthandler.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/clone/cuteclone/texteditor/src/documenthandler.cpp -o CMakeFiles/cutefish-texteditor.dir/src/documenthandler.cpp.s

CMakeFiles/cutefish-texteditor.dir/src/highlightmodel.cpp.o: CMakeFiles/cutefish-texteditor.dir/flags.make
CMakeFiles/cutefish-texteditor.dir/src/highlightmodel.cpp.o: ../src/highlightmodel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/clone/cuteclone/texteditor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/cutefish-texteditor.dir/src/highlightmodel.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cutefish-texteditor.dir/src/highlightmodel.cpp.o -c /home/tokyo/clone/cuteclone/texteditor/src/highlightmodel.cpp

CMakeFiles/cutefish-texteditor.dir/src/highlightmodel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cutefish-texteditor.dir/src/highlightmodel.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/clone/cuteclone/texteditor/src/highlightmodel.cpp > CMakeFiles/cutefish-texteditor.dir/src/highlightmodel.cpp.i

CMakeFiles/cutefish-texteditor.dir/src/highlightmodel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cutefish-texteditor.dir/src/highlightmodel.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/clone/cuteclone/texteditor/src/highlightmodel.cpp -o CMakeFiles/cutefish-texteditor.dir/src/highlightmodel.cpp.s

CMakeFiles/cutefish-texteditor.dir/src/texteditor.cpp.o: CMakeFiles/cutefish-texteditor.dir/flags.make
CMakeFiles/cutefish-texteditor.dir/src/texteditor.cpp.o: ../src/texteditor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/clone/cuteclone/texteditor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/cutefish-texteditor.dir/src/texteditor.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cutefish-texteditor.dir/src/texteditor.cpp.o -c /home/tokyo/clone/cuteclone/texteditor/src/texteditor.cpp

CMakeFiles/cutefish-texteditor.dir/src/texteditor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cutefish-texteditor.dir/src/texteditor.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/clone/cuteclone/texteditor/src/texteditor.cpp > CMakeFiles/cutefish-texteditor.dir/src/texteditor.cpp.i

CMakeFiles/cutefish-texteditor.dir/src/texteditor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cutefish-texteditor.dir/src/texteditor.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/clone/cuteclone/texteditor/src/texteditor.cpp -o CMakeFiles/cutefish-texteditor.dir/src/texteditor.cpp.s

CMakeFiles/cutefish-texteditor.dir/cutefish-texteditor_autogen/EWIEGA46WW/qrc_qml.cpp.o: CMakeFiles/cutefish-texteditor.dir/flags.make
CMakeFiles/cutefish-texteditor.dir/cutefish-texteditor_autogen/EWIEGA46WW/qrc_qml.cpp.o: cutefish-texteditor_autogen/EWIEGA46WW/qrc_qml.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/clone/cuteclone/texteditor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/cutefish-texteditor.dir/cutefish-texteditor_autogen/EWIEGA46WW/qrc_qml.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cutefish-texteditor.dir/cutefish-texteditor_autogen/EWIEGA46WW/qrc_qml.cpp.o -c /home/tokyo/clone/cuteclone/texteditor/build/cutefish-texteditor_autogen/EWIEGA46WW/qrc_qml.cpp

CMakeFiles/cutefish-texteditor.dir/cutefish-texteditor_autogen/EWIEGA46WW/qrc_qml.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cutefish-texteditor.dir/cutefish-texteditor_autogen/EWIEGA46WW/qrc_qml.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/clone/cuteclone/texteditor/build/cutefish-texteditor_autogen/EWIEGA46WW/qrc_qml.cpp > CMakeFiles/cutefish-texteditor.dir/cutefish-texteditor_autogen/EWIEGA46WW/qrc_qml.cpp.i

CMakeFiles/cutefish-texteditor.dir/cutefish-texteditor_autogen/EWIEGA46WW/qrc_qml.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cutefish-texteditor.dir/cutefish-texteditor_autogen/EWIEGA46WW/qrc_qml.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/clone/cuteclone/texteditor/build/cutefish-texteditor_autogen/EWIEGA46WW/qrc_qml.cpp -o CMakeFiles/cutefish-texteditor.dir/cutefish-texteditor_autogen/EWIEGA46WW/qrc_qml.cpp.s

# Object files for target cutefish-texteditor
cutefish__texteditor_OBJECTS = \
"CMakeFiles/cutefish-texteditor.dir/cutefish-texteditor_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/cutefish-texteditor.dir/src/main.cpp.o" \
"CMakeFiles/cutefish-texteditor.dir/src/documenthandler.cpp.o" \
"CMakeFiles/cutefish-texteditor.dir/src/highlightmodel.cpp.o" \
"CMakeFiles/cutefish-texteditor.dir/src/texteditor.cpp.o" \
"CMakeFiles/cutefish-texteditor.dir/cutefish-texteditor_autogen/EWIEGA46WW/qrc_qml.cpp.o"

# External object files for target cutefish-texteditor
cutefish__texteditor_EXTERNAL_OBJECTS =

cutefish-texteditor: CMakeFiles/cutefish-texteditor.dir/cutefish-texteditor_autogen/mocs_compilation.cpp.o
cutefish-texteditor: CMakeFiles/cutefish-texteditor.dir/src/main.cpp.o
cutefish-texteditor: CMakeFiles/cutefish-texteditor.dir/src/documenthandler.cpp.o
cutefish-texteditor: CMakeFiles/cutefish-texteditor.dir/src/highlightmodel.cpp.o
cutefish-texteditor: CMakeFiles/cutefish-texteditor.dir/src/texteditor.cpp.o
cutefish-texteditor: CMakeFiles/cutefish-texteditor.dir/cutefish-texteditor_autogen/EWIEGA46WW/qrc_qml.cpp.o
cutefish-texteditor: CMakeFiles/cutefish-texteditor.dir/build.make
cutefish-texteditor: /usr/lib/x86_64-linux-gnu/libQt5Quick.so.5.15.2
cutefish-texteditor: /usr/lib/x86_64-linux-gnu/libKF5SyntaxHighlighting.so.5.78.0
cutefish-texteditor: /usr/lib/x86_64-linux-gnu/libQt5QmlModels.so.5.15.2
cutefish-texteditor: /usr/lib/x86_64-linux-gnu/libQt5Qml.so.5.15.2
cutefish-texteditor: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.2
cutefish-texteditor: /usr/lib/x86_64-linux-gnu/libQt5Network.so.5.15.2
cutefish-texteditor: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.2
cutefish-texteditor: CMakeFiles/cutefish-texteditor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tokyo/clone/cuteclone/texteditor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable cutefish-texteditor"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cutefish-texteditor.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cutefish-texteditor.dir/build: cutefish-texteditor

.PHONY : CMakeFiles/cutefish-texteditor.dir/build

CMakeFiles/cutefish-texteditor.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cutefish-texteditor.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cutefish-texteditor.dir/clean

CMakeFiles/cutefish-texteditor.dir/depend: cutefish-texteditor_autogen/EWIEGA46WW/qrc_qml.cpp
	cd /home/tokyo/clone/cuteclone/texteditor/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tokyo/clone/cuteclone/texteditor /home/tokyo/clone/cuteclone/texteditor /home/tokyo/clone/cuteclone/texteditor/build /home/tokyo/clone/cuteclone/texteditor/build /home/tokyo/clone/cuteclone/texteditor/build/CMakeFiles/cutefish-texteditor.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cutefish-texteditor.dir/depend

