#include <stdio.h>
#include <string.h>

int searchChar(char str[], char ch);

void main()
{
    char str[100], ch;

    printf("Enter String: ");
    gets(str);

    printf("Enter Character: ");
    scanf("%c", &ch);

    searchChar(str, ch);
}

int searchChar(char str[], char ch)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("Character Found");
            return 0;
        }
    }

    printf("Character Not Found");
    return 0;
}