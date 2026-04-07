#include <stdio.h>

/*
    Modify the temperature conversion program to print a heading above the table.
*/

int main() {
    float fahr, celcius;
    float lower, upper, step;

    lower = 0.0;
    upper = 300.0;
    step = 20.0;

    fahr = lower;
    printf("FAHRENHEIT TO CELCIUS CONVERSION PROGRAMME\n");
    while (fahr <= upper) {
        celcius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0fF %6.1fC\n", fahr, celcius);
        fahr += step;
    }
    return 0;
}