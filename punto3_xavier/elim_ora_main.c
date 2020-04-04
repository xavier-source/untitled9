//
// Created by PC on 4/4/2020.
//
#include "elim_ora_lib.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char oracion[600];
    char* oracion1;
    char* oracion2;
    //char ora[300];
    int option;

    printf("\tBienvenid@!!!\n\n");

    printf("Digite la oracion: \n");
    fflush(stdin);
    gets(oracion);
    printf("\n");
    printf("\tElija: \n");
    printf("1-Para eliminar la primera oracion.\n");
    printf("2-Para eliminar la segunda oracion.\n");
    scanf("%d",&option);
    printf("\n");

    switch(option){

        case 1:
            oracion1 = PrimeraOracion(oracion);
            printf("Sin la primera oracion: %s\n",oracion1);
            break;

        case 2:
            oracion2 = SegundaOracion(oracion);
            printf("Oracion NULL: %s\n",oracion2);
            break;

        default:
            printf("Ha ingresado una tecla incorrecta!!\n");
    }

    return 0;
}

