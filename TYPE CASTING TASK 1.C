#include <stdio.h>

int main() {
    float float_num = 99.99;
    int int_num;
    float difference;

    // Explicit type casting to convert float to int
    // This operation truncates the decimal part.
    int_num = (int)float_num;

    // Calculate the difference
    difference = float_num - int_num;

    // Display the results
    printf("Original floating-point number: %.2f\n", float_num);
    printf("Converted integer: %d\n", int_num);
    printf("Difference (Original - Converted): %.2f\n", difference);

    return 0;
}
