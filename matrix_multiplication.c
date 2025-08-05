//matrix multiplication
#include <stdio.h>

void multiplyMatrices(int firstMatrix[10][10], int secondMatrix[10][10], int result[10][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond) {
    int i, j, k;

    for (i = 0; i < rowFirst; ++i) {
        for (j = 0; j < columnSecond; ++j) {
            result[i][j] = 0;
        }
    }

    for (i = 0; i < rowFirst; ++i) {
        for (j = 0; j < columnSecond; ++j) {
            for (k = 0; k < columnFirst; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[10][10], int row, int column) {
    int i, j;
    for (i = 0; i < row; ++i) {
        for (j = 0; j < column; ++j) {
            printf("%d  ", matrix[i][j]);
            if (j == column - 1)
                printf("\n");
        }
    }
}

int main() {
    int firstMatrix[10][10], secondMatrix[10][10], result[10][10], rowFirst, columnFirst, rowSecond, columnSecond;

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &rowFirst, &columnFirst);

    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &rowSecond, &columnSecond);


    while (columnFirst != rowSecond) {
        printf("Error! column of first matrix not equal to row of second.\n");

        printf("Enter rows and columns for first matrix: ");
        scanf("%d %d", &rowFirst, &columnFirst);

        printf("Enter rows and columns for second matrix: ");
        scanf("%d %d", &rowSecond, &columnSecond);
    }

    printf("\nEnter elements of matrix 1:\n");
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < columnFirst; ++j) {
            printf("Enter element a%d%d : ", i + 1, j + 1);
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    printf("\nEnter elements of matrix 2:\n");
    for (int i = 0; i < rowSecond; ++i) {
        for (int j = 0; j < columnSecond; ++j) {
            printf("Enter element b%d%d : ", i + 1, j + 1);
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    multiplyMatrices(firstMatrix, secondMatrix, result, rowFirst, columnFirst, rowSecond, columnSecond);

    printf("\nProduct of matrices:\n");
    displayMatrix(result, rowFirst, columnSecond);

    return 0;
}
