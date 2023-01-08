//
// Created by Kartik Aslia on 29-09-2022.
//
#include <stdio.h>

int main() {
    int size, count = 0;
    printf("Enter the size of the array :");
    scanf("%d", &size);

    int arr[size], brr[size];

    for (int i = 0; i < size; i++) {
        printf("Enter the elements of array :");
        scanf("%d", &arr[i]);
    }

    printf("\nThe negative numbers in the arrays are :");

    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            printf("%d ",arr[i]);
        }
    }

    return 0;
}