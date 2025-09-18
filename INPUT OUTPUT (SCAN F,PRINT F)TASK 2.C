#include <stdio.h>

int main() {
    float num1, num2;
    float sum, difference, product;

    // Prompt user for the first floating-point number
    printf("Enter the first floating-point number: ");
    scanf("%f", &num1); // Reads input and stores it in num1

    // Prompt user for the second floating-point number
    printf("Enter the second floating-point number: ");
    scanf("%f", &num2); // Reads input and stores it in num2

    // Perform the calculations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // Print the results in a formatted way
    printf("\nResults:\n");
    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", difference);
    printf("Product: %.2f\n", product);

    return 0;
}