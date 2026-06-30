#include <stdio.h>

#define MAX 50

int roll[MAX];
char name[MAX][50];
float marks[MAX];
int n = 0;

// Function to add student
void addStudent() {
    printf("\nEnter Roll Number: ");
    scanf("%d", &roll[n]);

    printf("Enter Name: ");
    scanf("%s", name[n]);

    printf("Enter Marks: ");
    scanf("%f", &marks[n]);

    n++;
    printf("\nStudent Record Added Successfully!\n");
}

// Function to display students
void displayStudents() {
    int i;

    if (n == 0) {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\n----- Student Records -----\n");
    printf("Roll No\tName\tMarks\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n", roll[i], name[i], marks[i]);
    }
}

// Function to search student
void searchStudent() {
    int r, i, found = 0;

    printf("\nEnter Roll Number to Search: ");
    scanf("%d", &r);

    for (i = 0; i < n; i++) {
        if (roll[i] == r) {
            printf("\nRecord Found!\n");
            printf("Roll No : %d\n", roll[i]);
            printf("Name    : %s\n", name[i]);
            printf("Marks   : %.2f\n", marks[i]);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nStudent Record Not Found!\n");
}

// Function to delete student
void deleteStudent() {
    int r, i, j, found = 0;

    printf("\nEnter Roll Number to Delete: ");
    scanf("%d", &r);

    for (i = 0; i < n; i++) {
        if (roll[i] == r) {
            for (j = i; j < n - 1; j++) {
                roll[j] = roll[j + 1];
                marks[j] = marks[j + 1];

                int k = 0;
                while (name[j + 1][k] != '\0') {
                    name[j][k] = name[j + 1][k];
                    k++;
                }
                name[j][k] = '\0';
            }
            n--;
            found = 1;
            printf("\nRecord Deleted Successfully!\n");
            break;
        }
    }

    if (!found)
        printf("\nStudent Record Not Found!\n");
}

int main() {
    int choice;

    do {
        printf("\n===== Student Management System =====");
        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Delete Student");
        printf("\n5. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                deleteStudent();
                break;

            case 5:
                printf("\nThank You!\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }

    } while (choice != 5);

    return 0;
}