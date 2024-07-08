#include <stdio.h>

int main()
{
    int c, in_word;
    in_word = 0;

    while ((c = getchar()) != EOF) {
        if ((c == ' ' || c == '\t' || c == '\n')) {
            if (in_word) {
                putchar('\n');
            };
            in_word = 0;
        } else {
            in_word = 1;
            putchar(c);
        }
    }

    return 0;
}
