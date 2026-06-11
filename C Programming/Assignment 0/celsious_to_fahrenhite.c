// Write a c program to convert temperature from celsious to fahrenheit using the formula F=(c*9/5)+32.

#include<stdio.h>
void main() {
    float c = 25;
    float F=(c*9/5)+32;
    printf("Fahrenheit=%.2f", F);
}