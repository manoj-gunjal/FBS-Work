#include<stdio.h>
void arithmetic();
void main()
{
    int a,b;

    printf("Enter A: ");
    scanf("%d",&a);

    printf("Enter B: ");
    scanf("%d",&b);

    arithmetic(a,b);
}

void arithmetic(int a, int b)
{
    printf("Addition = %d\n",a+b);
    printf("Subtraction = %d\n",a-b);
    printf("Multiplication = %d\n",a*b);
    printf("Division = %d\n",a/b);
    printf("Modulus = %d\n",a%b);
}

