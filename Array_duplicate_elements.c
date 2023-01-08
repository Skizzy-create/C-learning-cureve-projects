//
// Created by Kartik Aslia on 29-09-2022.
//
#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of the array :");
    scanf("%d",&size);
    int arr[size];
    for(int m = 0; m < size; m++)
    {
        printf("Enter the elements of the :");
        scanf("%d",&arr[m]);
    }
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                size--;
                j--;
            }
        }
    }
    for(int m = 0; m < size; m++)
    {
        printf("\n%d",arr[m]);
    }
}