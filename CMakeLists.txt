cmake_minimum_required(VERSION 3.15)
project(untitled9 C)

set(CMAKE_C_STANDARD 99)
include_directories(libs_generales)
add_executable(punto5_xavier punto5_xavier/elim_matr_lib.c punto5_xavier/elim_matr_main.c punto5_xavier/elim_matr_lib.h)
add_executable(punto5_xavierminunit punto5_xavier/elim_matr_minunit.c punto5_xavier/elim_matr_lib.c punto5_xavier/elim_matr_lib.h)