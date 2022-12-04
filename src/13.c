#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d;

    printf("Enter the value of a in ax^2+bx+c: ");
    scanf("%d", &a);

    printf("Enter the value of b in ax^2+bx+c: ");
    scanf("%d", &b);

    printf("Enter the value of c in ax^2+bx+c: ");
    scanf("%d", &c);

    d = ((b * b) - (4 * a * c));

    if (d > 0)
    {
        printf("Roots are real and unequal.");
    }
    else if (d == 0)
    {
        printf("Roots are real and equal.");
    }
    else
    {
        printf("Roots are imaginary.");
    }

    int root1, root2;

    root1 = (-b + sqrt(d)) / (2 * a);
    root2 = (-b - sqrt(d)) / (2 * a);

    printf("Root 1: %d\t", root1);
    printf("Root 2: %d", root2);
}