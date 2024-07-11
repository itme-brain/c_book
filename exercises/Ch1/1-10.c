#include <stdio.h>

/*
    Page 20:
    Write a program to copy its iputs to its output, replacing each tab by \t, each backspace by \b
    and each backslash by \\. This makes tabs and backspaces visible in an unambiguous way.
*/

int main()
{
    int c;
    int in_blank = 0;

    while ((c = getchar()) != EOF) {
        switch (c) {
            case '\t':
                putchar('\\');
                putchar('t');
                break;
            case '\b':
                putchar('\\');
                putchar('b');
                break;
            case '\\':
                putchar('\\');
                putchar('\\');
                break;
            default:
                putchar(c);
                break;
        }
    }

    return 0;
}
