#include <stdio.h>

int main() {
    // Declare variables
    int a, b, c, d, e, x, reverse, original;

    // Take input from user
    printf("Enter the value: ");
    scanf("%d", &x);

    // Store original number
    original = x;

    // Extract digits from the number
    a = x / 10000;        // first digit
    b = (x / 1000) % 10;  // second digit
    c = (x / 100) % 10;   // third digit
    d = (x / 10) % 10;    // fourth digit
    e = x % 10;           // last digit

    // Print each digit
    printf("\nA: %d\nB: %d\nC: %d\nD: %d\nE: %d", a, b, c, d, e);

    // Reconstruct original number (for display purpose)
    printf("\nOriginal number: %d%d%d%d%d", a, b, c, d, e);

    // Create reverse number using digits
    reverse = e*10000 + d*1000 + c*100 + b*10 + a;

    // Print reverse number
    printf("\nReverse number: %d", reverse);

    // Check if number is palindrome
    if(original == reverse)
    {
        printf("\nNumbers are equal (Palindrome)");
    }
    else
    {
        printf("\nNumbers are not equal");
    }

    return 0;
}
