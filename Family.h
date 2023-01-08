//
// Created by Kartik Aslia on 06-09-2022.
//
#include <stdio.h>
#ifndef TSIR_FAMILY_H
#define TSIR_FAMILY_H

//Declaring the variable
char Family (char  name[])
{
    if (name == 'kartik' )
    {
        printf("Kartik's family has 4 Members\n");
        printf("His fathers name is Mr.Vinod Kumar Aslia\n");
        printf("His mothers name is Mrs.Sushma Sharma\n");
        printf("His twin brother's name is Kunal Aslia\n");
    }
    else
    {
        printf("Wrong Input");
    }
}

#endif

