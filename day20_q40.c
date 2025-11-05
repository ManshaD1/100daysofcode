//Q40: Write a program to find the 1’s complement of a binary number and print it.

#include<stdio.h>
int main(){
    int n,rem;
    printf("enter number");
    scanf("%d", &n);
    while (n>0){
        rem=n%10;
        if (rem==1){
            printf("0");
        }
        else{
            printf("1");
        }
        n/=10;
    }
    return 0;
}