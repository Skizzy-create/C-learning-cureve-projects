//
// Created by Kartik Aslia on 27-09-2022.
//
#include <stdio.h>

int main()
{
    char name[10][300];
    double runs[1][3];
    int innings[1][3];
    int notout[1][3];
    double avg[1][3];


    for (int j = 1; j <= 3; j++) {
        printf("Enter the name of the %d player :", j);
        scanf("%s", name[j - 1]);
    }

    printf("\n");

    for (int j = 0; j < 1; j++) {
        for (int i = 1; i <= 3; i++) {
            printf("Enter the runs for the %d player :", i);
            scanf("%lf", &runs[j][i - 1]);
        }
    }

    printf("\n");

    for (int j = 0; j < 1; j++) {
        for(int i =1; i <= 3; i++ ) {
            printf("Enter the number of innings %d player :", i);
            scanf("%d", &innings[j][i - 1]);
        }
    }

    printf("\n");

    for (int j = 0; j < 1; j++) {
        for(int i =1; i <= 3; i++ ) {
            printf("Enter the number of times %d player is not out :", i);
            scanf("%d", &notout[j][i - 1]);
        }
    }

    printf("\n");

    for (int j = 0; j < 1; j++) {
        for(int i =1; i <= 3; i++ ) {
            avg[j][i-1] = runs[j][i-1]/innings[j][i-1];
        }
    }

    for (int j = 0; j < 1; j++) {
        printf("===============================================================================================\n");
        printf("                                      PERFORMANCE BOARD                                        \n");
        printf("===============================================================================================\n");
        printf(" Player_Name                   Runs          Innings        Times not out        Average\n");
        for(int i =1; i <= 3; i++ ) {
            printf("    %s                    %0.2lf            %d                 %d               %0.2lf\n",name[i-1],runs[j][i-1],innings[j][i-1],notout[j][i-1],avg[j][i-1]);
        }
    }
    return 0;
}
