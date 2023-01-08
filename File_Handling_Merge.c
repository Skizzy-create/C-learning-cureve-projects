//
// Created by Kartik Aslia on 28-10-2022.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *fs1, *fs2, *ft;

    char ch, file1[20],file2[20],file3[20];

    printf("Enter name of first file\n");
    gets(file1);

    printf("Enter name of the second file\n");
    gets(file2);

    printf("Enter name of the file which will store content");
    gets(file3);

    fs1 = fopen(file1,"r");
    fs2 = fopen(file2,"2");

    if(fs1 == NULL || fs2 == NULL)
    {
        perror("Error ");
        printf("Press any key to exit...\n");
        exit(EXIT_FAILURE);
    }
    ft =
}