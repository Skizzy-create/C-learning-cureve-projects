/*
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

    int PattyShirts, TommyShirts, SallyShirt, TotalShirts;
    double sub, tax, total;
    double PattyPrice, TommyPrice, SallyPrice;
    double PattyTax, TommyTax, SallyTax;
    double SubTotal;
    printf("\n");

    //Patty's Calculation
    printf("Patty's shirt size is 'S'.\n");
    printf("Number of shirts Patty is buying:");
    scanf("%d", &PattyShirts);
    printf("\n");
    PattyPrice = PattyShirts*smallT;
    PattyTax = (PattyPrice*0.13) + 0.0012;

    //Tommy's Calculation
    printf("Tommy's shirt size is 'L'\n");
    printf("Number of shirts Tommy is buying:");
    scanf("%d",&TommyShirts);
    printf("\n");
    TommyPrice = TommyShirts * largeT;
    TommyTax = (TommyPrice * 0.13) + 0.0017;

    //Sally's Calculations
    printf("Sally's shirt size is 'M'\n");
    printf("Number of shirts Sally is buying:");
    scanf("%d",&SallyShirt);
    printf("\n");
    SallyPrice = SallyShirt * mediumT;
    SallyTax = (SallyPrice * 0.13) + 0.0008;

    sub = (smallT*PattyShirts)+(mediumT*SallyShirt)+(largeT*TommyShirts);
    tax = ((smallT*PattyShirts)+(mediumT*SallyShirt)+(largeT*TommyShirts))* 0.13;
    total = sub + tax;
    TotalShirts = PattyShirts+SallyShirt+TommyShirts;
    SubTotal = PattyPrice + SallyPrice + TommyPrice;

    printf("\nCustomer  Size  Price  Oty  Sub-Total       Tax      Total");
    printf("\n--------  ----  -----  ---  ---------  ---------  ---------");
    printf("\nPatty      S    %0.2lf   %d    %0.4lf    %0.4lf   %0.4lf",smallT, PattyShirts, PattyPrice, PattyTax, PattyPrice + PattyTax );
    printf("\nSally      M    %0.2lf   %d    %0.4lf    %0.4lf   %0.4lf",mediumT, SallyShirt, SallyPrice, SallyTax , SallyPrice + SallyTax );
    printf("\nTommy      L    %0.2lf   %d    %0.4lf    %0.4lf   %0.4lf",largeT, TommyShirts, TommyPrice, TommyTax ,TommyPrice + TommyTax);
    printf("\n--------  ----  -----  ---  ---------  ---------  ---------");
    printf("\n                             %0.4lf   %0.4lf    %0.4lf", SubTotal, tax, total);


    return 0;
}