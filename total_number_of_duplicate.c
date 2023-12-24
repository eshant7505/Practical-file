#include <stdio.h>

void findDuplicates(int arr[], int size) {
    int count;
    printf("Duplicate elements and their indices:\n");

    for (int i = 0; i < size; i++) {
        count = 1;

        // Check for duplicates
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;

                // To avoid printing duplicate indices for the same element
                arr[j] = -1;
            }
        }

        // Print if duplicate found
        if (count > 1 && arr[i] != -1) {
            printf("Element %d at index %d has %d duplicates\n", arr[i], i, count);
        }
    }
}

int main() {
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input the array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and display duplicates
    findDuplicates(arr, size);

    return 0;
}
