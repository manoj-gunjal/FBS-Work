#include<stdio.h>
#include<string.h>

void main()
{
    char str1[50],str2[50];

    scanf("%s",str1);
    scanf("%s",str2);

    printf("%s",strstr(str1,str2));
}