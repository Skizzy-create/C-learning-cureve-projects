//
// Created by vpkar on 9/14/2022.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    char arr[4][20] ={"Vinay", "kartik", "vin", "hulk"};
    printf("Enter the amount of elements you want to add:");
    scanf("%d", &n);

    for(int i = 0; i< n;i++) {
        printf("\nEnter the name you want to add:");
        scanf("%s", &arr[i+5][20]);
        for (int j = 0; j < 4; j++) {
            if((arr[j][19] ^ arr[i+5][19]) == 0 && strlen(&arr[j][20]) == strlen(&arr[i+5][20])){
                printf("Name already exists.");
                exit(0);
            }
        }
    }



    return 0;
}
