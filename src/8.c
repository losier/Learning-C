#include <stdio.h>

int main()
{
    int num1;
    long num2;
    long long num3;
    double num4;
    long double num5;

    printf("Size of a Int is %zu bytes\n", sizeof(num1));
    printf("Size of a long is %zu bytes\n", sizeof(num2));
    printf("Size of a long long is %zu bytes\n", sizeof(num3));
    printf("Size of a double is %zu bytes\n", sizeof(num4));
    printf("Size of a long double is %zu bytes\n", sizeof(num5));
}