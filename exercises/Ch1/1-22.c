#include <stdio.h>

/*
    Page 34:
    Write a program to "fold" long input lines into two or more shorter lines after the last
    non-blank character that occurs before the n-th column of input. Make sure your program
    does something intelligent with very long lines, and if there are no blanks or tabs before
    the specified column.
*/

#define MAXLINE     1000
#define MAX_COLUMN  5

int c;
int i = 0;
char line[MAXLINE];

int main()
{
    int count = 0;
    while((c = getchar()) != EOF) {
        if (count >= MAX_COLUMN && (c != ' ' && c != '\t')) {
            line[i++] = '\n';
            count = 0;
        }

        line[i++] = c;

        if (c == '\t') {
            count += 4;
        } else {
            count ++;
        }
    }
    printf("%s", line);
}
