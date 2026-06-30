#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    do {
        printf("\n===== MENU =====\n");
        printf("1. Display String\n");
        printf("2. Find Length\n");
        printf("3. Reverse String\n");
        printf("4. Convert to Uppercase\n");
        printf("5. Convert to Lowercase\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("String: %s\n", str);
                break;

            case 2:
                printf("Length = %lu\n", strlen(str));
                break;

            case 3: {
                char rev[100];
                int i, len = strlen(str);
                for (i = 0; i < len; i++) {
                    rev[i] = str[len - i - 1];
                }
                rev[len] = '\0';
                printf("Reversed String: %s\n", rev);
                break;
            }

            case 4:
                for (int i = 0; str[i] != '\0'; i++) {
                    if (str[i] >= 'a' && str[i] <= 'z')
                        str[i] = str[i] - 32;
                }
                printf("Uppercase: %s\n", str);
                break;

            case 5:
                for (int i = 0; str[i] != '\0'; i++) {
                    if (str[i] >= 'A' && str[i] <= 'Z')
                        str[i] = str[i] + 32;
                }
                printf("Lowercase: %s\n", str);
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 6);

    return 0;
}