//
// Created by Kartik Aslia on 21-10-2022.
//
#include <stdio.h>

int main()
{
    FILE *fptr;
    char str[80];
    fptr = fopen("test.txt","w");
    printf("Enter the text to input in the file");
    printf("\nTo stop, press 'ctrl + c ' :");
    while(gets(str)!=NULL)
        fputs(str,fptr);
    fclose(fptr);
    return 0;
}