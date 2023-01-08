//
// Created by Kartik Aslia on 28-09-2022.
//
#include<stdio.h>

int main()
{
    int num,check,count,buff1,buff2,ccount=0;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("Enter the number you want check :");
    scanf("%d",&check);

    buff1 = num;
    while(buff1 != 0)
    {
        buff1 /= 10;
        count++;
    }
    buff2 = num;
    for (int i = 0; count > i; i++)
    {
        if (buff2%10 == check)
        {
            ccount++;
            buff2 /= 10;
        }
        else
        {
            buff2 /= 10;
        }
    }

    if (ccount != 0)
        printf("The digit %d is repeated %d times in %d",check,ccount,num);
    else
    {
        printf("The digit is not present");
    }
    return 0;
}