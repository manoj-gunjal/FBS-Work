#include<stdio.h>

char *mystrchr(char str[],char ch);

void main()
{
    char str[50],ch;

    scanf("%s",str);

    printf("Enter Character : ");
    scanf(" %c",&ch);

    if(mystrchr(str,ch)!=NULL)
        printf("Character Found");
    else
        printf("Character Not Found");
}

char *mystrchr(char str[],char ch)
{
    int i=0;

    while(str[i]!='\0')
    {
        if(str[i]==ch)
            return &str[i];

        i++;
    }

    return NULL;
}