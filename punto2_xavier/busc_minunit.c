#include <minunit.h>


#include "busc_lib.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#define MINUNIT_EPSILON 1E-12

MU_TEST(test_Nombre) {

    char articulo[10];
    strcpy(articulo,"arroz");
    MERCA *prueba;
    prueba = (MERCA*)malloc(1* sizeof(MERCA));
    strcpy(prueba->nombre,"arroz");

    int cant_articulo=1;
    MERCA aux;
    aux=buscar(articulo,prueba,cant_articulo);
    mu_assert_string_eq("arroz",aux.nombre);
}
MU_TEST(test_Nombre2) {

    char articulo[10];
    strcpy(articulo,"platano");
    MERCA *prueba;
    prueba = (MERCA*)malloc(1* sizeof(MERCA));
    strcpy(prueba->nombre,"platano");

    int cant_articulo=1;
    MERCA aux;
    aux=buscar(articulo,prueba,cant_articulo);
    mu_assert_string_eq("platano",aux.nombre);
}
MU_TEST(test_Nombre3) {

    char articulo[10];
    strcpy(articulo,"pizza");
    MERCA *prueba;
    prueba = (MERCA*)malloc(1* sizeof(MERCA));
    strcpy(prueba->nombre,"arroz");

    int cant_articulo=1;
    MERCA aux;
    aux=buscar(articulo,prueba,cant_articulo);
    mu_assert_string_eq("NULL",aux.nombre);
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


