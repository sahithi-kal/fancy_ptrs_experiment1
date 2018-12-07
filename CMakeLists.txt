cmake_minimum_required(VERSION 3.12)
project(fancy_pointer_experiment)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_COMPILER g++)

add_executable(fancy_pointer_experiment main.cpp LinkedList.cpp LinkedList.h)
