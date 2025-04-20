// 2.23 (Largest and Smallest Integers)
// Write a program that reads in three integers and then determines and prints the largest and the smallest integers in the group.
// Use only the programming techniques you have learned in this chapter.

#include <stdio.h>

int main(void) {
    
    printf("\nEnter three different integers\n");

    int num1 = 0, num2 = 0, num3 = 0, smallest, largest;

    printf("Enter first integer  : ");
    scanf(" %i", &num1);
    printf("Enter second integer : ");
    scanf(" %i", &num2);
    printf("Enter third integer  : ");
    scanf(" %i", &num3);

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

    printf("\nSmallest is %i\nLargest is %i\n\n", smallest, largest);

    return 0;
}