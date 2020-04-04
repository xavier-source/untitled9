cmake_minimum_required(VERSION 3.15)
project(untitled9 C)

set(CMAKE_C_STANDARD 99)
include_directories(libs_generales)
add_executable(punto3_xavier punto3_xavier/elim_ora_lib.c punto3_xavier/elim_ora_main.c punto3_xavier/elim_ora_lib.h)
add_executable(punto3_xavierminunit punto3_xavier/elim_ora_minunit.c punto3_xavier/elim_ora_lib.c punto3_xavier/elim_ora_lib.h)