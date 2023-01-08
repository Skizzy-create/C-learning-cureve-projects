//
// Created by Kartik Aslia on 05-10-2022.
//
#include <stdio.h>
int main(){
    int *run,r = 5, sum = 0;
    run = &r;
    for (int i = 0; i < 10; ++i) {
        printf("--> %x\n", &i);
        r += 5;
    }
    printf("Sum = %d\n", r);
    printf("Address of Sum = %x", &r);

    return 0;
}