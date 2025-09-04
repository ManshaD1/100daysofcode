//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main(){
    int area,circumference,radius;
    printf("enter radius of circle");
    scanf("%d",&radius);
    area=3.14*radius*radius;
    circumference=2*3.14*radius;
    printf("area of circle is %d\n", area);
    printf("circumference of circle is %d\n", circumference);
    return 0;


}