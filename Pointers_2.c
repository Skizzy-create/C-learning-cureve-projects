//
// Created by Kartik Aslia on 05-10-2022.
//
#include <stdio.h>

int main () {

    int  var;
    int  *ptr;
    int  **pptr;

    var = 3000;

    /* take the address of var */
    ptr = &var;

    /* take the address of ptr using address of operator & */
    pptr = &ptr;

    /* take the value using pptr */
    printf("Value of var = %x\n", &var );
    printf("Value available at *ptr = %x\n", ptr );
    printf("Value available at **pptr = %x\n", pptr);

    return 0;
}