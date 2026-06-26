#include<stdio.h>
void ageDescription();
void main()
{
    int age;

    printf("Enter Age: ");
    scanf("%d",&age);

    ageDescription(age);
}

void ageDescription(int age)
{
    if(age < 12)
        printf("Child");
    else if(age <= 19)
        printf("Teenager");
    else if(age <= 59)
        printf("Adult");
    else
        printf("Senior");
}

