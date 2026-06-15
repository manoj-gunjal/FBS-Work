// Check the given number is Strong number or not.
// Input: n = 145
// Output: Strong

#include<stdio.h>
void main() {
    int n = 145;
    int temp = n;
    int digit;
    int sum = 0;
    int fact;
    while(temp>0) {
        digit = temp%10;
        fact=1;
        for(int i=1; i<=digit; i++){
            fact = fact * i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if (n==sum) {
        printf("Strong");
    } else {
        printf("Not strong");
    }
}