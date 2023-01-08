#include <stdio.h>

int main() {
    int secret = 69420;
    int guess;
    int guesscount = 3;

    printf("You have 3 chances, choose carefully\n(Hint: The answer is Mr.Beast's favorite number;) ) ");
    while (guess != secret)
    {
        if (guesscount > 0)
        {
            printf("\nYou hsve %d chances left", guesscount);
            printf("\nEnter the number:");
            scanf("%d", &guess);
            guesscount--;
        } else
        {
            printf("You lost!\nNo more chances left");
            break;
        }
    }
    while (guess == secret)
    {
        printf("\nCongratulations you have won!!");
        break;
    }
    return 0;
}
