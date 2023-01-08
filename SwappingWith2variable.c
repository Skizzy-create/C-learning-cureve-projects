//
// Created by Kartik Aslia on 14-09-2022.
//
#include <stdio.h>
int main()
{
    int x, y ;
    SYS_OPEN ;
    printf("Enter the first number for swapping :");
    scanf("%d",&x);
    printf("Enter the second number for swapping :");
    scanf("%d",&y);

    // Code to swap 'x' and 'y', lrt 'x' = 10, 'y' = 5
    x = x + y; // x now becomes 15
    y = x - y; // y becomes 10
    x = x - y; // x becomes 5

    printf("After Swapping: x = %d, y = %d", x, y);

    return 0;
}