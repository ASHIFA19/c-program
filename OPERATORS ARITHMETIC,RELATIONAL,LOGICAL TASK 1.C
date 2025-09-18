#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product, remainder;
    float division;

    // Prompt the user to enter two integers
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Perform arithmetic operations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    
    // Check for division by zero before performing division and modulus
    if (num2 != 0) {
        division = (float)num1 / num2; // Type-cast to float for decimal result
        remainder = num1 % num2;
    } else {
        printf("\nError: Cannot divide or find the remainder with zero.\n");
        return 1; // Exit with an error code
    }
    
    // Display the results in a formatted way
    printf("\nResults:\n");
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Division: %.2f\n", division);
    printf("Remainder: %d\n", remainder);

    return 0; // Exit successfully
}