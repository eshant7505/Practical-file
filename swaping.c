//swap two numbers using pointers
#include <stdio.h>

// Function to swap values using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    // Input values
    printf("Enter value for num1: ");
    scanf("%d", &num1);
    printf("Enter value for num2: ");
    scanf("%d", &num2);

    // Displaying values before swapping
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Calling the swap function
    swap(&num1, &num2);

    // Displaying values after swapping
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
