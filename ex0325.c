// 3.25 (Tabular Output)
// Write a program that utilizes looping to produce the following table of values:
// A       A+2     A+4     A+6
// 3       5       7       9
// 6       8       10      12
// 9       11      13      15
// 12      14      16      18
// 15      17      19      21

#include <stdio.h>

int main(void) {

    printf("\nA\tA+2\tA+4\tA+6");

    int count = 3;
    while (count < 16) {

        printf("\n%i\t%i\t%i\t%i", count, count + 2, count + 4, count + 6);
        count += 3;
    }

    printf("\n\n");
    return 0;
}