#include <stdio.h>

// Define a symbolic constant for Pi
#define PI 3.14159

int main() {
    float radius, area;

    // Prompt the user for input
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area using the constant PI
    area = PI * radius * radius;

    // Display the result
    printf("The area of the circle is: %.2f\n", area);

    return 0;
}