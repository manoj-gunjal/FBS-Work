#include<stdio.h>

void mystrupper(char str[]);

void main()
{
    char str[50];

    printf("Enter String : ");
    scanf("%s",str);

    mystrupper(str);

    printf("Upper String = %s",str);
}

void mystrupper(char str[])
{
    int i=0;

    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;

        i++;
    }
}