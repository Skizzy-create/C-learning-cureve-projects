//
// Created by Kartik Aslia on 17-10-2022.
//
#include <stdio.h>
struct TIME{
    int seconds;
    int minutes;
    int hours;
};
void diffrenceBetweenTimePeriod(
        struct TIME t1,
        struct TIME t2,
        struct TIME *diff);

int main()
{
    // Talking input for
    struct TIME startTime, stopTime, diff;

    printf("Enter the start time \n");
    printf("Enter hours, minutes and seconds:");
    scanf("%d %d %d",&startTime.hours,&startTime.minutes,&startTime.seconds);

    printf("Enter the stop time. \n");
    printf("Enter the hours, minutes and seconds:");
    scanf("%d %d %d", &stopTime.hours,&stopTime.minutes,&stopTime.seconds);

    //Difference between start and stop time
    diffrenceBetweenTimePeriod(startTime,stopTime,&diff);
    printf("\n Time Difference: %d:%d:%d -",startTime.hours,startTime.minutes,startTime.seconds);
    printf("%d:%d:%d",stopTime.hours,stopTime.minutes,stopTime.seconds);
    printf("== %d:%d:%d",diff.hours,diff.seconds,diff.seconds);
    return 0;
}
// Computing the diffrence
void diffrenceBetweenTimePeriod(
        struct TIME t1,
        struct TIME t2,
        struct TIME *diff){
    while(t1.seconds>t2.seconds){
        --t1.minutes;
        t1.seconds += 60;
    }

}