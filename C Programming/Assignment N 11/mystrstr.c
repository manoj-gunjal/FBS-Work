#include<stdio.h>

char *mystrstr(char str[],char sub[]);

void main()
{
    char str[100],sub[50];

    printf("Enter Main String : ");
    scanf("%s",str);

    printf("Enter Sub String : ");
    scanf("%s",sub);

    if(mystrstr(str,sub)!=NULL)
        printf("Substring Found");
    else
        printf("Substring Not Found");
}

char *mystrstr(char str[],char sub[])
{
    int i,j;

    for(i=0;str[i]!='\0';i++)
    {
        for(j=0;sub[j]!='\0';j++)
        {
            if(str[i+j]!=sub[j])
                break;
        }

        if(sub[j]=='\0')
            return &str[i];
    }

    return NULL;
}