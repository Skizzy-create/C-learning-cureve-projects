//
// Created by Kartik Aslia on 19-09-2022.
//
#include <stdio.h>

int main()
{
    int arr1[2][2];
    int arr2[2][2];
    int arr3[2][4], arr4[2][2];


    // Taking input for arr1
    for(int i = 0; i <= 1; i++)
    {
        for(int k = 0; k <= 1; k++ )
        {
            printf("\nEnter the %d %d element of the first array :", i+1,k+1);
            scanf("%d", &arr1[i][k]);
        }
    }

    printf("2ND array starts");

    // Taking input for arr2
    for(int j = 0; j <= 1; j++)
    {
        for(int h = 0; h <= 1; h++)
        {
            printf("\nEnter the %d %d element of the second array :",j,h);
            scanf("%d", &arr2[j][h]);
        }
    }

    // MERGING THE TWO ARRAYS IN ONE ARR3
    for(int g = 0; g <= 1; g++ )
    {
        for(int y = 0; y <= 1; y++) {

            arr3[g][y] = arr1[g][y];
            arr3[g][y + 2] = arr2[g][y];

        }
    }

    // ADDING THE TWO ARRAYS TO ARR4
    for(int i = 0; i <= 1; i++)
    {
        for(int j = 0; j <= 1; j++)
        {
            arr4[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // PRINTING THE MARGERD arr3
    for(int v = 0; v <= 1; v++)
    {
        for(int b = 0; b <= 3; b++)
        {
            printf("%d",arr3[v][b]);
        }
        printf("\n");
    }

    printf("The sum array\n");
    // PRINTING THE SUM arr4
    for(int v = 0; v <= 1; v++)
    {
        for(int b = 0; b <= 1; b++)
        {
            printf("%d",arr4[v][b]);
        }
        printf("\n");
    }
    return 0;
}