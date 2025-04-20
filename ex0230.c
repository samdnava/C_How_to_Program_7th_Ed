// 2.30 (Separating Digits in an Integer)
// Write a program that inputs one five-digit number,
// separates the number into its individual digits and prints the digits separated from one another by three spaces each.
// [Hint: Use combinations of integer division and the remainder operation.]
// For example, if the user types in 42139, the program should print
// 4   2   1   3   9
#include <stdio.h>

int main(void) {

    printf("\nProgram that inputs one five-digit number, separates the number into its individual digits and prints the digits separated from one another by three spaces each.");

    int num;
    printf("\nEnter five-digit number : ");
    scanf("%5i", &num);

    // printf("\n%i   %i   %i   %i   %i\n\n", num / 10000, num / 1000, num / 100, num / 10, num % 10);
    printf("\n%i   %i   %i   %i   %i\n\n", num / 10000, (num / 1000) % 10, (num / 100) % 10, (num / 10) % 10, num % 10);

    return 0;
}