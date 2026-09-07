#include <stdio.h>

int largerString(char str1[], char str2[]);

void main()
{
    char str1[100], str2[100];

    printf("Enter First String: ");
    gets(str1);

    printf("Enter Second String: ");
    gets(str2);

    largerString(str1, str2);
}

int largerString(char str1[], char str2[])
{
    int l1 = 0, l2 = 0, i;

    for (i = 0; str1[i] != '\0'; i++)
        l1++;

    for (i = 0; str2[i] != '\0'; i++)
        l2++;

    if (l1 > l2)
        printf("%s", str1);
    else
        printf("%s", str2);

    return 0;
}