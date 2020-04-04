//
// Created by PC on 4/4/2020.
//

#include "elim_matr_lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
ESTUDIANTES* leer(ESTUDIANTES* almacenar,int* Cant_Estudiantes ){

    int max;
    int cant_materias;
    int cant_ponderaciones;
    printf("Digite cuantos estudiantes va a ingresar: \n");
    scanf("%d",&max);

    almacenar =(ESTUDIANTES*)malloc(max*sizeof(ESTUDIANTES));
    if(almacenar==NULL){
        printf("Error en la reserva de memoria!!\n");
        return 1;
    }
    *Cant_Estudiantes = max;

    for(int i=0;i<max;i++){
        printf("\tEstudiante #%d\n",i+1);
        printf("Digite el nombre del estudiante: \n");
        scanf("%s",&almacenar[i].nombre);

        printf("Digite la matricula del estudiante: \n");
        scanf("%s",&almacenar[i].matricula);

        printf("Digite la edad del estudiante: \n");
        scanf("%d",&almacenar[i].edad);

        printf("Digite cuantas materias lleva este estudiante:\n");
        scanf("%d",&cant_materias);

        for(int j=0;j<cant_materias;j++){
            printf("Materia #%d\n",j+1);
            printf("Digite el nombre: \n");
            scanf("%s",&almacenar[i].mat[j].nombre);

            printf("Digite la cantidad de ponderaciones que tiene la materia: \n");
            scanf("%d",&cant_ponderaciones);

            float Tot_ponderacion=0;
            for(int k=0;k<cant_ponderaciones;k++){
                printf("ponderacion #%d: \n",k+1);
                printf("Escriba el nombre de la ponderacion: \n");
                scanf("%s",&almacenar[i].mat[j].eva[k].nombre);

                printf("Escriba el valor de esta ponderacion(ojo todas las ponderaciones deben sumar un 100%): \n");
                scanf("%f",&almacenar[i].mat[j].eva[k].ponderacion);
                Tot_ponderacion+=*almacenar[i].mat[j].eva[k].ponderacion;

                printf("Escriba cuanto acumulo el estudiante en la ponderacion: \n");
                scanf("%f",&almacenar[i].mat[j].eva[k].calificacion);

            }
            if(Tot_ponderacion>1000){
                printf("La ponderacion no debe pasar ni debe ser menor a un 100 porciento.\n");
                return 0;
            }

            for(int y;y<cant_ponderaciones;y++){
                for(int z;z<cant_ponderaciones;z++){
                    if(strcasecmp(almacenar[i].mat[j].eva[y].nombre,almacenar[i].mat[j].eva[z].nombre)==0){
                        printf("EL NOMBRE DE CADA PONDERACION DEBE SER UNICO!!\n");
                        return 0;
                    }
                }
            }
            //system("cls");
        }

    }
    return almacenar;

}

ESTUDIANTES* eliminar(ESTUDIANTES* almacenar,int Cant_Estudiantes,char* Matricula_eliminar ){

    int i;
    int resta=0;
    int Posicion_estudiante=0;
    almacenar[0].validar =0;
    for(i=0;i<Cant_Estudiantes;i++){
        if(strcmp(Matricula_eliminar,almacenar[i].matricula)==0){
            printf("Se ha encontrado al estudiante con exito!!\n");
            Posicion_estudiante = i+1;//este +1;

        }
        else{
            printf("No se ha encontrado al estudiante en la posicion #%d!!\n",i+1);
            almacenar[0].validar++;
        }
    }
    printf("\n\n");
    if(almacenar[0].validar==Cant_Estudiantes){
        return almacenar;
    }

//para saber cuantos pasos dar.
    resta = Cant_Estudiantes-Posicion_estudiante;
    int contador=0;
    int z=0;
    do{
        strcpy(almacenar[Posicion_estudiante-1].matricula,almacenar[Posicion_estudiante].matricula);
        z++;
        contador++;
    }while(contador!=resta);

    return almacenar;
}