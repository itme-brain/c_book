#include <stdio.h>

/*
    Page 34:
    Write a program `entab` that replaces strings of blanks by the minimum number of tabs and blanks to achieve the same spacing.
    Use the same tab stops as for `detab`. When either a tab or a single blank would suffice to reach a tab stop, which should be given preference.
*/

#define MAXLINE     1000
#define TAB         4

int entab();

int main()
{
    int c, i;
    char line[MAXLINE];

    i = 0;
    while((c = getchar()) != EOF) {
        if (c == ' ') {

        }
    }
    return 0;
}
