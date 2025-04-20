// 2.18(Comparing Integers)
// Write a program that asks the user to enter two integers,
// obtains the numbers from the user, then prints the larger number followed by the words “is larger.”
// If the numbers are equal, print the message “These numbers are equal.”
// Use only the single - selection form of the if statement you learned in this chapter.

#include <stdio.h>

int main(void) {
    
    int num1 = 0, num2 = 0;
    printf("\nEnter two integers");
    printf("\nEnter first integer  : ");
    scanf(" %i", &num1);
    printf("\nEnter second integer : ");
    scanf(" %i", &num2);

    if (num1 > num2)
    printf("\n%i is larger",num1);
    if (num1 < num2)
    printf("\n%i is larger",num2);
    if (num1 == num2)
    printf("\nThese numbers are equal");

    printf("\n\n");
    
    return 0;
}