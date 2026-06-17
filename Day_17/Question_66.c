// WAP to find Union of Two Arrays in C

#include <stdio.h>

int main() {
    int a[100], b[100], unionArr[200];
    int n1, n2, i, j, k = 0, found;

    // Input first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
        unionArr[k++] = a[i];   // Add all elements of first array
    }

    // Input second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &b[i]);

        found = 0;
        for(j = 0; j < k; j++) {
            if(b[i] == unionArr[j]) {
                found = 1;
                break;
            }
        }

        // Add only if element is not already present
        if(found == 0) {
            unionArr[k++] = b[i];
        }
    }

    // Display union array
    printf("Union of arrays: ");
    for(i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }

    return 0;
}

