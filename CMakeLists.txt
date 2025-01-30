cmake_minimum_required(VERSION 3.16..3.24)
project(no_strings_attached VERSION 0.0.1
                    DESCRIPTION "Library for strings manipulation"
                    LANGUAGES CXX)
# Update the submodules here
include(cmake/UpdateSubmodules.cmake)
# Enable testing for this project
include(CTest)
# Add subdirectories with code
add_subdirectory(external)
add_subdirectory(no_strings_attached)
add_subdirectory(examples)