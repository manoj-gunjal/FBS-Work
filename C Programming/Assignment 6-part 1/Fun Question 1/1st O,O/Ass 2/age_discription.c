#include<stdio.h>
void agefind();
void main() {
    agefind();
}

void agefind() {
    int age;

    printf("Enter Age: ");
    scanf("%d", &age);

    if(age < 12)
        printf("Child");

    else if(age <= 19)
        printf("Teenager");

    else if(age <= 59)
        printf("Adult");

    else
        printf("Senior");
}