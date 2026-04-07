#include <stdio.h>

/*
    Experiment to find out what happens when print's argument string contains \c, where c is some
    character not listed above.
*/

int main() {
    // compiler throws a warning that it's not a known escape sequence (it doesn't exist)
    printf("Hello, World!\c"); // my compiler even marks it red! :D
    return 0;
}