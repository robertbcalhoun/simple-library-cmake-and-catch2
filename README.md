# simple-library-cmake-and-catch2
Simple library that uses CMake to build and [Catch2](https://github.com/catchorg/Catch2) to test. I've tried to strip this down to the minimum working example.

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

Here we are using `Catch2::Catch2WithMain` to wrap the tests, so `tests/*.cpp`
contains only test definitions (no `main()` wrapper).

Sample Output:
--------------
```
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
tests is a Catch2 v3.4.0 host application.
Run with -? for options

-------------------------------------------------------------------------------
Addition
-------------------------------------------------------------------------------
simple-library-cmake-and-catch2/tests/test1_MyLibrary.cpp:6
...............................................................................

simple-library-cmake-and-catch2/tests/test1_MyLibrary.cpp:7: PASSED:
  REQUIRE( Add(1,0) == 1 )
with expansion:
  1 == 1

simple-library-cmake-and-catch2/tests/test1_MyLibrary.cpp:8: PASSED:
  REQUIRE( Add(1,1) == 2 )
with expansion:
  2 == 2

(...)

===============================================================================
All tests passed (8 assertions in 2 test cases)
```