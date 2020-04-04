//
// Created by PC on 4/4/2020.
//

#include "elim_ora_lib.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* PrimeraOracion(char* ora){

    int i=0;
    char*p;
    p=ora;
    do{
        p++;
    }while(*p!='.' && *p!='?' && *p!='!');
    p= p+1;
    return p;

}

char* SegundaOracion(char* ora){

    char* p;
    p=ora;
    do{
        p++;
    }while(*p!=NULL);

    return p;
}





