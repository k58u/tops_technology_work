#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

void inputMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols, int matrixNum) {
    printf("----------matrix : %d------------------------\n", matrixNum);
    printf("Enter elements for matrix %d:\n", matrixNum);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("enter element: ");
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrices(int mat1[MAX_ROWS][MAX_COLS], int mat2[MAX_ROWS][MAX_COLS],
                      int result[MAX_ROWS][MAX_COLS], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int mat1[MAX_ROWS][MAX_COLS], mat2[MAX_ROWS][MAX_COLS], result[MAX_ROWS][MAX_COLS];
    int rows1, cols1, rows2, cols2;

    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &rows1, &cols1);
    inputMatrix(mat1, rows1, cols1, 1);

    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &rows2, &cols2);
    inputMatrix(mat2, rows2, cols2, 2);

    if (cols1 != rows2) {
        printf("Matrix multiplication not possible. Number of columns of first matrix must be equal to the number of rows of the second matrix.\n");
        return 0;
    }

    printf("\n");

    printf("----------matrix : 1------------------------\n");
    displayMatrix(mat1, rows1, cols1);
    printf("\n");

    printf("----------matrix : 2------------------------\n");
    displayMatrix(mat2, rows2, cols2);
    printf("\n");

    multiplyMatrices(mat1, mat2, result, rows1, cols1, cols2);

    printf("----------result : multiplication matrix ------------------------\n");
    displayMatrix(result, rows1, cols2);

}
