#include <stdio.h>

int main()
{
    int n, sum;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    sum = 0;

    for (int i = 1; i <= n; ++i)
    {
        sum += i;
    }

    printf("Sum of all natural numbers from 1 to %d = %d", n, sum);
}