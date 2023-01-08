#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20] ;
    printf("Please enter your name:");
    scanf("%s", name); // use & in front of the variable'
   // printf("Hi %s%s, nice to met you"); // scanf gets the variable just before the first space
    fgets(name, 20, stdin); //This is used to get inputs even after spaces
    
    
    int age;
    printf("Please enter your age:");
    scanf("%d",&age);
    printf("Your age is %d",age);
    
    int Marks;
    printf("\nPlease enter your marks:");
    scanf("%d",&Marks);// use & in front of the variable that to only numbers
    printf("Your marks are %d", Marks);

    return 0;
}