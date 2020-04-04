//
// Created by PC on 4/4/2020.
//

#ifndef UNTITLED9_ELIM_MATR_LIB_H
#define UNTITLED9_ELIM_MATR_LIB_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
typedef struct estudiantes{
char matricula[10];
}estu;
*/
typedef struct List_evalua{
    char nombre[20];
    float ponderacion[30];
    float calificacion;
}LIST_EVALUA;

typedef struct materias{
    char nombre[20];
    LIST_EVALUA eva[];
}MATERIAS;

typedef struct estudiantes{
    char nombre[30];
    char matricula[15];
    int edad;
    int validar;
    MATERIAS mat[];
}ESTUDIANTES;

ESTUDIANTES* leer(ESTUDIANTES*,int*);
ESTUDIANTES* eliminar(ESTUDIANTES*,int,char*);
#endif //UNTITLED9_ELIM_MATR_LIB_H
