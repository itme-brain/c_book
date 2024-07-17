#include <stdio.h>

/*
    Page 30:
    Revise the main routine of the longest-line program so it will correctly
    print the length of arbitrarily long input lines, and as much as possible
    of the text
*/

#define MAXLINE 1000

int _getline(char line[]);
void copy(char to[], char from[]);

int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = _getline(line)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) {
        printf("%s", longest);
    }
}

int _getline(char s[])
{
    int c, i;

    for (i=0; (c=getchar()) != EOF && c != '\n'; i++) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}
