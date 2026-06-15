// Check the given number is prime or not.
// Input: n = 7
// Output: Prime


#include<stdio.h>
void main() {
    int n = 7,num = 0;
    for (int i=1; i<n; i++) {
        if (n%i==0) {
            num++;
        }
    }
    if (num==1) {
        printf("prime");
    } else {
        printf("not prime");
    }
}