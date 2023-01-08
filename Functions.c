//
// Created by Kartik Aslia on 28-08-2022.
//
#include <stdio.h>

void sayhi(char fname[],char sname[],int age) // This is a function created, always keep the function at the top.
// also use void if the funcction doesn't return's anything
{
    printf("\nHi %s %s.\nYour age is %d \nthis message is printed from a function",fname,sname,age);
}

int main()
{
    char fname[20];
    char sname[20];
    int age;
    printf("Please enter your name:");
    //fgets(name,20,stdin);
    scanf("%s%s",fname,sname);
    printf("Enter your age:");
    scanf("%d",&age); // Add & infront of int while using scanf() , &is a pointer
    printf("\nBottom");
    sayhi(fname,sname,age);

    return 0;
}


