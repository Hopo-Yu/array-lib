#include <stdio.h>
#include "array_functions.h"

// Function to print an array.
void print_array(int* array, size_t size) {
    printf("[");
    for (size_t i = 0; i < size; i++) {
        printf("%d", array[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

int main() {
    int arr1[5] = { 1, 2, 3, 4, 5 };
    int arr2[5] = { 0 };

    // Test array_copy.
    printf("Testing array_copy...\n");
    array_copy(arr1, arr2, 5);
    print_array(arr2, 5);  // Should print: [1, 2, 3, 4, 5]

    // Test array_reverse.
    printf("Testing array_reverse...\n");
    array_reverse(arr1, 5);
    print_array(arr1, 5);  // Should print: [5, 4, 3, 2, 1]

    // Test array_max.
    printf("Testing array_max...\n");
    int max = array_max(arr1, 5);
    printf("Max: %d\n", max);  // Should print: Max: 5

    // Test array_min.
    printf("Testing array_min...\n");
    int min = array_min(arr1, 5);
    printf("Min: %d\n", min);  // Should print: Min: 1

    return 0;
}
