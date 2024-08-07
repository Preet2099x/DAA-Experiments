#include <stdio.h>

void inputMatrix(int r, int c, int matrix[r][c]);
void multiplyMatrices(int r1, int c1, int mat1[r1][c1], 
                      int c2, int mat2[c1][c2], 
                      int result[r1][c2]);
void printMatrix(int r, int c, int matrix[r][c]);

int main() {
    int r1, c1, r2, c2;

    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Error: matrices cannot be multiplied.\n");
        return 1;
    }

    int mat1[r1][c1];
    int mat2[r2][c2];
    int result[r1][c2];

    printf("Enter elements of the first matrix:\n");
    inputMatrix(r1, c1, mat1);

    printf("Enter elements of the second matrix:\n");
    inputMatrix(r2, c2, mat2);

    multiplyMatrices(r1, c1, mat1, c2, mat2, result);

    printf("Resultant matrix:\n");
    printMatrix(r1, c2, result);

    return 0;
}

void inputMatrix(int r, int c, int matrix[r][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void multiplyMatrices(int r1, int c1, int mat1[r1][c1],
                      int c2, int mat2[c1][c2], 
                      int result[r1][c2]) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void printMatrix(int r, int c, int matrix[r][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}