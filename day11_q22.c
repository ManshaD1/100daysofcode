//Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() {
    float cp, sp, amount;
    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &cp, &sp);

    if(sp > cp) {
        amount = ((sp - cp)/cp) * 100;
        printf("Profit %.0f%%\n", amount);
    } else if(sp < cp) {
        amount = ((cp - sp)/cp) * 100;
        printf("Loss %.0f%%\n", amount);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
