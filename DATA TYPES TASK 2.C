#include <stdio.h>

int main() {
    printf("Size of a char: %zu byte\n", sizeof(char));//FORMAT SPECIFIER FOR PRINTING
    printf("Size of an int: %zu bytes\n", sizeof(int));
    printf("Size of a float: %zu bytes\n", sizeof(float));
    printf("Size of a double: %zu bytes\n", sizeof(double));

    return 0;
}