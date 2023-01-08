//
// Created by Kartik Aslia on 31-08-2022.
//
#include <stdio.h>

int main()
{
    int i;
    int sum1 = 0;
    for (i=1; i<=100; i++) //Try adding zeroes to i<=100, and look for a pattern
    {
        sum1 = sum1 + i;
        printf("\n%d",sum1);
    }
    int a1[] = {10,20,30,40,50,60,70,80,90,100,110};
    for (i=-1; i<11; i++ )
    {
        printf("%d\n",a1[i]);
    }
}