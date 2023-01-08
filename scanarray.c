//
// Created by Kartik Aslia on 14-09-2022.
//
#include <stdio.h>

int main()
{
    int a[5];

    int check,z;
    for (int j = 0; j < 5; j++)
    {
        printf("Enter the numbers in Arrays :");
        scanf("%d", &a[j]);
    }
    printf("Enter the number to check in array:");
    scanf("%d",&check);

    for (int i = 0; i < 5; i++)
    {
        if (a[i] == check)
        {
            printf("The element exists in the array");
            break;
        }
        else
        {
            printf("Element doesnt exist !");
            break;
        }
    }
}