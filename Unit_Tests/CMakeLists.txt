cmake_minimum_required(VERSION 3.20)
project(The_CPP_Workshop_UT)

set(CMAKE_CXX_STANDARD 14)

enable_testing()

add_executable(ch01_ut unit_test_ch1.cpp)
target_link_libraries(ch01_ut gtest_main)

add_executable(ch02_ut unit_test_ch2.cpp)
target_link_libraries(ch02_ut gtest_main)

#add_executable(ch03_ut unit_test_ch3.cpp)
#add_executable(ch04_ut unit_test_ch4.cpp)

include(GoogleTest)
gtest_discover_tests(ch01_ut)
gtest_discover_tests(ch02_ut)