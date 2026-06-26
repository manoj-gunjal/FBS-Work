#include<stdio.h>
int isPalindrome();
void main() {
    int num = isPalindrome();
    if(num==1) {
        printf("palindrome");
    } else {
        printf("Not palindrome");
    }
    
}

int isPalindrome() {
    int num = 123;
    int original = num;
    int rev = (num%10*100+((num/10)%10)*10+(num/100));
    if(original==rev) {
       return 1;
    } else {
       return 0;
    }
}