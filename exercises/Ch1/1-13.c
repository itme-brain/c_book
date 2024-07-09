#include <stdio.h>

int main()
{
    int c, in_word, word_length;

    in_word = 0;
    word_length = 0;

    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\t' && c != '\n') {
            in_word = 1;
            word_length = 1;
        }

        while (in_word) {
            char word[100];
            int idx = 0;
            word[idx] = c;
            word_length++;

            if (c == ' ' || c == '\t' || c == '\n' || c == '\0') {
                in_word = 0;
                printf('Word: %s |  Word Length: %d', word, word_length);
            }
        }
    }

    return 0;
}
