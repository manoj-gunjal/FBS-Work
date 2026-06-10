// Write a c program to check whether a given year is leap year.

#include<stdio.h>
void main() {
    int year=2026;
    if ((year%400==0)||(year%4==0)&&100!=0) {
        printf("%d is a leap year",year);
    } else {
        printf("%d is not leap year",year);
    }
}