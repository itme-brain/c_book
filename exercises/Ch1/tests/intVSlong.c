#include <stdio.h>

int main()
{
    printf("int is %zu bytes long and %zu bits long\n", sizeof(int), sizeof(int) * 8);
    printf("long is %zu bytes long and %zu bits long\n", sizeof(long), sizeof(long) * 8);
    return 0;
}
