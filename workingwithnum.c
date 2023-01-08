#include <stdio.h>
#include <math.h>

int main()
{
    printf("%f",7890.6969); //%f for float use //
    printf("\n%f", 5.6 * 9);//*** we can do operation's on numbers ***//

    // answer gets converted into decimal when operation in between float and integer

    printf("\n%d", 5/4); // Here output is 0, as operations are performed on integers
    printf("\n%f", 5/4.0); // Here output is 1.25, as operations are performed on float/decimals

    int num1 = 69;
    double num2 = 420;
    printf("\n%f",num2/num1);
    return 0;

    printf("%lf",pow(2,3));
}   