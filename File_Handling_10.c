//
// Created by Kartik Aslia on 21-10-2022.
//
#include <stdio.h>
#include <stdlib.h>

struct record{
    char name[20];
    int roll;
    float marks;
}students;
int main()
{
    int i,n;
    FILE *fp;
    fp = fopen("stu.dat","wb");
    if(fp==NULL)
    {
        printf("Error in opening the file \n");
        exit(1);
    }
    printf("Enter the number of records  :");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the name :");
        scanf("%s",students.name);
        printf("Enter the roll no :");
        scanf("%d",&students.roll);
        printf("Enter the marks :");
        scanf("%f",&students.marks);
        fwrite(&students,sizeof(students),1,fp);
        //fwrite("\n",1,2,fp);
    }
    fclose(fp);
    return 0;
}