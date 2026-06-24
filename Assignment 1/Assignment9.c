// WAP in C to convert temperature in Celsius from Fahrenheit.
#include <stdio.h>
int main() {
    float f = 98.6;
    float c = (f - 32) * 5 / 9;
    printf("%.2f F = %.2f C", f, c);
    return 0;
}