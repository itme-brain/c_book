#include <stdio.h>

/*
    Page 27:
    Rewrite the temperature conversion program of Section 1.2 to use a function for conversion
*/

int convert(int celsius)
{
    return (celsius * 1.8) + 32;
}

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
        fahr = convert(celsius);
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}
