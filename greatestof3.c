#include <stdio.h>

double max(double num1,double num2,double num3);

int main()
{
    double num01;
    double num02;
    double num03;

    printf("Enter the first number:");
    scanf("%lf",&num01);

    printf("Enter the second number:");
    scanf("%lf",&num02);

    printf("Enter the third number:");
    scanf("%lf",&num03);

    printf("Greatest number is: %lf",max(num01,num02,num03));
    return 0;
}

double max(double num1,double num2,double num3)
{
    double result;
    if (num1>=num2 && num1>=3) // && is used for and logical operator, and || is used for or operator
    {
        result = num1;
    }
    else if (num2>=num3 && num2>=num1)
    {
        result = num2;
    }
    else
    {
        result = num3;
    }
    return result;
}
