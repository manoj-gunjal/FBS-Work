#include <stdio.h>

int replaceChar(char str[]);

void main()
{
    char str[100];

    printf("Enter String: ");
    gets(str);

    replaceChar(str);
}

int replaceChar(char str[])
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a')
            str[i] = '$';
    }

    printf("%s", str);
    return 0;
}