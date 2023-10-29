#include <stdio.h>

int main() {
    printf("***********************\n");
    printf("Reg.No: 2362816\n");
    printf("NAME: Jofi Jaison\n");
    printf("***********************\n");
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    int employee_ids[n];
    float total_amounts[n];

    for (int i = 0; i < n; i++) {
        printf("Enter Employee ID and Total Amount Paid for Employee %d: ", i + 1);
        scanf("%d %f", &employee_ids[i], &total_amounts[i]);
    }

    float total_spent = 0.0;
    for (int i = 0; i < n; i++) {
        total_spent += total_amounts[i];
    }

    printf("\nAccounts Balance Sheet:\nEmployee ID\tTotal Amount Paid\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%.2f\n", employee_ids[i], total_amounts[i]);
    }
    printf("Total Amount Spent by Account Manager: %.2f\n", total_spent);

    return 0;
}

