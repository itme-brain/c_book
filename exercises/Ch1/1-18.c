#include <stdio.h>

/*
    Page 31:
    Write a program to remove trailing blanks and tabs from each line of input,
    and to delete entirely blank lines
*/

#define MAXLINE     1000
#define TRUE        1
#define FALSE       0

int check_blank(int s, int trailing);
int check_eol(int s);

int main()
{
    int c;
    int i = 0;
    int trailing = TRUE;
    char line[MAXLINE];

    while ((c = getchar()) != EOF) {
        trailing = check_blank(c, trailing);
        if (!trailing) {
            line[i] = c;
            i++;
            trailing = check_eol(c);
        }
    }

    line[i] = '\0';

    if (i > 0) {
        printf("%s", line);
    } else if (i <= 0) {
        printf("Empty input");
    }

    return 0;
}

int check_blank(int s, int trailing)
{
    if ((s == ' ' || s == '\t' || s == '\n') && trailing) {
        return TRUE;
    }
    return FALSE;
}

int check_eol(int s)
{
    if (s == '\n') {
        return TRUE;
    }
    return FALSE;
}
