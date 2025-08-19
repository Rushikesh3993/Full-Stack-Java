#include <stdio.h>

// Program: Remove duplicate elements from an array
// Author: Rushikesh
// Idea: For each element, compare it with the rest.
//       If a duplicate is found, shift elements left and reduce size.

int main() {
    int n[5];        // array of 5 elements
    int size = 5;    // current size of the array (shrinks when duplicates are removed)

    // Step 1: Take input
    printf("Enter 5 array elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &n[i]);
    }

    // Step 2: Remove duplicates
    // Outer loop picks one element
    for (int i = 0; i < size; i++) {
        // Inner loop compares it with the rest
        for (int j = i + 1; j < size; j++) {
            if (n[i] == n[j]) {
                // If duplicate found, shift elements to the left
                for (int k = j; k < size - 1; k++) {
                    n[k] = n[k + 1];
                }
                size--;   // array size reduces after removing a duplicate
                j--;      // stay at same index to check the new element
            }
        }
    }

    // Step 3: Print final array without duplicates
    printf("Array after removing duplicates: ");
    for (int i = 0; i < size; i++) {
        printf("%d\t", n[i]);
    }

    return 0;
}
