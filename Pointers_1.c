//
// Created by Kartik Aslia on 03-10-2022.
//
/*#include <stdio.h>

int main () {

    int  var1 = 10;
    char var2[10] = {0,1,2,3,4,5,6,7,8,9};

    printf("Address of var1 variable: %d\n", var1  );
    printf("Address of var2 variable: %d\n", var2[5]  );

    return 0;
}
 */

#include <stdio.h>

int main () {

    int var = 20;   /* actual variable declaration */
    int *ip;        /* pointer variable declaration */

    ip = &var;  /* store address of var in pointer variable*/

    printf("Address of var variable: %x\n", &var);

    // address stored in pointer variable */
    printf("Address stored in ip variable: %x\n", ip);

    /* access the value using the pointer */
    printf("Value of *ip variable: %d\n", *ip);

    int *ptr;
    printf("The value of ptr is : %x\n", ptr);
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

const int MAX = 3;

int main () {

    int  var[] = {10, 100, 200};
    int  i, *ptr;

    /* let us have array address in pointer
    ptr = var;

    for ( i = 0; i < MAX; i++) {

        printf("Address of var[%d] = %x\n", i, ptr );
        printf("Value of var[%d] = %d\n", i, *  );

        /* move to the next location
        ptr++;
    }

    return 0;
}*/
/*
#include <stdio.h>

const int MAX = 3;

int main () {

    int  var[] = {10, 100, 200};
    int  i, *ptr;

    /* let us have array address in pointer
    ptr = &var[MAX-1];

    for ( i = MAX; i > 0; i--) {

        printf("Address of var[%d] = %x\n", i-1, ptr );
        printf("Value of var[%d] = %d\n", i-1, *ptr );

        /* move to the previous location *
        ptr--;
    }

    return 0;
}*/

#include <stdio.h>

const int MAX = 3;

int main () {

    int  var[] = {10, 100, 200};
    int  i, *ptr;

    /* let us have address of the first element in pointer */
    ptr = var;
    i = 0;

    while ( ptr <= &var[MAX - 1] ) {

        printf("Address of var[%d] = %x\n", i, ptr );
        printf("Value of var[%d] = %d\n", i, *ptr );

        /* point to the next location */
        ptr++;
        i++;
    }

    return 0;
}