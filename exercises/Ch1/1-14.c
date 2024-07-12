#include <stdio.h>

/*
    Page 24:
    Write a program to print a histogram of the frequencies of
    different characters in its input.
*/

int main()
{
    int c, i;
    char characters[100];
    char char_memory[100];

    i = 0;

    while ((c = getchar()) != EOF) {
        characters[i] = c;
        i++;
    }

    int unique = 0;

    for (int x = 0; x < i; x++) {
        int seen = 0;
        int repeat = 0;
        char character = characters[x];

        for (int y = 0; y < unique; y++) {
            if (character == char_memory[y]) {
                repeat = 1;
                break;
            }
        }

        if (!repeat) {
            for (int y = 0; y < 100; y++) {
                if (character == characters[y]) {
                    ++seen;
                }
            }

            if (character == ' ') {
                printf("%-3s - ", "spc");
            } else if (character == '\t') {
                printf("%-3s - ", "\\t");
            } else if (character == '\n') {
                printf("%-3s - ", "\\n");
            } else if (character == '\0') {
                printf("%-3s - ", "\\0");
            } else if (character == EOF) {
                printf("%-3s - ", "EOF");
            } else {
                printf("%-3c - ", character);
            }

            printf("%-3d |", seen);
            for (int y = 0; y < seen; y++) {
                printf("*");
            }
            printf("\n");

            char_memory[unique] = character;
            unique++;
        }
    }

    return 0;
}
