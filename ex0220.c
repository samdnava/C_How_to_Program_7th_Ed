// 2.20 (Diameter, Circumference and Area of a Circle)
// Write a program that reads in the radius of a circle and prints the circle’s diameter, circumference and area.
// Use the constant value 3.14159 for π.
// Perform each of these calculations inside the printf statement(s) and use the conversion specifier %f.
// [Note: In this chapter, we’ve discussed only integer constants and variables.
// In Chapter 3 we’ll discuss floating-point numbers, i.e., values that can have decimal points.]

#include <stdio.h>

int main(void) {
    
    printf("\nProgram that reads in the radius of a circle and prints the circle’s diameter, circumference and area.");

    int radius = 0;
    printf("\nEnter circle radius : ");
    scanf("%i", &radius);
    printf("\nDiameter      : %f", radius * 2.0);
    printf("\nCircumference : %f", 2.0 * 3.141592654 * radius);
    printf("\nArea          : %f\n\n", 3.141592654 * (radius * radius));

    return 0;
}