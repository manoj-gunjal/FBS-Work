/* Print a Floyd’s triangle pattern
Input: n = 4
Output:
1
2 3
4 5 6
7 8 9 10 */

#include<stdio.h>
void main() {
    int num = 5;
    int n = 1;
    for(int i=1; i<=num; i++) {
        for(int j=1; j<=i; j++) {
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }
}