// 2.31 (Table of Squares and Cubes) 
// Using only the techniques you learned in this chapter
// write a program that calculates the squares and cubes of the numbers from 0 to 10
// and uses tabs to print the following table of values:
// number  square  cube
// 0       0       0
// 1       1       1
// 2       4       8
// 3       9       27
// 4       16      64
// 5       25      125
// 6       36      216
// 7       49      343
// 8       64      512
// 9       81      729
// 10      100     1000

#include <stdio.h>

int main(void) {

    printf("\nProgram that calculates the squares and cubes of the numbers from 0 to 10 and uses tabs to print the following table of values");
    printf("\nnumber\tsquare\tcube");
    printf("\n%i\t%i\t%i", 0, 0 * 0, 0 * 0 * 0);
    printf("\n%i\t%i\t%i", 1, 1 * 1, 1 * 1 * 1);
    printf("\n%i\t%i\t%i", 2, 2 * 2, 2 * 2 * 2);
    printf("\n%i\t%i\t%i", 3, 3 * 3, 3 * 3 * 3);
    printf("\n%i\t%i\t%i", 4, 4 * 4, 4 * 4 * 4);
    printf("\n%i\t%i\t%i", 5, 5 * 5, 5 * 5 * 5);
    printf("\n%i\t%i\t%i", 6, 6 * 6, 6 * 6 * 6);
    printf("\n%i\t%i\t%i", 7, 7 * 7, 7 * 7 * 7);
    printf("\n%i\t%i\t%i", 8, 8 * 8, 8 * 8 * 8);
    printf("\n%i\t%i\t%i", 9, 9 * 9, 9 * 9 * 9);
    printf("\n%i\t%i\t%i\n\n", 10, 10 * 10, 10 * 10 * 10);

    return 0;
}