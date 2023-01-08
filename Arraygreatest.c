//
// Created by Kartik Aslia on 14-09-2022.
//
#include <stdio.h>

int main()
{
    int a[5];

    int big;
    for (int j = 0; j < 5; j++)
    {
        printf("Enter the numbers in Arrays :");
        scanf("%d", &a[j]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (a[i]>a[i+1])
        {
            big = a[i];
        }
        else
        {
            big = a[i+1];
        }
    }
    printf("\nThe greatest number in the array is %d",big);
return 0;
}