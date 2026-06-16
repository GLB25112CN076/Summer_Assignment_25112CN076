#include <stdio.h>

int main() {
    int arr[] = {1, 4, 5, 7, 8, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 9;
    int found = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                printf("Pair found: %d + %d = %d\n", arr[i], arr[j], sum);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("No pair found.\n");
    }

    return 0;
}