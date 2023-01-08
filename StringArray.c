#include <stdio.h>
#include <string.h>

int main()
{

    char variable[10][100];
    char check[10];
    int num,fin;

    printf("\nEnter Strings :");
    for (int i = 0; i < 5 ;i++)
        scanf("%100s", variable[i]);


    printf("\nEnter name :");
    for(int i = 0; i < 5; i++)
    {
        printf("%s",variable[i]);
        printf("\n");
    }
    printf("\nEnter the string you want to check :");
    scanf(" %s", check);

        for ( int k = 0; k < 5; k++)
        {
            num = strcmp(check,variable[k]);
            if (num == 0)
            {
                break;
            }
        }
    if (num == 0)
    {
        printf("\nThe name exists");
    }
    else
    {
        printf("The name doesnt exists");
    }
        //strcmp
    return 0;
}