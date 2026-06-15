// Print strong numbers in the given range 1 to n.

#include<stdio.h>
void main() {
    int num = 1000;
    int digit;
    int sum;
    int fact;
    for(int i=1; i<=num; i++) {
        int temp=i;
        sum = 0;
        while(temp>0){ 
            fact = 1;
            digit = temp%10;
            for (int j=1; j<=digit; j++) {
                fact = fact*j;
            }
            temp = temp/10;
            sum = sum + fact;
        }
        if(sum==i) {
            printf("%d\n",i);
        }
    }
}