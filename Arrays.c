//
// Created by Kartik Aslia on 28-08-2022.
//
#include <stdio.h>

int main()
{
    int NewArrays[] = {1,2,3,4,5,6,7,8,69,420};
    printf("%d",NewArrays[2]);
    NewArrays[6] = 99;
    printf("\n%d",NewArrays[6]); // Arrays are mutable
    printf("\n%d",NewArrays[1]); // Arrays are mutable
    printf("\n%d",NewArrays[0]); // Arrays are mutable
    printf("\n%d",NewArrays[10]); // Arrays are mutable
    return 0;

}