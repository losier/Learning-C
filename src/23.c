#include <stdio.h>

int main()
{
    char ch = 'a', CH;

    printf("Alphabate character in Uppercase: \n");
    for (CH = 'A'; CH <= 'Z'; CH++)
    {
        printf("%c, ", CH);
    }
    printf("\n");
    printf("Alphabate character in Lowercase: \n");
    while (ch <= 'z')
    {
        printf("%c, ", ch);
        ch++;
    }
}