//dynamic memory allocation for 1D array
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));


    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;  // Exit the program with an error code
    }

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Elements of the array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}
