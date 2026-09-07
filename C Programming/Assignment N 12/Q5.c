#include <stdio.h>

int countVowels(char str[]);

void main()
{
    char str[100];

    printf("Enter String: ");
    gets(str);

    countVowels(str);
}

int countVowels(char str[])
{
    int i, count = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            count++;
    }

    printf("Vowels = %d", count);
    return 0;
}