//
// Created by Kartik Aslia on 26-09-2022.
//
#include <stdio.h>

int main()
{
    int units, bill,buff1,buff2,buff3,buff4;
    char  name1[200];
    char  name2[200];
    char ans = 'y';
    while (ans == 'y' || ans == 'Y') {
        printf("Welcome to Electricity Bill App\n");
        printf("=================================================================\n");
        printf("Enter your name :");
        scanf("%s %s", name1, name2);
        printf("Enter the bill units :");
        scanf("%d", &units);

        if (units <= 100) {
            bill = (units * 5) + 50;
            printf("\nName = %s %s ", name1, name2);
            printf("\n%s %s here is the breakdown of your bill",name1,name2);
            printf("\n=================================================================");
            printf("\n        Units    Rate/unit   charge  SurCharge   Total Payable");
            printf("\n         %d       5/unit       %d          50            %d", units,units*5,bill-50);
            printf("\n=================================================================\n");
            printf("Total    %d                    %d          50            %d",units,units*5, bill); //Add space for 100
            printf("\n=================================================================\n");
            printf("%s %s your total payable is Rs%d", name1, name2, bill);
            printf("\n*****************************************************************\n");
        }
        else if (units > 100 && units <= 300) {
            buff3 = units;
            bill = 100 * 5;
            buff2 = (100*5) + 50;
            buff1 = units - 100;
            bill += buff1 * 6;
            bill += 50;
            printf("\nName = %s %s ", name1, name2);
            printf("\n%s %s here is the breakdown of your bill",name1,name2);
            printf("\n=================================================================");
            printf("\n         Units   rate/unit    Charge    SurCharge   Total Payable");
            printf("\n         100      5/unit       500         50           %d", buff2);
            printf("\n         %d      6/unit      %d          0          %d", buff1,buff1 *6,buff1 *6);
            printf("\n=================================================================\n");
            printf("Total    %d                  %d         50          %d", buff3,buff2-50 + (buff1*6), bill);
            printf("\n=================================================================\n");
            printf("%s %s your total payable is Rs%d", name1, name2, bill);
            printf("\n*****************************************************************\n");
        }
        else {
            buff4 = units;
            buff1 = 100 * 5;
            buff2 = 200 * 6;
            buff3 = (units - 300) * 7;
            bill = buff1 + buff2 + buff3;
            double sur = (bill * 0.15)+50;
            double taxBill = bill + sur;
            printf("\nName = %s %s ", name1, name2);
            printf("\n%s %s here is the breakdown of your bill",name1,name2);
            printf("\n=================================================================");
            printf("\n        Units    rate/unit  Charge  SurCharge   Total Payable");
            printf("\n        100      5/unit      500       50        %d", buff1+50);
            printf("\n        200      6/unit     1200        0        %d",buff2);
            printf("\n        %d      7/unit     %d     %0.2lf      %0.2lf",units - 300,buff3,sur,buff3+sur);
            printf("\n=================================================================\n");
            printf("Total   %d                 %d     %0.2lf      %0.2lf",buff4,bill,sur+50,taxBill);
            printf("\n=================================================================\n");
            printf("%s %s your total payable is Rs %0.2lf", name1, name2, taxBill);
            printf("\n*****************************************************************\n");

        }
        printf("\nDo you want to enter another bill (y/n):");
        scanf(" %c", &ans);
    }
    printf("\n=================================================");
    printf("\nThank you for visiting the Electricity Bill App");
    printf("\n=================================================");
    return 0;
}
