#include <stdio.h>

int countWords(char str[]);

void main()
{
    char str[100];

    printf("Enter String: ");
    gets(str);

    countWords(str);
}

int countWords(char str[])
{
    int i, count = 1;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            count++;
    }

    printf("Words = %d", count);
    return 0;
}