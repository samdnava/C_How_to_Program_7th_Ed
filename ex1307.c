#include <stdio.h>

#define MINIMUM2(a, b) ((a) < (b) ? (a) : (b))
#define MINIMUM3(c, MINIMUM2) ((c) < (MINIMUM2) ? (c) : (MINIMUM2))

int main(void) {
    printf("\nProgram that defines and uses a macro named MINIMUM3 to determine the smallest of three int values\n=====================================\n");

    int num1 = 0, num2 = 0, num3 = 0;
    printf("Enter first number : ");
    scanf("%i", &num1);
    printf("Enter second number : ");
    scanf("%i", &num2);
    printf("Enter third number : ");
    scanf("%i", &num3);
    printf("The smallest of the three is %i\n\n", MINIMUM3(num3, MINIMUM2(num1, num2)));

    return 0;
}