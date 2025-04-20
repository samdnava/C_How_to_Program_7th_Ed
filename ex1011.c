#include <stdio.h>

int power2(int num, int pow);
void printBits(int num);

int main(void) {

    int number = 0, power = 0;

    printf("\nFunction that takes two integer arguments\nnumber and pow and calculates number * 2^pow\n============================\n");

    printf("\nEnter number : ");
    scanf("%u", &number);
    printf("Enter power : ");
    scanf("%i", &power);

    printBits(power2(number, power));

    return 0;
}

int power2(int num, int pow) {
    if (pow > 1)
        return num << pow;
    if (pow < 1)
        return num >> -pow;
    else
        return num;
}
void printBits(int num) {
    printf("\n");

    unsigned mask = 1 << 31;

    printf("%u = ", num);

    for (size_t i = 1; i <= 32; i++) {
        if (num & mask)
            printf("1");
        else
            printf("0");
        num <<= 1;
        if (!(i % 8))
            printf(" ");
    }
    printf("\n\n");
}