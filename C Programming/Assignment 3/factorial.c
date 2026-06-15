// Find factorial of given number.
// Input: n = 5
// Output: 120

#include<stdio.h>
void main() {
    int n=5;
    int sum = 1;
    for(int i=1; i<=n; i++) {
        sum = sum * i;
    }
    printf("Factorial:-%d",sum);
}