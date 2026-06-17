// WAP to find Intersection of Two Arrays in C

#include <stdio.h>

int main() {
    int a[100], b[100], inter[100];
    int n1, n2, i, j, k = 0, found;

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

    // Find intersection
    for(i = 0; i < n1; i++) {
        found = 0;

        for(j = 0; j < n2; j++) {
            if(a[i] == b[j]) {
                found = 1;
                break;
            }
        }

        // Avoid duplicate elements in intersection array
        if(found) {
            int duplicate = 0;

            for(j = 0; j < k; j++) {
                if(inter[j] == a[i]) {
                    duplicate = 1;
                    break;
                }
            }

            if(!duplicate) {
                inter[k++] = a[i];
            }
        }
    }

    // Display intersection array
    printf("Intersection of arrays: ");
    for(i = 0; i < k; i++) {
        printf("%d ", inter[i]);
    }

    return 0;
}