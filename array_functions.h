#ifndef ARRAY_FUNCTIONS_H
#define ARRAY_FUNCTIONS_H

#include <stddef.h>  // For size_t

// Function to copy an array.
// The function takes a pointer to the source array, a pointer to the destination array, and the size of the arrays.
void array_copy(int* source, int* destination, size_t size);

// Function to reverse an array.
// The function takes a pointer to the array and the size of the array.
void array_reverse(int* array, size_t size);

// Function to find the maximum element in an array.
// The function takes a pointer to the array and the size of the array.
// It returns the maximum element in the array.
int array_max(int* array, size_t size);

// Function to find the minimum element in an array.
// The function takes a pointer to the array and the size of the array.
// It returns the minimum element in the array.
int array_min(int* array, size_t size);

#endif  // ARRAY_FUNCTIONS_H
