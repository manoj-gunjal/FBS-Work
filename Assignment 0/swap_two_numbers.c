// Write a c program to swap two numbers using a temperature third variable.

#include<stdio.h>
void main() {
    int a=10;
    int b=20;
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("a=%d\nb=%d",a,b);
    
}