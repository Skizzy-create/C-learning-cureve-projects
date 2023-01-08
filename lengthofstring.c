//
// Created by Kartik Aslia on 22-09-2022.
//
#include <stdio.h>

int main()
{
    char s[1000];
    int c = 0;

    printf("Input a string: ");
    gets(s);

    while (s[c] != '\0')
        c++;

    printf("\nLength of the string is %d\n",c);

    return 0;
}