//
// Created by Kartik Aslia on 21-09-2022.
//
#include <stdio.h>

int main()
{
    int num,digit,sum;
    printf("Enter a number :");
    scanf("%d",&num);
    printf("%d-->\t",num);

    do {
        for(sum = 0; num != 0; num /= 10)
        {
            digit = num%10;
            sum += digit;
        }
        printf("%d\t",sum);  // \t is used for tab spacing
        num = sum;
    }while(num/10 != 0);
    return 0;
}