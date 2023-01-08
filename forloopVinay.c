//
// Created by Kartik Aslia on 08-09-2022.
//
#include <stdio.h>

int main()
{
    int arr[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}};
    for(int i = 0; i<=2;i++){
        for(int j = 0; j<=2; j++){
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
}