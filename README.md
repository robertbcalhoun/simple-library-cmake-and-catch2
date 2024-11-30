# simple-library-cmake-and-catch2
Simple library that uses CMake to build and [Catch2](https://github.com/catchorg/Catch2) to test

To install catch2 on debianish:
```
sudo apt install catch2
```

To build and test:
```
mkdir build && cd build
cmake ..
# or just 'make' on linux
cmake --build .
./tests -s
```