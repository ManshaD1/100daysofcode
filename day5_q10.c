// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
int main(){
    int time, hours, mins, secs;
    printf("enter time in seconds");
    scanf("%d", &time);
    hours= time/3600;
    mins= (time%3600)/60;
    secs= time%60;
    printf("Time is %02d:%02d:%02d\n", hours, mins, secs);
    return 0;
    
}