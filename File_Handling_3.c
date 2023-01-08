//
// Created by Kartik Aslia on 18-10-2022.
//
#include <stdio.h>
int main(){
    FILE *fptr;
    int value;
    fptr=fopen("num.dat", "wb");
    for (value=1; value<=30;value++)
        putw(value,fptr);
    fclose(fptr);
}