//
// Created by PC on 4/4/2020.
//

#include "elim_matr_lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

    ESTUDIANTES* almacenar = NULL;
    int Cant_Estudiantes=0;
    almacenar =leer(almacenar,&Cant_Estudiantes);
    char Matricula_eliminar[15];
    printf("\n");
    printf("\tMatricula de los estudiantes obtenidos: \n");
    for(int w=0;w<Cant_Estudiantes;w++){
        printf("Matricula #%d: %s\n",w+1,almacenar[w].matricula);
    }
    printf("\n");
    printf("\tDigite la matricula que desea eliminar:\n");
    scanf("%s",&Matricula_eliminar);
    printf("\n");


    almacenar = eliminar(almacenar,Cant_Estudiantes,Matricula_eliminar);

    if(almacenar[0].validar==Cant_Estudiantes){
        printf("No se ha encontrado a esta matricula en la lista.\n");
        return 0;
    }

    printf("\tMatricula de los estudiantes restantes: \n");
    for(int w=0;w<Cant_Estudiantes-1;w++){
        printf("Matricula #%d: %s\n",w+1,almacenar[w].matricula);
    }


    return 0;
}