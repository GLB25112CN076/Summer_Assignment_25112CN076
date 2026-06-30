#include <stdio.h>

int main() {
    int n, i;
    int roll[50];
    char name[50][50];
    float marks[50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input student records
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%f", &marks[i]);
    }

    // Display student records
    printf("\n----- Student Records -----\n");
    printf("Roll No\tName\tMarks\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n", roll[i], name[i], marks[i]);
    }

    return 0;
}