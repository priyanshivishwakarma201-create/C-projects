#include <stdio.h>

int main() {
    // Declare variables
    int a, b, c, d, x, s;

    // Take a 4-digit number as input
    printf("Enter a 4 digits value: ");
    scanf("%d", &x);

    // Extract digits one by one
    a = x / 1000;        // First digit (thousands place)
    b = (x / 100) % 10; // Second digit (hundreds place)
    c = (x / 10) % 10;  // Third digit (tens place)
    d = x % 10;         // Last digit (ones place)

    // Display each digit
    printf("\nA: %d \nB: %d\nC: %d\nD: %d", a, b, c, d);

    // Calculate sum of all digits
    s = a + b + c + d;

    // Display sum
    printf("\n sum of all digits: %d", s);

    return 0; // End of program
}
