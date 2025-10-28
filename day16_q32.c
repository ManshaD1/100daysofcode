//Write a program to check if a number is a palindrome.
#include<stdio.h>
int main(){
    int n, remainder, reverse=0,num;
    printf("enter number");
    scanf("%d", &n);
    num=n;
    while (n!=0){
        remainder=n%10;
        reverse=reverse*10+remainder;
        n/=10;
    }
    if (reverse==num){
        printf("palindrome");

    }
    else{
        printf("not palindrome");
    }
    return 0;
}