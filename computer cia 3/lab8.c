#include <stdio.h>

// Function to calculate the total amount spent by the Account Manager
float calculateTotalAmount(int n, float* permanentSalaries, float* contractPayments) {
    float totalAmount = 0;
    
    for (int i = 0; i < n; i++) {
        totalAmount += permanentSalaries[i] + contractPayments[i];
    }

    return totalAmount;
}

int main() {
    printf("NAME :Jofi Jaison\n")
    printf("REGNO :-  2362816\n")
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    float permanentSalaries[n];
    float contractPayments[n];

    // Input data for permanent and contract employees
    for (int i = 0; i < n; i++) {
        printf("Enter the total amount paid for Employee %d (Permanent): ", i + 1);
        scanf("%f", &permanentSalaries[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("Enter the total amount paid for Employee %d (Contract): ", i + 1);
        scanf("%f", &contractPayments[i]);
    }

    // Calculate the total amount spent by the Account Manager
    float totalAmount = calculateTotalAmount(n, permanentSalaries, contractPayments);

    // Display the accounts balance sheet
    printf("\nAccounts Balance Sheet\n");
    printf("Total Amount Spent by the Account Manager: %.2f\n", totalAmount);

    return 0;
}
