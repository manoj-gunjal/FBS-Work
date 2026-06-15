// Write a menu driven program to take a number for user and perform operations as follows.
// Press 1.To check number is even or odd.
// 2.To check number is prime or not.
// 3.To check number is pallindrome or not.
// 4.To check number is positive, negative or zero.
// 5.To reverse a number.
// 6.To find sum of digits.

#include<stdio.h>
void main() {
    int num;
    int choice;
    int sum=0;
    int temp;
    int digit;
    int rev=0;
    printf("Enter your number:-");
    scanf("%d",&num);
    printf("1.To check number is even or odd.\n");
    printf("2.To check number is prime or not.\n");
    printf("3.To check number is pallindrome or not.\n");
    printf("4.To check number is positive, negative or zero.\n");
    printf("5.To reverse a number.\n");
    printf("6.To find sum of digits.\n");
    printf("Enter your choice....");
    scanf("%d",&choice);

    switch(choice) {
        case 1:
        if(num%2==0) {
            printf("Number is even");
        } else {
            printf("Number is odd");
        }
        break;
        case 2:
        for(int i=1; i<num; i++){
            if(num%i==0) {
                sum++;
            }
        }
        if(sum==1){
            printf("Prime number");
        } else {
            printf("Not prime number");
        }   
        break;
        case 3:
        if(num%10==num/100){
            printf("Number is palindrome");
        } else {
            printf("Number is not palindrome");
        }
        break;
        case 4:
        if(num>0) {
            printf("Number is positive");
        } else if (num<0) {
            printf("Number is negative");
        } else {
            printf("Number is zero");
        }
        break;
        case 5:
        temp = num;
        while(temp>0){
            digit = temp%10;
            rev = rev*10+digit;
            temp = temp/10;
        }
        printf("Reverse:- %d",rev);
        break;
        case 6:
        temp = num;
        while(temp>0){
            digit = temp%10;
            sum = sum + digit;
            temp = temp/10;
        }
        printf("Sum of digit:-%d",sum);
        break;
        default:
        printf("Invalid choice....");

    }

}