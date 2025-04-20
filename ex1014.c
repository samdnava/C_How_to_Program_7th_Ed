#include <stdio.h>

void printBits(unsigned);
void reverseBits(unsigned);

int main(void) {
    printf("\nReversing the order of an integer's bits\n======================");

    unsigned num = 0;
    printf("\nEnter Integer : ");
    scanf("%u", &num);
    printf("Integer bits  : ");
    printBits(num), printf("\n");
    printf("Reversed bits : ");
    reverseBits(num), printf("\n");

    printf("\n");
    return 0;
}

void printBits(unsigned num) {
    unsigned mask = 1 << 31;
    for (size_t i = 1; i <= 32; i++) {
        if (num & mask)
            printf("1");
        else
            printf("0");
        num <<= 1;
        if (!(i % 8))
            printf(" ");
    }
}

void reverseBits(unsigned num) {
    unsigned mask = 1;
    for (size_t i = 1; i <= 32; i++) {
        if (num & mask)
            printf("1");
        else
            printf("0");
        num >>= 1;
        if (!(i % 8))
            printf(" ");
    }
}