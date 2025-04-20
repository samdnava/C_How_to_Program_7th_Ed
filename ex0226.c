// 2.26 (Multiples)
// Write a program that reads in two integers and determines and prints whether the first is a multiple of the second.
// [Hint: Use the remainder operator.]

#include <stdio.h>

int main(void) {
    
    printf("\nProgram that reads in two integers and determines and prints whether the first is a multiple of the second.");

    int num1, num2;
    printf("\nEnter first integer : ");
    scanf(" %i", &num1);
    printf("\nEnter second integer : ");
    scanf(" %i", &num2);

    if (num2 % num1 == 0)
        printf("\n%i is a multiple of %i.\n\n", num1, num2);
    if (num2 % num1 != 0)
        printf("\n%i is not a multiple of %i.\n\n", num1, num2);

    return 0;
}