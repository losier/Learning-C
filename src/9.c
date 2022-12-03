#include <stdio.h>

int main()
{
    double num1, num2, temp;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // printf("Swapping with temp variable\n");
    // printf("Before swapping, first number = %d, second number = %d\n", num1, num2);
    // num1 = temp;
    // num2 = num1;
    // num1 = temp;
    // printf("After swapping, first number = %d, second number = %d\n", num1, num2);

    // printf("Swapping without temp variable\n");
    printf("Before swapping, first number = %d, second number = %d\n", num1, num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("After swapping, first number = %d, second number = %d\n", num1, num2);
}