//
// Created by Kartik Aslia on 17-10-2022.
//
#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[60];
};

int main( ) {

    union Data data;

    printf( "Memory size occupied by data : %d\n", sizeof(data));

    return 0;
}