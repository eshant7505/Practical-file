#include <stdio.h>

void printUpperTriangle(int matrix[][100], int rows, int cols) {
    if (rows != cols) {
        printf("Error: The matrix should be square for upper triangle printing.\n");
        return;
    }

    printf("Upper Triangle of the Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j >= i) {
                printf("%d ", matrix[i][j]);
            } else {
                printf("  "); // Print spaces for the lower triangle
            }
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    if (rows <= 0 || cols <= 0) {
        printf("Error: Rows and columns should be positive integers.\n");
        return 1;
    }

    int matrix[100][100];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printUpperTriangle(matrix, rows, cols);

    return 0;
}
