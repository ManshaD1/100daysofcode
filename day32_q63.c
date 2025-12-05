//Q63: Merge two arrays.

#include <stdio.h>

int main() {
    int n1, n2;

    // Input size of the first array
    printf("Enter number of elements in the first array: ");
    scanf("%d", &n1);
    
    int array1[n1];  // Declare the first array
    
    // Input the elements of the first array
    printf("Enter elements of the first array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &array1[i]);
    }

    // Input size of the second array
    printf("Enter number of elements in the second array: ");
    scanf("%d", &n2);
    
    int array2[n2];  // Declare the second array
    
    // Input the elements of the second array
    printf("Enter elements of the second array: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &array2[i]);
    }

    // Create a merged array with size n1 + n2
    int mergedSize = n1 + n2;
    int mergedArray[mergedSize];

    // Copy elements from the first array into the merged array
    for (int i = 0; i < n1; i++) {
        mergedArray[i] = array1[i];
    }
    
    // Copy elements from the second array into the merged array
    for (int i = 0; i < n2; i++) {
        mergedArray[n1 + i] = array2[i];
    }

    // Output the merged array
    printf("Merged array: ");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    return 0;
}
