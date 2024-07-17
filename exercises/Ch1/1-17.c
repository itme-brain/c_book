#include <stdio.h>

/*
    Page 31:
    Write a program to print all input lines that are longer
    than 80 characters
*/

#define EIGHTY 1000

int main()
{
    int c;
    int len = 0;
    char eighty_plus[EIGHTY];

    while ((c = getchar()) != EOF) {
        eighty_plus[len] = c;
        len++;
        if (c == '\n' && len >= 80) {
            printf("Sentence: %s", eighty_plus);
            printf("Length: %d\n", len);
            len = 0;
        }
    }
}
