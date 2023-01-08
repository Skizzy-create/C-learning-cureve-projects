//
// Created by Kartik Aslia on 10-09-2022.
//
#include <stdio.h>
int main()
{
    int start1 = 1,start2 = 0, sum,lim;
    printf("Enter the nth value :");
    scanf("%d",&lim);
    for(lim; 0 < lim; lim--)
    {
        sum = start1+start2;
        printf("\n%d",start1);
       // printf("%d",start2);
        start2 = start1;
        start1 = sum;

    }
    return 0;
}