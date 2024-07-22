#include <stdio.h>

/*
    Page 34:
    Write a program to "fold" long input lines into two or more shorter lines after the last
    non-blank character that occurs before the n-th column of input. Make sure your program
    does something intelligent with very long lines, and if there are no blanks or tabs before
    the specified column.
*/

#define MAXLINE 1000
#define COLUMN  20

int c;
int i = 0;
int j = 0;
char line[MAXLINE];

int main()
{
    while((c = getchar()) != EOF) {
        line[i++] = c;
        if ((line[i-1] != ' ' && line[i-1] != '\t') && (i%COLUMN)) {
        }
    }
}
