//
// Created by Kartik Aslia on 22-10-2022.
//
#include <stdio.h>
#include <stdlib.h>
struct record
{
    char name[20];
    int roll;
    float marks;
}student;
int main()
{
    int n;
    FILE *fp;
    fp = fopen("stu.dat","rb");
    if(fp == NULL)
    {
        printf("Error in opening the file\n :");
        exit(1);
    }
    printf("Enter the record number to be read :");
    scanf("%d",&n);
    fseek(fp,(n-1)*sizeof(student),0);
    fread(&student,sizeof(student),1,fp);
    printf("%s\t",student.name);
    printf("%d\t",student.roll);
    printf("%f\n",student.marks);
    fclose(fp);
}