//
// Created by Kartik Aslia on 21-10-2022.
//

#include <stdio.h>

struct{
    char name[20];
    float marks;
}stu;

int main()
{
    FILE *fp;
    int i,n;
    fp = fopen("students.dat","w");
    printf("Enter number of the records :");
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        printf("Enter the name and the marks of the students :");
        scanf("%s %f",stu.name,stu.marks);
        fprintf(fp,"%s %f",stu.name,stu.marks);
    }
    fclose(fp);
}