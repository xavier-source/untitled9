//
// Created by PC on 4/4/2020.
//
#include <stdlib.h>
#include <stdio.h>
#include "busc_lib.h"
#include <string.h>
int main()
{
    printf("\tBienvenido!!\n");
    char nom[30];
    int cantidad_productos=0;
    MERCA *dato = NULL;
    dato = leera(dato,&cantidad_productos);
    printf("\n");
    printf("Digite el nombre del articulo que desa buscar: \n");
    scanf("%s",&nom);

    MERCA aux;

    aux = buscar(nom,dato,cantidad_productos);

    if(strcmp(aux.nombre,"NULL")==0){
        printf("\t%s\n",aux.nombre);
        printf("Este producto no esta en el inventario.\n");
        return 0;
    }
    printf("\n");
    printf("Nombre de la mercancia buscada: %s\n",aux.nombre);
    printf("Precio: %.2f\n",aux.precio);
    printf("Cantidad en inventario: %d",aux.cantidad);

    return 0;
}