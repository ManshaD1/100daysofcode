// Q36: Write a program to find the HCF (GCD) of two numbers.

#include<stdio.h>
int main(){
    int a,b,remainder,hcf;
    printf("enter first number");
    scanf("%d", &a);
    printf("enter second number");
    scanf("%d", &b);
    while (a!=0){
        remainder=a%b;
        a=b;
        b=remainder;
    }
    hcf=b;
    printf("hcf is %d\n", hcf);
    return 0;
}