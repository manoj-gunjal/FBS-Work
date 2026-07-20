#include<stdio.h>

char *mystrnstr(char str[],char sub[],int n);

void main()
{
    char str[100],sub[50];
    int n;

    scanf("%s",str);
    scanf("%s",sub);

    printf("Enter n : ");
    scanf("%d",&n);

    if(mystrnstr(str,sub,n)!=NULL)
        printf("Found");
    else
        printf("Not Found");
}

char *mystrnstr(char str[],char sub[],int n)
{
    int i,j;

    for(i=0;i<n && str[i]!='\0';i++)
    {
        for(j=0;sub[j]!='\0';j++)
        {
            if(i+j>=n || str[i+j]!=sub[j])
                break;
        }

        if(sub[j]=='\0')
            return &str[i];
    }

    return NULL;
}