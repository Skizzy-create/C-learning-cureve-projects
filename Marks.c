//
// Created by Kartik Aslia on 31-08-2022.
//
#include <stdio.h>

int main()
{
    double sub1;
    double sub2;
    double sub3;
    double sub4;
    double sub5;
    double marks;
    printf("Enter the marks for 1st subject:");
    scanf("%lf",&sub1);

    printf("Enter the marks for 2nd subject:");
    scanf("%lf",&sub2);

    printf("Enter the marks for 3rd subject:");
    scanf("%lf",&sub3);

    printf("Enter the marks for 4th subject:");
    scanf("%lf",&sub4);

    printf("Enter the marks for 5th subject:");
    scanf("%lf",&sub5);

    marks = (sub1+sub2+sub3+sub4+sub5)/5;
    printf("Your percentage is %lf",marks);

    if (marks >= 60)
    {
        printf("Congratulations! \nYou have passed the subject.");
    }
    else
    {
        printf("Sorry! \nYou have failed the subject");
    }
}