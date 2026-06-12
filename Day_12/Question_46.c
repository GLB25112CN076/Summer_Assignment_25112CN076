#include <stdio.h>
#include <math.h>

int armstrong(int num)
{
    int temp, rem, sum = 0, digits = 0;

    temp = num;

    // Count digits
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    temp = num;

    // Calculate sum of digits raised to power digits
    while (temp != 0)
    {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    if (sum == num)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (armstrong(n))
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}