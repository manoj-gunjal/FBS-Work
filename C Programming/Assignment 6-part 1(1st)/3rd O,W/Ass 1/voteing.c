#include<stdio.h>
void voting();
void main()
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    voting(age);
}

void voting(int age)
{
    if(age >= 18)
        printf("Person is eligible to vote.");
    else
        printf("Person is not eligible to vote.");
}

