//
// Created by Kartik Aslia on 27-08-2022.
//
#include <stdio.h>

int main()
{
    /* roses are red
     * violets are blue
     * and i have a thing for you */
    char colour[20];
    char pluralnoun[20];
    char celeb1[20];
    char celeb2[20];

    printf("Enter the colour(use red for rhyming) :");
    scanf("%s",colour);

    printf("Enter a pluralnoun (use dogs) :");
    scanf("%s",pluralnoun);

    printf("Enter the name of celebrity:");
    scanf("%s%s",celeb1,celeb2);

    /*fflush(stdin); // When ever we use fgets after scanf, we need to use fflush(stdin)
    fgets(celeb1,20,stdin); */

    printf("\nRoses are %s",colour);
    printf("\n%s are blue", pluralnoun);
    printf("\n%s %s i love you",celeb1,celeb2);

    //printf("\n%sI love you",celeb1);

}