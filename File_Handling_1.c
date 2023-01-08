//
// Created by Kartik Aslia on 21-10-2022.
//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    int ch;
    if((fptr = fopen("myfile.txt","w"))==NULL)
    {
        printf("File doesnot exist\n");
        exit(0);
    }
    else
    {
        printf("Enter the text :\n");
        /* use Ctrl + z to exit in DOS and Ctrl + d in Unix*/
        while((ch = getchar())!= EOF)
            fputc(ch,fptr);
    }
    fclose(fptr);
    return 0;
}