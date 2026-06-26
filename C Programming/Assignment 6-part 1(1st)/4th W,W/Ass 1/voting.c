#include<stdio.h>
int voting();
void main()
{
    int age;

    printf("Enter Age: ");
    scanf("%d",&age);

    voting(age);
}

int voting(int age)
{
    if(age >= 18)
        printf("Eligible to Vote");
    else
        printf("Not Eligible to Vote");

    return 0;
}

