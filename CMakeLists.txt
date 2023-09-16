cmake_minimum_required(VERSION 3.26)
project(oop_cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(oop_cpp main.cpp
        s2/Mobile.cpp
        s2/Mobile.h
        s2/FileReader.cpp
        s2/FileReader.h)
