#include <stdio.h>   // Header file for input and output functions

int main() {

    int a, b;   // Declare two integer variables

    // Ask user to enter two values
    printf("Enter two values: ");

    // Take input from user and store in variables a and b
    scanf("%d%d", &a, &b);

    // Check if a is less than b
    if(a < b) {
        // If condition is true, print that a is smaller
        printf("%d is less than %d", a, b);
    }
    else {
        // If condition is false, print that b is smaller
        printf("%d is less than %d", b, a);
    }

    return 0;   // End of program
}
