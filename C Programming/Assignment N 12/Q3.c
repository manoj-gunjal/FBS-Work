#include <stdio.h>

int removeChar(char str[], int n);

void main()
{
    char str[100];
    int n;

    printf("Enter String: ");
    gets(str);

    printf("Enter Position: ");
    scanf("%d", &n);

    removeChar(str, n);
}

int removeChar(char str[], int n)
{
    int i;

    for (i = n - 1; str[i] != '\0'; i++)
    {
        str[i] = str[i + 1];
    }

    printf("%s", str);
    return 0;
}