#include <stdio.h>

struct Employee {
    int employee_id;
    char name[50];
    float total_amount_paid;
};

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    for (int i = 0; i < n; i++) {
        printf("Enter Employee ID: ");
        scanf("%d", &employees[i].employee_id);
        printf("Enter Name: ");
        scanf("%s", employees[i].name);
        printf("Enter Total Amount Paid for Employee %d: ", employees[i].employee_id);
        scanf("%f", &employees[i].total_amount_paid);
    }

    float total_spent = 0.0;
    for (int i = 0; i < n; i++) {
        total_spent += employees[i].total_amount_paid;
    }

    printf("\nAccounts Balance Sheet:\nEmployee ID\tName\tTotal Amount Paid\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%s\t%.2f\n", employees[i].employee_id, employees[i].name, employees[i].total_amount_paid);
    }
    printf("Total Amount Spent by Account Manager: %.2f\n", total_spent);

    return 0;
}
