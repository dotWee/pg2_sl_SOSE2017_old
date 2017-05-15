cmake_minimum_required(VERSION 3.6)
project(pg2_sl_SOSE2017)

add_subdirectory(blatt_01)
add_subdirectory(blatt_02)
add_subdirectory(blatt_03)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror")