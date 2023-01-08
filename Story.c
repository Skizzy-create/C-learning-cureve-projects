#include <stdio.h>

int main()
{
    char* cat = "dog"; // use * in after of char case you want to modify the character in future(very important)
    char mat[] = "airplane"; 
    char item[] = "bag";
    char kite[] = "kite";
    int number = 69;
// Printing the story 
    printf("A %s in a %s\n", cat, mat);
    printf("I can see the %s\n", cat);
    printf("The %s is on %s\n", cat, mat);
    printf("The %s has a %s\n",cat, item);
    printf("The %s had %d\n", cat, number);
    cat = "kartik";
    //strcpy(cat,"kartik"); this is to modify char, but will ruin your numbers, so refer the above comment
    number = 420;
    printf("The %s loves %d\n", cat, number);
    return 0;
}