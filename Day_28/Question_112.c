#include <stdio.h>

struct Contact
{
    int id;
    char name[50];
    char phone[15];
};

int main()
{
    struct Contact c[100];
    int n = 0, choice, i, id, found;

    while (1)
    {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Contact ID: ");
            scanf("%d", &c[n].id);

            printf("Enter Name: ");
            scanf(" %[^\n]", c[n].name);

            printf("Enter Phone Number: ");
            scanf("%s", c[n].phone);

            n++;
            printf("Contact added successfully!\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No contacts available!\n");
            }
            else
            {
                printf("\nID\tName\t\tPhone Number\n");
                for (i = 0; i < n; i++)
                {
                    printf("%d\t%s\t\t%s\n",
                           c[i].id,
                           c[i].name,
                           c[i].phone);
                }
            }
            break;

        case 3:
            printf("Enter Contact ID to Search: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (c[i].id == id)
                {
                    printf("\nContact Found!\n");
                    printf("ID           : %d\n", c[i].id);
                    printf("Name         : %s\n", c[i].name);
                    printf("Phone Number : %s\n", c[i].phone);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Contact not found!\n");

            break;

        case 4:
            printf("Exiting...\n");
            return 0;

        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}