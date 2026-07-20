#include<stdio.h>

void mystrcat(char s1[],char s2[]);

void main()
{
    char s1[100],s2[50];

    printf("Enter First String : ");
    scanf("%s",s1);

    printf("Enter Second String : ");
    scanf("%s",s2);

    mystrcat(s1,s2);

    printf("Concatenated String = %s",s1);
}

void mystrcat(char s1[],char s2[])
{
    int i=0,j=0;

    while(s1[i]!='\0')
        i++;

    while(s2[j]!='\0')
    {
        s1[i]=s2[j];
        i++;
        j++;
    }

    s1[i]='\0';
}