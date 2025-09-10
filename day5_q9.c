//Write a program to calculate simple and compound interest for given principal, rate and time
#include<stdio.h>
int main(){
    int principal,rate,time,SI,CI;
    printf("enter principal");
    scanf("%d",&principal);
    printf("enter rate");
    scanf("%d",&rate);
    printf("enter time");
    scanf("%d",&time);
    SI=(principal*rate*time)/100;
    CI=
    printf("simple interest is",SI);
    printf("compound interest is",CI);
    return 0;
}