#include<stdio.h>

int mystrcmp(char s1[],char s2[]);

void main()
{
    char s1[50],s2[50];

    printf("Enter First String : ");
    scanf("%s",s1);

    printf("Enter Second String : ");
    scanf("%s",s2);

    if(mystrcmp(s1,s2)==0)
        printf("Strings are Equal");
    else
        printf("Strings are Not Equal");
}

int mystrcmp(char s1[],char s2[])
{
    int i=0;

    while(s1[i]!='\0' && s2[i]!='\0')
    {
        if(s1[i]!=s2[i])
            return s1[i]-s2[i];

        i++;
    }

    return s1[i]-s2[i];
}