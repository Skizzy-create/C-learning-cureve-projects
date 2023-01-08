//
// Created by Kartik Aslia on 21-10-2022.
//
#include <stdio.h>

int main()
{
    FILE * fptr;
    int value;
    fptr = fopen("num.dat","rb");

    while((value = getw(fptr))!=EOF)
        printf("%d\t",value);
    fclose(fptr);
}