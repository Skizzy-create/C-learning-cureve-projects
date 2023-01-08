//
// Created by Kartik Aslia on 09-09-2022.
//
#include <stdio.h>

int main()
{
    for( int z = 1; z<=3 ; z++)
    {
        for (int i = 1; i <= 3; i++)
        {
            for (int j = 1; j <= 3; j++)
            {
                printf("%d", j);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}