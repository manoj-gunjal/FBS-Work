#include<stdio.h>
#include<string.h>

void main()
{
    char str1[50],str2[50];

    printf("Enter String: ");
    scanf("%s",str2);

    strcpy(str1,str2);

    printf("Copied String = %s",str1);
}