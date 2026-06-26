#include<stdio.h>
int ageDescription();
void main()
{
    ageDescription();
}

int ageDescription()
{
    int age;

    printf("Enter Age: ");
    scanf("%d",&age);

    if(age < 12)
        printf("Child");
    else if(age <= 19)
        printf("Teenager");
    else if(age <= 59)
        printf("Adult");
    else
        printf("Senior");

    return 0;
}

