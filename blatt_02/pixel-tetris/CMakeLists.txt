cmake_minimum_required(VERSION 3.6)
project(blatt_02_pixel-tetris)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror")

set(SOURCE_FILES main.cpp main.cpp libs/Renderer.cpp libs/Renderer.h)
add_executable(blatt_02_pixel-tetris ${SOURCE_FILES})