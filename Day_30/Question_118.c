#include <stdio.h>

int main() {
    int n, i;
    int bookId[50];
    char title[50][50];
    char author[50][50];

    printf("Enter number of books: ");
    scanf("%d", &n);

    // Input book details
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &bookId[i]);

        printf("Book Title: ");
        scanf("%s", title[i]);

        printf("Author Name: ");
        scanf("%s", author[i]);
    }

    // Display book details
    printf("\n----- Library Records -----\n");
    printf("Book ID\tTitle\t\tAuthor\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t\t%s\n", bookId[i], title[i], author[i]);
    }

    return 0;
}