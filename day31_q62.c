//Q62: Reverse an array without taking extra space.

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements");
    scanf("%d", &n);
    int array[n]; 
    printf("Enter the elements");
    for (int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    int start=0, end=n-1;
    while (start < end){
        int temp=array[start];
        array[start]=array[end];
        array[end]=temp;
        start++;
        end--;
    }
    printf("Reversed array: ");
    for (int i=0; i<n; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
