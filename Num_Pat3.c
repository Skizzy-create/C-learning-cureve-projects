//
// Created by Kartik Aslia on 02-10-2022.
//
#include <stdio.h>

int main()
{
    for(int k = 0; k < 5; k++) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 1; j++)
                printf("0");

            if (i != 2) {
                for (int z = 0; z < 1; z++)
                    printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}