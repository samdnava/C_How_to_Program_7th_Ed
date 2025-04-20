// 2.29 (Integer Value of a Character)
// Write a C program that prints the integer equivalents of some uppercase letters, lowercase letters, digits  and  special  symbols.
// A B C a b c 0 1 2 $ * + /  and the blank character.

#include <stdio.h>

int main(void) {

    printf("\nC program that prints the integer equivalents of some uppercase letters, lowercase letters, digits  and  special  symbols.");
    printf("\n  'A'   : %d", 'A');
    printf("\n  'B'   : %d", 'B');
    printf("\n  'C'   : %d", 'C');
    printf("\n  'a'   : %d", 'a');
    printf("\n  'b'   : %d", 'b');
    printf("\n  'c'   : %d", 'c');
    printf("\n  '0'   : %d", '0');
    printf("\n  '1'   : %d", '1');
    printf("\n  '2'   : %d", '2');
    printf("\n  '$'   : %d", '$');
    printf("\n  '*'   : %d", '*');
    printf("\n  '+'   : %d", '+');
    printf("\n  '/'   : %d", '/');
    printf("\n[space] : %d", ' ');
    printf("\n\n");

    return 0;
}