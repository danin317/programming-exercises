#include <stdio.h>

/*
    Write a program to print the corresponding Celcius to Fahrenheit table.
*/

int main() {
    float celcius = 0.0, fahrenheit = 0.0;
    float upper = 300.0, step = 20;

    printf("CELCIUS TO FAHRENHEIT CONVERSION PROGRAMME\n");
    while (celcius <= upper) {
        fahrenheit = (celcius * (5.0 / 9.0)) + 32.0;
        printf("%3.0fC %6.2fF\n", celcius, fahrenheit);
        celcius += step;
    }
    return 0;
}