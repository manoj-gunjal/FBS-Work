#include<stdio.h>

void palindrome();

void main()
{
    palindrome();
}

void palindrome()
{
    int n,temp,rev=0,rem;

    printf("Enter Number: ");
    scanf("%d",&n);

    temp=n;

    while(temp!=0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }

    if(rev==n)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}