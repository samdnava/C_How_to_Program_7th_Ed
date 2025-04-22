// 3.23 (Find the Largest Number)
// The process of finding the largest number (i.e., the maximum of a group of numbers) is used frequently in computer applications.
// For example, a program that determines the winner of a sales contest would input the number of units sold by each salesperson.
// The salesperson who sells the most units wins the contest.
// Write a pseudocode program and then a program that inputs a series of 10 non-negative numbers and determines and prints the largest of the numbers.
// Hint: Your program should use three variables as follows:
// counter: A counter to count to 10 (i.e., to keep track of how many numbers have been input and to determine when all 10 numbers have been processed)
// number: The current number input to the program
// largest: The largest number found so far

#include <stdio.h>

int main(void) {

    // variables to store info
    // start counter at 0
    unsigned counter = 0, number = 0, largest = 0;

    // loop that stops when counter > 9
    while (counter < 10) {
        // promt user to enter a number
        printf("\nEnter number : ");

        // read number from stdin
        scanf(" %i", &number);

        // compare input number with largest number
        if (number > largest) {
            // if input number is larger then it is assigned to the "largest" variable
            largest = number;
        } // otherwise loop repeats

        // Increase counter
        counter++;
    }

    printf("\nLargest number : %i\n\n", largest);

    return 0;
}