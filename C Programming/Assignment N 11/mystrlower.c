#include<stdio.h>

void mystrlower(char str[]);

void main()
{
    char str[50];

    printf("Enter String : ");
    scanf("%s",str);

    mystrlower(str);

    printf("Lower String = %s",str);
}

void mystrlower(char str[])
{
    int i=0;

    while(str[i]!='\0')
    {
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;

        i++;
    }
}