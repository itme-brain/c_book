#include <stdio.h>

/*
    Page 13:
    Write a program to print the corresponding Celsius to Farenheit.
*/

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("Celsius -> Fahrenheit\n");
    printf("---------------------\n");
    while (celsius <= upper) {
        fahr = (celsius * 1.8) + 32;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}
