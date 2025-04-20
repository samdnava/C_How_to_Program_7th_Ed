// 2.33 (Car-Pool Savings Calculator)
// Research several car-pooling websites.
// Create an application that calculates your daily driving cost,
// so that you can estimate how much money could be saved by car pooling,
// which also has other advantages such as reducing carbon emissions and reducing traffic congestion.
// The application should input the following information and display the user’s cost per day of driving to work:
// a) Total miles driven per day.
// b) Cost per gallon of gasoline.
// c) Average miles per gallon.
// d) Parking fees per day.
// e) Tolls per day.

#include <stdio.h>

int main(void) {
    
    printf("\nApplication that calculates your daily driving cost\n=========================\n");

    int miles = 0, gasCost = 0, mpg = 0, fees = 0, tolls = 0;

    printf("Enter total miles driven per day  :");
    scanf(" %i", &miles);
    printf("Cost per gallon of gasoline       :");
    scanf(" %i", &gasCost);
    printf("Average miles per gallon          :");
    scanf(" %i", &mpg);
    printf("Parking fees per day              :");
    scanf(" %i", &fees);
    printf("Tolls per day                     :");
    scanf(" %i", &tolls);

    printf("\nCost per day of driving to work : $%i\n\n", (miles / mpg) * gasCost + (fees * 15) + (tolls * 25));

    return 0;
}