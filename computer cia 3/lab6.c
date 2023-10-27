#include <stdio.h>

int main() {
    printf("NAME :George Joseph Mappilacherry\n")
    printf("REGNO :- 2362812\n")
    int rows, cols;

    // Input the dimensions of the matrices
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Input the elements of the first matrix
    int matrix1[rows][cols];
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input the elements of the second matrix
    int matrix2[rows][cols];
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Calculate the transpose of both matrices
    int transpose1[cols][rows];
    int transpose2[cols][rows];

    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            transpose1[i][j] = matrix1[j][i];
            transpose2[i][j] = matrix2[j][i];
        }
    }

    // Add the transposed matrices
    int result[cols][rows];

    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            result[i][j] = transpose1[i][j] + transpose2[i][j];
        }
    }

    // Print the result
    printf("Resultant matrix after adding the transposed matrices:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
