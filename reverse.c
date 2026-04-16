#include <stdio.h>
int main() {
    int  a, b, c, d, e, x, reverse, original;
    printf("Enter the value : ");
    scanf("%d", &x);
    a = (x/10000);
    b = (x/1000)%10;
    c = (x/100)%10;
    d = (x/10)%10;
    e = (x%10);

    printf("\nA: %d\nB: %d\nC: %d\nD: %d\nE: %d", a, b, c, d, e);
    original = a, b, c, d, e;
    printf("\nOriginal number: %d%d%d%d%d", a, b, c, d, e);
    reverse = e, d, c, b, a;
    printf("\nReverse number: %d%d%d%d%d", e, d, c, b, a);

    if(original == reverse)
    {
        printf("Base are equal");
    }
    else{
        printf("Unequal numbers");
    }
    return 0;
}