cmake_minimum_required(VERSION 3.24)
project(recursion_example)

set(CMAKE_CXX_STANDARD 17)

add_executable(recursion_example main.cpp Timer.cpp Timer.h functions.cpp functions.h Fib.cpp Fib.h)
