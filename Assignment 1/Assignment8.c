// WAP in C to calculate simple interest.
#include <stdio.h>
int main() {
    float p = 1000, r = 5, t = 2;
    float si = (p * r * t) / 100;
    printf("Simple Interest = %.2f", si);
    return 0;
}