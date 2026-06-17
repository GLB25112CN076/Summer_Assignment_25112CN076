// WAP to Find Common Elements in Two Arrays

#include <stdio.h>

int main() {
    int a[100], b[100];
    int n1, n2, i, j;

    // Input first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    // Input second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    // Find common elements
    printf("Common elements are: ");
    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(a[i] == b[j]) {
                printf("%d ", a[i]);
                break;  // Avoid printing duplicates from second array
            }
        }
    }

    return 0;
}