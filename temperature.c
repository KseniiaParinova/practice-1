#include <stdio.h>

int main(void) {
    int cels, farin;

    printf("Enter temperature in Celsius: ");
    scanf("%d", &cels);

    farin = cels * 1.8 + 32;

    printf("Temperature in Fahrenheit: %d\n", farin);

    return 0;
}  