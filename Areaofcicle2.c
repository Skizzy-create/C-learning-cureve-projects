//
// Created by Kartik Aslia on 12-09-2022.
//
#include <stdio.h>

double arc(int * x);

int main()
{
    int a;
    printf("Radius of cicle :");
    scanf("%d",&a);
    arc(&a);
}

double arc(int * x)
{
    int * z;
    z = 3 * (*x) *(*x);
    printf("Area : %0.2d",z);
    return 0.0;
}