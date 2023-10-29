#include <stdio.h>

int main() {
    int row, col;
    printf("***********************\n");
    printf("Reg.No: 2362812\n");
    printf("NAME: George Joseph Mappilacherry\n");
    printf("***********************\n");
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &col);

    int matrix1[row][col], matrix2[row][col];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &matrix1[i][j]);

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &matrix2[i][j]);

    int sum[row][col];

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            sum[i][j] = matrix1[j][i] + matrix2[j][i];

    printf("Sum of Transposed Matrices:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
