//
// Created by Kartik Aslia on 08-09-2022.
//
#include <stdio.h>
int main(){
    short int x;
    printf("1. Add.\n");
    printf("2. Subtract.\n");
    printf("3. Multiply\n\n");
    printf("Enter your option:");
    scanf("%d", &x);

    switch (x) {
        short int a, b, total;
        case 1:
            printf("Enter Two Numbers:");
            scanf("%d%d", &a, &b);
            total = a+b;
            printf("Sum: %d", total);
        case 2:
            printf("Enter Two Numbers:");
            scanf("%d%d", &a, &b);
            total = a-b;
            printf("Difference: %d", total);
        case 3:
            printf("Enter Two Numbers:");
            scanf("%d%d", &a, &b);
            total = a*b;
            printf("Product: %d", total);

    }

}