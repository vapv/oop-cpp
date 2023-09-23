cmake_minimum_required(VERSION 3.26)
project(oop_cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(oop_cpp main.cpp
        s2/Mobile.cpp
        s2/Mobile.h
        s2/FileReader.cpp
        s2/FileReader.h
        s3/Person.cpp
        s3/Person.h
        s3/PersonMem.cpp
        s3/PersonMem.h
        s3/Singleton.cpp
        s3/Singleton.h)
