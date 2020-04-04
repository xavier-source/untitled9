#include <minunit.h>
#include "elim_ora_lib.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MINUNIT_EPSILON 1E-12

MU_TEST(test_Nombre) {
    char* oracion1;
    char* oracion2;
    char palabra[200];
    strcpy(palabra,"hola.Como estas?");

    oracion1 = PrimeraOracion(palabra);
    oracion2 = SegundaOracion(palabra);

    mu_assert_string_eq("Como estas?",oracion1);
    mu_assert_string_eq("",oracion2);
}
MU_TEST(test_Nombre2) {
    char* oracion1;
    char* oracion2;
    char palabra[200];
    strcpy(palabra,"Hey.Que tal tu dia?");

    oracion1 = PrimeraOracion(palabra);
    oracion2 = SegundaOracion(palabra);

    mu_assert_string_eq("Que tal tu dia?",oracion1);
    mu_assert_string_eq("",oracion2);
}
MU_TEST(test_Nombre3) {
    char* oracion1;
    char* oracion2;
    char palabra[200];
    strcpy(palabra,"Hey.Juan que ha pasado! Ayer te vi.");

    oracion1 = PrimeraOracion(palabra);
    oracion2 = SegundaOracion(palabra);

    mu_assert_string_eq("Juan que ha pasado! Ayer te vi.",oracion1);
    mu_assert_string_eq("",oracion2);
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

