//
// Created by Kartik Aslia on 12-10-2022.
//
#include <stdio.h>
#define N 5
struct student
{
    char name[20];
    int rollno;
    int marks;
};

void display(struct student);
void dec_marks(struct student stuarr[]);

int main()
{
    int i;
    struct student stuarr[3] = {
            {"Marry", 12, 98},
            {"John",  11, 97},
            {"Tom",   13, 89}
    };
    dec_marks(stuarr);
    for (i = 0; i < 3; ++i) {
        display(stuarr[i]);
    }
}
void dec_marks(struct student stuarr[])
{
    int i;
    for (i = 0; i < 3; i++)
        stuarr[i].marks = stuarr[i].marks-10;
}
void display(struct student stu)
{
    printf("Name - %s\t",stu.name);
    printf("Rollno - %d\t", stu.rollno);
    printf("Marks - %d\n", stu.marks);
}