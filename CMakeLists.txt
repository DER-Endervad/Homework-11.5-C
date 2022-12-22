cmake_minimum_required(VERSION 3.10)
project(Homework_11.5)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(LybMain SHARED LybMain.h LybMain.cpp Figure.h Figure.cpp Triangle.h Triangle.cpp Right_triangle.h Right_triangle.cpp Isosceles_triangle.h Isosceles_triangle.cpp Equilateral_triangle.h Equilateral_triangle.cpp
Quadrangle.h Quadrangle.cpp Rectangle_Q.h Rectangle_Q.cpp Square.h Square.cpp Parallelogram.h Parallelogram.cpp Rhombus.h Rhombus.cpp)
add_executable(Work Homework_11.5.cpp)
target_link_libraries(Work LybMain)