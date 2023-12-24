//2D array to function
#include <stdio.h>

// Function to transpose a 2D array
void transpose(int rows, int cols, int matrix[rows][cols], int result[cols][rows]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[j][i] = matrix[i][j];
        }
    }
}

// Function to display a 2D array
void displayMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Example 2D array
    int rows = 3;
    int cols = 4;
    int myMatrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Display the original matrix
    printf("Original Matrix:\n");
    displayMatrix(rows, cols, myMatrix);

    // Transpose the matrix
    int transposedMatrix[cols][rows];
    transpose(rows, cols, myMatrix, transposedMatrix);

    // Display the transposed matrix
    printf("\nTransposed Matrix:\n");
    displayMatrix(cols, rows, transposedMatrix);

    return 0;
}
