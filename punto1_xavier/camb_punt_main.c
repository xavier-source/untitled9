//
// Created by PC on 4/4/2020.
//
#include <stdlib.h>
#include <stdio.h>
#include "camb_punt_lib.h"
int  main ()
{
    int x, z;
    printf ("1er valor: \n " );
    scanf ("%d",&x);
    printf ("2do valor: \n " );
    scanf ("%d",&z);

    cam cammbio = intercambiar(x,z);

    x = cammbio.x;
    z = cammbio.z;


    printf ( "1er valor: % d \n" , x);
    printf ( "2do valor: % d \n" , z);



    return 0 ;
}
