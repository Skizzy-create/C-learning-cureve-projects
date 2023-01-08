//
// Created by Kartik Aslia on 22-09-2022.
//
#include <stdio.h>

void concatenate(char p[], char q[]);

int main()
{
    char p[100], q[100];

    printf("Input a string: ");
    gets(p);

    printf("\nInput a string to concatenate :");
    gets(q);

    concatenate(p,q);

    printf("String obtained on concatenation: \"%s\"\n",p);

    return 0;
}

void concatenate(char p[], char q[]){
    int c, d = 0;
    c = 0;
    while(p[c] != '\0'){
        c++;
    }
    while(p[d] != '\0'){
        p[c] = q[d];
        d++;
        c++;
    }
    p[c] = '\0';
}