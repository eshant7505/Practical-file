// matrix addition
#include <stdio.h>

#define ROWS 3
#define COLS 3

// Function to add two matrices
void addMatrices(int mat1[ROWS][COLS], int mat2[ROWS][COLS], int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[ROWS][COLS] = {{1, 2, 3},
                               {4, 5, 6},
                               {7, 8, 9}};

    int matrix2[ROWS][COLS] = {{9, 8, 7},
                               {6, 5, 4},
                               {3, 2, 1}};

    int resultMatrix[ROWS][COLS];

    // Adding matrices
    addMatrices(matrix1, matrix2, resultMatrix);

    // Displaying matrices
    printf("Matrix 1:\n");
    displayMatrix(matrix1);

    printf("\nMatrix 2:\n");
    displayMatrix(matrix2);

    printf("\nResultant Matrix (Sum):\n");
    displayMatrix(resultMatrix);

    return 0;
}
