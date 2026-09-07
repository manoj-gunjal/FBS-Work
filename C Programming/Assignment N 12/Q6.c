#include <stdio.h>

int replaceSpace(char str[]);

void main()
{
    char str[100];

    printf("Enter String: ");
    gets(str);

    replaceSpace(str);
}

int replaceSpace(char str[])
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            str[i] = '#';
    }

    printf("%s", str);
    return 0;
}