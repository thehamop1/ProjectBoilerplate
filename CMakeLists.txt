cmake_minimum_required(VERSION 3.16)
project(MY_PROJECT LANGUAGES CXX)
set (CMAKE_CXX_STANDARD 17) #You can change the c++ version here

#tell the config and binary files where to go
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
list(APPEND CMAKE_MODULE_PATH ${CMAKE_BINARY_DIR})
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build/bin)

#Set compiler flags. Theres a nicer cmake way of doing this that makes it work with other non-gcc compilers
set(CMAKE_CXX_FLAGS_DEBUG "-Wall -m64 -g3 -O0")
set(CMAKE_CXX_FLAGS_RELEASE "-Wall -m64 -O3 -DNDEBUG")

#Add the header dir and c++ code
include_directories(include)
add_subdirectory(src)

#Add the testing framework and testing directory
add_subdirectory(googletest)
option(BP_BUILD_TESTS "Build tests" ON)
if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME AND BP_BUILD_TESTS)
    include(GoogleTest)
    enable_testing()
    add_subdirectory(test)
endif()