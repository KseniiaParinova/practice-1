#include <stdio.h>

int main(void) {
    int a, b, proiz;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    proiz = a * b;

    printf("Product: %d * %d = %d\n", a, b, proiz);

    return 0;
}  