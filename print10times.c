//
// Created by Kartik Aslia on 01-09-2022.
//
#include <stdio.h>

int main()
{
    int i,j;
    for (i = 0; i < 10; i ++)
    {
        printf("Hello World\n");
    }
    for (j = 1; j<11; j++)
    {
        printf("%d\n", j);
    }
    int a ;
    int b;
    printf("Enter the value of n:");
    scanf("%d",&a);
    int sum2 = 0;
    for (b=0; b<=a; b++)
    {
        sum2=sum2+b;
    }
    printf("%d",sum2);
    return 0;
}
