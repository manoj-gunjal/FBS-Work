#include <stdio.h>
#include <string.h>

int palindrome(char str[]);

void main()
{
    char str[100];

    printf("Enter String: ");
    gets(str);

    palindrome(str);
}

int palindrome(char str[])
{
    int i, len, flag = 1;

    len = strlen(str);

    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}