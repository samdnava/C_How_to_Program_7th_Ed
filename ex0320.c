// 3.20 (Salary Calculator)
// Develop a program that will determine the gross pay for each of several employees.
// The company pays “straight time” for the first 40 hours worked by each employee and pays “time-and-a-half” for all hours worked in excess of 40 hours.
// You’re given a list of the employees of the company, the number of hours each employee worked last week and the hourly rate of each employee.
// Your program should input this information for each employee and should determine and display the employee's gross pay.
// Here is a sample input/output dialog:
// Enter # of hours worked (-1 to end): 39
// Enter hourly rate of the worker ($00.00): 10.00
// Salary is $390.00
// Enter # of hours worked (-1 to end): 40
// Enter hourly rate of the worker ($00.00): 10.00
// Salary is $400.00
// Enter # of hours worked (-1 to end): 41
// Enter hourly rate of the worker ($00.00): 10.00
// Salary is $415.00
// Enter # of hours worked (-1 to end): -1

#include <stdio.h>

int main(void) {
    // Varibales to store input
    double hours = 0.0, rate = 0.0, salary = 0.0;

    while (!(hours < 0)) { // Loop ends when hours < 0

        // Prompt the user for hours
        printf("\nEnter # of hours worked (-1 to end) : ");
        // Read user input and store it in variable hours
        scanf(" %lf", &hours);

        if (hours > 0) { // Continue loop if hours > 0 otherwise it ends skiping these inputs

            // Prompt user for rate
            printf("Enter hourly rate of the worker ($00.00) : ");
            // Read user input and store it in variable rate
            scanf(" %lf", &rate);

            if (hours <= 40) {

                // calculate salary if less than 40 hours worked
                salary = hours * rate;
                // Display calculated salary
                printf("Salary is $%.2lf", salary);
            }

            else if (hours > 40) {

                // calculate salary if more than 40 hours worked
                salary = (40 * rate) + ((hours - 40) * rate * 1.5);
                // Display calculated salary
                printf("Salary is $%.2lf", salary);
            }
        }
    }
    return 0;
}