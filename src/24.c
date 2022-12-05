#include <stdio.h>

int main()
{
    long long num;
    int count = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    do
    {
        num /= 10;
        ++count;
    } while (num != 0);

    printf("Number of digits is %d", count);

    return 0;
}