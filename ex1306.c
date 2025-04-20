#include <stdio.h>

#define MINIMUM2(a, b) ((a) < (b) ? (a) : (b))

int main(void) {
    printf("\nProgram that defines and uses a macro to determine the smaller of two numeric values\n=============================================\n");

    int num1 = 0, num2 = 0;
    printf("Enter first number : ");
    scanf("%i", &num1);
    printf("Enter second number : ");
    scanf("%i", &num2);
    printf("The smaller of the two is %i\n\n", MINIMUM2(num1, num2));

    return 0;
}