#include <stdio.h>

int main()
{

    int variable[11];
    int check;
    int  a,fin;

    printf("\nEnter Numbers :");
    for (int i = 0; i < 10 ;i++)
        scanf("%d", &variable[i]);

    for(int i = 0; i < 10; i++)
    {
        printf("%d",variable[i]);
        printf("\n");
    }

    for ( int k = 0; k < 10; k++)
    {
        for (int j = k+1; j<10; j++)
        {
            if (variable[k]> variable[j])
            {
                a = variable[k];
                variable[k] = variable[j];
                variable[j] = a;
            }
        }
    }

    printf("New order is\n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d",variable[i]);
        printf("\n");
    }
}
