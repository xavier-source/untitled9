//
// Created by PC on 4/4/2020.
//

#include "camb_punt_lib.h"
#include <stdio.h>
#include <stdlib.h>
cam intercambiar(int x,int z){
    cam cambiar;

    int *aux;
    int aux2; // cogera el valor de z
    int *aux3;

    aux = &x;
    aux2 = z;
    aux3 = &aux2;

    z = *aux;
    x = *aux3;

    cambiar.x = x;
    cambiar.z = z;

    return cambiar;
}
