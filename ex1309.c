#include <stdio.h>

#define PRINTARRAY(array, size)      \
    for (int i = 0; i < (size); i++) \
        printf(" %i ", (array)[i]);

int main(void) {
    printf("\nProgram that defines and uses a macro PRINTARRAY to print an array of integers.");

    int size = 0;
    printf("\nEnter size of array : ");
    scanf("%i", &size);
    int numbers[size];
    for (size_t i = 0; i < size; i++) {
        printf("Enter array element %lu : ", i + 1);
        scanf("%i", &numbers[i]);
    }
    printf("\nArray Elements\n");
    PRINTARRAY(numbers, size);
    printf("\n\n");

    return 0;
}