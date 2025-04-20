#include <stdio.h>

union integer {
    char c;
    short s;
    int i;
    long b;
};

int main(void) {

    union integer uInteger;

    char c = ' ';
    short s = 0;
    int i = 0;
    long b = 0;

    c = uInteger.c;
    s = uInteger.s;
    i = uInteger.i;
    b = uInteger.b;

    printf("\nINITIAL VALUES\nChar uInteger.c : %c\nShort uInteger.s : %hi\nInt uInteger.i : %i\nLong uInteger.b : %li\n\n", uInteger.c, uInteger.s, uInteger.i, uInteger.b);

    printf("\nINITIAL VALUES\nChar c : %c\nShort s : %hi\nInt i : %i\nLong b : %li\n\n", c, s, i, b);

    printf("\nChar c : %c\n", c);
    printf("Char uInteger.c : %c\n", uInteger.c);
    printf("\nEnter  uInteger.c : ");
    scanf("%c", &uInteger.c);
    printf("\nChar c : %c\n", c);
    printf("Char uInteger.c : %c\n", uInteger.c);
    c = uInteger.c;
    printf("c = uInteger.c : %c\n=================================", c);

    printf("\nShort s : %hi\n", s);
    printf("Short uInteger.s : %hi\n", uInteger.s);
    printf("\nEnter  uInteger.s : ");
    scanf("%hi", &uInteger.s);
    printf("\nShort s : %hi\n", s);
    printf("Short uInteger.s : %hi\n", uInteger.s);
    s = uInteger.s;
    printf("s = uInteger.s : %hi\n=================================", s);

    printf("\nInt i : %i\n", i);
    printf("Int uInteger.i : %i\n", uInteger.i);
    printf("\nEnter  uInteger.i : ");
    scanf("%i", &uInteger.i);
    printf("\nInt i : %i\n", i);
    printf("Int uInteger.i : %i\n", uInteger.i);
    i = uInteger.i;
    printf("i = uInteger.i : %i\n=================================", i);

    printf("\nLong b : %li\n", b);
    printf("Long uInteger.b : %li\n", uInteger.b);
    printf("\nEnter  uInteger.b : ");
    scanf("%li", &uInteger.b);
    printf("\nLong b : %li\n", b);
    printf("Long uInteger.b : %li\n", uInteger.b);
    b = uInteger.b;
    printf("b = uInteger.b : %li\n=================================", b);

    printf("\nFINAL VALUES\nChar uInteger.c : %c\nShort uInteger.s : %hi\nInt uInteger.i : %i\nLong uInteger.b : %li\n\n", uInteger.c, uInteger.s, uInteger.i, uInteger.b);

    printf("\nFINAL VALUES\nChar c : %c\nShort s : %hi\nInt i : %i\nLong b : %li\n\n", c, s, i, b);

    return 0;
}