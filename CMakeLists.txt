cmake_minimum_required(VERSION 3.13)
project(CPPBeginner)

set(CMAKE_CXX_STANDARD 14)

add_executable(CPPBeginner main.cpp ComplexNumber.cpp ComplexNumber.h ComplexNumberPolar.cpp ComplexNumberPolar.h Shape.cpp Shape.h Circle.cpp Circle.h)