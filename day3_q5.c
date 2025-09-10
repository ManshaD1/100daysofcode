//write a program to convert temperature from celsius to fahrenheit
#include<stdio.h>
int main(){
    int celsius, fahrenheit;
    printf("enter temperature in celsius");
    scanf("%d",&celsius);
    fahrenheit=(celsius*9/5)+32;
    printf("temperature in fahrenheit is %d",fahrenheit);
    return 0;
}