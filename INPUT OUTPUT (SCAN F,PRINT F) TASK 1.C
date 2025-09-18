#include <stdio.h> // Include the standard input-output header file for printf and scanf

int main() {
    // Declare variables
    char name[50];
    int age;
    float marks;

    // Prompt the user for input and store it using scanf
    printf("Enter your name: ");
    // Use a scanset to read the full line, including spaces, until a newline is encountered.
    // The *c is used to consume the leftover newline character from the input buffer.
    scanf("%[^\n]%*c", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your marks: ");
    scanf("%f", &marks);

    // Print the collected information in a formatted way
    printf("\n--- Student Information ---\n");
    printf("Name:  %s\n", name);
    printf("Age:   %d\n", age);
    // Use %.2f to format the marks to two decimal places.
    printf("Marks: %.2f\n", marks);

    return 0;
}