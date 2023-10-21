#include <stdio.h>

// Function to calculate gross salary
float calculateGrossSalary(float basic, float hra, float da, float ma) {
    return basic + hra + da + ma;
}

// Function to calculate deductions (PF, Professional Tax, and Income Tax)
float calculateDeductions(float grossSalary) {
    float pf = 0.12 * grossSalary;
    float professionalTax = 200.0;
    float incomeTax = 0.20 * grossSalary;
    return pf + professionalTax + incomeTax;
}

int main() {
    int choice;
    float basicSalary, hra, da, ma;

    do {
        printf("\nMenu:\n");
        printf("1. Enter Employee Details\n");
        printf("2. Calculate Employee Salary\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Basic Salary: ");
                scanf("%f", &basicSalary);
                printf("Enter House Rent Allowance (HRA): ");
                scanf("%f", &hra);
                printf("Enter Dearness Allowance (DA): ");
                scanf("%f", &da);
                printf("Enter Medical Allowance (MA): ");
                scanf("%f", &ma);
                break;
            case 2:
                if (basicSalary == 0) {
                    printf("Please enter employee details first.\n");
                } else {
                    float grossSalary = calculateGrossSalary(basicSalary, hra, da, ma);
                    float deductions = calculateDeductions(grossSalary);
                    float netSalary = grossSalary - deductions;

                    printf("\nEmployee Salary Slip\n");
                    printf("Basic Salary: %.2f\n", basicSalary);
                    printf("HRA: %.2f\n", hra);
                    printf("DA: %.2f\n", da);
                    printf("MA: %.2f\n", ma);
                    printf("Gross Salary: %.2f\n", grossSalary);
                    printf("Deductions:\n");
                    printf("   Employee PF: %.2f\n", 0.12 * grossSalary);
                    printf("   Professional Tax: %.2f\n", 200.0);
                    printf("   Income Tax: %.2f\n", 0.20 * grossSalary);
                    printf("Net Salary: %.2f\n", netSalary);
                }
                break;
            case 3:
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
                break;
        }
    } while (choice != 3);

    return 0;
}
