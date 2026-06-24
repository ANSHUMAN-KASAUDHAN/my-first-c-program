//Task 1.2 Wap in c to find max number from two numbers using ternary operator.
#include <stdio.h>

int main() {
    int a, b, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;

    printf("Maximum number = %d\n", max);

    return 0;
}
