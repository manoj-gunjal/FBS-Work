// Check the given number is Armstrong number or not..
// Input: n = 153
// Output: Armstrong

#include<stdio.h>
void main() {
    int num = 153;
    int temp = num;
    int digit;
    int sum = 0;
    while(temp>0) {
        digit = temp%10;
        sum = sum + (digit*digit*digit);
        temp = temp/10;

    }
    if (num==sum){
        printf("armstrong");
    } else {
        printf("not amstrong");
    }
}