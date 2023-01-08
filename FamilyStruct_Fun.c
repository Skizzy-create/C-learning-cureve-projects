//
// Created by Kartik Aslia on 11-10-2022.
//
#include <stdio.h>
#include <string.h>

struct Family{
    char name[100];
    int age;
    char relation[100];
};

void printfam(struct Family Fam);

int main()
{
    struct Family Father,Mother,Brother;

    strcpy( Father.name, "Vinod Kumar Aslia");
    strcpy( Father.relation, "Father");
    Father.age = 45;

    strcpy(Mother.name, "Sushma Sharma" );
    strcpy(Mother.relation, "Mother");
    Mother.age = 40;

    strcpy(Brother.name, "Kunal Aslia");
    strcpy(Brother.relation, "Brother");
    Brother.age = 20;

    printfam(Father);
    printfam(Mother);
    printfam(Brother);

    return 0;
}

void printfam(struct Family Fam)
{
    printf("My  %s's name is  %s and is %d years old\n", Fam.relation,Fam.name,Fam.age);

}
