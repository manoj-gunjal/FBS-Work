/* Print an inverted right-angled triangle pattern
Input: n = 5
Output:
*****
****
***
**
*  */

#include<stdio.h>
void main() {
    int num = 5;
    for(int i=1; i<=num; i++) {
        for(int j=i; j<=num; j++) {
            printf("* ");
        }
        printf("\n");
    }
}