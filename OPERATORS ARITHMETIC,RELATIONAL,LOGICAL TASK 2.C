#include <stdio.h>

int main() {
    int age;

    // Prompt the user to enter their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Use a relational operator (>=) to check the voting eligibility
    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}