#include <stdio.h>

/*
    Page 34:
    Write a program `entab` that replaces strings of blanks by the minimum var of tabs and blanks to achieve the same spacing.
    Use the same tab stops as for `detab`. When either a tab or a single blank would suffice to reach a tab stop, which should be given preference.
*/

#define MAXLINE     1000
#define TAB         4

int main()
{
    char line[MAXLINE];

    int c;
    int counter = 0;
    int i = 0;

    while((c = getchar()) != EOF) {
        line[i++] = c;

        if (c == ' ') {
            counter++;
        } else {
            counter = 0;
        }

        if (counter == TAB) {
            i -= TAB;
            line[i++] = '\t';
            counter = 0;
        }

        if (c == '\n') {
            line[i] = '\0';
            printf("%s", line);
            counter = 0;
            i = 0;
        }
    }
    return 0;
}
