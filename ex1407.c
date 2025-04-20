// 14.7 (Command-Line  Arguments)  Write  a  program  that  takes  two  command-line  arguments that are file names,
// reads the characters from the first file one at a time and writes the characters in reverse order to the second file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
    if (argc != 3)
        fprintf(stderr, "\nUsage: ./ex1407.out inFile.txt outFile.txt\n"), exit(1);
    FILE *finp, *foutp;
    if ((finp = fopen(argv[1], "r")) == NULL)
        fprintf(stderr, "\nError: Could not open file %s for reading.\n", argv[1]), exit(1);
    if ((foutp = fopen(argv[2], "w")) == NULL)
        fprintf(stderr, "\nError: Could not open file %s for writing.\n", argv[2]), exit(1);
    int count = 0;
    char tempChar;
    char *array = NULL, *tempArray = NULL;

    while (((tempChar = fgetc(finp)) != EOF)) {
        tempArray = realloc(array, sizeof(char) * (count + 1));
        if (tempArray == NULL)
            fprintf(stderr, "\nError: Could not reallocate array.\n"), exit(1);
        array = tempArray;
        array[count] = tempChar;
        fputc(array[count], foutp);
        count++;
    }
    fprintf(foutp,"%s","\n===========================================\nReverse\n===========================================\n");
    while (--count >= 0)
        fputc(array[count], foutp);

    if (fclose(finp) == EOF)
        fprintf(stderr, "\nError in closing input file %s.\n", argv[1]), exit(1);
    if (fclose(foutp) == EOF)
        fprintf(stderr, "\nError in closing input file %s.\n", argv[2]), exit(1);
    return 0;
}