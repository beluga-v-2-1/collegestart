#include <stdio.h>

struct Employee {
    int id, age;
    char name[50];
    float salary;
};

void collectData(struct Employee *emp) {
    printf("Enter ID, Name, Age, Salary: ");
    scanf("%d %s %d %f", &emp->id, emp->name, &emp->age, &emp->salary);
}

float calculateSalary(float salary, float hra, float da, float ma) {
    return salary + hra + da + ma;
}

int main() {
    printf("***********************\n");
    printf("Reg.No: 2362812\n");
    printf("NAME: George Joseph Mappilacherry\n");
    printf("***********************\n");
    struct Employee emp;
    int choice;
    float hra, da, ma, grossSalary;

    do {
        printf("1. Data Collection\n2. Salary Calculation\n3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                collectData(&emp);
                break;
            case 2:
                printf("Enter HRA, DA, MA: ");
                scanf("%f %f %f", &hra, &da, &ma);
                grossSalary = calculateSalary(emp.salary, hra, da, ma);
                printf("Gross Salary: %.2f\n", grossSalary);
                break;
            case 3:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please select 1, 2, or 3.\n");
        }
    } while (choice != 3);

    return 0;
}
