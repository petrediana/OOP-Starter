cmake_minimum_required(VERSION 3.7)
project(Rectangle_exercise)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Rectangle.h)
add_executable(Rectangle_exercise ${SOURCE_FILES} Rectangle.h)