#include<stdio.h>
#include<string.h>

void main()
{
    char str[50],ch;

    scanf("%s",str);

    printf("Enter Character: ");
    scanf(" %c",&ch);

    printf("%s",strrchr(str,ch));
}