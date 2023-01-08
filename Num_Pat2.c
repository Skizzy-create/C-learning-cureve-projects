//
// Created by Kartik Aslia on 02-10-2022.
//
#include <stdio.h>

int main()
{
    for (int i = 0; i < 3; i++) {
        for(int j = 0; j < 5; j++)
            printf("1");

        printf("\n");
        if(i != 2) {
            for (int z = 0; z < 5; z++)
                printf("0");
        }
        printf("\n");
    }
    return 0;
}