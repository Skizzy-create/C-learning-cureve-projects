#include <stdio.h>
#include <string.h>

struct student
{
    char Name[50];
    char Subject[50];
    int age;
    double CGPA;
};

struct Teacher
{
    char Name[50];
    char subject[50];
    int age;
    double score;
};

int main()
{
    struct student Std1;
    strcpy(Std1.Name, "Kartik Aslia");
    Std1.age = 20;
    Std1.CGPA = 9.5;
    strcpy(Std1.Subject, "CSE-BDA");
    printf("Name of the student is %s\nHis age is %d\nAnd is studying %s\nwith a CGPA of %lf",Std1.Name,Std1.age,Std1.Subject,Std1.CGPA);

    struct Teacher Teac1;
    strcpy(Teac1.Name, "Nirmana");
    strcpy(Teac1.subject,"C programing");
    Teac1.age = 35;
    Teac1.score = 97.8;
    printf("\n\nName of the Professor is %s.",Teac1.Name);
    printf("\nShe is %d years old and teaches %s",Teac1.age,Teac1.subject);
    printf("\nand she has a score of %lf/100 in teaching.",Teac1.score);

    return 0;


}