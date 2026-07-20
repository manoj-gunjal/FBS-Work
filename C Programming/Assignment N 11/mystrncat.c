#include<stdio.h>

void mystrncat(char s1[],char s2[],int n);

void main()
{
    char s1[100],s2[50];
    int n;

    scanf("%s",s1);
    scanf("%s",s2);

    printf("Enter n : ");
    scanf("%d",&n);

    mystrncat(s1,s2,n);

    printf("%s",s1);
}

void mystrncat(char s1[],char s2[],int n)
{
    int i=0,j=0;

    while(s1[i]!='\0')
        i++;

    while(s2[j]!='\0' && j<n)
    {
        s1[i]=s2[j];
        i++;
        j++;
    }

    s1[i]='\0';
}