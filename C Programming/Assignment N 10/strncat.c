#include<stdio.h>
#include<string.h>

void main()
{
    char str1[50],str2[50];

    scanf("%s",str1);
    scanf("%s",str2);

    strncat(str1,str2,3);

    printf("%s",str1);
}