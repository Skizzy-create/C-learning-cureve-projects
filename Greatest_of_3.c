//
// Created by Kartik Aslia on 12-09-2022.
//
#include <stdio.h>

/* function declaration */
int max(int num1, int num2,int num3);

int main () {

    /* local variable definition */
    int a ;
    int b ;
    int c;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("\nEnter the second number :");
    scanf("%d",&b);
    printf("\nEnter the third number :");
    scanf("%d",&c);
    int ret;

    /* calling a function to get max value */
    ret = max(a, b, c);

    printf( "Max value is : %d\n", ret );

    return 0;
}

/* function returning the max between two numbers */
int max(int num1, int num2, int num3)
{
    /* local variable declaration */
    int result;

    if (num1 > num2 && num1 > num3)
    {
        result = num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        result = num2;
    }
    else
    {
        result = num3;
    }
    return result;
}