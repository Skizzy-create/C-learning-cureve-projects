//
// Created by Kartik Aslia on 28-08-2022.
//
#include <stdio.h>

double max(double num1,double num2);

 int main()
 {
    double num01;
    double num02;
     printf("Enter the first number:");
    scanf("%lf",&num01);
     printf("Enter the second number:");
    scanf("%lf",&num02);
    printf("The bigger of the two numbers is: %lf",max(num01,num02));
    return 0;

 }

double max(double num1,double num2)
{
     double result;
     if (num1>num2)
     {
         result = num1;
     } else
     {
         result = num2;
     }
    return result;
}
//sudhanshu