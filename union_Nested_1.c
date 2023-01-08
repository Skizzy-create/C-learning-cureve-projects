//
// Created by Kartik Aslia on 17-10-2022.
//
#include<stdio.h>
struct Student {
    int roll_no;
    char  name[40];
};
union Student1 {
    int roll_no;
    char  name[40];
};

int main( ) {
    struct Student s;
    union Student1 s1;

    printf("SIZE OF STRUCTURE : %d",sizeof(s));
    printf("\nSIZE OF UNION : %d",sizeof(s1));
    return 0;
}