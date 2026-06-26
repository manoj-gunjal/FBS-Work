#include<stdio.h>
int vowel(char ch);
void main()
{
    char ch;

    printf("Enter Character: ");
    scanf(" %c",&ch);

    vowel(ch);
}

int vowel(char ch)
{
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
       ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        printf("%c is Vowel", ch);
    else
        printf("%c is Consonant", ch);

    return 0;
}

