#include <stdio.h>

int main()
{
    double num1,num2;
    printf("Please enter the 1st Number :");
    scanf("%lf",&num1);
    printf("Please enter the second number :");
    scanf("%lf",&num2);

    double Sum = num1+num2;
    printf("Answer : %0.2lf",Sum);
    return 0;
}
