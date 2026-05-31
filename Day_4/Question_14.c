#include <stdio.h>

int main() {
    int n, i;
    long long first = 0, second = 1, next;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n == 1)
        printf("Nth Fibonacci term = %lld", first);
    else if (n == 2)
        printf("Nth Fibonacci term = %lld", second);
    else {
        for (i = 3; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }
        printf("Nth Fibonacci term = %lld", second);
    }

    return 0;
}