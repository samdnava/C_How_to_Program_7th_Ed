#include <stdio.h>

void printBits(unsigned int n);

int main(void) {
    unsigned int num = 0, direction = 0;
    char tempchar;

    printf("\nBitwise shift integer variable\n\nEnter an integer : ");
    scanf("%u", &num);
    scanf("%*c");
    printf("Shift <<l|r>> : ");
    scanf("%c", &tempchar);
    scanf("%*c");

    if (tempchar == 'l') {
        printf("Enter bitwise shift : ");
        scanf("%u", &direction);
        scanf("%*c");

        printBits(num);
        printBits(num << direction);
    }
    if (tempchar == 'r') {
        printf("Enter bitwise shift : ");
        scanf("%u", &direction);
        scanf("%*c");

        printBits(num);
        printBits(num >> direction);
    }
    return 0;
}

void printBits(unsigned int n) {
    unsigned int mask = 1 << 31;

    printf("%7u = ", n);

    for (size_t i = 1; i <= 32; i++) {
        // putchar( n & mask ? '1' : '0' );
        if (n & mask)
            putchar('1');
        else
            putchar('0');
        n <<= 1;
        if (i % 8 == 0)
            putchar(' ');
    }
    printf("\n");
}