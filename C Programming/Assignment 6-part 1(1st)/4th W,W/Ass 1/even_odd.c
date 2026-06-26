#include<stdio.h>
int evenOdd();
void main()
{
    int num;

    printf("Enter Number: ");
    scanf("%d",&num);

    evenOdd(num);
}

int evenOdd(int num)
{
    if(num % 2 == 0)
        printf("%d is Even", num);
    else
        printf("%d is Odd", num);

    return 0;
}

