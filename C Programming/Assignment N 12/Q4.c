#include <stdio.h>
#include <string.h>

int exchange(char str[]);

void main()
{
    char str[100];

    printf("Enter String: ");
    gets(str);

    exchange(str);
}

int exchange(char str[])
{
    int len;
    char temp;

    len = strlen(str);

    temp = str[0];
    str[0] = str[len - 1];
    str[len - 1] = temp;

    printf("%s", str);
    return 0;
}