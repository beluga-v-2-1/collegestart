#include <stdio.h>

// Function to calculate salary based on provided details
void calculateSalary(float basicSalary, char employeeType, float *da, float *tax, float *finalSalary) {
    *da = 1.10 * basicSalary;
    *tax = 0.20 * basicSalary + *da;
    *finalSalary = basicSalary + *da - *tax;
}

int main() {
    int employeeID, age;
    float basicSalary, da, tax, finalSalary;
    char employeeType;
    char department[50];

    printf("Enter Employee ID: ");
    scanf("%d", &employeeID);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    printf("Enter Employee Type (P for Permanent, T for Temporary): ");
    scanf(" %c", &employeeType);

    printf("Enter Department: ");
    scanf("%s", department);

    if (employeeType != 'P' && employeeType != 'T') {
        printf("Invalid Employee Type. Please enter 'P' for Permanent or 'T' for Temporary.\n");
    } else {
        calculateSalary(basicSalary, employeeType, &da, &tax, &finalSalary);

        printf("\nEmployee Salary Slip\n");
        printf("Employee ID: %d\n", employeeID);
        printf("Age: %d\n", age);
        printf("Basic Salary: %.2f\n", basicSalary);
        printf("Employee Type: %c\n", employeeType);
        printf("Department: %s\n", department);
        printf("DA (Dearness Allowance): %.2f\n", da);
        printf("Tax: %.2f\n", tax);
        printf("Final Salary: %.2f\n", finalSalary);
    }

    return 0;
}
