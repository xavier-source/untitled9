//
// Created by PC on 4/4/2020.
//

#ifndef UNTITLED9_BUSC_LIB_H
#define UNTITLED9_BUSC_LIB_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct mercancia{
    char nombre[50];
    float precio;
    int cantidad;
}MERCA;

MERCA* leera(MERCA* dato,int*);
MERCA buscar(char*,MERCA* x,int);
#endif //UNTITLED9_BUSC_LIB_H
