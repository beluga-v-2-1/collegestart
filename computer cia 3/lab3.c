#include <stdio.h>
int main() {
    int choice;
    float basic_salary, hra, da, ma, gross_salary, net_salary;
    float pf_contribution, professional_tax, income_tax;
    printf("***********************\n");
    printf("Reg.No: 2362601\n");
    printf("NAME:A. Melsica Manuel\n");
    printf("***********************\n");
    while (1) {
        printf("\nMenu:\n");
        printf("1. Enter Employee Details\n");
        printf("2. Calculate Employee Salary\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter Basic Salary: ");
                scanf("%f", &basic_salary);
                printf("Enter House Rent Allowance (HRA): ");
                scanf("%f", &hra);
                printf("Enter Dearness Allowance (DA): ");
                scanf("%f", &da);
                printf("Enter Medical Allowance (MA): ");
                scanf("%f", &ma);
                break;
            case 2:
                if (basic_salary == 0) {
                    printf("Please enter employee details first (Option 1).\n");
                } else {
                    gross_salary = basic_salary + hra + da + ma;
                    pf_contribution = 0.12 * basic_salary;
                    professional_tax = 200.0;
                    income_tax = 0.2 * (gross_salary - pf_contribution - professional_tax);
                    net_salary = gross_salary - pf_contribution - professional_tax - income_tax;
    
                    printf("Salary Slip\n");
                    printf("Basic Salary: %.2f\n", basic_salary);
                    printf("House Rent Allowance (HRA): %.2f\n", hra);
                    printf("Dearness Allowance (DA): %.2f\n", da);
                    printf("Medical Allowance (MA): %.2f\n", ma);
                    printf("Gross Salary: %.2f\n", gross_salary);
                    printf("Employee PF Contribution: %.2f\n", pf_contribution);
                    printf("Professional Tax: %.2f\n", professional_tax);
                    printf("Income Tax: %.2f\n", income_tax);
                    printf("Net Salary: %.2f\n", net_salary);
                }
                break;
            default:
                printf("Invalid choice. Please select 1 or 2.\n");
                break;
        }
    }
    return 0;
}

    return 0;
}

