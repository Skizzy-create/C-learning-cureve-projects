#include <stdio.h>

int main()
{
    int num;
    int x;
    int res;
    x=1;
    res=1;
    printf("Factorial number:");
    scanf("%d",&num);
    while(num>=x)
    {
        res = res * x;
        x++;
        printf("%d ",x);
        if (res < 0) //  The output of some numbers is -ve, so a solution for it is this, eg 20 fact gives -ve output
            
        {
            res = res * -1;
        }

    }
    printf("%d ",res);
    return 0;
}
