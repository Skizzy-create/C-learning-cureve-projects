//
// Created by Kartik Aslia on 28-09-2022.
//
#include <stdio.h>

int main()
{
    int num,sqsum = 0;
    printf("Enter the number :");
    scanf("%d",&num);
    for(int i = num; i>0; i/=10)
    {
        int n = i%10;
        sqsum += (n*n);
    }
    printf("The sum of square of %d",sqsum);
    return 0;
}