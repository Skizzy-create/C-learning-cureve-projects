//
// Created by Kartik Aslia on 22-12-2022.
//
#include <stdio.h>

void evenstring(char str[50]);

int main(){
    char string[50];
    printf("Enter the elements in the string :");
    scanf("%s",string);

    evenstring(string);
}
void evenstring(char str[50]){
    for(int i = 1; i < 50; i += 2){
        if(str[i] == '\0')
            break;
        printf("The %dth element in given string is %c\n",i+1,str[i]);
    }
}