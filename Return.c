//
// Created by Kartik Aslia on 28-08-2022.
//
#include <stdio.h>

double cube(double num1);

int main()
{
    double num;
    printf("Please enter the number:");
    scanf("%lf",&num); // **** Use & in front of numbers, floats and doubles ****
    printf("Answer :%lf", cube(num));
    return 0;
}

double cube(double num1) // This is after the main function, but above I have placed a prototype
{
    double result = num1 * num1 * num1;
    return result;
    printf("Fuck you bitch"); // This line won't be executed as return breaks us out of the function
}
