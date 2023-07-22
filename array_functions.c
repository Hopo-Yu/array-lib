#include "array_functions.h"

// Function to copy an array.
void array_copy(int* source, int* destination, size_t size) {
    for (size_t i = 0; i < size; i++) {
        destination[i] = source[i];
    }
}

// Function to reverse an array.
void array_reverse(int* array, size_t size) {
    for (size_t i = 0; i < size / 2; i++) {
        int temp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = temp;
    }
}

// Function to find the maximum element in an array.
int array_max(int* array, size_t size) {
    int max = array[0];
    for (size_t i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

// Function to find the minimum element in an array.
int array_min(int* array, size_t size) {
    int min = array[0];
    for (size_t i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}
