//array of structures for employee database
#include <stdio.h>

struct Employee {
    char name[50];
    int employeeID;
    float salary;
};

int main() {
    int numEmployees;

    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    struct Employee employees[numEmployees];

    for (int i = 0; i < numEmployees; ++i) {
        printf("\nEnter details for Employee %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", employees[i].name);

        printf("Employee ID: ");
        scanf("%d", &employees[i].employeeID);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    printf("\nEmployee Database:\n");
    printf("\n");
    printf("%-20s %-15s %-10s\n", "Name", "Employee ID", "Salary");
    printf("\n");

    for (int i = 0; i < numEmployees; ++i) {
        printf("%-20s %-15d %-10.2f\n", employees[i].name, employees[i].employeeID, employees[i].salary);
    }

    return 0;
}
