#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 5, d = 2, e = 4, f = 3;
    int result = 0;

    printf("The original expression is: (10 + 20) * 5 / 2 - 4 %% 3\n");

    // Step 1: Parentheses
    // The expression inside the parentheses is evaluated first due to highest precedence.
    printf("Step 1: Parentheses (10 + 20)\n");
    int step1_result = a + b;
    printf("Expression becomes: %d * 5 / 2 - 4 %% 3\n", step1_result);

    // Step 2: Multiplication and Division
    // '*' and '/' have the same precedence, so they are evaluated from left to right (associativity).
    printf("Step 2: Multiplication %d * 5\n", step1_result);
    int step2_result = step1_result * c;
    printf("Expression becomes: %d / 2 - 4 %% 3\n", step2_result);

    // Step 3: Division
    printf("Step 3: Division %d / 2\n", step2_result);
    int step3_result = step2_result / d;
    printf("Expression becomes: %d - 4 %% 3\n", step3_result);

    // Step 4: Modulo
    // '%' has the same precedence as '*' and '/', so it is also evaluated from left to right.
    printf("Step 4: Modulo 4 %% 3\n");
    int step4_result = e % f;
    printf("Expression becomes: %d - %d\n", step3_result, step4_result);

    // Step 5: Subtraction
    // '-' has the lowest precedence among the remaining operators.
    printf("Step 5: Subtraction %d - %d\n", step3_result, step4_result);
    result = step3_result - step4_result;

    printf("\nFinal Result: %d\n", result);

    return 0;
}