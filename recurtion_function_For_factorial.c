//recursive functions for factorial
#include <stdio.h>

// Function prototype
int factorial(int n);

int main() {
    int num;

    // Input from user
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check for negative input
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Call the recursive function to calculate factorial
        int result = factorial(num);

        // Display the result
        printf("Factorial of %d = %d\n", num, result);
    }

    return 0;
}

// Recursive function to calculate factorial
int factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0) {
        return 1;
    } else {
        // Recursive case: n! = n * (n-1)!
        return n * factorial(n - 1);
    }
}
