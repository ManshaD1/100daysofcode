// Q8: Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>
int main() {
    int sum = 0, n, i;

    printf("Enter the amount of numbers to be added: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + i; 
    }

    printf("Sum is %d\n", sum);

    return 0;
}
