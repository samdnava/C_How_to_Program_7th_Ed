#include <stdio.h>

#define PRINT(s) printf("%s", s);

int main(void) {
    printf("\nProgram that defines a macro PRINT to print a string value.\n");

    char string[69] = "";
    fgets(string, 69, stdin);
    printf("\nString = ");
    PRINT(string);
    printf("\n\n");
    return 0;
}