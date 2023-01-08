//
// Created by Kartik Aslia on 07-10-2022.
//
#include <stdio.h>

int main() {
    char s[100];
    int i;
    printf("\nEnter a string : ");
    gets(s);

    for (i = 0; s[i]!='\0'; i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
        }
    }
    printf("\nString in Upper Case = %s", s);
    return 0;
}