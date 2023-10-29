#include <stdio.h>

int main() {
    printf("***********************\n");
    printf("Reg.No: 2362640\n");
    printf("NAME: Tharun Adhithya.A\n");
    printf("***********************\n");
    int rows = 3;
    int currentNumber = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", currentNumber);
            currentNumber += 5;
        }
        printf("\n");
    }

    return 0;
}
