// 3.22 (Printing Numbers from a Loop)
// Write a program that utilizes looping to print the numbers from 1 to 10 side by side on the same line with three spaces between numbers.

#include <stdio.h>

int main(void) {

    printf("\nProgram that utilizes looping to print the numbers from 1 to 10 side by side on the same line with three spaces between numbers.\n==============================\n");
    int num = 0;
    while (num < 11) {
        printf("%i   ", ++num);
    }

    printf("\n\n");
    return 0;
}