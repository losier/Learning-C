#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    int sum = num1 + num2;

    printf("Sum of %d + %d is: %d", num1, num2, sum);
}