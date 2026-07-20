#include<stdio.h>

char *mystrrchr(char str[],char ch);

void main()
{
    char str[50],ch;

    scanf("%s",str);

    printf("Enter Character : ");
    scanf(" %c",&ch);

    if(mystrrchr(str,ch)!=NULL)
        printf("Character Found");
    else
        printf("Character Not Found");
}

char *mystrrchr(char str[],char ch)
{
    int i=0,pos=-1;

    while(str[i]!='\0')
    {
        if(str[i]==ch)
            pos=i;

        i++;
    }

    if(pos==-1)
        return NULL;

    return &str[pos];
}