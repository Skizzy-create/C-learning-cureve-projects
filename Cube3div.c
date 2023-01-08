//
// Created by Kartik Aslia on 28-09-2022.
//
#include<stdio.h>
int main()
{
    int stop;
    printf("Enter the the number to stop :");
    scanf("%d",&stop);

    for(int i = 0; i < stop; i++ )
    {
        if(i % 3 == 0)
        {
            printf("\n%d",i*i*i);
        }
        else
        {
            continue;
        }
    }
    return 0;
}