//
// Created by Kartik Aslia on 08-09-2022.
//
#include <stdio.h>

int main()
{
    int op;
    puts("Welcome to the calculator !\n");
    puts("\nPlease select the operation:");
    puts("1. Area of the circle");
    puts("\n2. Circumference of the circle");
    puts("\nEnter the operation number you want :");
    scanf("%d",&op);

    if (op == 1)
    {
        double radius;
        double area;
        puts("You have selected the area operation\n");
        puts("Radius of the circle :");
        scanf("%lf",&radius);
        area = radius * 3.14 * radius;
        printf("area of the circle is %lf",area);

    }
    else if(op == 2)
    {
        double radius;
        double cir;
        puts("You have selected the circumference operation\n");
        puts("Radius of the circle :");
        scanf("%lf", &radius);
        cir = radius * 2 * 3.14;
        printf("circumference of the circle is %lf", cir);
    }
    else
    {
        printf("invalid input");
    }
    return 0;
}