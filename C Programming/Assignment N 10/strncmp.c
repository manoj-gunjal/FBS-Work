#include<stdio.h>
#include<string.h>

void main()
{
    char str1[50],str2[50];

    scanf("%s",str1);
    scanf("%s",str2);

    if(strncmp(str1,str2,3)==0)
        printf("First 3 Characters Same");
    else
        printf("Different");
}