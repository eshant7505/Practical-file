//2D array to function
#include <stdio.h>

void transpose(int rows, int cols, int matrix[rows][cols], int result[cols][rows]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[j][i] = matrix[i][j];
        }
    }
}


void displayMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {

    int rows = 3;
    int cols = 4;
    int myMatrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };


    printf("Original Matrix:\n");
    displayMatrix(rows, cols, myMatrix);


    int transposedMatrix[cols][rows];
    transpose(rows, cols, myMatrix, transposedMatrix);


    printf("\nTransposed Matrix:\n");
    displayMatrix(cols, rows, transposedMatrix);

    return 0;
}
