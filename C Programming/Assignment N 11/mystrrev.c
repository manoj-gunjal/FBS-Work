#include<stdio.h>

void mystrrev(char str[]);

void main()
{
    char str[50];

    printf("Enter String : ");
    scanf("%s",str);

    mystrrev(str);

    printf("Reverse String = %s",str);
}

void mystrrev(char str[])
{
    int i=0,j=0;
    char temp;

    while(str[i]!='\0')
        i++;

    i--;

    while(j<i)
    {
        temp=str[j];
        str[j]=str[i];
        str[i]=temp;

        j++;
        i--;
    }
}