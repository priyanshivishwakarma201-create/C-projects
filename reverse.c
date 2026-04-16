#include <stdio.h>

int main() {
    // Declare variables for digits and numbers
    int a, b, c, d, e, x, reverse, original;

    // Take input from user
    printf("Enter the value : ");
    scanf("%d", &x);

    // Extract digits from the number
    a = (x/10000);        // first digit
    b = (x/1000)%10;      // second digit
    c = (x/100)%10;       // third digit
    d = (x/10)%10;        // fourth digit
    e = (x%10);           // last digit

    // Print each digit
    printf("\nA: %d\nB: %d\nC: %d\nD: %d\nE: %d", a, b, c, d, e);

    // Store original number (NOTE: this line is logically incorrect)
    original = a, b, c, d, e;

    // Print original number using digits
    printf("\nOriginal number: %d%d%d%d%d", a, b, c, d, e);

    // Store reverse number (NOTE: this line is also incorrect)
    reverse = e, d, c, b, a;

    // Print reverse number
    printf("\nReverse number: %d%d%d%d%d", e, d, c, b, a);

    // Compare original and reverse
    if(original == reverse)
    {
        printf("Base are equal");   // if palindrome
    }
    else{
        printf("Unequal numbers");  // if not palindrome
    }

    return 0;
}
