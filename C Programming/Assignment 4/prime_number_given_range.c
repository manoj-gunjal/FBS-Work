// Print prime numbers in the given range 1 to n.

#include<stdio.h>
void main() {
    int num = 1000;
    for(int i=1; i<=num; i++) {
        int count = 0;
        for(int j=1; j<i; j++){
            if(i%j==0) {
                count++;
            }
        }  
        if(count==1) {
            printf("%d\n", i);
        }  
    }
}