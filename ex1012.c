#include <stdio.h>

void printBits(int);
int packCharacters(char, char, char, char);

int main(void) {

    printf("\nPack Characters into an Integer\n======================\n");

    char c1, c2, c3, c4;

    printf("\nCharacter 1 : ");
    scanf(" %c", &c1);
    printBits(c1);
    printf("\nCharacter 2 : ");
    scanf(" %c", &c2);
    printBits(c2);
    printf("\nCharacter 3 : ");
    scanf(" %c", &c3);
    printBits(c3);
    printf("\nCharacter 4 : ");
    scanf(" %c", &c4);
    printBits(c4);

    printf("\nPacked Characters inside Integer :");
    printBits(packCharacters(c1, c2, c3, c4));
    printf("\n");

    return 0;
}

void printBits(int num) {
    unsigned int mask = 1 << 31;
    printf("\n");
    for (size_t i = 1; i <= 32; i++) {
        if (num & mask)
            printf("1");
        else
            printf("0");
        num <<= 1;
        if (!(i % 8))
            printf(" ");
    }
    printf("\n");
}
int packCharacters(char c1, char c2, char c3, char c4) {
    unsigned int i = 0;

    i = c1;
    i <<= 8;
    i |= c2;
    i <<= 8;
    i |= c3;
    i <<= 8;
    i |= c4;

    return i;
}
