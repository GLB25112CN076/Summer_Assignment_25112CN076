// WAP to Merge Two Arrays in C

#include <stdio.h>

int main() {
    int a[100], b[100], c[200];
    int n1, n2, i;

    // Input size of first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    // Input elements of first array
    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    // Input size of second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    // Input elements of second array
    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    // Copy first array into merged array
    for(i = 0; i < n1; i++) {
        c[i] = a[i];
    }

    // Copy second array into merged array
    for(i = 0; i < n2; i++) {
        c[n1 + i] = b[i];
    }

    // Display merged array
    printf("Merged array: ");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}