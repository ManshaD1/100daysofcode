//Q42: Write a program to check if a number is a perfect number.

#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter number");
    scanf("%d", &n);
    for (int i=1; i<=n/2; i++){
        if (n%i==0){
              sum+=i;
        }
    }
    if (n==sum){
        printf("perfect number");

    }
    else{
        printf("not perfect");
    }
    return 0;
}