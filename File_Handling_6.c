//
// Created by Kartik Aslia on 21-10-2022.
//
#include <stdio.h>

int main()
{
    FILE *fptr;
    char str[80];
    fptr = fopen("test.txt","r");
    while(fgets(str,80,fptr)!= 0)
        puts(str);
    fclose(fptr);
    return 0;
}