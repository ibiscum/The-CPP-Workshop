cmake_minimum_required(VERSION 3.20)
project(The_CPP_Workshop)

set(CMAKE_CXX_STANDARD 14)

include(FetchContent)
FetchContent_Declare(googletest URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip)
FetchContent_MakeAvailable(googletest)

add_subdirectory(Chapter01)
add_subdirectory(Chapter02)
add_subdirectory(Chapter03)
add_subdirectory(Chapter04)
add_subdirectory(Chapter05)
add_subdirectory(Chapter06)
add_subdirectory(Chapter07)
add_subdirectory(Activities)
add_subdirectory(Examples)
add_subdirectory(Unit_Tests)