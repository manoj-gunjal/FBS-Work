#include<stdio.h>
void palindrome();
void main()
{
    int num;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    palindrome(num);
}

void palindrome(int num)
{
    int original = num;
    int rev;

    rev = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);

    if(original == rev)
        printf("%d is a palindrome", original);
    else
        printf("%d is not a palindrome", original);
}

