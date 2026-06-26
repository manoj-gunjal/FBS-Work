#include<stdio.h>

int palindrome(int);

void main()
{
    int n;

    printf("Enter Number: ");
    scanf("%d",&n);

    palindrome(n);
}

int palindrome(int n)
{
    int temp=n,rev=0,rem;

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

    return 0;
}