#include<stdio.h>

void mystrncpy(char dest[],char src[],int n);

void main()
{
    char s1[50],s2[50];
    int n;

    printf("Enter String : ");
    scanf("%s",s2);

    printf("Enter Number : ");
    scanf("%d",&n);

    mystrncpy(s1,s2,n);

    printf("Copied String = %s",s1);
}

void mystrncpy(char dest[],char src[],int n)
{
    int i;

    for(i=0;i<n && src[i]!='\0';i++)
    {
        dest[i]=src[i];
    }

    dest[i]='\0';
}