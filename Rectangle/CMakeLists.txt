cmake_minimum_required(VERSION 3.12)
project(Rectangle)

set(SOURCE_FILES main.cpp, Rectangle.h, RectangleImplementation.cpp)

add_executable(Rectangle main.cpp cmake-build-debug/RectangleImplementation.cpp)