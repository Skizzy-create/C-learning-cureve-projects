//
// Created by Kartik Aslia on 28-09-2022.
//
#include <stdio.h>

int main() {
    int num, rev = 0;

    printf("Enter a whole number :");
    scanf("%6d", &num);

    while (num != 0) {
        rev = (rev * 10) + (num % 10);
        num /= 10;
    }
    while(rev != 0)
    {
        switch (rev%10)
        {
            case 0:
                printf("Zero ");
                break;
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
        }
        rev = rev/10;
    }

    return 0;
}
/*while(num != 0)
    {
        switch(num % 10)
        {
            case 0:
                printf("Zero ");
                break;
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6: 
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
        }

        num = num / 10;
    }

    sir i understood
    this,

    but the not the while loop where we reverse the number.
    */
