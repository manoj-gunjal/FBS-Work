#include<stdio.h>
int palindrome();
void main()
{
    int num;

    printf("Enter 3 Digit Number: ");
    scanf("%d",&num);

    palindrome(num);
}

int palindrome(int num)
{
    int original = num;
    int rev;

    rev = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);

    if(original == rev)
        printf("%d is Palindrome", original);
    else
        printf("%d is Not Palindrome", original);

    return 0;
}

