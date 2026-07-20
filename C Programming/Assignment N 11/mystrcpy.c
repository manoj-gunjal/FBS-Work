#include<stdio.h>

void mystrcpy(char dest[],char src[]);

void main()
{
    char s1[50],s2[50];

    printf("Enter String : ");
    scanf("%s",s2);

    mystrcpy(s1,s2);

    printf("Copied String = %s",s1);
}

void mystrcpy(char dest[],char src[])
{
    int i=0;

    while(src[i]!='\0')
    {
        dest[i]=src[i];
        i++;
    }

    dest[i]='\0';
}