//
// Created by Kartik Aslia on 28-09-2022.
//
#include<stdio.h>
int main() {
    int num,evsum = 0,oddpro = 1;
    printf("Enter the the number :");
    scanf("%6d", &num);
    for(int i = num; i>0; i/=10)
    {
        int n = i%10;
        if(n % 2 == 0)
        {
            evsum += n;
        }
        else
        {
            oddpro *= n;
        }
    }
    printf("Sum of even digits is %d and Product of odd digits is %d",evsum,oddpro);
    return 0;
}