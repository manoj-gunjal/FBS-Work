// Check the given number is Palindrome number or not.
// Input: n = 121
// Output: Palindrome

#include<stdio.h>
void main() {
    int num = 121;
    if (num%10==num/100) {
        printf("palindrome");
    } else {
        printf("Not palindrome");
    }
}