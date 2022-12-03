#include <stdio.h>

int main()
{
    int integer;
    float floating_number;
    char character;
    double double_number;

    printf("Size of a Int is %zu bytes\n", sizeof(integer));
    printf("Size of float is %zu bytes\n", sizeof(floating_number));
    printf("Size of char is %zu bytes\n", sizeof(character));
    printf("Size of double is %zu bytes", sizeof(double_number));
}