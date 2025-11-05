// Q37: Write a program to find the LCM of two numbers.
#include<stdio.h>
int main(){
    int a,b,remainder,hcf,lcm,n1,n2;
    printf("enter first number");
    scanf("%d", &a);
    printf("enter second number");
    scanf("%d", &b);
    n1=a;
    n2=b;
    while (a!=0){
        remainder=a%b;
        a=b;
        b=remainder;
    }
    hcf=b;
    lcm=(n1*n2)/hcf;
    printf("hcf is %d\n", hcf);
    printf("lcm is %d\n", lcm);
    return 0;
}