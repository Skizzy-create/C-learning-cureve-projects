#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 5;
    scanf("%d",&size);

    int arr[size],arr2[size];
    for(int i = 0; i < size; i++)
    {
        scanf(" %d",&arr[i]);
    }

    for(int i = 0; i < size; i++)
    {
        arr2[size - i - 1] = arr[i];
    }

    for(int i = 0; i < size; i++ )
    {
        printf(" %d",arr2[i]);
    }
    return 0;
}