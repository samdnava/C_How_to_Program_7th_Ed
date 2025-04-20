// 14.6 (Dynamic Array Allocation)
// Write a program that dynamically allocates an array of integers.
// The size of the array should be input from the keyboard.
// The elements of the array should be assigned values input from the keyboard.
// Print the values of the array. Next, reallocate the memory for the array to half of the current number of elements.
// Print the values remaining in the array to confirm that they match the first half of the values in the original array.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    printf("\nProgram that dynamically allocates an array of integers\n=======================================");

    int arraySize = 0, *arrayPtr = NULL;

    printf("\nEnter array size : ");
    scanf(" %i", &arraySize);

    arrayPtr = calloc(arraySize, sizeof(int));
    printf("\nSizeof : %lu\n", sizeof(arrayPtr));
    for (size_t i = 0; i < arraySize; i++)
        printf("Enter element #%lu : ", i),
            scanf(" %i", &arrayPtr[i]);

    for (size_t i = 0; i < arraySize; i++)
        printf("\nArray element #%lu : %i", i, arrayPtr[i]);

    arrayPtr = realloc(arrayPtr, (sizeof(int) * arraySize) / 2);
    printf("\nSizeof : %lu\n", sizeof(arrayPtr));

    for (size_t i = 0; i < arraySize; i++)
        printf("\nArray element #%lu : %i", i, arrayPtr[i]);

    printf("\n\n");
    return 0;
}