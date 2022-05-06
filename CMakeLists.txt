cmake_minimum_required(VERSION 3.22)
project(Physics)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(physics_demo/includes/physics_engine)
set_property(TARGET physics_engine PROPERTY IMPORTED_LOCATION physics_demo/includes/physics_engine/libphysics_engine.a)
add_executable(Physics physics_demo/src/main.cpp)
target_link_libraries(Physics physics_engine)