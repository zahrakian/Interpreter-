cmake_minimum_required(VERSION 3.14)
project(Interpreter_Engin)

set(CMAKE_CXX_STANDARD 14)

add_executable(Interpreter_Engin main.cpp Engine.cpp Engine.h Variable.cpp Variable.h Loop.cpp Loop.h Conditions.cpp Conditions.h)