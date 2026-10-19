#include <stdio.h>

int main()
{
    char str[100];
    char *p;
    int count = 0;

    printf("Enter any string: ");
    scanf(" %[^\n]", str);

    p = str;

    while (*p != '\0')
    {
        count++;
        p++;
    }

    printf("The length of a string is: %d", count);

    return 0;
}
