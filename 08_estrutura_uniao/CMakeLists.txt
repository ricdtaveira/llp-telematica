cmake_minimum_required(VERSION 3.21)
project(08_estrutura_uniao C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(08_estrutura_uniao
        struct_01/main.c
        struct_02/main.c
        struct_03/main.c)
