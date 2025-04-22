// 3.16 (Gas Mileage)
// Drivers are concerned with the mileage obtained by their automobiles.
// One driver has kept track of several tankfuls of gasoline by recording miles driven and gallons used for each tankful.
// Develop a program that will input the miles driven and gallons used for each tankful.
// The program should calculate and display the miles per gallon obtained for each tankful.
// After processing all input information,
// the program should calculate and print the combined miles per gallon obtained for all tankfuls.
// Here is a sample input/output dialog:
// Enter the gallons used (-1 to end): 12.8
// Enter the miles driven: 287
// The miles/gallon for this tank was 22.421875
// Enter the gallons used (-1 to end): 10.3
// Enter the miles driven: 200
// The miles/gallon for this tank was 19.417475
// Enter the gallons used (-1 to end): 5
// Enter the miles driven: 120
// The miles/gallon for this tank was 24.000000
// Enter the gallons used (-1 to end): -1
// The overall average miles/gallon was 21.601423

#include <stdio.h>

int main(void) {

    printf("\nProgram that will input the miles driven and gallons used for each tankful\n=============================\n");

    int miles = 0, totalMiles = 0;
    double mpg = 0.0, totalMpg = 0.0, gallons = 0.0, totalGallons = 0.0;

    // Input loop ends when any negative value is assigned to the gallons variable
    while (gallons > -1) {

        // input gallons used
        printf("Enter gallons used (-1 to end) : ");
        scanf(" %lf", &gallons);

        // Loop continues only if gallons > -1 otherwise it ends
        if (gallons > -1) {
            // input miles driven
            printf("Enter miles driven : ");
            scanf(" %i", &miles);

            // calculate mpg per tankful
            mpg = miles / gallons;

            // display mpg per tankful
            printf("The mpg per tankful is : %lf\n", mpg);

            // Accumulate the gallons and miles from each input into a total count for all tankfuls
            totalGallons += gallons;
            totalMiles += miles;
        }
        printf("\n"); // Makes space for subsequent loops

    } // while loop end

    // calculate combined mpg for all tankfuls
    totalMpg = totalMiles / totalGallons;

    // display mpg for all tankfuls
    printf("Combined miles per gallon obtained for all tankfuls : %lf\n\n", totalMpg);

    return 0;
}