#include <stdio.h>

int removeOdd(char str[]);

void main()
{
    char str[100];

    printf("Enter String: ");
    gets(str);

    removeOdd(str);
}

int removeOdd(char str[])
{
    int i, j = 0;
    char temp[100];

    for (i = 0; str[i] != '\0'; i = i + 2)
    {
        temp[j++] = str[i];
    }

    temp[j] = '\0';

    printf("%s", temp);
    return 0;
}