#include<stdio.h>
void checkCharacter(char ch);
void main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    checkCharacter(ch);
}

void checkCharacter(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
        printf("%c is Uppercase", ch);
    else if(ch >= 'a' && ch <= 'z')
        printf("%c is Lowercase", ch);
    else
        printf("%c is not an alphabet", ch);
}

