# This is a quick boilerplate to get a c++ project going
## Project Technologies
    - CMake (Build System)
    - GoogleTest (Testing Framework)
    - Doxygen (Documentation Generator)

##  Quick Start
    - Packages to install on your computer
        - Install the newest version of cmake
        - Install the newest stable version of gcc and gdb
          - On my machine I had gcc 10 installed.
    - Git operations
      - Grab testing framework from google: git submodule update --init
    - How to build on linux/osx from bash/terminal
        1. mkdir build
        2. cd build
        3. cmake ..
        4. make -j 
    - How to build from vscode
        - Install C++ extension package
        - Configure the project within the cmake extension and compile
        - You can also debug from the main menu now
    - Options to run
      - Run binaries directly from build/bin
      - Run from vscode using gdb from the play button and add more launch options from .vscode/launch.json
    - Generate documentation:
      - doxygen doxyfile
      - Edit the mainpage.md in order to change the homepage for your project the docs can be accessed with ./docs/html/index.html

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

## Resources
- CMake: https://cmake.org/
- GCC: https://gcc.gnu.org/
- C++: https://en.cppreference.com/w/
- Doxygen: https://www.doxygen.nl/
- VSCode Extensions:
  - C++ Extension Pack: https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools-extension-pack
  - Remote Development: https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.vscode-remote-extensionpack