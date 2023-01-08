//
// Created by Kartik Aslia on 07-10-2022.
//
#include <stdio.h>

int main() {
    char s[100],a[100];
    int i = 0;
    printf("\nEnter a string : ");
    scanf("%s %s",s,a);

    if(s[i] >= 'a' && s[i] <= 'z') {
        s[0] = s[0] - 32;
    }

    if(a[i] >= 'a' && a[i] <= 'z') {
        a[0] = a[0] - 32;
    }

    printf("\nName in Upper Case = %s %s", s,a);
    return 0;
}