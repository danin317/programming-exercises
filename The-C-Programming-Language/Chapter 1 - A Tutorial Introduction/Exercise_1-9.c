#include <stdio.h>

/*
    Write a program to copy its input to its output, replacing each string of
    one or more blanks by a single blank.
*/

int main() {
    int c, last_char = 0;

    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            putchar(c);
        } else {
            if (last_char != ' ') {
                putchar(c);
            }
        }

        last_char = c;
    }
    return 0;
}