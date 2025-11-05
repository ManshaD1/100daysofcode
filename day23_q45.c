//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include<stdio.h>
int main(){
    int n;
    float sum=0.0;
    printf("enter number of terms");
    scanf("%d", &n);
    for (int i=0; i<=n; i++){
        sum+=(float)(2*i)/(4*i-1);
    }
    printf("sum of series is %f", sum);
    return 0;
}