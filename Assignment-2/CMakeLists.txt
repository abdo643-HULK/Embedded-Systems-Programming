cmake_minimum_required(VERSION 3.20)
project(Assignment_2 C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR arm)

include_directories(.)

add_executable(Assignment_2
        main.c
        queue.c queue.h
)
