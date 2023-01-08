//
// Created by Kartik Aslia on 20-09-2022.
//
#include <stdio.h>
int main()
{
    int ballot[7] = {0,0,0,0,0,0,0}; // 0-4 are for voters, 5 is for spoilt, 6 is for total
    int vote;
    char ans = 'y';

    while (ans == 'y' || ans == 'Y') {
        printf("WELCOME TO THE 2022 PRIME MINSTER'S ELECTIONS\n");
        printf("THE CANDIDATES CONTESTING THIS YEAR AREELECTION ARE :");
        printf("\n 1. VINAY PRATAP KARWAL");
        printf("\n 2. KARTIK ASLIA");
        printf("\n 3. TARUN SIR");
        printf("\n 4. RAHUL GANDHI");
        printf("\n 5. NARENDRA DAMODARDAS MODI ");
        printf("\nEnter the number of candidate (1/2/3/4/5) :");
        scanf("%d", &vote);

        if (1 <= vote && vote <= 5) {
            ballot[vote - 1]++;
            printf("\n**********************************\n");
            printf("VOTE REGISTERED SUCCESSFULLY !!!!");
            printf("\n***********************************\n");
        } else {
            printf("\n**********************************\n");
            printf("OOPS VOTE NOT REGISTERED !!!");
            printf("\n(PLEASE ENTER THE CORRECT NUMBER FOR YOUR CANDIDATE)");
            printf("\n**********************************\n");
            ballot[5]++;
        }
        ballot[6]++;
        printf("\nDo you want to enter another vote (y/n) :");
        scanf(" %c", &ans);
    }

    int winner = ballot[0];
    int store;

    for (int i = 0; i < 5; i++) {
        if (winner < ballot[i]) {
            winner = ballot[i];
            store = i;
        }
    }

    /*switch (store){

        case 0:
            printf("THE WINNER OF THE ELECTIONS IS VINAY PRATAP KARWAL");
            break;
        case 1:
            printf("THE WINNER OF THE ELECTIONS IS KARTIK ASLIA");
            break;
        case 2:
            printf("THE WINNER OF THE ELECTIONS IS TARUN SIR");
            break;
        case 3:
            printf("THE WINNER OF THE ELECTIONS IS RAHUL GANDHI");
            break;
        case 4:
            printf("THE WINNER OF THE ELECTIONS IS NARENDRA DAMODARDAS MODI");
            break;
        default:
            printf("THERE IS A TIE !!!!!!!!");
            break;
    }*/
    if (ballot[0]>ballot[1] && ballot[0]>ballot[2] && ballot[0]>ballot[3] && ballot[0]>ballot[4])
    {
        printf("\n*************************************************\n");
        printf("THE WINNER OF THE ELECTION IS VINAY PRATAP KARWAL");
        printf("\n*************************************************\n");
    }
    else if (ballot[1]>ballot[0] && ballot[1]>ballot[2] && ballot[1]>ballot[3] && ballot[1]>ballot[4])
    {
        printf("\n*************************************************\n");
        printf("THE WINNER OF THE ELECTION IS KARTIK ASLIA");
        printf("\n*************************************************\n");
    }
    else if (ballot[2]>ballot[0] && ballot[2]>ballot[1] && ballot[2]>ballot[3] && ballot[2]>ballot[4])
    {
        printf("\n*************************************************\n");
        printf("THE WINNER OF THE ELECTION IS TARUN SIR");
        printf("\n*************************************************\n");
    }
    else if (ballot[3]>ballot[1] && ballot[3]>ballot[3] && ballot[3]>ballot[0] && ballot[3]>ballot[4])
    {
        printf("\n*************************************************\n");
        printf("THE WINNER OF THE ELECTION IS RAHUL GANDHI");
        printf("\n*************************************************\n");
    }
    else if (ballot[4]>ballot[1] && ballot[4]>ballot[2] && ballot[4]>ballot[3] && ballot[4]>ballot[0])
    {
        printf("\n******************************************************\n");
        printf("THE WINNER OF THE ELECTION IS NARENDRA DAMODARDAS MODI");
        printf("\n******************************************************\n");
    }
    else
    {
        printf("\n*************************************************\n");
        printf("NO WINNERS !!!!!!!!!!!!!!!!!");
        printf("\n*************************************************\n");
    }

    printf("\nThe total voltes are :%d",ballot[6]);
    printf("\nTHe number of votes for VINAY PRATAP KARWAL is = %d\n",ballot[0]);
    printf("THe number of votes for KARTIK ASLIA is = %d\n",ballot[1]);
    printf("THe number of votes for TARUN SIR is = %d\n",ballot[2]);
    printf("THe number of votes for RAHUL GANDHI is = %d\n",ballot[3]);
    printf("THe number of votes for NARENDRA DAMODARDAS MODI is = %d\n",ballot[4]);
    printf("The number of spoilt votes are = %d",ballot[5]);
    return 0;
}

