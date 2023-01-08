#include <stdio.h>

//Diffrent types of data types

int main()
{
    int pos = 69;
    float age = 20.0;
    char pas = 's' ; // use single quotes '', else {initialization makes integer from pointer without a cast} 
    char part[] = "Unkonwn"; // use ** [] for multiple words
    printf("%d",pos); // use %d for printing integers
    printf("\n%lf",age); // use %lf for printing float/double
    printf("\n%c",pas ); // use %c for printing character
    printf("\n%s",part); // use %s for printing string
    return 0;
}