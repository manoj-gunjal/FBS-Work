// Check the given number is Perfect number or not.
// Input: n = 28
// Output: Perfect

#include<stdio.h>
void main() {
    int n=6;
    int sum = 0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum = sum+i;
        }
    }
    if(sum==n) {
        printf("perfect");
    } else {
        printf("Not perfect");
    }
}