#include <minunit.h>

#include "camb_punt_lib.h"
#include <stdio.h>
#include <stdlib.h>
#define MINUNIT_EPSILON 1E-12

MU_TEST(test_Nombre) {
    cam val;
    int x=3;
    int y=1;
    val = intercambiar(x,y);
    mu_assert_double_eq(1, val.x);
    mu_assert_double_eq(3, val.z);
}
MU_TEST(test_Nombre2){
cam val;
int x=5;
int y=4;
val = intercambiar(x,y);
mu_assert_double_eq(4, val.x);
mu_assert_double_eq(5, val.z);
}
MU_TEST(test_Nombre3){
    cam val;
    int x=10;
    int y=20;
    val = intercambiar(x,y);
    mu_assert_double_eq(20, val.x);
    mu_assert_double_eq(10, val.z);
}



MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(test_Nombre);
    MU_RUN_TEST(test_Nombre2);
    MU_RUN_TEST(test_Nombre3);
}

int main(int argc, char *argv[]) {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}


