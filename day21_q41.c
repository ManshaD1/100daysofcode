//Q41: Write a program to swap the first and last digit of a number.

#include<stdio.h>

int main() {
    int n, first_digit, last_digit, num_digits = 0, swapped_number;
    printf("Enter number");
    scanf("%d", &n);
    last_digit = n % 10;
    int temp = n;
    while (temp >= 10) {
        temp /= 10;
    }
    first_digit = temp;
    temp = n;
    while (temp > 0) {
        num_digits++;
        temp /= 10;
    }
    swapped_number= n - first_digit * pow(10, num_digits - 1);  
    swapped_number= swapped_number + last_digit * pow(10, num_digits - 1);  
    swapped_number= swapped_number - last_digit + first_digit;  
    printf("Number after swapping first and last digits %d\n", swapped_number);
    return 0;
}
