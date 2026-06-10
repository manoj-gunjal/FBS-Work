// Write a c program to check 3 digit number is palindrome or not.

#include<stdio.h>
void main() {
    int num = 212;
    int original = num;
    int rev = (num%10*100+((num/10)%10)*10+(num/100));
    if(original==rev) {
        printf("%d is a palindrome",original);
    } else {
        printf("%d is not a palindrome", original);
    }
}