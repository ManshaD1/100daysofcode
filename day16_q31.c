//Write a program to take a number as input and print its equivalent binary representation.
#include<stdio.h>
int main(){
    int n, rem, digit=0, remainder, binary=0;
    printf("enter number");
    scanf("%d", &n);
    if (n==0){
        printf("%d", n);
    
    }
    while (n>0){
        rem=n%2;
        digit=digit*10+rem;
        n=n/2;

    }
    while (digit!=0){
        remainder=digit%10;
        binary=binary*10+remainder;
        digit=digit/10;
    }
    printf("%d", binary);
    return 0;
}