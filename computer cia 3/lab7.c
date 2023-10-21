#include <stdio.h>

// Function to input human resource procurement details
void inputHRDetails(int n, char names[][50], int ids[], float salaries[]) {
    for (int i = 0; i < n; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", names[i]);
        printf("Employee ID: ");
        scanf("%d", &ids[i]);
        printf("Salary: ");
        scanf("%f", &salaries[i]);
    }
}

// Function to calculate the salary for each employee
void calculateSalaries(int n, float salaries[], float da[], float hra[], float ma[]) {
    for (int i = 0; i < n; i++) {
        da[i] = 0.1 * salaries[i];  // DA (Dearness Allowance) is 10% of the salary
        hra[i] = 0.2 * salaries[i];  // HRA (House Rent Allowance) is 20% of the salary
        ma[i] = 500.0;  // MA (Medical Allowance) is a fixed amount of Rs. 500
        salaries[i] += da[i] + hra[i] + ma[i];
    }
}

// Function to display employee data
void displayEmployeeData(int n, char names[][50], int ids[], float salaries[], float da[], float hra[], float ma[]) {
    printf("\nEmployee Data:\n");
    for (int i = 0; i < n; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name: %s\n", names[i]);
        printf("Employee ID: %d\n", ids[i]);
        printf("Salary: %.2f\n", salaries[i]);
        printf("DA: %.2f\n", da[i]);
        printf("HRA: %.2f\n", hra[i]);
        printf("MA: %.2f\n", ma[i]);
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    char names[n][50];
    int ids[n];
    float salaries[n];
    float da[n];
    float hra[n];
    float ma[n];

    // Input human resource procurement details
    inputHRDetails(n, names, ids, salaries);

    // Calculate salaries
    calculateSalaries(n, salaries, da, hra, ma);

    // Display employee data
    displayEmployeeData(n, names, ids, salaries, da, hra, ma);

    return 0;
}
