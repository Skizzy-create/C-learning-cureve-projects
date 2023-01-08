//
// Created by Kartik Aslia on 27-10-2022.
//
#include <stdio.h>
int main()
{
    FILE *fptr;
    char name[15];
    printf("Enter the file to be deleted :");
    scanf("%s",name);
    fptr = fopen(name,"r");
    fclose(fptr);

    if(unlink(name) == 0)
        printf("File %s is deleted\n",name);
    else
        perror("File is not deleted :");
    return 0;
}