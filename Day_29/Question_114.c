#include <stdio.h>

int main() {
    int arr[100], n, i, choice;
    int sum = 0, max, min;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\n===== MENU =====\n");
        printf("1. Display Array\n");
        printf("2. Sum and Average\n");
        printf("3. Find Largest Element\n");
        printf("4. Find Smallest Element\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Array Elements: ");
                for (i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 2:
                sum = 0;
                for (i = 0; i < n; i++) {
                    sum += arr[i];
                }
                printf("Sum = %d\n", sum);
                printf("Average = %.2f\n", (float)sum / n);
                break;

            case 3:
                max = arr[0];
                for (i = 1; i < n; i++) {
                    if (arr[i] > max)
                        max = arr[i];
                }
                printf("Largest Element = %d\n", max);
                break;

            case 4:
                min = arr[0];
                for (i = 1; i < n; i++) {
                    if (arr[i] < min)
                        min = arr[i];
                }
                printf("Smallest Element = %d\n", min);
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 5);

    return 0;
}