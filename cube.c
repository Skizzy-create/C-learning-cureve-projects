//
// Created by Kartik Aslia on 12-09-2022.
//
#include <stdio.h>

int cubei(int x);

int main()
{
    int a;
    printf("Enter the number for cube:");
    scanf("%d",&a);
    cubei(a);
}

int cubei(int x)
{
    int z;
    z = x*x*x;
    printf("Cube : %d",z);
    return z;
}