// 2.19 (Arithmetic, Largest Value and Smallest Value)
// Write a program that inputs three different integers from the keyboard,
// then prints the sum, the average, the product, the smallest and the largest of these numbers.
// Use only the single-selection form of the if statement you learned in this chapter.
// The screen dialogue should appear as follows:
// Enter three different integers: 13 27 14
// Sum is 54
// Average is 18
// Product is 4914
// Smallest is 13
// Largest is 27

#include <stdio.h>

int main(void) {
    
    printf("\nEnter three different integers\n");

    int num1 = 0, num2 = 0, num3 = 0,
        sum = 0, average = 0, product = 0,
        smallest, largest;

    printf("Enter first integer  : ");
    scanf(" %i", &num1);
    printf("Enter second integer : ");
    scanf(" %i", &num2);
    printf("Enter third integer  : ");
    scanf(" %i", &num3);

    sum = num1 + num2 + num3;
    average = sum / 3;
    product = num1 * num2 * num3;

    if (num1 >= num2)
        if (num1 >= num3)
            largest = num1;

    if (num2 >= num1)
        if (num2 >= num3)
            largest = num2;

    if (num3 >= num1)
        if (num3 >= num2)
            largest = num3;

    if (num1 <= num2)
        if (num1 <= num3)
            smallest = num1;

    if (num2 <= num1)
        if (num2 <= num3)
            smallest = num2;

    if (num3 <= num1)
        if (num3 <= num2)
            smallest = num3;

    printf("\nSum is %i\nAverage is %i\nProduct is %i\nSmallest is %i\nLargest is %i\n\n", sum, average, product, smallest, largest);

    return 0;
}