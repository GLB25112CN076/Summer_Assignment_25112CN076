#include <stdio.h>

int main() {
    int n, i;
    int empId[50];
    char name[50][50];
    float salary[50];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &empId[i]);

        printf("Employee Name: ");
        scanf("%s", name[i]);

        printf("Salary: ");
        scanf("%f", &salary[i]);
    }

    // Display employee records
    printf("\n----- Employee Records -----\n");
    printf("ID\tName\t\tSalary\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t\t%.2f\n", empId[i], name[i], salary[i]);
    }

    return 0;
}