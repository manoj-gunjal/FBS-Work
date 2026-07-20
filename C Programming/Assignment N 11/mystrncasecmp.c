#include<stdio.h>

int mystrncasecmp(char s1[],char s2[],int n);

void main()
{
    char s1[50],s2[50];
    int n;

    scanf("%s",s1);
    scanf("%s",s2);

    printf("Enter n : ");
    scanf("%d",&n);

    if(mystrncasecmp(s1,s2,n)==0)
        printf("Equal");
    else
        printf("Not Equal");
}

int mystrncasecmp(char s1[],char s2[],int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        char c1=s1[i];
        char c2=s2[i];

        if(c1>='A'&&c1<='Z')
            c1+=32;

        if(c2>='A'&&c2<='Z')
            c2+=32;

        if(c1!=c2)
            return c1-c2;

        if(c1=='\0'||c2=='\0')
            break;
    }

    return 0;
}