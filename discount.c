#include <stdio.h>

int main() {
    int q, p;                  // q = quantity, p = price per item
    float total, discount = 0; // total amount and discount

    // Take quantity input
    printf("Enter quantity: ");
    scanf("%d", &q);

    // Take price input
    printf("Enter price: ");
    scanf("%d", &p);

    // Calculate total cost
    total = q * p;

    // Check if discount is applicable
    if(q > 1000)
    {
        discount = total * 0.10;   // calculate 10% discount
        total = total - discount;  // subtract discount from total
        printf("Discount is applied\n");
    }
    else
    {
        printf("Discount is not applicable\n");
    }

    // Display final total amount
    printf("Total amount: %.2f", total);

    return 0;
}
