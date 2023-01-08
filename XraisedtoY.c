//
// Created by Kartik Aslia on 28-09-2022.
//
#include <stdio.h>

int main()
{
    int x,y,ans = 1;
    printf("Enter the value of X :");
    scanf("%d",&x);
    printf("Enter the value of Y :");
    scanf("%d",&y);

    for(int i = 0; i < y; i++ )
    {
        ans *= x;
    }
    printf("\nThe value of %d raised to the power of %d is %d",x,y,ans);
    return 0;
}