#include <stdio.h>

/*
    Page 34:
    Write a program `detab` that replaces tabs in the input with the proper number of blanks to space to the next tab stop.
    Assume a fixed set of tab stops, say every `n` columns. Should `n` be a variable or a symbolic parameter?
*/

#define MAXLINE     1000
#define TAB         4

int detab();

int main()
{
    int c, i;
    char line[MAXLINE];

    i = 0;
    while((c = getchar()) != EOF) {
        if (c == '\t') {
            for (int j = 0; j < TAB; j++) {
                line[i++] = ' ';
            }
        } else {
            line[i++] = c;
        }

        if (c == '\n') {
            line[i] = '\0';
            printf("%s", line);
            i = 0;
        }
    }
    return 0;
}
