//
// Created by Kartik Aslia on 19-09-2022.
//
#include <stdio.h>

int main()
{
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {6,7,8,9,10};
    int arr3[5] = {}, arr4[10] = {};
    int sum;


    for(int i = 0; i<5; i++)
    {
        if( i < 5)
        {
            arr4[i] = arr1[i];
            arr4[i+5] = arr2[i];

        }
    }
    // SUM of both the arrays
    for(int i = 0; i<5; i++)
    {
        if( i < 5)
        {
            sum = arr1[i] + arr2[i];
            arr3[i] = sum;

        }
    }


    printf("This is the sum of the both arrays");

    for (int j = 0; j < 5; j++)
    {
        printf("\n%d",arr3[j]);
    }

    printf("\nThis is the merger array");

    for (int j = 0; j < 10; j++)
    {
        printf("\n%d",arr4[j]);
    }
    return 0;
}