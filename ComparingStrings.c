//
// Created by Kartik Aslia on 22-09-2022.
//
#include <stdio.h>

int compare_string(char[], char[]);

int main() {
    char a[1000], b[1000];

    printf("\nInput a string :");
    gets(a);

    printf("Input a string :");
    gets(b);

    if (compare_string(a, b) == 0) {
        printf("Equal strings. \n");
    } else { printf("Unequal strings. \n"); }

    return 0;
}

int compare_string (char a[], char b[])
{
    int c = 0;
    while (a[c] == b[c]){
        if (a[c] == '\0' || b[c] == '\0')
            break;
        c++;
    }

    if(a[c] != '\0' && b[c] != '\0'){
        return 0;}
    else{
        return -1;}
}