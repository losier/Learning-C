#include <stdio.h>

int main()
{
    long double n, factorial;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("Factorial of 0 is 1");
    }
    else
    {
        factorial = 1;
        for (int i = 1; i <= n; ++i)
        {
            factorial *= i;
        }
        printf("Factorial of %d = %d", n, factorial);
    }

    return 0;
}
