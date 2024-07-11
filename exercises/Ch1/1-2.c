#include <stdio.h>

/*
    Page 8:
    Experiment to find out what happens when printf's argument string contains \c
    where c is some character not listed above
*/

int main()
{
    printf("Hello, World!\c");
}
