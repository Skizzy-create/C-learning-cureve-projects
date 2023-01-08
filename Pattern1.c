//
// Created by Kartik Aslia on 10-09-2022.
//
#include <stdio.h>
int main()
{
    int b = 0, ev = 0, od = 0, sev = 0, sod = 0, tsum = 0;
    for (int j = 0; j<=4; j++){
        for (int z = 0; z<j; z++){
            tsum= b+ tsum;
            if (b%2 == 0){
                ev++;
                sev = sev+b  ;
            }
            else{
                od++;
                sod = sod +b;
            }
            printf("%d",b);
            b = b+1;
        }
    printf("\n");
    }
printf("\nToatal sum = %d",tsum);
printf("\nNo of even elements are sum is : %d",ev);
printf("\nSum of even elements are sum is : %d",sev);
printf("\nNo of odd elements are sum is : %d",od);
printf("\nSum of odd elements are sum is : %d",sod);
}