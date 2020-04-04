#include <minunit.h>

#include "elim_matr_lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MINUNIT_EPSILON 1E-12

MU_TEST(test_Nombre) {
    int max = 3;
    ESTUDIANTES* almacenar=NULL;
    almacenar =(ESTUDIANTES*)malloc(max*sizeof(ESTUDIANTES));
    //almacenar[0].mat;
    strcpy(almacenar[0].matricula,"20181590");
    strcpy(almacenar[1].matricula,"20181588");
    strcpy(almacenar[2].matricula,"20181521");
    char mat[15];
    strcpy(mat,"20181588");
    ESTUDIANTES* aux;
    aux = eliminar(almacenar,max,mat);
    mu_assert_string_eq("20181590",aux[0].matricula);
    mu_assert_string_eq("20181521",aux[1].matricula);

}

MU_TEST(test_Nombre2) {
    int max = 3;
    ESTUDIANTES* almacenar=NULL;
    almacenar =(ESTUDIANTES*)malloc(max*sizeof(ESTUDIANTES));
    //almacenar[0].mat;
    strcpy(almacenar[0].matricula,"20181591");
    strcpy(almacenar[1].matricula,"20181582");
    strcpy(almacenar[2].matricula,"20181523");
    char mat[15];
    strcpy(mat,"20181591");
    ESTUDIANTES* aux;
    aux = eliminar(almacenar,max,mat);
    mu_assert_string_eq("20181582",aux[0].matricula);
    mu_assert_string_eq("20181582",aux[1].matricula);

}
MU_TEST(test_Nombre3) {
    int max = 3;
    ESTUDIANTES* almacenar=NULL;
    almacenar =(ESTUDIANTES*)malloc(max*sizeof(ESTUDIANTES));
    //almacenar[0].mat;
    strcpy(almacenar[0].matricula,"20181591");
    strcpy(almacenar[1].matricula,"20181582");
    strcpy(almacenar[2].matricula,"20181523");
    char mat[15];
    strcpy(mat,"20185677");
    ESTUDIANTES* aux;
    aux = eliminar(almacenar,max,mat);
    //mu_assert_string_eq("20181582",aux[0].matricula);
    //mu_assert_double_eq(max,aux[0].validar);
    mu_assert_int_eq(max,aux[0].validar);

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

