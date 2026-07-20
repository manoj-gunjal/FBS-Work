#include<stdio.h>

int mystrncmp(char s1[],char s2[],int n);

void main()
{
    char s1[50],s2[50];
    int n;

    scanf("%s",s1);
    scanf("%s",s2);

    printf("Enter n : ");
    scanf("%d",&n);

    if(mystrncmp(s1,s2,n)==0)
        printf("Equal");
    else
        printf("Not Equal");
}

int mystrncmp(char s1[],char s2[],int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        if(s1[i]!=s2[i])
            return s1[i]-s2[i];

        if(s1[i]=='\0'||s2[i]=='\0')
            break;
    }

    return 0;
}