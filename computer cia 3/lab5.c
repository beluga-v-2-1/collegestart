#include <stdio.h>

struct Employee {
    int employee_id;
    char name[50];
    int age;
    float basic_salary;
};

int binarySearch(struct Employee employees[], int n, int target_id) {
    printf("***********************\n");
    printf("Reg.No: 2362640\n");
    printf("NAME: Tharun Adhithya.A\n");
    printf("***********************\n");
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (employees[mid].employee_id == target_id)
            return mid; // Employee found
        (employees[mid].employee_id < target_id) ? (left = mid + 1) : (right = mid - 1);
    }
    return -1; // Employee not found
}

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    for (int i = 0; i < n; i++) {
        printf("ID, Name, Age, Salary for Employee %d: ", i + 1);
        scanf("%d %s %d %f", &employees[i].employee_id, employees[i].name, &employees[i].age, &employees[i].basic_salary);
    }

    int target_id;
    printf("Enter Employee ID to search: ");
    scanf("%d", &target_id);

    int result = binarySearch(employees, n, target_id);

    if (result != -1) {
        printf("Employee Found!\n");
        printf("Employee ID: %d\nName: %s\nAge: %d\nBasic Salary: %.2f\n", employees[result].employee_id, employees[result].name, employees[result].age, employees[result].basic_salary);
    } else {
        printf("Employee not found.\n");
    }

    return 0;
}
