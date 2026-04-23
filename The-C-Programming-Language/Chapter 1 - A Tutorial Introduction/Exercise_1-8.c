#include <stdio.h>

/*
    Write a program to count blanks, tabs, and newlines.
*/

int main() {
    int c;
    int b_counter = 0, t_counter = 0, n_counter = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') ++n_counter;
        if (c == '\t') ++t_counter;
        if (c == ' ')  ++b_counter;
    }

    printf("Amount of entered blanks: %d\n", b_counter);
    printf("Amount of entered tabs: %d\n", t_counter);
    printf("Amount of entered newlines: %d\n", n_counter);
    return 0;
}