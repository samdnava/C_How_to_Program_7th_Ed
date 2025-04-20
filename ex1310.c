#include <stdio.h>

#define SUMARRAY(array, size) ({        \
    int sum = 0;                        \
    for (size_t i = 0; i < (size); i++) \
        sum += ((array)[i]);            \
            sum; })

int main(void) {
    printf("\nProgram that defines and uses a macro SUMARRAY.");

    int size = 0;
    printf("\nEnter size of array : ");
    scanf("%i", &size);
    int numbers[size];
    for (size_t i = 0; i < size; i++) {
        printf("Enter array element %lu : ", i + 1);
        scanf("%i", &numbers[i]);
    }
    printf("\nArray Sum : %i\n\n", SUMARRAY(numbers, size));

    return 0;
}