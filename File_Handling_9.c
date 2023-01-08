//
// Created by Kartik Aslia on 21-10-2022.
//
#include <stdio.h>
struct student{
    char name[20];
    float marks;
}stu;

int main()
{
    FILE *fp;
    fp = fopen("students.dat","r");
    printf("NAME\tMarks\n");

    while(fscanf(fp,"%s%f",stu.name,&stu.marks)!= EOF)
        printf("%s\t%0.2f\n",stu.name,stu.marks);
    fclose(fp);
    return 0;
}