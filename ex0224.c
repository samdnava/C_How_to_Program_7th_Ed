// 2.24 (Odd or Even)
// Write a program that reads an integer and determines and prints whether it’s odd or even.
// [Hint: Use the remainder operator. An even number is a multiple of two.
// Any multiple of two leaves a remainder of zero when divided by 2.]

#include <stdio.h>

int main(void) {

    printf("\nProgram that reads an integer and determines and prints whether it’s odd or even.");

    int num;
    printf("\nEnter integer : ");
    scanf(" %i", &num);

    if (num % 2 == 0)
        printf("\n%i is even.\n\n", num);
    if (num % 2 != 0)
        printf("\n%i is odd.\n\n", num);

    return 0;
}