//
// Created by Kartik Aslia on 22-10-2022.
//
#include <stdio.h>
#include <stdlib.h>

struct record{
    char name[20];
    int roll;
    float marks;
}student;

int main()
{
    FILE *fp;
    fp = fopen("stu.dat","rb");
    if(fp == NULL)
    {
        printf("Error in opening file\n");
        exit(1);
    }
    printf("\nNAME\tROLLNO\tMARKS\n");
    while(fread(&student,sizeof(student),1,fp)==1)
    {
        printf("%s\t",student.name);
        printf("%d\t",student.roll);
        printf("%0.2f\t",student.marks);
        printf("\n");
    }
    fclose(fp);
    return 0;
}