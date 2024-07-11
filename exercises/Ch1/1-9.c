#include <stdio.h>

/*
    Page 20:
    Write a program to copy its input to its output, replacing each of
    one or more blanks by a single blank
*/

int main()
{
    int c;
    int in_blank = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (!in_blank) {
                putchar(c);
                in_blank = 1;
            }
        } else {
            putchar(c);
            in_blank = 0;
        }
    }

    return 0;
}
