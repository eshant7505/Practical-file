//ponter arithmetic
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    // a. Increment a pointer
    printf("a. Incrementing a pointer:\n");
    printf("Original value: %d\n", *ptr);
    ptr++;
    printf("After increment: %d\n\n", *ptr);

    // Reset pointer to the beginning of the array
    ptr = arr;

    // b. Decrement a pointer
    printf("b. Decrementing a pointer:\n");
    printf("Original value: %d\n", *ptr);
    ptr--;
    printf("After decrement: %d\n\n", *ptr);

    // Reset pointer to the beginning of the array
    ptr = arr;

    // c. Add an integer to a pointer
    printf("c. Adding an integer to a pointer:\n");
    printf("Original value: %d\n", *ptr);
    ptr = ptr + 2; // Add 2 to the pointer
    printf("After adding 2: %d\n\n", *ptr);

    // Reset pointer to the beginning of the array
    ptr = arr;

    // d. Subtract an integer from a pointer
    printf("d. Subtracting an integer from a pointer:\n");
    printf("Original value: %d\n", *ptr);
    ptr = ptr - 2; // Subtract 2 from the pointer
    printf("After subtracting 2: %d\n\n", *ptr);

    // Reset pointer to the beginning of the array
    ptr = arr;

    // e. Subtract two pointers of the same type
    int *ptr2 = &arr[3]; // Another pointer pointing to the 4th element
    printf("e. Subtracting two pointers of the same type:\n");
    printf("Pointer 1 value: %p\n", (void *)ptr);
    printf("Pointer 2 value: %p\n", (void *)ptr2);
    printf("Result of subtraction: %ld\n", ptr2 - ptr);

    return 0;
}
