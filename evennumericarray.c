#include <stdio.h>

int main()
{

    int variable[11];
    int check;
    int num = 0,fin;

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

        if (variable[k]%2 == 0)
        {
            num = num + variable[k];
        }
    }
   printf("%d is the sum of all even numbers in the array",num);
    return 0;
}