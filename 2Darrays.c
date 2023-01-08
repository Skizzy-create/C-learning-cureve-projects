//
// Created by Kartik Aslia on 31-08-2022.
//
#include <stdio.h>

int main()
{
    int num[7][3] =
            {
            {1, 2, 69},
            {3, 4,691},
            {5, 6,692},
            {7,8,693},
            {9,10,694},
            {11,12,6945},
            {13,14,69420}
    };
    printf("%d",num[6][1]);
    printf("\nAbove was the printing of a single element\n");
    int c,r;
    for (c = 0; c<7; c++)
    {
            for (r=0; r<3; r++)
            {
                printf("%d,",num[c][r]);
            }
            printf("\n");
    }
     int school[5][4] =
             {
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12},
            {13,14,15,16},
            {17,18,19,20}
     };
    int i,j;
    printf("\nNew array starts from here\n\n");
    for (i=0; i<5; i++)
    {
        for (j=0; j<4; j++)
        {
            printf("%d,",school[i][j]);
        }
    printf("\n");
    }


    return 0;
}