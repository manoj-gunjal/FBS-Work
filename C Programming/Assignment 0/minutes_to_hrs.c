// Write a c program to convert given minutes into hours and remaining minutes.

#include<stdio.h>
void main() {
    int min = 130;
    int hours = min/60;
    int rem = min%60;
    printf("%d min= %dhours %dmin",min,hours,rem);
}