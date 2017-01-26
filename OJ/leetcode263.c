/*
Write a program to check whether a given number is an ugly number.

Ugly numbers are positive numbers whose prime factors only include 2, 3, 5. For example, 6, 8 are ugly while 14 is not ugly since it includes another prime factor 7.

Note that 1 is typically treated as an ugly number.

当成多个因式之积，除掉全部的2、3、5之后如果得1说明是丑数
*/

#include <stdio.h>

bool isUgly(int num) {
  if(num<=0) return false;
  if(num==1) return true;
  while(num%2==0) num/=2;
  while(num%3==0) num/=3;
  while(num%5==0) num/=5;
  return num==1;
}

int main(){
  if(isUgly(4))
    printf("yes\n");
  else
    printf("no\n");
  return 0;
}