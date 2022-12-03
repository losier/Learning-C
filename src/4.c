#include <stdio.h>

int main()
{
    float num1, num2, multi;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    multi = num1 * num2;

    printf("Multiplication of %.2f * %.2f is: %.2f", num1, num2, multi);
}