// 3.19 (Interest Calculator)
// The simple interest on a loan is calculated by the formula interest = principal * rate * days / 365;
// The preceding formula assumes that rate is the annual interest rate, and therefore includes the division by 365 (days).
// Develop a program that will input principal, rate and days for several loans,
// and will calculate and display the simple interest for each loan, using the preceding formula.
// Here is a sample input/output dialog:
// Enter loan principal (-1 to end): 1000.00
// Enter interest rate: .1
// Enter term of the loan in days: 365
// The interest charge is $100.00
// Enter loan principal (-1 to end): 1000.00
// Enter interest rate: .08375
// Enter term of the loan in days: 224
// The interest charge is $51.40
// Enter loan principal (-1 to end): -1

#include <stdio.h>

int main(void) {

    // Variables to store input
    double principal = 0.0, rate = 0.0, days = 0.0, interest = 0.0;

    while (!(principal < 0)) { // Loop continues while principal > 0

        // Message to stdout to enter loan princial
        printf("\nEnter loan principal (-1 to end) : ");
        // Read stdin and store it in "principal" variable
        scanf(" %lf", &principal);

        if (principal > 0) { // Continue loop only if principal > 0

            // Message to stdout to enter interest rate
            printf("Enter interes rate : ");
            // Read stdin and store input in "rate" variable
            scanf(" %lf", &rate);

            // Message to stdout to enter loan term in days
            printf("Enter term of the loan in days : ");
            // Read stdin and store input in "days" variable
            scanf(" %lf", &days);

            // calculate interest
            interest = principal * rate * days / 365;
            // Print interest charge
            printf("The interest charge is $%.2lf\n", interest);
        }
    } // loop end
    return 0;
}