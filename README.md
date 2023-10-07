# This is a quick boilerplate to get a c++ project going
## Project Technologies
    - CMake (Build System)
    - GoogleTest (Testing Framework)
    - Doxygen (Documentation Generator)

##  Quick Start
    - Packages to install on your computer
        - Install the newest version of cmake
        - Install the newest stable version of gcc and gdb
    - Git operations
      - Grab testing framework from google: git submodule init --update
    - How to build on linux/osx from bash/terminal
        1. mkdir build
        2. cd build
        3. cmake ..
        4. make -j 
    - How to build from vscode
        - Install C++ extension package
        - Configure the project within the cmake extension and compile
        - You can also debug from the main menu now

## Project layout
    - .vscode/
      - This holds all the configuration for building and debugging in the editor
    - test/
      - This is where you can write unit tests for the code you write in the main project
    - include/
      - Put all your .h/.hpp files here
    - src/
      - Write all your code here. I usually throw main in here if its a small project. 
    - build/
      - This is where all the makefiles/obj files/executables are located