#include <stdio.h>

// Function to calculate salary based on employee type and experience
float calculateSalary(char employeeType, int experience) {
    float baseSalary;
    float increment = 1000 * experience;

    if (employeeType == 'P') {
        baseSalary = 1000;  // Permanent employee's base salary
    } else if (employeeType == 'T') {
        baseSalary = 400;   // Temporary employee's base salary
    } else {
        printf("Invalid Employee Type. Please enter 'P' for Permanent or 'T' for Temporary.\n");
        return -1;  // Indicate an error
    }

    return baseSalary + increment;
}

int main() {
    int employeeID, age, experience;
    char employeeType;
    char department[50];

    printf("Enter Employee ID: ");
    scanf("%d", &employeeID);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Employee Type (P for Permanent, T for Temporary): ");
    scanf(" %c", &employeeType);

    printf("Enter Department: ");
    scanf("%s", department);

    printf("Enter Years of Experience: ");
    scanf("%d", &experience);

    float salary = calculateSalary(employeeType, experience);

    if (salary >= 0) {
        printf("\nEmployee Salary Slip\n");
        printf("Employee ID: %d\n", employeeID);
        printf("Age: %d\n", age);
        printf("Employee Type: %c\n", employeeType);
        printf("Department: %s\n", department);
        printf("Years of Experience: %d\n", experience);
        printf("Salary: %.2f\n", salary);
    }

    return 0;
}
