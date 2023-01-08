//
// Created by Kartik Aslia on 18-10-2022.
//
#include <stdio.h>
int main(){
    FILE *p;
    char ch;
    if((p=fopen("myfile.txt", "r"))== NULL)
        printf("This file does not exists\n");
    else
    {
        while((ch = fgetc(p))!=EOF)
            printf("%c",ch);
    }
    fclose(p);
}

