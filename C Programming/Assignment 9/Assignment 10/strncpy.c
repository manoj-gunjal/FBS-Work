#include<stdio.h>
#include<string.h>

void main()
{
    char str1[50],str2[50];

    printf("Enter String: ");
    scanf("%s",str2);

    strncpy(str1,str2,4);

    str1[4]='\0';

    printf("%s",str1);
}