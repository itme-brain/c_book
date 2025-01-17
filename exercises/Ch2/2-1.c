#include <math.h>
#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>
#include <sys/types.h>

int main()
{
    unsigned int i = (unsigned int)(pow(2, 8*sizeof(unsigned int)-1));
    printf("Unsigned Int max value: %d", i);

    i = (int)pow(2, 8*sizeof(unsigned int));
    return EXIT_SUCCESS;
}
