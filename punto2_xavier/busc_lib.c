//
// Created by PC on 4/4/2020.
//

#include "busc_lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
MERCA* leera(MERCA*dato,int *cantidad_productos){
    int max;
    *cantidad_productos =0;
    printf("Digite cuanta mercancia va almcenar:\n");
    scanf("%d",&max);
    *cantidad_productos = max;
    dato = (MERCA*)malloc(max*sizeof(MERCA));
    if(dato==NULL){
        printf("Error reservando memoria\n");
        return 0;
    }

    for(int i=0;i<max;i++){
        printf("\tMercancia #%d:\n",i+1);
        printf("Digite el nombre del producto: \n");
        scanf("%s",&dato[i].nombre);

        printf("Digite el precio: \n");
        scanf("%f",&dato[i].precio);

        printf("Digite la cantidad del articulo en inventario: \n");
        scanf("%d",&dato[i].cantidad);
        printf("\n");

    }

    return dato;
}

MERCA buscar(char* nombre,MERCA* x,int cant_product){
    MERCA complemento;

    strcpy(complemento.nombre,"NULL");

    for(int i=0;i<cant_product;i++){

        if(strcmp(x[i].nombre,nombre)==0){
            strcpy(complemento.nombre,x[i].nombre);
            complemento.cantidad = x[i].cantidad;
            complemento.precio = x[i].precio;
            return complemento;
        }
    }

    strcpy(complemento.nombre,"NULL");
    return complemento;

}
