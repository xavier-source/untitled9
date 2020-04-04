cmake_minimum_required(VERSION 3.15)
project(untitled9 C)

set(CMAKE_C_STANDARD 99)
include_directories(libs_generales)
add_executable(punto1_xavier punto1_xavier/camb_punt_lib.c punto1_xavier/camb_punt_main.c punto1_xavier/camb_punt_lib.h)
add_executable(punto1_xavierminunit punto1_xavier/camb_punt_minunit.c punto1_xavier/camb_punt_lib.c punto1_xavier/camb_punt_lib.h)