//
// Created by Kartik Aslia on 27-09-2022.
//
#include <stdio.h>
int main() {
    double pprice, svalue, depv;
    int yos;

    printf("Enter the purchase value :");
    scanf("%lf",&pprice);
    printf("Enter the salvage value :");
    scanf("%lf",&svalue);
    printf("Enter the years of service :");
    scanf("%d",&yos);
    depv = (pprice-svalue)/yos;
    printf("The value product after %d years of service is : %0.2lf",yos,pprice-depv);
    return 0;
}
