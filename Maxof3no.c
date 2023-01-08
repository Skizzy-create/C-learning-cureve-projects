//
// Created by Kartik Aslia on 28-08-2022.
//
#include <stdio.h>

double max(double num1,double num2,double num3);

int main()
    {
        double num01;
        double num02;
        double nom03;
        printf("Enter the first number:");
        scanf("%lf",&num01);
        printf("Enter the second number:");
        scanf("%lf",&num02);
        printf("Enter the third nmber:");
        scanf("%lf",&num03);
        printf("The bigger of the two numbers is: %lf",max(num01,num02,num03));


    }
double max(double num1, double num2, double num3)
{
    double result;
    if(num1>=num2 && num1>=num3) {
        result = num1;
        //printf("Greatest Number is %lf",num1)
    } else if(num2>=num1 && num2>=num3) {
        result = num2;
    }
}