# No Strings Attached - A String Processing Library

## Overview

This repository implements a small C++ library for string processing, named `no_strings_attached`. The goal of this project is to provide simple and efficient functions for splitting and trimming strings, following modern C++ practices. This is a homework from Code For Yourself youtube's channel: https://www.youtube.com/@CodeForYourself

## Features

- **String Splitting (`string_split`)**
  - Split a string into a vector of substrings based on a given delimiter.
  - Optionally limit the number of resulting chunks.
- **String Trimming (`string_trim`)**
  - Trim characters from the left, right, or both sides of a string.
  - A default overload to trim whitespace characters from both sides.

## Project Structure

```
homework_4/
└── no_strings_attached/
    ├── CMakeLists.txt
    ├── external/
    │   ├── CMakeLists.txt
    │   └── googletest/  # GoogleTest library as a submodule
    ├── examples/
    │   ├── CMakeLists.txt
    │   ├── split_strings.cpp
    │   └── trim_strings.cpp
    ├── no_strings_attached/
    │   ├── CMakeLists.txt  # Defines all libraries
    │   ├── string_split.cpp
    │   ├── string_split.h
    │   ├── string_split_test.cpp
    │   └── ... # Same for all other functionalities
    ├── .clang-format
    └── readme.md  # Project description
```

## Namespace

All functions are encapsulated in the no_strings_attached namespace.

## Testing

Unit tests are implemented using `GoogleTest`, located within the `no_strings_attached` folder alongside the corresponding implementation files. The test framework is included as a submodule in the `external/` directory.

## Build Instructions

This project uses CMake for building. To compile and run tests:

```sh
cd cmake-strings-processing-lib
cmake -S . -B build
cmake --build build -j 12
ctest --test-dir build   # Run tests
```

## Contributing

Feel free to submit issues or pull requests to improve functionality, efficiency, or documentation.
