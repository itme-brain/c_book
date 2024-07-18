#include <stdio.h>

/*
    Page 31:
    Write a function `reverse(s)` that reverses the character string s.
    Use it to write a program that reverses its input a line at a time.
*/

#define MAXLINE 1000

void reverse(char s[], int length);

int main()
{
    int c;
    int i = 0;
    char line[MAXLINE];

    while ((c = getchar()) != EOF) {
        line[i] = c;
        i++;
        if (c == '\n') {
            line[i] = '\0';
            reverse(line, i);
            printf("%s\n", line);
            i = 0;
        }
    }
    return 0;
}

void reverse(char s[], int length)
{
    int start = 0;
    int end = length - 1;
    char temp;

    while (start < end) {
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}
