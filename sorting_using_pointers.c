//
// Created by Kartik Aslia on 13-01-2023.
//
#include<stdio.h>
void sort(int n,int*ptr)
{
    int i,j,t;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(ptr+j)< *(ptr+i))
            {
                t = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = t;
            }
        }
    }

// print the numbers
    for (i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
}

int main(){
    int size = 5,arr[5] = {646,684,4,897,64};
    sort(size,arr);
}