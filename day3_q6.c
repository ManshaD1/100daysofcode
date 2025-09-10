//write a program to swap two numbers using a third variable
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter first number");
    scanf("%d",&a);
    printf("enter second number");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("after swap %d %d", a, b);
    return 0;
}
