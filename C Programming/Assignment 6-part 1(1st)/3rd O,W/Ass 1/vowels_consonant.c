#include<stdio.h>
void checkVowel(char ch);
void main()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    checkVowel(ch);
}

void checkVowel(char ch)
{
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
       ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        printf("%c is Vowel", ch);
    else
        printf("%c is Consonant", ch);
}

