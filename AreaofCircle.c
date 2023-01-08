//
// Created by Kartik Aslia on 12-09-2022.
//
#include <stdio.h>

double arc(double x);

int main()
{
    double a;
    printf("Radius of cicle :");
    scanf("%lf",&a);
    arc(a);
}

double arc(double x)
{
    double z;
    z = 3.14 * x *x;
    printf("Area : %0.2lf",z);
    return z;
}