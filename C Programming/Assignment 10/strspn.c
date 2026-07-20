#include<stdio.h>
#include<string.h>

void main()
{
    char str1[]="abcde123";
    char str2[]="abce";

    printf("%d",strspn(str1,str2));
}