//Write a program to check if a number is an Armstrong number.
#include<stdio.h>
#include<math.h>
int main(){
    int n,rem,num=0,original;
    printf("enter number");
    scanf("%d", &n);
    original=n;
    while (n>0){
        rem=n%10;
        num=(int) pow(rem,3)+num;
        n/=10;
    }
    if (original==num){
        printf("armstong");
    
    }
    else{
        printf("not armstrong");
    }
    return 0;
}