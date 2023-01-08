//
// Created by Kartik Aslia on 04-09-2022.
//
#include <stdio.h>

int main() {
    char category; //Category of conversion
    int tempchoics; // user inputs the temp in Choice
    int massc; // user gives mass choice
    int currencychoice; // user tells which currency to convert
    double finput; // input for Fahrenheit
    double cinput; // input for  celsius
    double inINR; // input for rupees
    double inUSD; // input for USD
    double inEURO; // input for euros
    double inJPY; // input for jap yen
    double inRUB; // input for Ruble
    double inounce; // input for ounce
    double ingram; // input for gram
    double inpounds; // input for pounds
    double conversionCtoF; // variable to store converted
    double conversionFtoC; // variable to store converted Celsius
    double INRtoUSD; // variable that stores converted into usd
    double USDtoINR; // variable that stores USD to INR
    double INRtoEURO; // variable that stores converted into Euro
    double EUROtoINR; // variable that stores EURO to INR
    double INRtoJPY; // variable that stores converted inr to Japanese Yen
    double JPYtoINR; // variable that stores Japanese Yen converted to inr
    double INRtoRUB; // variable that stores Ruble
    double RUBtoINR; // variable that stores Ruble
    double ouncetograms; // Stores the converted Ounce to grams
    double gramstounce; // Stores the converted Grams to Ounce
    double poundstograms; // Stores the converted Pounds to grams
    double gramstopounds; // Stores the converted Pounds to grams
    double inkm; // input for Kilometer
    double kmtom,kmtofeet,inches,centimeter; // Used to store the value of converted.


    printf("Welcome to Unit Converter:\n");
    printf("Here's a list of conversion\n");
    printf("Temperature(T), Currency(C), Mass(M), Distance(D)\n");
    printf("Please enter the letter you want to convert:");
    scanf(" %c", &category);   // Use pointers in front of char and integers

    if (category == 'T' || category == 't') //use '' for character
    {
        printf("\nHere is the list of conversions for temperature.\n");
        printf("Enter 1 for Celsius to Fahrenheit.\n");
        printf("Enter 2 for Fahrenheit to Celsius.\n");
        printf("Please choose one:");
        scanf("%d", &tempchoics);

        if (tempchoics == 1) {
            printf("\nWelcome to the Celsius to Fahrenheit converter.\n");
            printf("Please enter the Temperature in 'Celsius' for conversion:");
            scanf(" %lf", &cinput);
            conversionCtoF = (cinput * 9 / 5) + 32;
            printf("\n%lf degree Celsius is %0.2lf degree Fahrenheit.", cinput, conversionCtoF);

        } else if (tempchoics == 2) {
            printf("\nWelcome to the Fahrenheit to Celsius converter.");
            printf("\nPlease enter the Temperature in 'Fahrenheit' for conversion:");
            scanf(" %lf", &finput);
            conversionFtoC = (finput - 32) * 5 / 9;
            printf("%lf degree Fahrenheit is %0.2lf degree Celsius.", finput, conversionFtoC);
        } else {
            printf("Invalid Input!!!");
        }
    }
    else if (category == 'C' || category == 'c')
    {
        printf("\nWelcome to the Currency converter");
        printf("Here is a list of conversations to chhose from:\n");
        printf("Enter 1 for INR to USD\n");
        printf("Enter 2 for USD to INR\n");
        printf("Enter 3 for INR to EURO\n");
        printf("Enter 4 for EURO to INR\n");
        printf("Enter 5 for INR to JPY\n");
        printf("Enter 6 for JPY to INR\n");
        printf("Enter 7 for INR to RUB\n");
        printf("Enter 8 for RUB to INR\n");
        printf("Enter the conversion you want:");
        scanf("%d", &currencychoice);

        if (currencychoice == 1)
        {
            printf("\nYou have selected the INR to USD converter.\n");
            printf("Enter the amount in INR:");
            scanf("%lf", &inINR);
            INRtoUSD = inINR * 0.0126;
            printf("%0.2lf INR in USD is $%0.2lf.", inINR, INRtoUSD);
        }
        else if (currencychoice == 2)
        {
            printf("\nYour have selected the USD to INR");
            printf("\nEnter the amount in USD:");
            scanf("%lf", &inUSD);
            USDtoINR = inUSD * 79.6813;
            printf("%0.lf USD in INR is %0.2lf rupees", inUSD, USDtoINR);
        }
        else if (currencychoice == 3)
        {
            printf("\nYou have selected the INR to Euro converter.\n");
            printf("Enter the amount in INR:");
            scanf("%lf", &inINR);
            INRtoEURO = inINR * 0.0125;
            printf("%0.2lf INR in EURO is $%0.2lf.", inINR, INRtoEURO);
        }
        else if (currencychoice == 4)
        {
            printf("\nYou have selected the Euro to INR converter.");
            printf("\nEnter the amount in Euro:");
            scanf("%lf", &inEURO);
            EUROtoINR = inEURO * 80;
            printf("%0.2 EURO's in INR is %0.2lf", inEURO, EUROtoINR);
        }
        else if (currencychoice == 5)
        {
            printf("\nYou have selected the INR to JPY converter.\n");
            printf("Enter the amount in INR:");
            scanf("%lf", &inINR);
            INRtoJPY = inINR * 1.788;
            printf("%0.2lf INR in Japanese YEN is $%0.2lf.\n", inINR, INRtoJPY);

        }
        else if (currencychoice == 6)
        {
            printf("\nYou have selected the JPY to INR converter.\n");
            printf("\nEnter the amount in JPY:");
            scanf("%lf", inJPY);
            JPYtoINR = inJPY * 0.5590339892665;
            printf("%0.2lf Japanese YEN in INR is %0.2lf", inJPY, JPYtoINR);
        }
        else if (currencychoice == 7)
        {
            printf("\nYou have selected the INR to RUB converter.\n");
            printf("Enter the amount in INR:");
            scanf("%lf", &inINR);
            INRtoRUB = inINR * 0.7593;
            printf("%0.2lf INR in EURO is $%0.2lf.\n", inINR, INRtoRUB);

        }
        else if (currencychoice == 8)
        {
            printf("\nYou have Selected the RUB to INR converter.\n");
            printf("Enter the amount in RUB:");
            scanf("%lf", &inRUB);
            RUBtoINR = inRUB * 1.27;
            printf("%0.2lf RUB in INR is %0.2lf", inRUB, RUBtoINR);
        }
        else
        {
            printf("Invalid Choice!!");
        }
    }
    else if (category == 'M' || category == 'm') {
        printf("Here's the list of conversions for Mass\n");
        printf("1. Ounce to Grams");
        printf("\n2. Grams to Ounce");
        printf("\n3. Pounds to Grams");
        printf("\n4. Grams to Pounds");
        printf("\nEnter the conversion you want :");
        scanf("%d", &massc);

        if (massc == 1) {
            printf("\n");
            printf("You have selected the Ounce to Grams");
            printf("\nEnter the weight in Ounce :");
            scanf("%lf", &inounce);
            ouncetograms = inounce * 28.3495231;
            printf("%0.2lf ounce in grams is %0.2lf", inounce, ouncetograms);
        } else if (massc == 2) {
            printf("\n");
            printf("You have selected the Grams to Ounce converter");
            printf("\nEnter the weight in Grams :");
            scanf("%lf", &ingram);
            gramstounce = ingram * 0.03527396;
            printf("%0.2lf grams in ounce is %0.2lf", ingram, gramstounce);

        } else if (massc == 3) {
            printf("\n");
            printf("You have selected the pounds to Grams converter");
            printf("\nEnter the weight in Pounds :");
            scanf("%lf", &inpounds);
            poundstograms = inpounds * 453.59237;
            printf("%0.2lf grams in ounce is %0.2lf", ingram, poundstograms);
        } else if (massc == 4) {
            printf("\n");
            printf("You have selected the Grams to Pounds converter");
            printf("\nEnter the weight in Grams :");
            scanf("%lf", &ingram);
            gramstopounds = ingram * 0.00220462;
            printf("%0.2lf grams in pounds is %0.2lf", ingram, gramstopounds);

        } else {
            printf("Invalid Input !!");
        }
    }
        else
        {
            printf("Invalid Input !!");
        }

}
