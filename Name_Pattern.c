//
// Created by Kartik Aslia on 07-10-2022.
//
#include <stdio.h>

int main()
{
    char a[100],s[100];
     printf("Enter your first name :");
     gets(a);
     for(int i = 0; a[i]!='\0';i++) {
         s[i] = a[i];
         printf("%s", s);
     }
         printf("\n");

    return 0;
}