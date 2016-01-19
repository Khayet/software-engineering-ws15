cmake_minimum_required(VERSION 3.0.2)
SET(CMAKE_CXX_FLAGS "-std=c++11")

project (converters)
add_executable(main main.cpp)
add_executable(tests ./tests/test.cpp)