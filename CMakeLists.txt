cmake_minimum_required(VERSION 3.20)
project(Implementacion_de_clases_y_asociaciones_c__)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Implementacion_de_clases_y_asociaciones_c__
        main.cpp
        ManagementStudent.cpp
        ManagementStudent.h
        Student.cpp
        Student.h)
