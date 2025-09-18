#include <stdio.h>
#include <math.h>

int main(){
    float principal, rate, time, SI, CI;

    printf("Enter principal");
    scanf("%f", &principal);

    printf("Enter rate");
    scanf("%f", &rate);

    printf("Enter time");
    scanf("%f", &time);


    SI = (principal*rate*time)/100.0;
    CI = principal*(pow((1+rate/100.0), time) - 1);

    printf("Simple Interest is %f\n", SI);
    printf("Compound Interest is %f\n", CI);

    return 0;
}