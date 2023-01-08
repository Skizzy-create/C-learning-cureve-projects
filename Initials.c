//
// Created by Kartik Aslia on 07-10-2022.
//
#include <stdio.h>
/*
int main()
{
    char a[100],s[100],i1,i2;
    printf("Enter your name :");
    scanf("%s %s",a,s);
    a[0] = a[0]-32;
    s[0] = s[0]-32;
    i1 = a[0];
    i2 = s[0];
    printf("The initials of your name is %c.%c",i1,i2);
    return 0;
}

#include <stdio.h>

void main()
{
    char str[20];
    int rows, a = 0;

    printf("Enter the string: ");
    scanf("%[^\n]", str);
    printf("Enter the no. of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i <= rows - 1; i++)
    {
        for (int j = 0; j <= rows - i; j++)
            printf(" ");

        for (int k = 0; k <= i; k++)
        {
            printf("%2c", str[a++]);

            if (str[a] == '\0')
                a = 0;
        }

        printf("\n"); // for new line
    }
}*/

void main()
{
    char str[20];
    int strLength;

    printf("Enter the string: ");
    scanf("%[^\n]", str);

    // count the no. of characters
    for (strLength = 0; str[strLength] != '\0'; strLength++);

    // for first half
    for (int i = 0; i < strLength; i++)
    {
        for (int j = 0; j < strLength - i - 1; j++)
            printf(" "); // space

        for (int j = 0; j <= i; j++)
            printf("%c", str[j]);

        printf("\n"); // for a new line
    }

    // for second half
    for (int i = 1; i < strLength; i++)
    {
        for (int j = 0; j < i; j++)
            printf(" "); // space

        for (int j = i; j < strLength; j++)
            printf("%c", str[j]);

        printf("\n"); // for a new line
    }
}