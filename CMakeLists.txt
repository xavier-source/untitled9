cmake_minimum_required(VERSION 3.15)
project(untitled9 C)

set(CMAKE_C_STANDARD 99)
include_directories(libs_generales)
add_executable(punto2_xavier punto2_xavier/busc_lib.c punto2_xavier/busc_main.c punto2_xavier/busc_lib.h)
add_executable(punto2_xavierminunit punto2_xavier/busc_minunit.c punto2_xavier/busc_lib.c punto2_xavier/busc_lib.h)