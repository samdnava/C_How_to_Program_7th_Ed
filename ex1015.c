#include <stdio.h>

void portDisplayBits(unsigned);

int main(void) {
    printf("\nPortable DisplayBits Functions\nWorks with both 2 and 4 byte ints\n===================================");

    unsigned int num = 0;
    unsigned short shortNum = 0;
    printf("\nEnter integer : ");
    scanf("%u", &num), shortNum = num;
    printf("2 byte Integer : %u\n", shortNum);
    portDisplayBits(shortNum);
    printf("\n4 byte Integer : %u\n", num);
    portDisplayBits(num);

    printf("\n");
    return 0;
}

void portDisplayBits(unsigned num) {
    unsigned mask = 1;
    if (num < 65535) {
        mask <<= 15;
        for (size_t i = 1; i <= 16; i++) {
            if (num & mask)
                printf("1");
            else
                printf("0");
            num <<= 1;
            if (!(i % 8))
                printf(" ");
        }
    }
    else {
        mask <<= 31;
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
}
