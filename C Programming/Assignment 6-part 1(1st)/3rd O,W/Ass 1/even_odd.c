#include<stdio.h>
void evenOdd();
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    evenOdd(num);
}

void evenOdd(int num)
{
    if(num % 2 == 0)
        printf("%d is even", num);
    else
        printf("%d is odd", num);
}

