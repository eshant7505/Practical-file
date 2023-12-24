//Fabonacci series
#include <stdio.h>

// Function to calculate Fibonacci series using recursion
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    // Input the number of terms
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);

    // Print Fibonacci series
    printf("Fibonacci series up to %d terms: ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
