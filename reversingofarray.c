//
// Created by Kartik Aslia on 22-09-2022.
//
#include <stdio.h>

void reverse_array(int[],int);
int main()
{
    int n, c, a[1000];
    scanf("%d",&n);

    for (c = 0; c < n; c++){
        scanf("%d", &a[c]);}

    reverse_array(a,n);

    printf("The array after reversal :\n");

    for (c = 0; c < n; c++)
        printf("%d\n",a[c]);

    return 0;
}

void reverse_array (int a[], int n)
{
    int c, t;

    for (c = 0; c < n/2; c++){
        t = a[c];
        a[c] = a[n-c-1];
        a[n-c-1] = t;
    }
}