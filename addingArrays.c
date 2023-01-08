//
// Created by vpkar on 9/19/2022.
//
#include <stdio.h>
int main(){
    int arr1[3][3], arr2[3][3], arr3[6][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("arr1[%d][%d] =", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("arr2[%d][%d] =", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            arr3[i][j] = arr1[i][j];
            arr3[i+3][j] = arr2[i][j];
        }
    }

    printf("\narr3 = \n");

    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
     return 0;
}
