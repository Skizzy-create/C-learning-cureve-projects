//
// Created by Kartik Aslia on 02-10-2022.
//
#include <stdio.h>

int main()
{
    for(int z = 0; z < 3; z++) {
        if (z == 0 || z == 2 ) {
            for (int k = 0; k < 1; k++) {
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 1; j++) {
                        printf("1");
                    }
            if (i != 2) {
                for (int z = 0; z < 1; z++)
                    printf("0");
            }
        }
        printf("\n");
    }
        }
        for (int k = 0; k < 1; k++) {
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
    }
    return 0;
}