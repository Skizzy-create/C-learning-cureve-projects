//
// Created by Kartik Aslia on 21-10-2022.
//
#include <stdio.h>

int main()
{

    FILE *fp;
    char name[10];
    int age;
    fp = fopen("rec.dat","w");
    printf("Enter your name and age :");
    scanf("%s%d",name,&age);
    fprintf(fp,"My name is %s and age is %d",name, age);
    fclose(fp);
    return 0;
}