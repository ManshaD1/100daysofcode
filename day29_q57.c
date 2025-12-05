/* Q57: Find the sum of array elements. */

#include <stdio.h>
int main() {
    int n, i, sum = 0;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        printf("enter element",i+1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("%d", sum);
    return 0;
}
