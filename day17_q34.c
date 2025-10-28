//Write a program to check if a number is prime.
#include<stdio.h>
int main(){
    int n, factors=0;
    printf("enter number");
    scanf("%d", &n);
    if (n == 1) {
        printf("Composite\n");
        return 0;
    } 
    for (int i=1; i<=n; i++){
        if (n%i==0){
            factors=factors+1;
        }
        
    }
    if (factors==2){
        printf("prime");
    }
    else{
        printf("not prime");
    }
    return 0;
}