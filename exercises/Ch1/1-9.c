#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF) {
        switch (c) {
            case (' '): {
                c = '\b';
            }
        }
    }

    printf("%d", c);
    return 0;
}
