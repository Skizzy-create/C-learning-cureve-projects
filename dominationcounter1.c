//
// Created by Kartik Aslia on 23-09-2022.
//
#include <stdio.h>
int main()
{
    int n,choice,notes;
    printf("Enter the total amount in Rs :");
    scanf("%d",&n);
    printf("Enter the value of the notes from which you want to begin :");
    scanf("%d",&choice);
    switch (choice) {
        default:
            printf("Enter on valid values");
            break;
        case 100:
            notes = n / 100;
            printf("Number of 100 RS notes = %d\n", notes);
            n = n % 100;
        case 50:
            notes = n / 50;
            printf("Number of 50 Rs notes = %d\n", notes);
            n = n % 50;
        case 20:
            notes = n / 20;
            printf("Number of 20 Rs notes = %d\n", notes);
            n = n % 20;
        case 10:
            notes = n / 10;
            printf("Number of 10 RS motes = %d\n", notes);
            n = n % 10;
        case 5:
            notes = n / 5;
            printf("Number of 5 Rs notes = %d\n", notes);
            n = n % 5;
        case 2:
            notes = n / 2;
            printf("Number of 2 Rs notes = %d\n", notes);
            n = n % 2;
        case 1:
            notes = n / 1;
            printf("Number of 1 Rs notes = %d\n", notes);
    }
    printf('\n');
    return 0;
}