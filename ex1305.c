#include <stdio.h>

#define SUM(x,y) ((x)+(y))

int main(void){
    printf("\nMacro Sum with two arguments x and y\n====================================================");

    int x = 0, y = 0;
    printf("\nEnter x : ");
    scanf("%i", &x);
    printf("Enter y : ");
    scanf("%i", &y);
    printf("The sum of x and y is %i\n\n", SUM(x,y));

    return 0;
}