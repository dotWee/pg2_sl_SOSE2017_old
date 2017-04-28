cmake_minimum_required(VERSION 3.6)
project(blatt_01_aufgabe_03)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror")

set(SOURCE_FILES main.cpp main.cpp libs/Page.cpp libs/Page.h libs/Book.cpp libs/Book.h libs/Notepad.cpp libs/Notepad.h)
add_executable(blatt_01_aufgabe_03 ${SOURCE_FILES})