// 2.16 (Arithmetic) 
// Write a program that asks the user to enter two numbers,
// obtains them from the user and prints their sum, product, difference, quotient and remainder.

#include <stdio.h>

int main(void) {

    int num1 = 0;
    int num2 = 0;

    printf("\nEnter two numbers\n");
    printf("First number :");
    scanf(" %d", &num1);
    printf("Second number :");
    scanf(" %d", &num2);

    int sum = num1 + num2;
    int product = num1 * num2;
    int difference = num1 - num2;
    int quotioent = num1 / num2;
    int remainder = num1 % num2;

    printf("\nSum        : %i", sum);
    printf("\nProduct    : %i", product);
    printf("\nDifference : %i", difference);
    printf("\nQuotient   : %i", quotioent);
    printf("\nRemainder  : %i", remainder);
    printf("\nnum1       : %i", (quotioent * num2) + remainder);
    printf("\nnum2       : %i", (num1 - remainder) / quotioent);
    
    printf("\n\n");

    return 0;
}