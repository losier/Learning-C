#include <stdio.h>

int main()
{
    int dividend, divisor, quotient, remainder;

    printf("Enter the value of dividend: ");
    scanf("%d", &dividend);

    printf("Enter the value of divisor: ");
    scanf("%d", &divisor);

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    printf("%d divided by %d give\n\tQuotient: %d\n\tReminder: %d", dividend, divisor, quotient, remainder);
}