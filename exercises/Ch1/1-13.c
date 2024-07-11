#include <stdio.h>

int main()
{
    int c, in_word, word_length;
    char word[100];

    in_word = 0;
    word_length = 0;

    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\t' && c != '\n' && c != '\0') {
            if (!in_word) {
                in_word = 1;
                word_length = 0;
            }
            word[word_length] = c;
            word_length++;
        } else if (c == ' ' || c == '\t' || c == '\n' || c == '\0' && in_word) {
            in_word = 0;
            word[word_length] = '\0';
            printf("%-7d |", word_length);
            for (int i = 0; i < word_length; i++) {
                printf("*");
            }
            printf("\n");

            for (int i = 0; i < word_length; i++) {
                word[i] = '\0';
            }
        }
    }
    return 0;
}
