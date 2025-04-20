#include <stdio.h>

void printBits(unsigned);
unsigned packCharacters(char, char, char, char);
char unpackCharacters(unsigned, unsigned, unsigned);

int main(void) {
    printf("\nUnpacking Characters from an Integer\n========================\n");
    unsigned char c[4], c0, c1, c2, c3;
    unsigned num = 0, n0 = 0, n1 = 0, n2 = 0, n3 = 0;
    for (size_t i = 0; i < 4; i++) {
        printf("Enter Character %lu : ", i);
        scanf(" %1c", &c[i]);
        printf("c[%lu] = %c = ", i, c[i]);
        printBits(c[i]);
        printf("\n");
    }
    num = packCharacters(c[0], c[1], c[2], c[3]);
    printf("Characters Packed inside Integer : \n"), printBits(num);

    n0 = (num & 4278190080);
    n1 = (num & 16711680);
    n2 = (num & 65280);
    n3 = (num & 255);
    printf("\nn0 : "), printBits(n0);
    printf("\nn1 : "), printBits(n1);
    printf("\nn2 : "), printBits(n2);
    printf("\nn3 : "), printBits(n3);

    c0 = unpackCharacters(num, 4278190080, 3);
    c1 = unpackCharacters(num, 16711680, 2);
    c2 = unpackCharacters(num, 65280, 1);
    c3 = unpackCharacters(num, 255, 0);
    printf("\nCharacters Unpacked from Integer :");
    printf("\nCharacter 0 : "), printBits(c0);
    printf("\nCharacter 1 : "), printBits(c1);
    printf("\nCharacter 2 : "), printBits(c2);
    printf("\nCharacter 3 : "), printBits(c3);

    printf("\n\n");
    return 0;
}

void printBits(unsigned num) {
    unsigned mask = 2147483648;
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
unsigned packCharacters(char c0, char c1, char c2, char c3) {
    unsigned num = 0;
    num = c0;
    num <<= 8;
    num |= c1;
    num <<= 8;
    num |= c2;
    num <<= 8;
    num |= c3;
    return num;
}
char unpackCharacters(unsigned num, unsigned mask, unsigned pos) {
    unsigned temp = num;
    temp &= mask;
    temp >>= (8 * pos);
    return temp;
}