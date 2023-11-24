//
// Created by Kartik Aslia on 22-12-2022.
//
#include <stdio.h>

int length(char str[50]);
void copy(char src[50],char dest[50],int len);
void reverse(char org[50],int len);
void upper(char str[50]);
void lower(char str[50]);

int main(){
    char string[50],dest[50];
    int count;
    printf("Enter the string :");
    scanf("%s",string);
    count = length(string);
    upper(string);
    lower(string);
    copy(string,dest,count);
    reverse(string,count);
}

int length(char str[50]){
    int count = 0,i = 0;
    while (str[i] != '\0') {
        count++;
        i++;
    }
    printf("length of the string is : %d",count);
    return count;
}

void copy(char src[50], char dest[50], int len) {
    for (int i = 0; i < len; i++) {
        dest[i] = src[i];
    }
    dest[len] = '\0';
    printf("The copied string is: %s\n", dest);
}

void reverse(char org[50],int len){
    char rev[50];
    for (int i = 0; i < len; i++) {
        rev[len - i - 1] = org[i];
    }
    rev[len] = '\0';
    printf("\nThe reversed string is = %s",rev);
}

void upper(char str[50]) {
    char up[50];
    for (int j = 0; str[j] != '\0'; j++) {
        if (str[j] >= 'a' && str[j] <= 'z')
            up[j] = str[j] - 32;
        else
            up[j] = str[j];
    }
    printf("\nThe upper case string is : %s", up);
}
void lower(char str[50]){
    char low[50];
    for (int j = 0; str[j] != '\0'; j++) {
        if (str[j] >= 'A' && str[j] <= 'Z')
            low[j] = str[j] + 32;
        else
            low[j] = str[j];
    }
    printf("\nThe lower case string is : %s", low);
}

