cmake_minimum_required(VERSION 3.22)
project(physics_demo)

set(CMAKE_CXX_STANDARD 14)
add_library(PHYSICS STATIC includes/physics_engine/src/physics.h)
add_executable(physics_demo src/main.cpp)
