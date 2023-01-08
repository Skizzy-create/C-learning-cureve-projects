/**********************************************************************************************************************************************************************
                                    Workshop - 3 (Part - 1)
Full Name : Kartik Aslia
Email : asliakartik@gmail.com
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.

 */

#include <stdio.h>
#include <math.h>

int main()
{
    double smallT, mediumT, largeT;


    // Printing the output
    printf("Set Shirt Prices\n");
    printf("================\n");

    printf("Enter the price for a SMALL shirt: $");
    scanf("%lf",&smallT);

    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf",&mediumT);

    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf",&largeT);

    printf("Shirt Store Price List\n");
    printf("======================\n");

    printf("SMALL  :   $%0.2lf\n", smallT);
    printf("MEDIUM :   $%0.2lf\n", mediumT);
    printf("LARGE  :   $%0.2lf\n",largeT);

    int noOfShirts;
    double sub, tax, total;
    sub = smallT*noOfShirts;
    printf("Patty's shirt size is 'S'.\n");
    printf("Number of shirts Patty is buying:");
    scanf("%d", &noOfShirts);

    tax = smallT*noOfShirts * 0.13;

    printf("Patty's shopping cart...\n");
    printf("Contains : %d shirts \n", noOfShirts);
    printf("Sub Total: $%.4f\n",sub*noOfShirts);
    total = (sub*noOfShirts) + tax;
    printf("Taxes    : $ %.2f00\n", tax);
    printf("Total    : $%.2f00\n", total);


    return 0;
}