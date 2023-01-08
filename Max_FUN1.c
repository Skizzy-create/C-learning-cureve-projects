//
// Created by Kartik Aslia on 06-10-2022.
//
#include <stdio.h>

int max(int m,int n);

int main()
{
    int x,a,b;
    printf("Enter first number :");
    scanf("%d",&a);

    printf("Enter second number :");
    scanf("%d",&b);
    x = max(a,b);
    printf("%d is the bigger of two",x);
}

int max(int m,int n)
{
    int ans;
    if(m>n)
        ans = m;
    else
        ans = n;

    return ans;
}