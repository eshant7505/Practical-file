//array of structures for employee database
#include <stdio.h>

// Define the structure for an employee
struct Employee {
    char name[50];
    int employeeID;
    float salary;
};

int main() {
    int numEmployees;

    // Prompt user for the number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    // Declare an array of structures to store employee information
    struct Employee employees[numEmployees];

    // Input details for each employee
    for (int i = 0; i < numEmployees; ++i) {
        printf("\nEnter details for Employee %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", employees[i].name);

        printf("Employee ID: ");
        scanf("%d", &employees[i].employeeID);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Display the employee database
    printf("\nEmployee Database:\n");
    printf("\n");
    printf("%-20s %-15s %-10s\n", "Name", "Employee ID", "Salary");
    printf("\n");

    for (int i = 0; i < numEmployees; ++i) {
        printf("%-20s %-15d %-10.2f\n", employees[i].name, employees[i].employeeID, employees[i].salary);
    }

    return 0;
}
