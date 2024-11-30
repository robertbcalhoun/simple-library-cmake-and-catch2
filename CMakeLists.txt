cmake_minimum_required(VERSION 3.10)
project(MyLibraryProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add source files for the library:
file(GLOB_RECURSE SOURCE_FILES src/*.cpp include/*.h)
# Alternatively:
# set(SOURCE_FILES src/MyLibrary.cpp include/MyLibrary.h )

# Create the library
if (SHARED_LIB)
    add_library(MyLibrary SHARED ${SOURCE_FILES})
else()
    add_library(MyLibrary ${SOURCE_FILES})
endif()

# Set the include directories
target_include_directories(MyLibrary PUBLIC include)

# Add Catch2
find_package(Catch2 3 REQUIRED)

# Add test files:
file(GLOB_RECURSE TEST_FILES tests/*.cpp)

# Create an executable for running the tests
add_executable(tests ${TEST_FILES})

# Link the tests with the library and Catch2
target_link_libraries(tests PRIVATE MyLibrary Catch2::Catch2WithMain)

