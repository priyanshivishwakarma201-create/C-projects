#include <stdio.h>

int main() {
    int q, p;
    float total, discount = 0;

    printf("Enter quantity: ");
    scanf("%d", &q);

    printf("Enter price: ");
    scanf("%d", &p);

    total = q * p;

    if(q > 1000)
    {
        discount = total * 0.10;   
        total = total - discount;  
        printf("Discount is applied\n");
    }
    else
    {
        printf("Discount is not applicable\n");
    }

    
    printf("Total amount: %.2f", total);

    return 0;
}