#include <stdio.h>

int main() {
    // Declare and initialize a constant integer
    const int MAX_VALUE = 100;
    
    printf("Initial MAX_VALUE: %d\n", MAX_VALUE);
    
    // Attempt to change the value of MAX_VALUE (this will cause a compilation error)
    // MAX_VALUE = 200; // Uncommenting this line will cause an error
    
    printf("Attempting to reassign MAX_VALUE...\n");
    
    printf("Final MAX_VALUE (unchanged): %d\n", MAX_VALUE);

    return 0;
}