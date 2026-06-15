// Print armstrong numbers in the given range 1 to n.

#include<stdio.h>
void main() {
    int n = 1000;
    int temp;
    int digit;
    int sum;
    for(int i=1; i<=n; i++){
        temp = i;
        sum =0;
        while(temp>0) {
          digit = temp%10;
          sum = sum+(digit*digit*digit);
          temp = temp/10;
        }
        if(sum==i) {
            printf("%d\n",i);
        }
    }
}