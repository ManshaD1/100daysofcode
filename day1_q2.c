// Q2. Write a program to input two numbers and display their sum, difference, product, and quotient
#include<stdio.h>
int main(){
    int a,b,c,d,e;
    float f;
    printf("enter first no");
    scanf("%d",&a);
    printf("enter second no");
    scanf("%d",&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    printf("sum is %d\n",c);
    printf("difference is %d\n",d);
    printf("multiplication is %d\n",e);
    printf("division result is %f\n",f);
    return 0;

}