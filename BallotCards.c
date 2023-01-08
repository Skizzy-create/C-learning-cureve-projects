//
// Created by vpkar on 9/20/2022.
//
#include <stdio.h>
int main() {
    int vote, votes[7] = {0, 0, 0, 0, 0, 0, 0};
    char choice;
    do {
        printf("This Year's Candidates:\n1. Vinay\n2. Kartik\n3. Max Taylor\n4. Yamaha\n5. Omnipotent God\n\nWhich one would you vote for?\n");
        printf("->");
        scanf("%d", &vote);
        if (vote > 5 || vote < 1) {
            printf("Submission Unsuccessful!\n");
            votes[5]++;
        } else {
            printf("Submission Successful!\n");
            votes[vote - 1]++;
        }
        votes[6]++;
        printf("Wish to continue?(y/n)");
        scanf(" %c", &choice);
    } while(choice == 'Y' || choice == 'y');

    int grt = votes[0];
    int maxIndex;
    for (int i = 0; i < 5; ++i) {
        if(grt<votes[i]){
            grt = votes[i];
            maxIndex = i;
        }
    }

     switch (maxIndex) {
        case 0:
            printf("The winner is Vinay!");
            break;
        case 1:
            printf("The winner is Kartik!");
            break;
        case 2:
            printf("The winner is Max Taylor!");
            break;
        case 3:
            printf("The winner is Yamaha!");
            break;
        case 4:
            printf("The winner is Omnipotent God!");
            break;
        default:
            printf("There is no winner...");
            break;
    }

    printf("\n\nTotal Votes: %d", votes[6]);
    printf("\nVotes for 1: %d", votes[0]);
    printf("\nVotes for 2: %d", votes[1]);
    printf("\nVotes for 3: %d", votes[2]);
    printf("\nVotes for 4: %d", votes[3]);
    printf("\nVotes for 5: %d", votes[4]);
    printf("\n\nSpoilt Ballots: %d", votes[5]);
    return 0;
}