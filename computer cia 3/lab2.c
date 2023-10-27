#include <stdio.h>

// Function to calculate salary based on employee type, daily rate, and experience
float calculateSalary(char employeeType, int experience) {
    float dailyRate, increment;
    
    if (employeeType == 'P') {
        dailyRate = 1000.0;  // Daily rate for Permanent employees
    } else if (employeeType == 'T') {
        dailyRate = 400.0;   // Daily rate for Temporary employees
    } else {
        printf("Invalid Employee Type. Please enter 'P' for Permanent or 'T' for Temporary.\n");
        return -1;  // Indicate an error
    }

    increment = 1000.0 * experience;
    
    return dailyRate * 365 + increment;
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
