#include <stdio.h>
#include <string.h>
// Define the structure to represent an Employee
struct Employee {
    int employeeID;
    char name[50];
    float salary;
};
// Function to perform binary search on an array of employees by employee ID
int binarySearch(struct Employee arr[], int left, int right, int targetID) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        // If the target ID is found, return the index
        if (arr[mid].employeeID == targetID) {
            return mid;
        }
        // If the target ID is less, search the left half
        if (arr[mid].employeeID > targetID) {
            right = mid - 1;
        }
        // If the target ID is greater, search the right half
        else {
            left = mid + 1;
        }
    }
    // If the target ID is not found, return -1
    return -1;
}

int main() {
    printf("NAME :Tharun Adhithya.A\n");
    printf("REGNO :- 2362640\n");
    int n, targetID;

    // Input the number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    // Create an array of Employee structures
    struct Employee employees[n];
    // Input employee details
    for (int i = 0; i < n; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        employees[i].employeeID = i + 1;
        printf("Name: ");
        scanf("%s", employees[i].name); // Assuming no spaces in the name
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }
    // Sort the array by employee ID (binary search requires a sorted array)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (employees[i].employeeID > employees[j].employeeID) {
                struct Employee temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }
    // Input the target employee ID for search
    printf("Enter the Employee ID to search: ");
    scanf("%d", &targetID);
    // Perform binary search
    int result = binarySearch(employees, 0, n - 1, targetID);
    // Display the search result
    if (result != -1) {
        printf("Employee Found:\n");
        printf("Employee ID: %d\n", employees[result].employeeID);
        printf("Name: %s\n", employees[result].name);
        printf("Salary: %.2f\n", employees[result].salary);
    } else {
        printf("Employee not found.\n");
    }
    return 0;
}
