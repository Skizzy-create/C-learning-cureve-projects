//
// Created by Kartik Aslia on 06-10-2022.
//
#include <stdio.h>

char *concat(char *fn,char *ln);

int main()
{

    char str1[25],str2[25];
    int i=0,j=0;
    printf("\nEnter First String:");
    gets(str1);
    printf("\nEnter Second String:");
    gets(str2);
    concat(str1,str2);
}

char *concat(char *fn,char *ln)
{
    int i=0,j=0;

    while(fn[i]!='\0')
        i++;
    while(ln[j]!='\0')
    {
        fn[i]=ln[j];
        j++;
        i++;
    }
    fn[i]='\0';
    printf("\nConcatenated String is %s",fn);
}