// Find Sum of first and last digit of given number.
// Input: n = 12345
// Output: 6 (1 + 5)

#include<stdio.h>
void main() {
    int num = 123;
    int last = num % 10;
    int temp = num;
    int sum = 0;
    int first = 0;
    while(temp>=10) {
        temp = temp / 10;
    }
    first = temp;
    sum = first + last;
    printf("Sum:-%d",sum);

}