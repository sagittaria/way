/*
Calculate the sum of two integers a and b, but you are not allowed to use the operator + and -.

Example:
Given a = 1 and b = 2, return 3.
*/
#include <stdio.h>
int getSum(int a, int b);

int main(){
    printf("%d+%d=%d\n", 7, 12, getSum(7,12));
    //getSum(2,5);
    return 0;
}

int getSum(int a, int b) {
    while(a != 0) {
        int tmp = (a & b) << 1;
        b = a ^ b;
        a = tmp;
    }
    return b;
}