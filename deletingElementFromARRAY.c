#include <stdio.h>

int main()
{

    int variable[11];
    int check;

    printf("\nEnter Numbers :");
    for (int i = 0; i < 10 ;i++)
        scanf("%d", &variable[i]);

    for(int i = 0; i < 10; i++)
    {
        printf("%d",variable[i]);
        printf("\n");
    }

    printf("Enter the element you want to delete :");
    scanf("%d",&check);

    for ( int k = 0; k < 10; k++)
    {
        if (variable[k] == check)
        {
            variable[k] = 0;
            break;
        }
    }
    printf("New Array");
    for(int i = 0; i < 10; i++)
    {
        printf("%d",variable[i]);
        printf("\n");
    }
    return 0;
}