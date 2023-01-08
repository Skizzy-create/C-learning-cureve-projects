//
// Created by Kartik Aslia on 14-09-2022.
//
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the first number for swapping :");
    scanf("%d",&a);
    printf("Enter the second number for swapping :");
    scanf("%d",&b);

    c = a;
    a = b;
    b = c;
    printf("Values after swapping forr a = %d\n",a);
    printf("Values after swapping for b = %d",b);
}