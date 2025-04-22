// 3.17 (Credit Limit Calculator)
// Develop a C program that will determine if a department store customer has exceeded the credit limit on a charge account.
// For each customer, the following facts are available:
// a) Account number
// b) Balance at the beginning of the month
// c) Total of all items charged by this customer this month
// d) Total of all credits applied to this customer's account this month
// e) Allowed credit limit
// The program should input each fact, calculate the new balance (= beginning balance + charges – credits),
// and determine whether the new balance exceeds the customer's credit limit.
// For those customers whose credit limit is exceeded, the program should display the customer's account number,
// credit limit, new balance and the message “Credit limit exceeded.”
// Here is a sample input/output dialog:
// Enter account number (-1 to end): 100
// Enter beginning balance: 5394.78
// Enter total charges: 1000.00
// Enter total credits: 500.00
// Enter credit limit: 5500.00
// Account: 100
// Credit limit: 5500.00
// Balance: 5894.78
// Credit Limit Exceeded.
// Enter account number (-1 to end): 200
// Enter beginning balance: 1000.00
// Enter total charges: 123.45
// Enter total credits: 321.00
// Enter credit limit: 1500.00
// Enter account number (-1 to end): 300
// Enter beginning balance: 500.00
// Enter total charges: 274.73
// Enter total credits: 100.00
// Enter credit limit: 800.00
// Enter account number (-1 to end): -1

#include <stdio.h>

int main(void) {

    // Variables to store input
    int account = 0;
    double beginningBalance = 0.0, charges = 0.0, credits = 0.0, limit = 0.0, newBalance = 0.0;
    // start loop, ends when account number != -1
    while (account > -1) {
        printf("\n"); // New line to start loop

        // Prompt for account number
        printf("Enter account number : ");
        // Read stdin and store in account number
        scanf(" %i", &account);

        // loop continues only if account number > -1 otherwise nothing is done and loop ends
        if (account > -1) {
            // Prompt for beginning balance
            printf("Enter beginning balance : ");
            // Read stdin and store in beginning balance variable
            scanf(" %lf", &beginningBalance);

            // Prompt for total charges
            printf("Enter total charges : ");
            // Read stdin and store in total charges variable
            scanf(" %lf", &charges);

            // Prompt for total credits
            printf("Enter total credits : ");
            // Read stdin and store in total credits variable
            scanf(" %lf", &credits);

            // Prompt for credit limit
            printf("Enter credit limit : ");
            // Read stdin and store in credit limit variable
            scanf(" %lf", &limit);

            // calculate new balance
            newBalance = beginningBalance + charges - credits;

            // If new balance > credit limit print account, limit, new balance and "Credit limit exceeded"
            if (newBalance > limit) {
                printf("\nAccount      : %i", account);
                printf("\nCredit limit : %.2lf", limit);
                printf("\nBalance      : %.2lf", newBalance);
                printf("\nCredit Limit Exceeded");
            }
        }
    } // end loop

    return 0;
}