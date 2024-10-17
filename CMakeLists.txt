cmake_minimum_required(VERSION 3.10)
project(3DVectors C)

set(CMAKE_C_STANDARD 99)

# Add the source files for the executable
add_executable(3DVectors main.c vector3d.c)
