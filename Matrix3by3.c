//
// Created by Kartik Aslia on 20-09-2022.
//
#include <stdio.h>

int main()
{
    int arr1[3][3], arr2[3][3], arr3[3][3];

    printf("Enter the elements of the First Array\n");
    // Entering the elements of the 1st Array
    for(int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("Enter the %d %d element of the 1st Matrix :",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }
    // Enter the elements of the 2nd Array
    printf("Enter the elements of the Second Array\n");
    for(int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf("Enter the %d %d element of the 2nd Matrix :",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
    }
    // Multiplying the Arrays
    for(int i = 0; i <= 2; i++)
    {
        for(int j = 0; j <= 2; j++)
        {
            arr3[i][j] = 0;
            for(int k = 0; k <= 2; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // Printing the elements of the 3 array multiplied
    for(int v = 0; v <= 2; v++)
    {
        for(int b = 0; b <= 2; b++)
        {
            printf("%d    ",arr3[v][b]);
        }
        printf("\n");
    }
    return 0;
}