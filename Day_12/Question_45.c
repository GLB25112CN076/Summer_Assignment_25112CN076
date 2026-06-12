#include <stdio.h>

int palindrome(int num)
{
    int temp, rev = 0, rem;

    temp = num;

    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    if (temp == rev)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (palindrome(n))
        printf("%d is a Palindrome Number.", n);
    else
        printf("%d is not a Palindrome Number.", n);

    return 0;
}