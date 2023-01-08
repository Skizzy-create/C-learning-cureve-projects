//
// Created by Kartik Aslia on 12-09-2022.
//
#include <stdio.h>

int dis(int x);

int main()
{
    int a;
    printf("Enter the distance in Km's :");
    scanf("%d",&a);
    dis(a);
}

int dis(int x)
{
    int z;
    z = x * 1000;
    printf("distance in meters : %d",z);
    return z;
}