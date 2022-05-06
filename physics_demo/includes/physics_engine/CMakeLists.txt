cmake_minimum_required(VERSION 3.22)
project(physics_engine)

set(CMAKE_CXX_STANDARD 14)

add_library(physics_engine src/Vector.cpp src/Vector.h src/physics.h src/Particle.cpp src/Particle.h)
