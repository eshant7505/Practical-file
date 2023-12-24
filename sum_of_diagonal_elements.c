//sum of diagonal elements in a matrix 
#include <stdio.h>

#define MAX_SIZE 100

// Function to calculate the sum of diagonal elements
int diagonalSum(int mat[MAX_SIZE][MAX_SIZE], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += mat[i][i];  // Summing the elements on the main diagonal
    }
    return sum;
}

int main() {
    int size;

    // Input the size of the square matrix
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    // Check if the size is within the allowed limit
    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid matrix size\n");
        return 1;  // Exit the program with an error code
    }

    int matrix[MAX_SIZE][MAX_SIZE];

    // Input the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of diagonal elements using the function
    int sum = diagonalSum(matrix, size);

    // Display the result
    printf("Sum of diagonal elements: %d\n", sum);

    return 0;  // Exit the program with success code
}
