#include <stdio.h>

struct Item {
    int id, quantity;
    char name[50];
    float price;
};

int main() {
    struct Item item[100];
    int n, i;

    printf("Enter number of items: ");
    scanf("%d", &n);

    // Input item details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of Item %d\n", i + 1);

        printf("Item ID: ");
        scanf("%d", &item[i].id);

        printf("Item Name: ");
        scanf("%s", item[i].name);

        printf("Price: ");
        scanf("%f", &item[i].price);

        printf("Quantity: ");
        scanf("%d", &item[i].quantity);
    }

    // Display inventory
    printf("\n========== INVENTORY ==========\n");
    printf("ID\tName\tPrice\tQuantity\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\t%d\n",
               item[i].id,
               item[i].name,
               item[i].price,
               item[i].quantity);
    }

    return 0;
}