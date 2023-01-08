#include <stdio.h>
#include <string.h>

int main()
{

    int variable[11];
    int check[10];
    int num,fin;

    printf("\nEnter Numbers :");
    for (int i = 0; i < 10 ;i++)
        scanf("%d", &variable[i]);


    printf("\nEnter the numbers :");
    for(int i = 0; i < 10; i++)
    {
        printf("%d",variable[i]);
        printf("\n");
    }
    printf("\nEnter the string you want to check :");
    scanf(" %d", &check);

    for ( int k = 0; k < 10; k++)
    {
        if (variable[k] ==  *check)
        {
            num ++;
            break;
        }
    }
    if (num == 1)
    {
        printf("The number exists");
    }
    else
    {
        printf("The number doesnt exists");
    }
    //strcmp
    return 0;
}