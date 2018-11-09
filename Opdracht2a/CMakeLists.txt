cmake_minimum_required(VERSION 3.12)
project(Opdracht2a)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

add_executable(Opdracht2a main.cpp Tests/Calculator.cpp Tests/Calculator.h Tests/CalculatorTests.cpp)
target_link_libraries(Opdracht2a gtest gtest_main)