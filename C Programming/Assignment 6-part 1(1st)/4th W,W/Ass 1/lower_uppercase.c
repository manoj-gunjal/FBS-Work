#include<stdio.h>
int checkCharacter(char ch);
void main()
{
    char ch;

    printf("Enter Character: ");
    scanf(" %c",&ch);

    checkCharacter(ch);
}

int checkCharacter(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
        printf("%c is Uppercase", ch);
    else if(ch >= 'a' && ch <= 'z')
        printf("%c is Lowercase", ch);
    else
        printf("%c is Not an Alphabet", ch);

    return 0;
}

