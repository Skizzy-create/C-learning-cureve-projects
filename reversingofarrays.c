//
// Created by Kartik Aslia on 22-09-2022.
//
#include <stdio.h>

int main()
{
    int n, c, d, a[100], b[100];

    printf("\nEnter the number of the elements in array :");
    scanf("%d",&n);

    printf("Enter the array elements\n");

    for (c = 0; c<n; c++){
        scanf("%d", &a[c]);}

    // copying elements into array b starting from the end of array a

    for (c = n -1, d = 0; c>= 0; c--,d++){
        b[d] = a[c];}

    //copying reversed arrqay into the orignal, we are modifying the orignal array.

    for (c = 0; c < n; c++) {
    a[c] = b[c];}

    printf("The array after reversal: \n");

    for(c = 0; c < n; c++){
        printf("%d\n",a[c]);
    }
    return 0;
}