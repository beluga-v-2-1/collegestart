#include <stdio.h>
int main() {
    printf("***********************\n");
    printf("Reg.No: 1234\n");
    printf("***********************\n");
    // Declare variables to store employee details
    int employee_id, age;
    float basic_salary, da, tax, final_salary;
    char employee_type, department[50];
    // Input employee details
    printf("Enter Employee ID: ");
    scanf("%d", &employee_id);
    printf("Enter Age: ");
    scanf("%d", &age);
    printf("Enter Basic Salary: ");
    scanf("%f", &basic_salary);
    printf("Enter Employee Type (P for Permanent, T for Temporary): ");
    scanf(" %c", &employee_type);  
    printf("Enter Department: ");
    scanf("%s", department);
    // Calculate DA and Tax
    da = 1.1 * basic_salary;
    tax = 0.2 * basic_salary + da;
    // Calculate Final Salary
    final_salary = basic_salary + da - tax;
    // Display Employee Salary Slip
    printf("\nEmployee Salary Slip\n");
    printf("Employee ID: %d\n", employee_id);
    printf("Age: %d\n", age);
    printf("Basic Salary: %.2f\n", basic_salary);
    printf("Employee Type: %s\n", (employee_type == 'P') ? "Permanent" : "Temporary");
    printf("Department: %s\n", department);
    printf("DA: %.2f\n", da);
    printf("Tax: %.2f\n", tax);
    printf("Final Salary: %.2f\n", final_salary);
    return 0;
}
