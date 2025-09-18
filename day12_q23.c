/* Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled */

#include <stdio.h>

int main() {
    int days;
    int fine = 0;
    printf("Enter number of days late: ");
    scanf("%d", &days);

    if(days <= 5) {
        fine = 2 * days;
        printf("Fine ₹%d\n", fine);
    } else if(days <= 10) {
        fine = 2*5 + 4*(days-5);
        printf("Fine ₹%d\n", fine);
    } else if(days <= 30) {
        fine = 2*5 + 4*5 + 6*(days-10);
        printf("Fine ₹%d\n", fine);
    } else {
        printf("Membership Cancelled\n");
    }

    return 0;
}
