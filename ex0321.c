// 3.21 (Predecrementing vs. Postdecrementing)
// Write a program that demonstrates the difference between predecrementing and postdecrementing using the decrement operator --.

#include <stdio.h>

int main(void) {

    printf("\nProgram that demonstrates the difference between predecrementing and postdecrementing using the decrement operator --.\n=======================================");
    int num = 10, pre = 10, post = 10;
    printf("\nStarting value   : %i", num);

    printf("\nPredecrementing  : %i", --pre);

    printf("\nPostdecrementing : %i", post--);
    printf("\n\n");

    return 0;
}