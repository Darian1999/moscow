cmake_minimum_required(VERSION 3.31)
project(moscow)

set(CMAKE_CXX_STANDARD 11)

add_executable(moscow main.cpp
        popcnt/popcnt.h
        popcnt/popcnt.cpp
        add/add.h
        add/add.cpp
        readmem/readmem.c
        readmem/readmem.h
        pop/pop.cpp
        pop/pop.h)
