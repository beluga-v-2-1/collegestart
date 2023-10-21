#include <stdio.h>

// Define a structure to store employee details
struct Employee {
    char name[50];
    int employeeID;
    float permanentSalary;
    float contractPayment;
};

// Function to calculate the total amount spent by the Account Manager
float calculateTotalAmount(int n, struct Employee employees[]) {
    float totalAmount = 0;
    
    for (int i = 0; i < n; i++) {
        totalAmount += employees[i].permanentSalary + employees[i].contractPayment;
    }

    return totalAmount;
}

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    // Input data for permanent and contract employees
    for (int i = 0; i < n; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Employee ID: ");
        scanf("%d", &employees[i].employeeID);
        printf("Total Amount Paid for Employee (Permanent): ");
        scanf("%f", &employees[i].permanentSalary);
        printf("Total Amount Paid for Employee (Contract): ");
        scanf("%f", &employees[i].contractPayment);
    }

    // Calculate the total amount spent by the Account Manager
    float totalAmount = calculateTotalAmount(n, employees);

    // Display the accounts balance sheet
    printf("\nAccounts Balance Sheet\n");
    printf("Total Amount Spent by the Account Manager: %.2f\n", totalAmount);

    return 0;
}
