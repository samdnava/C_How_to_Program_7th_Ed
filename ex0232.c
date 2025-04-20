// 2.32 (Body Mass Index Calculator)
// We introduced the body mass index (BMI) calculator in Exercise 1.14.
// The formulas for calculating BMI are
//                 weightInPounds x 703
//     BMI = -------------------------------
//           heightInInches x heightInInches
// or
//                 weightInKilograms
//     BMI = -------------------------------
//           heightInInches x heightInInches
// Create a BMI calculator application that reads the user’s weight in pounds and height in inches
// (or, if you prefer, the user’s weight in kilograms and height in meters), then calculates and displays the user’s body mass index.
// Also, the application should display the following information from the Department of Health and Human Services/National Institutes of Health so the user can evaluate his/her BMI:
// BMI VALUES
// Underweight: less than 18.5
// Normal:      between 18.5 and 24.9
// Overweight:  between 25 and 29.9
// Obese:       30 or greater

#include <stdio.h>

int main(void) {
    
    printf("\nCreate a BMI calculator application that reads the user’s weight in pounds and height in inches, then calculates and displays the user’s body mass index.\n");

    int weight, height;
    printf("Enter weight (pounds) : ");
    scanf(" %i", &weight);
    printf("Enter height (inches) : ");
    scanf(" %i", &height);
    printf("\nBMI : %f", (weight * 703.0) / (height * height));
    printf("\nBMI VALUES\nUnderweight: less than 18.5\nNormal     : between 18.5 and 24.9\nOverweight : between 25 and 29.9\nObese      : 30 or greater\n\n");

    return 0;
}
