//Q43: Write a program to check if a number is a strong number.

#include<stdio.h>
int main(){
    int n,fact=1,sum=0,num,rem;
    printf("enter number");
    scanf("%d", &n);
    num=n;
    while (n>0){
        rem=n%10;
        fact=1;
        for (int i=1; i<=rem; i++){
            fact*=i;
        }
        sum+=fact;
        n/=10;
    }
    if (num==sum){
        printf("strong number");
    }
    else{
        printf("no");
    }
    return 0;
}