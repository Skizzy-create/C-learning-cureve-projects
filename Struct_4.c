//
// Created by Kartik Aslia on 17-10-2022.
//
#include <stdio.h>
#include<string.h>
// struct with typedef person
typedef struct person{
    char name[50];
    int citNo;
    float salary;
}person;
int main(){
    person p1;
    strcpy(p1.name,"George Orwell");

    p1.citNo = 1984;
    p1.salary = 2500;

    printf("Name: %s\n",p1.name);
    printf("Citizenship No.: %d\n",p1.citNo);
    printf("Salary: %0.2f",p1.salary);
    return 0;
}