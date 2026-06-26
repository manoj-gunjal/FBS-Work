#include<stdio.h>
void marksdis();
void main() {
    marksdis();
}

void marksdis() {
    int marks;
    printf("Enter your marks:-");
    scanf("%d",&marks);
    if(marks>=75) {
        printf("Distinction");
    } else if (marks>=65) {
        printf("First class");
    } else if (marks>=55) {
        printf("Second class");
    } else if (marks>=45) {
        printf("Pass");
    } else {
        printf("fail");
    }
}