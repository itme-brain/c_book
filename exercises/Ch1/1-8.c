#include <stdio.h>

int main()
{
    int blanks, tabs, newlines;
    int c;

    blanks = 0;
    tabs = 0;
    newlines = 0;

    while ((c = getchar()) != EOF) {
        switch (c) {
            case ('\n'): {
               ++newlines;
            }
            case ('\t'): {
                ++tabs;
            }
            case (' '): {
                ++ blanks;
            }
        }
    }

    printf("%d newlines, %d tabs, %d blanks\n", newlines, tabs, blanks);
    return 0;
}
