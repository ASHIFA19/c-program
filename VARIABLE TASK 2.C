#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the first integer (a): ");
    scanf("%d", &a);
    printf("Enter the second integer (b): ");
    scanf("%d", &b);

    printf("\nBefore swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    a = a + b; // a now holds the sum of original a and b
    b = a - b; // b now holds the original value of a
    a = a - b; // a now holds the original value of b

    printf("\nAfter swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}