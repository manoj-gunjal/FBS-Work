#include<stdio.h>
void palindrome();
void main() {
    palindrome();
}
void palindrome() {
    int num;
    int rev=0;
    int digit;
    printf("Enter your number:-");
    scanf("%d",&num);
    int original = num;
    while(num>0) {
        digit = num%10;
        rev = rev * 10 + digit;
        num = num/10;
    }
    if(original==rev) {
        printf("Number is palindrome");
    } else {
        printf("Number is not palindrome");
    }
}