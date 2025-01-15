#include <stdio.h>

int main() {
    int n;
    int product = 1; // Initialize the product variable to 1

    printf("Enter the number to calculate the factorial: ");
    scanf("%d", &n);

    // Check for non-negative input
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    // Calculate factorial
    for (int i = 1; i <= n; i++) {
        product *= i; // Multiply product by the current value of i
    }

    printf("The factorial of %d is: %d\n", n, product);
    return 0;
}
