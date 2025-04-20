// 2.17(Printing Values with printf)
// Write a program that prints the numbers 1 to 4 on the same line.
// Write the program using the following methods.
// a) Using one printf statement with no conversion specifiers.
// b) Using one printf statement with four conversion specifiers.
// c) Using four printf statements

#include <stdio.h>

int main(void) {

    printf("\n\n");

    printf(" 1 2 3 4");
    printf(" %i %i %i %i", 1, 2, 3, 4);
    printf(" %i", 1);
    printf(" %i", 2);
    printf(" %i", 3);
    printf(" %i", 4);

    printf("\n\n");
    
    return 0;
}