#include <stdio.h>

int main() {
    // Declare and initialize two integer variables
    int numerator = 17;
    int denominator = 5;

    // Declare a float variable to store the result
    float result;

    // Perform explicit type casting
    // By casting one of the integers to a float,
    // we force the division to be a floating-point operation.
    result = (float)numerator / denominator;

    // Print the result to the console with two decimal places
    printf("The result of %d divided by %d is: %.2f\n", numerator, denominator, result);

    return 0;
}