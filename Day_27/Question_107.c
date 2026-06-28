#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basic, hra, da, gross;
};

int main()
{
    struct Employee emp[100];
    int n = 0, choice, i;

    while (1)
    {
        printf("\n===== Salary Management System =====\n");
        printf("1. Add Employee Salary\n");
        printf("2. Display Salary Details\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\nEnter Employee ID: ");
                scanf("%d", &emp[n].id);

                printf("Enter Employee Name: ");
                scanf(" %[^\n]", emp[n].name);

                printf("Enter Basic Salary: ");
                scanf("%f", &emp[n].basic);

                // Salary Calculation
                emp[n].hra = emp[n].basic * 0.20; // 20% HRA
                emp[n].da = emp[n].basic * 0.10;  // 10% DA
                emp[n].gross = emp[n].basic + emp[n].hra + emp[n].da;

                printf("Salary calculated successfully!\n");
                n++;
                break;

            case 2:
                if (n == 0)
                {
                    printf("No employee records found!\n");
                }
                else
                {
                    printf("\nID\tName\tBasic\tHRA\tDA\tGross\n");
                    for (i = 0; i < n; i++)
                    {
                        printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",
                               emp[i].id,
                               emp[i].name,
                               emp[i].basic,
                               emp[i].hra,
                               emp[i].da,
                               emp[i].gross);
                    }
                }
                break;

            case 3:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}