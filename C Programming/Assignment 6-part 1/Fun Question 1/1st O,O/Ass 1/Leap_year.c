#include<stdio.h>
void leapyear();
void main() {
    leapyear();
}

void leapyear() {
    int year;
    printf("Enter a year:-");
    scanf("%d",&year);
    if(year%4==0) {
        printf("Leap year");
    } else {
        printf("Not leap year");
    }
}