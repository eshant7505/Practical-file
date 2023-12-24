#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Custom comparator function for sorting
int compare(const void *a, const void *b) {
    char ab[20], ba[20];
    // Convert integers to strings and concatenate
    sprintf(ab, "%d%d", *(const int*)a, *(const int*)b);
    sprintf(ba, "%d%d", *(const int*)b, *(const int*)a);
    // Compare the concatenated strings
    return strcmp(ba, ab);
}

// Function to print the largest integer
void printLargestInteger(int arr[], int n) {
    // Sort the array using the custom comparator
    qsort(arr, n, sizeof(arr[0]), compare);

    // Print the sorted array to get the largest integer
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    // Get the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Get the elements of the array
    printf("Enter %d distinct integers between 0 and 10000:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function to print the largest integer
    printf("The largest integer that can be made is: ");
    printLargestInteger(arr, n);

    return 0;
}
