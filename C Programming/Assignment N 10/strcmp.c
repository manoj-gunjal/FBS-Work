#include<stdio.h>
#include<string.h>

void main()
{
    char str1[50],str2[50];

    scanf("%s",str1);
    scanf("%s",str2);

    if(strcmp(str1,str2)==0)
        printf("Equal");
    else
        printf("Not Equal");
}